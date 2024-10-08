#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Loops/Do-while
#
# SEE: http://rosettacode.org/wiki/Loops/Do-while
module loops_do_while

var val = 0
loop
	val += 1
	print val
	if val % 6 == 0 then break
end
