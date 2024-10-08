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

module re_app

import re_parser
import popcorn
import popcorn::pop_config

class REHandler
	super Handler

	redef fun get(req, res) do
		res.html new RETemplate
	end

	redef fun post(req, res) do
		# TODO Retrieve re from post body
		var re = req.string_arg("re")

		var tpl = new RETemplate

		if re == null or re.is_empty then
			tpl.error = "Error: empty regexp"
			res.html tpl
			return
		end

		tpl.re = re

		# Parse re
		var re_parser = new REParser
		var node = re_parser.parse_re(re)

		if node == null then
			tpl.error = re_parser.last_error.as(not null)
			res.html tpl
			return
		end

		# Build nfa and dfa
		var nfa = re_parser.make_nfa(node)
		tpl.nfa = automaton_to_svg(nfa)
		tpl.dfa = automaton_to_svg(nfa.to_dfa)

		res.html tpl
	end

	private fun automaton_to_svg(automaton: Automaton): String do
		automaton.to_dot(false).write_to_file "dot.tmp"
		sys.system "dot -Tsvg -osvg.tmp dot.tmp"
		var svg = "svg.tmp".to_path.read_all
		sys.system "rm -f dot.tmp svg.tmp"
		return svg
	end
end

class RETemplate
	super Template

	var re = "a*(b|cd?)+"
	var nfa: nullable String = null
	var dfa: nullable String = null
	var error: nullable String = null

	redef fun rendering do
		add """
<!DOCTYPE html>
<html lang="en">
	<head>
		<meta charset="utf-8" />
		<meta http-equiv="X-UA-Compatible" content="IE=edge" />
		<meta name="viewport" content="width=device-width, initial-scale=1" />
		<title>REParser</title>
		<link rel="stylesheet"
			href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css" />
	</head>
	<body>
		<div class="container">
			<h1>Regular Expressions to NFA and DFA</h1>
			<br><br>
			<label for="re">Enter a regular expression:</label>
			<form action="/" method="POST" class="input-group">
				<input id="re" name="re" type="text" class="form-control" value="{{{re}}}">
				<span class="input-group-btn">
					<input type="submit" class="btn btn-default" value="Convert" />
				</span>
			</form>
			<br><br>"""

			var error = self.error
			if error != null then
				add """<p class="text-danger">{{{error}}}</p>"""
			end

			var nfa = self.nfa
			if nfa != null then
				add """
				<h2>NFA</h2>
				<div>{{{nfa}}}</div><br><br>"""
			end

			var dfa = self.dfa
			if dfa != null then
				add """
				<h2>DFA</h2>
				<div>{{{dfa}}}</div><br><br>"""
			end

		add """</div>
		<div class="text-center text-muted">
			<p>Powered by <a href="http://nitlanguage.org">nit</a>!</p>
		</div>
	</body>
</html>"""
	end
end

var config = new AppConfig
config.parse_options(args)

var app = new App
app.use("/", new REHandler)
app.listen(config.app_host, config.app_port)
