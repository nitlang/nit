module test_a_star

import a_star

#redef class Object
#	redef fun debug_a_star do return true
#end

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

fun print_path(path: nullable Path[NamedNode]) do if path == null then
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

case_simple
case_failed
case_weighted
case_weighted_too_long
