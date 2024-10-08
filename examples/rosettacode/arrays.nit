#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Arrays
# SEE: <http://rosettacode.org/wiki/Arrays>
module arrays

# Creation of an array with a single element
var a = [1]

# Add objects
a.add 2
a.add_all([3, 4, 5])

# Set values at a specific index
a[0] = 100

# Get a specific elements
print a[0]
