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

# This module contains classes used to sorts arrays.
# In order to provide your own sort class you should define a subclass of AbstractSorter with
# a custom `compare' function.
package sorter

import array

# This abstract class generalizes ways to sort an array
# TODO: rename *Sorter to *Comparator
interface AbstractSorter[E]
	# Compare `a' and `b'.
	# Returns:
	# 	-1 if a < b
	#	0  if a = b
	#	1  if a > b
	fun compare(a: E, b: E): Int is abstract

	# Sort `array' using the `compare' function.
	fun sort(array: Array[E]) do sub_sort(array, 0, array.length-1)

	# Sort `array' between `from' and `to' indices
	private fun sub_sort(array: Array[E], from: Int, to: Int)
	do
		if from >= to then
			return
		else if from + 7 < to then
			quick_sort(array, from, to)
		else
			bubble_sort(array, from, to)
		end
	end

	# Quick-sort `array' between `from' and `to' indices
	private fun quick_sort(array: Array[E], from: Int, to: Int)
	do
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
	
	# Bubble-sort `array' between `from' and `to' indices
	private fun bubble_sort(array: Array[E], from: Int, to: Int)
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
end

# This class uses the operator <=> to sort arrays.
# You can also use the `sort' method of the `Array' class.
class ComparableSorter[E: Comparable]
	super AbstractSorter[E]
	# Return a <=> b
	redef fun compare(a, b) do return a <=> b

	init do end
end

