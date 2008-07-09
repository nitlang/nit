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

# This module define several abtract collection classes.
package abstract_collection

import kernel

# The root of the collection hierarchy.
#
# Instances of this class offers an iterator method.
#
# Colections instances can use the "for" structure:
#	  var x: Collection[U]
#         ...
#         for u in x do
#             # u is a U
#             ...
#         end
# that is equivalent with
#         var x: Collection[U]
#         ...
#         var i = x.iterator
#         while i.is_ok do
#             var u = i.item # u is a U
#             ...
#             i.next
#         end
#
# This abstract class implements its others methods with an iterator.
# Subclasses may redefine them with an efficient implementation.
class Collection[E]
	# Get a new iterator on the collection.
	meth iterator: Iterator[E] is abstract

	# Is there no item in the collection ?
	meth is_empty: Bool is abstract 

	# Number of items in the collection.
	meth length: Int is abstract

	# Is `item' in the collection ?
	# Comparaisons are done with ==
	meth has(item: E): Bool is abstract

	# Is the collection contain only `item' ?
	# Comparaisons are done with ==
	# Return true if the collection is empty.
	meth has_only(item: E): Bool is abstract

	# How many occurences of `item' are in the collection ?
	# Comparaisons are done with ==
	meth count(item: E): Int is abstract

	# Return one the item of the collection
	meth first: E is abstract
end

# Naive implementation of collections method
# You only have to define iterator!
class NaiveCollection[E: Object]
special Collection[E]
	redef meth is_empty do return length == 0

	redef meth length
	do
		var nb = 0
		for i in self do nb += nb
		return nb
	end

	redef meth has(item)
	do
		for i in self do if i == item then return true
		return false
	end

	redef meth has_only(item)
	do
		for i in self do if i != item then return false
		return true
	end

	redef meth count(item)
	do
		var nb = 0
		for i in self do if i == item then nb += 1
		return nb
	end

	redef meth first
	do
		assert length > 0
		return iterator.item
	end
end

# Instances of the Iterator class generates a series of elements, one at a time.
# They are mainly used with collections.
class Iterator[E]
	# The current item.
	# Require `is_ok'.
	meth item: E is abstract

	# Jump to the next item.
	# Require `is_ok'.
	meth next is abstract

	# Is there a current item ?
	meth is_ok: Bool is abstract
end

# A collection that contains only one item.
class Container[E]
special Collection[E]

	redef meth first do return _item

	redef meth is_empty do return false

	redef meth length do return 1

	redef meth has(an_item) do return _item == an_item

	redef meth has_only(an_item) do return _item == an_item

	redef meth count(an_item)
	do
		if _item == an_item then
			return 1
		else
			return 0
		end
	end

	redef meth iterator do return new ContainerIterator[E](self)

	# Create a new instance with a given initial value.
	init(e: E) do _item = e

	# The stored item
	readable writable attr _item: E
end

# This iterator is quite stupid since it is used for only one item.
class ContainerIterator[E]
special Iterator[E]
	redef meth item do return _container.item

	redef meth next do _is_ok = false

	init(c: Container[E]) do _container = c

	redef readable attr _is_ok: Bool = true

	attr _container: Container[E]
end

# Items can be removed from this collection
class RemovableCollection[E]
special Collection[E]
	# Remove all items
	meth clear is abstract

	# Remove an occucence of `item'
	meth remove(item: E) is abstract

	# Remove all occurences of `item'
	meth remove_all(item: E) do while has(item) do remove(item)
end

# Items can be added to these collections.
class SimpleCollection[E]
special RemovableCollection[E]
	# Add an item in a collection.
	# Ensure col.has(item)
	meth add(item: E) is abstract

	# Add each item of `coll`.
	meth add_all(coll: Collection[E]) do if coll != null then for i in coll do add(i)
end

# Abstract sets.
#
# Set contains contains only one element with the same value (according to =).
#    var s : Set[E]
#    var a = "Hello"
#    var b = "Hello"
#    ...
#    s.add(a)
#    s.has(b) # --> true
class Set[E]
special SimpleCollection[E]

	redef meth has_only(item)
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
	redef meth count(item)
	do
		if has(item) then
			return 1
		else
			return 0
		end
	end

	# Synonym of remove since there is only one item
	redef meth remove_all(item) do remove(item)
end

