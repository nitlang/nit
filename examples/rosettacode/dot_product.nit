#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Dot product
# SEE: <http://rosettacode.org/wiki/Dot_product>

fun dot_product(v1: Array[Float], v2: Array[Float]): nullable Float
do
	if v1.length != v2.length then return null
	var sum = 0.0
	for i in [0..(v1.length-1)] do
		sum += v1[i] * v2[i]
	end
	return sum
end

var product = dot_product([1.0, 3.0, -5.0], [4.0, -2.0, -1.0])
if product != null then print product
