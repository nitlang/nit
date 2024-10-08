#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Open a text file and count the occurrences of each letter.
# SEE: <http://rosettacode.org/wiki/Letter_frequency>
#

import counter

var file = new FileReader.open("/etc/issue")
var counter = new Counter[Char]
while not file.eof do
	var char = file.read_char
	if char != null and char.is_letter then
		counter.inc(char)
	end
end

for char, count in counter do
	print "{char} => {count}"
end
