# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Queuing data structures and wrappers
# Provides a queue abstraction for LIFO, FIFO (stack) and heaps.
#
# Topics:
# * `Queue`
# * `Sequence::as_lifo`
# * `Sequence::as_fifo`
# * `SimpleCollection::as_random`
# * `MinHeap`
module queue

import collection::array
import collection::sorter
import math

# Queues are collection that controls how elements are retrieved.
#
# This interface is used for data structures and algorithms that need
# some queuing but that let their users control how the queuing is done.
#
# Most concrete queues have an efficient implementation of the basic methods
# `is_empty`, `length`, `add`, `peek`, and `take`.
# However, the `remove` method is possibly inefficient.
# To workaround an inefficient implementation, one can instead mark the removed
# elements (with a flag or in a set), and ignore then when `take` returns one.
#
# Unless stated otherwise, the `iterator` method is unrelated with the queue
# logic and may visit the elements in a order dependent on implementation.
interface Queue[E]
	super SimpleCollection[E]

	# Take the next element (according to the specific queue)
	# ~~~
	# var a = (new Array[Int]).as_lifo
	# a.add 1
	# a.add 2
	# assert a.take == 2
	# assert a.take == 1
	#
	# var h = new MinHeap[Int].default
	# h.add 2
	# h.add 1
	# h.add 10
	# assert h.take == 1
	# assert h.take == 2
	# assert h.take == 10
	# ~~~
	# ensure `result == peek`
	fun take: E is abstract

	# Look at the next element but does not remove it
	#
	# ~~~
	# var a = (new Array[Int]).as_lifo
	# a.add 1
	# assert a.peek == 1
	# a.add 2
	# assert a.peek == 2
	# assert a.take == 2
	# assert a.peek == 1
	# ~~~
	fun peek: E is abstract

	# `first` is made an alias of `peek` to avoid bad surprises
	redef fun first do return peek

	# Take and return all elements until the queue is empty.
	#
	# Ensure:
	# * `is_empty`
	# * `result.length == old(length)`
	# * `not old(is_empty) implies result.first == old(peek)`
	#
	# ~~~
	# var a = (new Array[Int]).as_lifo
	# a.add 1
	# a.add 2
	# a.add 3
	# assert a.take_all == [3, 2, 1]
	# assert a.is_empty
	# ~~~
	fun take_all: Array[E]
	do
		var res = new Array[E]
		while not is_empty do res.add take
		return res
	end
end

redef class Sequence[E]
	# Return a LIFO proxy queue (stack) where `result.take` is `pop`.
	#
	# The point of such a proxy is to let the user choose the underling data structure
	# behind the LIFO.
	#
	# ~~~
	# var a = [1, 2, 3]
	# var q = a.as_lifo
	# assert q.take == 3
	# assert q.take == 2
	# q.add(4)
	# q.add(5)
	# assert q.take == 5
	# assert a == [1, 4]
	# ~~~
	fun as_lifo: Queue[E] do return new LifoQueue[E](self)

	# Return a FIFO proxy queue where `result.take` is `shift`.
	#
	# The point of such a proxy is to let the user choose the underling data structure
	# behind the FIFO.
	#
	# Note that some `Sequence`, like `Array`, have an inefficient `shift` implementation,
	# thus are not the best candidates to serve as a FIFO.
	#
	# ~~~
	# var a = new List[Int].from([1,2,3])
	# var q = a.as_fifo
	# assert q.take == 1
	# q.add(4)
	# q.add(5)
	# assert q.take == 2
	# assert a == [3, 4, 5]
	# ~~~
	fun as_fifo: Queue[E] do return new FifoQueue[E](self)
end

# Factorize common proxy implementation
private abstract class ProxyQueue[E]
	super Queue[E]
	var seq: Sequence[E]

	redef fun add(e) do seq.add(e)
	redef fun length do return seq.length
	redef fun is_empty do return seq.is_empty
	redef fun iterator do return seq.iterator
	redef fun remove(e) do seq.remove(e)
end


