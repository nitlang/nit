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

# Introduce `HashMap` and `HashSet`.
module hash_collection

import array

redef class Map[K, V]
	# Get a `HashMap[K, V]` as default implementation
	new do return new HashMap[K, V]
end

redef class Set[E]
	# Get an instance of `HashSet[E]`, the default implementation
	new do return new HashSet[E]
end

# A HashCollection is an array of HashNode[K] indexed by the K hash value
private abstract class HashCollection[K]
	type N: HashNode[K]

	var array: NativeArray[nullable N] is noautoinit # Used to store items
	var capacity: Int = 0 # Size of _array
	var the_length: Int = 0 # Number of items in the map

	var first_item: nullable N = null # First added item (used to visit items in nice order)
	var last_item: nullable N = null # Last added item (same)

	# The last key accessed (used for cache)
	var last_accessed_key: nullable Object = null

	# The last node accessed (used for cache)
	var last_accessed_node: nullable N = null

	# Return the index of the key k
	fun index_at(k: nullable Object): Int
	do
		if k == null then return 0

		var i = k.hash % _capacity
		if i < 0 then i = - i
		return i
	end

	# Return the node associated with the key
	fun node_at(k: nullable Object): nullable N
	do
		if _the_length == 0 then return null
		# cache: `is` is used instead of `==` because it is a faster filter (even if not exact)
		if k.is_same_instance(_last_accessed_key) then return _last_accessed_node

		var res = node_at_idx(index_at(k), k)
		_last_accessed_key = k
		_last_accessed_node = res
		return res
	end

	# Return the node associated with the key (but with the index already known)
	fun node_at_idx(i: Int, k: nullable Object): nullable N
	do
		if _the_length == 0 then return null
		var c = _array[i]
		while c != null do
			var ck = c._key
			if ck.is_same_instance(k) or ck == k then # FIXME prefilter because the compiler is not smart enought yet
				break
			end
			c = c._next_in_bucklet
		end
		return c
	end

	# Add a new node at a given index
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
		var next = _array[index]
		_array[index] = node
		node._next_in_bucklet = next
		if next != null then next._prev_in_bucklet = node

		_last_accessed_key = node._key
		_last_accessed_node = node

		# Enlarge if needed
		var l = _the_length
		_the_length = l + 1

		# Magic values determined empirically
		# We do not want to enlarge too much
		# We also want a odd capacity so that the modulo is more distributive
		l = (l + 5) * 2 + 1
		if l >= _capacity then
			enlarge(l * 3 / 2 + 1)
		end
	end

	# Remove the node assosiated with the key
	fun remove_node(k: nullable Object)
	do
		if _the_length == 0 then return
		var i = index_at(k)
		var node = node_at_idx(i, k)
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
		_the_length -= 1
		prev = node._prev_in_bucklet
		next = node._next_in_bucklet
		if prev != null then
			prev._next_in_bucklet = next
		else
			_array[i] = next
		end
		if next != null then
			next._prev_in_bucklet = prev
		end

		_last_accessed_key = null
	end

	# Clear the whole structure
	fun raz
	do
		var i = _capacity - 1
		while i >= 0 do
			_array[i] = null
			i -= 1
		end
		_the_length = 0
		_first_item = null
		_last_item = null
		_last_accessed_key = null
	end

	# Force a capacity
	fun enlarge(cap: Int)
	do
		# get a new capacity
		if cap < _the_length + 1 then cap = _the_length + 1
		if cap <= _capacity then return
		_capacity = cap
		_last_accessed_key = null

		# get a new array
		var new_array = new NativeArray[nullable N](cap)
		_array = new_array

		# Reput items in the array
		var node = _first_item
		while node != null do
			var index = index_at(node._key)
			# Then store it in the array
			var next = new_array[index]
			new_array[index] = node
			node._prev_in_bucklet = null
			node._next_in_bucklet = next
			if next != null then next._prev_in_bucklet = node
			node = node._next_item
		end
	end
end

private abstract class HashNode[K]
	var key: K
	type N: HashNode[K]
	var next_item: nullable N = null
	var prev_item: nullable N = null
	var prev_in_bucklet: nullable N = null
	var next_in_bucklet: nullable N = null
end

# A `Map` implemented with a hash table.
#
# ~~~
# var map = new HashMap[nullable String, Int]
# map[null] = 0
# map["one"] = 1
# map["two"] = 2
#
# assert map[null] == 0
# assert map["one"] == 1
# assert map.keys.has("two")
# assert map.values.length == 3
# ~~~
class HashMap[K, V]
	super Map[K, V]
	super HashCollection[K]

	redef type N: HashMapNode[K, V] is fixed

	redef fun [](key)
	do
		var c = node_at(key)
		if c == null then
			return provide_default_value(key)
		else
			return c._value
		end
	end

	redef fun get_or_null(key)
	do
		var c = node_at(key)
		if c == null then
			return null
		else
			return c._value
		end
	end

	redef fun iterator do return new HashMapIterator[K,V](self)

	redef fun length do return _the_length

	redef fun is_empty do return _the_length == 0

	redef fun []=(key, v)
	do
		if _capacity == 0 then enlarge(17) # 17 because magic in `store`
		var i = index_at(key)
		var c = node_at_idx(i, key)
		if c != null then
			c._key = key
			c._value = v
		else
			store(i, new HashMapNode[K, V](key, v))
		end
	end

	redef fun clear do raz

	init
	do
		_capacity = 0
		_the_length = 0
	end

	# Build a list filled with the items of `coll`.
	init from(coll: Map[K, V]) do
		init
		add_all(coll)
	end

	redef var keys: RemovableCollection[K] = new HashMapKeys[K, V](self) is lazy
	redef var values: RemovableCollection[V] = new HashMapValues[K, V](self) is lazy
	redef fun has_key(k) do return node_at(k) != null
