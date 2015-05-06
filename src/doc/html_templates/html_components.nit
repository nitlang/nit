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
