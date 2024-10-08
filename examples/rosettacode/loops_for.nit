#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Loops/For
#
# SEE: http://rosettacode.org/wiki/Loops/For
module loops_for

for i in [1..5] do
	for j in [1..i] do printn "*"
	print ""
end
