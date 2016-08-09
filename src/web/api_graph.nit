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

# Render various graph from a model.
module api_graph

import web_base
import dot
import uml

# Group all api handlers in one router.
class APIGraphRouter
	super APIRouter

	init do
		use("/inheritance/:id", new APIInheritanceGraph(config))
	end
end

# Render a hierarchy graph for `mentity` if any.
class APIInheritanceGraph
	super APIHandler

	redef fun get(req, res) do
		var pdepth = req.int_arg("pdepth")
		var cdepth = req.int_arg("cdepth")
		var mentity = mentity_from_uri(req, res)
		if mentity == null then
			res.error 404
			return
		end
		var g = new InheritanceGraph(mentity, view)
		res.send g.draw(pdepth, cdepth).to_svg
	end
end

# Graph for mentity hierarchies
#
# Recursively build parents and children list from a `center`.
class InheritanceGraph
	super ModelVisitor

	# MEntity at the center of this graph
	var center: MEntity

	# ModelView used to filter graph
	var view: ModelView

	# Graph generated
	var graph: DotGraph is lazy do
		var graph = new DotGraph("package_diagram", "digraph")

		graph["compound"] = "true"
		graph["rankdir"] = "BT"
		graph["ranksep"] = 0.3
		graph["nodesep"] = 0.3

		graph.nodes_attrs["margin"] = 0.1
		graph.nodes_attrs["width"] = 0
		graph.nodes_attrs["height"] = 0
		graph.nodes_attrs["fontsize"] = 10
		graph.nodes_attrs["fontname"] = "helvetica"

		graph.edges_attrs["dir"] = "none"
		graph.edges_attrs["color"] = "gray"

		return graph
	end

	# Build the graph
	fun draw(parents_depth, children_depth: nullable Int): DotGraph do
		draw_node center
		draw_parents(center, parents_depth)
		draw_children(center, children_depth)
		return graph
	end

	private var nodes = new HashMap[MEntity, DotElement]
	private var done_parents = new HashSet[MEntity]
	private var done_children = new HashSet[MEntity]

	# Recursively draw parents of mentity
	fun draw_parents(mentity: MEntity, max_depth: nullable Int, current_depth: nullable Int) do
		if done_parents.has(mentity) then return
		done_parents.add mentity
		current_depth = current_depth or else 0
		if max_depth != null and current_depth >= max_depth then
			from_dotdotdot(mentity)
			return
		end
		var parents = mentity.collect_parents(view)
		if parents.length > 10 then
			from_dotdotdot(mentity)
			return
		end
		for parent in parents do
			if parent isa MModule then
				var mgroup = parent.mgroup
				if mgroup != null and mgroup.default_mmodule == parent then parent = mgroup
			end
			if parent isa MGroup then
				if parent.mpackage.mgroups.first == parent then parent = parent.mpackage
			end
			draw_edge(mentity, parent)
		end
		for parent in parents do
			if parent isa MModule then
				var mgroup = parent.mgroup
				if mgroup != null and mgroup.default_mmodule == parent then parent = mgroup
			end
			if parent isa MGroup then
				if parent.mpackage.mgroups.first == parent then parent = parent.mpackage
			end
			draw_parents(parent, max_depth, current_depth + 1)
		end
	end

	# Recursively draw children of mentity
	fun draw_children(mentity: MEntity, max_depth: nullable Int, current_depth: nullable Int) do
		if done_children.has(mentity) then return
		done_children.add mentity
		current_depth = current_depth or else 0
		if max_depth != null and current_depth >= max_depth then
			to_dotdotdot(mentity)
			return
		end
		var children = mentity.collect_children(view)
		if children.length > 10 then
			to_dotdotdot(mentity)
			return
		end
		for child in children do
			if child isa MGroup then
				if child.mpackage.mgroups.first == child then child = child.mpackage
			end
			draw_edge(child, mentity)
		end
		for child in children do
			if child isa MGroup then
				if child.mpackage.mgroups.first == child then child = child.mpackage
			end
			draw_children(child, max_depth, current_depth + 1)
		end
	end

	# Draw a node from a `mentity`
	fun draw_node(mentity: MEntity): DotElement do
		if nodes.has_key(mentity) then return nodes[mentity]
		var node: DotElement = mentity.to_dot_node
		if mentity == center then node = highlight(node)
		nodes[mentity] = node
		graph.add node
		return node
	end

	private var edges = new HashMap2[MEntity, MEntity, DotEdge]

	# Draw a edges between two mentities
	fun draw_edge(from, to: MEntity): DotEdge do
		if edges.has(from, to) then return edges[from, to].as(not null)
		if edges.has(to, from) then return edges[to, from].as(not null)
		var nfrom = draw_node(from)
		var nto = draw_node(to)
		var edge = new DotEdge(nfrom, nto)
		edges[from, to] = edge
		graph.add edge
		return edge
	end

	private var to_dots = new HashMap[MEntity, DotElement]

	# Create a link from `mentity` to a `...` node
	fun to_dotdotdot(mentity: MEntity): DotEdge do
		var nto = draw_node(mentity)
		var dots = to_dots.get_or_null(mentity)
		if dots == null then
			dots = dotdotdot("{nto.id}...")
			to_dots[mentity] = dots
		end
		graph.add dots
		var edge = new DotEdge(dots, nto)
		graph.add edge
		return edge
	end

	private var from_dots = new HashMap[MEntity, DotElement]

	# Create a link from a `...` node to a `mentity`
	fun from_dotdotdot(mentity: MEntity): DotEdge do
		var nfrom = draw_node(mentity)
		var dots = to_dots.get_or_null(mentity)
		if dots == null then
			dots = dotdotdot("...{nfrom.id}")
			from_dots[mentity] = dots
		end
		graph.add dots
		var edge = new DotEdge(dots, nfrom)
		graph.add edge
		return edge
	end

	# Change the border color of the node
	fun highlight(dot: DotElement): DotElement do
		dot["color"] = "#1E9431"
		return dot
	end

	# Generate a `...` node
	fun dotdotdot(id: String): DotNode do
		var node = new DotNode(id)
		node["label"] = "..."
		node["shape"] = "none"
		return node
	end
end

redef class MEntity
	private fun to_dot_node: DotNode do
		var node = new DotNode(full_name)
		node["URL"] = web_url
		node["label"] = name
		return node
	end
end

redef class MPackage
	redef fun to_dot_node do
		var node = super
		node["shape"] = "tab"
		return node
	end
end

redef class MGroup
	redef fun to_dot_node do
		var node = super
		node["shape"] = "folder"
		return node
	end
end

redef class MModule
	redef fun to_dot_node do
		var node = super
		node["shape"] = "note"
		return node
	end
end

redef class MClass
	redef fun to_dot_node do
		var node = super
		node["shape"] = "box"
		return node
	end
end
