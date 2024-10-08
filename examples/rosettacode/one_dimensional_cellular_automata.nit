#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: One-dimensional_cellular_automata
# SEE: <http://rosettacode.org/wiki/One-dimensional_cellular_automata>
module one_dimensional_cellular_automata

fun evolve(cells: SequenceRead[Char]): SequenceRead[Char]
do
	var res = new Array[Char]
	for i in [0..cells.length[ do
		var n = neighboors(i, cells)
		if cells[i] == '#' then
			res.add(b_to_char(n == 1))
		else
			res.add(b_to_char(n == 2))
		end
	end
	return res
end

fun b_to_char(b: Bool): Char do if b then return '#' else return '_'

fun neighboors(i: Int, cells: SequenceRead[Char]): Int
do
	var res = 0
	if i > 0 and cells[i-1] == '#' then res += 1
	if i < cells.length - 1 and cells[i+1] == '#' then res += 1
	return res
end

var ary = "_###_##_#_#_#_#__#__".chars
loop
	print ary.join
	var nxt = evolve(ary)
	if ary == nxt then break
	ary = nxt
end
