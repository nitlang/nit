#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Pig the dice game
# SEE: http://rosettacode.org/wiki/Pig_the_dice_game

var player = 0
var score = [0, 0]
var turnscore = 0
var max_score = 100
loop
	if (score[player] + turnscore) >= max_score then
			print "Congratulation Player {player + 1}! You won with {score[player]} points! "
			return
	end
	print "Player {player +1}"
	print "Total score : {score[player]}"
	print "What do you want to do? (\"1\" to roll, \"0\" to hold)"
	if stdin.eof then break
	var input = gets
	if input == "1" then
		var roll = 6.rand + 1
		if roll == 1 then
			turnscore = 0
			print "You rolled 1! all points lost for this turn"
			print ""
			player = 1 - player
		else
			turnscore += roll
			print "rolled: {roll}"
			print "score this turn: {turnscore}"
			print ""
		end
	else if input == "0" then
		score[player] += turnscore
		print "Scored: {turnscore}"
		print "New Score: {score[player]}"
		print ""
		player = 1 - player
		turnscore = 0
	end
end
