# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
# Copyright 2008 Floréal Morandat <morandat@lirmm.fr>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# This module introduces the standard array structure.
# It also implements two other abstract collections : ArrayMap and ArraySet
module array is
	no_warning "useless-type-test" # to avoid warning with nitc while compiling with c_src
end

import abstract_collection

# One dimension array of objects.
abstract class AbstractArrayRead[E]
	super SequenceRead[E]

	redef var length = 0

	redef fun is_empty do return _length == 0

	redef fun has(item)
	do
		var i = 0
		var l = length
		while i < l do
			if self[i] == item then return true
			i += 1
		end
		return false
	end

	redef fun has_only(item)
	do
		var i = 0
		var l = length
		while i < l do
			if self[i] != item then return false
			i += 1
		end
		return true
	end

	redef fun count(item)
	do
		var res = 0
		var i = 0
		var l = length
		while i < l do
			if self[i] == item then res += 1
			i += 1
		end
		return res
	end

	redef fun index_of(item) do return index_of_from(item, 0)

	redef fun last_index_of(item) do return last_index_of_from(item, length-1)

	redef fun index_of_from(item, pos) do
		var i = pos
		var len = length
		while i < len do
			if self[i] == item then
				return i
			end
			i += 1
		end
		return -1
	end

	redef fun last_index_of_from(item, pos)	do
		var i = pos
		while i >= 0 do
			if self[i] == item then
				return i
			else
				i -= 1
			end
		end
		return -1
	end

	# Return a new array that is the reverse of `self`
	#
	#     assert [1,2,3].reversed      ==  [3, 2, 1]
	fun reversed: Array[E]
	do
		var cmp = _length
		var result = new Array[E].with_capacity(cmp)
		while cmp > 0 do
			cmp -= 1
			result.add(self[cmp])
		end
		return result
	end

	# Copy a portion of `self` to an other array.
	#
	#     var a = [1, 2, 3, 4]
	#     var b = [10, 20, 30, 40, 50]
	#     a.copy_to(1, 2, b, 2)
	#     assert b      ==  [10, 20, 2, 3, 50]
	fun copy_to(start: Int, len: Int, dest: AbstractArray[E], new_start: Int)
	do
		if start < new_start then
			var i = len
			while i > 0 do
				i -= 1
				dest[new_start+i] = self[start+i]
			end
		else
			var i = 0
			while i < len do
				dest[new_start+i] = self[start+i]
				i += 1
			end
		end
	end

	redef fun output
	do
		var i = 0
		var l = length
		while i < l do
			var e = self[i]
			if e != null then e.output
			i += 1
		end
	end

	redef fun iterator: IndexedIterator[E] do
		var res = _free_iterator
		if res == null then return new ArrayIterator[E](self)
		res._index = 0
		_free_iterator = null
		return res
	end

	# An old iterator, free to reuse.
	# Once an iterator is `finish`, it become reusable.
	# Since some arrays are iterated a lot, this avoid most of the
	# continuous allocation/garbage-collection of the needed iterators.
	private var free_iterator: nullable ArrayIterator[E] = null

	redef fun reverse_iterator do return new ArrayReverseIterator[E](self)

	# Returns a sub-array containing `count` elements starting from `from`.
	#
	# For most cases (see other case bellow),
	# the first element is `from` and
	# the last element is `from+count-1`.
	#
	# ~~~
	# var a = [10, 20, 30, 40, 50]
	# assert a.sub(0, 3) == [10, 20, 30]
	# assert a.sub(3, 2) == [40, 50]
	# assert a.sub(3, 1) == [40]
	# ~~~
	#
	# If `count` is 0 or negative then an empty array is returned
	#
	# ~~~
	# assert a.sub(3,0).is_empty
	# assert a.sub(3,-1).is_empty
	# ~~~
	#
	# If `from < 0` or `from+count>length` then inexistent elements are ignored.
	# In this case the length of the result is lower than count.
	#
	# ~~~
	# assert a.sub(-2, 4)  == [10, 20]
	# assert a.sub(4, 99)  == [50]
	# assert a.sub(-9, 99) == [10,20,30,40,50]
	# assert a.sub(-99, 9).is_empty
	# ~~~
	fun sub(from: Int, count: Int): Array[E] do
		if from < 0 then
			count += from
			from = 0
		end
		if count < 0 then
			count = 0
		end
		var to = from + count
		if to > length then
			to = length
		end
		var res = new Array[E].with_capacity(to - from)
		while from < to do
			res.add(self[from])
			from += 1
		end
		return res
	end
end

