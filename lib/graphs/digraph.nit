# This file is part of NIT (http://www.nitlanguage.org).
#
# Copyright 2015 Alexandre Blondin Massé <blondin_masse.alexandre@uqam.ca>
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

# Implementation of directed graphs, also called digraphs.
#
# Overview
# ========
#
# This module provides a simple interface together with a concrete
# implementation of directed graphs (or digraphs).
#
# The upper level interface is `Digraph` and contains all methods for digraphs
# that do not depend on the underlying data structure. More precisely, if basic
# operations such as `predecessors`, `successors`, `num_vertices`, etc.  are
# implemented, then high level operations (such as computing the connected
# components or a shortest path between two vertices) can be easily derived.
# Also, all methods found in `Digraph` do no modify the graph. For mutable
# methods, one needs to check the `MutableDigraph` child class. Vertices can be
# any `Object`, but there is no information stored in the arcs, which are
# simple arrays of the form `[u,v]`, where `u` is the source of the arc and `v`
# is the target.
#
# There is currently only one concrete implementation named `HashDigraph` that
# makes use of the HashMap class for storing the predecessors and successors.
# It is therefore simple to provide another implementation: One only has to
# create a concrete specialization of either `Digraph` or `MutableDigraph`.
#
# Basic methods
# =============
#
# To create an (empty) new graph whose keys are integers, one simply type
# ~~~
# import digraph
# var g = new HashDigraph[Int]
# ~~~
#
# Then we can add vertices and arcs. Note that if an arc is added whose source
# and target are not already in the digraph, the vertices are added beforehand.
# ~~~
# import digraph
# var g = new HashDigraph[Int]
# g.add_vertex(0)
# g.add_vertex(1)
# g.add_arc(0,1)
# g.add_arc(1,2)
# assert g.to_s == "Digraph of 3 vertices and 2 arcs"
# ~~~
#
# One might also create digraphs with strings in vertices, for instance to
# represent some directed relation. However, it is currently not possible to
# store values in the arcs.
# ~~~
# import digraph
# var g = new HashDigraph[String]
# g.add_vertex("Amy")
# g.add_vertex("Bill")
# g.add_vertex("Chris")
# g.add_vertex("Diane")
# g.add_arc("Amy", "Bill")    # Amy likes Bill
# g.add_arc("Bill", "Amy")    # Bill likes Amy
# g.add_arc("Chris", "Diane") # and so on
# g.add_arc("Diane", "Amy")   # and so on
# ~~~
#
# `HashDigraph`s are mutable, i.e. one might remove arcs and/or vertices:
# ~~~
# import digraph
# var g = new HashDigraph[Int]
# g.add_arc(0,1)
# g.add_arc(0,2)
# g.add_arc(1,2)
# g.add_arc(2,3)
# g.add_arc(2,4)
# g.remove_vertex(1)
# g.remove_arc(2, 4)
# assert g.to_s == "Digraph of 4 vertices and 2 arcs"
# ~~~
#
# If one has installed [Graphviz](http://graphviz.org), it is easy to produce a
# *dot* file which Graphviz process into a picture:
# ~~~
# import digraph
# var g = new HashDigraph[Int]
# g.add_arcs([[0,1],[0,2],[1,2],[2,3],[2,4]])
# print g.to_dot
# # Then call "dot -Tpng -o graph.png"
# ~~~
#
# ![A graph drawing produced by Graphviz](https://github.com/privat/nit/blob/master/lib/graph.png)
#
# Other methods
# =============
#
# There exist other methods available for digraphs and many other will be
# implemented in the future. For more details, one should look at the methods
# directly. For instance, the [strongly connected components]
# (https://en.wikipedia.org/wiki/Strongly_connected_component) of a digraph are
# returned as a [disjoint set data structure]
# (https://en.wikipedia.org/wiki/Disjoint-set_data_structure) (i.e. a set of
# sets):
# ~~~
# import digraph
# var g = new HashDigraph[Int]
# g.add_arcs([[1,2],[2,1],[2,3],[3,4],[4,5],[5,3]])
# for component in g.strongly_connected_components.to_partitions
# do
# 	print component
# end
# # Prints [1,2] and [3,4,5]
# ~~~
#
# It is also possible to compute a shortest (directed) path between two
# vertices:
# ~~~
# import digraph
# var g = new HashDigraph[Int]
# g.add_arcs([[1,2],[2,1],[2,3],[3,4],[4,5],[5,3]])
# var path = g.a_shortest_path(2, 4)
# if path != null then print path else print "No path"
# # Prints [2,3,4]
# path = g.a_shortest_path(4, 2)
# if path != null then print path else print "No path"
# # Prints "No path"
# ~~~
#
# Extending the library
# =====================
#
# There are at least two ways of providing new methods on digraphs. If the
# method is standard and could be useful to other users, you should consider
# including your implementation directly in this library.
#
# Otherwise, for personal use, you should simply define a new class inheriting
# from `HashDigraph` and add the new services.
module digraph

