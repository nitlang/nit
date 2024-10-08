#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Arithmetic mode
# SEE: <http://rosettacode.org/wiki/Averages/Mode>
module arithmetic_mode

# Computes the mode or the `array` values.
#
# FIXME: Only the first mode will be returned, should we return an array of modes?
fun mode(array: Array[Int]): nullable Int do
	var seen = new HashMap[Int, Int]
	for i in array do
		if not seen.has_key(i) then seen[i] = 0
		seen[i] += 1
	end
	var max_key = null
	var max_val = 0
	for k, v in seen do
		if v > max_val then
			max_key = k
			max_val = v
		end
	end
	return max_key
end

print mode([1, 3, 6, 6, 6, 6, 7, 7, 12, 12, 17]) or else "null"
print mode([1, 1, 2, 4, 4]) or else "null"
print mode([1, 3, 6, 6, 6, 6, 7, 7, 12, 12, 17]) or else "null"
print mode([1, 1, 2, 4, 4]) or else "null"
