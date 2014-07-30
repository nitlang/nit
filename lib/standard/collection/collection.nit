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

import range
import list
import array
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

# A heap is a data structure that satisfies the heap property:
# If A is a parent node of B then the key of node A is ordered with respect
# to the key of node B with the same ordering applying across the heap.
# Either the keys of parent nodes are always greater than or equal to those of the children
# and the highest key is in the root node (this kind of heap is called max heap)
# or the keys of parent nodes are less than or equal to those of the children
# and the lowest key is in the root node (min heap).
#
# Heaps are crucial in several efficient graph algorithms such as Dijkstra's algorithm,
# and in the sorting algorithm heapsort.
interface Heap[E]
	super Collection[E]

	# Get the minimum element of the heap
	fun min: E is abstract

	# Remove and return the minimum
	fun pop: E is abstract

	# Add an element in the heap
	fun add(e: E) is abstract

	# Update the heap structure
	fun build_heap is abstract
end

# Heap implemented over an array
class ArrayHeap[E]
	super Heap[E]

	private var items: Array[E]
	private var size: Int = -1
	private var comparator: Comparator[E]

	init(comparator: Comparator[E]) do
		self.comparator = comparator
		items = new Array[E]
	end

	# Init the heap using an existing array
	init from(comparator: Comparator[E], array: Array[E]) do
		self.comparator = comparator
		size = array.length - 1
		items = array
		build_heap
	end

	redef fun build_heap do
		var i = size / 2
		while i >= 0 do
			heapify(i)
			i -= 1
		end
	end

	private fun heapify(from: Int) do
		var l = from * 2 + 1
		var r = l + 1
		var largest = from
		if l <= size and comparator.compare(items[l], items[largest]) > 0 then
			largest = l
		else
			largest = from
		end
		if r <= size and comparator.compare(items[r], items[largest]) > 0 then
			largest = r
		end
		if largest != from then
			items.swap_at(from, largest)
			heapify(largest)
		end
	end

	private fun swap_at(a, b: Int) do
		var tmp = items[a]
		items[a] = items[b]
		items[b] = tmp
	end

	redef fun length do return size + 1
	redef fun is_empty do return length == 0
	redef fun iterator do return items.iterator

	redef fun min do
		assert not_empty: not is_empty
		return items.first
	end

	redef fun pop do
		assert not_empty: not is_empty
		var e = min
		swap_at(0, size)
		size -= 1
		build_heap
		return e
	end

	redef fun add(e) do
		size += 1
		items[size] = e
		build_heap
	end

	redef fun to_a do
		var res = new Array[E]
		for i in [0..size] do res.add items[i]
		return res
	end
end

# Priority Queue implemented over an ArrayHeap
# A priority queue is an abstract data type which is like a regular queue,
# but where additionally each element has a "priority" associated with it.
# In a priority queue, an element with high priority is served before an element with low priority.
# If two elements have the same priority, they are served according to their order in the queue.
#
# Example:
#
#     var comparator = new DefaultComparator[Int]
#     var queue = new PriorityQueue[Int](comparator)
#     queue.enqueue 11
#     queue.enqueue 9
#     queue.enqueue 30
#     assert not queue.is_empty
#     assert queue.dequeue == 30
#     assert queue.dequeue == 11
#     assert queue.dequeue == 9
#
# Init priority queue from array:
#
#     var queue2 = new PriorityQueue[Int].from(comparator, [2, 4, 1, 5, 3, 12, 0])
#     assert queue2.length == 7
#     assert queue2.top == 12
class PriorityQueue[E]
	super Queue[E]

	var heap: Heap[E]

	init(comparator: Comparator[E]) do
		heap = new ArrayHeap[E](comparator)
	end

	init from(comparator: Comparator[E], items: Collection[E]) do
		heap = new ArrayHeap[E].from(comparator, items.to_a)
	end

	#     var comparator = new DefaultComparator[Int]
	#     var queue = new PriorityQueue[Int].from(comparator, [2, 4, 1, 5, 3, 12, 0])
	#     assert queue.dequeue == 12
	#     assert queue.dequeue == 5
	#     assert queue.dequeue == 4
	#     assert queue.length == 4
	redef fun dequeue do return heap.pop

	#     var comparator = new DefaultComparator[Int]
	#     var queue = new PriorityQueue[Int](comparator)
	#     queue.enqueue 18
	#     queue.enqueue 12
	#     queue.enqueue 32
	#     assert queue.dequeue == 32
	#     assert queue.dequeue == 18
	#     assert queue.dequeue == 12
	redef fun enqueue(e) do heap.add e

	#     var comparator = new DefaultComparator[Int]
	#     var queue = new PriorityQueue[Int].from(comparator, [2, 4, 1, 5, 3, 12, 0])
	#     assert queue.top == 12
	#     queue.dequeue
	#     assert queue.top == 5
	redef fun top do return heap.min

	redef fun length do return heap.length
	redef fun iterator do return heap.iterator
end

