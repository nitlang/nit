#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Simple Rosettacode task for the detection of semordnilaps in a text file
#
# SEE: http://rosettacode.org/wiki/Semordnilap
module semordnilap

if args.is_empty then
	print "Usage: ./semordnilap file"
	exit(1)
end

var filename = args[0]
var words = new HashSet[String]

for i in filename.to_path.each_line do words.add i.trim

var semordnilaps = new HashSet[String]
var pairs = new HashMap[String, String]

for i in words do
	var revi = i.reversed
	if i != revi and words.has(revi) and not semordnilaps.has(i) then
		semordnilaps.add i
		semordnilaps.add revi
		pairs[i] = revi
	end
end

print "Found {pairs.length} semordnilaps in {args[0]}"
var it = pairs.iterator
for i in [0 .. 5[ do
	print "{it.key}: {it.item}"
	it.next
end