private class LifoQueue[E]
	super ProxyQueue[E]
	redef fun take do return seq.pop
	redef fun peek do return seq.last
end

private class FifoQueue[E]
	super ProxyQueue[E]
	redef fun take do return seq.shift
	redef fun peek do return seq.first
end


redef class SimpleCollection[E]
	# Return a random proxy queue where `result.take` is random.
	#
	# The point of such a proxy is to provide a randomized removal.
	#
	# ~~~
	# var a = [1,2,3]
	# var b = a.as_random.take
	# assert b == 1 or b == 2 or b == 3 # Eh, it is random!
	# ~~~
	fun as_random: Queue[E] do return new RandQueue[E](self)
end

private class RandQueue[E]
	super Queue[E]
	var seq: SimpleCollection[E]
	redef fun add(e)
	do
		seq.add(e)
		# Reset the cache to give the new element a chance!
		peek_cached = false
	end
	redef fun take
	do
		var res = peek
		peek_cached = false
		seq.remove(res)
		return res
	end
	redef fun peek do
		if peek_cached then return peek_cache
		var res = seq.rand
		peek_cache = res
		peek_cached = true
		return res
	end
	var peek_cached = false
	var peek_cache: E is noinit
	redef fun length do return seq.length
	redef fun is_empty do return seq.is_empty
	redef fun iterator do return seq.iterator
	redef fun remove(e) do seq.remove(e)
end


# A min-heap implemented over an array
#
# The order is given by the `comparator`.
#
# ~~~
# var a = [3,4,1,2]
# var h = new MinHeap[Int].default
# h.add_all(a)
# assert h.peek == 1
# var b = h.take_all
# assert b == [1, 2, 3, 4]
# ~~~
class MinHeap[E: Object]
	super Queue[E]

	private var items = new Array[E]

	# The comparator used to order the Heap
	var comparator: Comparator

	# Use the `default_comparator` on Comparable elements
	#
	# Require self isa MinHeap[Comparable]
	init default
	do
		assert self isa MinHeap[Comparable]
		init(default_comparator)
	end

	redef fun is_empty do return items.is_empty
	redef fun length do return items.length
	redef fun iterator do return items.iterator
	redef fun clear do items.clear

	redef fun peek do return items.first
	redef fun add(e)
	do
		#assert assert_best else print "try to add {e}"
		#var ol = length
		var ei = items.length + 1
		while ei > 1 do
			var pi = ei/2
			var p = items[pi-1]
			if comparator.compare(p, e) <= 0 then break

			# bubble-up
			items[ei-1] = p

			# next
			ei = pi
		end
		items[ei-1] = e
		#assert length == ol + 1
		#assert assert_best else print "added {e}"
	end

	redef fun take do
		#assert assert_best else print "tri to take"
		#var ol = length
		if length < 2 then return items.pop

		var res = items.first
		var ei = 1
		var e = items.pop

		var last = items.length
		loop
			# Check first child
			var ci = ei*2
			if ci > last then break # no children
			var c = items[ci-1]
			var upc = comparator.compare(e, c) > 0

			# Check second child
			var c2i = ci + 1
			if c2i <= last then do
				var c2 = items[c2i-1]
				# possibility to bubble-down to c2, or not?
				if comparator.compare(e, c2) <= 0 then break label
				# c2 is a better path, or not?
				if upc and comparator.compare(c2, c) > 0 then break label
				# goes to c2 path
				upc = true
				c = c2
				ci = c2i
			end label

			# bubble-down?
			if not upc then break

			items[ei-1] = c
			ei = ci
		end
		items[ei-1] = e
		#assert length == ol - 1 else print "is {length}, expected {ol - 1}"
		#assert assert_best else print "dequed {res}"
		return res
	end

	# Used internally do debug the Heap.
	# Not removed because this can still be useful.
	private fun assert_best: Bool
	do
		if is_empty then return true
		var b = peek
		for i in self do if comparator.compare(b, i) > 0 then
			#print "  peek is {b} but better found {i}"
			for j in self do
				#print "   {j}"
			end
			return false
		end
		return true
	end
end
