#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Loops/Break
#
# SEE: http://rosettacode.org/wiki/Loops/Break
module loops_break

loop
	var a = 20.rand
	print a
	if a == 10 then break
	print 20.rand
end
