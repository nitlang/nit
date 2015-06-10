#!/usr/bin/env nit
#
# This file is part of NIT ( http://www.nitlanguage.org ).
# This program is public domain

# Task: Random numbers
#
# See: <http://rosettacode.org/wiki/Random_numbers>

module random_numbers

# Uniform distribution, (0..1] 
fun drand:Float do
    return 1.0.rand
end

fun random_normal:Float do
    return (-2.0*drand.log).sqrt * (2.0*pi*drand).cos
end

# Main part

for i in [0..1000] do
   print random_normal
end
