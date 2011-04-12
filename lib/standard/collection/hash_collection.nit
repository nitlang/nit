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

import hash
import map
intrude import array

# A HashNode datastructure representation
class HashNode[K: Object]
	
	var key: K writable
	
	type N: HashNode[K]
	var next: nullable N writable = null
	var prev: nullable N writable = null
	var prev_in_bucklet: nullable N = null
	var next_in_bucklet: nullable N = null
	
	init(k: K)
	do
		key = k
	end
end

# Map implemented with Hash
class HashMap[K: Object, V]
	super ArrayCapable[nullable HashMapNode[K, V]]
	super Map[K, V]

	type N: HashMapNode[K, V]
	protected var array: NativeArray[nullable N] # Used to store items
	
	protected var first: nullable N = null # First added item (used to visit items in nice order)
	protected var last: nullable N = null # Last added item (same)

	# Capacity of array
	protected var capacity: Int = 0

	# The last key accessed (used for cache)
	protected var last_accessed_key: nullable K = null

	# The last node accessed (used for cache)
	protected var last_accessed_node: nullable N = null

	redef var length: Int = 0

	# Return the index of the key k
	protected fun index_at(k: K): Int
	do		
		var i = k.hash % capacity
		if i < 0 then i = - i
		return i
	end

	# Return the node assosiated with the key
	protected fun node_at(k: K): nullable N
	do
		# cache: `is' is used instead of `==' because it is a faster filter (even if not exact)
		if k is last_accessed_key then return last_accessed_node

		var res = node_at_idx(index_at(k), k)
		last_accessed_key = k
		last_accessed_node = res
		return res
	end

	# Return the node assosiated with the key (but with the index already known)
	fun node_at_idx(i: Int, k: K): nullable N
	do
		var c = array[i]
		while c != null do
			var ck = c.key
			if ck is k or ck == k then #FIXME prefilter with `is' because the compiler is not smart enought yet
				break
			end
			c = c.next_in_bucklet
		end
		return c
	end

	# Without iterator
	redef fun iterate
		!each(k: K, e: V)
	do
		var c = first
		while c != null do
			each(c.key, c.value)
			c = c.next
		end
	end
	
	# Add a new node at a given index
	protected fun store(index: Int, node: N)
	do
		# Store the item in the list
		if first == null then
			first = node
		else
			last.next = node
		end
		node.prev = last
		node.next = null
		last = node

		# Then store it in the array
                var next = array[index]
		array[index] = node
		node.next_in_bucklet = next
		if next != null then next.prev_in_bucklet = node

		last_accessed_key = node.key
		last_accessed_node = node

		# Enlarge if needed
		var l = length
		l = (l + 5) * 3 / 2
		if l >= capacity then
			enlarge(l * 2)
		end
	end

	# Remove the node assosiated with the key
	protected fun remove_node(k: K)
	do
		var i = index_at(k)
		var node = node_at_idx(i, k)
		if node == null then return

		# Remove the item in the list
		var prev = node.prev
		var next = node.next
		if prev != null then
			prev.next = next
		else
			first = next
		end
		if next != null then
			next.prev = prev
		else
			last = prev
		end

		# Remove the item in the array
                length -= 1
		prev = node.prev_in_bucklet
		next = node.next_in_bucklet
		if prev != null then
			prev.next_in_bucklet = next
		else
			array[i] = next
		end
		if next != null then
			next.prev_in_bucklet = prev
		end

		last_accessed_key = null
	end

	init
	do
		length = 0
		capacity = 0
		enlarge(0)
	end

	fun enlarge(cap: Int)
	do
		var old_cap = capacity
		# get a new capacity
		if cap < length + 1 then cap = length + 1
		if cap <= capacity then return
		capacity = cap
		last_accessed_key = null

		# get a new array
		var new_array = calloc_array(cap)
		array = new_array

		# clean the new array
		var i = cap - 1
		while i >= 0 do
			new_array[i] = null
			i -= 1
		end

		if capacity <= old_cap then return

		# Reput items in the array
		var node = first
		while node != null do
			var index = index_at(node.key)
			# Then store it in the array
			var next = new_array[index]
			new_array[index] = node
			node.next_in_bucklet = next
			if next != null then next.prev_in_bucklet = node
			node = node.next
		end
	end

	redef fun iterator: HashMapIterator[K, V] do return new HashMapIterator[K,V](self)

	redef fun [](key)
	do
		var c = node_at(key)
		if c == null then
		        abort	
		else
			return c.value
		end
	end

	# O(1)
	redef fun has_key(key) do return node_at(key) != null

	redef fun keys do return new HashMapKeys[K](self)
	
	redef fun values do return new HashMapValues[V](self)

	redef fun []=(key, value)
	do
		var i = index_at(key)
		var c = node_at_idx(i, key)
		if c != null then
			c.value = value
		else
			store(i, new HashMapNode[K, V](key, value))
			length += 1
		end
	end

	redef fun clear
	do
		var i = capacity - 1
		while i >= 0 do
			array[i] = null
			i -= 1
		end
		length = 0
		first = null
		last = null
		last_accessed_key = null
	end

	redef fun remove_first_value(item)
	do
		var c = first
		while c != null do
			if c.value == item then
				remove_node(c.key)
				return
			end
			c = c.next
		end
	end

	redef fun remove_at(key) do remove_node(key)
	
	# Without Iterator
	redef fun count(item)
	do
		var nb = 0
		var c = first
		while c != null do
			if c.value == item then nb += 1
			c = c.next
		end
		return nb
	end

