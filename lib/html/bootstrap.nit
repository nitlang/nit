# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# HTML templates for Bootstrap components.
#
# See http://getbootstrap.com/components/
module bootstrap

import template

# Bootstrap component abstraction.
#
# Mainly used to factoryze CSS treatments.
# Can be used in the future to handle generic stuff like attributes or escaping.
#
# TODO merge with html::HTMTag without init conflict?
# HTMLTag requires the main init to pass a tagname,
# this was so much verbose here.
abstract class BSComponent
	super Template

	# CSS classes to add on this element.
	var css_classes = new Array[String] is optional

	# Render `self` css clases as a `class` attribute.
	fun render_css_classes: String do
		if css_classes.is_empty then return ""
		return " class=\"{css_classes.join(" ")}\""
	end
end

# A `<a>` tag.
#
# Not really a Bootstrap component but used in other components
# that it required its own abstraction.
#
# Example:
# ~~~
# var lnk = new Link("http://nitlanguage.org", "Nit")
# assert lnk.write_to_string == "<a href=\"http://nitlanguage.org\">Nit</a>"
# ~~~
#
# Creates a link with a title attribute:
# ~~~
# lnk = new Link("http://nitlanguage.org", "Nit", "Nit homepage")
# assert lnk.write_to_string == "<a href=\"http://nitlanguage.org\" title=\"Nit homepage\">Nit</a>"
# ~~~
class Link
	super BSComponent
	autoinit(href, text, title, css_classes)

	# URL pointed by this link.
	var href: String is writable

	# Displayed text.
	var text: Writable is writable

	# Optional title.
	var title: nullable String = null is optional, writable

	redef fun rendering do
		add "<a{render_css_classes} href=\"{href}\""
		var title = self.title
		if title != null then add " title=\"{title.html_escape}\""
		add ">{text}</a>"
	end
end

# A `<h1>` to `<h6>` tag.
#
# Not really a Bootstrap component but used in other components
# that it required its own abstraction.
#
# Example:
# ~~~
# var h1 = new Header(1, "Title")
# assert h1.write_to_string == "<h1>Title</h1>"
# ~~~
#
# With subtext:
# ~~~
# var h6 = new Header(6, "Title", "with subtext")
# assert h6.write_to_string == "<h6>Title<small>with subtext</small></h6>"
# ~~~
class Header
	super BSComponent
	autoinit(level, text, subtext, id, css_classes)

	# Header level between 1 and 6.
	var level: Int

	# Displayed text.
	var text: Writable

	# Optional subtext.
	var subtext: nullable Writable = null is optional, writable

	# Optional id.
	var id: nullable String = null is optional, writable

	redef fun rendering do
		add "<h{level}{render_css_classes}>{text.write_to_string}"
		var subtext = self.subtext
		if subtext != null then add "<small>{subtext.write_to_string}</small>"
		add "</h{level}>"
	end
end

# An abstract HTML list.
#
# Many Bootstrap components are built around a HTML list.
#
# Used to factorize behavior between OrderedList and UnorderedList.
abstract class HTMLList
	super BSComponent
	autoinit(items, css_classes)

	# A list contains `<li>` tags as children.
	#
	# See ListItem.
	var items = new Array[ListItem] is optional

	# Adds a new ListItem to `self`.
	fun add_li(item: ListItem) do items.add item

	# Does `self` contains no items?
	fun is_empty: Bool do return items.is_empty
end

# A `<ol>` list tag.
#
# Example:
#
# ~~~
# var lst = new OrderedList
# lst.add_li(new ListItem("foo"))
# lst.add_li(new ListItem("bar"))
# lst.add_li(new ListItem("baz"))
#
# assert lst.write_to_string == """
# <ol>
# <li>foo</li>
# <li>bar</li>
# <li>baz</li>
# </ol>
# """
# ~~~
class OrderedList
	super HTMLList

	redef fun rendering do
		addn "<ol{render_css_classes}>"
		for item in items do add item
		addn "</ol>"
	end
end

# A `<ul>` list tag.
#
# Example:
#
# ~~~
# var lst = new UnorderedList
# lst.add_li(new ListItem("foo"))
# lst.add_li(new ListItem("bar"))
# lst.add_li(new ListItem("baz"))
#
# assert lst.write_to_string == """
# <ul>
# <li>foo</li>
# <li>bar</li>
# <li>baz</li>
# </ul>
# """
# ~~~
class UnorderedList
	super HTMLList

	redef fun rendering do
		addn "<ul{render_css_classes}>"
		for item in items do add item
		addn "</ul>"
	end
end

# A `<li>` tag.
class ListItem
	super BSComponent
	autoinit(text, css_classes)

	# Content to display in this list item.
	var text: Writable is writable

	redef fun rendering do addn "<li{render_css_classes}>{text.write_to_string}</li>"
end

# A Boostrap icon.
#
# See http://getbootstrap.com/components/#glyphicons
#
# Example:
#
# ~~~
# var icon = new BSIcon("star")
# assert icon.write_to_string == "<span class=\"glyphicon glyphicon-star\" aria-hidden=\"true\"></span>"
# ~~~
class BSIcon
	super BSComponent
	autoinit(icon, css_classes)

	# Glyphicon name to display.
	#
	# See full list at http://getbootstrap.com/components/#glyphicons.
	var icon: String

	init do css_classes.add "glyphicon glyphicon-{icon}"

	redef fun rendering do
		add "<span{render_css_classes} aria-hidden=\"true\"></span>"
	end
