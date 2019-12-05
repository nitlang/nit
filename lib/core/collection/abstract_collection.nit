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

# Abstract collection classes and services.
#
# TODO specify the behavior on iterators when collections are modified.
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
# the `for` control structure.
#
# ~~~nitish
# var x: Collection[U]
# # ...
# for u in x do
#	# u is a U
#	# ...
# end
# ~~~
#
# that is equivalent with the following:
#
# ~~~nitish
# var x: Collection[U]
# # ...
# var i = x.iterator
# while i.is_ok do
#     var u = i.item # u is a U
#     # ...
#     i.next
# end
# ~~~
interface Collection[E]
	# Get a new iterator on the collection.
	fun iterator: Iterator[E] is abstract

	# Is there no item in the collection?
	#
	#     assert [1,2,3].is_empty  == false
	#     assert [1..1[.is_empty   == true
	fun is_empty: Bool
	is
		ensure(result == (length == 0))
	do
		return length == 0
	end

	# Alias for `not is_empty`.
	#
	# Some people prefer to have conditions grammatically easier to read.
	#
	#     assert [1,2,3].not_empty  == true
	#     assert [1..1[.not_empty   == false
	fun not_empty: Bool
	is
		ensure(result == (length != 0))
	do
		return not self.is_empty
	end

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
	#	  assert [3..3[.has(1)     == false # empty collection
	#
	# ENSURE `is_empty implies result == false`
	fun has(item: nullable Object): Bool
	is
		ensure(is_empty implies not result)
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
	fun has_only(item: nullable Object): Bool
	is
		ensure(is_empty implies result)
	do
		for i in self do if i != item then return false
		return true
	end

	# How many occurrences of `item` are in the collection?
	# Comparisons are done with ==
	#
	#     assert [10,20,10].count(10)         == 2
	# ENSURE `is_empty implies result == 0`
	fun count(item: nullable Object): Int
	is
		ensure(is_empty implies result == 0)
	do
		var nb = 0
		for i in self do if i == item then nb += 1
		return nb
	end

	# Return the first item of the collection
	#
	#     assert [1,2,3].first                == 1
	fun first: E
	is
		expect(not_empty)
	do
		return iterator.item
	end

	# Does the collection contain at least each element of `other`?
	#
	#     assert [1,3,4,2].has_all([1..2])    == true
	#     assert [1,3,4,2].has_all([1..5])    == false
	#
	# Repeated elements in the collections are not considered.
	#
	#     assert [1,1,1].has_all([1])         == true
	#     assert [1..5].has_all([1,1,1])      == true
	#
	# Note that the default implementation is general and correct for any lawful Collections.
	# It is memory-efficient but relies on `has` so may be CPU-inefficient for some kind of collections.
	fun has_all(other: Collection[nullable Object]): Bool
	do
		if is_same_instance(other) then return true
		var ol = other.length
		var  l = length
		if ol == 0 then return true
		if l == 0 then return false
		if ol == 1 then return has(other.first)
		for x in other do if not has(x) then return false
		return true
	end

	# Does the collection contain exactly all the elements of `other`?
	#
	# The same elements must be present in both `self` and `other`,
	# but the order of the elements in the collections are not considered.
	#
	#     assert [1..3].has_exactly([3,1,2]) == true  # the same elements
	#     assert [1..3].has_exactly([3,1])   == false # 2 is not in the array
	#     assert [1..2].has_exactly([3,1,2]) == false # 3 is not in the range
	#
	# Repeated elements must be present in both collections in the same amount.
	# So basically it is a multi-set comparison.
	#
	#     assert [1,2,3,2].has_exactly([1,2,2,3]) == true  # the same elements
	#     assert [1,2,3,2].has_exactly([1,2,3])   == false # more 2 in the first array
	#     assert [1,2,3].has_exactly([1,2,2,3])   == false # more 2 in the second array
	#
	# Note that the default implementation is general and correct for any lawful Collections.
	# It is memory-efficient but relies on `count` so may be CPU-inefficient for some kind of collections.
	fun has_exactly(other: Collection[nullable Object]): Bool
	do
		if length != other.length then return false
		for e in self do if self.count(e) != other.count(e) then return false
		return true
	end

	# Does the collection contain at least one element of `other`?
	#
	#     assert [1,3,4,2].has_any([1..10])    == true
	#     assert [1,3,4,2].has_any([5..10])    == false
	#
	# Note that the default implementation is general and correct for any lawful Collections.
	# It is memory-efficient but relies on `has` so may be CPU-inefficient for some kind of collections.
	fun has_any(other: Collection[nullable Object]): Bool
	do
		for o in other do
			if has(o) then return true
		end
		return false
	end
