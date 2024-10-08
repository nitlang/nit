#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Ethiopian Multiplication
# SEE: <http://rosettacode.org/wiki/ethiopian_multiplication>
#
# Generic non-robust version.
module ethiopian_multiplication

fun ethiopian(x, y: Int): Int
do
	print "{x}; {0}"
	var sum: Int
	if x.is_even then
		sum = 0
	else
		sum = y
	end

	while x>1 do
		x /= 2
		y *= 2
		print "{x}; {y}"
		if not x.is_even then sum += y
	end

	return sum
end

var words = gets.split(" ")
print ethiopian(words[0].to_i, words[1].to_i)