end

# A Bootstrap breadcrumbs component.
#
# See http://getbootstrap.com/components/#breadcrumbs
#
# Example:
#
# ~~~
# var bc = new BSBreadCrumbs
# bc.add_li(new ListItem("foo"))
# bc.add_li(new ListItem("bar"))
# bc.add_li(new ListItem("baz"))
#
# assert bc.write_to_string == """
# <ol class=\"breadcrumbs\">
# <li>foo</li>
# <li>bar</li>
# <li class=\"active\">baz</li>
# </ol>
# """
# ~~~
class BSBreadCrumbs
	super OrderedList

	init do css_classes.add "breadcrumbs"

	redef fun rendering do
		items.last.css_classes.add "active"
		super
	end
end

# A Bootstrap label component.
#
# See http://getbootstrap.com/components/#labels
#
# Example:
#
# ~~~
# var lbl = new BSLabel("danger", "Danger!")
# assert lbl.write_to_string == "<span class=\"label label-danger\">Danger!</span>"
# ~~~
class BSLabel
	super BSComponent
	autoinit(color, text, css_classes)

	# Class used to change the color of the label.
	#
	# Can be one of `default`, `primary`, `success`, `info`, `warning` or `danger`.
	var color: String

	# Text to display in the label.
	var text: Writable

	init do css_classes.add "label label-{color}"

	redef fun rendering do
		add "<span{render_css_classes}>{text.write_to_string}</span>"
	end
end

# A Bootstrap badge component.
#
# See http://getbootstrap.com/components/#badges
#
# Example:
#
# ~~~
# var b = new BSBadge("42 messages")
# assert b.write_to_string == "<span class=\"badge\">42 messages</span>"
# ~~~
class BSBadge
	super BSComponent
	autoinit(text, css_classes)

	# Text to display in the label.
	var text: Writable

	init do css_classes.add "badge"

	redef fun rendering do
		add "<span{render_css_classes}>{text.write_to_string}</span>"
	end
end

# A Bootstrap page header component.
#
# See http://getbootstrap.com/components/#page-header
#
# Example:
#
# ~~~
# var h = new BSPageHeader("Welcome")
# assert h.write_to_string == """
# <div class=\"page-header\">
# Welcome
# </div>
# """
# ~~~
class BSPageHeader
	super BSComponent
	autoinit(text, css_classes)

	# Text to display as title.
	var text: Writable

	init do css_classes.add "page-header"

	redef fun rendering do
		addn "<div{render_css_classes}>"
		addn text.write_to_string
		addn "</div>"
	end
end

# A Bootstrap alert component.
#
# See http://getbootstrap.com/components/#alerts
#
# Example:
#
# ~~~
# var alert = new BSAlert("danger", "Danger!")
# assert alert.write_to_string == """
# <div class="alert alert-danger">
# Danger!
# </div>
# """
# ~~~
class BSAlert
	super BSComponent
	autoinit(color, text, is_dismissible, css_classes)

	# Class used to change the color of the alert.
	#
	# Can be one of `primary`, `success`, `info`, `warning` or `danger`.
	var color: String

	# Text to display in the alert.
	var text: Writable

	# Can the alert be dismissed by clicking the close button?
	#
	# See http://getbootstrap.com/components/#alerts-dismissible
	#
	# Default is `false`.
	var is_dismissible = false is optional, writable

	init do css_classes.add "alert alert-{color}"

	redef fun rendering do
		addn "<div{render_css_classes}>"
		if is_dismissible then
			add "<button type=\"button\" class=\"close\" data-dismiss=\"alert\""
			add "aria-label=\"Close\"><span aria-hidden=\"true\">&times;</span>"
			addn "</button>"
		end
		addn text.write_to_string
		addn "</div>"
	end
end

# A Bootstrap panel component.
#
# See http://getbootstrap.com/components/#panels
#
# Example:
#
# ~~~
# var p = new BSPanel("default", body = "Panel content")
#
# assert p.write_to_string == """
# <div class="panel panel-default">
# <div class="panel-body">
# Panel content
# </div>
# </div>
# """
# ~~~
#
# Panel with heading:
#
# ~~~
# p = new BSPanel("danger", heading = "Panel heading", body = "Panel content")
#
# assert p.write_to_string == """
# <div class="panel panel-danger">
# <div class="panel-heading">
# Panel heading
# </div>
# <div class="panel-body">
# Panel content
# </div>
# </div>
# """
# ~~~
class BSPanel
	super BSComponent
	autoinit(color, heading, body, footer, css_classes)

	# Panel color.
	#
	# Can be one of `default`, `primary`, `success`, `info`, `warning` or `danger`.
	var color: String is writable

	# Panel header if any.
	var heading: nullable Writable = null is optional, writable

	# Body to display in the panel.
	var body: nullable Writable = null is optional, writable

	# Panel footer is any.
	var footer: nullable Writable = null is optional, writable

	init do css_classes.add "panel panel-{color}"

	redef fun rendering do
		addn "<div{render_css_classes}>"
		var heading = self.heading
		if heading != null then
			addn "<div class=\"panel-heading\">"
			addn heading.write_to_string
			addn "</div>"
		end
		var body = self.body
		if body != null then
			addn "<div class=\"panel-body\">"
			addn body.write_to_string
			addn "</div>"
		end
		var footer = self.footer
		if footer != null then
			addn "<div class=\"panel-footer\">"
			addn footer.write_to_string
			addn "</div>"
		end
		addn "</div>"
	end
end
