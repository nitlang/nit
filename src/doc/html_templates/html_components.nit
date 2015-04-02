# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# HTML templates used by Nitdoc to generate API documentation
# Pages are assembled using `Template`
module html_components

import doc_base
import template
import json::static

#########################
# general layout elements
#########################

# A sidebar template
class TplSidebar
	super Template

	# Sidebar contains sidebar element templates called boxes
	var boxes = new Array[TplSidebarElt]

	# Sort boxes by order priority
	private fun order_boxes do
		var sorter = new OrderComparator
		sorter.sort(boxes)
	end

	redef fun rendering do
		if boxes.is_empty then return
		order_boxes
		addn "<div id='sidebar'>"
		for box in boxes do add box
		addn "</div>"
	end
end

# Comparator used to sort boxes by order
private class OrderComparator
	super Comparator

	redef type COMPARED: TplSidebarElt

	redef fun compare(a, b) do
		if a.order < b.order then return -1
		if a.order > b.order then return 1
		return 0
	end
end

# Something that can be put in the sidebar
class TplSidebarElt
	super Template

	# Order of the box in the sidebar
	var order: Int = 1

	init with_order(order: Int) do self.order = order
end

# Agenericbox that can be added to sidebar
class TplSideBox
	super TplSidebarElt

	# Title of the box to display
	# Title is also a placeholder for the collapse link
	var title: String

	# Box HTML id
	# equals to `title.to_cmangle` by default
	# Used for collapsing
	var id: String is noinit

	# Content to display in the box
	# box will not be rendered if the content is null
	var content: nullable Writable = null is writable

	# Is the box opened by default
	# otherwise, the user will have to clic on the title to display the content
	var is_open = false is writable

	init do
		self.id = title.to_cmangle
	end

	init with_content(title: String, content: Writable) do
		init(title)
		self.content = content
	end

	redef fun rendering do
		if content == null then return
		var open = ""
		if is_open then open = "in"
		addn "<div class='panel'>"
		addn " <div class='panel-heading'>"
		add "  <a data-toggle='collapse' data-parent='#sidebar' data-target='#box_{id}' href='#'>"
		add title
		addn "  </a>"
		addn " </div>"
		addn " <div id='box_{id}' class='panel-body collapse {open}'>"
		add content.as(not null)
		addn " </div>"
		addn "</div>"
	end
end

# Something that can go on a summary template
class TplSummaryElt
	super Template

	# Add an element to the summary
	fun add_child(child: TplSummaryElt) is abstract
end

# A summary that can go on the sidebar
# If the page contains a sidebar, the summary is automatically placed
# on top of the sidebarauto-generated
# summary contains anchors to all sections displayed in the page
class TplSummary
	super TplSidebarElt
	super TplSummaryElt

	# Summary elements to display
	var children = new Array[TplSummaryElt]

	redef fun add_child(child) do children.add child

	redef fun rendering do
		if children.is_empty then return
		addn "<div class='panel'>"
		addn " <div class='panel-heading'>"
		add "  <a data-toggle='collapse' data-parent='#sidebar' data-target='#box-sum' href='#'>"
		add "Summary"
		addn "  </a>"
		addn " </div>"
		addn " <div id='box-sum' class='summary collapse in'>"
		addn " <ul class='nav'>"
		for entry in children do add entry
		addn " </ul>"
		addn " </div>"
		addn "</div>"
	end
end

# A summary entry
class TplSummaryEntry
	super TplSummaryElt

	# Text to display
	var text: Writable

	# Children of this entry
	# Will be displayed as a tree
	var children = new Array[TplSummaryElt]

	redef fun add_child(child) do children.add child

	redef fun rendering do
		add "<li>"
		add text
		if not children.is_empty then
			addn "\n<ul class='nav'>"
			for entry in children do add entry
			addn "</ul>"
		end
		addn  "</li>"
	end
end

