module test_a_star

import a_star

#redef class Object
#	redef fun debug_a_star do return true
#end

# Simple node with a name
class NamedNode
	super Node

	redef type N: NamedNode

	var name: String

	init(graph: Graph[N, Link], name: String)
	do
		self.name = name
		super
	end

	redef fun to_s do return "node:{name}"
end

# Node with a name and position
class PositionedNamedNode
	super NamedNode

	redef type N: PositionedNamedNode

	var x: Int
	var y: Int

	init(graph: Graph[N, Link], name: String, x, y: Int)
	do
		super

		self.x = x
		self.y = y
	end

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

	init(graph: Graph[N,L])
	do
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

fun print_path(path: nullable AStarPath[NamedNode]) do if path == null then
	print "null path"
else
	var names = new Array[String]
	while not path.at_end_of_path do
		var step = path.step
		names.add(step.name)
	end
	print names.join(", ")
end

# Graph
#   a - b
#  /   /
# c - d - e
fun case_simple
do
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
	print_path(path)
end

# Graph
#   a - b
#  /   /
# c - d    e
fun case_failed
do
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
	print_path(path)
end

# Weighted graph
#     a -2- b
#    /     /
#   3     1
#  /     /
# c -3- d -8- e
fun case_weighted
do
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
	print_path(path)
end

# Weighted graph
#     a -2- b
#    /     /
#   3     1
#  /     /
# c -3- d -8- e
fun case_weighted_too_long
do
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
	print_path(path)
end

# "Big" weighted graph
#
#     a -2- b -1- f -1- g
#    /     /       \   /
#   3     1        4  1
#  /     /         \ /
# c -3- d -8- e -2- h -2- i -3- j
#
fun case_weighted_big
do
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
	print_path(path)
end

# Double-edge graph with coordinates on nodes
#
# a--b--d--e
#  \       |
#   c------f
#
fun cases_with_positions_and_heuristic
do
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

	print_path(na.path_to(nf, 100, context))
	print_path(nf.path_to(na, 100, context))
	print_path(nc.path_to(ne, 100, context))
	print_path(nd.path_to(nc, 100, context))
end

case_simple
case_failed
case_weighted
case_weighted_too_long
case_weighted_big
cases_with_positions_and_heuristic
