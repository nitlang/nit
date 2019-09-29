# This file is part of NIT (http://www.nitlanguage.org).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Efficient data structure to access both end of the sequence.
module circular_array

import array

# Efficient data structure to access both end of the sequence.
#
# A circular array offers efficient random access, efficient manipulation
# at both ends of the structure (push, pop, shift and unshift) and
# automatic amortized growth.
#
# Therefore it can be used as is or as an efficient queue (FIFO/LIFO).
class CircularArray[E]
	super Sequence[E]

	# The low-level storage of the items.
	#
	# Internally, there is two main configurations
	#
	# One part: from `head` to `tail` (inclusive)
	#
	# ~~~raw
	# ...0123...
	#    h  t
	# ~~~
	#
	# Two parts: from `head` to `capacity-1`,
	# then from `0` to `tail` (both inclusive)
	# Test with `head > tail`
	#
	# ~~~raw
	# 345....012
	#   t    h
	# ~~~
	#
	# For consistency, *length* and *index* are used in the context of the sequence (self) and
	# *capacity* and *offset* are used in the context of the native array.
	#
	# Initially the native is not allocated, the first one is done with `enlarge`
	private var native: NativeArray[E] is noautoinit

	# The offset of the `first` item in `native`
	private var head = 0

	# The offset of the `last` item in `native`
	private var tail: Int = -1

	redef var length = 0

	# Transform an index into an offset.
	#
	# The method takes care of the initial gap and the possible wrapping.
	#
	# EXPECT: `0 <= index and index < length`
	private fun offset(index: Int): Int
	is
		expect(0 <= index and index < length)
	do
		var head = self._head
		var tail = self._tail
		var offset = head + index

		if head > tail then
			# Two parts
			var capacity = native.length
			if offset < capacity then
				return offset
			end
			offset -= capacity
		end

		assert offset <= tail
		return offset
	end

	redef fun [](index) do return native[offset(index)]

	redef fun []=(index, item) do
		var l = length
		if index == l then
			push(item)
			return
		end
		native[offset(index)] = item
	end

	redef fun push(item) do
		var l = length + 1
		enlarge(l)
		length = l

		var native = _native
		var cap = native.length
		var t = tail + 1
		if t >= cap then t -= cap

		native[t] = item
		tail = t
	end

	redef fun add_all(items) do
		enlarge length + items.length
		super
	end

	# EXPECT `not_empty`
	redef fun pop do
		length = length - 1

		var native = _native
		var t = tail
		var res = native[t]

		t -= 1
		if t < 0 then t += native.length
		tail = t

		return res
	end

	redef fun unshift(item) do
		var l = length + 1
		enlarge(l)
		length = l

		var native = _native
		var h = head - 1
		if h < 0 then h += native.length

		native[h] = item
		head = h
	end

	# EXPECT `not_empty`
	redef fun shift do
		length = length - 1

		var native = _native
		var h = head
		var res = native[h]

		h += 1
		var cap = native.length
		if h >= cap then h -= cap
		head = h

		return res
	end

	# Ensure at least a given capacity
	#
	# If the current capacity is enough, then no-op.
	fun enlarge(capacity: Int)
	do
		# First allocation
		if not isset _native then
			var new_c = 8
			while new_c < capacity do new_c *= 2
			native = new NativeArray[E](new_c)
			return
		end

		# Compute more capacity
		var c = native.length
		if capacity <= c then return
		var new_c = c
		while new_c < capacity do new_c *= 2

		var new_native = new NativeArray[E](new_c)

		# Reallocation: just realign the parts on 0
		if head > tail then
			# Two parts
			native.memmove(head, c-head, new_native, 0)
			native.memmove(0, tail+1, new_native, c-head)
		else
			# One part
			native.memmove(head, length, new_native, 0)
		end
		head = 0
		tail = length - 1
		native = new_native
	end

	# ENSURE `self[index] == item`
	redef fun insert(item, index)
	is
		expect(index >= 0) # Since this is a circular structure, the expected condition only need to be `index >= 0`.
		ensure(self[index] == item)
	do
		# Special insertion at the end (is push)
		if index >= length then
			assert index == length
			push(item)
			return
		end

		var new_len = length + 1

		# TODO be more efficient:
		# Here, we just allocate a new native and copy everything.

		# Allocate a new native array
		var c = native.length
		while c < new_len do c *= 2
		var new_native = new NativeArray[E](c)

		# Copy everything
		var i = 0
		while i < index do
			new_native[i] = self[i]
			i += 1
		end
		new_native[index] = item
		var l = length
		while i < l do
			new_native[i+1] = self[i]
			i += 1
		end

		# Use the new native array
		length = new_len
		head = 0
		tail = new_len - 1
		native = new_native
	end

	redef fun clear do
		length = 0
		head = 0
		tail = -1
	end

	redef fun iterator do return new CircularArrayIterator[E](self)
end

private class CircularArrayIterator[E]
	super IndexedIterator[E]

	var array: CircularArray[E]

	redef var index = 0
	redef fun is_ok do return index < array.length
	redef fun item do return array[index]
	redef fun next do index += 1
end
