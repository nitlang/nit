#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: guess the number
# SEE: <http://rosettacode.org/wiki/Guess_the_number>

var random = 10.rand +1
loop
	print "enter a guess :"
	if sys.stdin.eof then return
	var guess = gets.to_i
	if guess == random then
		print "Well guessed"
		break
	end
end
