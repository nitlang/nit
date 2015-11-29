# This file is part of NIT ( http://www.nitlanguage.org ).
# This program is public domain
# Task: guess the number
# SEE: <http://rosettacode.org/wiki/Guess_the_number>
#
# author: Istvan SZALAI 19/11/2015

var random = 10.rand +1
loop
	print "enter a guess :"
	if sys.stdin.eof then break
	var guess = gets.to_i
	if guess == random then
		print "Well guessed"
		break
	end
end
