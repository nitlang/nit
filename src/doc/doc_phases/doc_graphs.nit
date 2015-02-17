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
module doc_graphs

import doc_structure
import doc_poset

redef class ToolContext

	# Do not generate `graphviz` diagrams.
	var opt_nodot = new OptionBool("do not generate graphes with graphviz", "--no-dot")

	redef init do
		super
		option_context.add_option(opt_nodot)
	end
end

# This phase insert importation and inheritance graphs into pages.
class GraphPhase
	super DocPhase

	redef fun apply do
		if ctx.opt_nodot.value then return
		for page in doc.pages do
			var article = page.build_graph(self, doc)
			if article == null then continue
			# FIXME avoid diff
			# page.root.add article
			page.root.children[1].children.insert(article, 0)
		end
	end
end

redef class DocPage
	# Build dot graph articles from `mmodules` list.
	#
	# Since only `MEntity pages` contain a graph, this method returns null in all
	# other cases.
	private fun build_graph(v: GraphPhase, doc: DocModel): nullable GraphArticle do return null
end

# TODO graph generation can be factorized in POSet.

redef class MModulePage
	redef fun build_graph(v, doc) do
		var op = new FlatBuffer
		var name = "dep_module_{mentity.nitdoc_id}"
		op.append("digraph \"{name.escape_to_dot}\" \{ rankdir=BT; node[shape=none,margin=0,width=0,height=0,fontsize=10]; edge[dir=none,color=gray]; ranksep=0.2; nodesep=0.1;\n")
		for mmodule in poset do
			if mmodule == self.mentity then
				op.append("\"{mmodule.name.escape_to_dot}\"[shape=box,margin=0.03];\n")
			else
				op.append("\"{mmodule.name.escape_to_dot}\"[URL=\"{mmodule.nitdoc_url.escape_to_dot}\"];\n")
			end
			for omodule in poset[mmodule].direct_greaters do
				op.append("\"{mmodule.name.escape_to_dot}\"->\"{omodule.name.escape_to_dot}\";\n")
			end
		end
		op.append("\}\n")
		return new GraphArticle(mentity, name, op)
	end
end

redef class MClassPage
	redef fun build_graph(v, doc) do
		var op = new FlatBuffer
		var name = "dep_class_{mentity.nitdoc_id}"
		op.append("digraph \"{name.escape_to_dot}\" \{ rankdir=BT; node[shape=none,margin=0,width=0,height=0,fontsize=10]; edge[dir=none,color=gray]; ranksep=0.2; nodesep=0.1;\n")
		var classes = poset.to_a
		var todo = new Array[MClass]
		var done = new HashSet[MClass]
		doc.mainmodule.linearize_mclasses(classes)
		if not classes.is_empty then todo.add classes.first
		while not todo.is_empty do
			var c = todo.shift
			if done.has(c) then continue
			done.add c
			if c == self.mentity then
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
		return new GraphArticle(mentity, name, op)
	end
end

# An article that display an importation or inheritance graph.
#
# The graph is stored in dot format.
# The final output is delayed untill rendering.
class GraphArticle
	super MEntityComposite

	# Graph ID (used for outputing file with names).
	var id: String

	# Dot script of the graph.
	var dot: Text
end
