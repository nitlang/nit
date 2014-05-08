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
module doc_template

import template

# Full Nitdoc page template
class TplNitdocPage
	super Template

	var head: TplHead writable
	var body_attrs = new Array[TagAttribute] # attributes for body tag element
	var topmenu: TplTopMenu writable
	var sidebar: nullable TplSidebar writable
	var content: Streamable writable
	var footer: nullable TplFooter writable
	var scripts = new Array[TplScript] # js scripts appended to body

	redef fun rendering do
		add "<!DOCTYPE html>"
		add "<head>"
		add head
		add "</head>"
		add "<body"
		for attr in body_attrs do add attr
		add ">"
		add topmenu
		if footer != null then
			add "<div class='page footed'>"
		else
			add "<div class='page'>"
		end
		if sidebar != null then
			add sidebar.as(not null)
		end
		add content
		add "</div>"
		if footer != null then
			add footer.as(not null)
		end
		for script in scripts do
			add script
		end
		add "</body>"
		add "</html>"
	end
end

# general layout elements

# <head> tag
class TplHead
	super Template

	var title: String
	var shareurl: String

	init(title, shareurl: String) do
		self.title = title
		self.shareurl = shareurl
	end

	redef fun rendering do
		add """
<meta charset="utf-8"/>
<link rel="stylesheet" href="{{{shareurl}}}/css/main.css" type="text/css"/>
<link rel="stylesheet" href="{{{shareurl}}}/css/Nitdoc.UI.css" type="text/css"/>
<link rel="stylesheet" href="{{{shareurl}}}/css/Nitdoc.QuickSearch.css" type="text/css"/>
<link rel="stylesheet" href="{{{shareurl}}}/css/Nitdoc.GitHub.css" type="text/css"/>
<link rel="stylesheet" href="{{{shareurl}}}/css/Nitdoc.ModalBox.css" type="text/css"/>
<title>{{{title}}}</title>"""
	end
end

# Top bar menu
class TplTopMenu
	super Template

	private var elts = new Array[Streamable]

	redef fun rendering do
		add "<header>"
		add "<nav class='main'>"
		if not elts.is_empty then
			add "<ul>"
			for elt in elts do add(elt)
			add "</ul>"
		end
		add "</nav>"
		add "</header>"
	end

	fun add_elt(href, name: String, is_active: Bool) do
		elts.add(new TplTopMenuElt(href, name, is_active))
	end

	fun add_raw(content: Streamable) do
		elts.add(content)
	end
end

# A topmenu element
private class TplTopMenuElt
	super Template

	var href: String
	var name: String
	var is_active: Bool

	init(href, name: String, is_active: Bool) do
		self.href = href
		self.name = name
		self.is_active = is_active
	end

	redef fun rendering do
		if is_active then
			add """<li class="current">{{{name}}}</li>"""
		else
			add """<li><a href="{{{href}}}">{{{name}}}</a></li>"""
		end
	end
end

# <footer> element
class TplFooter
	super Template

	var content: Streamable writable

	init(content: Streamable) do self.content = content

	redef fun rendering do
		add "<footer>"
		add content
		add "</footer>"
	end
end

# sidebar layout

# Sidebar <div>
class TplSidebar
	super Template

	var boxes = new Array[TplSidebarBox]

	redef fun rendering do
		add """"<div class="sidebar">"""
		for box in boxes do add box
		add "</div>"
	end
end

# A box that can be added to sidebar
class TplSidebarBox
	super Template

	var name: String
	var elts = new Array[TplSidebarGroup]

	init(name: String) do self.name = name

	redef fun rendering do
		add """<nav class"properties filterable">"""
		add """    <h3>{{{name}}}</h3>"""
		for elt in elts do add elt
		add "</nav>"
	end
end

# A sidebar box group
class TplSidebarGroup
	super Template

	var name: String
	private var elts = new Array[Template]

	init(name: String) do self.name = name

	redef fun rendering do
		if elts.is_empty then return
		add "<h4>{name}</h4>"
		add "<ul>"
		for elt in elts do add elt
		add "</ul>"
	end

	fun add_elt(content: Streamable, classes: Array[Streamable]) do
		var tpl = new Template
		tpl.add "<li {classes.join(" ")}>"
		tpl.add content
		tpl.add "</li>"
		elts.add(tpl)
	end

	fun add_bullet(text, title, content: Streamable, classes: Array[Streamable]) do
		var tpl = new Template
		tpl.add "<span title='{title}'>{text}</span>"
		tpl.add content
		add_elt(tpl, classes)
	end
end

# page layouts

