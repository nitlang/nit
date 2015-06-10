#!/usr/bin/env nit
#
# This file is part of NIT ( http://www.nitlanguage.org ).
# This program is public domain

# Task: guess the number
# SEE: <http://rosettacode.org/wiki/Guess_the_number>
#

var random = 10.rand +1
var str = 0
while str != random do
	print "enter a guess :"
	str = gets.to_i
	if str == random then print "Well guessed"
end
