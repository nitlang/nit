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

# This is an example of a client of the frontend without command-line processing.
#
# It offers a simple nitcorn web server that offers a textarea and nitpick and nitlignt it.
module nitlight_as_a_service

import frontend
import highlight
import nitcorn
import nitcorn::log
import template

# Fully process a content as a nit source file.
fun hightlightcode(hl: HighlightVisitor, content: String): HLCode
do
	# Prepare a stand-alone tool context
	var tc = new ToolContext
	tc.nit_dir = tc.locate_nit_dir # still use the common lib to have core
	tc.keep_going = true # no exit, obviously
	tc.opt_warn.value = -1 # no output, obviously

	# Prepare an stand-alone model and model builder.
	# Unfortunately, models are enclosing and append-only.
	# There is no way (yet?) to have a shared module `core` with
	# isolated and throwable user modules.
	var model = new Model
	var mb = new ModelBuilder(model, tc)

	# Parse the code
	var source = new SourceFile.from_string("", content)
	var lexer = new Lexer(source)
	var parser = new Parser(lexer)
	var tree = parser.parse

	var hlcode = new HLCode(hl, content, source)

	# Check syntax error
	var eof = tree.n_eof
	if eof isa AError then
		mb.error(eof, eof.message)
		hl.hightlight_source(source)
		return hlcode
	end
	var amodule = tree.n_base.as(not null)

	# Load the AST as a module in the model
	# Then process it
	mb.load_rt_module(null, amodule, "")
	mb.run_phases

	# Highlight the processed module
	hl.enter_visit(amodule)
	return hlcode
end

# A standalone highlighted piece of code
class HLCode
	# The highlighter used
	var hl: HighlightVisitor

	# The raw code source
	var content: String

	# The pseudo source-file
	var source: SourceFile
end

# Nitcorn service to hightlight code
#
# It's a single stand-alone page that has to form to itself.
class HighlightAction
	super Action

	redef fun answer(http_request, turi)
	do
		var hl = new HighlightVisitor
		var page = new Template
		var code = http_request.post_args.get_or_null("code")

		page.add """
		<!doctype html><html><head>{{{hl.head_content}}}
		<style>
			{{{hl.css_content}}}
			textarea {width:100%;}
		</style></head><body>
		"""
		# Add the form+textarea
		page.add """
		<form action="#light" method=post><textarea id=code name=code rows=10>{{{code or else ""}}}</textarea><br><input type=submit></form>
		"""

		if code != null then
			# There is code? Process it
			var hlcode = hightlightcode(hl, code)

			# Inject highlight
			page.add "<pre id=light><code id=lightcode>"
			page.add hl.html.write_to_string
			page.add "</code></pre><hr>"
			page.add "<ul>"

			# List messages
			for m in hlcode.source.messages do
				page.add "<li>{m.location.as(not null)}: {m.text}</li>"
			end
			page.add "</ul>"
		end

		page.add hl.foot_content
		page.add """
		</body></html>
		"""

		var response = new HttpResponse(200)
		response.header["Content-Type"] = "text/html"
		response.body = page.write_to_string
		return response
	end
end

var host = "localhost:8080"
if args.length > 0 then host = args.first

var vh = new VirtualHost(host)
vh.routes.add new Route("/", new HighlightAction)
var factory = new HttpFactory.and_libevent
factory.config.virtual_hosts.add vh
factory.run