# Resizable one dimension array of objects.
abstract class AbstractArray[E]
	super AbstractArrayRead[E]
	super Sequence[E]

	# Force the capacity to be at least `cap`.
	# The capacity of the array is an internal information.
	# However, this method can be used to prepare a large amount of add
	fun enlarge(cap: Int) is abstract

	redef fun push(item) do add(item)

	# EXPECT `not_empty`
	redef fun pop
	do
		var r = last
		_length -= 1
		return r
	end

	# EXPECT `not_empty`
	redef fun shift
	do
		var r = first
		var l = length-1
		copy_to(1, l, self, 0)
		_length = l
		return r
	end

	redef fun unshift(item)
	do
		var l = length
		if l > 0 then
			enlarge(l + 1)
			copy_to(0, l, self, 1)
		end
		self[0] = item
	end

	redef fun insert(item, pos) do
		enlarge(length + 1)
		copy_to(pos, length-pos, self, pos + 1)
		self[pos] = item
	end

	redef fun insert_all(coll, pos)
	do
		var l = coll.length
		if l == 0 then return
		enlarge(length + l)
		_length += l
		copy_to(pos, length-pos-l, self, pos + l)
		for c in coll do
			self[pos] = c
			pos += 1
		end
	end

	redef fun add(item) do self[length] = item

	redef fun clear do _length = 0

	redef fun remove(item) do remove_at(index_of(item))

	redef fun remove_all(item)
	do
		var i = index_of(item)
		while i >= 0 do
			remove_at(i)
			i = index_of_from(item, i)
		end
	end

	redef fun remove_at(i)
	do
		var l = length
		if i >= 0 and i < l then
			var j = i + 1
			while j < l do
				self[j-1] = self[j]
				j += 1
			end
			_length = l - 1
		end
	end

	# Invert two elements in the array
	#
	#     var a = [10, 20, 30, 40]
	#     a.swap_at(1, 3)
	#     assert a      ==  [10, 40, 30, 20]
	fun swap_at(a: Int,b: Int)
	do
	    var e = self[a]
	    self[a] = self[b]
	    self[b] = e
	end
end

