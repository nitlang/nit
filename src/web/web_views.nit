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

# Nitcorn actions used by the nitweb server.
module web_views

import web_base
import model_html
import highlight
import markdown

# Html homepage for the `nitweb` server.
class HtmlHomePage
	super NitView

	# Loaded model to display.
	var model: Model

	redef fun render(srv) do
		var tpl = new Template
		tpl.add new Header(1, "Loaded model")
		for mpackage in model.mpackages do
			tpl.add new Header(3, "Packages")
			tpl.add mpackage.html_tree
		end
		return tpl
	end
end

# Display a search results list.
class HtmlResultPage
	super NitView

	# Initial query.
	var query: String

	# Result set
	var results: Array[MEntity]

	redef fun render(srv) do
		var tpl = new Template
		tpl.add new Header(1, "Results for {query}")
		if results.is_empty then
			tpl.add "<p>No result for {query}.<p>"
			return tpl
		end
		var list = new UnorderedList
		for mentity in results do
			var link = mentity.html_link
			link.text = mentity.html_raw_namespace
			list.add_li new ListItem(link)
		end
		tpl.add list
		return tpl
	end
end

# Display the source for each mentities
class HtmlSourcePage
	super NitView

	# Modelbuilder used to access sources.
	var modelbuilder: ModelBuilder

	# MEntity to display
	var mentity: MEntity

	# HiglightVisitor used to hilight the source code
	var hl = new HighlightVisitor

	redef fun render(srv) do
		var tpl = new Template
		tpl.add new Header(1, "Source Code")
		tpl.add render_source
		return tpl
	end

	private fun render_source: Template do
		var node = modelbuilder.mentity2node(mentity)
		var tpl = new Template
		tpl.add new Header(3, "Source code")
		if node == null then
			tpl.add "<p>Source for {mentity.html_name} not found.<p>"
		else
			hl.enter_visit node
			tpl.add "<pre><code>"
			tpl.add hl.html
			tpl.add "</code></pre>"
		end
		return tpl
	end
end

# Display the mdoc of the mentities.
class HtmlDocPage
	super HtmlSourcePage

	redef fun render(srv) do
		var tpl = new Template
		tpl.add new Header(1, mentity.html_name)
		tpl.add "<p>"
		tpl.add mentity.html_declaration
		tpl.add "</p>"
		tpl.add "<br>"
		var mdoc = mentity.mdoc
		if mdoc != null then
			tpl.add mdoc.content.join("\n").md_to_html
		end
		tpl.add "<br>"
		tpl.add render_source
		return tpl
	end
end
