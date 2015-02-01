# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# union–find algorithm using an efficient disjoint-set data structure
module union_find

import hash_collection

# Data structure to keeps track of elements partitioned into disjoint subsets
#     var s = new DisjointSet[Int]
#     s.add(1)
#     s.add(2)
#     assert not s.in_same_subset(1,2)
#     s.union(1,2)
#     assert s.in_same_subset(1,2)
#
# `in_same_subset` is transitive, reflexive and symetric
#
#     s.add(3)
#     assert not s.in_same_subset(1,3)
#     s.union(3,2)
#     assert s.in_same_subset(1,3)
#
# Unkike theorical Disjoint-set data structures, the underling implementation is opaque
# that makes the traditionnal `find` method unavailable for clients.
# The methods `in_same_subset`, `to_partitions`, and their variations are offered instead.
class DisjointSet[E]
	super SimpleCollection[E]

	# The node in the hiearchical structure for each element
	private var nodes = new HashMap[E, DisjointSetNode]

	# The number of subsets in the partition
	#
	#     var s = new DisjointSet[Int]
	#     s.add_all([1,2,3,4,5])
	#     assert s.number_of_subsets == 5
	#     s.union_all([1,4,5])
	#     assert s.number_of_subsets == 3
	#     s.union(4,5)
	#     assert s.number_of_subsets == 3
	var number_of_subsets: Int = 0

	# Get the root node of an element
	# require: `has(e)`
	private fun find(e:E): DisjointSetNode
	do
		assert nodes.has_key(e)
		var ne = nodes[e]
		if ne.parent == ne then return ne
		var res = nfind(ne)
		nodes[e] = res
		return res
	end

	# Get the root node of a node
	# Use *path compression* to flatten the structure
	# ENSURE: `result.parent == result`
	private fun nfind(ne: DisjointSetNode): DisjointSetNode
	do
		var nf = ne.parent
		if nf == ne then return ne
		var ng = nfind(nf)
		ne.parent = ng
		return ng
	end

	# Is the element in the structure
	#
	#     var s = new DisjointSet[Int]
	#     assert not s.has(1)
	#     s.add(1)
	#     assert s.has(1)
	#     assert not s.has(2)
	redef fun has(e: E): Bool
	do
		return nodes.has_key(e)
	end

	redef fun iterator do return nodes.keys.iterator

	# Add a new element in the structure.
	# Initially it is in its own disjoint subset
	#
	# ENSURE: `has(e)`
	redef fun add(e:E)
	do
		if nodes.has_key(e) then return
		var ne = new DisjointSetNode
		nodes[e] = ne
		number_of_subsets += 1
	end

	# Are two elements in the same subset?
	fun in_same_subset(e,f:E): Bool
	do
		return e == f or find(e) == find(f)
	end

	# Are all elements of `es` in the same subset?
	#     var s = new DisjointSet[Int]
	#     s.add_all([1,2,3,4,5,6])
	#     s.union_all([1,2,3])
	#     assert not s.all_in_same_subset([2,3,4])
	#     s.union_all([1,4,5])
	#     assert s.all_in_same_subset([2,3,4])
	fun all_in_same_subset(es: Collection[E]): Bool
	do
		if es.is_empty then return true
		var nf = find(es.first)
		for e in es do
			var ne = find(e)
			if ne != nf then return false
		end
		return true
	end

	# Construct the current partitionning
	#
	#     var s = new DisjointSet[Int]
	#     s.add_all([1,2,3,4,5,6])
	#     s.union(1,2)
	#     s.union(1,3)
	#     s.union(4,5)
	#     var p = s.to_partitions
	#     assert p.length == 3
	fun to_partitions: Collection[Set[E]]
	do
		return to_subpartition(self)
	end

	# Construct a partitionning on `es`, a subset of elements
	#
	#     var s = new DisjointSet[Int]
	#     s.add_all([1,2,3,4,5,6])
	#     s.union(1,2)
	#     s.union(1,3)
	#     s.union(4,5)
	#     var p = s.to_subpartition([1,2,4])
	#     assert p.length == 2
	fun to_subpartition(es: Collection[E]): Collection[Set[E]]
	do
		var map = new HashMap[DisjointSetNode, Set[E]]
		for e in es do
			var ne = find(e)
			var set = map.get_or_null(ne)
			if set == null then
				set = new HashSet[E]
				map[ne] = set
			end
			set.add(e)
		end
		return map.values
	end

	# Combine the subsets of `e` and `f`
	# ENSURE: `in_same_subset(e,f)`
	fun union(e,f:E)
	do
		var ne = find(e)
		var nf = find(f)
		if ne == nf then return

		# merge them using *union by rank*
		# attach the smaller tree to the root of the deeper tree
		var er = ne.rank
		var fr = nf.rank
		if er < fr then
			ne.parent = nf
			nodes[e] = nf
		else
			nf.parent = ne
			nodes[f] = ne
			if er == fr then
				# The only case where the deep is increased is when both are equals
				ne.rank = er+1
			end
		end
		number_of_subsets -= 1
	end

	# Combine the subsets of all elements of `es`
	# ENSURE: `all_in_same_subset(cs)`
	fun union_all(es:Collection[E])
	do
		if es.is_empty then return
		var f = es.first
		for e in es do union(e,f)
	end
end

# A node in the hierarchical representation of subsets
private class DisjointSetNode
	# If parent == self then the node is a root
	var parent: DisjointSetNode = self

	# The rank to no desequilibrate the structure.
	# The term rank is used instead of depth since
	# path compression is used, see `DisjointSet::nfind`
	var rank = 0
end
