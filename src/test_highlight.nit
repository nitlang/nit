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

# Program used to test the Nit highlighter
module test_highlight

import htmlight
import test_phase

class TestHighlightVisitor
	super HtmlightVisitor
	redef fun hrefto(e) do
		return "#" + e.c_name
	end
end

redef fun do_work(mainmodule, mmodules, mb)
do
	var v = new TestHighlightVisitor
	print """<head>
	<meta charset="utf-8">
	<style type="text/css">
	{{{v.css_content}}}
	</style>
	{{{v.head_content}}}
	</head><body>
	"""

	for mm in mmodules do for cd in mm.mclassdefs do for pd in cd.mpropdefs do
		var n = mb.mpropdef2node(pd)
		if not n isa APropdef then continue
		var hl = new TestHighlightVisitor
		hl.highlight_node(n)
		print "<h1 id=\"{pd.c_name}\">{pd.full_name}</h1>"
		printn "<pre><code>"
		hl.html.write_to(stdout)
		print "</code></pre>"
	end

	# Some random nodes
	var thlv = new THLVisitor
	for mm in mmodules do
		var n = mb.mmodule2node(mm)
		thlv.enter_visit(n)
	end

	print v.foot_content
	print "</body></html>"
end

class THLVisitor
	super Visitor
	var seen = new HashSet[String]
	redef fun visit(n)
	do
		var cn = n.class_name
		if not seen.has(cn) then
			seen.add cn

			var hl = new TestHighlightVisitor
			hl.highlight_node(n)
			print "<h2>AST node: {cn} at {n.location}</h2>"
			printn "<pre><code>"
			hl.html.write_to(stdout)
			print "</code></pre>"
		end

		n.visit_all(self)
	end
end
