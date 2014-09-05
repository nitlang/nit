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
module doc_templates

import template

# A documentation page
class TplPage
	super Template

	# Page title in HTML header
	var title: String is writable, noinit

	# Page url
	var url: String is writable, noinit

	# Directory where css, js and other assets can be found
	var shareurl: String is writable, noinit

	# Attributes of the body tag element
	var body_attrs = new Array[TagAttribute]

	# Top menu template if any
	var topmenu: TplTopMenu is writable, noinit

	# Sidebar template if any
	var sidebar: nullable TplSidebar = null is writable

	# Content of the page in form a TplSection
	var sections = new Array[TplSection]

	# Footer content if any
	var footer: nullable Streamable = null is writable

	# JS scripts to append at the end of the body
	var scripts = new Array[TplScript]

	init do end

	# Add a section to this page
	fun add_section(section: TplSection) do
		sections.add section
	end

	# Render the html header
	private fun render_head do
		add "<!DOCTYPE html>"
		add "<head>"
		add " <meta charset='utf-8'/>"
		add " <!--link rel='stylesheet' href='{shareurl}/css/Nitdoc.UI.css' type='text/css'/-->"
		add " <link rel='stylesheet' href='{shareurl}/vendors/bootstrap/css/bootstrap.min.css'/>"
		add " <link rel='stylesheet' href='{shareurl}/css/nitdoc.bootstrap.css'/>"
		add " <link rel='stylesheet' href='{shareurl}/css/nitdoc.css'/>"
		add " <link rel='stylesheet' href='{shareurl}/css/Nitdoc.QuickSearch.css'/>"
		add " <link rel='stylesheet' href='{shareurl}/css/Nitdoc.ModalBox.css'/>"
		add " <link rel='stylesheet' href='{shareurl}/css/Nitdoc.GitHub.css'/>"
		add " <title>{title}</title>"
		add "</head>"
		add "<body"
		for attr in body_attrs do add attr
		add ">"
	end

	# Render the topmenu template
	private fun render_topmenu do
		add " <div class='row'>"
		add topmenu
		add " </div>"
	end

	# Render the sidebar
	# Sidebar is automatically populated with a summary of all sections
	fun render_sidebar do
		if sidebar == null then return
		var summary = new TplSummary.with_order(0)
		for section in sections do
			section.render_summary summary
		end
		sidebar.boxes.add summary
		add sidebar.as(not null)
	end
	# Render the footer and content
	private fun render_content do
		for section in sections do add section
		if footer != null then
			add "<div class='well footer'>"
			add footer.as(not null)
			add "</div>"
		end
	end

	# Render JS scripts
	private fun render_footer do
		add "<script src='{shareurl}/vendors/jquery/jquery-1.11.1.min.js'></script>"
		add "<script src='{shareurl}/vendors/jquery/jquery-ui-1.10.4.custom.min.js'></script>"
		add "<script src='{shareurl}/vendors/bootstrap/js/bootstrap.min.js'></script>"
		add "<script data-main='{shareurl}/js/nitdoc' src='{shareurl}/js/lib/require.js'</script>"
		for script in scripts do add script
		add """<script>
			$(function () {
				$("[data-toggle='tooltip']").tooltip();
				$("[data-toggle='popover']").popover();
			});
		</script>"""
		add "</body>"
		add "</html>"
	end

	# Render the whole page
	redef fun rendering do
		render_head
		add "<div class='container-fluid'>"
		render_topmenu
		add " <div class='row' id='content'>"
		if sidebar != null then
			add "<div class='col col-xs-3 col-lg-2'>"
			render_sidebar
			add "</div>"
			add "<div class='col col-xs-9 col-lg-10' data-spy='scroll' data-target='.summary'>"
			render_content
			add "</div>"
		else
			add "<div class='col col-xs-12'>"
			render_content
			add "</div>"
		end
		add " </div>"
		add "</div>"
		render_footer
	end
end