# Something that can go in a section
# Sections are automatically collected to populate the menu
class TplSectionElt
	super Template

	# HTML anchor id
	var id: String

	# Title to display if any
	# if both `title` and `summary_title` are null then
	# the section will not appear in the summary
	var title: nullable Writable = null is writable

	# Subtitle to display if any
	var subtitle: nullable Writable = null is writable

	# Title that appear in the summary
	# if null use `title` instead
	var summary_title: nullable String = null is writable

	# CSS classes to apply on the section element
	var css_classes = new Array[String]

	# CSS classes to apply on the title heading element
	var title_classes = new Array[String]

	# Parent article/section if any
	var parent: nullable TplSectionElt = null

	init with_title(id: String, title: Writable) do
		init(id)
		self.title = title
	end

	# Level <hX> for HTML heading
	protected fun hlvl: Int do
		if parent == null then return 1
		return parent.hlvl + 1
	end

	# Elements contained by this section
	var children = new Array[TplSectionElt]

	# Add an element in this section
	fun add_child(child: TplSectionElt) do
		child.parent = self
		children.add child
	end

	# Is the section empty (no content at all)
	fun is_empty: Bool do return children.is_empty

	# Render this section in the summary
	fun render_summary(parent: TplSummaryElt) do
		if is_empty then return
		var title = summary_title
		if title == null and self.title != null then title = self.title.write_to_string
		if title == null then return
		var lnk = new TplLink("#{id}", title)
		var entry = new TplSummaryEntry(lnk)
		for child in children do
			child.render_summary(entry)
		end
		parent.add_child entry
	end
end

# A HTML <section> element
class TplSection
	super TplSectionElt

	redef fun rendering do
		addn "<section id='{id}' class='{css_classes.join(" ")}'>"
		if title != null then
			var lvl = hlvl
			if lvl == 2 then title_classes.add "well well-sm"
			addn "<h{lvl} class='{title_classes.join(" ")}'>"
			addn title.as(not null)
			addn "</h{lvl}>"
		end
		if subtitle != null then
			addn "<div class='info subtitle'>"
			addn subtitle.as(not null)
			addn "</div>"
		end
		for child in children do
			add child
		end
		addn "</section>"
	end
end

# A page article that can go in a section
class TplArticle
	super TplSectionElt

	# Content for this article
	var content: nullable Writable = null is writable
	var source_link: nullable Writable = null is writable

	init with_content(id: String, title: Writable, content: Writable) do
		with_title(id, title)
		self.content = content
	end

	redef fun render_summary(parent) do
		if is_empty then return
		var title = summary_title
		if title == null and self.title != null then title = self.title.write_to_string
		if title == null then return
		var lnk = new TplLink("#{id}", title)
		parent.add_child new TplSummaryEntry(lnk)
	end

	redef fun rendering do
		if is_empty then return
		addn "<article id='{id}' class='{css_classes.join(" ")}'>"
		if source_link != null then
			add "<div class='source-link'>"
			add source_link.as(not null)
			addn "</div>"
		end
		if title != null then
			var lvl = hlvl
			if lvl == 2 then title_classes.add "well well-sm"
			add "<h{lvl} class='{title_classes.join(" ")}'>"
			add title.as(not null)
			addn "</h{lvl}>"
		end
		if subtitle != null then
			add "<div class='info subtitle'>"
			add subtitle.as(not null)
			addn "</div>"
		end
		if content != null then
			add content.as(not null)
		end
		for child in children do
			add child
		end
		addn """</article>"""
	end

	redef fun is_empty: Bool do
		return title == null and subtitle == null and content == null and children.is_empty
	end
end

# A module / class / prop definition
class TplDefinition
	super Template

	# Comment to display
	var comment: nullable Writable = null is writable

	# Namespace for this definition
	var namespace: nullable Writable = null is writable

	# Location link to display
	var location: nullable Writable = null is writable

	private fun render_info do
		addn "<div class='info text-right'>"
		if namespace != null then
			if comment == null then
				add "<span class=\"noComment\">no comment for </span>"
			end
			add namespace.as(not null)
		end
		if location != null then
			add " "
			add location.as(not null)
		end
		addn "</div>"
	end

	private fun render_comment do
		if comment != null then add comment.as(not null)
	end

	redef fun rendering do
		addn "<div class='definition'>"
		render_comment
		render_info
		addn "</div>"
	end
end

