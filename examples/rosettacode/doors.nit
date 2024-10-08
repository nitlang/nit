#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: 100 doors
# SEE: <http://rosettacode.org/wiki/100_doors>
#
# Generic unoptimized version.
module doors

var n = 100
var doors = new Array[Bool].filled_with(false, n)
for i in [0..n[ do
	var j = i
	while j < n do
		doors[j] = not doors[j]
		j += i+1
	end
end
for i in [0..n[ do
	var s
	if doors[i] then s = "open" else s = "closed"
	print "Door {i} is {s}."
end
