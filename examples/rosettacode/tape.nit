#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Create_a_file_on_magnetic_tape
# SEE: <http://rosettacode.org/wiki/Create_a_file_on_magnetic_tape>
module tape

"Hello, World!".write_to_file("/dev/tape")
