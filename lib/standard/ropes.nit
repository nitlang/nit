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
	super Comparable
	super StringCapable

	# Cached version of self as a flat String
	private var str_representation: nullable String = null

	redef type OTHER: Rope

	# The first node of the hierarchy
	private var parent_node: RopeNode

	# Needed by the compiler to avoid producing an error with constructors in subclasses
	init do
		self.parent_node = new ConcatNode
	end

	# Initializes a new Rope with a text embedded in directly
	init with_string(str: String) do
		self.parent_node = new ConcatNode
		parent_node.as(ConcatNode).right_child = new LeafNode(str)
		parent_node.as(ConcatNode).update_data
	end

	# Returns a view on the rope
	fun chars: SequenceRead[Char]
	do
		return new CharRopeView(self)
	end

	# Gets the total length of the Rope
	fun length: Int
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

		var curr_node: nullable RopeNode = parent_node

		var visit_stack = new List[TupleVisitNode]

		var curr_visit_tuple: TupleVisitNode

		loop
			if curr_node isa ConcatNode then
				curr_visit_tuple = new TupleVisitNode(curr_node)
				if curr_node.left_child != null and position < curr_node.left_child.length then
					curr_visit_tuple.left_visited = true
					curr_node = curr_node.left_child
				else if curr_node.right_child != null then
					curr_visit_tuple.left_visited = true
					curr_visit_tuple.right_visited = true
					if curr_node.left_child != null then position -= curr_node.left_child.length
					curr_node = curr_node.right_child
				else
					print "Fatal Error"
					abort
				end
				visit_stack.push(curr_visit_tuple)
			else if curr_node isa LeafNode then
				return new TupleLeafNodePos(curr_node, position, visit_stack)
			end
		end
	end

	# Concats two ropes and returns a new one
	fun +(other: Rope): Rope do
		var new_rope = new BufferRope

		var first_iter = new DFSRopeLeafIterator(self)

		while first_iter.is_ok do
			new_rope.append(first_iter.item.value)
			first_iter.next
		end

		var second_iter = new DFSRopeLeafIterator(other)

		while second_iter.is_ok do
			new_rope.append(second_iter.item.value)
			second_iter.next
		end

		return new_rope
	end

	# Returns a copy of several ropes concatenated
	#
	# Is equivalent to a chain of + operations
	# Except this one is optimized for performance
	fun multi_concat(ropes: Rope...): Rope
	do
		var new_rope = new BufferRope

		var self_iter = self.iterator
		while self_iter.is_ok do
			new_rope.append(self_iter.item.value)
			self_iter.next
		end

		for i in ropes do
			var iter = i.iterator
			while iter.is_ok do
				new_rope.append(iter.item.value)
				iter.next
			end
		end

		return new_rope
	end

	# Appends the content of self multiple times in a new Rope object
	fun *(repeats: Int): Rope do

		var new_rope = new BufferRope

		var str = self.to_s

		for i in [1 .. repeats] do new_rope.append(str)

		return new_rope
	end

	# Returns an iterator on self
	#
	# Unsafe modifications on a MutableRope
	#
	private fun iterator: Iterator[LeafNode] do return new DFSRopeLeafIterator(self)

	# Creates a subrope.
	#
	# var rope = (new BufferRope).append("abcd")
	#
	#	assert rope.subrope(1, 2)         ==  "bc"
	#	assert rope.subrope(-1, )         ==  "a"
	#	assert rope.subrope(1, 0)         ==  ""
	#	assert rope.subrope(2, 5)         ==  "cd"
	#
	# A `index_from` index < 0 will be replaced by 0.
	# Unless a `count` value is > 0 at the same time.
	# In this case, `index_from += count` and `count -= index_from`.
	#
	fun subrope(index_from: Int, count: Int): Rope
	do
		assert count >= 0

		if index_from < 0 then
			count += index_from
			if count < 0 then count = 0
			index_from = 0
		end

		if count - index_from >= self.length then count = length - index_from

		var buffer = new BufferRope

		var iter = new DFSRopeLeafIterator.with_index(self, index_from)

		var curr_subrope_index = index_from - iter.pos

		while iter.is_ok do
			if count == 0 then break
			if curr_subrope_index > 0 then
				if count >= iter.item.value.length then
					buffer.append(iter.item.value.substring(curr_subrope_index, count))
					count -= iter.item.value.length - curr_subrope_index
					curr_subrope_index = 0
				else
					buffer.append(iter.item.value.substring(curr_subrope_index, count))
					break
				end
			else
				if count >= iter.item.value.length then
					buffer.append(iter.item.value)
					count -= iter.item.value.length
				else
					buffer.append(iter.item.value.substring(0, count))
					break
				end
			end

			iter.next
		end

		return buffer
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

	############################################################################
	#                       Comparable Refined Methods                         #
	############################################################################

	# Compares the current Rope to another object (either another rope or a String)
	redef fun == (other)
	do
		if other == null or not (other isa Rope or other isa FlatText) then return false
		var self_iter = new RopeCharIterator(self)
		if other isa Rope then
			if self.length != other.length then return false
			var other_iterator = new RopeCharIterator(other)
			while self_iter.is_ok do
				if self_iter.item != other_iterator.item then return false
				self_iter.next
				other_iterator.next
			end
		else if other isa FlatText then
			var pos = 0
			if self.length != other.length then return false
			while self_iter.is_ok do
				if self_iter.item != other[pos] then return false
				pos += 1
				self_iter.next
			end
		end
		return true
	end

	# Checks if self is lesser than other
	#
	# Comparison done in lexicographical order
	# i.e. 'aa' < 'b'
	#
	redef fun <(other)
	do
		var other_iter = other.chars.iterator
		for i in self.chars do
			if not other_iter.is_ok then return false
			if i < other_iter.item then return true
			if i > other_iter.item then return false
			other_iter.next
		end
		if other_iter.is_ok then return true
		return false
	end