#########################
# general layout elements
#########################

# Top menu bar template
class TplTopMenu
	super Template

	# Brand link to display in first position of the top menu
	private var brand: nullable Streamable = null is writable
	# Elements of the topmenu
	private var elts = new Array[Streamable]

	# The page url where the top menu is displayed.
	#
	# Used to select the active link.
	private var current_url: String

	init(current_url: String) do
		self.current_url = current_url
	end

	# Add a new link to the menu.
	fun add_link(content: TplLink) do
		var is_active = content.href == current_url
		add_item(content, is_active)
	end

	# Add a content between `<li>` tags
	fun add_item(content: Streamable, is_active: Bool) do
		var tpl = new Template
		tpl.add "<li"
		if is_active then
			tpl.add " class='active'"
		end
		tpl.add ">"
		tpl.add content
		tpl.add "</li>"
		add_raw(tpl)
	end

	# Add a raw content to the menu
	fun add_raw(content: Streamable) do
		elts.add content
	end

	redef fun rendering do
		if brand == null and elts.is_empty then return
		add "<nav id='topmenu' class='navbar navbar-default navbar-fixed-top' role='navigation'>"
		add " <div class='container-fluid'>"
		add "  <div class='navbar-header'>"
		add "   <button type='button' class='navbar-toggle' "
		add "       data-toggle='collapse' data-target='#topmenu-collapse'>"
		add "	 <span class='sr-only'>Toggle menu</span>"
		add "    <span class='icon-bar'></span>"
		add "    <span class='icon-bar'></span>"
		add "    <span class='icon-bar'></span>"
		add "   </button>"
		if brand != null then add brand.as(not null)
		add "  </div>"
		add "  <div class='collapse navbar-collapse' id='topmenu-collapse'>"
		if not elts.is_empty then
			add "<ul class='nav navbar-nav'>"
			for elt in elts do add elt
			add "</ul>"
		end
		add "  </div>"
		add " </div>"
		add "</nav>"
	end
end

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
		add "<div id='sidebar'>"
		for box in boxes do add box
		add "</div>"
	end
end

# Comparator used to sort boxes by order
private class OrderComparator
	super Comparator[TplSidebarElt]

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
	var id: String

	# Content to display in the box
	# box will not be rendered if the content is null
	var content: nullable Streamable writable

	# Is the box opened by default
	# otherwise, the user will have to clic on the title to display the content
	var is_open writable = false

	init(title: String) do
		self.title = title
		self.id = title.to_cmangle
	end

	init with_content(title: String, content: Streamable) do
		init(title)
		self.content = content
	end

	redef fun rendering do
		if content == null then return
		var open = ""
		if is_open then open = "in"
		add "<div class='panel'>"
		add " <div class='panel-heading'>"
		add "  <a data-toggle='collapse' data-parent='#sidebar' data-target='#box_{id}' href='#'>"
		add title
		add "  </a>"
		add " </div>"
		add " <div id='box_{id}' class='panel-body collapse {open}'>"
		add content.as(not null)
		add " </div>"
		add "</div>"
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
		add "<div class='panel'>"
		add " <div class='panel-heading'>"
		add "  <a data-toggle='collapse' data-parent='#sidebar' data-target='#box-sum' href='#'>"
		add "Summary"
		add "  </a>"
		add " </div>"
		add " <div id='box-sum' class='summary collapse in'>"
		add " <ul class='nav'>"
		for entry in children do add entry
		add " </ul>"
		add " </div>"
		add "</div>"
	end
end

