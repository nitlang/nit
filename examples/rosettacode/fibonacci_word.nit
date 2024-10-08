#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Fibonacci_word
# SEE: <http://rosettacode.org/wiki/Fibonacci_word>
module fibonacci_word

import counter

var words = new Array[String]
words[0] = ""
words[1] = "1"
words[2] = "0"

for i in [1..37] do
	var w
	if i >= words.length then
		w = words[i-1] + words[i-2]
		words[i] = w
	else
		w = words[i]
	end
	var out = w
	if w.length > 40 then out = "..."
	print "{i}\t{w.length}\t{w.chars.to_counter.entropy.to_precision(16)}\t{out}"
end
