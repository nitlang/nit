# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# This module handle double linked lists
module list

import abstract_collection

# Double linked lists.
class List[E]
	super Sequence[E]

# Access

	redef fun [](index) do return get_node(index).as(not null).item

	redef fun []=(index, item) do get_node(index).as(not null).item = item

	# O(1)
	redef fun first do return _head.as(not null).item

	# O(1)
	redef fun first=(e) do _head.as(not null).item = e

	# O(1)
	redef fun last do return _tail.as(not null).item

	# O(1)
	redef fun last=(e) do _tail.as(not null).item = e

# Queries

	# O(1)
	redef fun is_empty do return _head == null

	# O(1)
	redef var length = 0

	# O(n)
	redef fun has(e) do return search_node_after(e, _head) != null

	redef fun has_only(e)
	do
		var node = _head
		while node != null do
			if node.item != e then return false
			node = node.next
		end
		return true
	end

	redef fun count(e)
	do
		var nb = 0
		var node = _head
		while node != null do
			if node.item != e then nb += 1
			node = node.next
		end
		return nb
	end

	# Return a list of elements between 'from' and 'to'.
	#
	# EXPECT: `from >= 0 and from < length and to >= 0 and to < length and from <= to`
	fun slice(from: Int, to: Int): List[E]
	is
		expect(from >= 0 and from < length and to >= 0 and to < length and from <= to)
	do
		var list = new List[E]
		while from <= to do
			list.add(self[from])
			from += 1
		end
		return list
	end

# Add elements

	# O(1)
	redef fun push(e)
	do
		var node = new ListNode[E](e)
		var tail = _tail
		if tail == null then
			_head = node
		else
			tail.next = node
			node.prev = tail
		end
		_tail = node
		length += 1
	end

	# O(1)
	redef fun unshift(e)
	do
		var node = new ListNode[E](e)
		var head = _head
		if head == null then
			_tail = node
		else
			node.next = head
			head.prev = node
		end
		_head = node
		length += 1
	end

	# O(n)
	redef fun insert(e, i)
	do
		var node = get_node(i)
		if node == null then
			push(e)
			return
		end
		insert_before(e, node)
	end

	# Append `l` to `self` but clear `l`.
	#
	# O(1)
	fun link(l: List[E])
	do
		var tail = _tail
		if tail == null then
			_head = l._head
		else if l._head != null then
			tail.next = l._head
			tail.next.as(not null).prev = tail
		end
		_tail = l._tail
		length += l.length
		l.clear
	end

# Remove elements

	# O(1)
	redef fun pop
	do
		var node = _tail.as(not null)
		_tail = node.prev
		node.prev = null
		if _tail == null then
			_head = null
		else
			_tail.as(not null).next = null
		end
		length -= 1
		return node.item
	end

	# O(1)
	redef fun shift
	do
		var node = _head.as(not null)
		_head = node.next
		node.next = null
		if _head == null then
			_tail = null
		else
			_head.as(not null).prev = null
		end
		length -= 1
		return node.item
	end

	redef fun remove(e)
	do
		var node = search_node_after(e, _head)
		if node != null then remove_node(node)
	end

	redef fun remove_at(i)
	do
		var node = get_node(i)
		if node != null then remove_node(node)
	end

	redef fun clear
	do
		_head = null
		_tail = null
		length = 0
	end


	redef fun iterator: ListIterator[E] do return new ListIterator[E](self)
	redef fun reverse_iterator: ListIterator[E] do return new ListReverseIterator[E](self)

	# Build an empty list.
	init do end

	# Build a list filled with the items of `coll`.
	init from(coll: Collection[E]) do append(coll)

	# The first node of the list
	private var head: nullable ListNode[E] = null

	# The last node of the list
	private var tail: nullable ListNode[E] = null

	# Get the `i`th node. get `null` otherwise.
	private fun get_node(i: Int): nullable ListNode[E]
	do
		var n = _head
		if i < 0 then
			return null
		end
		while n != null and i > 0 do
			n = n.next
			i -= 1
		end
		return n
	end

	# get the first node that contains `e` after 'after', null otherwise
	private fun search_node_after(e: E, after: nullable ListNode[E]): nullable ListNode[E]
	do
		var n = after
		while n != null and n.item != e do n = n.next
		return n
	end

	# Remove the node (ie. atach prev and next)
	private fun remove_node(node: ListNode[E])
	do
		length -= 1
		if node.prev == null then
			_head = node.next
			if node.next == null then
				_tail = null
			else
				node.next.as(not null).prev = null
			end
		else if node.next == null then
			_tail = node.prev
			node.prev.as(not null).next = null
		else
			node.prev.as(not null).next = node.next
			node.next.as(not null).prev = node.prev
		end
	end

	private fun insert_before(element: E, node: ListNode[E])
	do
		length += 1
		var nnode = new ListNode[E](element)
		var prev = node.prev
		if prev == null then
			_head = nnode
		else
			prev.next = nnode
		end
		nnode.prev = prev
		nnode.next = node
		node.prev = nnode
	end
end

# This is the iterator class of List
class ListIterator[E]
	super IndexedIterator[E]
	redef fun item do return _node.as(not null).item

	# Set item `e` at self `index`.
	fun item=(e: E) do _node.as(not null).item = e

	redef fun is_ok do return not _node == null

	redef fun next
	do
		_node = _node.as(not null).next
		_index += 1
	end

	# Build a new iterator for `list`.
	init
	do
		_node = _list._head
	end

	# The current list
	private var list: List[E]

	# The current node of the list
	private var node: nullable ListNode[E] = null

	# The index of the current node
	redef var index = 0

	# Remove the current item
	fun delete
	do
		_list.remove_node(_node.as(not null))
	end

	# Insert before the current item
	fun insert_before(element: E)
	do
		_list.insert_before(element, _node.as(not null))
	end
end

private class ListReverseIterator[E]
	super ListIterator[E]

	redef fun next
	do
		_node = _node.as(not null).prev
		_index -= 1
	end

	init
	do
		var list = _list
		_node = list._tail
		_index = list.length
	end
end

# Linked nodes that constitute a linked list.
private class ListNode[E]
	super Ref[E]

	# The next node.
	var next: nullable ListNode[E] = null

	# The previous node.
	var prev: nullable ListNode[E] = null
end