end

# Rope that can be modified
#
# /!\ Non Thread-safe /!\
#
class BufferRope
	super Rope

	var is_dirty: Bool = false

	init
	do
		super
	end

	init with_string(str)
	do
		super
	end

	############################################################################
	#                         Tree Balancing Methods                           #
	############################################################################

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

	############################################################################
	#                      BufferRope exclusive Methods                        #
	############################################################################

	# Appends a new Collection[Char] at the end of the current rope
	fun append(str: String): BufferRope
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
		else
			print "Fatal Error, please report to the developers for more insight."
			abort
		end

		balance_from_node(last_node)

		is_dirty = true

		return self
	end

	# Variatic function to append several collections of Chars
	fun append_multi(strs: String...): BufferRope
	do
		for i in strs do
			append(i)
		end
		return self
	end

	# Adds a new Collection[Char] at the beginning of the rope
	fun prepend(str: String): BufferRope
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
		else
			print "Fatal Error"
			abort
		end

		balance_from_node(curr_node)

		is_dirty = true

		return self
	end

	# Variatic function to prepend several collections of Chars
	fun prepend_multi(strs: String...): BufferRope
	do
		for i in strs do
			prepend(i)
		end
		return self
	end

	# Adds the content of `str` after self, does not create a new rope object
	fun concat(str: Rope): Rope
	do
		var other_iter = new DFSRopeLeafIterator(str)

		var modif_list = new List[String]

		while other_iter.is_ok do
			modif_list.push(other_iter.item.value)
			other_iter.next
		end

		while modif_list.length > 0 do
			self.append(modif_list.shift)
		end

		if not is_dirty then is_dirty = true

		return self
	end

	# Returns the content of the current BufferRope object as an ImmutableRope
	fun freeze: ImmutableRope
	do
		var buffer_rope = new BufferRope
		var new_rope = new ImmutableRope

		var iter = new DFSRopeLeafIterator(self)

		while iter.is_ok do
			buffer_rope.append(iter.item.value)
			iter.next
		end

		new_rope.parent_node = buffer_rope.parent_node

		if not is_dirty then new_rope.str_representation = self.str_representation

		return new_rope
	end

	# Unsafe method to convert self as an ImmutableRope
	#
	# To be used internally only
	private fun to_immutable: ImmutableRope
	do
		var immutable_self = new ImmutableRope
		immutable_self.parent_node = self.parent_node
		return immutable_self
	end

	############################################################################
	#                          Rope refined Methods                            #
	############################################################################

	redef fun subrope(index_from: Int, count: Int): BufferRope
	do
		return super.as(BufferRope)
	end

	redef fun *(repeats: Int): BufferRope
	do
		return super.as(BufferRope)
	end

	redef fun +(other: Rope): BufferRope
	do
		return super.as(BufferRope)
	end

	redef fun multi_concat(ropes: Rope...): BufferRope
	do
		return super.as(BufferRope)
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
class ImmutableRope
	super Rope

	init
	do
		super
	end

	init with_string(str)
	do
		super
	end

	############################################################################
	#                          Rope refined Methods                            #
	############################################################################

	redef fun subrope(index_from: Int, count: Int): ImmutableRope
	do
		return (super.as(BufferRope)).to_immutable
	end

	redef fun *(repeats: Int): ImmutableRope
	do
		return (super.as(BufferRope)).to_immutable
	end

	redef fun +(other: Rope): ImmutableRope
	do
		return (super.as(BufferRope)).to_immutable
	end

	redef fun multi_concat(ropes: Rope...): ImmutableRope
	do
		return (super.as(BufferRope)).to_immutable
	end

end

############################################
#            Rope view classes             #
############################################

