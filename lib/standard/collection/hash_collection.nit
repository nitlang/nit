# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2004-2009 Jean Privat <jean@pryen.org>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Introduce Hashmap and Hashset.
package hash_collection

import array
import hash

# A HashCollection is an array of HashNode[K] indexed by the K hash value
private class HashCollection[K: Object, N: HashNode[K], E]
special Collection[E]
special ArrayCapable[nullable N]
	var _array: nullable NativeArray[nullable N] = null # Used to store items
	var _capacity: Int = 0 # Size of _array
	redef readable var _length: Int = 0 # Number of items in the map

	readable var _first_item: nullable N = null # First added item (used to visit items in nice order)
	var _last_item: nullable N = null # Last added item (same)

	# The last index accessed
	var _last_accessed_index: Int = -1

	# The last key accessed
	var _last_accessed_key: nullable K = null

	# Return the index of the k element
	fun index_at(k: K): Int
	do
		var arr = _array

		# Fisrt step: look in the last indexed elt
		if k == _last_accessed_key then return _last_accessed_index

		# Compute the base position of the key
		var base = k.hash % _capacity
		if base < 0 then base = - base

		# Look for the key in the array
		var cur = base
		while true do
			var c = arr[cur]
			if c == null or c.key == k then # REAL equals
				_last_accessed_index = cur
				_last_accessed_key = k
				return cur
			end
			cur -= 1
			if cur < 0 then cur = _capacity - 1
			assert no_loop: cur != base
		end
		abort
	end

	# Add a new node (should be free)
	fun store(index: Int, node: N)
	do
		# Store the item in the list
		if _first_item == null then
			_first_item = node
		else
			_last_item.next_item = node
		end
		node.prev_item = _last_item
		node.next_item = null
		_last_item = node
		# Then store it in the array
		assert _array[index] == null
		_array[index] = node
		var l = _length
		_length = l + 1
		l = (l + 5) * 150 / 100
		if l >= _capacity then
			enlarge(l * 2)
		end
	end

	fun remove_index(i: Int)
	do
		assert correct_index: i >= 0 and i < _capacity
		var node = _array[i]
		assert has_couple: node != null
		# Remove the item in the list
		var prev = node.prev_item
		var next = node.next_item
		if prev != null then
			prev.next_item = next
		else
			_first_item = next
		end
		if next != null then
			next.prev_item = prev
		else
			_last_item = prev
		end
		# Remove the item in the array
		_array[i] = null
		_length -= 1
		# Now replaces things before if needed
		while true do
			i -= 1
			if i < 0 then
				i = _capacity - 1
			end
			var n = _array[i]
			if n == null then
				return
			end
			var i2 = index_at(n.key)
			if i != i2 then
				_array[i] = null
				assert _array[i2] == null
				_array[i2] = n
			end
		end
	end

	fun raz
	do
		var i = _capacity - 1
		while i >= 0 do
			_array[i] = null
			i -= 1
		end
		_length = 0
		_first_item = null
		_last_item = null
		_last_accessed_key = null
	end

	fun enlarge(cap: Int)
	do
		var old_cap = _capacity
		# get a new capacity
		# cap = cap * 130 / 100 + 5 + 1000 # /
		if cap < _length + 1 then cap = _length + 1
		if cap <= _capacity then return
		_capacity = cap
		_last_accessed_key = null

		# get a new array
		var new_array = calloc_array(cap)
		_array = new_array

		# clean the new array
		var i = cap - 1
		while i >=0 do
			new_array[i] = null
			i -= 1
		end

		if _capacity <= old_cap then return

		# Reput items in the array
		var node = _first_item
		while node != null do
			var ind = index_at(node.key)
			assert new_array[ind] == null
			new_array[ind] = node
			node = node.next_item
		end
		_last_accessed_key = null
	end
end

private class HashNode[K]
	fun key: K is abstract
	type N: HashNode[K]
	readable writable var _next_item: nullable N = null
	readable writable var _prev_item: nullable N = null
