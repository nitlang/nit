#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Simple Rosetta-code task : Parsing a S-Expression
module s_exp

import sexp

var src = """((data "quoted data" 123 4.5)
(data (!@# (4.5) "(more" "data)")))"""

var sexp = src.to_sexp

if sexp isa SExpError then
	print sexp
	exit(1)
end

print sexp

if sexp isa SExp then print sexp.pretty_to_s
