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

import file
intrude import string

# Structure, tuple containing a LeafNode and an Int
# Used for methods like [] or has/has_only
private class TupleLeafNodePos
	private var curr_node: LeafNode
	private var corrected_pos: Int
	private var visit_stack: List[TupleVisitNode]
end

# Abstract class, represents all the services offered by both mutable and immutable ropes
abstract class Rope
	super Text

	# Cached version of self as a flat String
	private var str_representation: nullable String = null

	# The first node of the hierarchy
	private var parent_node: RopeNode

	# Needed by the compiler to avoid producing an error with constructors in subclasses
	init do self.parent_node = new ConcatNode

	# Initializes a new Rope with a text embedded in directly
	init from(str: String) do
		self.parent_node = new ConcatNode
		parent_node.as(ConcatNode).right_child = new LeafNode(str)
		parent_node.as(ConcatNode).update_data
	end

	redef fun length: Int
	do
		return parent_node.length
	end

	# Returns a flat version of self
	redef fun to_s
	do
		if self.str_representation == null then flatten
		return str_representation.as(not null)
	end

	# Stores a flat version of self in cache
	private fun flatten: FlatString
	do
		var native_final_str = calloc_string(length + 1)

		native_final_str[length] = '\0'

		var offset = 0

		var iter = new DFSRopeLeafIterator(self)

		while iter.is_ok do
			iter.item.value.as(FlatString).items.copy_to(native_final_str, iter.item.value.length, 0, offset)
			offset += iter.item.value.length
			iter.next
		end

		return native_final_str.to_s_with_length(length)
	end

	# Gets a node containing the substring to seek the char at the require position
	private fun get_node_for_pos(position: Int): TupleLeafNodePos
	do
		assert position >= 0 and position < self.length
		return get_node_from(parent_node.as(not null) ,0 ,position, new List[TupleVisitNode])
	end

	# Intern method called by get_node_for_pos
	private fun get_node_from(node: RopeNode, curr_pos: Int, seeked_position: Int, stack: List[TupleVisitNode]):TupleLeafNodePos
	do
		if node isa LeafNode then return new TupleLeafNodePos(node, seeked_position - curr_pos,stack)
		node = node.as(ConcatNode)

		if node.left_child != null then
			var seek_pos = curr_pos + node.left_child.length
			stack.add(new TupleVisitNode(node))
			stack.last.left_visited = true
			if seek_pos > seeked_position then return get_node_from(node.left_child.as(not null), curr_pos, seeked_position, stack)
			stack.last.right_visited = true
			return get_node_from(node.right_child.as(not null), seek_pos, seeked_position, stack)
		else
			var vis = new TupleVisitNode(node)
			vis.left_visited = true
			vis.right_visited = true
			stack.add(vis)
			return get_node_from(node.right_child.as(not null), curr_pos, seeked_position, stack)
		end
	end

	# Returns an upper (capitalized) version of self
	fun to_upper: Rope
	do
		var new_rope = new BufferRope
		var iter = new DFSRopeLeafIterator(self)
		while iter.is_ok do
			new_rope.append(iter.item.value.to_upper)
			iter.next
		end
		return new_rope
	end

	# Returns a lower (minuscule) version of self
	fun to_lower: Rope
	do
		var new_rope = new BufferRope
		var iter = new DFSRopeLeafIterator(self)
		while iter.is_ok do
			new_rope.append(iter.item.value.to_lower)
			iter.next
		end
		return new_rope
	end
end