# Resizable one dimension array of objects.
#
# Arrays have a literal representation.
#
#     var a = [12, 32, 8]
#     # is equivalent with:
#     var b = new Array[Int]
#     b.push(12)
#     b.push(32)
#     b.push(8)
#     assert a == b
class Array[E]
	super AbstractArray[E]
	super Cloneable

	# EXPECT `index >= 0 and index <= length`
	redef fun [](index)
	do
		return _items.as(not null)[index]
	end

	# EXPECT `index >= 0 and index <= length`
	redef fun []=(index, item)
	do
		if _capacity <= index then
			enlarge(index + 1)
		end
		if _length <= index then
			_length = index + 1
		end
		_items.as(not null)[index] = item
	end

	redef fun add(item)
	do
		var l = _length
		if _capacity <= l then
			enlarge(l + 1)
		end
		_length = l + 1
		_items.as(not null)[l] = item
	end

	# Slight optimization for arrays
	redef fun add_all(items)
	do
		var l = _length
		var nl = l + items.length
		if _capacity < nl then
			enlarge nl
		end

		if items isa Array[E] then
			var k = 0
			while l < nl do
				_items.as(not null)[l] = items._items.as(not null)[k]
				l += 1
				k += 1
			end
		else
			for item in items do
				_items.as(not null)[l] = item
				l += 1
			end
		end

		_length = nl
	end

	redef fun copy_to(start, len, dest, new_start)
	do
		# Fast code when source and destination are two arrays

		if not dest isa Array[E] then
			super
			return
		end

		# Enlarge dest if required
		var dest_len = new_start + len
		if dest_len > dest.length then
			dest.enlarge(dest_len)
			dest.length = dest_len
		end

		# Get underlying native arrays
		var items = self.items
		if items == null then return
		var dest_items = dest.items
		assert dest_items != null

		# Native copy
		items.memmove(start, len, dest_items, new_start)
	end

	redef fun enlarge(cap)
	do
		var c = _capacity
		if cap <= c then return
		while c <= cap do c = c * 2 + 2
		var a = new NativeArray[E](c)
		if _capacity > 0 then _items.as(not null).copy_to(a, _length)
		_items = a
		_capacity = c
	end

	# Create an empty array.
	init
	do
		_capacity = 0
		_length = 0
	end

	# Create an array from a collection.
	init from(items: Collection[E]) do
		with_capacity(items.length)
		self.add_all(items)
	end

	# Create an array with some `objects`.
	init with_items(objects: E...)
	do
		_items = objects._items
		_capacity = objects._capacity
		_length = objects.length
	end

	# Create an empty array with a given capacity.
	init with_capacity(cap: Int)
	is
		expect(cap >= 0)
	do
		_items = new NativeArray[E](cap)
		_capacity = cap
		_length = 0
	end

	# Create an array of `count` elements
	init filled_with(value: E, count: Int)
	is
		expect(count >= 0)
	do
		_items = new NativeArray[E](count)
		_capacity = count
		_length = count
		var i = 0
		while i < count do
			self[i] = value
			i += 1
		end
	end

	# Create a array filled with a given native array.
	init with_native(nat: NativeArray[E], size: Int)
	is
		expect(size >= 0)
	do
		_items = nat
		_capacity = size
		_length = size
	end

	# The internal storage.
	private var items: nullable NativeArray[E] = null

	# The size of `_items`.
	private var capacity: Int = 0

	redef fun ==(o)
	do
		if not o isa Array[nullable Object] then return super
		# Efficient implementation
		var l = length
		if l != o.length then return false
		if l == 0 then return true
		var i = 0
		var it = _items.as(not null)
		var oit = o._items.as(not null)
		while i < l do
			if it[i] != oit[i] then return false
			i += 1
		end
		return true
	end

	# Shallow clone of `self`
	#
	# ~~~
	# var a = [1,2,3]
	# var b = a.clone
	# assert a == b
	# a.add 4
	# assert a != b
	# b.add 4
	# assert a == b
	# ~~~
	#
	# Note that the clone is shallow and elements are shared between `self` and the result.
	#
	# ~~~
	# var aa = [a]
	# var bb = aa.clone
	# assert aa == bb
	# aa.first.add 5
	# assert aa == bb
	# ~~~
	redef fun clone do return to_a

	# Concatenation of arrays.
	#
	# Returns a new array built by concatenating `self` and `other` together.
	#
	#     var a1 = [1,2,3]
	#     var a2 = [4,5,6]
	#     var a3 = a1 + a2
	#     assert a3 == [1,2,3,4,5,6]
	#
	# Because a new array is always created, future modification on `self` and `other`
	# does not impact the previously computed result.
	#
	#     a1.add(30)
	#     a2.add(60)
	#     assert a3      == [1,2,3,4,5,6] # unchanged
	#     assert a1 + a2 == [1,2,3,30,4,5,6,60]
	fun +(other: Array[E]): Array[E]
	do
		var res = new Array[E].with_capacity(length + other.length)
		res.append(self)
		res.append(other)
		return res
	end

	# Repetition of arrays.
	#
	# returns a new array built by concatenating `self` `repeat` times.
	#
	#     var a = [1,2,3]
	#     assert (a * 0).is_empty
	#     assert a * 1  ==  [1,2,3]
	#     assert a * 2  ==  [1,2,3,1,2,3]
	#     assert (a * 10).length  ==  30
	fun *(repeat: Int): Array[E]
	is
		expect(repeat >= 0)
	do
		var res = new Array[E].with_capacity(length * repeat)
		while repeat > 0 do
			res.add_all(self)
			repeat -= 1
		end
		return res
	end
end

# An `Iterator` on `AbstractArray`
private class ArrayIterator[E]
	super IndexedIterator[E]

	redef fun item do return _array[_index]

	# redef fun item=(e) do _array[_index] = e

	redef fun is_ok do return _index < _array.length

	redef fun next do _index += 1

	redef var index = 0

	var array: AbstractArrayRead[E]

	redef fun finish do _array._free_iterator = self
end

private class ArrayReverseIterator[E]
	super ArrayIterator[E]

	redef fun is_ok do return _index >= 0

	redef fun next do _index -= 1

	init
	do
		_index = _array.length - 1
	end

	# Do not cache `self`
	redef fun finish do end
end

# Others collections ##########################################################

