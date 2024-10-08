#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Perfect numbers
# SEE: <http://rosettacode.org/wiki/Perfect_Numbers>

module perfect_numbers


fun isPerfect(x: Int): Bool
do
	var sum: Int = 0
	for i in [1..(x-1)] do
		if x%i == 0 then sum = sum+i
	end
	return sum == x
end

var n = gets.to_i
print isPerfect(n)