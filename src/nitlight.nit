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

# Tool that produces highlighting for Nit programs
module nitlight

import highlight

var toolcontext = new ToolContext

# Disable `cached` because it causes issues when printing transformed AST. FIXME
toolcontext.cached_phase.disabled = true

# Try to colorize, even if programs are non valid
toolcontext.keep_going = true

var opt_fragment = new OptionBool("Omit document header and footer", "-f", "--fragment")
var opt_line_id_prefix = new OptionString("Prefix of the id of each line <span> element", "--line-id-prefix")
var opt_first_line = new OptionInt("Start the source file at this line (default: 1)", 0, "--first-line")
var opt_last_line = new OptionInt("End the source file at this line (default: to the end)", 0, "--last-line")
var opt_dir = new OptionString("Output html files in a specific directory (required if more than one module)", "-d", "--dir")
var opt_full = new OptionBool("Process also imported modules", "--full")
var opt_ast = new OptionBool("Generate specific HTML elements for each Node of the AST", "--ast")
toolcontext.option_context.add_option(opt_fragment, opt_line_id_prefix, opt_first_line, opt_last_line, opt_dir, opt_full)
toolcontext.tooldescription = "Usage: nitlight [OPTION]... <file.nit>...\nGenerates HTML of highlited code from Nit source files."
toolcontext.process_options(args)

var model = new Model
var modelbuilder = new ModelBuilder(model, toolcontext)

var args = toolcontext.option_context.rest

var mmodules = modelbuilder.parse_full(args)
modelbuilder.run_phases

if opt_full.value then mmodules = model.mmodules

var dir = opt_dir.value
if dir != null then
	dir.mkdir
else if mmodules.length > 1 then
	print "More than one module to render, use option -d"
	return
end

for mm in mmodules do
	if dir != null then toolcontext.info("write {dir}/{mm.name}.html", 1)

	var v = new HighlightVisitor
	var prefix = opt_line_id_prefix.value
	if prefix != null then
		v.line_id_prefix = prefix.trim
	end

	if opt_first_line.value != 0 then v.first_line = opt_first_line.value
	if opt_last_line.value != 0 then v.last_line = opt_last_line.value
	if opt_ast.value then v.with_ast = true
	var page = null
	var m = modelbuilder.mmodule2nmodule[mm]
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
	v.enter_visit(m)
	if not opt_fragment.value then
		page.add(v.html)
		page.add_raw_html "</pre>"
		page.add_raw_html v.foot_content
		page.add_raw_html "</body>"
	else
		page = v.html
	end

	if dir != null then
		page.write_to_file("{dir}/{mm.name}.html")
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
		n2.attr("href", "{mm.name}.html")
		n2.text(mm.name)
	end
	page.add_raw_html "</li></body>"
	page.write_to_file("{dir}/index.html")

	var v = new HighlightVisitor
	toolcontext.info("write {dir}/style.css", 1)
	var f = new OFStream.open("{dir}/style.css")
	f.write v.css_content
	f.close
end