end

# Iterators generate a series of elements, one at a time.
#
# They are mainly used with collections and obtained from `Collection::iterator`.
interface Iterator[E]
	# The current item.
	# EXPECT `is_ok`.
	fun item: E is abstract, expect(is_ok)

	# Jump to the next item.
	# ENSURE `is_ok`.
	fun next is abstract, expect(is_ok)

	# Jump to the next item `step` times.
	#
	# ~~~
	# var i = [11, 22, 33, 44].iterator
	# assert i.item == 11
	# i.next_by 2
	# assert i.item == 33
	# ~~~
	#
	# `next_by` should be used instead of looping on `next` because is takes care
	# of stopping if the end of iteration is reached prematurely whereas a loop of
	# `next` will abort because of the precondition on `is_ok`.
	#
	# ~~~
	# i.next_by 100
	# assert not i.is_ok
	# ~~~
	#
	# If `step` is negative, this method aborts.
	# But specific subclasses can change this and do something more meaningful instead.
	#
	# EXPECT `is_ok`
	fun next_by(step: Int)
	is
		expect(is_ok)
	do
		while is_ok and step > 0 do
			next
			step -= 1
		end
	end

	# Is there a current item ?
	fun is_ok: Bool is abstract

	# Iterate over `self`
	fun iterator: Iterator[E] do return self

	# Pre-iteration hook.
	#
	# Used to inform `self` that the iteration is starting.
	# Specific iterators can use this to prepare some resources.
	#
	# Is automatically invoked at the beginning of `for` structures.
	#
	# Do nothing by default.
	fun start do end

	# Post-iteration hook.
	#
	# Used to inform `self` that the iteration is over.
	# Specific iterators can use this to free some resources.
	#
	# Is automatically invoked at the end of `for` structures.
	#
	# Do nothing by default.
	fun finish do end

	# A decorator around `self` that advance self a given number of steps instead of one.
	#
	# ~~~
	# var i = [11, 22, 33, 44, 55].iterator
	# var i2 = i.to_step(2)
	#
	# assert i2.item == 11
	# i2.next
	# assert i2.item == 33
	#
	# assert i.item == 33
	# ~~~
	fun to_step(step: Int): Iterator[E] do return new StepIterator[E](self, step)
end

# A basic helper class to specialize specific Iterator decorators
abstract class IteratorDecorator[E]
	super Iterator[E]

	# The underling iterator
	protected var real: Iterator[E]

	redef fun is_ok do return real.is_ok
	redef fun item do return real.item
	redef fun finish do real.finish
	redef fun next do real.next
	redef fun next_by(step) do real.next_by(step)
end

# A decorator that advance a given number of steps
private class StepIterator[E]
	super IteratorDecorator[E]
	var step: Int

	redef fun next do real.next_by(step)
	redef fun next_by(step) do real.next_by(step * self.step)
end

# An iterator that lazyly cache the current item.
#
# This class can be used as an helper to build simple iterator with a single and simplier `next_item` method.
# The only constraint is that `next_item` returns null on the last item, so `null` cannot be a valid element.
abstract class CachedIterator[E: Object]
	super Iterator[E]

	# Get the next item if any.
	# Returns null if there is no next item.
	fun next_item: nullable E is abstract

	# The last item effectively read.
	# `null` if on start, after a next of if no more items are available.
	protected var cache: nullable E = null

	# The current item, if any.
	# If not, the cache is effectively filled (with `next_item`).
	# Return `null` if there is no more elements.
	protected fun current_item: nullable E
	do
		var cache = self.cache
		if cache != null then return cache
		cache = next_item
		self.cache = cache
		return cache
	end

	redef fun item do return current_item.as(not null)

	redef fun is_ok do return current_item != null

	redef fun next do
		# If needed, fill the cache (an consume the current element)
		current_item
		# Empty the cache (so the next element will be read)
		cache = null
	end
end

