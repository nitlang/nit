# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Common tree structure
#
# Hierarchical representation of data using recursive collections of nodes.
#
# This one differs from the `bintree` and `rbtree` implementation since it allows
# more tha two children by node.
module tree

import abstract_tree

# Tree structure
#
# The tree contains a `root` node. If `root == null` then the tree is empty.
# Each node can have `0..n` children.
#
# Usage:
#
# ~~~
# var tree = new Tree[Int, String]
# var na = new TreeNode[Int, String](0, "a")
# var nb = new TreeNode[Int, String](1, "b")
# var nc = new TreeNode[Int, String](2, "c")
# var nd = new TreeNode[Int, String](3, "d")
#
# tree.add_node(na) # a is root
# tree.add_node(nb, na)
# tree.add_node(nc, na)
# tree.add_node(nd, nc)
#
# assert tree.to_formatted_string == """
# a
#  b
#  c
#   d
# """
# ~~~
#
# Use `show_dot` to display a graphic representation of a tree using graphiz.
#
# Trees are also comparable, see `Tree::distance_from`.
class Tree[K: Comparable, E]
	super TreeMap[K, E]

	redef type N: TreeNode[K, E]

	# Initialize a tree from a formatted string
	#
	# Mainly used for testing purpose.
	#
	# Format:
	# * root must be on the first column
	# * only one root is allowed (no forest)
	# * nodes are indented with a space character defining their depth in tree
	# * empty lines are skip
	#
	# Usage:
	# ~~~
	# var str = """
	# root
	#  a
	#   b
	#    c
	#   d
	#    e
	#     f
	# """
	# var tree = new Tree[Int, String].from_string(str)
	# assert tree[0] == "root"
	# assert tree[1] == "a"
	# assert tree[2] == "b"
	# ~~~
	#
	# Node keys can be specified in the format:
	# ~~~
	# str = """
	# 1:root
	#  2:b
	#   3:c
	#  4:d
	# """
	# tree = new Tree[Int, String].from_string(str)
	# assert tree.length == 4
	# assert tree[4] == "d"
	# ~~~
	#
	# TODO accept more format (like with indents)
	# FIXME This is unsafe:
	# * returned nodes are of the type TreeNode[Int, String]
	# * self is typed by Tree[K, E]
	#
	# Should we declare this as a top_level function?
	init from_string(str: String) do
		var lines = str.split("\n")
		if lines.is_empty then return
		var root = parse_line(0, lines.first)
		add_node(root)
		var parents = new List[N]
		parents.add root
		for i in [1..lines.length[ do
			var line = lines[i]
			if line.is_empty then continue
			var node = parse_line(i, lines[i])
			var space = line.space_before
			if space > parents.last.depth then
				add_node(node, parents.last)
				parents.add node
			else
				while space <= parents.last.depth do
					parents.pop
				end
				add_node(node, parents.last)
				parents.add node
			end
		end
	end

	# Build this tree from a source file formatted as expected by `from_string`
	init from_file(file: String) do
		assert file.file_exists
		var r = new FileReader.open(file)
		from_string r.read_all
		r.close
	end

	# Extract the node representation from a formated `line`
	#
	# Format is of the form `key:value` where `key:` is optional.
	# If `key:` is found in string, the `key` parameter is overriden.
	#
	# Used by `from_string` constructor.
	#
	#     intrude import tree
	#     var tree = new Tree[Int, String]
	#     assert tree.parse_line(0, "foo").key == 0
	#     assert tree.parse_line(0, "1:foo").key == 1
	private fun parse_line(id: Int, line: String): N do
		var ls = line.trim.split(":")
		if ls.length > 1 then
			return new TreeNode[Int, String](ls.first.to_i, ls.last)
		end
		return new TreeNode[Int, String](id, line.trim)
	end

	# Add a node to the tree
	#
	# If `parent == null` then node is set as the root node.
	# Set `node.parent = parent` otherelse.
	#
	# It is recommanded to use this method instead setting the parent by hand
	# because it also handles the `Tree::ids` and `node.children` saving.
	fun add_node(node: N, parent: nullable N) do
		nodes[node.key] = node
		if parent == null then
			root = node
		else
			node.parent = parent
			parent.children.add node
		end
	end

	# Tree nodes mapped to their key ids
	# ~~~
	# var str = """
	# a
	#  b
	#   c
	# """
	# var tree = new Tree[Int, String].from_string(str)
	# assert tree.nodes[0].value == "a"
	# assert tree.nodes[1].value == "b"
	# assert tree.nodes[2].value == "c"
	# ~~~
	#
	# Ids can be specified in the format:
	# ~~~
	# str = """
	# 10:a
	#  20:b
	#   0:c
	# """
	# tree = new Tree[Int, String].from_string(str)
	# assert tree.nodes[10].value == "a"
	# assert tree.nodes[20].value == "b"
	# assert tree.nodes[0].value == "c"
	# ~~~
	var nodes = new HashMap[K, N]

	redef fun length do return nodes.length
	redef fun [](key) do return nodes[key].value

	# Keyroots for each nodes
	fun keyroots: Map[N, N] do
		var res = new HashMap[N, N]
		for node in nodes.values do res[node] = node.keyroot
		return res
	end

	# Nodes in pre-order sequence
	#
	# Return a list of nodes contained in `self` following a pre-order sequence.
	#
	# See https://en.wikipedia.org/wiki/Tree_traversal#Pre-order.
	#
	# Example:
	# ~~~
	# var tree = new Tree[Int, String].from_string("""
	# a
	#  b
	#   d
	#  c
	#   e
	#    g
	#   f
	#    h
	#    i""")
	# assert tree.preorder.to_s == """[{a},{b},{d},{c},{e},{g},{f},{h},{i}]"""
	# ~~~
	fun preorder: Array[N] do
		var root = self.root
		var nodes = new Array[N]
		if root == null then return nodes
		var todos = new Array[N]
		todos.add root
		while not todos.is_empty do
			var node = todos.pop
			nodes.add node
			todos.add_all node.children.reversed
		end
		return nodes
	end

	# Nodes in post-order sequence
	#
	# Return a list of nodes contained in `self` following a post-order sequence.
	#
	# See https://en.wikipedia.org/wiki/Tree_traversal#Post-order.
	#
	# Examples:
	# ~~~
	# var tree = new Tree[Int, String].from_string("""
	# a
	#  b
	#   d
	#  c
	#   e
	#    g
	#   f
	#    h
	#    i""")
	# assert tree.postorder.to_s == """[{d},{b},{g},{e},{h},{i},{f},{c},{a}]"""
	#
	# tree = new Tree[Int, String].from_string("""
	# 6
	#  5
	#   2
	#    1
	#   3
	#   4""")
	# assert tree.postorder.to_s == """[{1},{2},{3},{4},{5},{6}]"""
	# ~~~
	fun postorder: Array[N] do
		var root = self.root
		var nodes = new Array[N]
		if root == null then return nodes
		root.recursive_postorder nodes
		return nodes
	end

	# TODO comment and test
	# Compute the Tree Edition Distance between `self` and `o`.
	#
	# Tree distance is computed based on the minimum sequence of edit operation
	# to go from a tree to another.
	# Edit operations are insert, remove and update.
	# Each operation is associated to cost that can be modified with `insert_cost`,
	# `remove_cost` and `update_cost`.
	#
	# Two trees are considered similar if their edit distance if equals to 0.
	# The greater the distance is, greater are the differences between the trees.
	#
	# Examples:
	# ~~~
	# var tree1 = new Tree[Int, String].from_string("""
	# a
	#  b
	#  c""")
	# var tree2 = new Tree[Int, String].from_string("""
	# a
	#  b
	#  c""")
	# assert tree1.distance_from(tree2) == 0
	# ~~~
	# Since `tree1` and `tree2` are identical, their distance is 0.
	#
	# ~~~
	# tree1 = new Tree[Int, String].from_string("""
	# a
	#  b
	#  c""")
	# tree2 = new Tree[Int, String].from_string("""
	# a
	#  b
	#  e
	#   c""")
	# assert tree1.distance_from(tree2) == 1
	# ~~~
	# Here it takes 1 insertion of `e` to go from `tree1` to `tree2`.
	#
	# ~~~
	# tree1 = new Tree[Int, String].from_string("""
	# a
	#  b
	#   e
	#    f
	#   d
	#   c""")
	# tree2 = new Tree[Int, String].from_string("""
	# a
	#  e
	#   f
	#  c
	#   d
	#  b""")
	# assert tree1.distance_from(tree2) == 3
	# ~~~
	# `tree1` can be transformed in `tree2` with 3 operations:
	# 1. remove `b`
	# 2. update `c` into `b`
	# 3. insert `c` as parent of `d`
	#
	# ~~~raw
	#             Step 1:      Step 2:      Step 3:
	#    a           a            a            a
	#    |         / | \        / | \        / | \
	#    b        e  d  c      e  d  b      e  c  b
	#  / | \      |            |            |  |
	# e  d  c     f            f            f  d
	# |
	# f
	# ~~~
	#
	# See:
	# > *Kaizhong Zhang and Dennis Shasha.*
	# > Simple fast algorithms for the editing distance between trees and
	# > related problems.
	# > SIAM Journal of Computing, 18:1245–1262, 1989.
	fun distance_from(o: SELF): Int do
		# Fill dynamic result map with zeros
		var tdist = new Array[Array[Int]]
		for i in [0..length[ do
			tdist.add new Array[Int].filled_with(0, o.length)
		end
		# print "tdist: {tdist}"

		# Compare both trees
		var cmp = new DefaultComparator
		var ks1 = keyroots.values.to_a
		cmp.sort(ks1)
		var ks2 = o.keyroots.values.to_a
		cmp.sort(ks2)
		for i in ks1.reversed do
			for j in ks2.reversed do
				treedist(i, j, tdist, o)
			end
		end

		# Return last computed result in map
		# print "tdist: {tdist}"
		return tdist[tdist.length -1][tdist[tdist.length -1].length - 1]
	end

	# Compute the ditance between two positions in two separate trees.
	#
	# Should not be called directly, use `distance_from` instead.
	private fun treedist(n1, n2: N, tdist: Array[Array[Int]], o: SELF) do
		# Nodes are accessed following the postorder
		var po1 = postorder
		var no1 = new HashMap[N, Int]
		for node in po1 do no1[node] = no1.length
		var po2 = o.postorder
		var no2 = new HashMap[N, Int]
		for node in po2 do no2[node] = no2.length
		# print "n1: {n1}"
		# print "n2: {n2}"

		# Comparison bounds (do not check similarity beyond these node)
		var b1 = no1[n1] - no1[n1.lmd] + 2
		var b2 = no2[n2] - no2[n2.lmd] + 2
		# print "b1: {b1}"
		# print "b2: {b2}"

		# Initialize forest comparison table
		var fd = new Array[Array[Int]]
		for k in [0..b1[ do fd.add new Array[Int].filled_with(0, b2)
		for i in [1..b1[ do fd[i][0] = fd[i - 1][0] + remove_cost
		for j in [1..b2[ do fd[0][j] = fd[0][j - 1] + remove_cost
		# print "fd: {fd}"

		var i = 1
		var j = 1
		# Compare branch to branch from left-most descendant to n1
		for k in [no1[n1.lmd] .. (no1[n1])] do
			var kn = po1[k]
			j = 1
			for l in [no2[n2.lmd] .. (no2[n2])] do
				var ln = po2[l]
				# print "k: {k}"
				# print "l: {l}"
				# print "i: {i}"
				# print "j: {j}"
				if kn.lmd == n1.lmd and ln.lmd == n2.lmd then
					# Both are trees, we need to compare then

					# print fd[i - 1][j] + remove_cost
					# print fd[i][j - 1] + insert_cost
					# print fd[i - 1][j - 1] + update_cost(kn, ln)

					# Get the minimum cost from previous computations
					fd[i][j] = min(
						fd[i - 1][j] + remove_cost,
						fd[i][j - 1] + insert_cost,
						fd[i - 1][j - 1] + update_cost(kn, ln)
					)
					# print "fd[i][j]: {fd[i][j]}"
					tdist[k][l] = fd[i][j]
					# print "tdist: {tdist}"
				else
					# Single node
					var m = no1[kn.lmd] - no1[n1.lmd]
					var n = no2[ln.lmd] - no2[n2.lmd]
					# print "m: {m}"
					# print "n: {n}"

					# Get the minimum cost from previous computations
					fd[i][j] = min(
						fd[i - 1][j] + remove_cost,
						fd[i][j - 1] + insert_cost,
						fd[m][n] + tdist[k][l]
					)
					# print "fd[i][j]: {fd[i][j]}"
				end
				# print "fd: {fd}"
				j += 1
			end
			i += 1
		end
	end

	# Return the minimum of `vals`
	private fun min(vals: Int...): Int do
		assert not vals.is_empty
		var min = vals.first
		for val in vals do
			if val < min then min = val
		end
		return min
	end

	# Cost for removing a node from `self` when computing `distance_from`
	#
	# Default is 1
	var remove_cost = 1 is writable

	# Cost for inserting a node in `self` when computing `distance_from`
	#
	# Default is 1
	var insert_cost = 1 is writable

	# Cost for updating `n1` by `n2` when computing `distance_from`
	#
	# Return 1 if node have different values
	fun update_cost(n1, n2: N): Int do return if n1 == n2 then 0 else 1

	# Output `self` in a `from_string` compatible format.
	# ~~~
	# var str = """
	# root
	#  a
	#   b
	#    c
	#   d
	#    e
	#     f
	# """
	# var tree = new Tree[Int, String].from_string(str)
	# assert tree.to_formatted_string == str
	# ~~~
	fun to_formatted_string: String do
		var root = self.root
		if root == null then return "<empty tree>"
		return root.to_formatted_string
	end

	redef fun show_dot do
		var root = self.root
		assert not_empty: root != null
		var f = new ProcessWriter("dot", "-Txlib")
		f.write "digraph \{\n"
		root.recursive_dot f
		f.write "\}\n"
		f.close
	end
end

# A TreeNode that can go in a `Tree`
#
# Unlike BinTreeNode, TreeNode can have more than two children.
class TreeNode[K: Comparable, E]
	super AbstractTreeNode[K, E]

	redef type N: TreeNode[K, E]

	# Children (from left to right) of this node
	var children = new Array[N]

	# Output `self` in a `Tree::from_string` compatible format
	fun to_formatted_string: String do
		var res = "{" " * depth}{value or else "<no value>"}\n"
		for child in children do res += child.to_formatted_string
		return res
	end

	# Left-most descendant of `self` or `self` if `children.is_empty`
	#
	# Usage:
	# ~~~
	# var str = """
	# a
	#  b
	#   d
	#  c
	#   e
	#    g
	#   f
	#    h
	#    i
	# """
	# var tree = new Tree[Int, String].from_string(str)
	# assert tree.nodes[0].lmd.value == "d"
	# assert tree.nodes[2].lmd.value == "d"
	# assert tree.nodes[3].lmd.value == "g"
	# assert tree.nodes[8].lmd.value == "i"
	# ~~~
	fun lmd: N do
		if children.is_empty then return self
		return children.first.lmd
	end

	# Keyroot of this node
	#
	# A *keyroot* is a node that either has a left sibling or is the root of the tree.
	# The number of keyroots is equal to the number of leaves in the tree.
	#
	# Example:
	# ~~~
	# var str = """
	# a
	#  b
	#   d
	#  c
	#   e
	#    g
	#   f
	#    h
	#    i
	# """
	# var tree = new Tree[Int, String].from_string(str)
	# assert tree.nodes[0].keyroot.value == "a"
	# assert tree.nodes[1].keyroot.value == "a"
	# assert tree.nodes[2].keyroot.value == "a"
	# assert tree.nodes[3].keyroot.value == "c"
	# assert tree.nodes[4].keyroot.value == "c"
	# assert tree.nodes[5].keyroot.value == "c"
	# assert tree.nodes[6].keyroot.value == "f"
	# assert tree.nodes[7].keyroot.value == "f"
	# assert tree.nodes[8].keyroot.value == "i"
	# ~~~
	fun keyroot: N do
		var parent = self.parent
		if parent == null then return self
		if parent.children.first == self then return parent.keyroot
		return self
	end

	# Build `Tree` postorder recursively from `self` node
	#
	# See `Tree::postorder`.
	private fun recursive_postorder(nodes: Array[N]) do
		for child in children do child.recursive_postorder nodes
		nodes.add self
	end

	# Translate the tree in dot format recursively starting from `node`.
	#
	# See `Tree::show_dot`.
	private fun recursive_dot(f: ProcessWriter) do
		f.write to_dot
		for child in children do child.recursive_dot f
	end
end