# Layout for Overview page
class TplOverviewPage
	super Template

	var title: nullable Streamable writable
	var text: nullable Streamable writable
	var graph: nullable TplGraph writable
	var modules = new Array[Streamable]

	redef fun rendering do
		add "<div class='content fullpage'>"
		if title != null then add "<h1>{title}</h1>"
		if text != null then add "<article class='overview'>{text}</article>"

		if not modules.is_empty then
			add "<article class='overview'>"
			add "<h2>Modules</h2>"
			add "<ul>"
			for m in modules do
				add "<li>"
				add m
				add "</li>"
			end
			add "</ul>"
		end
		if not graph == null then add graph.as(not null)
		add "</article>"
		add "</div>"
	end
end

# Layout for Search page
class TplSearchPage
	super Template

	var title: nullable Streamable writable
	var modules = new Array[Streamable]
	var classes = new Array[Streamable]
	var props = new Array[Streamable]

	redef fun rendering do
		add "<div class='content fullpage'>"
		if title != null then add "<h1>{title}</h1>"
		if not modules.is_empty then
			add "<article class='modules filterable'>"
			add "<h2>Modules</h2>"
			add "<ul>"
			for m in modules do
				add "<li>"
				add m
				add "</li>"
			end
			add "</ul>"
			add "</article>"
		end
		if not classes.is_empty then
			add "<article class='classes filterable'>"
			add "<h2>Classes</h2>"
			add "<ul>"
			for c in classes do
				add "<li>"
				add c
				add "</li>"
			end
			add "</ul>"
			add "</article>"
		end
		if not props.is_empty then
			add "<article class='properties filterable'>"
			add "<h2>Properties</h2>"
			add "<ul>"
			for p in props do
				add "<li>"
				add p
				add "</li>"
			end
			add "</ul>"
			add "</article>"
		end
		add "</div>"
	end
end

# Layout for Module page
class TplModulePage
	super Template

	var title: nullable Streamable writable
	var subtitle: nullable Streamable writable
	var definition: nullable TplDefinition writable
	var graph: nullable TplGraph writable
	var intros = new Array[TplArticle]
	var redefs = new Array[TplArticle]

	redef fun rendering do
		add "<div class='content'>"
		if title != null then
			add "<h1>"
			add title.as(not null)
			add "</h1>"
		end
		if subtitle != null then
			add "<div class='subtitle info'>"
			add subtitle.as(not null)
			add "</div>"
		end
		if definition != null then add definition.as(not null)
		if graph != null then add graph.as(not null)
		if not intros.is_empty then
			add "<section class='classes'>"
			add "<h2 class='section-header'>Introduced classes</h2>"
			for intro in intros do add intro
			add "</section>"
		end
		if not redefs.is_empty then
			add "<section class='classes'>"
			add "<h2 class='section-header'>Refined classes</h2>"
			for rdef in redefs do add rdef
			add "</section>"
		end
		add "</div>"
	end
end

# Layout for Class page
class TplClassPage
	super Template

	var title: nullable Streamable writable
	var subtitle: nullable Streamable writable
	var definition: nullable TplDefinition writable
	var graph: nullable TplGraph writable
	var concerns: nullable TplConcernList writable
	var types = new Array[TplArticle]
	var inits = new Array[TplArticle]
	var methods = new Array[Streamable]

	redef fun rendering do
		add "<div class='content'>"
		if title != null then
			add "<h1>"
			add title.as(not null)
			add "</h1>"
		end
		if subtitle != null then
			add "<div class='subtitle info'>"
			add subtitle.as(not null)
			add "</div>"
		end
		if definition != null then add definition.as(not null)
		if graph != null then add graph.as(not null)

		if concerns != null then
			add "<section class='concerns'>"
			add "<h2 class='section-header'>Concerns</h2>"
			add concerns.as(not null)
			add "</section>"
		end
		if not types.is_empty then
			add "<section class='types'>"
			add"<h2>Virtual Types</h2>"
			for t in types do add t
			add "</section>"
		end
		if not inits.is_empty then
			add "<section class='constructors'>"
			add"<h2>Constructors</h2>"
			for i in inits do add i
			add "</section>"
		end
		if not methods.is_empty then
			add "<section class='methods'>"
			add"<h2>Methods</h2>"
			for m in methods do add m
			add "</section>"
		end
		add "</div>"
	end
end

# layout parts

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
		if value == null then
			add(" {name}")
		else
			add(" {name}=\"{value}\"")
		end
	end
end

# JS Script template
class TplScript
	super Template

	var attrs = new Array[TagAttribute]
	var content: nullable Streamable writable

	init do
		attrs.add(new TagAttribute("type", "text/javascript"))
	end

	redef fun rendering do
		add "<script"
		for attr in attrs do add attr
		add ">"
		if content != null then add content.as(not null)
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

	redef fun rendering do
		var tpl = new Template
		tpl.add "<!-- Piwik -->"
		tpl.add "var _paq = _paq || [];"
		tpl.add " _paq.push([\"trackPageView\"]);"
		tpl.add " _paq.push([\"enableLinkTracking\"]);"
		tpl.add "(function() \{"
		tpl.add " var u=((\"https:\" == document.location.protocol) ? \"https\" : \"http\") + \"://{tracker_url}\";"
		tpl.add " _paq.push([\"setTrackerUrl\", u+\"piwik.php\"]);"
		tpl.add " _paq.push([\"setSiteId\", \"{site_id}\"]);"
		tpl.add " var d=document, g=d.createElement(\"script\"), s=d.getElementsByTagName(\"script\")[0]; g.type=\"text/javascript\";"
		tpl.add " g.defer=true; g.async=true; g.src=u+\"piwik.js\"; s.parentNode.insertBefore(g,s);"
		tpl.add "\})();"
		content = tpl
		super
	end
