# This file is part of NIT (https://nitlanguage.org).
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

# A* pathfinding in graphs
#
# A single graph may have different properties according to the `PathContext` used
#
# Usage:
#
# ~~~
# # Weighted graph (letters are nodes, digits are weights):
# #
# #     a -2- b
# #    /     /
# #   3     1
# #  /     /
# # c -3- d -8- e
# #
# var graph = new Graph[Node,WeightedLink]
#
# var na = new Node(graph)
# var nb = new Node(graph)
# var nc = new Node(graph)
# var nd = new Node(graph)
# var ne = new Node(graph)
#
# var lab = new WeightedLink(graph, na, nb, 2)
# var lac = new WeightedLink(graph, na, nc, 3)
# var lbd = new WeightedLink(graph, nb, nd, 1)
# var lcd = new WeightedLink(graph, nc, nd, 3)
# var lde = new WeightedLink(graph, nd, ne, 8)
#
# var context = new WeightedPathContext(graph)
#
# var path = na.path_to(ne, 100, context)
# assert path != null else print "No possible path"
#
# assert path.step == nb
# assert path.step == nd
# assert path.step == ne
# assert path.at_end_of_path
# ~~~
module a_star

import serialization

# General graph node
class Node
	super Serializable

	# Type of the others nodes in the `graph`
	type N: Node

	# parent graph
	var graph: Graph[N, Link]

	init
	do
		graph.add_node(self)
	end

	# adjacent nodes
	var links: Set[Link] = new HashSet[Link]

	# used to check if node has been searched in one pathfinding
	private var last_pathfinding_evocation: Int = 0

	# cost up to in current evocation
	# lifetime limited to evocation of `path_to`
	private var best_cost_up_to: Int = 0

	# source node
	# lifetime limited to evocation of `path_to`
	private var best_source: nullable N = null

	# is in frontier or buckets
	# lifetime limited to evocation of `path_to`
	private var open: Bool = false

	# Main functionality, returns path from `self` to `dest`
	fun path_to(dest: N, max_cost: Int, context: PathContext): nullable AStarPath[N]
	do
		return path_to_alts(dest, max_cost, context, null)
	end

	# Find a path to a possible `destination` or a node accepted by `alt_targets`
	fun path_to_alts(destination: nullable N, max_cost: Int, context: PathContext,
		alt_targets: nullable TargetCondition[N]): nullable AStarPath[N]
	do
		var cost = 0

		var nbr_buckets = context.worst_cost + context.worst_heuristic_cost + 1
		var buckets = new Array[List[N]].with_capacity(nbr_buckets)

		for i in [0 .. nbr_buckets[ do
			buckets.add(new List[N])
		end

		graph.pathfinding_current_evocation += 1

		# open source node
		buckets[0].add(self)
		open = true
		self.last_pathfinding_evocation = graph.pathfinding_current_evocation
		self.best_cost_up_to = 0

		loop
			var frontier_node: nullable N = null

			var bucket_searched = 0

			# find next valid node in frontier/buckets
			loop
				var current_bucket = buckets[cost % nbr_buckets]

				if current_bucket.is_empty then # move to next bucket
					cost += 1
					if cost > max_cost then return null
					bucket_searched += 1

					if bucket_searched > nbr_buckets then break
				else # found a node
					frontier_node = current_bucket.pop

					if frontier_node.open then break
				end
			end

			# no path possible
			if frontier_node == null then
				return null

			# at destination
			else if frontier_node == destination or
			     (alt_targets != null and alt_targets.accept(frontier_node)) then

				var path = new AStarPath[N](cost)

				while frontier_node != self do
					path.nodes.unshift(frontier_node)
					frontier_node = frontier_node.best_source
					assert frontier_node != null
				end

				return path

			# adds all next nodes to frontier/buckets
			else
				frontier_node.open = false

				for link in frontier_node.links do
					var peek_node = link.to
					if not context.is_blocked(link) and
					 (peek_node.last_pathfinding_evocation != graph.pathfinding_current_evocation or
					   (peek_node.open and
					     peek_node.best_cost_up_to > cost + context.cost(link)))
					then
						peek_node.open = true
						peek_node.last_pathfinding_evocation = graph.pathfinding_current_evocation
						peek_node.best_cost_up_to = cost + context.cost(link)
						peek_node.best_source = frontier_node

						var est_cost
						if destination != null then
							est_cost = peek_node.best_cost_up_to + context.heuristic_cost(peek_node, destination)
						else if alt_targets != null then
							est_cost = peek_node.best_cost_up_to + alt_targets.heuristic_cost(peek_node, link)
						else est_cost = 0

						var at_bucket = buckets[est_cost % nbr_buckets]
						at_bucket.add(peek_node)
					end
				end
			end
		end
	end

	# Find the closest node accepted by `cond` under `max_cost`
	fun find_closest(max_cost: Int, context: PathContext, cond: nullable TargetCondition[N]): nullable N
	do
		var path = path_to_alts(null, max_cost, context, cond)
		if path == null then return null
		return path.nodes.last
	end

	# We customize the serialization process to avoid problems with recursive
	# serialization engines. These engines, such as `JsonSerializer`,
	# are at danger to serialize the graph as a very deep tree.
	# With a large graph it can cause a stack overflow.
	#
	# Instead, we serialize the nodes first and then the links.
	redef fun core_serialize_to(serializer)
	do
		serializer.serialize_attribute("graph", graph)
	end

	redef init from_deserializer(deserializer)
	do
		deserializer.notify_of_creation self

		var graph = deserializer.deserialize_attribute("graph", (new GetName[Graph[N, Link]]).to_s)
		if not graph isa Graph[N, Link] then graph = new Graph[N, Link]
		self.graph = graph
	end
end

# Link between two nodes and associated to a graph
class Link
	serialize

	# Type of the nodes in `graph`
	type N: Node

	# Type of the other links in `graph`
	type L: Link

	# The graph to which belongs `self`
	var graph: Graph[N, L]

	# Origin of this link
	var from: N

	# Endpoint of this link
	var to: N

	init
	do
		graph.add_link(self)
	end
end

# General graph
class Graph[N: Node, L: Link]
	super Serializable

	# Nodes in this graph
	var nodes = new Set[N]

	# Links in this graph
	var links = new Set[L]

	# Add a `node` to this graph
	fun add_node(node: N): N
	do
		nodes.add(node)

		return node
	end

	# Add a `link` to this graph
	fun add_link(link: L): L
	do
		links.add(link)

		link.from.links.add(link)

		return link
	end

	# Used to check if nodes have been searched in one pathfinding
	private var pathfinding_current_evocation: Int = 0

	redef fun core_serialize_to(serializer)
	do
		serializer.serialize_attribute("nodes", nodes)
		serializer.serialize_attribute("links", links)
	end

	redef init from_deserializer(deserializer)
	do
		deserializer.notify_of_creation self

		var nodes = deserializer.deserialize_attribute("nodes", (new GetName[Set[N]]).to_s)
		if deserializer.deserialize_attribute_missing then
			deserializer.errors.add new AttributeMissingError(self, "nodes")
		end
		if nodes isa Set[N] then self.nodes = nodes

		var links = deserializer.deserialize_attribute("links", (new GetName[Set[L]]).to_s)
		if deserializer.deserialize_attribute_missing then
			deserializer.errors.add new AttributeMissingError(self, "links")
		end
		if links isa Set[L] then for link in links do add_link link
	end
end

# Result from path finding and a walkable path
class AStarPath[N]
	serialize

	# Total cost of this path
	var total_cost: Int

	# Nodes composing this path
	var nodes = new List[N]

	private var at: Int = 0

	# Step on the path and get the next node to travel
	fun step: N
	do
		assert nodes.length >= at else print "a_star::AStarPath::step failed, is at_end_of_path"

		var s = nodes[at]
		at += 1

		return s
	end

	# Peek at the next step of the path
	fun peek_step: N do return nodes[at]

	# Are we at the end of this path?
	fun at_end_of_path: Bool do return at >= nodes.length
end

# Context related to an evocation of pathfinding
abstract class PathContext
	serialize

	# Type of the nodes in `graph`
	type N: Node

	# Type of the links in `graph`
	type L: Link

	# Graph to which is associated `self`
	var graph: Graph[N, L]

	# Worst cost of all the link's costs
	fun worst_cost: Int is abstract

	# Get cost of a link
	fun cost(link: L): Int is abstract

	# Is that link blocked?
	fun is_blocked(link: L): Bool is abstract

	# Heuristic
	fun heuristic_cost(a, b: N): Int is abstract

	# The worst cost suggested by the heuristic
	fun worst_heuristic_cost: Int is abstract
end

#
### Additionnal classes, may be useful
#

# Simple context with constant cost on each links
# Warning: A* is not optimize for such a case
class ConstantPathContext
	super PathContext
	serialize

	redef fun worst_cost do return 1
	redef fun cost(l) do return 1
	redef fun is_blocked(l) do return false
	redef fun heuristic_cost(a, b) do return 0
	redef fun worst_heuristic_cost do return 0
end

# A `PathContext` for graphs with `WeightedLink`
class WeightedPathContext
	super PathContext
	serialize

	redef type L: WeightedLink

	init
	do
		super

		var worst_cost = 0
		for l in graph.links do
			var cost = l.weight
			if cost >= worst_cost then worst_cost = cost + 1
		end
		self.worst_cost = worst_cost
	end

	redef var worst_cost is noinit

	redef fun cost(l) do
		return l.weight
	end
	redef fun is_blocked(l) do return false
	redef fun heuristic_cost(a, b) do return 0
	redef fun worst_heuristic_cost do return 0
end

# A `Link` with a `weight`
class WeightedLink
	super Link
	serialize

	# The `weight`, or cost, of this link
	var weight: Int
end

# Advanced path conditions with customizable accept states
abstract class TargetCondition[N: Node]
	serialize

	# Should the pathfinding accept `node` as a goal?
	fun accept(node: N): Bool is abstract

	# Approximate cost from `node` to an accept state
	fun heuristic_cost(node: N, link: Link): Int is abstract
end
