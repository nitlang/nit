# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it if you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or as a part of
# another product.

# Nit implementation of the Ropes (see Ropes : An Alternative to Strings,
# SOFTWARE - PRACTICE AND EXPERIENCE, VOL. 25(12), 1315 - 1330 (DECEMBER 1995)
# Hans. J Boehm, Russ Atkinson and Michael Plass)
#
# A rope is a kind of string but instead of being flat, it relies on a binary tree structure to store data.
module ropes

intrude import string

# Used when searching for a particular node
# Returns the path to the node from the root of the rope
# Also, the node and the offset for seeked position in the rope
private class Path
	# Leaf found
	var leaf: Leaf
	# Offset in leaf
	var offset: Int
	# Stack of the nodes traversed, and the path used
	var stack: List[PathElement]
end

# An element for a Path, has the concat node and whether or not
# left or right child was visited.
private class PathElement
	# Visited node
	var node: Concat
	# Was the left child visited ?
	var left = false
	# Was the right child visited ?
	var right = false
end

# A node for a Rope
private abstract class RopeNode
	# Length of the node
	var length = 0
end

# Node that represents a concatenation between two nodes (of any RopeNode type)
private class Concat
	super RopeNode

	# Left child of the node
	var _left: nullable RopeNode = null
	# Right child of the node
	var _right: nullable RopeNode = null

	fun left: nullable RopeNode do return _left
	fun right: nullable RopeNode do return _right

	fun left=(l: RopeNode)
	do
		_left = l
		length = l.length
		if _right != null then length += _right.length
	end

	fun right=(r: RopeNode)
	do
		_right = r
		length = r.length
		if _left != null then length += _left.length
	end
end

# Leaf of a Rope, contains a FlatString
private class Leaf
	super RopeNode

	# Encapsulated FlatString in the leaf node
	var str: FlatString

	init(val: FlatString) do
		self.str = val
		length = str.length
	end

end

# Basic structure, binary tree with a root node.
#
# Also shared services by subsequent implementations.
abstract class Rope
	super Text

	# Root node, entry point of a Rope.
	private var root: RopeNode

	# Empty Rope
	init do from("")

	# Creates a new Rope with `s` as root
	init from(s: String) do
		if s isa RopeString then root = s.root else root = new Leaf(s.as(FlatString))
	end

	private init from_root(r: RopeNode)
	do
		root = r
	end

	redef fun length do return root.length

	# Iterator on the nodes of the rope, in forward postfix order
	private fun postfix(from: Int): Postfix do return new Postfix.from(self, from)

	# Iterator on the leaves of the rope, forward order
	private fun leaves(from: Int): LeavesIterator do return new LeavesIterator(self, from)

	# Iterator on the substrings from 0, in forward order
	fun substrings: IndexedIterator[Text] do return new SubstringsIterator(self, 0)

	# Iterator on the substrings, starting at position `from`, in forward order
	fun substrings_from(from: Int): IndexedIterator[Text] do return new SubstringsIterator(self, from)

	# Path to the Leaf for `position`
	private fun node_at(position: Int): Path
	do
		assert position >= 0 and position < length
		return get_node_from(root.as(not null), 0, position, new List[PathElement])
	end

	# Builds the path to Leaf at position `seek_pos`
	private fun get_node_from(node: RopeNode, curr_pos: Int, seek_pos: Int, stack: List[PathElement]): Path
	do
		assert curr_pos >= 0
		if node isa Leaf then return new Path(node, seek_pos - curr_pos, stack)
		node = node.as(Concat)

		if node.left != null then
			var next_pos = curr_pos + node.left.length
			stack.add(new PathElement(node))
			if next_pos > seek_pos then
				stack.last.left = true
				return get_node_from(node.left.as(not null), curr_pos, seek_pos, stack)
			end
			stack.last.right = true
			return get_node_from(node.right.as(not null), next_pos, seek_pos, stack)
		else
			var vis = new PathElement(node)
			vis.right = true
			stack.add(vis)
			return get_node_from(node.right.as(not null), curr_pos, seek_pos, stack)
		end
	end

	redef fun ==(o)
	do
		if not o isa Text then return false
		if o.length != self.length then return false
		var oit = o.chars.iterator
		for i in self.chars.iterator do
			if i != oit.item then return false
			oit.next
		end
		return true
	end
end