end

protected class HashMapKeys[K: Object]
	super ReadOnlyCollection[K]

	var collection: HashMap[K, nullable Object]

	init(collection: HashMap[K, nullable Object])
	do
		self.collection = collection
	end

        redef fun get do return collection.first.key

        redef fun has(item) do return collection.has_key(item)

        redef fun has_all(items) do return collection.has_all_keys(items)

        redef fun has_only(items) do return collection.has_only_keys(items)

        redef fun iterator do return new HashMapKeysIterator[K](collection.iterator)

        redef fun length do return collection.length

        redef fun is_empty do return collection.is_empty
end
	
protected class HashMapValues[V]
	super ReadOnlyCollection[V]

	var collection: HashMap[Object, V]

	init(collection: HashMap[Object, V])
	do
		self.collection = collection
	end

        redef fun get do return collection.first.value

        redef fun has(item) do return collection.has_value(item)

        redef fun has_all(items) do return collection.has_all_values(items)

        redef fun has_only(items) do return collection.has_only_values(items)

        redef fun iterator do return new HashMapValuesIterator[V](collection.iterator)

        redef fun length do return collection.length

        redef fun is_empty do return collection.is_empty
end

protected class HashMapKeysIterator[K: Object]
	super ReadOnlyIterator[K]

        var iterator: HashMapIterator[K, nullable Object]

	init(iterator: HashMapIterator[K, nullable Object])
	do
		self.iterator = iterator
	end

	redef fun has_next do return iterator.has_next

        redef fun next
	do 
		assert has_next: has_next		
		iterator.next
	end

        redef fun current: K do return iterator.current_key

        redef fun rewind do iterator.rewind
end

protected class HashMapValuesIterator[V]
	super ReadOnlyIterator[V]

        var iterator: HashMapIterator[Object, V]

	init(iterator: HashMapIterator[Object, V])
	do
		self.iterator = iterator
	end

	redef fun has_next do return iterator.has_next

        redef fun next
	do 
		assert has_next: has_next		
		iterator.next
	end

        redef fun current: V do return iterator.current

        redef fun rewind do iterator.rewind
end	

protected class HashMapNode[K: Object, V]
	super HashNode[K]
	
	var value: V writable

	redef type N: HashMapNode[K, V]

	init(key: K, value: V)
	do
		super(key)
		self.value = value
	end
end

class HashMapIterator[K: Object, V]
	super MapIterator[K, V]

	# The map to iterate on
	var map: HashMap[K, V]

	# The current node
	protected var node: nullable HashMapNode[K, V]

	init(map: HashMap[K, V])
	do
		self.map = map
		self.node = map.first
	end
	
	redef fun has_next do return node != null

	redef fun current 
	do 
		assert has_next: has_next
		return node.value
	end

	redef fun current_key
	do 
		assert has_next: has_next
		return node.key
	end

	redef fun next
	do
		assert has_next: has_next
		node = node.next
	end

	redef fun rewind do self.node = map.first
end

class HashSetNode[E: Object]
	super HashNode[E]

	redef type N: HashSetNode[E]

	init(e: E)
	do
		key = e
	end
end

