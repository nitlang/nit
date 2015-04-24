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
import html::bootstrap
import json::static

# A label with a text content.
class DocHTMLLabel
	super BSLabel

	redef init do
		css_classes.clear
		css_classes.add "label"
	end

	# Init this label from css classes.
	init with_classes(classes: Array[String]) do
		init("label", "")
		css_classes.add_all classes
	end
end

# A component that display tabbed data.
class DocTabs
	super BSComponent

	# HTML id of this component.
	var html_id: String

	# Text displayed on the tabs dropdown button.
	var drop_text: String

	# Panels to display in this tab group.
	var panels = new Array[DocTabPanel]

	# Droplist containing links to panels.
	#
	# Can also be used to add external links.
	var drop_list: DocTabsDrop is lazy do return new DocTabsDrop(html_id, drop_text)

	# Adds a new `panel` to that tab.
	#
	# You should always use this instead of `panels.add` because it also set the
	# `drop_list` entry.
	fun add_panel(panel: DocTabPanel) do
		drop_list.add_li panel.render_tab
		panels.add panel
	end

	redef fun rendering do
		if panels.is_empty then return
		panels.first.is_active = true
		add "<div role=\"tabpanel\">"
		if drop_list.items.length > 1 then add drop_list
		add " <div class=\"tab-content\">"
		for panel in panels do
			add panel
		end
		add " </div>"
		add "</div>"
	end
end

# A list of tab regrouped in a dropdown
class DocTabsDrop
	super UnorderedList

	# HTML id used by the tabs group.
	var html_id: String

	# Title to display in the tab item.
	var html_title: String

	redef fun rendering do
		add """<ul id="{{{html_id}}}-tabs" class="nav pull-right" role="tablist">"""
		add """ <li role="presentation" class="dropdown pull-right">"""
		add """  <a href="#" id="{{{html_id}}}-drop" class="dropdown-toggle"
		          data-toggle="dropdown" aria-controls="{{{html_id}}}-contents"
		          aria-expanded="false">"""
        add html_title
		add """ <span class="glyphicon glyphicon-menu-hamburger"></span>"""
		add """ </a>"""
		add """ <ul class="dropdown-menu" role="menu"
		         aria-labelledby="{{{html_id}}}-drop" id="{{{html_id}}}-contents">"""
		for item in items do add item
		add "  </ul>"
        add " </li>"
        add "</ul>"
	end
end

# A panel that goes in a DocTabs.
class DocTabPanel
	super BSComponent

	# HTML id of this panel.
	var html_id: String

	# Title of this panel as displayed in the tab label.
	var tab_title: String

	# HTML content of this panel.
	var html_content: Writable is writable

	# Is this panel visible by default?
	var is_active = false

	redef fun rendering do
		var active = ""
		if is_active then active = "active in"
		add "<div role=\"tabpanel\" class=\"tab-pane fade {active}\""
		add "  id=\"{html_id}\" aria-labelledby=\"{html_id}-tab\">"
		add html_content
		add "</div>"
	end

	private fun render_tab: DocTabItem do return new DocTabItem(tab_title, html_id)
end

# A ListItem that goes in a DocTabsDrop.
private class DocTabItem
	super ListItem

	# Panel id to trigger when the link is clicked.
	var target_id: String

	redef fun rendering do
		add "<li{render_css_classes}>"
		add " <a role=\"tab\" data-toggle=\"tab\" aria-expanded=\"false\" tabindex=\"-1\""
		add "   id=\"{target_id}-tab\" href=\"#{target_id}\" aria-controls=\"{target_id}\">"
		add text
		add " </a>"
		add "</li>"
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

# Javacript template that can be added into a DocPage.
class TplScript
	super Template

	# HTML attributes to add in this tag.
	var attrs = new Array[TagAttribute]

	# Text content of this script tag.
	var content: nullable Writable = null is writable

	init do
		attrs.add(new TagAttribute("type", "text/javascript"))
	end

	# Render the content of this script.
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

	# Piwik URL to use for this tracker.
	var tracker_url: String

	# Site ID used on Piwik system.
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