# A collection that contains only one item.
#
# Used to pass arguments by reference.
#
# Also used when one want to give a single element when a full
# collection is expected
class Ref[E]
	super Collection[E]

	redef fun first do return item

	redef fun is_empty do return false

	redef fun length do return 1

	redef fun has(an_item) do return item == an_item

	redef fun has_only(an_item) do return item == an_item

	redef fun count(an_item)
	do
		if item == an_item then
			return 1
		else
			return 0
		end
	end

	redef fun iterator do return new RefIterator[E](self)

	# The stored item
	var item: E is writable
end

# This iterator is quite stupid since it is used for only one item.
private class RefIterator[E]
	super Iterator[E]
	redef fun item do return _container.item

	redef fun next do is_ok = false

	redef var is_ok = true

	var container: Ref[E]
end

# Items can be removed from this collection
interface RemovableCollection[E]
	super Collection[E]

	# Remove all items
	#
	#     var a = [1,2,3]
	#     a.clear
	#     assert a.length == 0
	#
	# ENSURE `is_empty`
	fun clear is abstract, ensure(is_empty)

	# Remove an occurrence of `item`
	#
	#     var a = [1,2,3,1,2,3]
	#     a.remove 2
	#     assert a == [1,3,1,2,3]
	fun remove(item: nullable Object) is abstract

	# Remove all occurrences of `item`
	#
	#     var a = [1,2,3,1,2,3]
	#     a.remove_all 2
	#     assert a == [1,3,1,3]
	fun remove_all(item: nullable Object) do while has(item) do remove(item)
end

# Items can be added to these collections.
interface SimpleCollection[E]
	super RemovableCollection[E]

	# Add `item` to this collection.
	#
	#     var a = [1,2]
	#     a.add 3
	#     assert a.has(3)  == true
	#     assert a.has(10) == false
	#
	# ENSURE self.has(item)
	fun add(item: E) is abstract, ensure(self.has(item))

	# Add each item of `coll`.
	#
	#     var a = [1,2]
	#     a.add_all([3..5])
	#     assert a.has(4)  == true
	#     assert a.has(10) == false
	# ENSURE `self.has_all(item)`
	fun add_all(coll: Collection[E])
	is
		ensure(self.has_all(coll))
	do
		for i in coll do add(i)
	end
end

# Abstract sets.
#
# Set is a collection without duplicates (according to `==`)
#
#      var s: Set[String] = new ArraySet[String]
#      var a = "Hello"
#      var b = "Hel" + "lo"
#      # ...
#      s.add(a)
#      assert s.has(b)      ==  true
interface Set[E]
	super SimpleCollection[E]
	super Cloneable

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
		if not other isa Set[nullable Object] then return false
		if other.length != length then return false
		return has_all(other)
	end

	# Because of the law between `==` and `hash`, `hash` is redefined to be the sum of the hash of the elements
	redef fun hash
	do
		# 23 is a magic number empirically determined to be not so bad.
		var res = 23 + length
		# Note: the order of the elements must not change the hash value.
		# So, unlike usual hash functions, the accumulator is not combined with itself.
		for e in self do
			if e != null then res += e.hash
		end
		return res
	end

	# Returns the union of this set with the `other` set
	fun union(other: Set[E]): Set[E]
	do
		var nhs = new_set
		nhs.add_all self
		nhs.add_all other
		return nhs
	end

	# Returns the intersection of this set with the `other` set
	fun intersection(other: Set[E]): Set[E]
	do
		var nhs = new_set
		for v in self do if other.has(v) then nhs.add(v)
		return nhs
	end

	redef fun clone do return union(self)

	# Returns a new instance of `Set`.
	#
	# Depends on the subclass, mainly used for copy services
	# like `union` or `intersection`.
	protected fun new_set: Set[E] is abstract
end

