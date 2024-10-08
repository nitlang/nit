#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Pernicious numbers
#
# SEE: http://rosettacode.org/wiki/Pernicious_numbers

var n_pernicious = 0
var x = 0
while n_pernicious < 25 do
	if x.number_bits(1).is_prime then
		print x
		n_pernicious += 1
	end
	x += 1
end

for i in [888888877..888888888[ do
	if i.number_bits(1).is_prime then print i
end
