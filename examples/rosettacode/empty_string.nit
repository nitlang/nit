#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Empty_string
# SEE: <http://rosettacode.org/wiki/Empty_string>
module empty_string

var s = ""

if s.is_empty then print "Is empty"
if s == "" then print "Is empty"
if s.length == 0 then print "Is empty"

if not s.is_empty then print "Not empty"
if s != "" then print "Not empty"
if s.length > 0 then print "Not empty"