# Class definition
class TplClassDefinition
	super TplDefinition

	var intros = new Array[TplListElt]
	var redefs = new Array[TplListElt]

	redef fun rendering do
		addn "<div class='definition'>"
		render_comment
		render_info
		render_list("Introduces", intros)
		render_list("Redefines", redefs)
		addn "</div>"
	end

	private fun render_list(name: String, elts: Array[TplListElt]) do
		if elts.is_empty then return
		addn "<h5>{name.html_escape}</h5>"
		addn "<ul class='list-unstyled list-definition'>"
		for elt in elts do add elt
		addn "</ul>"
	end
end

# Layout for Search page
class TplSearchPage
	super TplSectionElt

	var modules = new Array[Writable]
	var classes = new Array[Writable]
	var props = new Array[Writable]

	redef fun rendering do
		var title = self.title
		if title != null then addn "<h1>{title.to_s.html_escape}</h1>"
		addn "<div class='container-fluid'>"
		addn " <div class='row'>"
		if not modules.is_empty then
			addn "<div class='col-xs-4'>"
			addn "<h3>Modules</h3>"
			addn "<ul>"
			for m in modules do
				add "<li>"
				add m
				addn "</li>"
			end
			addn "</ul>"
			addn "</div>"
		end
		if not classes.is_empty then
			addn "<div class='col-xs-4'>"
			addn "<h3>Classes</h3>"
			addn "<ul>"
			for c in classes do
				add "<li>"
				add c
				addn "</li>"
			end
			addn "</ul>"
			addn "</div>"
		end
		if not props.is_empty then
			addn "<div class='col-xs-4'>"
			addn "<h3>Properties</h3>"
			addn "<ul>"
			for p in props do
				add "<li>"
				add p
				addn "</li>"
			end
			addn "</ul>"
			addn "</div>"
		end
		addn " </div>"
		addn "</div>"
	end
end

#####################
# Basiv HTML elements
#####################

# A html link <a>
class TplLink
	super Template

	# Link href
	var href: String is writable

	# The raw HTML content to display in the link
	var text: Writable is writable

	# The unescaped optional title.
	var title: nullable String = null is writable

	init with_title(href, text, title: String) do
		init(href, text)
		self.title = title
	end

	redef fun rendering do
		add "<a href=\""
		add href.html_escape
		add "\""
		if title != null then
			add " title=\""
			add title.as(not null).html_escape
			add "\""
		end
		add ">"
		add text
		add "</a>"
	end
end

# A <ul> list
class TplList
	super TplListElt

	# Elements contained in this list
	# can be <li> or <ul> elements
	var elts = new Array[TplListElt]

	# CSS classes of the <ul> element
	var css_classes = new Array[String]

	# Add content wrapped in a <li> element
	fun add_li(item: TplListItem) do elts.add item

	init with_classes(classes: Array[String]) do self.css_classes = classes

	fun is_empty: Bool do return elts.is_empty

	redef fun rendering do
		if elts.is_empty then return
		addn "<ul class='{css_classes.join(" ")}'>"
		for elt in elts do add elt
		addn "</ul>"
	end
end

# Something that can be added to a TplList
class TplListElt
	super Template
end

# A list item <li>
class TplListItem
	super TplListElt

	# Content of the list item
	var content = new Template

	# CSS classes of the <li> element
	var css_classes = new Array[String]

	init with_content(content: Writable) do append(content)

	init with_classes(content: Writable, classes: Array[String]) do
		with_content(content)
		css_classes = classes
	end

	# Append `content` to the item
	# similar to `self.content.add`
	fun append(content: Writable) do self.content.add content

	redef fun rendering do
		add "<li class='{css_classes.join(" ")}'>"
		add content
		addn "</li>"
	end
end

# A Bootstrap tab component that contains `TplTabPanel`.
class TplTab
	super Template

	# Panels contained in the tab.
	var panels = new Array[TplTabPanel]

	# Add a new panel.
	fun add_panel(panel: TplTabPanel) do panels.add panel

	# CSS classes of the tab component.
	var css_classes = new Array[String]

	redef fun rendering do
		addn "<div class='tab-content'>"
		for panel in panels do add panel
		addn "</div>"
	end
end

