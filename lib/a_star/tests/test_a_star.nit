# This file is part of NIT (https://nitlanguage.org).
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

module test_a_star is test

import a_star

class TestAStar
	test

	# Graph
	# ~~~raw
	#   a - b
	#  /   /
	# c - d - e
	# ~~~
	fun case_simple is test do
		var graph = new Graph[NamedNode, Link]

		var na = new NamedNode(graph, "a")
		var nb = new NamedNode(graph, "b")
		var nc = new NamedNode(graph, "c")
		var nd = new NamedNode(graph, "d")
		var ne = new NamedNode(graph, "e")

		var lab = new Link(graph, na, nb)
		var lac = new Link(graph, na, nc)
		var lbd = new Link(graph, nb, nd)
		var lcd = new Link(graph, nc, nd)
		var lde = new Link(graph, nd, ne)

		var context = new ConstantPathContext(graph)

		var path = na.path_to(ne, 100, context)
		assert path_to_string(path) == "c, d, e"
	end

	# Graph
	# ~~~raw
	#   a - b
	#  /   /
	# c - d    e
	# ~~~
	fun case_failed is test do
		var graph = new Graph[NamedNode,Link]

		var na = new NamedNode(graph, "a")
		var nb = new NamedNode(graph, "b")
		var nc = new NamedNode(graph, "c")
		var nd = new NamedNode(graph, "d")
		var ne = new NamedNode(graph, "e")

		var lab = new Link(graph, na, nb)
		var lac = new Link(graph, na, nc)
		var lbd = new Link(graph, nb, nd)
		var lcd = new Link(graph, nc, nd)

		var context = new ConstantPathContext(graph)

		var path = na.path_to(ne, 100, context)
		assert path_to_string(path) == null
	end

	# Weighted graph
	# ~~~raw
	#     a -2- b
	#    /     /
	#   3     1
	#  /     /
	# c -3- d -8- e
	# ~~~
	fun case_weighted is test do
		var graph = new Graph[NamedNode,WeightedLink]

		var na = new NamedNode(graph, "a")
		var nb = new NamedNode(graph, "b")
		var nc = new NamedNode(graph, "c")
		var nd = new NamedNode(graph, "d")
		var ne = new NamedNode(graph, "e")

		var lab = new WeightedLink(graph, na, nb, 2)
		var lac = new WeightedLink(graph, na, nc, 3)
		var lbd = new WeightedLink(graph, nb, nd, 1)
		var lcd = new WeightedLink(graph, nc, nd, 3)
		var lde = new WeightedLink(graph, nd, ne, 8)

		var context = new WeightedPathContext(graph)

		var path = na.path_to(ne, 100, context)
		assert path_to_string(path) == "b, d, e"
	end

	# Weighted graph
	# ~~~raw
	#     a -2- b
	#    /     /
	#   3     1
	#  /     /
	# c -3- d -8- e
	# ~~~
	fun case_weighted_too_long is test do
		var graph = new Graph[NamedNode,WeightedLink]

		var na = new NamedNode(graph, "a")
		var nb = new NamedNode(graph, "b")
		var nc = new NamedNode(graph, "c")
		var nd = new NamedNode(graph, "d")
		var ne = new NamedNode(graph, "e")

		var lab = new WeightedLink(graph, na, nb, 2)
		var lac = new WeightedLink(graph, na, nc, 3)
		var lbd = new WeightedLink(graph, nb, nd, 1)
		var lcd = new WeightedLink(graph, nc, nd, 3)
		var lde = new WeightedLink(graph, nd, ne, 8)

		var context = new WeightedPathContext(graph)

		var path = na.path_to(ne, 5, context)
		assert path_to_string(path) == null
	end

	# "Big" weighted graph
	# ~~~raw
	#
	#     a -2- b -1- f -1- g
	#    /     /       \   /
	#   3     1        4  1
	#  /     /         \ /
	# c -3- d -8- e -2- h -2- i -3- j
	# ~~~
	fun case_weighted_big is test do
		var graph = new Graph[NamedNode,WeightedLink]

		var na = new NamedNode(graph, "a")
		var nb = new NamedNode(graph, "b")
		var nc = new NamedNode(graph, "c")
		var nd = new NamedNode(graph, "d")
		var ne = new NamedNode(graph, "e")
		var nf = new NamedNode(graph, "f")
		var ng = new NamedNode(graph, "g")
		var nh = new NamedNode(graph, "h")
		var ni = new NamedNode(graph, "i")
		var nj = new NamedNode(graph, "j")

		var lab = new WeightedLink(graph, na, nb, 2)
		var lac = new WeightedLink(graph, na, nc, 3)
		var lbd = new WeightedLink(graph, nb, nd, 1)
		var lcd = new WeightedLink(graph, nc, nd, 3)
		var lde = new WeightedLink(graph, nd, ne, 8)
		var lbf = new WeightedLink(graph, nb, nf, 1)
		var lfg = new WeightedLink(graph, nf, ng, 1)
		var leh = new WeightedLink(graph, ne, nh, 2)
		var lhi = new WeightedLink(graph, nh, ni, 2)
		var lij = new WeightedLink(graph, ni, nj, 3)
		var lfh = new WeightedLink(graph, nf, nh, 4)
		var lgh = new WeightedLink(graph, ng, nh, 1)

		var context = new WeightedPathContext(graph)

		var path = na.path_to(nj, 100, context)
		assert path_to_string(path) == "b, f, g, h, i, j"
	end

	# Double-edge graph with coordinates on nodes
	#
	# ~~~raw
	# a--b--d--e
	#  \       |
	#   c------f
	# ~~~
	fun cases_with_positions_and_heuristic is test do
		var graph = new Graph[PositionedNamedNode,PositionedLink]

		var na = new PositionedNamedNode(graph, "a", 0, 0)
		var nb = new PositionedNamedNode(graph, "b", 2, 0)
		var nc = new PositionedNamedNode(graph, "c", 2, 2)
		var nd = new PositionedNamedNode(graph, "d", 5, 0)
		var ne = new PositionedNamedNode(graph, "e", 8, 0)
		var nf = new PositionedNamedNode(graph, "f", 8, 2)

		var lab = new PositionedLink(graph, na, nb)
		var lac = new PositionedLink(graph, na, nc)
		var lbd = new PositionedLink(graph, nb, nd)
		var lde = new PositionedLink(graph, nd, ne)
		var lef = new PositionedLink(graph, ne, nf)
		var lcf = new PositionedLink(graph, nc, nf)

		# inverted
		var lba = new PositionedLink(graph, nb, na)
		var lca = new PositionedLink(graph, nc, na)
		var ldb = new PositionedLink(graph, nd, nb)
		var led = new PositionedLink(graph, ne, nd)
		var lfe = new PositionedLink(graph, nf, ne)
		var lfc = new PositionedLink(graph, nf, nc)

		var context = new PositionPathContext(graph)

		assert path_to_string(na.path_to(nf, 100, context)) == "c, f"
		assert path_to_string(nf.path_to(na, 100, context)) == "c, a"
		assert path_to_string(nc.path_to(ne, 100, context)) == "f, e"
		assert path_to_string(nd.path_to(nc, 100, context)) == "b, a, c"
	end

	fun path_to_string(path: nullable AStarPath[NamedNode]): nullable String do
		if path == null then
			return null
		else
			var names = new Array[String]
			while not path.at_end_of_path do
				var step = path.step
				names.add(step.name)
			end
			return names.join(", ")
		end
	end
