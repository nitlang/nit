#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: 99 Bottles of Beer
# SEE: <http://rosettacode.org/wiki/99_Bottles_of_Beer>
module bottles_of_beer

for i in [1..99].reverse_iterator do
	print "{i} bottles of beer on the wall"
	print "{i} bottles of beer"
	print "Take one down, pass it around"
	print "{i-1} bottles of beer on the wall\n"
end
