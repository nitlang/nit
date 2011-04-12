# This file is part of NIT ( http://www.nitlanguage.org ).
# 
#  Copyright 2004-2008 Jean Privat <jean@pryen.org>
# 
#  This file is free software, which comes along with NIT.  This software is
#  distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
#  without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A 
#  PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
#  is kept unaltered, and a notification of the changes is added.
#  You  are  allowed  to  redistribute it and sell it, alone or is a part of
#  another product.

#  This module handle double linked lists
package list

import abstract_collection

# Double linked lists
class List[E]
    super Sequence[E]

	protected var head: nullable ListNode[E] protected writable = null
	protected var tail: nullable ListNode[E] protected writable = null

	redef var length: Int

	redef fun [](index) do return get_node(index).item

	redef fun []=(index, item)
	do 
		if index == length then
			add(item)
		else
			get_node(index).item = item
		end
	end

	# 0(1)
	redef fun first do return head.item

	# 0(1)
	redef fun first=(item) do head.item = item

	# 0(1)
	redef fun last do return tail.item

	# 0(1)
	redef fun last=(item) do tail.item = item

	# 0(1)
	redef fun is_empty do return head == null

	# Without Iterator
	redef fun has(item) do return search_node(item) != null
    
	# Without Iterator
	redef fun count(item)
	do
		var nb = 0
		var n = head
		
		while n != null do
			if n.item == item then
				nb += 1
			end
			n = n.next
		end
		return nb
	end

	# 0(1)
	redef fun prepend(item)
	do
		var node = new ListNode[E](item)
		if tail == null then
			tail = node
		end
		if head != null then
		        node.next = head
			head.prev = node
		end
		head = node
		length += 1
	end

	# O(1)
	redef fun append(e)
	do
		var node = new ListNode[E](e)
		if head == null then
			head = node
		end
		if tail != null then
			tail.next = node
			node.prev = tail
		end
		tail = node
		length += 1
	end

	# O(1)
	redef fun pick_first
	do
		var node = head
		head = node.next
		node.next = null
		if head == null then
			tail = null
		else
			head.prev = null
		end
		length -= 1
		return node.item
	end

	# O(1)
	redef fun pick_last
	do
		if tail == null then
			abort
		end		
		var node = tail
		if node.prev != null then
			tail = node.prev
			tail.next = null
		else
			head = null
			tail = null
		end
		length -= 1
		return node.item
	end

	# 0(1)
	redef fun add(item) do append(item)

	# 0(1)
	redef fun clear
	do
		head = null
		tail = null
		length = 0
	end

	# 0(1)
	# Alias of pick_first
	redef fun pick do return pick_first

	# Without Iterator
	redef fun remove(item)
	do
		var node = search_node(item)
		if node != null then remove_node(node)
	end

	# 0(1)
	# Alias of first
	redef fun get do return head.item

	# Get the 'i'th node, return 'null' otherwise
	protected fun get_node(i: Int): nullable ListNode[E]
	do
		var n = head
		if i < 0 then 
			return null
		end

		while n != null and i > 0 do
			n = n.next
			i -= 1
		end
		return n
	end

	# Get the first node that contains 'item', null otherwise
	protected fun search_node(item: E): nullable ListNode[E]
	do
		var node = head
		while node != null and node.item != item do
			node = node.next
		end
		return node
	end

	# Remove the node (ie. attach prev and next)
	protected fun remove_node(node: nullable ListNode[E])
	do
                if node == null then return
	        if node.prev == null then
		        head = node.next
		        if node.next == null then
		                tail = null
		        else
		                node.next.prev = null
		        end
	        else if node.next == null then
		        tail = node.prev
		        node.prev.next = null
	        else
		        node.prev.next = node.next
		        node.next.prev = node.prev
	        end
		length -= 1
	end

	redef fun insert_at(i, item)
	do
		var node = new ListNode[E](item)

		var pos = get_node(i)

		pos.prev.next = node
		node.prev = pos.prev
		node.next = pos
		pos.prev = node    
		length += 1    
	end

	redef fun remove_at(i)
	do
		var node = get_node(i)
		if node != null then
			remove_node(node)
		end
	end

	# Build an empty list.
	init do
		length = 0
	end

	# Build a list filled with the items of `coll'.
	init from(coll: Collection[E])
	do
		length = 0
		append_all(coll)
	end

	protected fun insert_before(element: E, node: nullable ListNode[E])
	do
		assert not_empty: not is_empty
		var nnode = new ListNode[E](element)
		var prev = node.prev
		if prev == null then
			head = nnode
		else
			prev.next = nnode
		end
		nnode.prev = prev
		nnode.next = node
		node.prev = nnode
		length += 1
	end

	protected fun insert_after(element: E, node: nullable ListNode[E])
	do
		assert not_empty: not is_empty
		var nnode = new ListNode[E](element)
		var next = node.next
		if next == null then
			tail = nnode
		else
			next.prev = nnode
		end
		nnode.next = next
		nnode.prev = node
		node.next = nnode
		length += 1
	end

	redef fun iterator: ListIterator[E] do return new ListIterator[E](self)

        redef fun iterator_from(from) do return new ListIterator[E].from(self, from)

	redef fun iterator_within(from, to) do return new ListIterator[E].within(self, from, to)