# A set implemented with an Array.
class ArraySet[E]
	super Set[E]

	# The stored elements.
	private var array: Array[E] is noinit

	redef fun has(e) do return _array.has(e)

	redef fun add(e) do if not _array.has(e) then _array.add(e)

	redef fun is_empty do return _array.is_empty

	redef fun length do return _array.length

	# EXPECT `not_empty`
	redef fun first do return _array.first

	redef fun remove(item)
	do
		var i = _array.index_of(item)
		if i >= 0 then remove_at(i)
	end

	redef fun remove_all(item) do remove(item)

	redef fun clear do _array.clear

	redef fun iterator do return new ArraySetIterator[E](_array.iterator)

	# Assume the capacity is at least `cap`.
	fun enlarge(cap: Int) do _array.enlarge(cap)

	private fun remove_at(i: Int)
	do
		_array[i] = _array.last
		_array.pop
	end

	# Create an empty set
	init do _array = new Array[E]

	# Create an empty set with a given capacity.
	init with_capacity(i: Int) do _array = new Array[E].with_capacity(i)

	redef fun new_set do return new ArraySet[E]

	# Shallow clone of `self`
	#
	# ~~~
	# var a = new ArraySet[Int]
	# a.add 1
	# a.add 2
	# var b = a.clone
	# assert a == b
	# a.add 3
	# assert a != b
	# b.add 3
	# assert a == b
	# ~~~
	#
	# Note that the clone is shallow and keys and values are shared between `self` and the result.
	#
	# ~~~
	# var aa = new ArraySet[Array[Int]]
	# aa.add([1,2])
	# var bb = aa.clone
	# assert aa == bb
	# aa.first.add 5
	# assert aa == bb
	# ~~~
	redef fun clone
	do
		var res = new ArraySet[E]
		res.add_all self
		return res
	end
end

# Iterators on sets implemented with arrays.
private class ArraySetIterator[E]
	super Iterator[E]

	redef fun is_ok do return _iter.is_ok

	redef fun next do _iter.next

	redef fun item: E do return _iter.item

	var iter: Iterator[E]
end


# Associative arrays implemented with an array of (key, value) pairs.
class ArrayMap[K, E]
	super CoupleMap[K, E]
	super Cloneable

	# O(n)
	redef fun [](key)
	do
		var i = index(key)
		if i >= 0 then
			return _items[i].second
		else
			return provide_default_value(key)
		end
	end

	# O(n)
	redef fun []=(key, item)
	do
		var i = index(key)
		if i >= 0 then
			_items[i].second = item
		else
			_items.push(new Couple[K,E](key, item))
		end
	end

	redef var keys: RemovableCollection[K] = new ArrayMapKeys[K, E](self) is lazy
	redef var values: RemovableCollection[E] = new ArrayMapValues[K, E](self) is lazy

	# O(1)
	redef fun length do return _items.length

	redef fun couple_iterator do return _items.iterator

	redef fun is_empty do return _items.is_empty

	redef fun clear do _items.clear

	# Assume the capacity to be at least `cap`.
	fun enlarge(cap: Int) do _items.enlarge(cap)

	redef fun couple_at(key)
	do
		var i = index(key)
		if i >= 0 then
			return _items[i]
		else
			return null
		end
	end

	# Internal storage.
	private var items = new Array[Couple[K,E]]

	# fast remove the ith element of the array
	private fun remove_at_index(i: Int)
	do
		_items[i] = _items.last
		_items.pop
	end

	# The last positive result given by a index(1) call
	private var last_index: Int = 0

	# Where is the `key` in `_item`?
	# return -1 if not found
	private fun index(key: K): Int
	do
		var l = _last_index
		if l < _items.length and _items[l].first == key then return l

		var i = 0
		while i < _items.length do
			if _items[i].first == key then
				_last_index = i
				return i
			end
			i += 1
		end
		return -1
	end

	# Shallow clone of `self`
	#
	# ~~~
	# var a = new ArrayMap[String,Int]
	# a["one"] = 1
	# a["two"] = 2
	# var b = a.clone
	# assert a == b
	# a["zero"] = 0
	# assert a != b
	# ~~~
	#
	# Note that the clone is shallow and keys and values are shared between `self` and the result.
	#
	# ~~~
	# var aa = new ArrayMap[String, Array[Int]]
	# aa["two"] = [1,2]
	# var bb = aa.clone
	# assert aa == bb
	# aa["two"].add 5
	# assert aa == bb
	# ~~~
	redef fun clone
	do
		var res = new ArrayMap[K,E]
		res.add_all self
		return res
	end
end

private class ArrayMapKeys[K, E]
	super RemovableCollection[K]
	# The original map
	var map: ArrayMap[K, E]
	redef fun count(k) do if self.has(k) then return 1 else return 0
	redef fun first do return self.map._items.first.first
	redef fun has(k) do return self.map.index(k) >= 0
	redef fun has_only(k) do return (self.has(k) and self.length == 1) or self.is_empty
	redef fun is_empty do return self.map.is_empty
	redef fun length do return self.map.length
	redef fun iterator do return new MapKeysIterator[K, E](self.map.iterator)
	redef fun clear do self.map.clear
	redef fun remove(key)
	do
		var i = self.map.index(key)
		if i >= 0 then self.map.remove_at_index(i)
	end
	redef fun remove_all(key) do self.remove(key)
end

