#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Perlin noise
#
# See: <http://rosettacode.org/wiki/Perlin_noise>
module perlin_noise

import noise

var map = new ImprovedNoise
print map.noise(3.14, 42.0, 7.0).to_precision(17)
