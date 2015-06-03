# This file is part of NIT ( http://www.nitlanguage.org )
# This program is public domain
# Task: Programming_Task/Rock-paper-scissors
# SEE: <http://rosettacode.org/wiki/Rock-paper-scissors>
#
# author: Istvan szalai 03/06/2015

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

# Return a String for the player about what the computer player did.
fun computer_message(str: String): String do
	if str == "rock" then return "The computer played rock"
	if str == "scissors" then return "The computer played scissors"
	return "The computer played paper"
end

# Return a random value for the computer player input.
fun computer_player : String do
	var tab = ["rock", "scissors", "paper"]
	return tab.rand
end

# Game loop.
var player_input = ""
var tab = ["rock", "scissors", "paper"]
var tab_message = ["You lose", "You win!", "It's a tie!"]
loop
	loop
		print "Choose your weapon|exit"
		player_input = gets
		if player_input == "exit" then exit 0
		if tab.has(player_input) then break
		if not tab.has(player_input) then print "(Invalid choice (rock/paper/scissors)"
	end
	var computer_input = computer_player
	print computer_message(computer_input)
	print tab_message[win_or_lose(player_input,computer_input)]
end
