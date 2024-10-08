#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Entropy/Narcissist
# SEE: <http://rosettacode.org/wiki/Entropy/Narcissist>
module entropy_narcissist

import counter

# Should be run in the right directory
print "entropy_narcissist.nit".to_path.read_all.chars.to_counter.entropy
