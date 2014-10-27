#!/usr/bin/env nit
#
# This file is part of NIT ( http://www.nitlanguage.org ).
# This program is public domain

# Task: A+B
# SEE: <http://rosettacode.org/wiki/A%2BB>
#
# Generic non-robust version.
module ab

var words = gets.split(" ")
print words[0].to_i + words[1].to_i
