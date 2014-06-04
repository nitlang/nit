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

end

# Rope that cannot be modified
class RopeString
	super Rope
	super String

	redef fun to_s do return self

end

