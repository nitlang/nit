#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Factorial
# SEE: <http://rosettacode.org/wiki/Factorial>

module factorial

redef class Int

    fun fact: Int
    do
        if self < 1 then return 1
        return self * (self-1).fact
    end
end
var n = gets.to_i
print n.fact