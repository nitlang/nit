#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Loops/Continue
#
# SEE: http://rosettacode.org/wiki/Loops/Continue
module loops_continue

for i in [1..10] do
	printn i
	if i % 5 == 0 then
		printn "\n"
		continue
	end
	printn ", "
end