# MapRead are abstract associative collections: `key` -> `item`.
interface MapRead[K, V]
	# Get the item at `key`
	#
	#     var x = new HashMap[String, Int]
	#     x["four"] = 4
	#     assert x["four"] == 4
	#     # assert x["five"] #=> abort
	#
	# If the key is not in the map, `provide_default_value` is called (that aborts by default)
	# See `get_or_null` and `get_or_default` for safe variations.
	fun [](key: nullable Object): V is abstract

	# Get the item at `key` or null if `key` is not in the map.
	#
	#     var x = new HashMap[String, Int]
	#     x["four"] = 4
	#     assert x.get_or_null("four") == 4
	#     assert x.get_or_null("five") == null
	#
	# Note: use `has_key` and `[]` if you need the distinction between a key associated with null, and no key.
	fun get_or_null(key: nullable Object): nullable V
	do
		if has_key(key) then return self[key]
		return null
	end

	# Get the item at `key` or return `default` if not in map
	#
	#     var x = new HashMap[String, Int]
	#     x["four"] = 4
	#     assert x.get_or_default("four", 40) == 4
	#     assert x.get_or_default("five", 50) == 50
	#
	fun get_or_default(key: nullable Object, default: V): V
	do
		if has_key(key) then return self[key]
		return default
	end

	# Is there an item associated with `key`?
	#
	#     var x = new HashMap[String, Int]
	#     x["four"] = 4
	#     assert x.has_key("four") == true
	#     assert x.has_key("five") == false
	#
	# By default it is a synonymous to `keys.has` but could be redefined with a direct implementation.
	fun has_key(key: nullable Object): Bool do return self.keys.has(key)

	# Get a new iterator on the map.
	fun iterator: MapIterator[K, V] is abstract

	# Return the point of view of self on the values only.
	# Note that `self` and `values` are views on the same data;
	# therefore any modification of one is visible on the other.
	#
	#     var x = new HashMap[String, Int]
	#     x["four"] = 4
	#     assert x.values.has(4) == true
	#     assert x.values.has(5) == false
	fun values: Collection[V] is abstract

	# Return the point of view of self on the keys only.
	# Note that `self` and `keys` are views on the same data;
	# therefore any modification of one is visible on the other.
	#
	#     var x = new HashMap[String, Int]
	#     x["four"] = 4
	#     assert x.keys.has("four") == true
	#     assert x.keys.has("five") == false
	fun keys: Collection[K] is abstract

	# Is there no item in the collection?
	#
	#     var x = new HashMap[String, Int]
	#     assert x.is_empty  == true
	#     x["four"] = 4
	#     assert x.is_empty  == false
	fun is_empty: Bool is abstract, ensure(result == (length == 0))

	# Alias for `not is_empty`.
	#
	# Some people prefer to have conditions grammatically easier to read.
	#
	#     var map = new HashMap[String, Int]
	#     assert map.not_empty == false
	#     map["one"] = 1
	#     assert map.not_empty == true
	fun not_empty: Bool
	is
		ensure(result == (length != 0))
	do
		return not self.is_empty
	end

	# Number of items in the collection.
	#
	#     var x = new HashMap[String, Int]
	#     assert x.length  == 0
	#     x["four"] = 4
	#     assert x.length  == 1
	#     x["five"] = 5
	#     assert x.length  == 2
	fun length: Int is abstract

	# Called by the underling implementation of `[]` to provide a default value when a `key` has no value
	# By default the behavior is to abort.
	#
	# Note: the value is returned *as is*, implementations may want to store the value in the map before returning it
	# @toimplement
	protected fun provide_default_value(key: nullable Object): V do abort

	# Does `self` and `other` have the same keys associated with the same values?
	#
	# ~~~
	# var a = new HashMap[String, Int]
	# var b = new ArrayMap[Object, Numeric]
	# assert a == b
	# a["one"] = 1
	# assert a != b
	# b["one"] = 1
	# assert a == b
	# b["one"] = 2
	# assert a != b
	# ~~~
	redef fun ==(other)
	do
		if not other isa MapRead[nullable Object, nullable Object] then return false
		if other.length != self.length then return false
		for k, v in self do
			if not other.has_key(k) then return false
			if other[k] != v then return false
		end
		return true
	end

	# A hashcode based on the hashcode of the keys and the values.
	#
	# ~~~
	# var a = new HashMap[String, Int]
	# var b = new ArrayMap[Object, Numeric]
	# a["one"] = 1
	# b["one"] = 1
	# assert a.hash == b.hash
	# ~~~
	redef fun hash
	do
		var res = length
		for k, v in self do
			if k != null then res += k.hash * 7
			if v != null then res += v.hash * 11
		end
		return res
	end
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
interface Map[K, V]
	super MapRead[K, V]

	# Set the `value` at `key`.
	#
	# Values can then get retrieved with `[]`.
	#
	#     var x = new HashMap[String, Int]
	#     x["four"] = 4
	#     assert x["four"]   == 4
	#
	# If the key was associated with a value, this old value is discarded
	# and replaced with the new one.
	#
	#     x["four"] = 40
	#     assert x["four"]         == 40
	#     assert x.values.has(4)   == false
	#
	fun []=(key: K, value: V) is abstract, ensure(self[key] == value)

	# Add each (key,value) of `map` into `self`.
	# If a same key exists in `map` and `self`, then the value in self is discarded.
	#
	#     var x = new HashMap[String, Int]
	#     x["four"] = 4
	#     x["five"] = 5
	#     var y = new HashMap[String, Int]
	#     y["four"] = 40
	#     y["nine"] = 90
	#     x.add_all y
	#     assert x["four"]  == 40
	#     assert x["five"]  == 5
	#     assert x["nine"]  == 90
	fun add_all(map: MapRead[K, V])
	do
		var i = map.iterator
		while i.is_ok do
			self[i.key] = i.item
			i.next
		end
	end

	# Alias for `add_all`
	fun recover_with(map: MapRead[K, V]) is deprecated do add_all(map)

	# Remove all items
	#
	#     var x = new HashMap[String, Int]
	#     x["four"] = 4
	#     x.clear
	#     assert x.keys.has("four") == false
	#
	# ENSURE `is_empty`
	fun clear is abstract, ensure(is_empty)

	redef fun values: RemovableCollection[V] is abstract

	redef fun keys: RemovableCollection[K] is abstract
