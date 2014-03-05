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

# This module define several abstract collection classes.
module abstract_collection

import kernel

# The root of the collection hierarchy.
#
# Collections modelize finite groups of objects, called elements.
#
# The specific behavior and representation of collections is determined
# by the subclasses of the hierarchy.
#
# The main service of Collection is to provide a stable `iterator`
# method usable to retrieve all the elements of the collection.
#
# Additional services are provided.
# For an implementation point of view, Collection provide a basic
# implementation of these services using the `iterator` method.
# Subclasses often provide a more efficient implementation.
#
# Because of the `iterator` method, Collections instances can use
# the `for` control structure:
#
#         var x: Collection[U]
#         # ...
#         for u in x do
#             # u is a U
#             # ...
#         end
#
# that is equivalent with
#
#         var x: Collection[U]
#         # ...
#         var i = x.iterator
#         while i.is_ok do
#             var u = i.item # u is a U
#             # ...
#             i.next
#         end
interface Collection[E]
	# Get a new iterator on the collection.
	fun iterator: Iterator[E] is abstract

	# Is there no item in the collection?
	#
	#     assert [1,2,3].is_empty  == false
	#     assert [1..1[.is_empty   == true
	fun is_empty: Bool do return length == 0

	# Number of items in the collection.
	#
	#     assert [10,20,30].length == 3
	#     assert [20..30[.length   == 10
	fun length: Int
	do
		var nb = 0
		for i in self do nb += 1
		return nb
	end


	# Is `item` in the collection ?
	# Comparisons are done with ==
	#
	#     assert [1,2,3].has(2)    == true
	#     assert [1,2,3].has(9)    == false
	#     assert [1..5[.has(2)     == true
	#     assert [1..5[.has(9)     == false
	fun has(item: E): Bool
	do
		for i in self do if i == item then return true
		return false
	end

	# Is the collection contain only `item`?
	# Comparisons are done with ==
	# Return true if the collection is empty.
	#
	#     assert [1,1,1].has_only(1)         == true
	#     assert [1,2,3].has_only(1)         == false
	#     assert [1..1].has_only(1)          == true
	#     assert [1..3].has_only(1)          == false
	#     assert [3..3[.has_only(1)          == true # empty collection
	#
	# ENSURE `is_empty implies result == true`
	fun has_only(item: E): Bool
	do
		for i in self do if i != item then return false
		return true
	end

	# How many occurrences of `item` are in the collection?
	# Comparisons are done with ==
	#
	#    assert [10,20,10].count(10)         == 2
	fun count(item: E): Int
	do
		var nb = 0
		for i in self do if i == item then nb += 1
		return nb
	end

	# Return the first item of the collection
	#
	#    assert [1,2,3].first                == 1
	fun first: E
	do
		assert length > 0
		return iterator.item
	end

	# Is the collection contains all the elements of `other`?
	#
	#    assert [1,1,1].has_all([1])         == true
	#    assert [1,1,1].has_all([1,2])       == false
	#    assert [1,3,4,2].has_all([1..2])    == true
	#    assert [1,3,4,2].has_all([1..5])    == false
	fun has_all(other: Collection[E]): Bool
	do
		for x in other do if not has(x) then return false
		return true
	end
end

# Instances of the Iterator class generates a series of elements, one at a time.
# They are mainly used with collections.
interface Iterator[E]
	# The current item.
	# Require `is_ok`.
	fun item: E is abstract

	# Jump to the next item.
	# Require `is_ok`.
	fun next is abstract

	# Is there a current item ?
	fun is_ok: Bool is abstract
end

# A collection that contains only one item.
# Used to pass arguments by reference
class Container[E]
	super Collection[E]

	redef fun first do return _item

	redef fun is_empty do return false

	redef fun length do return 1

	redef fun has(an_item) do return _item == an_item

	redef fun has_only(an_item) do return _item == an_item

	redef fun count(an_item)
	do
		if _item == an_item then
			return 1
		else
			return 0
		end
	end

	redef fun iterator do return new ContainerIterator[E](self)

	# Create a new instance with a given initial value.
	init(e: E) do _item = e

	# The stored item
	readable writable var _item: E
end

# This iterator is quite stupid since it is used for only one item.
class ContainerIterator[E]
	super Iterator[E]
	redef fun item do return _container.item

	redef fun next do _is_ok = false

	init(c: Container[E]) do _container = c

	redef readable var _is_ok: Bool = true

	var _container: Container[E]
end

# Items can be removed from this collection
interface RemovableCollection[E]
	super Collection[E]
	# Remove all items
	fun clear is abstract

	# Remove an occucence of `item`
	fun remove(item: E) is abstract

	# Remove all occurences of `item`
	fun remove_all(item: E) do while has(item) do remove(item)
end

