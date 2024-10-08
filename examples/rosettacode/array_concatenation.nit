#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Array concatenation
# SEE: <http://rosettacode.org/wiki/Array_concatenation>
module array_concatenation

var arr1 = [1, 2, 3]
var arr2 = [4, 5, 6]
var arr3 = [7, 8, 9]
var arr5 = [2, 1, 0]
var arr4 = arr1 + arr2
arr4.append arr3
arr4.prepend arr5
print arr4 # => [2,1,0,1,2,3,4,5,6,7,8,9]
