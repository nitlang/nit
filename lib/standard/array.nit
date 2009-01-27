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
package array

import abstract_collection

# Resizeable one dimention array of objects.
class AbstractArray[E]
special IndexedCollection[E]
	meth enlarge(cap: Int) is abstract

	# The current length
	redef readable attr _length: Int = 0
	
	redef meth is_empty do return _length == 0

	redef meth push(item) do add(item)
	
	redef meth pop
	do
		assert not_empty: not is_empty
		var r = last
		_length -= 1
		return r
	end

	redef meth shift
	do
		assert not_empty: not is_empty
		var r = first
		var i = 1
		var l = length
		while i < l do
			self[i-1] = self[i]
			i += 1
		end
		_length = l - 1
		return r
	end

	redef meth unshift(item)
	do
		var i = length - 1
		while i > 0 do
			self[i+1] = self[i]
			i -= 1
		end
		self[0] = item
	end

	meth insert(item: E, pos: Int)
	do
		enlarge(length + 1)
		copy_to(pos, length-pos, self, pos + 1)
		self[pos] = item
	end

	redef meth add(item) do self[length] = item

	redef meth clear do _length = 0

	redef meth has(item)
	do
		var i = 0
		var l = length
		while i < l do
			if self[i] == item then return true
			i += 1
		end
		return false
	end

	redef meth has_only(item)
	do
		var i = 0
		var l = length
		while i < l do
			if self[i] != item then return false
			i += 1
		end
		return true
	end

	redef meth has_key(index) do return index >= 0 and index < length

	redef meth count(item)
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

	redef meth index_of(item) do return index_of_from(item, 0)

	meth last_index_of(item: E): Int do return last_index_of_from(item, length-1)

	meth index_of_from(item: E, pos: Int): Int
	do
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

	meth last_index_of_from(item: E, pos: Int): Int
	do
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

	meth reversed: Array[E]
	do
		var cmp = _length
		var result = new Array[E].with_capacity(cmp)
		while cmp > 0 do
			cmp -= 1
			result.add(self[cmp])
		end
		return result
	end

	redef meth remove(item) do remove_at(index_of(item))

	redef meth remove_all(item)
	do
		var i = index_of(item)
		while i >= 0 do
			remove_at(i)
			i = index_of_from(item, i)
		end
	end

	redef meth remove_at(i)
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

	protected meth copy_to(start: Int, len: Int, dest: AbstractArray[E], new_start: Int)
	do
		# TODO native one
		var i = len
		while i > 0 do
			i -= 1
			dest[new_start+i] = self[start+i]
		end
	end

	redef meth output
	do
		var i = 0
		var l = length
		while i < l do
			var e = self[i]
			if e != null then e.output
			i += 1
		end
	end

	redef meth iterator: ArrayIterator[E] do return new ArrayIterator[E](self)

	# Two arrays are equals if they have the same items in the same order.
	redef meth ==(o)
	do
		if not o isa AbstractArray[E] or o is null then return false
		assert o isa AbstractArray[E]
		var l = length
		if o.length != l then return false
		var i = 0
		while i < l do
			if self[i] != o[i] then return false
			i += 1
		end
		return true
	end
end
	
# Resizeable one dimention array of objects.
#
# Arrays have a literal representation.
#     a = [12, 32, 8]
# is equivalent with:
#     a = new Array[Int]
#     a.push(12)
#     a.push(32)
#     a.push(8)
class Array[E]
special AbstractArray[E]
special ArrayCapable[E]
	redef meth [](index)
	do
		assert index: index >= 0 and index < _length
		return _items[index]
	end

	redef meth []=(index, item)
	do
		assert index: index >= 0 and index < _length + 1
		if _capacity <= index then
			enlarge(index + 1)
		end
		if _length <= index then
			_length = index + 1
		end
		_items[index] = item
	end

	redef meth enlarge(cap)
	do
		var c = _capacity
		if cap <= c then return
		while c <= cap do c = c * 2 + 2
		var a = calloc_array(c)
		if _capacity > 0 then _items.copy_to(a, _length)
		_items = a
		_capacity = c
	end

	# Create an empty array.
	init
	do
		_capacity = 0
		_length = 0
	end

	# Create an array with some `items'.
	init with_items(objects: E...)
	do
		_items = objects._items
		_capacity = objects._capacity
		_length = objects.length
	end

	# Create an empty array with a given capacity.
	init with_capacity(cap: Int)
	do
		assert positive: cap >= 0
		_items = calloc_array(cap)
		_capacity = cap
		_length = 0
	end

	# Create an array of `count' elements
	init filled_with(value: E, count: Int)
	do
		assert positive: count >= 0
		_items = calloc_array(count)
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
	do
		assert positive: size >= 0
		_items = nat
		_capacity = size
		_length = size
	end

	# The internal storage.
	attr _items: NativeArray[E] = null

	# The size of `_items'.
	attr _capacity: Int = 0
end

