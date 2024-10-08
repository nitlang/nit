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

# Dot rendering library
#
# Example:
# ~~~
# import dot
#
# var graph = new DotGraph("G", "digraph")
#
# var hello = graph.add_node("hello")
# var world = graph.add_node("world")
#
# graph.add_edge(hello, world)
#
# print graph.to_dot
# ~~~
module dot

# Something that can be rendered in dot format.
abstract class DotElement

	# Element ID
	var id: String

	# Element attributes
	var attrs = new AttributeMap

	# Get attribute value for `key`
	fun [](key: String): Object do return attrs[key]

	# Set attribute `value` for `key`
	fun []=(key: String, value: Object) do attrs[key] = value

	# Render `self` to dot format
	fun to_dot: Text do
		var res = new Buffer
		res.append "\"{escape_id}\" "
		if attrs.not_empty then res.append "[{attrs.to_dot(",")}]"
		return res.write_to_string
	end

	# Return `id.escape_to_dot`
	fun escape_id: String do return id.escape_to_dot
end

# Map of graph/node/edge attribute that can be rendered to dot.
class AttributeMap
	super HashMap[String, Object]

	# Render `self` to dot.
	#
	# Use `;` for graph attributes `separator` or `,` for node and edge attributes.
	fun to_dot(separator: String): Text do
		var dot = new Buffer
		for key, value in self do
			dot.append "{key}=\"{value.to_s}\"{separator}"
		end
		return dot
	end
end

# A Graph representation suited for dot format.
#
# Creating a new graph
# ~~~
# var graph = new DotGraph("G", "digraph")
# graph["rankdir"] = "BT"
# graph["ranksep"] = 0.3
# graph["nodesep"] = 0.3
# graph.nodes_attrs["fontname"] = "helvetica"
# graph.edges_attrs["color"] = "gray"
# ~~~
#
# Creating subgraphs
# ~~~
# var sub = new DotGraph("cluster_sub", "subgraph")
# sub["label"] = "process #1"
#
# var a0 = sub.add_node("a0")
# var a1 = sub.add_node("a1")
# sub.add_edge(a0, a1)
#
# graph.add sub
# ~~~
class DotGraph
	super DotElement

	# Graph kind like `graph`, `digraph`, `subgraph`...
	var kind: String is writable

	# Nodes attributes
	var nodes_attrs = new AttributeMap

	# Edges attributes
	var edges_attrs = new AttributeMap

	# Node list by id
	var nodes = new HashMap[String, DotElement]

	# Add a node to the graph
	#
	# If the graph already contains a node with that ID, it will be replaced.
	fun add(element: DotElement) do
		nodes[element.id] = element
	end

	# Edge list
	#
	# There can be multiple edges between the same couple of nodes.
	var edges = new Array[DotEdge]

	# Add a new node to the graph
	fun add_node(id: String): DotNode do
		var node = new DotNode(id)
		add node
		return node
	end

	# Add an edge to the graph
	fun add_edge(from, to: DotElement): DotEdge do
		var edge = new DotEdge(from, to)
		add edge
		return edge
	end

	redef fun to_dot do
		var dot = new Buffer
		dot.append "{kind} \"{id}\" \{\n"
		if attrs.not_empty then dot.append attrs.to_dot(";\n")
		if nodes_attrs.not_empty then dot.append "node[{nodes_attrs.to_dot(",")}];\n"
		if edges_attrs.not_empty then dot.append "edge[{edges_attrs.to_dot(",")}];\n"
		for id, node in nodes do
			dot.append "{node.to_dot};\n"
		end
		for edge in edges do
			dot.append("{edge.to_dot};\n")
		end
		dot.append("\}")
		return dot
	end

	# Render `self` as an SVG image
	fun to_svg: Text do
		var proc = new ProcessDuplex("dot", "-Tsvg")
		var svg = proc.write_and_read(to_dot)
		proc.close
		proc.wait
		return svg
	end

	# Show dot in graphviz (blocking)
	fun show do
		var f = new ProcessWriter("dot", "-Txlib")
		f.write to_dot
		f.close
		f.wait
	end
end

# A dot node
#
# Nodes can be created from scratch
# ~~~
# var node = new DotNode("id")
# node["label"] = "ID"
# ~~~
# Then added to a graph
# ~~~
# var graph = new DotGraph("G", "digraph")
# graph.add node
# ~~~
# Or can be created directly from an existing graph
# ~~~
# var node2 = graph.add_node("id2")
# node2["label"] = "ID2"
# ~~~
class DotNode
	super DotElement
end

# A dot edge that links two nodes
#
# Edges can be created from scratch
# ~~~
# var a1 = new DotNode("a1")
# var b1 = new DotNode("b1")
# var edge = new DotEdge(a1, b1)
# edge["color"] = "blue"
# ~~~
# Then added to a graph
# ~~~
# var graph = new DotGraph("G", "digraph")
# graph.add edge
# ~~~
# Or can be created directly from an existing graph
# ~~~
# var a2 = graph.add_node("a2")
# var b2 = graph.add_node("b2")
# var edge2 = graph.add_edge(a2, b2)
# edge2["color"] = "red"
# ~~~
class DotEdge
	super DotElement
	autoinit from, to

	# Node this edge is from
	var from: DotElement

	# Node this edge goes to
	var to: DotElement

	# Is this edge directed?
	var directed = true is writable

	redef fun id do return "{from.id}--{to.id}"

	redef fun to_dot do
		var res = new Buffer
		res.append "\"{from.escape_id}\" "
		if directed then
			res.append "->"
		else
			res.append "--"
		end
		res.append " \"{to.escape_id}\" "
		if attrs.not_empty then res.append "[{attrs.to_dot(",")}]"
		return res.write_to_string
	end
end