# Rope that cannot be modified
class RopeString
	super Rope
	super String

	redef fun to_s do return self

	redef fun empty do return once new RopeString.from("")

	redef fun reversed
	do
		var ret = empty.as(RopeString)
		for i in substrings do
			ret = ret.prepend(i.reversed.to_s).as(RopeString)
		end
		return ret
	end

	redef fun to_upper
	do
		var ret = empty
		for i in substrings do
			ret += i.to_upper
		end
		return ret
	end

	redef fun to_lower
	do
		var ret = empty
		for i in substrings do
			ret += i.to_lower
		end
		return ret
	end

	redef fun +(o) do return insert_at(o.to_s, length)

	redef fun *(n)
	do
		var ret = new RopeString.from("")
		for i in [0..n[ do
			ret = (ret + self).as(RopeString)
		end
		return ret
	end

	# Inserts a String `str` at position `pos`
	fun insert_at(str: String, pos: Int): RopeString
	do
		if str.length == 0 then return self
		if self.length == 0 then return new RopeString.from(str)

		assert pos >= 0 and pos <= length

		if pos == length then return append(str).as(RopeString)

		var path = node_at(pos)

		var last_concat = new Concat

		if path.offset == 0 then
			last_concat.right = path.leaf
			if str isa FlatString then last_concat.left = new Leaf(str) else last_concat.left = str.as(RopeString).root
		else if path.offset == path.leaf.length then
			if str isa FlatString then last_concat.right = new Leaf(str) else last_concat.right = str.as(RopeString).root
			last_concat.left = path.leaf
		else
			var s = path.leaf.str
			var l_half = s.substring(0, s.length - path.offset)
			var r_half = s.substring_from(s.length - path.offset)
			var cct = new Concat
			cct.right = new Leaf(r_half)
			last_concat.left = new Leaf(l_half)
			if str isa FlatString then last_concat.right = new Leaf(str) else last_concat.right = str.as(RopeString).root
			cct.left = last_concat
			last_concat = cct
		end

		for i in path.stack.reverse_iterator do
			var nod = new Concat
			if i.left then
				nod.right = i.node.right.as(not null)
				nod.left = last_concat
			else
				nod.left = i.node.left.as(not null)
				nod.right = last_concat
			end
			last_concat = nod
		end

		return new RopeString.from_root(last_concat)
	end

	# Adds `s` at the beginning of self
	fun prepend(s: String): String do return insert_at(s, 0)

	# Adds `s` at the end of self
	fun append(s: String): String
	do
		if self.is_empty then return s
		return new RopeString.from_root(append_to_path(root,s))
	end

	# Builds a new path from root to the rightmost node with s appended
	private fun append_to_path(node: RopeNode, s: String): RopeNode
	do
		var cct = new Concat
		if node isa Leaf then
			cct.left = node
			if s isa FlatString then cct.right = new Leaf(s) else cct.right = s.as(RopeString).root
		else if node isa Concat then
			var right = node.right
			if node.left != null then cct.left = node.left.as(not null)
			if right == null then
				if s isa FlatString then cct.right = new Leaf(s) else cct.right = s.as(RopeString).root
			else
				cct.right = append_to_path(right, s)
			end
		end
		return cct
	end

	# O(log(n))
	#
	#     var rope = new RopeString.from("abcd")
	#     assert rope.substring(1, 2)         ==  "bc"
	#     assert rope.substring(-1, 2)         ==  "a"
	#     assert rope.substring(1, 0)         ==  ""
	#     assert rope.substring(2, 5)         ==  "cd"
	#
	redef fun substring(pos, len)
	do
		if pos < 0 then
			len += pos
			pos = 0
		end

		if pos + len > length then len = length - pos

		if len <= 0 then return new RopeString.from("")

		var path = node_at(pos)

		var lf = path.leaf
		var offset = path.offset

		if path.leaf.str.length - offset > len then lf = new Leaf(lf.str.substring(offset,len)) else lf = new Leaf(lf.str.substring_from(offset))

		var nod: RopeNode = lf

		for i in path.stack.reverse_iterator do
			if i.right then continue
			var tmp = new Concat
			tmp.left = nod
			var r = i.node.right
			if r != null then tmp.right = r
			nod = tmp
		end

		var ret = new RopeString
		ret.root = nod

		path = ret.node_at(len-1)

		offset = path.offset
		nod = new Leaf(path.leaf.str.substring(0, offset+1))

		for i in path.stack.reverse_iterator do
			if i.left then continue
			var tmp = new Concat
			tmp.right = nod
			var l = i.node.left
			if l != null then tmp.left = l
			nod = tmp
		end

		ret.root = nod

		return ret
	end
end

# Used to iterate on a Rope
private class IteratorElement

	init(e: RopeNode)
	do
		if e isa Leaf then
			left = true
			right = true
		end
		node = e
	end

	# The node being visited
	var node: RopeNode
	# If the node has a left child, was it visited ?
	var left = false
	# If the node has a right child, was it visited ?
	var right = false
	# Was the current node visited ?
	var done = false
end

# Simple Postfix iterator on the nodes of a Rope
private class Postfix
	super IndexedIterator[RopeNode]

	# Target Rope to iterate on
	var target: Rope

	# Current position in Rope
	var pos: Int

	# Visited nodes
	var stack = new List[IteratorElement]

	init from(tgt: Rope, pos: Int)
	do
		self.target = tgt
		self.pos = pos
		if pos < 0 or pos >= tgt.length then return
		var path = tgt.node_at(pos)
		self.pos -= path.offset
		for i in path.stack do
			var item = new IteratorElement(i.node)
			item.left = true
			if i.right then item.right = true
			stack.push item
		end
		var item = new IteratorElement(path.leaf)
		item.done = true
		stack.push item
	end

	redef fun item
	do
		assert is_ok
		return stack.last.node
	end

	redef fun is_ok do return not stack.is_empty

	redef fun index do return pos

	redef fun next do
		if stack.is_empty then return
		if pos > target.length-1 then
			stack.clear
			return
		end
		var lst = stack.last
		if lst.done then
			if lst.node isa Leaf then
				pos += lst.node.length
			end
			stack.pop
			next
			return
		end
		if not lst.left then
			lst.left = true
			var nod = lst.node
			if nod isa Concat and nod.left != null then
				stack.push(new IteratorElement(nod.left.as(not null)))
				next
				return
			end
		end
		if not lst.right then
			lst.right = true
			var nod = lst.node
			if nod isa Concat and nod.right != null then
				stack.push(new IteratorElement(nod.right.as(not null)))
				next
				return
			end
		end
		lst.done = true
	end
end

# Iterates on the leaves (substrings) of the Rope
class LeavesIterator
	super IndexedIterator[Leaf]

	private var nodes: Postfix

	init(tgt: Rope, pos: Int)
	do
		nodes = tgt.postfix(pos)
	end

	redef fun is_ok do return nodes.is_ok

	redef fun item
	do
		assert is_ok
		return nodes.item.as(Leaf)
	end

	redef fun index do return nodes.index

	redef fun next
	do
		while nodes.is_ok do
			nodes.next
			if nodes.is_ok and nodes.item isa Leaf then break
		end
	end
end

# Uses the leaves and calculates a new substring on each iteration
class SubstringsIterator
	super IndexedIterator[Text]

	private var nodes: IndexedIterator[Leaf]

	# Current position in Rope
	var pos: Int

	# Current substring, computed from the current Leaf and indexes
	var substring: Text

	init(tgt: Rope, pos: Int)
	do
		nodes = tgt.leaves(pos)
		self.pos = pos
		if pos < 0 or pos >= tgt.length then return
		make_substring
	end

	# Compute the bounds of the current substring and makes the substring
	private fun make_substring
	do
		substring = nodes.item.str
		var min = 0
		var length = substring.length
		if nodes.index < pos then
			min = pos - nodes.index
		end
		substring = substring.substring(min, length)
	end

	redef fun is_ok do return nodes.is_ok

	redef fun item
	do
		assert is_ok
		return substring
	end

	redef fun index do return pos

	redef fun next
	do
		pos += substring.length
		nodes.next
		if nodes.is_ok then make_substring
	end

end

class RopeCharIterator
	super IndexedIterator[Char]

	var substrings: IndexedIterator[Text]

	var pos: Int

	var max: Int

	var substr_iter: IndexedIterator[Char]

	init(tgt: Rope, from: Int)
	do
		substrings = tgt.substrings_from(from)
		max = tgt.length - 1
		if not substrings.is_ok then
			pos = tgt.length
			return
		end
		pos = from
		substr_iter = substrings.item.chars.iterator
	end

	redef fun item do return substr_iter.item

	redef fun is_ok do return pos <= max

	redef fun index do return pos

	redef fun next
	do
		pos += 1
		if substr_iter.is_ok then
			substr_iter.next
		end
		if not substr_iter.is_ok then
			substrings.next
			if substrings.is_ok then
				substr_iter = substrings.item.chars.iterator
			end
		end
	end
end