# An `Iterator' on `AbstractArray'
class ArrayIterator[E]
special IndexedIterator[E]
	redef meth item do return _array[_index]

	redef meth item=(e) do _array[_index] = e

	redef meth is_ok do return _index < _array.length

	redef meth next do _index += 1

	init(a: AbstractArray[E])
	do
		assert not_nil: a != null
		_array = a
		_index = 0
	end

	redef readable attr _index: Int = 0
	attr _array: AbstractArray[E]
end

# Others collections ##########################################################

# A set implemented with an Array.
class ArraySet[E]
special Set[E]
	# The stored elements.
	attr _array: Array[E]

	redef meth has(e) do return _array.has(e)

	redef meth add(e) do if not _array.has(e) then _array.add(e)

	redef meth is_empty do return _array.is_empty

	redef meth length do return _array.length

	redef meth first
	do
		assert _array.length > 0
		return _array.first
	end

	redef meth remove(item)
	do
		var i = _array.index_of(item)
		if i >= 0 then remove_at(i)
	end

	redef meth remove_all(item) do remove(item)

	redef meth clear do _array.clear

	redef meth iterator do return new ArraySetIterator[E](_array.iterator)

	# Assume the capacitydd is at least `cap'.
	meth enlarge(cap: Int) do _array.enlarge(cap)

	private meth remove_at(i: Int)
	do
		_array[i] = _array.last
		_array.pop
	end

	# Create an empty set
	init do _array = new Array[E]

	# Create an empty set with a given capacity.
	init with_capacity(i: Int) do _array = new Array[E].with_capacity(i)
end

# Iterators on sets implemented with arrays.
class ArraySetIterator[E]
special Iterator[E]

	redef meth is_ok do return _iter.is_ok

	redef meth next do _iter.next

	redef meth item: E do return _iter.item

	init(iter: ArrayIterator[E]) do _iter = iter

	attr _iter: ArrayIterator[E]
end


# Associative arrays implemented with an array of (key, value) pairs.
class ArrayMap[K, E]
special CoupleMap[K, E] 

	# O(n)
	redef meth [](key)
	do
		var i = index(key)
		if i >= 0 then
			return _items[i].second
		else
			return null
		end
	end

	# O(n)
	redef meth []=(key, item)
	do
		var i = index(key)
		if i >= 0 then
			_items[i].second = item
		else
			_items.push(new Couple[K,E](key, item))
		end                
	end

	# O(n)
	redef meth has_key(key) do return index(key) >= 0

	# O(n)
	redef meth has(item)
	do
		for i in _items do if i.second == item then return true
		return false
	end

	# O(n)
	redef meth has_only(item)
	do
		for i in _items do if i.second != item then return false
		return true
	end

	# O(1)
	redef meth length do return _items.length

	redef meth first do return _items.first.first

	# O(n)
	redef meth count(item)
	do
		var nb = 0
		for i in _items do if i.second == item then nb += 1
		return nb
	end

	redef meth iterator: CoupleMapIterator[K, E] do return new CoupleMapIterator[K, E](_items.iterator)

	redef meth is_empty do return _items.is_empty

	redef meth remove(item)
	do
		var i = _items.length - 1
		while i >= 0 do
			if _items[i].second == item then
				remove_at_index(i)
				return
			end
			i -= 1
		end
	end

	redef meth remove_all(item: E)
	do
		var i = _items.length - 1
		while i >= 0 do
			if _items[i].second == item then
				remove_at_index(i)
			end
			i -= 1
		end
	end

	redef meth remove_at(key)
	do
		var i = index(key)
		if i >= 0 then remove_at_index(i)
	end

	redef meth clear do _items.clear

	# Assume the capacity to be at least `cap'.
	meth enlarge(cap: Int) do _items.enlarge(cap)

	redef meth couple_at(key)
	do
		var i = index(key)
		if i >= 0 then
			return _items[i]
		else
			return null
		end
	end

	# Internal storage.
	attr _items: Array[Couple[K,E]]

	# fast remove the ith element of the array
	private meth remove_at_index(i: Int)
	do
		_items[i] = _items.last
		_items.pop
	end

	# The last positive result given by a index(1) call
	attr _last_index: Int = 0
	
	# Where is the `key' in `_item'?
	# return -1 if not found
	private meth index(key: K): Int
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

	# A new empty map.
	init
	do 
		_items = new Array[Couple[K,E]]
	end
end

# Others tools ################################################################

redef class Iterator[E]
	# Interate on `self' and build an array
	meth to_a: Array[E]
	do
		var res = new Array[E]
		while is_ok do
			res.add(item)
			next
		end
		return res
	end
end

redef class Collection[E]
	# Build a new array from a collection
	meth to_a: Array[E]
	do
		return iterator.to_a
	end
end

# Native classes ##############################################################

# Subclasses of this class can create native arrays
interface ArrayCapable[E]
	# Get a new array of `size' elements.
	protected meth calloc_array(size: Int): NativeArray[E] is intern
end

# Native C array (void ...).
universal NativeArray[E]
	meth [](index: Int): E is intern
	meth []=(index: Int, item: E) is intern
	meth copy_to(dest: NativeArray[E], length: Int) is intern
	#meth =(o: NativeArray[E]): Bool is intern
	#meth !=(o: NativeArray[E]): Bool is intern
end
