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

intrude import flat

# Structure, tuple containing a LeafNode and an Int
# Used for methods like [] or has/has_only
private class TupleLeafNodePos
	private var curr_node: LeafNode
	private var corrected_pos: Int
	private var visit_stack: List[TupleVisitNode]
end

# A tuple representing the state of a node for a tree parsing algorithm
private class TupleVisitNode
	init(tgt: ConcatNode)
	do
		self.node = tgt
	end

	init full(tgt: ConcatNode, l_visit: Bool, r_visit: Bool)
	do
		self.node = tgt
		self.left_visited = l_visit
		self.right_visited = r_visit
	end

	private var node: ConcatNode
	private var left_visited = false
	private var right_visited = false
end

redef class Text
	fun ropeize: Rope is abstract
end

redef class Buffer

	redef fun cache
	do
		if self isa RopeBuffer then
			to_s
			is_dirty = false
		end
		super
	end

	redef fun to_cstring do
		if self isa RopeBuffer then
			if self.is_dirty then
				str_representation = null
				flatten
			end
			return str_representation._items
		end
		return super
	end

	redef fun ropeize
	do
		if self isa FlatText then
			return new RopeBuffer.from(self.to_s)
		else if self isa Rope then
			return self
		end
		# Should never happen
		return super
	end
end

redef class String

	redef fun to_cstring
	do
		if self isa RopeString then
			return flatten._items
		end

		return super
	end

	redef fun ropeize
	do
		if self isa FlatText then
			return new RopeBuffer.from(self)
		else if self isa Rope then
			return self
		end
		# Should never happen
		return super
	end

end

