#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Loops/n + 1/2
#
# SEE: http://rosettacode.org/wiki/Loops/N_plus_one_half
module loops_n_plus_one_half

for i in [0..10] do
	printn i
	if i == 10 then break
	printn ", "
end
print ""

# Here the idiomatic version using `join`
print([0..10].join(", "))
