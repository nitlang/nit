#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Symmetric difference
# SEE: <http://rosettacode.org/wiki/Symmetric_difference>

module symmetric_difference

var a = ["John", "Serena", "Bob", "Mary", "Serena"]
var b = ["Jim", "Mary", "John", "Jim", "Bob"]

print "Set A: {a.join(", ")}"
print "Set B: {b.join(", ")}"

# Option 1: union of differences
var not_in_a = new ArraySet[String]
not_in_a.add_all(b)
for x in a do
	not_in_a.remove_all(x)
end

var not_in_b = new ArraySet[String]
not_in_b.add_all(a)
for x in b do
	not_in_b.remove_all(x)
end

var difference = not_in_a.clone
difference.add_all(not_in_b)

print "Symmetric difference: {difference.join(", ")}"

# Option 2: union minus intersection
var union = new ArraySet[String]
union.add_all(a)
union.add_all(b)

var b1 = new ArraySet[String]
b1.add_all(b)

var intersect
intersect = new ArraySet[String]
intersect.add_all(a)
intersect = intersect.intersection(b1)

var difference2 = union.clone
for x in intersect do
	difference2.remove_all(x)
end

print "Symmetric difference: {difference2.join(", ")}"