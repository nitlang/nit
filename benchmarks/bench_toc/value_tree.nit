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

# Helper module to compare custom trees with Tree Edit Distance.
module value_tree

intrude import trees::abstract_tree

# A Tree that associate Int keys to String values.
class ValueTree
	super TreeMap[Int, String]

	redef type N: ValueNode

	# Build this tree from a source file formatted as expected by `from_string`
	init from_file(file: String) do
		if not file.file_exists then
			print "Error: can't access file `{file}`"
			abort
		end
		var r = new FileReader.open(file)
		from_string(r.read_lines)
		r.close
	end

	# Initialize this tree from a string representation
	#
	# Mainly used for testing purpose.
	#
	# Usage:
	# ~~~
	# var t_str = """
	# a
	#  b
	#   c
	#    d
	#   e
	#    f
	#     g"""
	#
	# var tree = new ValueTree.from_string(t_str.split("\n"))
	# assert tree.to_str.trim == t_str
	#
	# t_str = """
	# a
	#  b
	#   c
	#  d
	#   e
	#  f
	#   g"""
	#
	# tree = new ValueTree.from_string(t_str.split("\n"))
	# assert tree.to_str.trim == t_str
	# ~~~
	init from_string(lines: Array[String]) do
		if lines.is_empty then return
		var root = parse_line(0, lines.first)
		add_node(root)
		var parents = new List[N]
		parents.add root
		for i in [1..lines.length[ do
			var line = lines[i]
			if line.is_empty then continue
			var node = parse_line(i, lines[i])
			var space = space_before(line)
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
		ids.clear
		var i = 1
		for node in postorder do
			ids[i] = node
			node.key = i
			i += 1
		end
	end

	# Extract the node representation from a `line`
	#
	# Used by `from_string` constructor.
	private fun parse_line(id: Int, line: String): N do
		# var ls = line.trim.split(":")
		# if ls.length > 1 then
			# return new ValueNode(ls.first.to_i, ls.last)
		# end
		return new ValueNode(id, line.trim)
	end

	# Count the number of space characters prefixing the `line`
	private fun space_before(line: String): Int do
		var i = 0
		for c in line.chars do
			if not c.is_whitespace then break
			i += 1
		end
		return i
	end

	# Output `self` in a `from_string` compatible format.
	fun to_str: String do
		var root = self.root
		if root == null then return "<empty tree>"
		return root.to_str
	end

	# Add a node to the tree
	#
	# If `parent == null` then node is set as the root node.
	# Set `node.parent = parent` otherelse.
	#
	# It is recommanded to use this method instead setting the parent by hand
	# because it also handles ids and children saving.
	fun add_node(node: ValueNode, parent: nullable ValueNode) do
		ids[node.key] = node
		if parent == null then
			root = node
		else
			node.parent = parent
			parent.children.add node
		end
	end

	# Tree nodes mapped to their key
	# ~~~
	# var tree = new ValueTree.from_string("""
	# a
	#  b
	#   d
	#  c
	#   e
	#    g
	#   f
	#    h
	#    i""".split("\n"))
	# assert tree.ids[0].to_s == "\{a\}"
	# assert tree.ids[8].to_s == "\{i\}"
	# ~~~
	var ids = new HashMap[Int, ValueNode]

	# Pre-order sequence
	#
	# Return a list of nodes contained in `self` following a pre-order sequence.
	#
	# See https://en.wikipedia.org/wiki/Tree_traversal#Pre-order.
	#
	# Example:
	# ~~~
	# var tree = new ValueTree.from_string("""
	# a
	#  b
	#   d
	#  c
	#   e
	#    g
	#   f
	#    h
	#    i""".split("\n"))
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

	# Post-order sequence
	#
	# Return a list of nodes contained in `self` following a post-order sequence.
	#
	# See https://en.wikipedia.org/wiki/Tree_traversal#Post-order.
	#
	# Example:
	# ~~~
	# var tree = new ValueTree.from_string("""
	# a
	#  b
	#   d
	#  c
	#   e
	#    g
	#   f
	#    h
	#    i""".split("\n"))
	# assert tree.postorder.to_s == """[{d},{b},{g},{e},{h},{i},{f},{c},{a}]"""
	# tree = new ValueTree.from_string("""
	# 6
	#  5
	#   2
	#    1
	#   3
	#   4""".split("\n"))
	# assert tree.postorder.to_s == """[{1},{2},{3},{4},{5},{6}]"""
	# ~~~
	fun postorder: Array[N] do
		var root = self.root
		var nodes = new Array[N]
		if root == null then return nodes
		root.postorder(nodes)
		return nodes
	end

	# All node left most descendants
	#
	# See `ValueNode::lmd`.
	fun nodes2lmd: Map[ValueNode, ValueNode] do
		var res = new HashMap[ValueNode, ValueNode]
		for node in ids.values do
			res[node] = node.lmd
		end
		return res
	end

	# All node keyroots of the tree
	#
	# See `ValueNode::keyroot`.
	fun nodes2keyroot: Map[ValueNode, ValueNode] do
		var res = new HashMap[ValueNode, ValueNode]
		for node in ids.values do
			res[node] = node.keyroot
		end
		return res
	end

	# Distance between this tree and `o`
	fun distance_from(o: SELF): Int do
		# Extract keyroots
		var comp = new DefaultComparator
		var ks1 = new HashSet[N].from(self.nodes2keyroot.values).to_a
		comp.sort(ks1)
		var ks2 = new HashSet[N].from(o.nodes2keyroot.values).to_a
		comp.sort(ks2)
		# print ks1
		# print ks2

		# Fill dynamic result map with zeros
		var tdist = new Array[Array[Int]]
		for i in [0..ids.length[ do
			tdist.add new Array[Int].filled_with(0, o.ids.length)
		end
		# print "tdist: {tdist}"

		# Compare both trees
		for i in ks1 do
			for j in ks2 do
				treedist(i, j, tdist, o)
			end
		end

		# Return last computed result
		# print "tdist: {tdist}"
		return tdist[tdist.length -1][tdist[tdist.length -1].length - 1]
	end

	private fun treedist(n1, n2: N, tdist: Array[Array[Int]], o: SELF) do
		# Prepare sets
		var postorder = self.postorder
		var opostorder = o.postorder
		var po1 = new HashMap[N, Int]
		for i in [0..postorder.length[ do po1[postorder[i]] = i
		var pos1 = n1.key
		# var pos1 = po1[n1.key]
		# print "pos1: {pos1}"
		var po2 = new HashMap[N, Int]
		for i in [0..opostorder.length[ do po2[opostorder[i]] = i
		var pos2 = n2.key
		# var pos2 = po2[n2.key]
		# print "pos2: {pos2}"

		# print "n1: {n1}"
		# print "n2: {n2}"
		# Comparison bounds
		var b1 = pos1 - n1.lmd.key + 2
		# print "b1: {b1}"
		var b2 = pos2 - n2.lmd.key + 2
		# print "b2: {b2}"

		# print i
		# print i.lmd
		# print ids[b1]

		# print j
		# print j.lmd
		# print o.ids[b2]

		# Forest comparison table
		var fd = new Array[Array[Int]]
		for k in [0..b1[ do
			fd.add new Array[Int].filled_with(0, b2)
		end
		# print "fd: {fd}"

		for i in [1..b1[ do
			fd[i][0] = fd[i - 1][0] + remove_cost
		end
		for j in [1..b2[ do
			fd[0][j] = fd[0][j - 1] + remove_cost
		end
		# print "fd: {fd}"

		var n1lmd = n1.lmd
		var n2lmd = n2.lmd

		var i = 1
		var j = 1
		for k in [n1lmd.key .. pos1] do
			j = 1
			for l in [n2lmd.key .. pos2] do
				# print "k: {k}"
				# print "l: {l}"
				# print "i: {i}"
				# print "j: {j}"
				# print ids[k]
				# print ids[k].lmd
				# print n1.lmd
				# print o.ids[l]
				# print o.ids[l].lmd
				# print n2.lmd
				if ids[k].lmd == n1lmd and o.ids[l].lmd == n2lmd then
					# print "istree"
					# Both are trees, get tree distance
					# print fd[i - 1][j] + remove_cost
					# print fd[i][j - 1] + insert_cost
					# print fd[i - 1][j - 1] + update_cost(ids[k], o.ids[l])

					fd[i][j] = min(
						fd[i - 1][j] + remove_cost,
						fd[i][j - 1] + insert_cost,
						fd[i - 1][j - 1] + update_cost(ids[k], o.ids[l])
					)
					# print "fd[i][j]: {fd[i][j]}"
					# print tdist
					# print tdist[k][l]
					tdist[k - 1][l - 1] = fd[i][j]
					# print "tdist: {tdist}"
				else
					var m = ids[k].lmd.key - n1lmd.key
					var n = o.ids[l].lmd.key - n2lmd.key
					fd[i][j] = min(
						fd[i - 1][j] + remove_cost,
						fd[i][j - 1] + insert_cost,
						fd[m][n] + tdist[k - 1][l - 1]
					)
					# print "fd[i][j]: {fd[i][j]}"
				end
				# print "fd: {fd}"
				j += 1
			end
			i += 1
		end
	end
	private fun min(vals: Int...): Int do
		assert not vals.is_empty
		var min = vals.first
		for val in vals do
			if val < min then min = val
		end
		return min
	end

	# Removal cost
	fun remove_cost: Int do return 1

	# Insertion cost
	fun insert_cost: Int do return 1

	# ipdate cost
	fun update_cost(n1, n2: ValueNode): Int do
		if n1 == n2 then return 0
		return 1
	end

	redef fun show_dot do
		assert not_empty: root != null
		var f = new ProcessWriter("dot", "-Txlib")
		f.write "digraph \{\n"
		dot_down(root.as(not null), f)
		f.write "\}\n"
		f.close
	end

	# Translate the tree in dot format starting from `node`.
	protected fun dot_down(node: N, f: ProcessWriter) do
		f.write node.to_dot
		for child in node.children do
			dot_down(child, f)
		end
	end

	redef fun length do return ids.length
end

# A node that can go in a ValueTree
class ValueNode
	super Comparable
	super TreeNode[Int, String]

	redef type N: ValueNode

	# Children of this node
	var children = new Array[N]

	# Return self in a custom string format
	fun to_str: String do
		var res = "{" " * depth}{value}\n"
		for child in children do
			res += child.to_str
		end
		return res
	end

	# Depth in tree (length of the path from `self` to `root`)
	#
	# Usage:
	# ~~~
	# var tree = new ValueTree.from_string("""
	# a
	#  b
	#   d
	#  c
	#   e
	#    g
	#   f
	#    h
	#    i""".split("\n"))
	# assert tree.ids[0].depth == 0
	# assert tree.ids[2].depth == 2
	# assert tree.ids[8].depth == 3
	# ~~~
	fun depth: Int do
		var node: nullable ValueNode = self
		var i = -1
		while node != null do
			node = node.parent
			i += 1
		end
		return i
	end

	# Left-most descendant of `self`
	#
	# Usage:
	# ~~~
	# var tree = new ValueTree.from_string("""
	# a
	#  b
	#   d
	#  c
	#   e
	#    g
	#   f
	#    h
	#    i""".split("\n"))
	# assert tree.ids[0].lmd == tree.ids[2]
	# assert tree.ids[2].lmd == tree.ids[2]
	# assert tree.ids[3].lmd == tree.ids[5]
	# assert tree.ids[8].lmd == tree.ids[8]
	# ~~~
	fun lmd: N do
		if children.is_empty then return self
		return children.first.lmd
	end

	# Keyroot of this node
	#
	# Example:
	# ~~~
	# var tree = new ValueTree.from_string("""
	# a
	#  b
	#   d
	#  c
	#   e
	#    g
	#   f
	#    h
	#    i""".split("\n"))
	# assert tree.ids[0].keyroot == tree.ids[0]
	# assert tree.ids[1].keyroot == tree.ids[0]
	# assert tree.ids[2].keyroot == tree.ids[0]
	# assert tree.ids[3].keyroot == tree.ids[3]
	# assert tree.ids[4].keyroot == tree.ids[3]
	# assert tree.ids[5].keyroot == tree.ids[3]
	# assert tree.ids[6].keyroot == tree.ids[6]
	# assert tree.ids[7].keyroot == tree.ids[6]
	# assert tree.ids[8].keyroot == tree.ids[8]
	# ~~~
	fun keyroot: N do
		var parent = self.parent
		if parent == null then return self
		if parent.children.first == self then return parent.keyroot
		return self
	end

	private fun postorder(nodes: Array[N]) do
		for child in children do
			child.postorder(nodes)
		end
		nodes.add self
	end

	redef type OTHER: N

	redef fun ==(o) do
		if not o isa N then return false
		return self.value == o.value
	end

	redef fun <(o) do return self.key < o.key
end
