#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Ceasar cipher
# SEE: <http://rosettacode.org/wiki/Caesar_cipher>
module caesar_cipher

import crypto

var key = 31
var msg = "Batman's hood is called a \"cowl\" (old meaning)."
var cipher = msg.rot(key)

print "Caesar cypher key: {key}"
print "plain text: {msg}"
print "cyphered: {cipher}"
print "uncyphered: {cipher.rot(-key)}"
