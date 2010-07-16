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
		loop
			var c = arr[cur]
			if c == null or c._key == k then # REAL equals
				_last_accessed_index = cur
				_last_accessed_key = k
				return cur
			end
			cur -= 1
			if cur < 0 then cur = _capacity - 1
			assert no_loop: cur != base
			if false then break # FIXME remove once unreach loop exits are in c_src
		end
		abort #FIXME remove once unreach loop exits are in c_src
	end

	# Return the node assosiated with the key
	fun node_at(k: K): nullable N
	do
		var res = node_at_idx(index_at(k), k)
		return res
	end

	# Return the node assosiated with the key (but with the index already known)
	fun node_at_idx(i: Int, k: K): nullable N
	do
		return _array[i]
	end

	# Add a new node (should be free)
	fun store(index: Int, node: N)
	do
		# Store the item in the list
		if _first_item == null then
			_first_item = node
		else
			_last_item._next_item = node
		end
		node._prev_item = _last_item
		node._next_item = null
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

	# Remove the node assosiated with the key
	fun remove_node(k: K)
	do
		var i = index_at(k)
		var node = _array[i]
		if node == null then return
		# Remove the item in the list
		var prev = node._prev_item
		var next = node._next_item
		if prev != null then
			prev._next_item = next
		else
			_first_item = next
		end
		if next != null then
			next._prev_item = prev
		else
			_last_item = prev
		end
		# Remove the item in the array
		_array[i] = null
		_length -= 1
		# Now replaces things before if needed
		loop
			i -= 1
			if i < 0 then
				i = _capacity - 1
			end
			var n = _array[i]
			if n == null then
				return
			end
			var i2 = index_at(n._key)
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
			var ind = index_at(node._key)
			assert new_array[ind] == null
			new_array[ind] = node
			node = node._next_item
		end
		_last_accessed_key = null
	end
end

private class HashNode[K]
	var _key: K
	type N: HashNode[K]
	readable writable var _next_item: nullable N = null
	readable writable var _prev_item: nullable N = null
	init(k: K)
	do
		_key = k
	end
end

class HashMap[K, V]
special Map[K, V]
special HashCollection[K, HashMapNode[K, V], V]

	redef fun [](key)
	do
		var c = node_at(key)
		if c == null then
			abort
		else
			return c._value
		end
	end

	redef fun has_key(key) do return node_at(key) != null

	redef fun iterator: HashMapIterator[K, V] do return new HashMapIterator[K,V](self)

	redef fun iterate
		!each(e: V)
	do
		var c = _first_item
		while c != null do
			each(c._value)
			c = c._next_item
		end
	end

	redef fun first
	do
		assert _length > 0
		return _first_item._value
	end

	redef fun is_empty do return _length == 0

	redef fun count(item)
	do
		var nb = 0
		var c = _first_item
		while c != null do
			if c._value == item then nb += 1
			c = c._next_item
		end
		return nb
	end

	redef fun has(item)
	do
		var c = _first_item
		while c != null do
			if c._value == item then return true
			c = c._next_item
		end
		return false
	end

	redef fun has_only(item)
	do
		var c = _first_item
		while c != null do
			if c._value != item then return false
			c = c._next_item
		end
		return true
	end

	redef fun []=(key, v)
	do
		assert key != null
		var i = index_at(key)
		var c = node_at_idx(i, key)
		if c != null then
			c._key = key
			c._value = v
		else
			store(i, new HashMapNode[K, V](key, v))
		end
	end

	redef fun remove(item)
	do
		var c = _first_item
		while c != null do
			if c._value == item then
				remove_node(c._key)
				return
			end
			c = c._next_item
		end
	end

	redef fun remove_at(key) do remove_node(key)

	redef fun clear do raz

	init
	do
		_capacity = 0
		_length = 0
		enlarge(0)
	end
end

class HashMapNode[K, V]
special HashNode[K]
	redef type N: HashMapNode[K, V]
	var _value: V

	init(k: K, v: V)
	do
		super(k)
		_value = v
	end
end

class HashMapIterator[K, V]
special MapIterator[K, V]
	redef fun is_ok do return _node != null

	redef fun item
	do
		assert is_ok
		return _node._value
	end

	#redef fun item=(value)
	#do
	#	assert is_ok
	#	_node.second = value
	#end

	redef fun key
	do
		assert is_ok
		return _node._key
	end

	redef fun next
	do
		assert is_ok
		_node = _node._next_item
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
		return _first_item._key
	end

	redef fun has(item)
	do
		return node_at(item) != null
	end

	redef fun add(item)
	do
		var i = index_at(item)
		var c = node_at_idx(i, item)
		if c != null then
			c._key = item
		else
			store(i,new HashSetNode[E](item))
		end
	end

	redef fun remove(item) do remove_node(item)

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
		return _node._key
	end

	redef fun next
	do
		assert is_ok
		_node = _node._next_item
	end

	# The set to iterate on
	var _set: HashSet[E]

	# The position in the internal map storage
	var _node: nullable HashSetNode[E]

	init(set: HashSet[E])
	do
		_set = set
		_node = set._first_item
	end
end