# A summary entry
class TplSummaryEntry
	super TplSummaryElt

	# Text to display
	var text: Streamable

	# Children of this entry
	# Will be displayed as a tree
	var children = new Array[TplSummaryElt]

	init(text: Streamable) do self.text = text

	redef fun add_child(child) do children.add child

	redef fun rendering do
		add "<li>"
		add text
		if not children.is_empty then
			add "<ul class='nav'>"
			for entry in children do add entry
			add "</ul>"
		end
		add "</li>"
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
	var title: nullable Streamable writable

	# Subtitle to display if any
	var subtitle: nullable Streamable writable

	# Title that appear in the summary
	# if null use `title` instead
	var summary_title: nullable String writable

	# CSS classes to apply on the section element
	var css_classes = new Array[String]

	# CSS classes to apply on the title heading element
	var title_classes = new Array[String]

	# Parent article/section if any
	var parent: nullable TplSectionElt

	init(id: String) do self.id = id

	init with_title(id: String, title: Streamable) do
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
		add "<section id='{id}' class='{css_classes.join(" ")}'>"
		if title != null then
			var lvl = hlvl
			if lvl == 2 then title_classes.add "well well-sm"
			add "<h{lvl} class='{title_classes.join(" ")}'>"
			add title.as(not null)
			add "</h{lvl}>"
		end
		if subtitle != null then
			add "<div class='info subtitle'>"
			add subtitle.as(not null)
			add "</div>"
		end
		for child in children do
			add child
		end
		add "</section>"
	end
end

# A page article that can go in a section
class TplArticle
	super TplSectionElt

	# Content for this article
	var content: nullable Streamable writable = null
	var source_link: nullable Streamable writable = null

	init with_content(id: String, title: Streamable, content: Streamable) do
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
		add "<article id='{id}' class='{css_classes.join(" ")}'>"
		if source_link != null then
			add "<div class='source-link'>"
			add source_link.as(not null)
			add "</div>"
		end
		if title != null then
			var lvl = hlvl
			if lvl == 2 then title_classes.add "well well-sm"
			add "<h{lvl} class='{title_classes.join(" ")}'>"
			add title.as(not null)
			add "</h{lvl}>"
		end
		if subtitle != null then
			add "<div class='info subtitle'>"
			add subtitle.as(not null)
			add "</div>"
		end
		if content != null then
			add content.as(not null)
		end
		for child in children do
			add child
		end
		add """</article>"""
	end

	redef fun is_empty: Bool do
		return title == null and subtitle == null and content == null and children.is_empty
	end
end

# A module / class / prop definition
class TplDefinition
	super Template

	# Comment to display
	var comment: nullable Streamable = null is writable

	# Namespace for this definition
	var namespace: nullable Streamable = null is writable

	# Location link to display
	var location: nullable Streamable = null is writable

	private fun render_info do
		add "<div class='info text-right'>"
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
		add "</div>"
	end

	private fun render_comment do
		if comment != null then add comment.as(not null)
	end

	redef fun rendering do
		add "<div class='definition'>"
		render_comment
		render_info
		add "</div>"
	end
end

# Class definition
class TplClassDefinition
	super TplDefinition

	var intros = new Array[TplListElt]
	var redefs = new Array[TplListElt]

	init do end

	redef fun rendering do
		add "<div class='definition'>"
		render_comment
		render_info
		render_list("Introduces", intros)
		render_list("Redefines", redefs)
		add "</div>"
	end

	private fun render_list(name: String, elts: Array[TplListElt]) do
		if elts.is_empty then return
		add "<h5>{name}</h5>"
		add "<ul class='list-unstyled list-definition'>"
		for elt in elts do add elt
		add "</ul>"
	end
end

# Layout for Search page
class TplSearchPage
	super TplSectionElt

	var modules = new Array[Streamable]
	var classes = new Array[Streamable]
	var props = new Array[Streamable]

	redef fun rendering do
		var title = self.title
		if title != null then add "<h1>{title}</h1>"
		add "<div class='container-fluid'>"
		add " <div class='row'>"
		if not modules.is_empty then
			add "<div class='col-xs-4'>"
			add "<h3>Modules</h3>"
			add "<ul>"
			for m in modules do
				add "<li>"
				add m
				add "</li>"
			end
			add "</ul>"
			add "</div>"
		end
		if not classes.is_empty then
			add "<div class='col-xs-4'>"
			add "<h3>Classes</h3>"
			add "<ul>"
			for c in classes do
				add "<li>"
				add c
				add "</li>"
			end
			add "</ul>"
			add "</div>"
		end
		if not props.is_empty then
			add "<div class='col-xs-4'>"
			add "<h3>Properties</h3>"
			add "<ul>"
			for p in props do
				add "<li>"
				add p
				add "</li>"
			end
			add "</ul>"
			add "</div>"
		end
		add " </div>"
		add "</div>"
	end