private class ArrayMapValues[K, E]
	super RemovableCollection[E]
	# The original map
	var map: ArrayMap[K, E]
	redef fun first do return self.map._items.first.second
	redef fun is_empty do return self.map.is_empty
	redef fun length do return self.map.length
	redef fun iterator do return new MapValuesIterator[K, E](self.map.iterator)

	# O(n)
	redef fun has(item)
	do
		for i in self.map._items do if i.second == item then return true
		return false
	end

	# O(n)
	redef fun has_only(item)
	do
		for i in self.map._items do if i.second != item then return false
		return true
	end

	# O(n)
	redef fun count(item)
	do
		var nb = 0
		for i in self.map._items do if i.second == item then nb += 1
		return nb
	end

	redef fun clear do self.map.clear

	redef fun remove(item)
	do
		var map = self.map
		var i = map._items.length - 1
		while i >= 0 do
			if map._items[i].second == item then
				map.remove_at_index(i)
				return
			end
			i -= 1
		end
	end

	redef fun remove_all(item)
	do
		var map = self.map
		var i = map._items.length - 1
		while i >= 0 do
			if map._items[i].second == item then
				map.remove_at_index(i)
			end
			i -= 1
		end
	end
end

# Comparable array for comparable elements.
#
# For two arrays, if one is a prefix, then it is lower.
#
# ~~~
# var a12 = new ArrayCmp[nullable Int].with_items(1,2)
# var a123 = new ArrayCmp[nullable Int].with_items(1,2,3)
# assert a12 < a123
# ~~~
#
# Otherwise, the first element just after the longest
# common prefix gives the order between the two arrays.
#
# ~~~
# var a124 = new ArrayCmp[nullable Int].with_items(1,2,4)
# var a13 = new ArrayCmp[nullable Int].with_items(1,3)
# assert a12  < a123
# assert a123 < a13
# ~~~
#
# Obviously, two equal arrays are equal.
#
# ~~~
# var b12 = new ArrayCmp[nullable Int].with_items(1,2)
# assert (a12 <=> b12) == 0
# ~~~
#
# `null` is considered lower than any other elements.
# But is still greater than no element.
#
# ~~~
# var a12n = new ArrayCmp[nullable Int].with_items(1,2,null)
# assert a12n < a123
# assert a12  < a12n
# ~~~
class ArrayCmp[E: nullable Comparable]
	super Array[E]
	super Comparable
	redef type OTHER: ArrayCmp[E] is fixed

	redef fun <(o) do return (self <=> o) < 0

	redef fun <=>(o)
	do
		var i = 0
		var l = length
		if l == 0 then return 0
		var it = _items.as(not null)
		var oit = o._items.as(not null)
		var ol = o.length
		var len
		if l < ol then len = l else len = ol
		while i < len do
			var a = it[i]
			var b = oit[i]
			if a != null then
				if b == null then return 1
				var d = a <=> b
				if d != 0 then return d
			else
				if b != null then return -1
			end
			i += 1
		end
		return l <=> ol
	end
end

# Others tools ################################################################

redef class Iterator[E]
	# Interate on `self` and build an array
	fun to_a: Array[E]
	do
		var res = new Array[E]
		while is_ok do
			res.add(item)
			next
		end
		finish
		return res
	end
end

redef class Collection[E]
	# Build a new array from a collection
	fun to_a: Array[E]
	do
		var res = new Array[E].with_capacity(length)
		res.add_all(self)
		return res
	end
end

# Native classes ##############################################################

# Native Nit array
# Access are unchecked and it has a fixed size
# Not for public use: may become private.
universal NativeArray[E]
	# Creates a new NativeArray of capacity `length`
	new(length: Int) is intern
	# The length of the array
	fun length: Int is intern
	# Use `self` to initialize a standard Nit Array.
	fun to_a: Array[E] do return new Array[E].with_native(self, length)

	# Get item at `index`.
	fun [](index: Int): E is intern

	# Set `item` at `index`.
	fun []=(index: Int, item: E) is intern

	# Copy `length` items to `dest`.
	fun copy_to(dest: NativeArray[E], length: Int) is intern

	# Copy `length` items to `dest` starting from `dest`.
	fun memmove(start: Int, length: Int, dest: NativeArray[E], dest_start: Int) is intern do
		if start < dest_start then
			var i = length
			while i > 0 do
				i -= 1
				dest[dest_start+i] = self[start+i]
			end
		else
			var i = 0
			while i < length do
				dest[dest_start+i] = self[start+i]
				i += 1
			end
		end
	end

	#fun =(o: NativeArray[E]): Bool is intern
	#fun !=(o: NativeArray[E]): Bool is intern
end