class CharRopeView
	super SequenceRead[Char]

	# Targeted Rope for the view
	private var target: Rope

	init(tgt: Rope)
	do
		self.target = tgt
	end

	redef fun [](position)
	do
		var tuple = target.get_node_for_pos(position)
		return tuple.curr_node.value[tuple.corrected_pos]
	end

	redef fun first do return self[0]

	redef fun index_of(char)
	do
		var intern_iter = new RopeCharIterator(target)
		while intern_iter.is_ok do
			if intern_iter.item == char then return intern_iter.index
			intern_iter.next
		end
		return -1
	end

	redef fun iterator do
		return new RopeCharIterator(target)
	end

	redef fun last do return self[self.length-1]

	redef fun length do return target.length

	redef fun count(item)
	do
		var count = 0
		var iter = self.iterator

		for i in self do
			if i == item then count += 1
		end

		return count
	end

	redef fun has_only(item)
	do
		for i in self do
			if i != item then return false
		end
		return true
	end

	redef fun is_empty do return length == 0

	redef fun to_a do
		return to_s.to_a
	end

	redef fun to_s do
		return target.to_s
	end

	redef fun ==(other)
	do
		if not other isa SequenceRead[Char] then return false

		if self.length != other then return false

		var iter = other.iterator

		for i in self do
			if i != iter.item then return false
			iter.next
		end

		return true
	end

end

###########################################
#            Iterator classes             #
###########################################

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

# Any kind of iterator parsing a Rope for LeafNodes
private abstract class RopeIterator
	super IndexedIterator[LeafNode]

	# Rope meant to be visited
	private var _target: Rope

	private fun target: Rope do return self._target

	# Position in target
	private var pos = 0

	init(tgt: Rope)
	do
		self._target = tgt
	end

	init with_index(tgt: Rope, index: Int)
	do
		self._target = tgt
	end

end

# Iterator returning the content of a rope one char at a time
class RopeCharIterator
	super IndexedIterator[Char]

	# The iterator used to visit the rope
	private var sub_str_iter: DFSRopeLeafIterator

	# The current position in the rope
	private var abs_pos = 0

	# The position in the current substring
	private var sub_pos: Int = 0

	# The substring contained in the current node visited by `sub_str_iter`
	private var curr_substring: nullable String

	init(tgt: Rope)
	do
		sub_str_iter = new DFSRopeLeafIterator(tgt)
		if sub_str_iter.is_ok then curr_substring = sub_str_iter.item.value
	end

	redef fun item do return curr_substring[sub_pos]

	redef fun is_ok
	do
		if sub_str_iter.is_ok then return true
		if not sub_str_iter.is_ok and curr_substring != null and sub_pos < curr_substring.length then return true
		return false
	end

	redef fun next
	do
		assert is_ok
		if sub_pos < curr_substring.length - 1 then
			sub_pos += 1
		else
			sub_str_iter.next
			if sub_str_iter.is_ok then
				curr_substring = sub_str_iter.item.value
				sub_pos = 0
			else
				sub_pos = curr_substring.length
			end
		end
		abs_pos += 1
	end

	redef fun index do return abs_pos

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

	init(tgt: Rope)
	do
		super

		var first_node = target.parent_node

		if first_node isa ConcatNode then
			visit_stack.push(new TupleVisitNode(first_node))
		else if first_node isa LeafNode then
			curr_leaf = first_node
			return
		end

		next_body
	end

	# Creates a new iterator on `tgt` starting at `index`
	init with_index(tgt: Rope, index: Int)
	do
		super

		var returned_tuple = target.get_node_for_pos(index)
		curr_leaf = returned_tuple.curr_node
		visit_stack = returned_tuple.visit_stack
		pos = index - returned_tuple.corrected_pos
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
		var next_node: nullable RopeNode
		while not visit_stack.is_empty do
			var curr_concat_tuple = visit_stack.last
			if not curr_concat_tuple.left_visited then

				curr_concat_tuple.left_visited = true

				next_node = curr_concat_tuple.node.left_child

				if next_node == null then continue

				if next_node isa ConcatNode then
					visit_stack.push(new TupleVisitNode(next_node))
				else if next_node isa LeafNode then
					curr_leaf = next_node
					return
				end

			else if not curr_concat_tuple.right_visited then

				curr_concat_tuple.right_visited = true

				next_node = curr_concat_tuple.node.right_child

				if next_node == null then continue

				if next_node isa ConcatNode then
					visit_stack.push(new TupleVisitNode(next_node))
				else if next_node isa LeafNode then
					curr_leaf = next_node
					return
				end

			else
				visit_stack.pop
			end
		end
		self.curr_leaf = null
	end

	redef fun item
	do
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
	private var _value: String

	init(val: String)
	do
		self._value = val.to_s
		self.length = val.length
	end

	private fun value: String do return self._value

	private fun value= (val: String)
	do
		_value = val
	end
end

#####################################################
#            Foreign classes refinement             #
#####################################################

redef class String
	redef fun ==(other)
	do
		if other isa Rope then
			return other == self
		else
			return super
		end
	end
end

redef class Buffer
	redef fun ==(other)
	do
		if other isa Rope then
			return other == self
		else
			return super
		end
	end
end
