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

# A Markdown parser for Nit.
module nitmd

import markdown_html_rendering
import markdown_md_rendering
import markdown_man_rendering
import markdown_latex_rendering

import config

var opt_to = new OptionString("Specify output format (html, md, man, latex)", "-t", "--to")

var usage = new Buffer
usage.append "Usage: nitmd [-t format] [file.md]\n"
usage.append "Translate Markdown documents to other formats.\n\n"
usage.append "If no argument, read the Markdown input from `stdin`."

var config = new Config
config.add_option(opt_to)
config.tool_description = usage.write_to_string

config.parse_options(args)
if config.args.length > 1 then
	config.usage
	exit 1
end

var md
if config.args.is_empty then
	md = sys.stdin.read_all
else
	var file = config.args.first
	if not file.file_exists then
		print "'{file}' not found"
		exit 1
	end
	md = file.to_path.read_all
end

# Parse the input
var parser = new MdParser
var node = parser.parse(md)

var renderer: MdRenderer
var to = opt_to.value
if to == null or to == "html" then
	renderer = new HtmlRenderer
else if to == "md" then
	renderer = new MarkdownRenderer
else if to == "man" then
	renderer = new ManRenderer
else if to == "latex" then
	renderer = new LatexRenderer
else
	print "Unknown output format: {to}"
	exit 1
	return
end
printn renderer.render(node)
