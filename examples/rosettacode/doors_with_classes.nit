#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: 100 doors
# SEE: <http://rosettacode.org/wiki/100_doors>

# A door with two states: open or closed
class Door
	# Is this door open?
	var open = false

	# Toggle bool value of open
	fun toggle do open = not open

	redef fun to_s: String
	do
		return if open then "Open" else "Closed"
	end
end

var n = 100
if args.length > 0 then n = args.first.to_i

var doors = new Array[Door]
for door in [0..n[ do doors.add(new Door)

for visit in [0..n[ do
	var i = visit
	while i < n do
		doors[i].toggle
		i += visit+1
	end
end
for i in [0..n[ do print "Door {i+1}: {doors[i]}"