end

# Iterators for Map.
interface MapIterator[K, V]
	# The current item.
	# ENSURE `is_ok`.
	fun item: V is abstract, expect(is_ok)

	# The key of the current item.
	# EXPECT `is_ok`.
	fun key: K is abstract, expect(is_ok)

	# Jump to the next item.
	# EXPECT `is_ok`.
	fun next is abstract, expect(is_ok)

	# Is there a current item ?
	fun is_ok: Bool is abstract

	# Set a new `item` at `key`.
	#fun item=(item: E) is abstract

	# Pre-iteration hook.
	#
	# Used to inform `self` that the iteration is starting.
	# Specific iterators can use this to prepare some resources.
	#
	# Is automatically invoked at the beginning of `for` structures.
	#
	# Do nothing by default.
	fun start do end

	# Post-iteration hook.
	#
	# Used to inform `self` that the iteration is over.
	# Specific iterators can use this to free some resources.
	#
	# Is automatically invoked at the end of `for` structures.
	#
	# Do nothing by default.
	fun finish do end
end

# Iterator on a 'keys' point of view of a map
class MapKeysIterator[K, V]
	super Iterator[K]
	# The original iterator
	var original_iterator: MapIterator[K, V]

	redef fun is_ok do return self.original_iterator.is_ok
	redef fun next do self.original_iterator.next
	redef fun item do return self.original_iterator.key
end

# Iterator on a 'values' point of view of a map
class MapValuesIterator[K, V]
	super Iterator[V]
	# The original iterator
	var original_iterator: MapIterator[K, V]

	redef fun is_ok do return self.original_iterator.is_ok
	redef fun next do self.original_iterator.next
	redef fun item do return self.original_iterator.item
end