# Rope that can be modified
class RopeBuffer
	super Rope
	super Buffer

	redef type SELFTYPE: RopeBuffer

	redef var chars: Sequence[Char] = new RopeBufferCharView(self)

	redef fun empty do return new RopeBuffer

	# Performs a right rotation on a node of the Rope
	#
	#              Root                Pivot
	#             /    \              /     \
	#           Pivot Leaf3     =>  Leaf1  Root
	#          /     \                    /   \
	#       Leaf1   Leaf2              Leaf2  Leaf3
	private fun rotate_right(root: ConcatNode)
	do
		assert root.left_child != null
		var pivot = root.left_child.as(ConcatNode)
		var root_new_left = pivot.right_child
		var root_parent = root.parent

		root.left_child = root_new_left
		pivot.right_child = root
		if root_parent == null then
			self.parent_node = pivot
			pivot.parent = null
			return
		end

		if root_parent.left_child == root then
			root_parent.left_child = pivot
		else
			root_parent.right_child = pivot
		end

		root.update_data
		pivot.update_data
		root_parent.update_data
	end

	# Performs a left rotation on a node of the Rope
	#
	#      Root                    Pivot
	#     /    \                  /     \
	#  Leaf1  Pivot        =>   Root   Leaf3
	#        /     \           /    \
	#      Leaf2  Leaf3      Leaf1 Leaf2
	private fun rotate_left(root: ConcatNode)
	do
		assert root.right_child != null
		var pivot = root.right_child.as(ConcatNode)
		var root_new_right = pivot.left_child
		var root_parent = root.parent

		root.right_child = root_new_right
		pivot.left_child = root
		if root_parent == null then
			self.parent_node = pivot
			pivot.parent = null
			return
		end

		if root_parent.left_child == root then
			root_parent.left_child = pivot
		else
			root_parent.right_child = pivot
		end

		root.update_data
		pivot.update_data
		root_parent.update_data
	end

	# Shortcut method to balance a node and its parents
	# based on the rules of the AVL Tree
	private fun balance_from_node(parent_node: nullable ConcatNode)
	do
		while parent_node != null do
			parent_node.update_data
			var node_balance = parent_node.balance_factor
			if node_balance < -1 or node_balance > 1 then
				balance_node(parent_node)
			end
			parent_node = parent_node.parent
		end
	end

	# Performs rotations to balance a node according to AVL Tree rules
	private fun balance_node(node: ConcatNode)
	do
		var balance_factor = node.balance_factor
		if balance_factor < -1 then
			var right_balance = node.right_child.balance_factor
			if right_balance < 0 then
				rotate_left(node)
			else
				rotate_right(node.right_child.as(ConcatNode))
				rotate_left(node)
			end
		else
			var left_balance = node.left_child.balance_factor
			if left_balance > 0 then
				rotate_right(node)
			else
				rotate_left(node.left_child.as(ConcatNode))
				rotate_right(node)
			end
		end
	end

	redef fun append(str)
	do
		var last_node = parent_node

		while last_node isa ConcatNode and last_node.right_child != null do
			last_node = last_node.right_child.as(not null)
		end

		if last_node isa ConcatNode then
			last_node.right_child = new LeafNode(str.to_s)
		else if last_node isa LeafNode then
			var last_node_parent = last_node.parent
			var new_concat = new ConcatNode
			last_node_parent.right_child = new_concat
			new_concat.left_child = last_node
			new_concat.right_child = new LeafNode(str.to_s)
			last_node = new_concat
		end

		balance_from_node(last_node.as(ConcatNode))

		is_dirty = true
	end

	# Adds a String at the beginning of the rope
	fun prepend(str: String)
	do
		var curr_node = parent_node

		while curr_node isa ConcatNode and curr_node.left_child != null do
			curr_node = curr_node.left_child.as(not null)
		end

		if curr_node isa ConcatNode then
			curr_node.left_child = new LeafNode(str.to_s)
		else if curr_node isa LeafNode then
			var parent = curr_node.parent
			var new_concat = new ConcatNode
			var new_leaf = new LeafNode(str.to_s)
			new_concat.left_child = new_leaf
			new_concat.right_child = curr_node
			parent.left_child = new_concat
			curr_node = new_concat
		end

		balance_from_node(curr_node.as(ConcatNode))

		is_dirty = true
	end


	redef fun *(i)
	do
		var buf = new RopeBuffer
		var str = self.to_s
		for j in [0..i[ do buf.append(str)
		return buf
	end

	redef fun +(other)
	do
		var new_buf = new RopeBuffer

		var leafiter = new DFSLeafForwardIterator(self)

		while leafiter.is_ok do
			new_buf.append(leafiter.item.value)
			leafiter.next
		end

		if other isa String then
			new_buf.append(other)
			return new_buf
		end

		if other isa FlatBuffer then
			new_buf.append(other.to_s)
			return new_buf
		end

		if other isa RopeBuffer then
			var oiter = new DFSLeafForwardIterator(other)
			while oiter.is_ok do
				new_buf.append(oiter.item.value)
				oiter.next
			end
			return new_buf
		end

		return new_buf
	end

	# Refines to add a cache method, calculates only once for every modification
	# the string representation for self
	redef fun to_s
	do
		if self.str_representation == null or is_dirty then
			self.str_representation = flatten
			is_dirty = false
		end
		return self.str_representation.as(not null)
	end

end

# Rope that cannot be modified
class RopeString
	super Rope
	super String

	redef type SELFTYPE: RopeString

	redef var chars: SequenceRead[Char] = new RopeStringCharView(self)

	redef fun empty do return new RopeString

	redef fun *(i)
	do
		var new_rope = new RopeString.from(self)
		for j in [1..i[ do new_rope += self
		return new_rope
	end

	redef fun +(other)
	do
		var new_rope = new RopeString
		var parent = new_rope.parent_node
		parent.as(ConcatNode).left_child = new LeafNode(self)
		parent.as(ConcatNode).right_child = new LeafNode(other.to_s)
		return new_rope
	end

end

private class RopeStringCharView
	super SequenceRead[Char]

	# Type of the target
	private type VIEWTARGET: RopeString

	# Targeted Rope for the view
	private var target: VIEWTARGET

	init(tgt: VIEWTARGET)
	do
		self.target = tgt
	end

	redef fun [](position)
	do
		var tuple = target.get_node_for_pos(position)
		return tuple.curr_node.value[tuple.corrected_pos]
	end

	redef fun iterator do
		return new RopeCharForwardIterator(target)
	end

	redef fun iterator_from(pos)
	do
		return new RopeCharForwardIterator.from(target,pos)
	end

	redef fun reverse_iterator do
		return new RopeCharBackwardsIterator(target)
	end

	redef fun reverse_iterator_from(pos) do
		return new RopeCharBackwardsIterator.from(target,pos)
	end

end

private class RopeBufferCharView
	super RopeStringCharView
	super Sequence[Char]

	redef type VIEWTARGET: RopeBuffer

	redef fun []=(index, item)
	do
		var node = target.get_node_for_pos(index)
		var str = node.curr_node.value
		var buf = new FlatBuffer.from(str)
		buf.chars[index] = item
		node.curr_node.value = buf.to_s
	end

	redef fun push(c)
	do
		add(c)
	end

	redef fun add(c)
	do
		target.append(c.to_s)
	end

	redef fun append(s)
	do
		target.append(s.to_s)
	end

end

# A tuple representing the state of a node for a tree parsing algorithm
private class TupleVisitNode

	init(tgt: ConcatNode)
	do
		self.node = tgt
	end

	private var node: ConcatNode

	private var left_visited = false
	private var right_visited = false

end

# Iterator returning the content of a rope one char at a time
private abstract class RopeCharIterator
	super IndexedIterator[Char]

	# The iterator used to visit the rope
	private var sub_str_iter: DFSLeafIterator

	# The current position in the rope
	private var abs_pos: Int

	# The iterator on the substring contained in the current node visited by `sub_str_iter`
	private var curr_sub_iter: nullable IndexedIterator[Char]

	init from(tgt: Rope, from: Int) do end

	redef fun item do return curr_sub_iter.item

	redef fun index do return abs_pos

	redef fun is_ok do return curr_sub_iter != null and curr_sub_iter.is_ok or sub_str_iter.is_ok
end

# Forward visit of the chars of the rope
private class RopeCharForwardIterator
	super RopeCharIterator

	init(tgt: Rope) do from(tgt, 0)

	init from(tgt: Rope, from: Int)
	do
		sub_str_iter = new DFSLeafForwardIterator.with_index(tgt,from)
		curr_sub_iter = sub_str_iter.item.value.chars.iterator_from(sub_str_iter.pos + from)
		abs_pos = from
	end

	redef fun next
	do
		abs_pos += 1
		assert is_ok
		if curr_sub_iter.is_ok then
			curr_sub_iter.next
		end
		if not curr_sub_iter.is_ok then
			sub_str_iter.next
			if sub_str_iter.is_ok then curr_sub_iter = sub_str_iter.item.value.chars.iterator
		end
	end
end

# Special kind of iterator
#
# Performs a Depth-First Search on RopeLeaf items
#
private abstract class DFSLeafIterator
	super IndexedIterator[LeafNode]

	# Rope meant to be visited
	var target: Rope

	# Position in target
	var pos = 0

	# Stack of the visited nodes in the rope
	private var visit_stack = new List[TupleVisitNode]

	# The leaf node being visited by the iterator
	private var curr_leaf: nullable LeafNode

	init(tgt: Rope)
	do
		with_index(tgt, 0)
	end

	# Creates a new iterator on `tgt` starting at `index`
	init with_index(tgt: Rope, index: Int)
	do
		self.target = tgt
		var returned_tuple = target.get_node_for_pos(index)
		curr_leaf = returned_tuple.curr_node
		visit_stack = returned_tuple.visit_stack
		pos = index - returned_tuple.corrected_pos
	end

	redef fun is_ok do return curr_leaf != null

	fun next_body is abstract

	redef fun item
	do
		assert is_ok
		return curr_leaf.as(not null)
	end

end

# Special kind of iterator
#
# Performs a Depth-First Search on RopeLeaf items
#
private class DFSLeafForwardIterator
	super DFSLeafIterator

	redef fun next do
		assert is_ok
		pos += curr_leaf.value.length
		next_body
	end

	redef fun next_body
	do
		if visit_stack.is_empty then
			curr_leaf = null
			return
		end

		var lst = visit_stack.last
		var nxt: nullable RopeNode = null

		if not lst.left_visited then
			nxt = lst.node.left_child
			lst.left_visited = true
		else if not lst.right_visited then
			nxt = lst.node.right_child
			lst.right_visited = true
		end

		if nxt == null then
			visit_stack.pop
		else if nxt isa LeafNode then
			curr_leaf = nxt
			return
		else if nxt isa ConcatNode then
			visit_stack.push(new TupleVisitNode(nxt))
		end
		next_body
	end

end

private class RopeCharBackwardsIterator
	super RopeCharIterator

	init(tgt: Rope) do from(tgt, tgt.length-1)

	init from(tgt: Rope, from: Int)
	do
		sub_str_iter = new DFSLeafBackwardsIterator.with_index(tgt,from)
		curr_sub_iter = sub_str_iter.item.value.chars.reverse_iterator_from(-(sub_str_iter.pos - from))
		abs_pos = from
	end

	redef fun next
	do
		abs_pos -= 1
		assert is_ok
		if curr_sub_iter.is_ok then
			curr_sub_iter.next
		end
		if not curr_sub_iter.is_ok then
			sub_str_iter.next
			if sub_str_iter.is_ok then curr_sub_iter = sub_str_iter.item.value.chars.reverse_iterator
		end
	end
end

private class DFSLeafBackwardsIterator
	super DFSLeafIterator

	redef fun next do
		assert is_ok
		pos -= curr_leaf.value.length
		next_body
	end

	# Creates a new iterator on `tgt` starting at `index`
	init with_index(tgt: Rope, index: Int)
	do
		super

		for i in visit_stack do
			if i.left_visited then i.left_visited = false
		end
	end

	redef fun next_body
	do
		if visit_stack.is_empty then
			curr_leaf = null
			return
		end

		var lst = visit_stack.last
		var nxt: nullable RopeNode = null

		if not lst.right_visited then
			nxt = lst.node.right_child
			lst.right_visited = true
		else if not lst.left_visited then
			nxt = lst.node.left_child
			lst.left_visited = true
		end

		if nxt == null then
			visit_stack.pop
		else if nxt isa LeafNode then
			curr_leaf = nxt
			return
		else if nxt isa ConcatNode then
			visit_stack.push(new TupleVisitNode(nxt))
		end
		next_body
	end
end

# A node for a Rope
private abstract class RopeNode

	var length = 0

	var parent: nullable ConcatNode = null

	var height = 0

	# The balance factor of a node, if it is a Leaf, it equals its length
	# Else, it will be equal to the difference between the height on the left and on the right
	fun balance_factor: Int is abstract
end

# Node that represents a concatenation between two nodes (of any RopeNode type)
private class ConcatNode
	super RopeNode

	var _left_child: nullable RopeNode
	var _right_child: nullable RopeNode

	fun left_child: nullable RopeNode do return _left_child

	fun right_child: nullable RopeNode do return _right_child

	fun left_child=(new_node: nullable RopeNode)
	do
		self._left_child = new_node
		new_node.parent = self
		update_data
	end

	fun right_child=(new_node: nullable RopeNode)
	do
		self._right_child = new_node
		new_node.parent = self
		update_data
	end

	# Updates the length and the height of the node
	fun update_data
	do
		self.length = 0
		self.height = 1
		if left_child != null then
			self.length += left_child.length
			if left_child.height + 1 > self.height then self.height = left_child.height + 1
		end
		if right_child != null then
			self.length += right_child.length
			if right_child.height + 1 > self.height then self.height = right_child.height + 1
		end
	end

	# Computes and returns the balance factor (used for AVL trees)
	#
	# Formula : left.height - right.height
	redef fun balance_factor
	do
		var left_height = 0
		var right_height = 0
		if left_child != null then left_height = left_child.height
		if right_child != null then right_height = right_child.height
		return left_height - right_height
	end
end

# A leaf node contains a substring of some sort
private class LeafNode
	super RopeNode

	# Encapsulated string in the leaf node
	var value: String

	init(val: String)
	do
		self.value = val
		self.length = val.length
	end

	redef fun balance_factor do return self.length

end

