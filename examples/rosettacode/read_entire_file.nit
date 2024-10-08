#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Read entire file
#
# SEE: http://rosettacode.org/wiki/Read_entire_file
module read_entire_file

var filename = "/etc/issue"
var content  = filename.to_path.read_all
print content