end

# View of the keys of a HashMap
private class HashMapKeys[K, V]
	super RemovableCollection[K]
	# The original map
	var map: HashMap[K, V]

	redef fun count(k) do if self.has(k) then return 1 else return 0
	redef fun first do return self.map._first_item._key
	redef fun has(k) do return self.map.node_at(k) != null
	redef fun has_only(k) do return (self.has(k) and self.length == 1) or self.is_empty
	redef fun is_empty do return self.map.is_empty
	redef fun length do return self.map.length

	redef fun iterator do return new MapKeysIterator[K, V](self.map.iterator)

	redef fun clear do self.map.clear

	redef fun remove(key) do self.map.remove_node(key)
	redef fun remove_all(key) do self.map.remove_node(key)
end

# View of the values of a Map
private class HashMapValues[K, V]
	super RemovableCollection[V]
	# The original map
	var map: HashMap[K, V]

	redef fun count(item)
	do
		var nb = 0
		var c = self.map._first_item
		while c != null do
			if c._value == item then nb += 1
			c = c._next_item
		end
		return nb
	end
	redef fun first do return self.map._first_item._value

	redef fun has(item)
	do
		var c = self.map._first_item
		while c != null do
			if c._value == item then return true
			c = c._next_item
		end
		return false
	end

	redef fun has_only(item)
	do
		var c = self.map._first_item
		while c != null do
			if c._value != item then return false
			c = c._next_item
		end
		return true
	end

	redef fun is_empty do return self.map.is_empty
	redef fun length do return self.map.length

	redef fun iterator do return new MapValuesIterator[K, V](self.map.iterator)

	redef fun clear do self.map.clear

	redef fun remove(item)
	do
		var map = self.map
		var c = map._first_item
		while c != null do
			if c._value == item then
				map.remove_node(c._key)
				return
			end
			c = c._next_item
		end
	end

	redef fun remove_all(item)
	do
		var map = self.map
		var c = map._first_item
		while c != null do
			if c._value == item then
				map.remove_node(c._key)
			end
			c = c._next_item
		end
	end
end

private class HashMapNode[K, V]
	super HashNode[K]
	redef type N: HashMapNode[K, V]
	var value: V
end

# A `MapIterator` over a `HashMap`.
private class HashMapIterator[K, V]
	super MapIterator[K, V]
	redef fun is_ok do return _node != null

	# EXPECT `is_ok`.
	redef fun item
	do
		return _node._value
	end

	#redef fun item=(value)
	#do
	#	assert is_ok
	#	_node.second = value
	#end

	# EXPECT `is_ok`.
	redef fun key
	do
		return _node._key
	end

	# EXPECT `is_ok`.
	redef fun next
	do
		_node = _node._next_item
	end

	# The map to iterate on
	var map: HashMap[K, V]

	# The current node
	var node: nullable HashMapNode[K, V] = null

	init
	do
		_map = map
		_node = _map._first_item
	end
end

# A `Set` implemented with a hash table.
# Keys of such a map cannot be null and require a working `hash` method
class HashSet[E]
	super Set[E]
	super HashCollection[E]

	redef type N: HashSetNode[E] is fixed

	redef fun length do return _the_length

	redef fun is_empty do return _the_length == 0

	# EXPECT `not_empty`
	redef fun first
	do
		return _first_item._key
	end

	redef fun has(item)
	do
		return node_at(item) != null
	end

	redef fun add(item)
	do
		if _capacity == 0 then enlarge(17) # 17 because magic in `store`
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
		_the_length = 0
	end

	# Build a list filled with the items of `coll`.
	init from(coll: Collection[E]) do
		init
		add_all(coll)
	end

	redef fun new_set do return new HashSet[E]
end

private class HashSetNode[E]
	super HashNode[E]
	redef type N: HashSetNode[E]
end

private class HashSetIterator[E]
	super Iterator[E]
	redef fun is_ok do return _node != null

	# EXPECT `is_ok`
	redef fun item
	do
		return _node._key
	end

	# EXPECT `is_ok`
	redef fun next
	do
		_node = _node._next_item
	end

	# The set to iterate on
	var set: HashSet[E]

	# The position in the internal map storage
	var node: nullable HashSetNode[E] = null

	init
	do
		_node = _set._first_item
	end
end