# Abstract class, represents all the services offered by both mutable and immutable ropes
abstract class Rope
	super Text


	# Gets the total length of the Rope
	redef fun length: Int do return parent_node.length

	init
	do
		self.parent_node = new ConcatNode
	end

	private fun substring_intern(index_from: Int, count: Int): RopeBuffer
	do
		assert count >= 0

		if index_from < 0 then
			count += index_from
			if count < 0 then count = 0
			index_from = 0
		end

		if count - index_from >= self.length then count = length - index_from

		var buffer = new RopeBuffer

		var iter = new DFSRopeLeafIterator(self, index_from)

		if iter.is_ok then
			if iter.item.length < count then
				var temp = iter.item.value.substring_from(iter.start_sub_pos)
				buffer.append(temp)
				count -= temp.length
			else
				buffer.append(iter.item.value.substring(iter.start_sub_pos, count))
				return buffer
			end
		else
			abort
		end

		iter.next

		while iter.is_ok do
			if iter.item.length < count then
				buffer.append(iter.item.value)
				count -= iter.item.value.length
			else
				buffer.append(iter.item.value.substring(0,count))
				return buffer
			end
			iter.next
		end

		return buffer
	end

	# Initializes a new Rope with a text embedded in directly
	init from(str: Text) do
		self.parent_node = new ConcatNode
		parent_node.right_child = new LeafNode(str.to_s)
		parent_node.update_data
	end

	# Cached version of self as a flat String
	private var str_representation: nullable FlatString = null

	# The first node of the hierarchy
	private var parent_node: ConcatNode

	redef fun ==(other) do
		if other != null and other isa Rope and other.parent_node == self.parent_node then return true
		return super
	end

	private fun get_leaf_for_pos(pos: Int): TupleLeafNodePos
	do
		assert pos >= 0 and pos < length

		var curr: nullable RopeNode = parent_node
		loop
			if curr isa ConcatNode then
				if curr.left_child != null then
					if pos < curr.left_child.length then
						curr = curr.left_child.as(not null)
					else
						pos -= curr.left_child.length
						curr = curr.right_child.as(not null)
					end
				else
					curr = curr.right_child.as(not null)
				end
			else if curr isa LeafNode then
				return new TupleLeafNodePos(curr, pos, new List[TupleVisitNode])
			end
		end
	end

	private fun get_dfs_stack(node: LeafNode): List[TupleVisitNode]
	do
		var return_list = new List[TupleVisitNode]
		var curr_node: RopeNode = node
		var parent: nullable ConcatNode = curr_node.parent
		while parent != null do
			if parent.left_child != null and parent.left_child == curr_node then
				return_list.unshift(new TupleVisitNode.full(parent,true,false))
			else
				return_list.unshift(new TupleVisitNode.full(parent,true,true))
			end
			curr_node = parent
			parent = parent.parent
		end
		return return_list
	end

	private fun get_reverse_dfs_stack(node: LeafNode): List[TupleVisitNode]
	do
		var return_list = new List[TupleVisitNode]
		var curr_node: RopeNode = node
		var parent: nullable ConcatNode = curr_node.parent
		while parent != null do
			if parent.left_child != null and parent.left_child == curr_node then
				return_list.unshift(new TupleVisitNode.full(parent,true,true))
			else
				return_list.unshift(new TupleVisitNode.full(parent,false,true))
			end
			curr_node = parent
			parent = parent.parent
		end
		return return_list
	end

	# Stores a flat version of self in cache
	redef fun flatten: FlatText
	do
		if str_representation == null then
			var str = calloc_string(self.length + 1)
			var pos = 0
			for i in self.chars do
				str[pos] = i
				pos += 1
			end
			str[pos] = '\0'
			str_representation = str.to_s_with_length(self.length).as(FlatString)
		end
		return str_representation.as(not null)
	end

	# Returns an upper (capitalized) version of self
	private fun to_upper_intern: RopeBuffer
	do
		var new_rope = new RopeBuffer
		var iter = new DFSRopeLeafIterator(self, 0)
		while iter.is_ok do
			new_rope.append(iter.item.value.to_upper)
			iter.next
		end
		return new_rope
	end

	# Returns a lower (minuscule) version of self
	private fun to_lower_intern: RopeBuffer
	do
		var new_rope = new RopeBuffer
		var iter = new DFSRopeLeafIterator(self, 0)
		while iter.is_ok do
			new_rope.append(iter.item.value.to_lower)
			iter.next
		end
		return new_rope
	end

	private fun reverse_intern: RopeBuffer
	do
		var new_buf = new RopeBuffer
		var reviter = new ReversedDFSRopeLeafIterator(self, length-1)
		while reviter.is_ok do
			new_buf.append(reviter.item.value.reverse)
			reviter.next
		end
		return new_buf
	end

end

