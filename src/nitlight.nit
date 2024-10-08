# This file is part of NIT ( https://nitlanguage.org ).
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

# Tool that produces highlighting for Nit programs
module nitlight

import htmlight

class NitlightVisitor
	super HtmlightVisitor

	# The current highlight module
	#
	# It is used to know when to use anchored local links
	var current_module: MModule

	# List of all highlighted modules
	#
	# It is used to have links that only targets highlighted entities
	#
	# Entities outside these modules will not be linked.
	var mmodules: Collection[MModule]

	redef fun hrefto(entity) do return entity.href(self)
end

redef class MEntity
	private fun href(v: NitlightVisitor): nullable String do return null
end

redef class MModule
	redef fun href(v)
	do
		if self == v.current_module then return ""
		if not v.mmodules.has(self) then return null
		return c_name + ".html"
	end
end

redef class MClass
	redef fun href(v)
	do
		# Because we only have code, just link to the introduction
		return intro.href(v)
	end
end

redef class MClassDef
	redef fun href(v)
	do
		var m = mmodule.href(v)
		if m == null then return null
		return m + "#" + to_s
	end
end

redef class MProperty
	redef fun href(v)
	do
		# Because we only have code, just link to the introduction
		return intro.href(v)
	end
end

redef class MPropDef
	redef fun href(v)
	do
		var m = mclassdef.mmodule.href(v)
		if m == null then return null
		return m + "#" + to_s
	end
end

var toolcontext = new ToolContext

# Try to colorize, even if programs are non valid
toolcontext.keep_going = true

var opt_fragment = new OptionBool("Omit document header and footer", "-f", "--fragment")
var opt_line_id_prefix = new OptionString("Prefix of the id of each line `<span>` element", "--line-id-prefix")
var opt_first_line = new OptionInt("Start the source file at this line (default: 1)", 0, "--first-line")
var opt_last_line = new OptionInt("End the source file at this line (default: to the end)", 0, "--last-line")
var opt_dir = new OptionString("Output html files in a specific directory (required if more than one module)", "-d", "--dir")
var opt_full = new OptionBool("Process also imported modules", "--full")
var opt_ast = new OptionBool("Generate specific HTML elements for each Node of the AST", "--ast")
var opt_noinfobox = new OptionBool("Disable the generation of infoboxes", "--no-infobox")
var opt_txt = new OptionBool("Generate text with ANSI coloring escape sequences", "--txt")
toolcontext.option_context.add_option(opt_fragment, opt_line_id_prefix, opt_first_line, opt_last_line, opt_dir, opt_full, opt_ast, opt_txt, opt_noinfobox)
toolcontext.tooldescription = "Usage: nitlight [OPTION]... <file.nit>...\nGenerates HTML of highlited code from Nit source files."
toolcontext.process_options(args)

var model = new Model
var modelbuilder = new ModelBuilder(model, toolcontext)

var args = toolcontext.option_context.rest

var mmodules = modelbuilder.parse_full(args)
modelbuilder.run_phases

if opt_full.value then mmodules = modelbuilder.parsed_modules

var dir = opt_dir.value
if dir != null then
	dir.mkdir
else if mmodules.length > 1 then
	print "More than one module to render, use option -d"
	return
end

if opt_txt.value then
	for mm in mmodules do
		var v = new AnsiHighlightVisitor
		v.include_loose_tokens = true
		v.include_whole_lines = true

		if opt_first_line.value != 0 then v.first_line = opt_first_line.value
		if opt_last_line.value != 0 then v.last_line = opt_last_line.value
		var m = modelbuilder.mmodule2node(mm)
		assert m != null

		v.highlight_node(m)
		var page = v.result

		if dir != null then
			page.write_to_file("{dir}/{mm.c_name}.txt")
		else
			page.write_to(stdout)
		end
	end
	return
end

for mm in mmodules do
	if dir != null then toolcontext.info("write {dir}/{mm.c_name}.html", 1)

	var v = new NitlightVisitor(mm, mmodules)
	var prefix = opt_line_id_prefix.value
	if prefix != null then
		v.line_id_prefix = prefix.trim
	end
	v.include_loose_tokens = true
	v.include_whole_lines = true

	if opt_first_line.value != 0 then v.first_line = opt_first_line.value
	if opt_last_line.value != 0 then v.last_line = opt_last_line.value
	if opt_ast.value then v.with_ast = true
	if opt_noinfobox.value then v.show_infobox = false
	var page = null
	var m = modelbuilder.mmodule2node(mm)
	assert m != null
	if not opt_fragment.value then
		page = new HTMLTag("html")
		page.add_raw_html """<head>
		<meta charset="utf-8">
		<title>file {{{m.location.file.filename}}}</title>"""
		if dir == null then
			page.add_raw_html """
			<style type="text/css">
			{{{v.css_content}}}
			</style>
			"""
		else
			page.add_raw_html """<link rel="stylesheet" type="text/css" href="style.css" />"""
		end
		page.add_raw_html v.head_content
		page.add_raw_html "</head><body><pre class='nit_code'>"
	end
	v.highlight_node(m)
	if not opt_fragment.value then
		page.add(v.html)
		page.add_raw_html "</pre>"
		page.add_raw_html v.foot_content
		page.add_raw_html "</body>"
	else
		page = v.html
	end

	if dir != null then
		page.write_to_file("{dir}/{mm.c_name}.html")
	else
		page.write_to(stdout)
	end
end

if dir != null then
	toolcontext.info("write {dir}/index.html", 1)

	var page = new HTMLTag("html")
	page.add_raw_html """<head>
	<meta charset="utf-8">
	</head><body><ul>
	"""
	for mm in mmodules do
		var n = new HTMLTag("li")
		var n2 = new HTMLTag("a")
		page.add n
		n.add n2
		n2.attr("href", "{mm.c_name}.html")
		n2.text(mm.full_name)
	end
	page.add_raw_html "</li></body>"
	page.write_to_file("{dir}/index.html")

	var v = new HtmlightVisitor
	toolcontext.info("write {dir}/style.css", 1)
	var f = new FileWriter.open("{dir}/style.css")
	f.write v.css_content
	f.close
end
