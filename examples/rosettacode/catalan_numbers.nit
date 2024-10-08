#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain
#
# Task: Catalan numbers
# SEE: <http://rosettacode.org/wiki/Catalan_numbers>

fun catalan_number(number: Int): Int do
	var numerator = (2 * number).factorial
	var denominator = (number + 1).factorial * number.factorial
	return numerator/denominator
end

for number in [0..10[ do
	print "{number} = {catalan_number(number)}"
end