# Immutable version of a Rope
class RopeString
	super String
	super Rope

	redef type SELFTYPE : RopeString

	redef var chars: SELFVIEW = new RopeStringCharView(self)

	# Returns a flat version of self
	redef fun to_s
	do
		return self
	end

	redef fun *(count) do
		var finalstr = new RopeString.from(self)
		for i in [1..count[ do
			finalstr += self
		end
		return finalstr
	end

	redef fun substring(from, count) do return substring_intern(from, count).freeze

	redef fun+(other) do
		var return_val = new RopeString
		return_val.parent_node.left_child = new LeafNode(self)
		return_val.parent_node.right_child = new LeafNode(other.to_s)
		return_val.parent_node.update_data
		return return_val
	end

	redef fun to_upper do return to_upper_intern.freeze

	redef fun to_lower do return to_lower_intern.freeze

	redef fun reverse do return reverse_intern.freeze
end

private class RopeStringCharView
	super StringCharView

	redef type SELFTYPE: RopeString

	redef fun [](pos) do
		var tuple = target.get_leaf_for_pos(pos)
		return tuple.curr_node.value.chars[tuple.corrected_pos]
	end

	redef fun iterator_from(pos) do return new RopeCharIterator(self.target, pos)

	redef fun reverse_iterator_from(pos) do return new ReversedRopeCharIterator(self.target, pos)

end

# Rope that can be modified
#
# /!\ Non Thread-safe /!\
#
class RopeBuffer
	super Rope
	super Buffer

	redef type SELFTYPE: RopeBuffer

	redef var chars: SELFVIEW = new RopeBufferCharView(self)

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
		else if balance_factor > 0 then
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
		var curr_node: nullable RopeNode = parent_node
		while curr_node isa ConcatNode and curr_node.right_child != null do
			curr_node = curr_node.right_child.as(not null)
		end
		if curr_node isa ConcatNode then
			curr_node.right_child = new LeafNode(str.to_s)
		else if curr_node isa LeafNode then
			var parent = curr_node.parent
			var concat = new ConcatNode
			parent.right_child = concat
			concat.left_child = curr_node
			concat.right_child = new LeafNode(str.to_s)
			curr_node = concat
			parent.update_data
		else
			# Should not happen
			abort
		end
		curr_node.update_data
		loop
			curr_node.update_data
			balance_node(curr_node)
			if curr_node.parent == null then break
			curr_node = curr_node.parent.as(not null)
		end
		super
	end

	# Prepends a string ´str´ at the beginning of the current rope
	fun prepend(str: Text)
	do
		var visited = new List[ConcatNode]
		var curr_node: nullable RopeNode = parent_node
		while curr_node isa ConcatNode and curr_node.left_child != null do
			curr_node = curr_node.left_child.as(not null)
		end
		if curr_node isa ConcatNode then
			curr_node.left_child = new LeafNode(str.to_s)
		else if curr_node isa LeafNode then
			var parent = curr_node.parent
			var concat = new ConcatNode
			parent.left_child = parent
			parent.left_child = new LeafNode(str.to_s)
			parent.right_child = curr_node
			curr_node = concat
			parent.update_data
		else
			# Should not happen
			abort
		end
		curr_node.update_data
		loop
			balance_node(curr_node)
			if curr_node.parent == null then break
			curr_node = curr_node.parent.as(not null)
		end
		is_dirty = false
	end

	# Copies the content of the current RopeBuffer object as a RopeString
	redef fun to_s
	do
		var buffer_rope = new RopeBuffer
		var new_rope = new RopeString
		var iter = new DFSRopeLeafIterator(self, 0)

		while iter.is_ok do
			buffer_rope.append(iter.item.value)
			iter.next
		end

		new_rope.parent_node = buffer_rope.parent_node

		if not is_dirty then new_rope.str_representation = self.str_representation

		return new_rope
	end

	# Unsafe method to convert self as an RopeString (does not copy the contents)
	#
	# To be used internally only
	private fun freeze: RopeString
	do
		var immutable_self = new RopeString
		immutable_self.parent_node = self.parent_node
		return immutable_self
	end

	# Appends the content of self multiple times in a new Rope object
	redef fun *(repeats) do

		var new_rope = new RopeBuffer

		var str = self.to_s

		for i in [1 .. repeats] do new_rope.append(str)

		return new_rope
	end

	redef fun to_upper do return to_upper_intern

	redef fun to_lower do return to_lower_intern

	redef fun reverse do return reverse_intern

	redef fun substring(from, count) do return substring_intern(from, count)

	# Concats two ropes and returns a new one
	redef fun +(other) do

		if other isa Buffer then
			other = other.to_s
		end

		var new_rope = new RopeBuffer

		var first_iter = new DFSRopeLeafIterator(self, 0)

		while first_iter.is_ok do
			new_rope.append(first_iter.item.value)
			first_iter.next
		end

		new_rope.append(other)

		return new_rope
	end
end

private class RopeBufferCharView
	super BufferCharView

	redef type SELFTYPE: RopeBuffer

	redef fun [](pos) do
		var tuple = target.get_leaf_for_pos(pos)
		return tuple.curr_node.value.chars[tuple.corrected_pos]
	end

	redef fun iterator_from(pos) do return new RopeCharIterator(self.target, pos)

	redef fun reverse_iterator_from(pos) do return new ReversedRopeCharIterator(self.target, pos)

	redef fun add(c) do
		target.append(c.to_s)
		super
	end

end

# Any kind of iterator parsing a Rope for LeafNodes
private abstract class RopeIterator
	super IndexedIterator[LeafNode]

	# Rope meant to be visited
	private var _target: Rope

	private fun target: Rope do return self._target

	private var pos: Int

	init(tgt: Rope, pos: Int)
	do
		self._target = tgt
		self.pos = pos
	end

end

# Iterator returning the content of a rope one char at a time
private class RopeCharIterator
	super IndexedIterator[Char]

	# The iterator used to visit the leaves of the rope
	private var rope_iter: DFSRopeLeafIterator

	private var str_iter: nullable IndexedIterator[Char] = null

	# The current position in the rope
	private var pos: Int

	init(tgt: Rope, from: Int)
	do
		rope_iter = new DFSRopeLeafIterator(tgt, from)
		if rope_iter.is_ok then str_iter = rope_iter.item.value.chars.iterator_from(rope_iter.start_sub_pos)
		pos = from
	end

	redef fun item do return str_iter.item

	redef fun is_ok
	do
		if str_iter == null then return false
		return true
	end

	redef fun next
	do
		assert is_ok
		str_iter.next
		pos += 1
		if not str_iter.is_ok then
			rope_iter.next
			if rope_iter.is_ok then
				str_iter = rope_iter.item.value.chars.iterator
			else
				str_iter = null
			end
		end
	end

	redef fun index do return pos

end

private class ReversedRopeCharIterator
	super IndexedIterator[Char]

	private var rope_iter: ReversedDFSRopeLeafIterator

	private var str_iter: nullable IndexedIterator[Char] = null

	private var pos: Int

	init(tgt: Rope, from: Int)
	do
		rope_iter = new ReversedDFSRopeLeafIterator(tgt, from)
		if rope_iter.is_ok then str_iter = rope_iter.item.value.chars.reverse_iterator_from(rope_iter.start_sub_pos)
		pos = from
	end

	redef fun item do return str_iter.item

	redef fun is_ok
	do
		if str_iter == null then return false
		return true
	end

	redef fun next
	do
		assert is_ok
		str_iter.next
		pos -= 1
		if not str_iter.is_ok then
			rope_iter.next
			if rope_iter.is_ok then
				str_iter = rope_iter.item.value.chars.reverse_iterator
			else
				str_iter = null
			end
		end
	end

	redef fun index do return pos

end

# Special kind of iterator
#
# Performs a Depth-First Search on RopeLeaf items
#
private class DFSRopeLeafIterator
	super RopeIterator

	# Stack of the visited nodes in the rope
	private var visit_stack = new List[TupleVisitNode]

	# The leaf node being visited by the iterator
	private var curr_leaf: nullable LeafNode

	# The corrected position in the substring for the chosen start position
	private var start_sub_pos: Int

	init(tgt: Rope, pos: Int)
	do
		super
		var tuple = target.get_leaf_for_pos(pos)
		tuple.visit_stack = target.get_dfs_stack(tuple.curr_node)
		curr_leaf = tuple.curr_node
		visit_stack = tuple.visit_stack
		start_sub_pos = tuple.corrected_pos
	end

	redef fun is_ok do return curr_leaf != null

	redef fun next
	do
		assert is_ok
		pos += curr_leaf.value.length
		next_body
	end

	private fun next_body
	do
		if visit_stack.is_empty then
			curr_leaf = null
			return
		end
		var last_tuple = visit_stack.last
		var curr_node = last_tuple.node
		if not last_tuple.left_visited then
			last_tuple.left_visited = true
			var l_child = curr_node.left_child
			if l_child == null then
				next_body
				return
			end
			if l_child isa LeafNode then
				curr_leaf = l_child
				return
			else if l_child isa ConcatNode then
				visit_stack.push(new TupleVisitNode.full(l_child, false, false))
				next_body
			end
		else if not last_tuple.right_visited then
			last_tuple.right_visited = true
			var r_child = curr_node.right_child
			if r_child == null then
				next_body
				return
			end
			if r_child isa LeafNode then
				curr_leaf = r_child
				return
			else if r_child isa ConcatNode then
				visit_stack.push(new TupleVisitNode.full(r_child, false, false))
				next_body
			end
		else
			visit_stack.pop
			next_body
		end
	end

	redef fun item
	do
		assert is_ok
		return curr_leaf.as(not null)
	end

end

private class ReversedDFSRopeLeafIterator
	super RopeIterator

	# Stack of the visited nodes in the rope
	private var visit_stack = new List[TupleVisitNode]

	# The leaf node being visited by the iterator
	private var curr_leaf: nullable LeafNode

	private var start_sub_pos: Int

	init(tgt: Rope, from: Int)
	do
		super
		var tuple = target.get_leaf_for_pos(pos)
		tuple.visit_stack = target.get_reverse_dfs_stack(tuple.curr_node)
		curr_leaf = tuple.curr_node
		visit_stack = tuple.visit_stack
		start_sub_pos = tuple.corrected_pos
	end

	redef fun is_ok do return curr_leaf != null

	redef fun next
	do
		assert is_ok
		pos -= curr_leaf.value.length
		next_body
	end

	fun next_body
	do
		if visit_stack.is_empty then
			curr_leaf = null
			return
		end
		var last_tuple = visit_stack.last
		var curr_node = last_tuple.node
		if not last_tuple.right_visited then
			last_tuple.right_visited = true
			var r_child = curr_node.right_child
			if r_child == null then
				next_body
				return
			end
			if r_child isa LeafNode then
				curr_leaf = r_child
			else if r_child isa ConcatNode then
				visit_stack.push(new TupleVisitNode.full(r_child, false, false))
				next_body
			else
				abort
			end
		else if not last_tuple.left_visited then
			last_tuple.left_visited = true
			var l_child = curr_node.left_child
			if l_child == null then
				next_body
				return
			end
			if l_child isa LeafNode then
				curr_leaf = l_child
			else if l_child isa ConcatNode then
				visit_stack.push(new TupleVisitNode.full(l_child, false, false))
				next_body
			else
				abort
			end
		else
			visit_stack.pop
			next_body
		end
	end

	redef fun item do
		assert is_ok
		return curr_leaf.as(not null)
	end

end

###########################################
#              Node classes               #
###########################################

# A node for a Rope
private abstract class RopeNode

	private var _length = 0

	private var parent: nullable ConcatNode = null

	private var height = 0

	# The balance factor of a node, if it is a Leaf, it equals its length
	# Else, it will be equal to the difference between the height on the left and on the right
	private fun balance_factor: Int do return height end

	fun length: Int do return _length

	private fun length=(len: Int)
	do
		_length = len
	end
end

# Node that represents a concatenation between two nodes (of any RopeNode type)
private class ConcatNode
	super RopeNode

	private var _left_child: nullable RopeNode
	private var _right_child: nullable RopeNode

	private fun left_child: nullable RopeNode
	do
		if _left_child != null then
			return _left_child
		else
			return null
		end
	end

	private fun right_child: nullable RopeNode
	do
		if _right_child != null then
			return _right_child
		else
			return null
		end
	end

	private fun left_child=(new_node: nullable RopeNode)
	do
		self._left_child = new_node
		new_node.parent = self
		update_data
	end

	private fun right_child=(new_node: nullable RopeNode)
	do
		self._right_child = new_node
		new_node.parent = self
		update_data
	end

	# Updates the internal data of the current node
	#
	# Concretely, updates the length and the height of the node
	private fun update_data
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
	redef private fun balance_factor
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
end
