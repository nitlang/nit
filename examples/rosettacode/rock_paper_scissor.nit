# This file is part of NIT ( http://www.nitlanguage.org ).
# This program is public domain
#
# Task: Programming_Task/Rock-paper-scissors
# SEE: <http://rosettacode.org/wiki/Rock-paper-scissors>
#
# author: Istvan szalai 22/05/2015

# Return a value to dertermine who win the match.
# Return 0 for lose, 1 for win, 2 for equality.
fun win_or_lose(player, computer: String): Int do
	if player == computer then return 2
	if player == "rock" and computer == "scissors" then return 1
	if player == "rock" and computer == "paper" then return 0
	if player == "paper" and computer == "rock" then return 1
	if player == "paper" and computer == "scissors" then return 0
	if player == "scissors" and computer == "paper" then return 1
	return 0
end

# Return a string with about the match winner or looser.
fun result_of_the_match_message(number: Int): String do
	if number == 2 then return "It's a tie!"
	if number == 1 then return "You win!"
	return "You lose!"
end

# Return a String for the player about what the computer player did.
fun computer_message(number: Int): String do
	if number == 5 then return "The computer played rock;"
	if number == 6 then return "The computer played scissors;"
	return "The computer played paper;"
end

# Return a random value for the computer player input.
fun computer_player: Int do return 3.rand + 5

# Game loop.
var x = ""
var test = false;
loop do
	while not test do
		print "Choose your weapon|exit"
		x = gets
		if x == "exit" then break
		if x == "paper" and x == "rock" and x == "scissors" then test = true;
		if test == false then print"Unknow input!"
	end
	var z = computer_player
	print computer_message(z)
	print result_of_the_match_message(win_or_lose(x,z))
end