end

# Graph image with clicable map
class TplGraph
	super Template

	var name: String
	var alt: String
	var map: String

	init(name, alt, map: String) do
		self.name = name
		self.alt = alt
		self.map = map
	end

	redef fun rendering do
		add "<article class='graph'>"
		add "<img src='{name}.png' usemap='#{name}' style='margin:auto' alt='{alt}'/>"
		add "</article>"
		add map
	end
end

# A page article (used for module, class, prop description)
class TplArticle
	super Template

	var id: String writable
	var classes = new HashSet[String]
	var title: Template writable
	var subtitle: Template writable
	var content: nullable Template writable

	redef fun rendering do
		add "<article class='{classes.join(" ")}' id='{id}'>"
		add "<h3 class='signature'>"
		add title
		add "</h3>"
		add "<div class='info'>"
		add subtitle
		add "</div>"
		if content != null then
			add content.as(not null)
		end
		add "</article>"
	end
end

# A module / class / prop definition
# Contains:
# * namespace of the definition
# * comment
# * link to location
class TplDefinition
	super Template

	var comment: nullable TplComment writable
	var namespace: Streamable writable
	var location: nullable Streamable writable
	var github_area: nullable TplGithubArea writable

	redef fun rendering do
		add "<div class='description'>"
		if github_area != null then
			add github_area.as(not null)
		end
		if comment == null then
			add "<p class='info inheritance'>"
			add "<span class=\"noComment\">no comment for </span>"
		else
			add comment.as(not null)
			add "<p class='info inheritance'>"
		end
		add "definition in "
		add namespace
		if location != null then
			add " "
			add location.as(not null)
		end
		add "</p>"
		add "</div>"
	end
end

# Textarea used by Github comment edition plugin to store comments
class TplGithubArea
	super Template

	var raw_comment: String writable
	var raw_namespace: String writable
	var location: String writable

	init(raw_comment, raw_namespace, location: String) do
		self.raw_comment = raw_comment
		self.raw_namespace = raw_namespace
		self.location = location
	end

	redef fun rendering do
		add "<textarea"
		add " class='baseComment'"
		add " data-comment-namespace='{raw_namespace}'"
		add " data-comment-location='{location}'>"
		add raw_comment
		add "</textarea>"
	end
end

# Comment box
class TplComment
	super Template

	var comment: Streamable writable

	init(comment: Streamable) do self.comment = comment

	redef fun rendering do
		add "<div class='comment'>"
		add comment
		add "</div>"
	end
end

# Comment box (for synopsys)
class TplShortComment
	super TplComment

	redef fun rendering do
		add "<div class='comment'>"
		add "<div class='nitdoc'>"
		add comment
		add "</div>"
		add "</div>"
	end
end

# A html link (with optional title)
class TplLink
	super Template

	var href: String writable
	var text: String writable
	var title: nullable String writable

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

# Element to display in concerns list
class TplConcernElt
	super Template
end

# List of concerns
class TplConcernList
	super TplConcernElt

	var elts = new Array[TplConcernElt]

	redef fun rendering do
		if elts.is_empty then return
		add "<ul>"
		for elt in elts do
			add elt
		end
		add "</ul>"
	end
end

# Element of a list of concerns
class TplConcernListElt
	super TplConcernElt

	var anchor: String writable
	var name: String writable
	var comment: nullable String writable

	redef fun rendering do
		add "<li>"
		add "<a href=\"{anchor}\">{name}</a>"
		if comment != null then
			add ": {comment.as(not null)}"
		end
		add "</li>"
	end
end

# Section for topconcern
class TplTopConcern
	super Template

	var anchor: String writable
	var concern: TplLink writable

	redef fun rendering do
		add "<a id=\"{anchor}\"></a>"
		add "<h3 class=\"concern-toplevel\">Methods refined in "
		add concern
		add "</h3>"
	end
end

# Section for subconcern
class TplConcern
	super Template

	var anchor: String writable
	var concern: TplLink writable
	var comment: nullable String writable

	redef fun rendering do
		add "<a id=\"{anchor}\"></a>"
		add "<p class=\"concern-doc\">"
		add concern
		if comment != null then
			add ": "
			add comment.as(not null)
		end
		add "</p>"
	end
end