end

#####################
# Basiv HTML elements
#####################

# A html link <a>
class TplLink
	super Template

	# Link href
	var href: String writable

	# Text to display in the link
	var text: Streamable writable

	# Optional title
	var title: nullable String writable

	init(href, text: String) do
		self.href = href
		self.text = text
	end

	init with_title(href, text, title: String) do
		init(href, text)
		self.title = title
	end

	redef fun rendering do
		add "<a href=\""
		add href
		add "\""
		if title != null then
			add " title=\""
			add title.as(not null)
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
	fun add_li(content: Streamable) do elts.add new TplListItem.with_content(content)

	init do end

	init with_classes(classes: Array[String]) do self.css_classes = classes

	fun is_empty: Bool do return elts.is_empty

	redef fun rendering do
		if elts.is_empty then return
		add "<ul class='{css_classes.join(" ")}'>"
		for elt in elts do add elt
		add "</ul>"
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

	init do end

	init with_content(content: Streamable) do append(content)

	init with_classes(content: Streamable, classes: Array[String]) do
		with_content(content)
		css_classes = classes
	end

	# Append `content` to the item
	# similar to `self.content.add`
	fun append(content: Streamable) do self.content.add content

	redef fun rendering do
		add "<li class='{css_classes.join(" ")}'>"
		add content
		add "</li>"
	end
end

# A label with a text content
class TplLabel
	super Template

	# Content of the label if any
	var content: nullable Streamable = null is writable

	# CSS classes of the <span> element
	var css_classes = new Array[String]

	init with_content(content: Streamable) do self.content = content
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
class TagAttribute
	super Template

	var name: String
	var value: nullable String

	init(name: String, value: nullable String) do
		self.name = name
		self.value = value
	end

	redef fun rendering do
		var value = self.value
		if value == null then
			add(" {name}")
		else
			add(" {name}=\"{value}\"")
		end
	end
end

# Javacript template
class TplScript
	super Template

	var attrs = new Array[TagAttribute]
	var content: nullable Streamable = null is writable

	init do
		attrs.add(new TagAttribute("type", "text/javascript"))
	end

	protected fun render_content do
		if content != null then add content.as(not null)
	end

	redef fun rendering do
		add "<script"
		for attr in attrs do add attr
		add ">"
		render_content
		add "</script>"
	end
end

# JS script for Piwik Tracker
class TplPiwikScript
	super TplScript

	var tracker_url: String
	var site_id: String

	init(tracker_url, site_id: String) do
		super
		self.tracker_url = tracker_url
		self.site_id = site_id
	end

	redef fun render_content do
		add "<!-- Piwik -->"
		add "var _paq = _paq || [];"
		add " _paq.push([\"trackPageView\"]);"
		add " _paq.push([\"enableLinkTracking\"]);"
		add "(function() \{"
		add " var u=((\"https:\" == document.location.protocol) ? \"https\" : \"http\") + \"://{tracker_url}\";"
		add " _paq.push([\"setTrackerUrl\", u+\"piwik.php\"]);"
		add " _paq.push([\"setSiteId\", \"{site_id}\"]);"
		add " var d=document, g=d.createElement(\"script\"), s=d.getElementsByTagName(\"script\")[0]; g.type=\"text/javascript\";"
		add " g.defer=true; g.async=true; g.src=u+\"piwik.js\"; s.parentNode.insertBefore(g,s);"
		add "\})();"
	end
end