# A panel that goes in a `TplTab`.
class TplTabPanel
	super Template

	# CSS classes of the pane element.
	var css_classes = new Array[String]

	# The panel id.
	#
	# Used to show/hide panel.
	var id: String is noinit

	# The panel name.
	#
	# Displayed in the tab header or in the pointing link.
	var name: Writable

	# Is the panel visible by default?
	var is_active = false is writable

	# Body of the panel
	var content: nullable Writable = null is writable

	# Get a link pointing to this panel.
	fun tpl_link_to: Writable do
		var lnk = new Template
		lnk.add "<a data-target='#{id}' data-toggle='pill'>"
		lnk.add name
		lnk.add "</a>"
		return lnk
	end

	redef fun rendering do
		add "<div class='tab-pane {css_classes.join(" ")}"
		if is_active then add "active"
		addn "' id='{id}'>"
		if content != null then add content.as(not null)
		addn "</div>"
	end
end

# A label with a text content
class TplLabel
	super Template

	# Content of the label if any
	var content: nullable Writable = null is writable

	# CSS classes of the <span> element
	var css_classes = new Array[String]

	init with_content(content: Writable) do self.content = content
	init with_classes(classes: Array[String]) do self.css_classes = classes

	redef fun rendering do
		add "<span class='label {css_classes.join(" ")}'>"
		if content != null then add content.as(not null)
		add "</span>"
	end
end

# A label with an icon
class TplIcon
	super TplLabel

	# Bootsrap icon name
	# see: http://getbootstrap.com/components/#glyphicons
	var icon: String

	init with_icon(icon: String) do self.icon = icon

	redef fun rendering do
		add "<span class='glyphicon glyphicon-{icon} {css_classes.join(" ")}'>"
		if content != null then add content.as(not null)
		add "</span>"
	end
end

# A HTML tag attribute
#  `<tag attr="value">`
#
# ~~~nit
# var attr: TagAttribute
#
# attr = new TagAttribute("foo", null)
# assert attr.write_to_string == " foo=\"\""
#
# attr = new TagAttribute("foo", "bar<>")
# assert attr.write_to_string == " foo=\"bar&lt;&gt;\""
# ~~~
class TagAttribute
	super Template

	var name: String
	var value: nullable String

	redef fun rendering do
		var value = self.value
		if value == null then
			# SEE: http://www.w3.org/TR/html5/infrastructure.html#boolean-attributes
			add " {name.html_escape}=\"\""
		else
			add " {name.html_escape}=\"{value.html_escape}\""
		end
	end
end

# Javacript template
class TplScript
	super Template

	var attrs = new Array[TagAttribute]
	var content: nullable Writable = null is writable

	init do
		attrs.add(new TagAttribute("type", "text/javascript"))
	end

	protected fun render_content do
		if content != null then add content.as(not null)
	end

	redef fun rendering do
		add "<script"
		for attr in attrs do add attr
		addn ">"
		render_content
		addn "</script>"
	end
end

# JS script for Piwik Tracker
class TplPiwikScript
	super TplScript

	var tracker_url: String
	var site_id: String

	redef fun render_content do
		var site_id = self.site_id.to_json
		var tracker_url = self.tracker_url.trim
		if tracker_url.chars.last != '/' then tracker_url += "/"
		tracker_url = "://{tracker_url}".to_json

		addn "<!-- Piwik -->"
		addn "var _paq = _paq || [];"
		addn " _paq.push([\"trackPageView\"]);"
		addn " _paq.push([\"enableLinkTracking\"]);"
		addn "(function() \{"
		addn " var u=((\"https:\" == document.location.protocol) ? \"https\" : \"http\") + {tracker_url};"
		addn " _paq.push([\"setTrackerUrl\", u+\"piwik.php\"]);"
		addn " _paq.push([\"setSiteId\", {site_id}]);"
		addn " var d=document, g=d.createElement(\"script\"), s=d.getElementsByTagName(\"script\")[0]; g.type=\"text/javascript\";"
		addn " g.defer=true; g.async=true; g.src=u+\"piwik.js\"; s.parentNode.insertBefore(g,s);"
		addn "\})();"
	end
end