end

class HashMap[K, V]
special CoupleMap[K, V]
special HashCollection[K, HashMapNode[K, V], V]

	redef fun iterator: HashMapIterator[K, V] do return new HashMapIterator[K,V](self)

	redef fun first
	do
		assert _length > 0
		return _first_item.second
	end

	redef fun is_empty do return _length == 0

	redef fun count(item)
	do
		var nb = 0
		var i = 0
		while i < _capacity do
			var c = _array[i]
			if c != null and c.second == item then nb += 1
			i += 1
		end
		return nb
	end

	redef fun has(item)
	do
		var i = 0
		while i < _capacity do
			var c = _array[i]
			if c != null and c.second == item then return true
			i += 1
		end
		return false
	end

	redef fun has_only(item)
	do
		var i = 0
		while i < _capacity do
			var c = _array[i]
			if c != null and c.second != item then return false
			i += 1
		end
		return true
	end

	redef fun []=(key, v)
	do
		assert key != null
		var i = index_at(key)
		var c = _array[i]
		if c != null then
			c.first = key
			c.second = v
		else
			store(i, new HashMapNode[K, V](key, v))
		end
	end

	redef fun remove(item)
	do
		var i = 0
		while i < _capacity do
			var c = _array[i]
			if c != null and c.second == item then
				remove_index(i)
				return
			end
			i += 1
		end
	end

	redef fun remove_at(key) do remove_index(index_at(key))

	redef fun clear do raz

	redef fun couple_at(key) do return _array[index_at(key)]

	init
	do
		_capacity = 0
		_length = 0
		enlarge(0)
	end
end

class HashMapNode[K, V]
special Couple[K, V]
special HashNode[K]
	redef fun key do return first
	redef type N: HashMapNode[K, V]

	init(k: K, v: V)
	do
		first = k
		second = v
	end
end

class HashMapIterator[K, V]
special MapIterator[K, V]
	redef fun is_ok do return _node != null

	redef fun item
	do
		assert is_ok
		return _node.second
	end

	#redef fun item=(value)
	#do
	#	assert is_ok
	#	_node.second = value
	#end

	redef fun key
	do
		assert is_ok
		return _node.first
	end

	redef fun next
	do
		assert is_ok
		_node = _node.next_item
	end

	# The map to iterate on
	var _map: HashMap[K, V]

	# The current node
	var _node: nullable HashMapNode[K, V]

	init(map: HashMap[K, V])
	do
		_map = map
		_node = map.first_item
	end
end

class HashSet[E]
special Set[E]
special HashCollection[E, HashSetNode[E], E]

	redef fun is_empty do return _length == 0

	redef fun first
	do
		assert _length > 0
		return _first_item.key
	end

	redef fun has(item)
	do
		return _array[index_at(item)] != null
	end

	redef fun add(item)
	do
		var i = index_at(item)
		var c = _array[i]
		if c != null then
			c.key = item
		else
			store(i,new HashSetNode[E](item))
		end
	end

	redef fun remove(item) do remove_index(index_at(item))

	redef fun clear do raz

	redef fun iterator do return new HashSetIterator[E](self)

	init
	do
		_capacity = 0
		_length = 0
		enlarge(0)
	end
end

class HashSetNode[E]
special HashNode[E]
	redef type N: HashSetNode[E]

	redef readable writable var _key: E

	init(e: E)
	do
		_key = e
	end
end

class HashSetIterator[E]
special Iterator[E]
	redef fun is_ok do return _node != null

	redef fun item
	do
		assert is_ok
		return _node.key
	end

	redef fun next
	do
		assert is_ok
		_node = _node.next_item
	end

	# The set to iterate on
	var _set: HashSet[E]

	# The position in the internal map storage
	var _node: nullable HashSetNode[E]

	init(set: HashSet[E])
	do
		_set = set
		_node = set.first_item
	end
end

