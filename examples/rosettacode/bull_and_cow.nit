#!/usr/bin/env nit
#
# This file is part of NIT ( http://www.nitlanguage.org ).
# This program is public domain

# Task: bulls and cows
# SEE: <http://rosettacode.org/wiki/Bulls_and_cows
#

# Retuen an array of length 4 with unique random number.
fun random : Array[Char] do
	var tab = new Array[Char]
	while tab.length < 4 do
		var element = 10.rand.to_c
		if not tab.has(element) then tab.add(element)
	end
return tab
end

# Game Loop.
var tab = random
var player_input = ""
var bull = 0
var cow = 0
loop
	loop
		print "guess a string of 4 digit number with unique digits"
		player_input = gets
		if player_input.length == 4 then
			 break
		else
			print "Input length error!"
		end
	end
	for i in [0..player_input.length[ do
		if tab[i] == player_input[i] then bull += 1
		if tab.has(player_input[i]) then cow += 1
	end
	cow = cow - bull
	if bull == 4 then
		print "You Win!"
	else
		print """
		bulls : {{{bull}}}
		cow : {{{cow}}}
		"""
	end
end
