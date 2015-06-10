#!/usr/bin/env nit
#
# This file is part of NIT ( http://www.nitlanguage.org ).
# This program is public domain

# Task: Bitwise operations
# SEE: <http://rosettacode.org/wiki/Bitwise_operations>
# Without logical right shift
module bitwise_operations

fun bitwise(a, b: Int)
do
	print "a and b: { a.bin_and(b) }"
	print "a or b: { a.bin_or(b) }"
	print "a xor b: { a.bin_xor(b) }"
	print "not a: { a.bin_not }"
	print "a << b: { a << b }"
	print "a >> b: { a >> b }"
end

if args.length >= 2 then
	bitwise(args[0].to_i, args[1].to_i)
else
	print "Usage : ./bitwise_operations X X"
end