class HashSet[E: Object]
	super Set[E]
	super ArrayCapable[nullable HashSetNode[E]]
	
	type N: HashSetNode[E]
	protected var array: NativeArray[nullable N] # Used to store items
	redef var length: Int = 0 # Number of items in the map

	# Capacity of array
	protected var capacity: Int = 0

	protected var first: nullable N = null # First added item (used to visit items in nice order)
	protected var last: nullable N = null # Last added item (same)
	
	# The last item accessed (used for cache)
	protected var last_accessed_item: nullable E = null

	# The last node accessed (used for cache)
	protected var last_accessed_node: nullable N = null

	# Return the index of the item
	protected fun index_at(e: E): Int
	do
		var i = e.hash % capacity
		if i < 0 then i = - i
		return i
	end

        redef fun get() do return first.key

	redef fun has(item) do return node_at(item) != null

	# Return the node assosiated with the item
	protected fun node_at(e: E): nullable N
	do
		# cache: `is' is used instead of `==' because it is a faster filter (even if not exact)
		if e is last_accessed_item then return last_accessed_node

		var res = node_at_idx(index_at(e), e)
		last_accessed_item = e
		last_accessed_node = res
		return res
	end

	# Return the node assosiated with the key (but with the index already known)
	fun node_at_idx(i: Int, e: E): nullable N
	do
		var c: nullable N = array[i]
		while c != null do
			var ck = c.key
			if ck is e or ck == e then # prefilter with `is' because the compiler is not smart enought yet
				break
			end
			c = c.next_in_bucklet
		end
		return c
	end
	
	# Add a new node at a given index
	protected fun store(index: Int, node: N)
	do
		# Store the item in the list
		if first == null then
			first = node
		else
			last.next = node
		end
		node.prev = last
		node.next = null
		last = node

		# Then store it in the array
                var next: nullable N = array[index]
		array[index] = node
		node.next_in_bucklet = next
		if next != null then next.prev_in_bucklet = node

		last_accessed_item = node.key
		last_accessed_node = node

		# Enlarge if needed
		var l = length
		l = (l + 5) * 3 / 2
		if l >= capacity then
			enlarge(l * 2)
		end
	end

	# Remove the node assosiated with the key
	protected fun remove_node(node: N)
	do
		# Remove the item in the list
		var prev = node.prev
		var next = node.next
		if prev != null then
			prev.next = next
		else
			first = next
		end
		if next != null then
			next.prev = prev
		else
			last = prev
		end

		# Remove the item in the array
		prev = node.prev_in_bucklet
		next = node.next_in_bucklet
		if prev != null then
			prev.next_in_bucklet = next
		else
			array[index_at(node.key)] = next
		end
		if next != null then
			next.prev_in_bucklet = prev
		end
		if prev != null and next != null then
			array[index_at(node.key)] = null
		end

		last_accessed_item = null

		length -= 1
	end

	init
	do
		self.capacity = 0		
		self.length = 0
		enlarge(0)
	end

	fun enlarge(cap: Int)
	do
		var old_cap = capacity
		# get a new capacity
		if cap < length + 1 then cap = length + 1
		if cap <= capacity then return
		capacity = cap
		last_accessed_item = null

		# get a new array
		var new_array = calloc_array(cap)
		array = new_array

		# clean the new array
		var i = cap - 1
		while i >=0 do
			new_array[i] = null
			i -= 1
		end

		if capacity <= old_cap then return

		# Reput items in the array
		var node = first
		while node != null do
			var index = index_at(node.key)
			# Then store it in the array
			var next = new_array[index]
			new_array[index] = node
			node.next_in_bucklet = next
			if next != null then next.prev_in_bucklet = node
			node = node.next
		end
	end

	redef fun iterator do return new HashSetIterator[E](self)

	redef fun clear
	do
		var i = capacity - 1
		while i >= 0 do
			array[i] = null
			i -= 1
		end
		length = 0
		first = null
		last = null
		last_accessed_item = null
	end

	redef fun add(item)
	do
		var i = index_at(item)
		var c = node_at_idx(i, item)
		if c != null then
			c.key = item
		else
			store(i,new HashSetNode[E](item))
			length += 1
		end
	end

	redef fun remove(item) 
	do 
		var i = index_at(item)
		var node = node_at_idx(i, item)
		if node == null then return
		remove_node(node)
	end

	# Without Iterator
	redef fun count(item)
	do
		var nb = 0
		var c = first
		while c != null do
			if c.key == item then nb += 1
			c = c.next
		end
		return nb
	end
end



class HashSetIterator[E: Object]
	super CollectionIterator[E]

	# The set to iterate on
	private var set: HashSet[E]

	# The position in the internal map storage
	var node: nullable HashSetNode[E]

	init(set: HashSet[E])
	do
		self.set = set
		self.node = set.first
	end


	redef fun has_next do return node != null

	redef fun current
	do
		return node.key
	end

	redef fun next
	do
		assert has_next: has_next
		node = node.next
	end

	redef fun rewind do node = set.first

	redef fun current=(item) do node.key = item

	redef fun delete
	do 
		assert has_next: has_next
		set.remove_node(node.as(not null))
	end
end
