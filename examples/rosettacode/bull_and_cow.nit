# This file is part of NIT ( http://www.nitlanguage.org ).
# This program is public domain
# Task: bulls and cows
# SEE: <http://rosettacode.org/wiki/Bulls_and_cows
#
# author: Istvan SZALAI 19/11/2015

# Return an array of length 4 with unique random number.
fun random : Array[Char] do
	var arr = new Array[Char]
	while arr.length < 4 do
		var element = 10.rand.to_c
		if not arr.has(element) then arr.add(element)
	end
return arr
end

# Game Loop.
var arr = random
var player_input = ""
var bull = 0
var cow = 0
loop
	loop
		print "guess a string of 4 digit number with unique digits"
			if stdin.eof then exit 0
		player_input = gets
		if player_input.length == 4 then
			 break
		else
			print "Input length error!"
		end
	end
	for i in [0..player_input.length[ do
		if arr[i] == player_input[i] then bull += 1
		if arr.has(player_input[i]) then cow += 1
	end
	cow = cow - bull
	if bull == 4 then
		print "You Win!"
		print "continue/exit"
			if stdin.eof then exit 0
		player_input = gets
			if player_input == "exit" then exit 0
			if player_input == "continue" then arr = random
	else
		print """
		bulls : {{{bull}}}
		cow : {{{cow}}}
		"""
	end
	bull = 0
	cow = 0
end
