# This file is part of NIT ( https://nitlanguage.org ).
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

# Graph commands
#
# Commands that return graphical representations about a Model or a MEntity.
module commands_graph

import commands_model

import uml
import dot

# An abstract command that returns a dot graph
abstract class CmdGraph
	super DocCommand

	# Mainmodule for linearization
	var mainmodule: MModule

	# Rendering format
	#
	# Default is `dot`.
	# See `allowed_formats`.
	var format = "dot" is optional, writable

	# Allowed rendering formats.
	#
	# Can be `dot` or `svg`.
	var allowed_formats: Array[String] = ["dot", "svg"]

	# Dot to render
	var dot: nullable Writable = null is optional, writable

	# Render `dot` depending on `format`
	fun render: nullable Writable do
		var dot = self.dot
		if dot == null then return null
		if format == "svg" then
			var proc = new ProcessDuplex("dot", "-Tsvg")
			var svg = proc.write_and_read(dot.write_to_string)
			proc.close
			proc.wait
			return svg
		end
		return dot
	end

	redef fun init_command do
		if not allowed_formats.has(format) then
			return new ErrorBadGraphFormat(format, allowed_formats)
		end
		return super
	end
end

# Bad graph format requested
class ErrorBadGraphFormat
	super CmdError

	# Provided format
	var format: String

	# Allowed formats
	var allowed_formats: Array[String]

	redef fun to_s do
		var allowed_values = new Buffer
		for allowed in allowed_formats do
			allowed_values.append "`{allowed}`"
			if allowed != allowed_formats.last then
				allowed_values.append ", "
			end
		end
		return "Bad format `{format}`. Allowed values are {allowed_values.write_to_string}."
	end
end

# UML command
#
# Return an UML diagram about a `mentity`.
class CmdUML
	super CmdEntity
	super CmdGraph

	autoinit(model, mainmodule, filter, mentity, mentity_name, format, uml)

	# UML model to return
	var uml: nullable UMLModel = null is optional, writable

	redef fun init_command do
		if uml != null then return new CmdSuccess

		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)

		if mentity isa MClassDef then mentity = mentity.mclass
		if mentity isa MClass or mentity isa MModule then
			uml = new UMLModel(model, mainmodule, filter)
		else
			return new WarningNoUML(mentity)
		end
		return res
	end

	redef fun render do
		var uml = self.uml
		if uml == null then return null
		if mentity isa MClass then
			dot = uml.generate_class_uml.write_to_string
		else if mentity isa MModule then
			dot = uml.generate_package_uml.write_to_string
		end
		return super
	end
end

# No UML model for `mentity`
class WarningNoUML
	super CmdWarning

	# MEntity provided
	var mentity: MEntity

	redef fun to_s do return "No UML for `{mentity.full_name}`"
end

# Render a hierarchy graph for `mentity` if any.
class CmdInheritanceGraph
	super CmdEntity
	super CmdGraph

	autoinit(model, mainmodule, filter, mentity, mentity_name, pdepth, cdepth, format, graph)

	# Parents depth to display
	var pdepth: nullable Int = null is optional, writable

	# Children depth to display
	var cdepth: nullable Int = null is optional, writable

	# Inheritance graph to return
	var graph: nullable InheritanceGraph = null is optional, writable

	redef fun init_command do
		if graph != null then return new CmdSuccess

		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)

		graph = new InheritanceGraph(mentity, model, mainmodule, filter)
		return res
	end

	redef fun render do
		var graph = self.graph
		if graph == null then return ""
		self.dot = graph.draw(pdepth, cdepth).to_dot
		return super
	end
end

# Graph for mentity hierarchies
#
# Recursively build parents and children list from a `center`.
class InheritanceGraph

	# MEntity at the center of this graph
	var center: MEntity

	# Model used to build graph from
	var model: Model

	# Mainmodule for class linearization
	var mainmodule: MModule

	# Filter to apply on model if any
	var filter: nullable ModelFilter

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
		var parents = mentity.collect_parents(mainmodule, filter)
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
		var children = mentity.collect_children(mainmodule, filter)
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
	# Return `self` as a DotNode
	fun to_dot_node: DotNode do
		var node = new DotNode(full_name)
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