# Maps are associative collections: `key' -> `item'.
#
# The main operator over maps is [].
#
#     var map: Map[U, V]
#     ...
#     map[u1] = v1      # Associate 'v1' to 'u1'
#     map[u2] = v2      # Associate 'v2' to 'u2'
#     map[u1]            # -> v1
#     map[u2]            # -> v2
#     map.has_key(u1)    # -> true
#     map.has_key(u3)    # -> false
class Map[K, E]
special RemovableCollection[E]
	# Get the item at `key'.    
	meth [](key: K): E is abstract

	# Set the`item' at `key'.
	meth []=(key: K, item: E) is abstract

	# Is there an item at `key'.
	meth has_key(key: K): Bool is abstract

	# Remove the item at `key'
	meth remove_at(key: K) is abstract

	# Add each (key,value) of `map' into `self'.
	# If a same key exists in `map' and `self', then the value in self is discarded.
	meth recover_with(map: Map[K, E])
	do
		var i = map.iterator
		while i.is_ok do
			self[i.key] = i.item
			i.next
		end
	end

	redef meth iterator: MapIterator[K, E] is abstract
end

# Iterators for Map.
class MapIterator[K, E]
special Iterator[E]
	# The key of the current item.
	meth key: K is abstract

	# Set a new `item' at `key'.
	meth item=(item: E) is abstract
end

# Indexed collection are ordoned collections.
# The first item is 0. The last is `length'-1.
class IndexedCollection[E]
special Map[Int, E]
special SimpleCollection[E]
	# Get the first item.
	# Is equivalent with `self'[0].
	redef meth first 
	do 
		assert not_empty: not is_empty
		return self[0] 
	end
	
	# Set the first item.
	# Is equivalent with `self'[0] = `item'.
	meth first=(item: E)
	do self[0] = item end

	# Get the last item.
	# Is equivalent with `self'[`length'-1].
	meth last: E
	do 
		assert not_empty: not is_empty
		return self[length-1] 
	end

	# Set the last item.
	# Is equivalent with `self'[length-1] = `item'.
	meth last=(item: E) 
	do 
		var l = length
		if l > 0 then
			self[l-1] = item
		else
			self[0] = item
		end
	end

	# A synonym of `push'
	redef meth add(e) do push(e)

	# Add an item after the last.
	meth push(e: E) is abstract

	# Add each item of `coll` after the last.
	meth append(coll: Collection[E]) do if coll != null then for i in coll do push(i)

	# Remove the last item.
	meth pop: E is abstract

	# Add an item before the last.
	meth unshift(e: E) is abstract

	# Remove the first item.
	# The second item become the first.
	meth shift: E is abstract

	# Return the index of the first occurence of `item'.
	# Return -1 if `item' is not found
	meth index_of(item: E): Int
	do
		var i = iterator
		while i.is_ok do
			if i.item == item then return i.index
			i.next
		end
		return -1
	end

	redef meth iterator: IndexedIterator[E] is abstract
end

# Iterators on indexed collections.
class IndexedIterator[E]
special MapIterator[Int, E]
	# The index of the current item.
	meth index: Int is abstract

	# A synonym of index.
	redef meth key do return index
end

# Associatives arrays that internally uses couples to represent each (key, value) pairs.
class CoupleMap[K, E]
special Map[K, E]
	# Return the couple of the corresponding key
	# Return null if the key is no associated element
	protected meth couple_at(key: K): Couple[K, E] is abstract

	redef meth [](key)
	do
		var c = couple_at(key)
		if c == null then
			return null
		else
			return c.second
		end
	end

	redef meth has_key(key) do return couple_at(key) != null
end

# Iterator on CoupleMap
#
# Actually is is a wrapper around an iterator of the internal array of the map.
class CoupleMapIterator[K, E]
special MapIterator[K, E]
	redef meth item do return _iter.item.second
	
	redef meth item=(e) do _iter.item.second = e

	redef meth key do return _iter.item.first

	redef meth is_ok do return _iter.is_ok

	redef meth next
	do 
		_iter.next
		while _iter.is_ok and _iter.item == null do _iter.next
	end

	attr _iter: Iterator[Couple[K,E]]

	init(i: Iterator[Couple[K,E]]) do _iter = i
end

# Some tools ###################################################################

# Two objects in a simple structure.
class Couple[F, S]

	# The first element of the couple.
	readable writable attr _first: F

	# The second element of the couple.
	readable writable attr _second: S

	# Create a new instance with a first and a second object.
	init(f: F, s: S)
	do
		_first = f
		_second = s
	end
end
