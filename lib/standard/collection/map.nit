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

module map

import abstract_collection
import kernel

# IterableMap is the root of all iterable class on two elements.
#
# Instances of this class offers an iterator method.
# 
# Iterable instances can use the "for" structure:
#         var x: IterableMap[K, V]
#                  ...
#                  for k, v in x do
#                          #  k is a K
#	           #  v is a V
#                          ...
#                  end
#  that is equivalent with
#                  var x: IterableMap[K, V]
#                  ...
#                  var i = x.iterator
#                  while i.has_next do
#                          var k = i.current_key #  k is a K
#                          var v = i.current #  v is a V
#                          ...
#                          i.next
#                  end
# 
# Iterable can be iterated on all elements of the class using en closure thanks to an iterator.
interface IterableMap[K: Object, V]

        # Get a new initerator of the class
        fun iterator: MapIterator[K, V] is abstract

        # Iterate over each element of the collection using a closure thanks to iterator
        fun iterate 
                !each(k: K, e: V)
        do
                var i = iterator
                while i.has_next do
                        each(i.current_key, i.current)
                        i.next
                end
        end

end

# Instances of the MapIterator class generates a series of elements, one at a time and can return the current key of the curretn element.
# They are mainly used with Map.
interface MapIterator[K: Object, V]
        
	# Is there a next item ?
	fun has_next: Bool is abstract

	# Jump to the next item
	# Require has_next
	fun next is abstract

	# The current item
	# Require has_next
	fun current: V is abstract

	# The current key
	# Require has_next
	fun current_key: K is abstract

	# Restart from begin
	fun rewind is abstract
end

interface TraversableMap[K: Object, V]
	super IterableMap[K, V]

	# Return the item at 'key'
 	fun [](key: K) : V is abstract

	# Is the map contains all 'keys' ?
	# Comparisons are done using ==
	fun has_all_keys(keys: Iterable[K]): Bool
	do
		for k in keys do if not has_key(k) then return false
		return true
	end

	# Is the map contains all 'values' ?
	# Comparisons are done using ==
	fun has_all_values(values: Iterable[V]): Bool
	do
		for v in values do if not has_value(v) then return false
		return true
	end

	# Is 'key' in the map ?
	# Comparisons are done using ==
	fun has_key(key: K): Bool
	do
		for k in self.keys do if k == key then return true
		return false
	end

	# Is 'value' in the map ?
	# Comparisons are done using ==
	fun has_value(value: V): Bool
	do
		for v in self.values do if v == value then return true
		return false
	end

	# Is the map contains all 'keys' and only 'keys'
	# Comparisons are done using ==
	fun has_only_keys(keys: Iterable[K]): Bool
	do
		var size = 0
		for i in keys do
			size += 1
		end
		
		if size != length then return false
		if not has_all_keys(keys) then return false
		return true
	end

	# Is the map contains all 'values' and only 'values'
	# Comparisons are done using ==
	fun has_only_values(values: Iterable[V]): Bool
	do
		var size = 0
		for i in values do
			size += 1
		end
		
		if size != length then return false
		if not has_all_values(values) then return false
		return true
	end

	# Is there no item in the map ?
	fun is_empty: Bool do return length == 0

	# Number of item in the map
	fun length: Int
	do
		var nb = 0
		for k in self.keys do nb += 1
		return nb
	end
	
	# How many occurences of 'items' are in the map ?
	fun count(item: V): Int
	do
		var nb = 0
		for v in self.values do if v == item then nb+=1
		return nb
	end

	# Returns an iterator on 'keys'
	fun keys : Traversable[K] is abstract

	# Returns an iterator on 'values'
	fun values : Traversable[V] is abstract
end

class ReadOnlyMap[K: Object, V]
        super TraversableMap[K, V]

	private var map: TraversableMap[K, V]

	# Initialize the proxy with the encapsulated class
	init(map: TraversableMap[K, V])
	do
		self.map = map
	end

 	redef fun [](key) do return map[key]

	redef fun has_all_keys(keys) do return map.has_all_keys(keys)

	redef fun has_all_values(values) do return map.has_all_values(values)

	redef fun has_key(key) do return map.has_key(key)

	redef fun has_value(value) do return map.has_value(value)

	redef fun has_only_keys(keys) do return map.has_only_keys(keys)

	redef fun has_only_values(values) do return map.has_only_values(values)

	redef fun is_empty do return map.is_empty

	redef fun length do return map.length

	redef fun keys do return map.keys

	redef fun values do return map.values

	redef fun count(item) do return map.count(item)
end

class Map[K: Object, V]
	super TraversableMap[K, V]

	# Set the 'value' as 'key'
	fun []=(key: K, value: V) is abstract

	# Clear the map
	fun clear do remove_all_keys(self.keys)

	# Remove the 'item' at 'key'
	fun remove_at(key: K) is abstract

	# Remove the first occurence of 'item'
	fun remove_first_value(value: V) is abstract

	# Remove the 'item'
	fun remove_value(value: V)
	do
		while has_value(value) do
			remove_first_value(value)
		end
	end

	# Remove all 'values'from the map
	fun remove_all_values(values: Iterable[V]) do for v in values do remove_value(v)

	# Remove all 'keys' and associated item from the map
	fun remove_all_keys(keys: Iterable[K]) do for k in keys do remove_at(k)

	# Return a read only proxy of the map
	fun to_read_only: ReadOnlyMap[K, V] do return new ReadOnlyMap[K, V](self)
end
