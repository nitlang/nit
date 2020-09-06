# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2005-2008 Jean Privat <jean@pryen.org>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# This module contains classes used to compare things and sorts arrays.
#
# In order to provide your own sort class you should define a subclass of `Comparator` with
# a custom `Comparator::compare` function and a specific `COMPARED` virtual type.
module sorter

import range
import array

# This abstract class generalizes ways to sort an array
interface Comparator
	# What to compare to
	type COMPARED: nullable Object

	# Compare `a` and `b`.
	#
	# Returns:
	#
	# * -1 if a < b
	# * 0  if a = b
	# * 1  if a > b
	fun compare(a: COMPARED, b: COMPARED): Int is abstract

	# Is `seq` sorted?
	#
	#     assert default_comparator.is_sorted([1,2,2,3])   == true
	#     assert default_comparator.is_sorted([1,10,2,3])  == false
	#     assert alpha_comparator.is_sorted([1,10,2,3])    == true
	fun is_sorted(seq: SequenceRead[COMPARED]): Bool
	do
		if seq.length <= 1 then return true
		var prev = seq.first
		for e in seq do
			if compare(prev, e) > 0 then return false
			prev = e
		end
		return true
	end

	# Returns the minimum between `a` and `b`.
	#
	#     assert default_comparator.min(2,10) == 2
	#     assert alpha_comparator.min(2,10)   == 10
	#
	# If both are equivalent, then returns `a`.
	#
	#     var m = alpha_comparator.min(1, "1")
	#     assert m == 1
	#     assert m != "1"
	fun min(a,b: COMPARED): COMPARED
	do
		if compare(a,b) > 0 then return b else return a
	end

	# Returns the maximum between `a` and `b`.
	#
	#     assert default_comparator.max(2,10) == 10
	#     assert alpha_comparator.max(2,10)   == 2
	#
	# If both are equivalent, then returns `a`.
	#
	#     var m = alpha_comparator.max(1, "1")
	#     assert m == 1
	#     assert m != "1"
	fun max(a,b: COMPARED): COMPARED
	do
		if compare(a,b) < 0 then return b else return a
	end

	# Sort `array` using the `compare` function.
	#
	#     var a = [10, 2, 3, 1, 4]
	#     default_comparator.sort(a)
	#     assert a == [1, 2, 3, 4, 10]
	#     alpha_comparator.sort(a)
	#     assert a == [1, 10, 2, 3, 4]
	fun sort(array: Array[COMPARED]) do sub_sort(array, 0, array.length-1)

	# Sort `array` between `from` and `to` indices
	private fun sub_sort(array: Array[COMPARED], from: Int, to: Int)
	do
		if from >= to then
			return
		else if from + 7 < to then
			quick_sort(array, from, to)
		else
			bubble_sort(array, from, to)
		end
	end

	# Quick-sort `array` between `from` and `to` indices
	# Worst case: O(n^2), Average case: O(n lg n)
	#
	#     var a = [5, 2, 3, 1, 4]
	#     default_comparator.quick_sort(a, 0, a.length - 1)
	#     assert a == [1, 2, 3, 4, 5]
	#     var a2 = new Array[Int]
	#     default_comparator.quick_sort(a2, 0, a2.length - 1)
	#     assert a2 == new Array[Int]
	#     var a3 = [1]
	#     default_comparator.quick_sort(a3, 0, a3.length - 1)
	#     assert a3 == [1]
	fun quick_sort(array: Array[COMPARED], from: Int, to: Int) do
		if from >= to then return
		var pivot = array[from]
		var i = from
		var j = to
		while j > i do
			while i <= to and compare(array[i], pivot) <= 0 do i += 1
			while j > i and compare(array[j], pivot) >= 0 do j -= 1
			if j > i then
				var t = array[i]
				array[i] = array[j]
				array[j] = t
			end
		end
		array[from] = array[i-1]
		array[i-1] = pivot
		sub_sort(array, from, i-2)
		sub_sort(array, i, to)
	end

	# Bubble-sort `array` between `from` and `to` indices
	# Worst case: O(n^2), average case: O(n^2)
	#
	#     var a = [5, 2, 3, 1, 4]
	#     default_comparator.bubble_sort(a, 0, a.length - 1)
	#     assert a == [1, 2, 3, 4, 5]
	fun bubble_sort(array: Array[COMPARED], from: Int, to: Int)
	do
		var i = from
		while i < to do
			var min = i
			var min_v = array[i]
			var j = i
			while j <= to do
				if compare(min_v, array[j]) > 0 then
					min = j
					min_v = array[j]
				end
				j += 1
			end
			if min != i then
				array[min] = array[i]
				array[i] = min_v
			end
			i += 1
		end
	end

	# Insertion-sort `array` between `from` and `to` indices
	# Worst case: O(n^2), average case: O(n^2)
	#
	#     var a = [5, 2, 3, 1, 4]
	#     default_comparator.insertion_sort(a, 0, a.length - 1)
	#     assert a == [1, 2, 3, 4, 5]
	fun insertion_sort(array: Array[COMPARED], from: Int, to: Int) do
		for i in [from..to] do
			var j = i
			while j > 0 and compare(array[j], array[j - 1]) < 0 do
				array.swap_at(j, j - 1)
				j -= 1
			end
		end
	end

	# Merge-sort `array` between `from` and `to` indices
	# Worst case: O(n lg n), average: O(n lg n)
	#
	#     var a = [5, 2, 3, 1, 4]
	#     default_comparator.merge_sort(a, 0, a.length - 1)
	#     assert a == [1, 2, 3, 4, 5]
	fun merge_sort(array: Array[COMPARED], from, to: Int) do
		if from >= to then return
		var mid = (to + from) / 2
		merge_sort(array, from, mid)
		merge_sort(array, mid + 1, to)
		merge(array, from, mid, to)
	end

	private fun merge(array: Array[COMPARED], from, mid, to: Int) do
		var l = new Array[COMPARED]
		for i in [from..mid] do l.add array[i]
		var r = new Array[COMPARED]
		for i in [mid + 1..to] do r.add array[i]
		var i = 0
		var j = 0
		for k in [from..to] do
			if i >= l.length then
				array[k] = r[j]
				j += 1
			else if j >= r.length then
				array[k] = l[i]
				i += 1
			else if compare(l[i], r[j]) <= 0 then
				array[k] = l[i]
				i += 1
			else
				array[k] = r[j]
				j += 1
			end
		end
	end

	# Heap-sort `array` between `from` and `to` indices
	# Worst case: O(n lg n), average: O(n lg n)
	#
	#     var a = [5, 2, 3, 1, 4]
	#     default_comparator.heap_sort(a, 0, a.length - 1)
	#     assert a == [1, 2, 3, 4, 5]
	fun heap_sort(array: Array[COMPARED], from, to: Int) do
		var size = build_heap(array)
		for j in [from..to[ do
			array.swap_at(0, size)
			size -= 1
			heapify(array, 0, size)
		end
	end

	private fun build_heap(array: Array[COMPARED]): Int do
		var size = array.length - 1
		var i = size / 2
		while i >= 0 do
			heapify(array, i, size)
			i -= 1
		end
		return size
	end

	private fun heapify(array: Array[COMPARED], from, to: Int) do
		var l = from * 2
		var r = l + 1
		var largest: Int
		if l < to and compare(array[l], array[from]) > 0 then
			largest = l
		else
			largest = from
		end
		if r < to and compare(array[r], array[largest]) > 0 then
			largest = r
		end
		if largest != from then
			array.swap_at(from, largest)
			heapify(array, largest, to)
		end
	end

end

redef class MapRead[K,V]
	# Return an array of all values sorted with their keys using `comparator`.
	#
	# ~~~
	# var map = new HashMap[Int, String]
	# map[10] = "ten"
	# map[2]  = "two"
	# map[1]  = "one"
	# assert map.values_sorted_by_key(default_comparator) == ["one", "two", "ten"]
	# assert map.values_sorted_by_key(alpha_comparator) == ["one", "ten", "two"]
	# ~~~
	fun values_sorted_by_key(comparator: Comparator): Array[V]
	do
		var keys = self.keys.to_a
		comparator.sort(keys)
		return [for k in keys do self[k]]
	end

	# Return an array of all keys sorted with their values using `comparator`.
	#
	# ~~~
	# var map = new HashMap[String, Int]
	# map["ten"] = 10
	# map["two"] = 2
	# map["one"] = 1
	# assert map.keys_sorted_by_values(default_comparator) == ["one", "two", "ten"]
	# assert map.keys_sorted_by_values(alpha_comparator) == ["one", "ten", "two"]
	# ~~~
	#
	# See: `to_map_comparator` to get the comparator used internally.
	fun keys_sorted_by_values(comparator: Comparator): Array[K]
	do
		var keys = self.keys.to_a
		var map_cmp = to_map_comparator(comparator)
		map_cmp.sort(keys)
		return keys
	end

	# A comparator that compares things with their values in self.
	#
	# See `MapComparator` for details.
	fun to_map_comparator(comparator: Comparator): MapComparator[K, V] do return new MapComparator[K,V](self, comparator)
end

# A comparator that compares things with their values in a map.
#
# ~~~
# var map = new HashMap[String, Int]
# map["ten"] = 10
# map["two"] = 2
# map["one"] = 1
#
# var map_cmp = map.to_map_comparator(default_comparator)
# var a = ["ten", "one", "two"]
# map_cmp.sort(a)
# assert a == ["one", "two", "ten"]
# map_cmp = map.to_map_comparator(alpha_comparator)
# map_cmp.sort(a)
# assert a == ["one", "ten", "two"]
# ~~~
class MapComparator[K,V]
	super Comparator

	# What is compared are the keys of the values
	redef type COMPARED: K

	# The map that associates compared elements to the value used to compare them
	var map: MapRead[K,V]

	# The comparator used to compare values
	var comparator: Comparator

	redef fun compare(a,b) do return comparator.compare(map[a], map[b])
end

# This comparator uses the operator `<=>` to compare objects.
# see `default_comparator` for an easy-to-use general stateless default comparator.
class DefaultComparator
	super Comparator
	redef type COMPARED: Comparable
	# Return a <=> b
	redef fun compare(a, b) do return a <=> b
end

# This comparator uses the operator `<=>` to compare objects in a reverse order.
#
# See `default_reverse_comparator` for an easy-to-use general stateless reverse
# default comparator.
class DefaultReverseComparator
	super Comparator

	redef type COMPARED: Comparable

	# Returns `b <=> a`.
	redef fun compare(a, b) do return b <=> a
end

# Easy-to-use general stateless default comparator that uses `<=>` to compare things.
fun default_comparator: DefaultComparator do return once new DefaultComparator

# Easy-to-use general stateless default reverse comparator.
#
# Does the same as `default_comparator` but in reverse order.
fun default_reverse_comparator: DefaultReverseComparator do
	return once new DefaultReverseComparator
end