end

#redef class Object
#	redef fun debug_a_star do return true
#end

# Simple node with a name
class NamedNode
	super Node

	redef type N: NamedNode

	var name: String

	redef fun to_s do return "node:{name}"
end

# Node with a name and position
class PositionedNamedNode
	super NamedNode

	redef type N: PositionedNamedNode

	var x: Int
	var y: Int

	redef fun to_s do return "{super}-at-({x},{y})"

	fun dist_with(o: PositionedNamedNode): Int
	do
		var dx = o.x - x
		var dy = o.y - y
		var d2 = dx*dx + dy*dy
		return d2.sqrt
	end
end

# Link for nodes with a position
class PositionedLink
	super Link

	redef type N: PositionedNamedNode
end

# Context for a graph with positions
class PositionPathContext
	super PathContext

	redef type N: PositionedNamedNode
	redef type L: PositionedLink

	init do
		super

		for l in graph.links do
			var this_cost = cost(l)
			if this_cost > worst_cost then worst_cost = this_cost
		end
	end

	redef var worst_cost = 0

	redef fun cost(link) do return link.from.dist_with(link.to)

	redef fun is_blocked(link) do return false

	redef fun heuristic_cost(a, b)
	do
		var cost = a.dist_with(b)
		if cost > 100 then return 100
		return cost
	end

	redef fun worst_heuristic_cost do return 100
end
