#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain
#
# Task: Zig-zag matrix
# SEE: <http://rosettacode.org/wiki/Zig-zag_matrix>

fun zig_zag(number: Int): Array[Array[Int]] do
	var first_number = 0
	var last_number = number * number - 1
	# x: line position
	# y: column position
	var x = 0
	var y = 0
	# true: top-right
	# false: bottom-left
	var trajectory = true
	# first array: column
	# second array: line
	var array = new Array[Array[Int]]
	for i in [0..number[ do array.add(new Array[Int].filled_with(0, number))

	while first_number <= last_number do
		array[y][x] = first_number
		array[number - y - 1][number - x - 1] = last_number

		first_number += 1
		last_number -= 1

		if x == 0 and y == 0 then
			x += 1
			trajectory = false
		else
			if y == 0 and trajectory then
				trajectory = false
				x += 1
				continue
			end
			if y == 0 and not trajectory then
				x -= 1
				y += 1
				continue
			end
			if x == 0 and not trajectory then
				trajectory = true
				y += 1
				continue
			end
			if x == 0 and trajectory then
				x += 1
				y -= 1
				continue
			end
			if trajectory then
				x += 1
				y -= 1
			else
				x -= 1
				y += 1
			end
		end
	end
	return array
end

var number = 10
var number_length_max = (number * number - 1).to_s.length
for line in zig_zag(number) do
	for element in line do
		printn element
		var blank = number_length_max - element.to_s.length + 1
		for x in blank.times do printn " "
	end
	print ""
end
