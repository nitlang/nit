# This file is part of NIT (http://www.nitlanguage.org).
#
# Copyright 2011-2013 Alexis Laferrière <alexis.laf@xymus.net>
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

# Services related to pathfinding of graphs using A*
# A single graph may have different properties according to the `PathContext` used
#
# Usage:
#
#    # Weighted graph (letters are nodes, digits are weights):
#    #
#    #     a -2- b
#    #    /     /
#    #   3     1
#    #  /     /
#    # c -3- d -8- e
#    #
#    var graph = new Graph[Node,WeigthedLink[Node]]
#
#    var na = new Node(graph)
#    var nb = new Node(graph)
#    var nc = new Node(graph)
#    var nd = new Node(graph)
#    var ne = new Node(graph)
#
#    var lab = new WeigthedLink[Node](graph, na, nb, 2)
#    var lac = new WeigthedLink[Node](graph, na, nc, 3)
#    var lbd = new WeigthedLink[Node](graph, nb, nd, 1)
#    var lcd = new WeigthedLink[Node](graph, nc, nd, 3)
#    var lde = new WeigthedLink[Node](graph, nd, ne, 8)
#
#    var context = new WeightedPathContext[Node, WeigthedLink[Node]](graph)
#
#    var path = na.path_to(ne, 100, context)
#    assert path != null else print "No possible path"
#
#    while not path.at_end_of_path do
#        print path.step
#    end
module a_star

redef class Object
	protected fun debug_a_star: Bool do return false
	private fun debug(msg: String) do if debug_a_star then
		stderr.write "a_star debug: {msg}\n"
	end
end

