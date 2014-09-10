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

# Program to test the `markdown` module on real source files.
module test_docdown

import modelize
import highlight
import markdown

redef class ModelBuilder
	fun test_markdown(page: HTMLTag, mmodule: MModule)
	do
		page.add_raw_html "<h3 id='{mmodule}'>module {mmodule}</h1>"
		var mdoc = mmodule.mdoc
		if mdoc != null then
			page.add mdoc.full_markdown
		end
		for mclassdef in mmodule.mclassdefs do
			mdoc = mclassdef.mdoc
			if mdoc != null then
				page.add_raw_html "<h4 id='{mclassdef}'>class {mclassdef}</h2>"
				page.add mdoc.full_markdown
			end
			for mpropdef in mclassdef.mpropdefs do
				mdoc = mpropdef.mdoc
				if mdoc != null then
					page.add_raw_html "<h5 id='{mpropdef}'>prop {mpropdef}</h3>"
					page.add mdoc.full_markdown
				end
			end
		end
	end
end

redef class MModule
	redef fun href do return "#{to_s}"
end
redef class MClassDef
	redef fun href do return "#{to_s}"
end
redef class MPropDef
	redef fun href do return "#{to_s}"
end

var toolcontext = new ToolContext

var opt_full = new OptionBool("Process also imported modules", "--full")
toolcontext.option_context.add_option(opt_full)
toolcontext.tooldescription = "Usage: test_markdown [OPTION]... <file.nit>...\nGenerates HTML of comments of documentation from Nit source files."

toolcontext.process_options(args)
var args = toolcontext.option_context.rest

var model = new Model
var modelbuilder = new ModelBuilder(model, toolcontext)

var mmodules = modelbuilder.parse(args)
modelbuilder.run_phases

var hv = new HighlightVisitor

var page = new HTMLTag("html")
page.add_raw_html """
<head>
<meta charset="utf-8">
"""
page.add_raw_html hv.head_content
page.add_raw_html """
<style type="text/css">
code {margin: 0 2px;
padding: 0px 5px;
border: 1px solid #ddd;
background-color: #f8f8f8;
border-radius: 3px;}
pre {
background-color: #f8f8f8;
border: 1px solid #ddd;
font-size: 13px;
line-height: 19px;
overflow: auto;
padding: 6px 6px;
border-radius: 3px;
}
.rawcode[title] {
border-color: red;
}
h5 {font-weight:bold;}
{{{hv.css_content}}}
</style>
</head><body>"""

if opt_full.value then
	for p in model.mprojects do
		page.add_raw_html "<h1 id='P{p.name}'>project {p.name}</h2>"
		var mdoc = p.mdoc
		if mdoc != null then
			page.add mdoc.full_markdown
		end
		for g in p.mgroups do
			mdoc = g.mdoc
			if mdoc != null then
				page.add_raw_html "<h2 id='G{g.full_name}'>group {g.full_name}</h2>"
				page.add mdoc.full_markdown
			end
			for m in g.mmodules do
				modelbuilder.test_markdown(page, m)
			end
		end
	end
else
	for m in mmodules do
		modelbuilder.test_markdown(page, m)
	end
end

page.add_raw_html hv.foot_content
page.add_raw_html "</body>"
page.write_to(stdout)