end

# The is the iterator class for lists
class ListIterator[E]
	super SequenceIterator[E]

	private var list: List[E]
	private var node: nullable ListNode[E]
        redef var index: Int
	private var start: Int
	private var stop: Int = -1

	init(list: List[E])
	do
		self.list = list                
		self.index = 0
		self.start = 0
		self.node = list.head
	end

	init from(list: List[E], from: Int)
	do
		self.list = list                
		self.index = from
		self.start = from
		self.node = list.get_node(from)
	end

	init within(list: List[E], from: Int, to: Int)
	do
		self.list = list                
		self.index = from
		self.start = from
		self.node = list.get_node(from)
		self.stop = to
	end

	redef fun current do return node.item

	redef fun has_next
	do
		if stop > -1 then
			return index < stop and node != null
		else
			return node != null and index < list.length
		end
	end

	redef fun next do
                node = node.next
                index += 1
        end

        redef fun rewind
        do
                self.index = self.start
		self.node = list.get_node(self.start)
        end

        redef fun delete
	do 
		list.remove_node(node)
		index -= 1
	end

        redef fun current=(item) do node.item = item

	redef fun delete_after() do list.remove_node(node.next)

	redef fun delete_before() 
	do 
		list.remove_node(node.prev)
		index -= 1
	end

	redef fun insert_after(item: E) do list.insert_after(item, node)

	redef fun insert_before(item: E)
	do 
		list.insert_before(item, node)
		index += 1
	end

end

# LinkedListNode is an element of a linked list
protected class ListNode[E]
	var item: E writable
	var next: nullable ListNode[E] writable
	var prev: nullable ListNode[E] writable

	init(i: E)
	do
		item = i
	end
end

# Queue implementation based on a double linked List
class QueueList[E]
	super Queue[E]

	protected var list: List[E]

	init do list = new List[E]

	redef fun is_empty do return list.is_empty

	redef fun peek do return list.first

	# Dequeue the last element of the queue
	redef fun dequeue: E do return list.pick_first

	# Enqueue an element in the queue
	redef fun enqueue(item: E) do list.append(item)

	redef fun length do return list.length
end

# Stack implementation based on a double linked List
class StackList[E]
	super Stack[E]

	protected var list: List[E]

	init do list = new List[E]

	redef fun is_empty do return list.is_empty

	redef fun peek do return list.last

	redef fun pop: E do return list.pick_last

	redef fun push(item: E) do list.append(item)

	redef fun length do return list.length
end
