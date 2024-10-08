#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Balanced brackets
# SEE: <http://rosettacode.org/wiki/Balanced_brackets>
module balanced_brackets

# Are `[` and `]` balanced?
# Other characters are ignored.
#
#     assert is_balanced("[][[]]")
#     assert is_balanced("")
#     assert not is_balanced("[[]")
#     assert not is_balanced("][][")
fun is_balanced(s: String): Bool
do
	var l = 0
	for x in s.chars do
		if x == '[' then
			l += 1
		else if x == ']' then
			l -= 1
			if l < 0 then return false
		end
	end
	return l == 0
end

var n = 3
if args.not_empty then n = args.first.to_i

for i in [0..10[ do
	var a = (['[', ']'] * n)
	a.shuffle
	var b = a.join
	if is_balanced(b) then print "{b} is well-balanced" else print "{b} is not well-balanced"
end
