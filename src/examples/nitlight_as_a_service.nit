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

# This is an example of a client of the frontend without command-line processing.
#
# It offers a simple nitcorn web server that offers a textarea and nitpick and nitlignt it.
module nitlight_as_a_service is example

import frontend
import htmlight
import nitcorn
import nitcorn::log
import template
import json::serialization_write

# Nitcorn service to highlight code
#
# It's a single stand-alone page that has to form to itself.
class HighlightAction
	super Action

	redef fun answer(http_request, turi)
	do
		var hl = new HtmlightVisitor
		var page = new Template

		# There is code? Process it
		var code = http_request.post_args.get_or_null("code")
		var hlcode = null
		if code != null then hlcode = hl.highlightcode(code)

		if http_request.post_args.get_or_null("json") == "true" and hlcode != null then
			var response = new HttpResponse(200)
			response.header["Content-Type"] = "text/json"
			response.body = hlcode.to_json
			return response
		end

		if http_request.post_args.get_or_null("ajax") == "true" and hlcode != null then
			page.add hlcode.code_mirror_update
			page.add """
			document.getElementById("lightcode").innerHTML = "{{{hl.html.write_to_string.escape_to_c}}}";
			nitmessage();
			"""

			var response = new HttpResponse(200)
			response.header["Content-Type"] = "application/javascript"
			response.body = page.write_to_string
			return response
		end

		page.add """
		<!doctype html><html><head>{{{hl.head_content}}}
		<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/codemirror/5.16.0/codemirror.css">
		<style>
			{{{hl.css_content}}}
			textarea {width:100%;}
			.lint-error {font-family: arial; font-size: 70%; background: #ffa; color: #a00; padding: 2px 5px 3px; }
			.lint-error-icon {color: red; padding: 0 3px; margin-right: 7px;}
		</style></head><body>
		"""
		# Add the form+textarea
		page.add """
		<form action="#light" method=post><textarea id=code name=code rows=10>{{{code or else ""}}}</textarea><br><input type=submit></form>
		"""

		if hlcode != null then
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
		else
			page.add "<pre id=light><code id=lightcode></code></pre>"
		end

		page.add hl.foot_content

		# Call codemirror
		page.add """
		<script type="text/javascript" src="https://cdnjs.cloudflare.com/ajax/libs/codemirror/5.16.0/codemirror.min.js"></script>
		<script>
		var editor = CodeMirror.fromTextArea(document.getElementById("code"), {
			lineNumbers: true
		});
		"""

		# Callback to update codemirror messages
		if hlcode != null then
			page.add hlcode.code_mirror_update
		else
			page.add "function nitmessage()\{\}"
		end
		page.add """
		var widgets = [];
		nitmessage();

		function updatePage() {
		$.post("", { ajax: true, code: editor.getValue()}, function(data) {
			eval(data);
			$(".popupable").popover({html:true, placement:'top'});
		});
		}

		var waiting;
		editor.on("change", function() {
			clearTimeout(waiting);
			waiting = setTimeout(updatePage, 500);
		});
		waiting = setTimeout(updatePage, 500);

		</script>
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