# Items can be added to these collections.
interface SimpleCollection[E]
	super RemovableCollection[E]
	# Add an item in a collection.
	# Ensure col.has(item)
	fun add(item: E) is abstract

	# Add each item of `coll`.
	fun add_all(coll: Collection[E]) do for i in coll do add(i)
end

# Abstract sets.
#
# Set is a collection without ducplicates (according to ==)
#      var s: Set[String] = new ArraySet[String]
#      var a = "Hello"
#      var b = "Hel" + "lo"
#      # ...
#      s.add(a)
#      assert s.has(b)      ==  true
interface Set[E: Object]
	super SimpleCollection[E]

	redef fun has_only(item)
	do
		var l = length
		if l == 1 then
			return has(item)
		else if l == 0 then
			return true
		else
			return false
		end
	end

	# Only 0 or 1
	redef fun count(item)
	do
		if has(item) then
			return 1
		else
			return 0
		end
	end

	# Synonym of remove since there is only one item
	redef fun remove_all(item) do remove(item)

	# Equality is defined on set and means that each set contains the same elements
	redef fun ==(other)
	do
		if not other isa Set[Object] then return false
		if other.length != length then return false
		return has_all(other)
	end

	# because of the law between `==` and `hash`, hash is redefined to be the sum of the hash of the elements
	redef fun hash
	do
		var res = 0
		for e in self do res += res.hash
		return res
	end
end

# MapRead are abstract associative collections: `key` -> `item`.
interface MapRead[K: Object, E]
	# Get the item at `key`.
	fun [](key: K): E is abstract

	# Get the item at `key` or null if `key` is not in the map.
	#
	#     var x = new HashMap[String, Int]
	#     x["four"] = 4
	#     assert x.get_or_null("four") == 4
	#     assert x.get_or_null("five") == null
	#
	# Note: use `has_key` and `[]` if you need the distinction bewteen a key associated with null, and no key.
	fun get_or_null(key: K): nullable E
	do
		if has_key(key) then return self[key]
		return null
	end

	# Get the item at `key` or return `default` if not in map
	fun get_or_default(key: K, default: E): E
	do
		if has_key(key) then return self[key]
		return default
	end

	# Depreciated alias for `keys.has`
	fun has_key(key: K): Bool do return self.keys.has(key)

	# Get a new iterator on the map.
	fun iterator: MapIterator[K, E] is abstract

	# Return the point of view of self on the values only.
	# Note that `self` and `values` are views on the same data;
	# therefore any modification of one is visible on the other.
	fun values: Collection[E] is abstract

	# Return the point of view of self on the keys only.
	# Note that `self` and `keys` are views on the same data;
	# therefore any modification of one is visible on the other.
	fun keys: Collection[K] is abstract

	# Is there no item in the collection?
	fun is_empty: Bool is abstract

	# Number of items in the collection.
	fun length: Int is abstract

	# Called by the underling implementation of `[]` to provide a default value when a `key` has no value
	# By default the behavior is to abort.
	#
	# Note: the value is returned *as is*, implementations may want to store the value in the map before returning it
	# @toimplement
	protected fun provide_default_value(key: K): E do abort
end

# Maps are associative collections: `key` -> `item`.
#
# The main operator over maps is [].
#
#     var map: Map[String, Int] = new ArrayMap[String, Int]
#     # ...
#     map["one"] = 1      # Associate 'one' to '1'
#     map["two"] = 2      # Associate 'two' to '2'
#     assert map["one"]             ==  1
#     assert map["two"]             ==  2
#
# Instances of maps can be used with the for structure
#
#     for key, value in map do
#         assert (key == "one" and value == 1) or (key == "two" and value == 2)
#     end
#
# The keys and values in the map can also be manipulated directly with the `keys` and `values` methods.
#
#     assert map.keys.has("one")    ==  true
#     assert map.keys.has("tree")   ==  false
#     assert map.values.has(1)      ==  true
#     assert map.values.has(3)      ==  false
#
interface Map[K: Object, E]
	super MapRead[K, E]
	# Set the`item` at `key`.
	fun []=(key: K, item: E) is abstract

	# Add each (key,value) of `map` into `self`.
	# If a same key exists in `map` and `self`, then the value in self is discarded.
	fun recover_with(map: Map[K, E])
	do
		var i = map.iterator
		while i.is_ok do
			self[i.key] = i.item
			i.next
		end
	end

	# Remove all items
	fun clear is abstract

	redef fun values: RemovableCollection[E] is abstract

	redef fun keys: RemovableCollection[K] is abstract
end

# Iterators for Map.
interface MapIterator[K: Object, E]
	# The current item.
	# Require `is_ok`.
	fun item: E is abstract

	# The key of the current item.
	# Require `is_ok`.
	fun key: K is abstract

	# Jump to the next item.
	# Require `is_ok`.
	fun next is abstract

	# Is there a current item ?
	fun is_ok: Bool is abstract

	# Set a new `item` at `key`.
	#fun item=(item: E) is abstract
