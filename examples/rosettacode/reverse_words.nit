#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Reverse words in a string
# SEE: <http://rosettacode.org/wiki/Reverse_words_in_a_string>
module reverse_words
var text = """
---------- Ice and Fire ------------

fire, in end will world the say Some
ice. in say Some
desire of tasted I've what From
fire. favor who those with hold I

... elided paragraph last ...

Frost Robert -----------------------"""

for l in text.split("\n") do print l.split(" ").reversed.join(" ")
