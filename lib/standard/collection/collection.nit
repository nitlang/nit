# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2009 Jean Privat <jean@pryen.org>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# This module define several collection classes.
module collection

import abstract_collection
import range
import list
intrude import array # FIXME because of string.nit
import sorter
import hash_collection
import union_find

redef class Sequence[E]
	fun subarray(start, len: Int): Array[E]
	do
		var a = new Array[E].with_capacity(len)
		for i in [start .. start+len[ do a.add(self[i])
		return a
	end
end

# A queue is a FIFO data structure
#
# It's particular kind of collection in which the entities in the collection are kept in order.
# and the principal operations on the collection are:
#  * the addition of entities to the rear terminal position, known as `enqueue`
#  * the removal of entities from the front terminal position, known as `dequeue`
# This makes the queue a First-In-First-Out (FIFO) data structure.
# In a FIFO data structure, the first element added to the queue will be the first one to be removed.
# This is equivalent to the requirement that once a new element is added,
# all elements that were added before have to be removed before the new element can be removed.
interface Queue[E]
	super Collection[E]

	# Add an item in the queue
	fun enqueue(item: E) is abstract

	# Dequeue the next item
	fun dequeue: E is abstract

	# Show the next item on the queue but do not remove it
	fun top: E is abstract
end

# Circular queue based on an array.
# A data structure that uses a single, fixed-size queue as if it were connected end-to-end.
class CircularQueue[E]
	super Queue[E]

	private var items: Array[nullable E]
	private var head = 0
	private var tail = 0
	private var icount = 0
	private var size: Int

	init(size: Int) do
		self.size = size
		items = new Array[nullable E].filled_with(null, size)
	end

	#     var queue = new CircularQueue[Int](5)
	#     queue.enqueue 10
	#     queue.enqueue 20
	#     queue.enqueue 30
	#     assert queue.length == 3
	redef fun enqueue(item) do
		assert is_full: not is_full
		items[tail] = item
		if tail == size - 1 then
			tail = 0
		else
			tail += 1
		end
		icount += 1
	end

	#     var queue = new CircularQueue[Int](5)
	#     queue.enqueue 10
	#     queue.enqueue 20
	#     assert queue.dequeue == 10
	#     assert queue.dequeue == 20
	#     assert queue.is_empty
	redef fun dequeue do
		assert is_empty: not is_empty
		var e = items[head]
		items[head] = null
		if head == size - 1 then
			head = 0
		else
			head += 1
		end
		icount -= 1
		return e.as(not null)
	end

	#     var queue = new CircularQueue[Int](5)
	#     queue.enqueue 1
	#     queue.enqueue 2
	#     assert queue.top == 1
	#     queue.dequeue
	#     assert queue.top == 2
	redef fun top do
		assert is_empty: not is_empty
		return items[head]
	end

	#     var queue = new CircularQueue[Int](5)
	#     queue.enqueue 10
	#     assert queue.length == 1
	#     queue.enqueue 20
	#     assert queue.length == 2
	#     queue.dequeue
	#     assert queue.length == 1
	#     queue.dequeue
	#     assert queue.length == 0
	redef fun length do return icount

	#     var queue = new CircularQueue[Int](5)
	#     assert queue.is_empty
	#     queue.enqueue 1
	#     assert not queue.is_empty
	#     queue.dequeue
	#     assert queue.is_empty
	redef fun is_empty do return icount == 0

	# Is the queue full?
	#
	#     var queue = new CircularQueue[Int](3)
	#     assert not queue.is_full
	#     queue.enqueue 10
	#     queue.enqueue 20
	#     queue.enqueue 30
	#     assert queue.is_full
	#     queue.dequeue
	#     assert not queue.is_full
	fun is_full: Bool do return icount == size

	#     var queue = new CircularQueue[Int](3)
	#     queue.enqueue 10
	#     queue.enqueue 20
	#     queue.enqueue 30
	#     var res = new Array[Int]
	#     for e in queue do res.add(e)
	#     assert res == [10, 20, 30]
	redef fun iterator do return new CircularQueueIterator[E](self)
end

private class CircularQueueIterator[E]
	super Iterator[E]

	var queue: CircularQueue[E]
	var current: Int
	var iterations: Int

	init(queue: CircularQueue[E]) do
		self.queue = queue
		self.current = queue.head
		self.iterations = 0
	end

	redef fun is_ok do return iterations < queue.length

	redef fun next do
		if current == queue.size - 1 then
			current = 0
		else
			current += 1
		end
		iterations += 1
	end

	redef fun item do return queue.items[current]
end

# Stack implemented with an array
# A stack is a particular kind of collection
# in which the principal operations are:
#  * the addition of an entity to the collection, known as `push`
#  * the removal of an entity, known as `pop`
# This makes the queue a Last-In-First-Out (LIFO) data structure.
# In a LIFO data structure, the last element added to the structure must be the first one
# to be removed.
# This is equivalent to the requirement that, considered as a linear collection,
# the push and pop operations occur only at one end of the structure,
# referred to as the top of the stack.
#
# Example:
#
#     var stack = new Stack[Int]
#     stack.push 1
#     stack.push 2
#     assert stack.pop == 2
#     assert stack.pop == 1
class Stack[E]
	super Collection[E]

	private var items = new List[E]
	private var itop = 0

	# Is the stack empty?
	#
	#     var stack = new Stack[Int]
	#     assert stack.is_empty
	#     stack.push 1
	#     assert not stack.is_empty
	#     stack.pop
	#     assert stack.is_empty
	redef fun is_empty do return itop == 0

	# Add an item on top of the stack
	#
	#     var stack = new Stack[Int]
	#     stack.push 1
	#     stack.push 2
	#     assert stack.length == 2
	fun push(item: E) do
		itop += 1
		items.add item
	end

	# Pop the item on the top of the stack
	#
	#     var stack = new Stack[Int]
	#     stack.push 1
	#     stack.push 2
	#     assert stack.pop == 2
	#     assert stack.pop == 1
	#     assert stack.is_empty
	fun pop: E do
		assert empty: not is_empty
		itop -= 1
		return items[itop]
	end

	# Show the item on the top of the stack but do not remove it
	#
	#     var stack = new Stack[Int]
	#     stack.push 1
	#     stack.push 2
	#     assert stack.top == 2
	#     stack.pop
	#     assert stack.top == 1
	fun top: E do
		assert empty: not is_empty
		return items[itop - 1]
	end

	# Number of items contained in the stack
	#
	#     var stack = new Stack[Int]
	#     assert stack.length == 0
	#     stack.push 1
	#     assert stack.length == 1
	#     stack.push 2
	#     assert stack.length == 2
	#     assert stack.pop == 2
	#     assert stack.length == 1
	#     assert stack.pop == 1
	#     assert stack.length == 0
	redef fun length do return itop

	# Get an iterator over the stack
	#
	#     var stack = new Stack[Int]
	#     stack.push 1
	#     stack.push 2
	#     var sum = 0
	#     for item in stack do sum += item
	#     assert sum == 3
	redef fun iterator do return items.iterator
end
