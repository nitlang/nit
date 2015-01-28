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

# Adds importation and class hierarchy graphs.
module graphs

import doc_base

redef class ToolContext
	# Clickable graphviz image using dot format
	# return null if no graph for this page
	fun tpl_graph(dot: Buffer, name: String, title: nullable String): nullable TplArticle do
		if opt_nodot.value then return null
		var output_dir = output_dir
		var path = output_dir / name
		var path_sh = path.escape_to_sh
		var file = new OFStream.open("{path}.dot")
		file.write(dot)
		file.close
		sys.system("\{ test -f {path_sh}.png && test -f {path_sh}.s.dot && diff -- {path_sh}.dot {path_sh}.s.dot >/dev/null 2>&1 ; \} || \{ cp -- {path_sh}.dot {path_sh}.s.dot && dot -Tpng -o{path_sh}.png -Tcmapx -o{path_sh}.map {path_sh}.s.dot ; \}")
		var fmap = new IFStream.open("{path}.map")
		var map = fmap.read_all
		fmap.close

		var article = new TplArticle("graph")
		var alt = ""
		if title != null then
			article.title = title
			alt = "alt='{title.html_escape}'"
		end
		article.css_classes.add "text-center"
		var content = new Template
		var name_html = name.html_escape
		content.add "<img src='{name_html}.png' usemap='#{name_html}' style='margin:auto' {alt}/>"
		content.add map
		article.content = content
		return article
	end

	# Genrate dot hierarchy for class inheritance
	fun tpl_mmodules_graph(current: MModule, mmodules: Collection[MModule]): nullable TplArticle do
		var poset = new POSet[MModule]
		for mmodule in mmodules do
			if mmodule.is_fictive or mmodule.is_test_suite then continue
			poset.add_node mmodule
			for omodule in mmodules do
				if omodule.is_fictive or omodule.is_test_suite then continue
				poset.add_node mmodule
				if mmodule.in_importation < omodule then
					poset.add_edge(mmodule, omodule)
				end
			end
		end
		# build graph
		var op = new RopeBuffer
		var name = "dep_module_{current.nitdoc_id}"
		op.append("digraph \"{name.escape_to_dot}\" \{ rankdir=BT; node[shape=none,margin=0,width=0,height=0,fontsize=10]; edge[dir=none,color=gray]; ranksep=0.2; nodesep=0.1;\n")
		for mmodule in poset do
			if mmodule == current then
				op.append("\"{mmodule.name.escape_to_dot}\"[shape=box,margin=0.03];\n")
			else
				op.append("\"{mmodule.name.escape_to_dot}\"[URL=\"{mmodule.nitdoc_url.escape_to_dot}\"];\n")
			end
			for omodule in poset[mmodule].direct_greaters do
				op.append("\"{mmodule.name.escape_to_dot}\"->\"{omodule.name.escape_to_dot}\";\n")
			end
		end
		op.append("\}\n")
		return tpl_graph(op, name, null)
	end

	# Generate dot hierarchy for classes
	fun tpl_mclasses_graph(current: MClass, mclasses: Collection[MClass]): nullable TplArticle do
		var poset = new POSet[MClass]

		for mclass in mclasses do
			poset.add_node mclass
			for oclass in mclasses do
				if mclass == oclass then continue
				poset.add_node oclass
				if mclass.in_hierarchy(mainmodule) < oclass then
					poset.add_edge(mclass, oclass)
				end
			end
		end

		var op = new RopeBuffer
		var name = "dep_class_{current.nitdoc_id}"
		op.append("digraph \"{name.escape_to_dot}\" \{ rankdir=BT; node[shape=none,margin=0,width=0,height=0,fontsize=10]; edge[dir=none,color=gray]; ranksep=0.2; nodesep=0.1;\n")
		var classes = poset.to_a
		var todo = new Array[MClass]
		var done = new HashSet[MClass]
		mainmodule.linearize_mclasses(classes)
		if not classes.is_empty then todo.add classes.first
		while not todo.is_empty do
			var c = todo.shift
			if done.has(c) then continue
			done.add c
			if c == current then
				op.append("\"{c.name.escape_to_dot}\"[shape=box,margin=0.03];\n")
			else
				op.append("\"{c.name.escape_to_dot}\"[URL=\"{c.nitdoc_url.escape_to_dot}\"];\n")
			end
			var smallers = poset[c].direct_smallers
			if smallers.length < 10 then
				for c2 in smallers do
					op.append("\"{c2.name.escape_to_dot}\"->\"{c.name.escape_to_dot}\";\n")
				end
				todo.add_all smallers
			else
				op.append("\"...\"->\"{c.name.escape_to_dot}\";\n")
			end
		end
		op.append("\}\n")
		return tpl_graph(op, name, null)
	end
end
