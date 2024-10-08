#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Arithmetic mean
# SEE: <http://rosettacode.org/wiki/Averages/Arithmetic_mean>
module arithmetic_mean

# Computes the meam or the `array` values.
fun mean(array: Array[Float]): Float do
	var sum = 0.0
	if array.is_empty then return sum
	for i in array do sum += i
	return sum / array.length.to_f
end

print mean([3.0, 1.0, 4.0, 1.0, 5.0, 9.0])
print mean([3.0, 1.0, 4.0, 1.0, 5.0])
print mean([3.0, 1.0, 4.0, 1.0])
print mean([3.0, 1.0, 4.0])
print mean([3.0, 1.0])
print mean([3.0])
print mean(new Array[Float])