# Sequences are indexed collections.
# The first item is 0. The last is `length-1`.
#
# The order is the main caracteristic of sequence
# and all concrete implementation of sequences are basically interchangeable.
interface SequenceRead[E]
	super Collection[E]

	# Get the first item.
	# Is equivalent with `self[0]`.
	#
	#     var a = [1,2,3]
	#     assert a.first   == 1
	#
	# EXPECT `not_empty`
	redef fun first
	do
		return self[0]
	end

	# Return the index-th element of the sequence.
	# The first element is 0 and the last is `length-1`
	# If index is invalid, the program aborts
	#
	#     var a = [10,20,30]
	#     assert a[0]   == 10
	#     assert a[1]   == 20
	#     assert a[2]   == 30
	#
	# REQUIRE `index >= 0 and index < length`
	fun [](index: Int): E is abstract, expect(index >= 0 and index < length)

	# Return the index-th element but wrap
	#
	# Whereas `self[]` requires the index to exists, the `modulo` accessor automatically
	# wraps overbound and underbouds indexes.
	#
	# ~~~
	# var a = [10,20,30]
	# assert a.modulo(1) == 20
	# assert a.modulo(3) == 10
	# assert a.modulo(-1) == 30
	# assert a.modulo(-10) == 30
	# ~~~
	#
	# EXPECT `not_empty`
	# ENSURE `result == self[modulo_index(index)]`
	fun modulo(index: Int): E
	is
		expect(not_empty)
		ensure(result == self[modulo_index(index)])
	do
		return self[modulo_index(index)]
	end

	# Returns the real index for a modulo index.
	#
	# ~~~
	# var a = [10,20,30]
	# assert a.modulo_index(1) == 1
	# assert a.modulo_index(3) == 0
	# assert a.modulo_index(-1) == 2
	# assert a.modulo_index(-10) == 2
	# ~~~
	#
	# EXPECT `not_empty`
	fun modulo_index(index: Int): Int
	is
		expect(not_empty)
	do
		var length = self.length
		if index >= 0 then
			return index % length
		else
			return length - (-1 - index) % length - 1
		end
	end

	# Try to get an element, return `null` if the `index` is invalid.
	#
	# ~~~
	# var a = [10,20,30]
	# assert a.get_or_null(1) == 20
	# assert a.get_or_null(3) == null
	# assert a.get_or_null(-1) == null
	# assert a.get_or_null(-10) == null
	# ~~~
	fun get_or_null(index: Int): nullable E
	do
		if index >= 0 and index < length then return self[index]
		return null
	end

	# Try to get an element, return `default` if the `index` is invalid.
	#
	# ~~~
	# var a = [10,20,30]
	# assert a.get_or_default(1, -1) == 20
	# assert a.get_or_default(3, -1) == -1
	# assert a.get_or_default(-1, -1) == -1
	# assert a.get_or_default(-10, -1) == -1
	# ~~~
	fun get_or_default(index: Int, default: E): E
	do
		if index >= 0 and index < length then return self[index]
		return default
	end

	# Get the last item.
	# Is equivalent with `self[length-1]`.
	#
	#     var a = [1,2,3]
	#     assert a.last   == 3
	#
	# EXPECT `not_empty`
	fun last: E
	is
		expect(not_empty)
	do
		return self[length-1]
	end

	# The index of the first occurrence of `item`.
	# Return -1 if `item` is not found.
	# Comparison is done with `==`.
	#
	#     var a = [10,20,30,10,20,30]
	#     assert a.index_of(20)   == 1
	#     assert a.index_of(40)   == -1
	fun index_of(item: nullable Object): Int do return index_of_from(item, 0)

	# The index of the last occurrence of `item`.
	# Return -1 if `item` is not found.
	# Comparison is done with `==`.
	#
	#     var a = [10,20,30,10,20,30]
	#     assert a.last_index_of(20)   == 4
	#     assert a.last_index_of(40)   == -1
	fun last_index_of(item: nullable Object): Int do return last_index_of_from(item, length-1)

	# The index of the first occurrence of `item`, starting from pos.
	# Return -1 if `item` is not found.
	# Comparison is done with `==`.
	#
	#     var a = [10,20,30,10,20,30]
	#     assert a.index_of_from(20, 3)   == 4
	#     assert a.index_of_from(20, 4)   == 4
	#     assert a.index_of_from(20, 5)   == -1
	fun index_of_from(item: nullable Object, pos: Int): Int
	do
		var p = 0
		var i = iterator
		while i.is_ok do
			if p>=pos and i.item == item then return i.index
			i.next
			p += 1
		end
		return -1
	end

	# The index of the last occurrence of `item` starting from `pos` and decrementing.
	# Return -1 if `item` is not found.
	# Comparison is done with `==`.
	#
	#     var a = [10,20,30,10,20,30]
	#     assert a.last_index_of_from(20, 2)   == 1
	#     assert a.last_index_of_from(20, 1)   == 1
	#     assert a.last_index_of_from(20, 0)   == -1
	fun last_index_of_from(item: nullable Object, pos: Int): Int do
		var i = pos
		while i >= 0 do
			if self[i] == item then return i
			i -= 1
		end
		return -1
	end

	# Two sequences are equals if they have the same items in the same order.
	#
	#     var a = new List[Int]
	#     a.add(1)
	#     a.add(2)
	#     a.add(3)
	#     assert a == [1,2,3]
	#     assert a != [1,3,2]
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

	# Because of the law between `==` and `hash`, `hash` is redefined to be the sum of the hash of the elements
	redef fun hash
	do
		# The 17 and 2/3 magic numbers were determined empirically.
		# Note: the standard hash functions djb2, sbdm and fnv1 were also
		# tested but were comparable (or worse).
		var res = 17 + length
		for e in self do
			res = res * 3 / 2
			if e != null then res += e.hash
		end
		return res
	end

	redef fun iterator: IndexedIterator[E] is abstract

	# Gets a new Iterator starting at position `pos`
	#
	#     var iter = [10,20,30,40,50].iterator_from(2)
	#     assert iter.to_a == [30, 40, 50]
	fun iterator_from(pos: Int): IndexedIterator[E]
	do
		var res = iterator
		while pos > 0 and res.is_ok do
			res.next
			pos -= 1
		end
		return res
	end

	# Gets an iterator starting at the end and going backwards
	#
	#     var reviter = [1,2,3].reverse_iterator
	#     assert reviter.to_a == [3,2,1]
	fun reverse_iterator: IndexedIterator[E] is abstract

	# Gets an iterator on the chars of self starting from `pos`
	#
	#     var reviter = [10,20,30,40,50].reverse_iterator_from(2)
	#     assert reviter.to_a == [30,20,10]
	fun reverse_iterator_from(pos: Int): IndexedIterator[E]
	do
		var res = reverse_iterator
		while pos > 0 and res.is_ok do
			res.next
			pos -= 1
		end
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
	#
	#     var a = [1,2,3]
	#     a.first = 10
	#     assert a == [10,2,3]
	fun first=(item: E)
	is
		ensure(self.first == item)
	do
		self[0] = item
	end

	# Set the last item.
	# Is equivalent with `self[length-1] = item`.
	#
	#     var a = [1,2,3]
	#     a.last = 10
	#     assert a == [1,2,10]
	#
	# If the sequence is empty, `last=` is equivalent with `self[0]=` (thus with `first=`)
	#
	#     var b = new Array[Int]
	#     b.last = 10
	#     assert b == [10]
	fun last=(item: E)
	is
		ensure(self[length-1] == item)
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

	# Add an item after the last one.
	#
	#     var a = [1,2,3]
	#     a.push(10)
	#     a.push(20)
	#     assert a  == [1,2,3,10,20]
	fun push(e: E) is abstract, ensure(self[length-1] == e)

	# Add each item of `coll` after the last.
	#
	#     var a = [1,2,3]
	#     a.append([7..9])
	#     assert a  == [1,2,3,7,8,9]
	#
	# Alias of `add_all`
	fun append(coll: Collection[E]) do add_all(coll)

	# Remove the last item.
	#
	#     var a = [1,2,3]
	#     assert a.pop  == 3
	#     assert a.pop  == 2
	#     assert a == [1]
	#
	# EXPECT `not_empty`
	fun pop: E is abstract, expect(not_empty)

	# Add an item before the first one.
	#
	#     var a = [1,2,3]
	#     a.unshift(10)
	#     a.unshift(20)
	#     assert a  == [20,10,1,2,3]
	fun unshift(e: E) is abstract, ensure(self.first == e)

	# Add all items of `coll` before the first one.
	#
	#     var a = [1,2,3]
	#     a.prepend([7..9])
	#     assert a  == [7,8,9,1,2,3]
	#
	# Alias of `insert_at(coll, 0)`
	fun prepend(coll: Collection[E]) do insert_all(coll, 0)

	# Remove the first item.
	# The second item thus become the first.
	#
	#     var a = [1,2,3]
	#     assert a.shift  == 1
	#     assert a.shift  == 2
	#     assert a == [3]
	#
	# EXPECT `not_empty`
	fun shift: E is abstract, expect(not_empty)

	# Set the `item` at `index`.
	#
	#     var a = [10,20,30]
	#     a[1] = 200
	#     assert a  == [10,200,30]
	#
	# like with `[]`, index should be between `0` and `length-1`
	# However, if `index==length`, `[]=` works like `push`.
	#
	#     a[3] = 400
	#     assert a  == [10,200,30,400]
	#
	# EXPECT `index >= 0 and index <= length`
	fun []=(index: Int, item: E) is abstract, expect(index >= 0 and index <= length)

	# Set the index-th element but wrap
	#
	# Whereas `self[]=` requires the index to exists, the `modulo` accessor automatically
	# wraps overbound and underbouds indexes.
	#
	# ~~~
	# var a = [10,20,30]
	# a.modulo(1) = 200
	# a.modulo(3) = 100
	# a.modulo(-1) = 300
	# a.modulo(-10) = 301
	# assert a == [100, 200, 301]
	# ~~~
	#
	# EXPECT `not_empty`
	# ENSURE `self[modulo_index(index)] == value`
	fun modulo=(index: Int, value: E)
	is
		expect(not_empty)
		ensure(self[modulo_index(index)] == value)
	do
		self[modulo_index(index)] = value
	end

	# Insert an element at a given position, following elements are shifted.
	#
	#     var a = [10, 20, 30, 40]
	#     a.insert(100, 2)
	#     assert a      ==  [10, 20, 100, 30, 40]
	#
	# EXPECT `index >= 0 and index <= length`
	# ENSURE `self[index] == item`
	fun insert(item: E, index: Int) is abstract, expect(index >= 0 and index <= length), ensure(self[index] == item)

	# Insert all elements at a given position, following elements are shifted.
	#
	#     var a = [10, 20, 30, 40]
	#     a.insert_all([100..102], 2)
	#     assert a      ==  [10, 20, 100, 101, 102, 30, 40]
	#
	# EXPECT `index >= 0 and index <= length`
	# ENSURE `self[index] == coll.first`
	fun insert_all(coll: Collection[E], index: Int)
	is
		expect(index >= 0 and index <= length)
		ensure(self[index] == coll.first)
	do
		if index == length then
			add_all(coll)
		end
		for c in coll do
			insert(c, index)
			index += 1
		end
	end

	# Remove the item at `index` and shift all following elements
	#
	#     var a = [10,20,30]
	#     a.remove_at(1)
	#     assert a  == [10,30]
	#
	# EXPECT `index >= 0 and index < length`
	fun remove_at(index: Int) is abstract, expect(index >= 0 and index < length)

	# Rotates the elements of self once to the left
	#
	# ~~~nit
	# var a = [12, 23, 34, 45]
	# a.rotate_left
	# assert a == [23, 34, 45, 12]
	# ~~~
	fun rotate_left do
		var fst = shift
		push fst
	end

	# Rotates the elements of self once to the right
	#
	# ~~~nit
	# var a = [12, 23, 34, 45]
	# a.rotate_right
	# assert a == [45, 12, 23, 34]
	# ~~~
	fun rotate_right do
		var lst = pop
		unshift lst
	end
