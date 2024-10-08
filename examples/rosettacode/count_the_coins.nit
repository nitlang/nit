#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Count_the_coins
# SEE: <http://rosettacode.org/wiki/Count_the_coins>
module count_the_coins

fun changes(amount: Int, coins: Array[Int]): Int
do
	var cache = new Array[Int].filled_with(0, amount+1)
	cache[0] = 1
	for coin in coins do
		for j in [coin..amount] do
			cache[j] += cache[j - coin]
		end
	end
	return cache[amount]
end

print changes(100, [1, 5, 10, 25])
print changes(100000, [1, 5, 10, 25, 50, 100])
