#!/usr/bin/env nit
#
# This file is part of NIT ( http://www.nitlanguage.org ).
# This program is public domain

# Task: Perlin noise
#
# See: <http://rosettacode.org/wiki/Perlin_noise>
module perlin_noise

redef universal Float
	# Smoothened `self`
	fun fade: Float do return self*self*self*(self*(self*6.0-15.0)+10.0)
end

# Improved noise
class ImprovedNoise
	# Permutations
	var p: Array[Int] = [151,160,137,91,90,15,
		131,13,201,95,96,53,194,233,7,225,140,36,103,30,69,142,8,99,37,240,21,10,23,
		190, 6,148,247,120,234,75,0,26,197,62,94,252,219,203,117,35,11,32,57,177,33,
		88,237,149,56,87,174,20,125,136,171,168, 68,175,74,165,71,134,139,48,27,166,
		77,146,158,231,83,111,229,122,60,211,133,230,220,105,92,41,55,46,245,40,244,
		102,143,54, 65,25,63,161, 1,216,80,73,209,76,132,187,208, 89,18,169,200,196,
		135,130,116,188,159,86,164,100,109,198,173,186, 3,64,52,217,226,250,124,123,
		5,202,38,147,118,126,255,82,85,212,207,206,59,227,47,16,58,17,182,189,28,42,
		223,183,170,213,119,248,152, 2,44,154,163, 70,221,153,101,155,167, 43,172,9,
		129,22,39,253, 19,98,108,110,79,113,224,232,178,185, 112,104,218,246,97,228,
		251,34,242,193,238,210,144,12,191,179,162,241, 81,51,145,235,249,14,239,107,
		49,192,214, 31,181,199,106,157,184, 84,204,176,115,121,50,45,127, 4,150,254,
		138,236,205,93,222,114,67,29,24,72,243,141,128,195,78,66,215,61,156,180]

	# Noise value in [-1..1] at 3d coordinates `x, y, z`
	fun noise(x, y, z: Float): Float
	do
		var xx = x.to_i & 255
		var yy = y.to_i & 255
		var zz = z.to_i & 255

		x -= x.floor
		y -= y.floor
		z -= z.floor

		var u = x.fade
		var v = y.fade
		var w = z.fade

		var a  = p[xx  ] + yy
		var aa = p[a   ] + zz
		var ab = p[a+1 ] + zz
		var b  = p[xx+1] + yy
		var ba = p[b   ] + zz
		var bb = p[b+1 ] + zz

		return w.lerp(v.lerp(u.lerp(grad(p[aa  ], x,     y,     z    ),
		                            grad(p[ba  ], x-1.0, y,     z    )),
		                     u.lerp(grad(p[ab  ], x,     y-1.0, z    ),
		                            grad(p[bb  ], x-1.0, y-1.0, z    ))),
                      v.lerp(u.lerp(grad(p[aa+1], x,     y,     z-1.0),
		                            grad(p[ba+1], x-1.0, y,     z-1.0)),
		                     u.lerp(grad(p[ab+1], x,     y-1.0, z-1.0),
		                            grad(p[bb+1], x-1.0, y-1.0, z-1.0))))
	end

	# Value at a corner of the grid
	fun grad(hash: Int, x, y, z: Float): Float
	do
		var h = hash & 15
		var u = if h < 8 then x else y
		var v = if h < 4 then y else if h == 12 or h == 14 then x else z
		return (if h.is_even then u else -u) + (if h & 2 == 0 then v else -v)
	end
end

var map = new ImprovedNoise
print map.noise(3.14, 42.0, 7.0).to_precision(17)