end

# Iterators on indexed collections.
interface IndexedIterator[E]
	super Iterator[E]
	# The index of the current item.
	fun index: Int is abstract
end

# Associative arrays that internally uses couples to represent each (key, value) pairs.
# This is an helper class that some specific implementation of Map may implements.
interface CoupleMap[K, V]
	super Map[K, V]

	# Return the couple of the corresponding key
	# Return null if the key is no associated element
	protected fun couple_at(key: nullable Object): nullable Couple[K, V] is abstract

	# Return a new iteralot on all couples
	# Used to provide `iterator` and others
	protected fun couple_iterator: Iterator[Couple[K,V]] is abstract

	redef fun iterator do return new CoupleMapIterator[K,V](couple_iterator)

	redef fun [](key)
	do
		var c = couple_at(key)
		if c == null then
			return provide_default_value(key)
		else
			return c.second
		end
	end

	redef fun has_key(key) do return couple_at(key) != null
end

# Iterator on CoupleMap
#
# Actually it is a wrapper around an iterator of the internal array of the map.
private class CoupleMapIterator[K, V]
	super MapIterator[K, V]
	redef fun item do return _iter.item.second

	#redef fun item=(e) do _iter.item.second = e

	redef fun key do return _iter.item.first

	redef fun is_ok do return _iter.is_ok

	redef fun next
	do
		_iter.next
	end

	var iter: Iterator[Couple[K,V]]
end

# Some tools ###################################################################

# Two objects in a simple structure.
class Couple[F, S]

	# The first element of the couple.
	var first: F is writable

	# The second element of the couple.
	var second: S is writable
end
