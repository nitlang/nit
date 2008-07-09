# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A 
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# This module is about hashable things.
# It introduces an hash funtion in objects.
# It also introduces two classes, an Hashmap and an Hashset.
package hash

intrude import string

redef class Object
	# The hash code of the object.
	# Assuming that a = b -> a.hash = b.hash
	##
	# Without redefinition, it is the `id' of the instance.
	meth hash: Int do return object_id / 8
end

redef class String
	redef meth hash
	do
		# djb2 hash algorythm
		var h = 5381
		var i = _length - 1
		var it = _items
		while i >= 0 do
			h = (h * 32) + h + it[i].ascii
			i -= 1
		end
		return h

	end
end

redef class Int
	redef meth hash do return self
end

redef class Char
	redef meth hash do return ascii
end

redef class Bool
	redef meth hash
	do
		if self then
			return 1
		else
			return 0
		end
	end
end

# A HashCollection is an array of HashNode[K] indexed by the K hash value
private class HashCollection[K: Object, N: HashNode[K], E: Object]
special Collection[E]
special ArrayCapable[N]
	attr _array: NativeArray[N] # Used to store items
	attr _capacity: Int # Size of _array
	redef readable attr _length: Int # Number of items in the map

	readable attr _first_item: N # First added item (used to visit items in nice order)
	attr _last_item: N # Last added item (same)

	# The last index accessed
	attr _last_accessed_index: Int

	# The last key accessed
	attr _last_accessed_key: K

	# Return the index of the k element
	meth index_at(k: K): Int
	do
		var arr = _array
		assert k != null

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
	meth store(index: Int, node: N)
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

	meth remove_index(i: Int)
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

	meth raz
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

	meth enlarge(cap: Int)
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

		var new_array = _array
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
	meth key: K is abstract
	type N: HashNode[K]
	readable writable attr _next_item: N
	readable writable attr _prev_item: N
end

class HashMap[K, V]
special CoupleMap[K, V]
special HashCollection[K, HashMapNode[K, V], V]

	redef meth iterator: HashMapIterator[K, V] do return new HashMapIterator[K,V](self)

	redef meth first
	do
		assert _length > 0
		return _first_item.second
	end

	redef meth is_empty do return _length == 0

	redef meth count(item)
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

	redef meth has(item)
	do
		var i = 0
		while i < _capacity do
			var c = _array[i]
			if c != null and c.second == item then return true 
			i += 1
		end
		return false
	end

	redef meth has_only(item)
	do
		var i = 0
		while i < _capacity do
			var c = _array[i]
			if c != null and c.second != item then return false
			i += 1
		end
		return true
	end

	redef meth []=(key, v)
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

	redef meth remove(item)
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

	redef meth remove_at(key) do remove_index(index_at(key))

	redef meth clear do raz

	redef meth couple_at(key) do return _array[index_at(key)]

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
	redef meth key do return first
	redef type N: HashMapNode[K, V]

	redef init(k: K, v: V)
	do
		first = k
		second = v 
	end
end

class HashMapIterator[K, V]
special MapIterator[K, V]
	redef meth is_ok do return _node != null

	redef meth item
	do
		assert is_ok
		return _node.second
	end

	redef meth item=(value)
	do
		assert is_ok
		_node.second = value
	end

	redef meth key
	do
		assert is_ok
		return _node.first
	end

	redef meth next
	do
		assert is_ok
		_node = _node.next_item
	end

	# The map to iterate on
	attr _map: HashMap[K, V]

	# The current node
	attr _node: HashMapNode[K, V]

	init(map: HashMap[K, V])
	do
		_map = map
		_node = map.first_item
	end
end

class HashSet[E]
special Set[E]
special HashCollection[E, HashSetNode[E], E]

	redef meth is_empty do return _length == 0

	redef meth first
	do
		assert _length > 0
		return _first_item.key
	end

	redef meth has(item)
	do
		return _array[index_at(item)] != null
	end

	redef meth add(item)
	do
		var i = index_at(item)
		var c = _array[i]
		if c != null then
			c.key = item
		else
			store(i,new HashSetNode[E](item))
		end
	end

	redef meth remove(item) do remove_index(index_at(item))

	redef meth clear do raz

	redef meth iterator do return new HashSetIterator[E](self)

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

	redef readable writable attr _key: E

	init(e: E)
	do
		_key = e
	end
end

class HashSetIterator[E]
special Iterator[E]
	redef meth is_ok do return _node != null

	redef meth item
	do
		assert is_ok
		return _node.key
	end

	redef meth next
	do
		assert is_ok
		_node = _node.next_item
	end

	# The set to iterate on
	attr _set: HashSet[E]

	# The position in the internal map storage
	attr _node: HashSetNode[E]

	init(set: HashSet[E])
	do
		_set = set
		_node = set.first_item
	end
end

