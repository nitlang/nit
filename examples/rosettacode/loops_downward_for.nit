#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Loops/Downward for
#
# SEE: http://rosettacode.org/wiki/Loops/Downward_for
module loops_downward_for

for i in [10..0].step(-1) do
	print i
end
