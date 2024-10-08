#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Random numbers
#
# See: <http://rosettacode.org/wiki/Random_numbers>
module random_numbers

# Uniform distribution, (0..1]
fun drand: Float do return 1.0.rand

# Pseudorandom numbers with a mean of 1.0 and a standard deviation of 0.5
fun random_normal: Float do return (-2.0 * drand.log).sqrt * (2.0 * pi * drand).cos

for i in [0..1000] do print random_normal
