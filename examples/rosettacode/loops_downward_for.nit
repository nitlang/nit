#!/usr/bin/env nit
#
# This file is part of NIT ( http://www.nitlanguage.org ).
# This program is public domain

# Task: Loops/Downward for
#
# SEE: http://rosettacode.org/wiki/Loops/Downward_for
module loops_downward_for

for i in [0..10].reverse_iterator do
	print i
end