end

# Iterator on a 'keys' point of view of a map
class MapKeysIterator[K: Object, V]
	super Iterator[K]
	# The original iterator
	var iterator: MapIterator[K, V]

	redef fun is_ok do return self.iterator.is_ok
	redef fun next do self.iterator.next
	redef fun item do return self.iterator.key
end

# Iterator on a 'values' point of view of a map
class MapValuesIterator[K: Object, V]
	super Iterator[V]
	# The original iterator
	var iterator: MapIterator[K, V]

	redef fun is_ok do return self.iterator.is_ok
	redef fun next do self.iterator.next
	redef fun item do return self.iterator.item
end

# Sequences are indexed collections.
# The first item is 0. The last is `length-1`.
interface SequenceRead[E]
	super Collection[E]
	# Get the first item.
	# Is equivalent with `self[0]`.
	redef fun first
	do
		assert not_empty: not is_empty
		return self[0]
	end

	# Return the index=th element of the sequence.
	# The first element is 0 and the last if `length-1`
	# If index is invalid, the program aborts
	fun [](index: Int): E is abstract

	# Get the last item.
	# Is equivalent with `self[length-1]`.
	fun last: E
	do
		assert not_empty: not is_empty
		return self[length-1]
	end

	# Return the index of the first occurrence of `item`.
	# Return -1 if `item` is not found
	# Comparison is done with ==
	fun index_of(item: E): Int
	do
		var i = iterator
		while i.is_ok do
			if i.item == item then return i.index
			i.next
		end
		return -1
	end

	redef fun iterator: IndexedIterator[E] is abstract

	# Two sequences are equals if they have the same items in the same order.
	redef fun ==(o)
	do
		if not o isa SequenceRead[nullable Object] then return false
		var l = length
		if o.length != l then return false
		var i = 0
		while i < l do
			if self[i] != o[i] then return false
			i += 1
		end
		return true
	end

	# because of the law between `==` and `hash`, hash is redefined to be the sum of the hash of the elements
	redef fun hash
	do
		var res = 0
		for e in self do res += res.hash
		return res
	end
end

# Sequence are indexed collection.
# The first item is 0. The last is `length-1`.
interface Sequence[E]
	super SequenceRead[E]
	super SimpleCollection[E]

	# Set the first item.
	# Is equivalent with `self[0] = item`.
	fun first=(item: E)
	do self[0] = item end

	# Set the last item.
	# Is equivalent with `self[length-1] = item`.
	fun last=(item: E) 
	do 
		var l = length
		if l > 0 then
			self[l-1] = item
		else
			self[0] = item
		end
	end

	# A synonym of `push`
	redef fun add(e) do push(e)

	# Add an item after the last.
	fun push(e: E) is abstract

	# Add each item of `coll` after the last.
	fun append(coll: Collection[E]) do for i in coll do push(i)

	# Remove the last item.
	fun pop: E is abstract

	# Add an item before the last.
	fun unshift(e: E) is abstract

	# Remove the first item.
	# The second item become the first.
	fun shift: E is abstract

	# Set the `item` at `index`.
	fun []=(index: Int, item: E) is abstract

	# Remove the item at `index` and shift all following elements
	fun remove_at(index: Int) is abstract
end

# Iterators on indexed collections.
interface IndexedIterator[E]
	super Iterator[E]
	# The index of the current item.
	fun index: Int is abstract
end

# Associative arrays that internally uses couples to represent each (key, value) pairs.
interface CoupleMap[K: Object, E]
	super Map[K, E]
	# Return the couple of the corresponding key
	# Return null if the key is no associated element
	protected fun couple_at(key: K): nullable Couple[K, E] is abstract

	redef fun [](key)
	do
		var c = couple_at(key)
		if c == null then
			return provide_default_value(key)
		else
			return c.second
		end
	end
end

# Iterator on CoupleMap
#
# Actually is is a wrapper around an iterator of the internal array of the map.
class CoupleMapIterator[K: Object, E]
	super MapIterator[K, E]
	redef fun item do return _iter.item.second
	
	#redef fun item=(e) do _iter.item.second = e

	redef fun key do return _iter.item.first

	redef fun is_ok do return _iter.is_ok

	redef fun next
	do 
		_iter.next
	end

	var _iter: Iterator[Couple[K,E]]

	init(i: Iterator[Couple[K,E]]) do _iter = i
end

# Some tools ###################################################################

# Two objects in a simple structure.
class Couple[F, S]

	# The first element of the couple.
	readable writable var _first: F

	# The second element of the couple.
	readable writable var _second: S

	# Create a new instance with a first and a second object.
	init(f: F, s: S)
	do
		_first = f
		_second = s
	end
end