# Interface for digraphs
interface Digraph[V: Object]

	## ---------------- ##
	## Abstract methods ##
	## ---------------- ##

	# The number of vertices in this graph.
	#
	# ~~~
	# import digraph
	# var g = new HashDigraph[Int]
	# g.add_vertex(0)
	# g.add_vertex(1)
	# assert g.num_vertices == 2
	# g.add_vertex(0)
	# assert g.num_vertices == 2
	# ~~~
	fun num_vertices: Int is abstract

	# The number of arcs in this graph.
	#
	# ~~~
	# import digraph
	# var g = new HashDigraph[Int]
	# g.add_arc(0, 1)
	# assert g.num_arcs == 1
	# g.add_arc(0, 1)
	# assert g.num_arcs == 1
	# g.add_arc(2, 3)
	# assert g.num_arcs == 2
	# ~~~
	fun num_arcs: Int is abstract

	# Returns true if and only if `u` exists in this graph.
	#
	# ~~~
	# import digraph
	# var g = new HashDigraph[Int]
	# g.add_vertex(1)
	# assert g.has_vertex(1)
	# assert not g.has_vertex(0)
	# g.add_vertex(1)
	# assert g.has_vertex(1)
	# assert not g.has_vertex(0)
	# ~~~
	fun has_vertex(u: V): Bool is abstract

	# Returns true if and only if `(u,v)` is an arc in this graph.
	#
	# ~~~
	# import digraph
	# var g = new HashDigraph[Int]
	# g.add_arc(0, 1)
	# g.add_arc(1, 2)
	# assert g.has_arc(0, 1)
	# assert g.has_arc(1, 2)
	# assert not g.has_arc(0, 2)
	# ~~~
	fun has_arc(u, v: V): Bool is abstract

	# Returns the predecessors of `u`.
	#
	# If `u` does not exist, then it returns null.
	#
	# ~~~
	# import digraph
	# var g = new HashDigraph[Int]
	# g.add_arc(0, 1)
	# g.add_arc(1, 2)
	# g.add_arc(0, 2)
	# assert g.predecessors(2).has(0)
	# assert g.predecessors(2).has(1)
	# assert not g.predecessors(2).has(2)
	# ~~~
	fun predecessors(u: V): Collection[V] is abstract

	# Returns the successors of `u`.
	#
	# If `u` does not exist, then an empty collection is returned.
	#
	# ~~~
	# import digraph
	# var g = new HashDigraph[Int]
	# g.add_arc(0, 1)
	# g.add_arc(1, 2)
	# g.add_arc(0, 2)
	# assert not g.successors(0).has(0)
	# assert g.successors(0).has(1)
	# assert g.successors(0).has(2)
	# ~~~
	fun successors(u: V): Collection[V] is abstract

	# Returns an iterator over the vertices of this graph.
	#
	# ~~~
	# import digraph
	# var g = new HashDigraph[Int]
	# g.add_arc(0, 1)
	# g.add_arc(0, 2)
	# g.add_arc(1, 2)
	# var vs = new HashSet[Int]
	# for v in g.vertices_iterator do vs.add(v)
	# assert vs == new HashSet[Int].from([0,1,2])
	# ~~~
	fun vertices_iterator: Iterator[V] is abstract

	## -------------------- ##
	## Non abstract methods ##
	## -------------------- ##

	## ------------- ##
	## Basic methods ##
	## ------------- ##

	# Returns true if and only if this graph is empty.
	#
	# An empty graph is a graph without vertex and arc.
	#
	# ~~~
	# import digraph
	# assert (new HashDigraph[Int]).is_empty
	# ~~~
	fun is_empty: Bool do return num_vertices == 0 and num_arcs == 0

	# Returns an array containing the vertices of this graph.
	#
	# ~~~
	# import digraph
	# var g = new HashDigraph[Int]
	# g.add_vertices([0,2,4,5])
	# assert g.vertices.length == 4
	# ~~~
	fun vertices: Array[V] do return [for u in vertices_iterator do u]

	# Returns an iterator over the arcs of this graph
	#
	# ~~~
	# import digraph
	# var g = new HashDigraph[Int]
	# g.add_arc(0, 1)
	# g.add_arc(0, 2)
	# g.add_arc(1, 2)
	# for arc in g.arcs_iterator do
	# 	assert g.has_arc(arc[0], arc[1])
	# end
	# ~~~
	fun arcs_iterator: Iterator[Array[V]] do return new ArcsIterator[V](self)

	# Returns the arcs of this graph.
	#
	# ~~~
	# import digraph
	# var g = new HashDigraph[Int]
	# g.add_arc(1, 3)
	# g.add_arc(2, 3)
	# assert g.arcs.length == 2
	# ~~~
	fun arcs: Array[Array[V]] do return [for arc in arcs_iterator do arc]

	# Returns the incoming arcs of vertex `u`.
	#
	# If `u` is not in this graph, an empty array is returned.
	#
	# ~~~
	# import digraph
	# var g = new HashDigraph[Int]
	# g.add_arc(1, 3)
	# g.add_arc(2, 3)
	# for arc in g.incoming_arcs(3) do
	# 	assert g.is_predecessor(arc[0], arc[1])
	# end
	# ~~~
	fun incoming_arcs(u: V): Collection[Array[V]]
	do
		if has_vertex(u) then
			return [for v in predecessors(u) do [v, u]]
		else
			return new Array[Array[V]]
		end
	end

	# Returns the outgoing arcs of vertex `u`.
	#
	# If `u` is not in this graph, an empty array is returned.
	#
	# ~~~
	# import digraph
	# var g = new HashDigraph[Int]
	# g.add_arc(1, 3)
	# g.add_arc(2, 3)
	# g.add_arc(1, 2)
	# for arc in g.outgoing_arcs(1) do
	# 	assert g.is_successor(arc[1], arc[0])
	# end
	# ~~~
	fun outgoing_arcs(u: V): Collection[Array[V]]
	do
		if has_vertex(u) then
			return [for v in successors(u) do [u, v]]
		else
			return new Array[Array[V]]
		end
	end

	## ---------------------- ##
	## String representations ##
	## ---------------------- ##

	redef fun to_s
	do
		var vertex_word = "vertices"
		var arc_word = "arcs"
		if num_vertices <= 1 then vertex_word = "vertex"
		if num_arcs <= 1 then arc_word = "arc"
		return "Digraph of {num_vertices} {vertex_word} and {num_arcs} {arc_word}"
	end

	# Returns a GraphViz string representing this digraph.
	fun to_dot: String
	do
		var s = "digraph \{\n"
		# Writing the vertices
		for u in vertices_iterator do
			s += "   \"{u.to_s.escape_to_dot}\" "
			s += "[label=\"{u.to_s.escape_to_dot}\"];\n"
		end
		# Writing the arcs
		for arc in arcs do
			s += "   {arc[0].to_s.escape_to_dot} "
			s += "-> {arc[1].to_s.escape_to_dot};"
		end
		s += "\}"
		return s
	end

	## ------------ ##
	## Neighborhood ##
	## ------------ ##

	# Returns true if and only if `u` is a predecessor of `v`.
	#
	# ~~~
	# import digraph
	# var g = new HashDigraph[Int]
	# g.add_arc(1, 3)
	# assert g.is_predecessor(1, 3)
	# assert not g.is_predecessor(3, 1)
	# ~~~
	fun is_predecessor(u, v: V): Bool do return has_arc(u, v)

	# Returns true if and only if `u` is a successor of `v`.
	#
	# ~~~
	# import digraph
	# var g = new HashDigraph[Int]
	# g.add_arc(1, 3)
	# assert not g.is_successor(1, 3)
	# assert g.is_successor(3, 1)
	# ~~~
	fun is_successor(u, v: V): Bool do return has_arc(v, u)

	# Returns the number of arcs whose target is `u`.
	#
	# ~~~
	# import digraph
	# var g = new HashDigraph[Int]
	# g.add_arc(1, 3)
	# g.add_arc(2, 3)
	# assert g.in_degree(3) == 2
	# assert g.in_degree(1) == 0
	# ~~~
	fun in_degree(u: V): Int do return predecessors(u).length

	# Returns the number of arcs whose source is `u`.
	#
	# ~~~
	# import digraph
	# var g = new HashDigraph[Int]
	# g.add_arc(1, 2)
	# g.add_arc(1, 3)
	# g.add_arc(2, 3)
	# assert g.out_degree(3) == 0
	# assert g.out_degree(1) == 2
	# ~~~
	fun out_degree(u: V): Int do return successors(u).length

	# ------------------ #
	# Paths and circuits #
	# ------------------ #

	# Returns true if and only if `vertices` is a path of this digraph.
	#
	# ~~~
	# import digraph
	# var g = new HashDigraph[Int]
	# g.add_arc(1, 2)
	# g.add_arc(2, 3)
	# g.add_arc(3, 4)
	# assert g.has_path([1,2,3])
	# assert not g.has_path([1,3,3])
	# ~~~
	fun has_path(vertices: SequenceRead[V]): Bool
	do
		for i in [0..vertices.length - 1[ do
			if not has_arc(vertices[i], vertices[i + 1]) then return false
		end
		return true
	end

	# Returns true if and only if `vertices` is a circuit of this digraph.
	#
	# ~~~
	# import digraph
	# var g = new HashDigraph[Int]
	# g.add_arc(1, 2)
	# g.add_arc(2, 3)
	# g.add_arc(3, 1)
	# assert g.has_circuit([1,2,3,1])
	# assert not g.has_circuit([1,3,2,1])
	# ~~~
	fun has_circuit(vertices: SequenceRead[V]): Bool
	do
		return vertices.is_empty or (has_path(vertices) and vertices.first == vertices.last)
	end

	# Returns a shortest path from vertex `u` to `v`.
	#
	# If no path exists between `u` and `v`, it returns `null`.
	#
	# ~~~
	# import digraph
	# var g = new HashDigraph[Int]
	# g.add_arc(1, 2)
	# g.add_arc(2, 3)
	# g.add_arc(3, 4)
	# assert g.a_shortest_path(1, 4).length == 4
	# g.add_arc(1, 3)
	# assert g.a_shortest_path(1, 4).length == 3
	# assert g.a_shortest_path(4, 1) == null
	# ~~~
	fun a_shortest_path(u, v: V): nullable Sequence[V]
	do
		var queue = new List[V].from([u]).as_fifo
		var pred = new HashMap[V, nullable V]
		var visited = new HashSet[V]
		var w: nullable V = null
		pred[u] = null
		while not queue.is_empty do
			w = queue.take
			if not visited.has(w) then
				visited.add(w)
				if w == v then break
				for wp in successors(w) do
					if not pred.keys.has(wp) then
						queue.add(wp)
						pred[wp] = w
					end
				end
			end
		end
		if w != v then
			return null
		else
			var path = new List[V]
			path.add(v)
			w = v
			while pred[w] != null do
				path.unshift(pred[w].as(not null))
				w = pred[w]
			end
			return path
		end
	end

	# Returns the distance between `u` and `v`
	#
	# If no path exists between `u` and `v`, it returns null. It is not
	# symmetric, i.e. we may have `dist(u, v) != dist(v, u)`.
	#
	# ~~~
	# import digraph
	# var g = new HashDigraph[Int]
	# g.add_arc(1, 2)
	# g.add_arc(2, 3)
	# g.add_arc(3, 4)
	# assert g.distance(1, 4) == 3
	# g.add_arc(1, 3)
	# assert g.distance(1, 4) == 2
	# assert g.distance(4, 1) == null
	# ~~~
	fun distance(u, v: V): nullable Int
	do
		var queue = new List[V].from([u]).as_fifo
		var dist = new HashMap[V, Int]
		var visited = new HashSet[V]
		var w: nullable V
		dist[u] = 0
		while not queue.is_empty do
			w = queue.take
			if not visited.has(w) then
				visited.add(w)
				if w == v then break
				for wp in successors(w) do
					if not dist.keys.has(wp) then
						queue.add(wp)
						dist[wp] = dist[w] + 1
					end
				end
			end
		end
		return dist.get_or_null(v)
	end

	# -------------------- #
	# Connected components #
	# -------------------- #

	# Returns the weak connected components of this digraph.
	#
	# The weak connected components of a digraph are the usual
	# connected components of its associated undirected graph,
	# i.e. the graph obtained by replacing each arc by an edge.
	#
	# ~~~
	# import digraph
	# var g = new HashDigraph[Int]
	# g.add_arc(1, 2)
	# g.add_arc(2, 3)
	# g.add_arc(4, 5)
	# assert g.weakly_connected_components.number_of_subsets == 2
	# ~~~
	fun weakly_connected_components: DisjointSet[V]
	do
		var components = new DisjointSet[V]
		components.add_all(vertices)
		for arc in arcs_iterator do
			components.union(arc[0], arc[1])
		end
		return components
	end

	# Returns the strongly connected components of this digraph.
	#
	# Two vertices `u` and `v` belong to the same strongly connected
	# component if and only if there exists a path from `u` to `v`
	# and there exists a path from `v` to `u`.
	#
	# This is computed in linear time (Tarjan's algorithm).
	#
	# ~~~
	# import digraph
	# var g = new HashDigraph[Int]
	# g.add_arc(1, 2)
	# g.add_arc(2, 3)
	# g.add_arc(3, 1)
	# g.add_arc(3, 4)
	# g.add_arc(4, 5)
	# g.add_arc(5, 6)
	# g.add_arc(6, 5)
	# assert g.strongly_connected_components.number_of_subsets == 3
	# ~~~
	fun strongly_connected_components: DisjointSet[V]
	do
		var tarjanAlgorithm = new TarjanAlgorithm[V](self)
		return tarjanAlgorithm.strongly_connected_components
	end
end

# Computing the strongly connected components using Tarjan's algorithm
private class TarjanAlgorithm[V: Object]
	# The graph whose strongly connected components will be computed
	var graph: Digraph[V]
	# The strongly connected components computed in Tarjan's algorithm
	var sccs = new DisjointSet[V]
	# An index used for Tarjan's algorithm
	var index = 0
	# A stack used for Tarjan's algorithm
	var stack: Queue[V] = (new Array[V]).as_lifo
	# A map associating with each vertex its index
	var vertex_to_index = new HashMap[V, Int]
	# A map associating with each vertex its ancestor in Tarjan's algorithm
	var ancestor = new HashMap[V, Int]
	# True if and only if the vertex is in the stack
	var in_stack = new HashSet[V]

	# Returns the strongly connected components of a graph
	fun strongly_connected_components: DisjointSet[V]
	do
		for u in graph.vertices_iterator do sccs.add(u)
		for v in graph.vertices_iterator do
			visit(v)
		end
		return sccs
	end

	# The recursive part of Tarjan's algorithm
	fun visit(u: V)
	do
		vertex_to_index[u] = index
		ancestor[u] = index
		index += 1
		stack.add(u)
		in_stack.add(u)
		for v in graph.successors(u) do
			if not vertex_to_index.keys.has(v) then
				visit(v)
				ancestor[u] = ancestor[u].min(ancestor[v])
			else if in_stack.has(v) then
				ancestor[u] = ancestor[u].min(vertex_to_index[v])
			end
		end
		if vertex_to_index[u] == ancestor[u] then
			var v
			loop
				v = stack.take
				in_stack.remove(v)
				sccs.union(u, v)
				if u == v then break
			end
		end
	end
end

# Arcs iterator
class ArcsIterator[V: Object]
	super Iterator[Array[V]]

	# The graph whose arcs are iterated over
	var graph: Digraph[V]
	# Attributes
	#
	private var sources_iterator: Iterator[V] is noinit
	private var targets_iterator: Iterator[V] is noinit
	init
	do
		sources_iterator = graph.vertices_iterator
		if sources_iterator.is_ok then
			targets_iterator = graph.successors(sources_iterator.item).iterator
			if not targets_iterator.is_ok then update_iterators
		end
	end

	redef fun is_ok do return sources_iterator.is_ok and targets_iterator.is_ok

	redef fun item do return [sources_iterator.item, targets_iterator.item]

	redef fun next
	do
		targets_iterator.next
		update_iterators
	end

	private fun update_iterators
	do
		while not targets_iterator.is_ok and sources_iterator.is_ok
		do
			sources_iterator.next
			if sources_iterator.is_ok then
				targets_iterator = graph.successors(sources_iterator.item).iterator
			end
		end
	end
end

# Mutable digraph
abstract class MutableDigraph[V: Object]
	super Digraph[V]

	## ---------------- ##
	## Abstract methods ##
	## ---------------- ##

	# Adds the vertex `u` to this graph.
	#
	# If `u` already belongs to the graph, then nothing happens.
	#
	# ~~~
	# import digraph
	# var g = new HashDigraph[Int]
	# g.add_vertex(0)
	# assert g.has_vertex(0)
	# assert not g.has_vertex(1)
	# g.add_vertex(1)
	# assert g.num_vertices == 2
	# ~~~
	fun add_vertex(u: V) is abstract

	# Removes the vertex `u` from this graph and all its incident arcs.
	#
	# If the vertex does not exist in the graph, then nothing happens.
	#
	# ~~~
	# import digraph
	# var g = new HashDigraph[Int]
	# g.add_vertex(0)
	# g.add_vertex(1)
	# assert g.has_vertex(0)
	# g.remove_vertex(0)
	# assert not g.has_vertex(0)
	# ~~~
	fun remove_vertex(u: V) is abstract

	# Adds the arc `(u,v)` to this graph.
	#
	# If there is already an arc from `u` to `v` in this graph, then
	# nothing happens. If vertex `u` or vertex `v` do not exist in the
	# graph, they are added.
	#
	# ~~~
	# import digraph
	# var g = new HashDigraph[Int]
	# g.add_arc(0, 1)
	# g.add_arc(1, 2)
	# assert g.has_arc(0, 1)
	# assert g.has_arc(1, 2)
	# assert not g.has_arc(1, 0)
	# g.add_arc(1, 2)
	# assert g.num_arcs == 2
	# ~~~
	fun add_arc(u, v: V) is abstract

	# Removes the arc `(u,v)` from this graph.
	#
	# If the arc does not exist in the graph, then nothing happens.
	#
	# ~~~
	# import digraph
	# var g = new HashDigraph[Int]
	# g.add_arc(0, 1)
	# assert g.num_arcs == 1
	# g.remove_arc(0, 1)
	# assert g.num_arcs == 0
	# g.remove_arc(0, 1)
	# assert g.num_arcs == 0
	# ~~~
	fun remove_arc(u, v: V) is abstract

	## -------------------- ##
	## Non abstract methods ##
	## -------------------- ##

	# Adds all vertices of `vertices` to this digraph.
	#
	# If vertices appear more than once, they are only added once.
	#
	# ~~~
	# import digraph
	# var g = new HashDigraph[Int]
	# g.add_vertices([0,1,2,3])
	# assert g.num_vertices == 4
	# g.add_vertices([2,3,4,5])
	# assert g.num_vertices == 6
	# ~~~
	fun add_vertices(vertices: Collection[V])
	do
		for u in vertices do add_vertex(u)
	end

	# Adds all arcs of `arcs` to this digraph.
	#
	# If arcs appear more than once, they are only added once.
	#
	# ~~~
	# import digraph
	# var g = new HashDigraph[Int]
	# var arcs = [[0,1], [1,2], [1,2]]
	# g.add_arcs(arcs)
	# assert g.num_arcs == 2
	# ~~~
	fun add_arcs(arcs: Collection[Array[V]])
	do
		for a in arcs do add_arc(a[0], a[1])
	end
end
# A directed graph represented by hash maps
class HashDigraph[V: Object]
	super MutableDigraph[V]

	# Attributes
	#
	private var incoming_vertices_map = new HashMap[V, Array[V]]
	private var outgoing_vertices_map = new HashMap[V, Array[V]]
	private var number_of_arcs = 0

	redef fun num_vertices do return outgoing_vertices_map.keys.length end

	redef fun num_arcs do return number_of_arcs end

	redef fun add_vertex(u)
	do
		if not has_vertex(u) then
			incoming_vertices_map[u] = new Array[V]
			outgoing_vertices_map[u] = new Array[V]
		end
	end

	redef fun has_vertex(u) do return outgoing_vertices_map.keys.has(u)

	redef fun remove_vertex(u)
	do
		if has_vertex(u) then
			for v in successors(u) do
				remove_arc(u, v)
			end
			for v in predecessors(u) do
				remove_arc(v, u)
			end
			incoming_vertices_map.keys.remove(u)
			outgoing_vertices_map.keys.remove(u)
		end
	end

	redef fun add_arc(u, v)
	do
		if not has_vertex(u) then add_vertex(u)
		if not has_vertex(v) then add_vertex(v)
		if not has_arc(u, v) then
			incoming_vertices_map[v].add(u)
			outgoing_vertices_map[u].add(v)
			number_of_arcs += 1
		end
	end

	redef fun has_arc(u, v)
	do
		return outgoing_vertices_map[u].has(v)
	end

	redef fun remove_arc(u, v)
	do
		if has_arc(u, v) then
			outgoing_vertices_map[u].remove(v)
			incoming_vertices_map[v].remove(u)
			number_of_arcs -= 1
		end
	end

	redef fun predecessors(u): Array[V]
	do
		if incoming_vertices_map.keys.has(u) then
			return incoming_vertices_map[u].clone
		else
			return new Array[V]
		end
	end

	redef fun successors(u): Array[V]
	do
		if outgoing_vertices_map.keys.has(u) then
			return outgoing_vertices_map[u].clone
		else
			return new Array[V]
		end
	end

	redef fun vertices_iterator: Iterator[V] do return outgoing_vertices_map.keys.iterator
end
