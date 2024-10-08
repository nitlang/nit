#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Median
# SEE: <http://rosettacode.org/wiki/Averages/Median>
module median

# Computes the median or the `array` values.
fun median(array: Array[Float]): nullable Float do
	if array.is_empty then return null
	default_comparator.sort(array)
	var mid = (array.length / 2).to_i
	var rem = ((array.length - 1) / 2).to_i
	return (array[mid] + array[rem]).to_f / 2.0
end

print median(new Array[Float]) or else "null"
print median([5.0, 3.0, 4.0]) or else "null"
print median([5.0, 4.0, 2.0, 3.0]) or else "null"
print median([3.0, 4.0, 1.0, -8.4, 7.2, 4.0, 1.0, 1.2]) or else "null"
