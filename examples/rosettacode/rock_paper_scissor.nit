# This file is part of NIT ( http://www.nitlanguage.org ).
# This program is public domain
#
# Task: Programming_Task/Rock-paper-scissors
# SEE: <http://rosettacode.org/wiki/Rock-paper-scissors>
#
# author: Istvan szalai 22/05/2015

#return a value to dertermine who win the match
fun win_or_lose(player, computer: Int): Int do
	if player == computer then return 0
	if player > computer then return 1
	return 2
end

#return a string with about the match winner or looser
fun result_of_the_match_message(number: Int): String do
	if number == 0 then return "It's a tie !"
	if number == 1 then return "You win"
	return "You lose"
end

#return what the computer player did
fun computer_message(number: Int): String do
	if number == 5 then return "The computer played rock;"
	if number == 6 then return "The computer played scissors;"
	return "The computer played paper;"
end

#return the converted string for the core function
fun convert(str: String): Int do
	if str == "rock" then return 5
	if str == "scissors" then return 6
	return 7
end

#return a random value for the computer player input
fun computer_player: Int do return 3.rand + 5 end

#Game loop
var x = ""
loop do
	print "Choose your weapon|exit"
	x = gets
	if x == "exit" then break
	x.to_i
	var z = computer_player
	print computer_message(z)
	print result_of_the_match_message(win_or_lose(convert(x), z))
end
