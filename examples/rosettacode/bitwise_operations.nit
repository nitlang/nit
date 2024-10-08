#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Bitwise operations
# SEE: <http://rosettacode.org/wiki/Bitwise_operations>
module bitwise_operations

fun bitwise(a, b: Int)
do
	print "a and b: { a & b }"
	print "a or b: { a | b }"
	print "a xor b: { a ^ b }"
	print "not a: { ~a }"
	print "a << b: { a << b }"
	print "a >> b: { a >> b }"
end

if args.length >= 2 then
	bitwise(args[0].to_i, args[1].to_i)
else
	print "Usage : ./bitwise_operations X X"
end