# General graph node
class Node
	type N: Node

	# parent graph
	var graph: Graph[N, Link[N]]

	init(graph: Graph[N, Link[N]])
	do
		self.graph = graph
		graph.add_node(self)
	end

	# adjacent nodes
	var links: Set[Link[N]] = new HashSet[Link[N]]

	# used to check if node has been searched in one pathfinding
	private var last_pathfinding_evocation: Int = 0

	# cost up to in current evocation
	# lifetime limited to evocation of path_to
	private var best_cost_up_to: Int = 0

	# source node
	# lifetime limited to evocation of path_to
	private var best_source: nullable N = null

	# is in frontier or buckets
	# lifetime limited to evocation of path_to
	private var open: Bool = false

	# Heuristic, to redef
	protected fun cost_to(other: N): Int do return 1

	# Main functionnality, returns path from `self` to `dest`
	fun path_to(dest: Node, max_cost: Int, context: PathContext[N, Link[N]]): nullable Path[N]
	do
		var cost: Int = 0

		var nbr_buckets = context.worst_cost + 1 # graph.max_heuristic_cost
		var buckets = new Array[List[Node]].with_capacity(nbr_buckets)

		for i in [0 .. nbr_buckets [ do
			var l = new List[Node]
			buckets.add(l)
			#print l.hash
		end

		graph.pathfinding_current_evocation += 1

		# open source node
		buckets[0].add(self)
		open = true
		self.last_pathfinding_evocation = graph.pathfinding_current_evocation
		self.best_cost_up_to = 0

		while cost < max_cost do
			var frontier_node: nullable Node = null

			var bucket_searched: Int = 0

			# find next valid node in frontier/buckets
			loop
				var current_bucket = buckets[cost % nbr_buckets]

				if current_bucket.is_empty then # move to next bucket
					debug "b {cost} {cost % nbr_buckets} {buckets[cost % nbr_buckets].hash}"
					cost += 1
					bucket_searched += 1

					if bucket_searched > nbr_buckets then break
				else # found a node
					debug "c {cost}"
					frontier_node = current_bucket.pop

					if frontier_node.open then break
				end
			end

			# no path possible
			if frontier_node == null then
				return null

			# at destination
			else if frontier_node == dest then
				debug "picked {frontier_node}, is destination"

				var path = new Path[N](cost)

				while frontier_node != self do
					path.nodes.unshift(frontier_node)
					frontier_node = frontier_node.best_source.as(not null)
				end

				return path

			# adds all next nodes to frontier/buckets
			else
				frontier_node.open = false

				debug "w exploring adjacents of {frontier_node}"

				for link in frontier_node.links do
					var peek_node = link.to
					debug "v {context.is_blocked(link)} {peek_node.last_pathfinding_evocation != graph.pathfinding_current_evocation} {peek_node.best_cost_up_to > frontier_node.best_cost_up_to + context.cost(link)}, {peek_node.best_cost_up_to} > {frontier_node.best_cost_up_to} + {context.cost(link)}"
					if not context.is_blocked(link) and
					 (peek_node.last_pathfinding_evocation != graph.pathfinding_current_evocation or
					   (peek_node.open and
					     peek_node.best_cost_up_to > cost + context.cost(link)))
					then

						peek_node.open = true
						peek_node.last_pathfinding_evocation = graph.pathfinding_current_evocation
						peek_node.best_cost_up_to = cost + context.cost(link)
						peek_node.best_source = frontier_node

						var at_bucket = buckets[(peek_node.best_cost_up_to+peek_node.cost_to(dest)) % nbr_buckets]
						at_bucket.add(peek_node)

						debug "u putting {peek_node} at {peek_node.best_cost_up_to+peek_node.cost_to(dest)} -> {(peek_node.best_cost_up_to+peek_node.cost_to(dest)) % nbr_buckets} {at_bucket.hash}, {cost}+{context.cost(link)}"
					end
				end
			end
		end

		# costs over max
		return null
	end

	# Find closes node with matching caracteristic
	# TODO remove closures
	fun find_closest(max_to_search: Int): nullable N !with(n: N): Bool
	do
		if with(self) then return self

		var frontier = new List[N]
		graph.pathfinding_current_evocation += 1
		var current_evocation = graph.pathfinding_current_evocation

		frontier.add(self)
		self.last_pathfinding_evocation = current_evocation

		var i = 0
		while not frontier.is_empty do
			var node = frontier.shift

			for link in node.links do
				var to = link.to
				if to.last_pathfinding_evocation != current_evocation then
					if with(to) then return to

					frontier.add(to)
					to.last_pathfinding_evocation = current_evocation
				end
			end

			i += 1
			if i > max_to_search then return null
		end

		return null
	end
end

class Link[N:Node]
	type L: Link[N]

	var graph: Graph[N, L]

	var from: N
	var to: N

	init(graph: Graph[N, L], from, to: N)
	do
		self.graph = graph
		self.from = from
		self.to = to

		graph.add_link(self)
	end
end

# General graph
class Graph[N:Node, L:Link[N]]
	var nodes: Set[N] = new HashSet[N]
	var links: Set[L] = new HashSet[L]

	#var max_link_cost: Int = 0
	#var max_heuristic_cost: Int = 0

	fun add_node(node: N): N
	do
		nodes.add(node)

		return node
	end

	fun add_link(link: L): L
	do
		links.add(link)

		#if link.cost > max_link_cost then max_link_cost = link.cost

		link.from.links.add(link)

		return link
	end

	# used to check if nodes have been searched in one pathfinding
	var pathfinding_current_evocation: Int = 0
end

# Result from pathfinding, a walkable path
class Path[N]

	var total_cost: Int

	var nodes = new List[N]

	init (cost: Int) do total_cost = cost

	var at: Int = 0
	fun step: N
	do
		assert nodes.length >= at else print "a_star::Path::step failed, is at_end_of_path"

		var s = nodes[at]
		at += 1

		return s
	end

	fun peek_step: N do return nodes[at]

	fun at_end_of_path: Bool do return at >= nodes.length
end

# Context related to an evocation of pathfinding
class PathContext[N: Node, L: Link[N]]
	var graph: Graph[N, L]

	# Worst cost of all the link's costs
	fun worst_cost: Int is abstract

	# Get cost of a link
	fun cost(link: Link[N]): Int is abstract

	# Is that link blocked?
	fun is_blocked(link: Link[N]): Bool is abstract

	# Heuristic
	fun heuristic_cost(a, b: Node): Int is abstract
end


#
### Additionnal classes, may be useful
#

# Simple context with constant cost on each links
# Warning: A* is not optimize for such a case
class ConstantPathContext[N: Node, L: Link[N]]
	super PathContext[N, L]

	redef fun worst_cost do return 1
	redef fun cost(l) do return 1
	redef fun is_blocked(l) do return false
	redef fun heuristic_cost(a, b) do return 1 # TODO
end

class WeightedPathContext[N: Node, L: WeigthedLink[N]]
	super PathContext[N,L]

	init(graph: Graph[N,L])
	do
		super

		var worst_cost = 0
		for l in graph.links do
			var cost = l.weight
			if cost > worst_cost then worst_cost = cost
		end
		self.worst_cost = worst_cost
	end

	redef var worst_cost: Int

	redef fun cost(l) do
		assert l isa L
		return l.weight
	end
	redef fun is_blocked(l) do return false
	redef fun heuristic_cost(a, b) do return 10 # TODO
end

class WeigthedLink[N: Node]
	super Link[N]

	var weight: Int

	init(graph: Graph[N,L], from, to: N, weight: Int)
	do
		super

		self.weight = weight
	end
end
