#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Entropy
# SEE: <http://rosettacode.org/wiki/Entropy>
module entropy

import counter

# Basic implementation with a hashmap of chars to count them
fun entropy(string: String): Float
do
	var cpt = new HashMap[Char, Int]
	for char in string.chars do
		var occ = cpt.get_or_default(char, 0)
		cpt[char] = occ + 1
	end

	var len = string.length.to_f
	var e = 0.0
	for char, occ in cpt do
		var freq = occ.to_f / len
		e = e - freq * freq.log_base(2.0)
	end
	return e
end
print entropy("1223334444")

# Alternative one-liner implementation using the `Counter::entropy` method of the library `counter`
print "1223334444".chars.to_counter.entropy
