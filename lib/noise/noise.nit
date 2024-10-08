# This file is part of NIT ( https://nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Noise generators `PerlinNoise` and `InterpolatedNoise`
module noise is serialize

import serialization

# 2D noise generator
abstract class Noise

	# Get the noise value at `x`, `y`
	#
	# The coordinates `x`, `y` can be floats of any size.
	#
	# Returns a value between or equal to `min` and `max`.
	fun [](x, y: Float): Float is abstract

	# Lowest possible value returned by `[]`
	#
	# Default at `0.0`.
	#
	# Require: `min < max`
	var min = 0.0 is writable

	# Highest possible value returned by `[]`
	#
	# Default at `1.0`.
	#
	# Require: `min < max`
	var max = 1.0 is writable

	# Distance between reference points of the noise
	#
	# Higher values will result in smoother noise and
	# lower values will result in steeper curves.
	#
	# Default at `1.0`.
	var period = 1.0 is writable

	# Amplitude of the values returned by `[]`
	fun amplitude: Float do return max - min

	# Set the desired amplitude of the values returned by `[]`
	#
	# Will only modify `max`, `min` stays the same.
	fun amplitude=(value: Float) do max = min + value

	# Frequency of this noise
	fun frequency: Float do return 1.0/period

	# Set the frequency if this noise
	fun frequency=(value: Float) do period = 1.0/value

	# Seed to the random number generator `gradient_vector`
	#
	# By default, `seed` has a random value created with `Int::rand`.
	var seed: Int = 19511359.rand is lazy, writable
end

# 2D Perlin noise generator using layered `InterpolatedNoise`
#
# Get values at any coordinates with `[]`.
# The behavior of this generator can be customized using its attributes `min`,
# `max`, `period` and `seed`.
#
# This noise is more realistic and less smooth than the `InterpolatedNoise`.
#
# Due to implementation logic, the full amplitude cannot be reached.
# In practice, only `amplitude * (1.0 - 1.0 / n_levels)` is covered.
#
# This implementation uses a custom deterministic pseudo random number
# generator to set `InterpolatedNoise::seed` of the `layers`.
# It is seeded with the local `seed` and can be further customized by
# redefining `pseudo_random`.
# This process do not require any state, so this class only holds the
# attributes of the generator and does not keep any generated data.
#
# ## Usage example
#
# ~~~
# var map = new PerlinNoise
# map.min = 0.0
# map.max = 16.0
# map.period = 20.0
# map.seed = 0
#
# var max = 0.0
# var min = 100.0
# for y in 30.times do
#     for x in 70.times do
#         # Get a value at x, y
#         var val = map[x.to_f, y.to_f]
#         printn val.to_i.to_hex
#
#         max = max.max(val)
#         min = min.min(val)
#     end
#     print ""
# end
# assert max <= map.max
# assert min >= map.min
# ~~~
#
# ## Result at seed == 0
#
# ~~~raw
# 76666555444322234567789abbcbbaabbaa98777766665665566667888987655444444
# 776665554443322234567789abbbbbbbbba98777766666665556666788998654444444
# 777766544443322234566789abbbbbbbbaa99877777776665556666788888655444444
# 777776444443322244556679abbbccbbbaa99877777776655556666688888655444444
# 777766444444332244555678abbbccbbbaa99887787877655556666678888654444444
# 8887654344443333444456789abcccbbaa999877888886555555666688777654444455
# 8887654344443333444456789abbcdcbaa999887889887655555566677777654444456
# 7876654434444444444456778abbcccaaa999888899888655555566677777654444556
# 78765544344445544444567789bbccca99999888899988765555566666667654445566
# 77765444344455554445567889bbccba99999998999988765555566555666654445667
# 7765444334555665445556788abbbba988998999999988765555566545556554456677
# 87654444334556655455567899bbbba998888899999887766555566544556555456777
# 87655444334566665555567899bbbbba98888899988888776555566544556555556777
# 97655544334566665555567899abbbba98888899988888776555655544456555667777
# 97655544444566665556667899aaaaba98888999877777776555555444456666667777
# 866555444456666666566789999aaaaa98889998877777766556544443456667777777
# 976555445556776666666789aa99aaaa98889998876777666555544444456677887777
# 9765554556667777776667899999aaaa98889988876676666555443444446678888888
# 87655555666777788766678999899aaa99889988776666666554433344446789998888
# 876555566777788888766889998899a999889987776666666543333334456899a99899
# 766556677877889998877888888889a99998888777666666653222233345799aaa999a
# 6665556777777899998878988888899999999887777656666543222233446899aa999a
# 6655456777777899999888988888889999a988887776566666532222233457899a999a
# 665555677777789999998998888878899aa9888887765666655322222234578899aa9a
# 665555677777789999a98888888877899aa9888887766666655322222234467899aa9a
# 65666677667778999aaa988878877789aaa9888887776676654322222344467889aa9a
# 55566677767788899aaa987777777789aaa9888887776666654322222344567889aaa9
# 5566767777788889aaaa987777777789aaaa988887777666555432122344556899aaa9
# 5567777777788889aaaa977777777789aaaa99888777766555543212234555689aaaaa
# 5667877777889989aaa9876677777889aaaa99888777765554443212334555689aaaaa
# ~~~
class PerlinNoise
	super Noise

	# Desired number of `layers`
	#
	# This attribute must be assigned before any call to `layers` or `[]`.
	#
	# By default, it is the highest integer under the logarithm base 2
	# of `amplitude`, or 4, whichever is the highest.
	var n_layers: Int = 4.max(amplitude.abs.log_base(2.0).to_i) is lazy, writable

	# Layers of `InterpolatedNoise` composing `self`
	var layers: Array[InterpolatedNoise] is lazy do
		var layers = new Array[InterpolatedNoise]

		var max = max
		var min = min
		var period = period
		var seed = seed
		for l in n_layers.times do
			min = min / 2.0
			max = max / 2.0
			seed = pseudo_random(seed)

			var layer = new InterpolatedNoise
			layer.min = min
			layer.max = max
			layer.period = period
			layer.seed = seed
			layers.add layer

			period = period / 2.0
		end
		return layers
	end

	redef fun [](x, y)
	do
		var val = 0.0
		for layer in layers do
			val += layer[x, y]
		end
		return val
	end

	# Deterministic pseudo random number generator
	#
	# Used to get seeds for layers from the previous layers or `seed`.
	protected fun pseudo_random(value: Int): Int
	do
		return (value * 3537391).mask % 1291377
	end
end

# Simple interpolated noise
#
# Generates smoother noise than `PerlinNoise`.
#
# Each coordinates at a multiple of `period` defines a random vector and
# values in between are interpolated from these vectors.
#
# This implementation uses a custom deterministic pseudo random number
# generator seeded with `seed`.
# It can be further customized by redefining `gradient_vector`.
# This process do not require any state, so this class only holds the
# attributes of the generator and does not keep any generated data.
#
# ## Usage example
#
# ~~~
# var map = new InterpolatedNoise
# map.min = 0.0
# map.max = 16.0
# map.period = 20.0
# map.seed = 0
#
# var max = 0.0
# var min = 100.0
# for y in 30.times do
#     for x in 70.times do
#         # Get a value at x, y
#         var val = map[x.to_f, y.to_f]
#         printn val.to_i.to_hex
#
#         max = max.max(val)
#         min = min.min(val)
#     end
#     print ""
# end
# assert max <= map.max
# assert min >= map.min
# ~~~
#
# ## Result at seed == 0
#
# ~~~raw
# 89abcddeeeeeeeddcba9877666555555555666778766555544444555566789abcddeee
# 789abcddeeeeeeddccba887766655555555566677766555544444555566779abcddeee
# 689abcddeeeeeeeddcba988776655555555555667666555554455555566778abccdeee
# 678abccdeeeeeeeedccba988766655555555555666655555555555556666789abcddee
# 5789abcddeeeeeeeddcba998776655544444555666655555555555556666789abcddee
# 5689abcddeeeeeeeedccba98776655544444455566555555555555566666789abccdde
# 4679abccdeeeffeeeddcba98776655444444445565555555555555666666789abbcddd
# 4678abccdeeeffeeeedcba98876555444444444555555555566666666666689aabccdd
# 46789abcdeeeeffeeedccb988765544443344445555566666666666666666789abccdd
# 45789abcddeeeffeeeddcb987765544433334445555666666666666666666789abbccd
# 45789abcddeeeeeeeeddcb987665444333333445556666666777777777766789aabccc
# 45789abcddeeeeeeeeddca987655443333333445566666777777777777776789aabbcc
# 45789abcddeeeeeeeedcca9876544333333333455666777777788877777767899aabbc
# 46789abcddeeeeeeeddcba9876544333222333455667777888888888877767899aabbb
# 46789abcdddeeeeedddcba87655433222223334566777888889998888877778899aabb
# 5678aabcdddeeeedddccb987654332222222334566778889999999998887778899aaab
# 5689abbcddddeedddccba9865443222222223345677889999aaaa99998877788999aaa
# 6789abbcddddddddccbba8765432221111223345678899aaaaaaaaaa9988778889999a
# 6789abccdddddddccbba9865433221111122344577899aabbbbbbbaaa9987788889999
# 789abbccddddddccbba9876543211111111234567899aabbbccccbbbaa987788888899
# 889abbccdddddccbba9886543211000001123456889abbcccccccccbba988888888888
# 899abbcccddddcccbaa9875432211000011223457899abbcccccccccbba98888888888
# 899abbccccddccccbba9876533211000001123456789aabccccddcccbbaa9998888888
# 899abbccccccccccbbaa9765432111000011223456899abbcccdddcccbba9999988888
# 899abbbcccccccccbbaa9865432211000011123456789abbccdddddcccbba999988888
# 899aabbcccccccccbbaa9875433211100001122346789abbccddddddcccbaa99988888
# 899aabbbcccccccbbbbaa876543211100001122345689aabccdddddddccbaaa9988887
# 899aabbbbbbccbbbbbbaa876543221110001112335679aabccddddddddcbbaa9988877
# 899aaabbbbbbbbbbbbbaa9765433211111111123356789abccddddddddccbaa9988777
# 8999aaaabbbbbbbbbbaaa9765433221111111122356789abccdddeedddccbaa9988777
# ~~~
class InterpolatedNoise
	super Noise

	redef fun [](x, y)
	do
		x = x/period
		y = y/period

		# Get grid coordinates
		var x0 = if x > 0.0 then x.to_i else x.to_i - 1
		var x1 = x0 + 1
		var y0 = if y > 0.0 then y.to_i else y.to_i - 1
		var y1 = y0 + 1

		# Position in grid
		var sx = x - x0.to_f
		var sy = y - y0.to_f

		# Interpolate
		var n0 = gradient_dot_product(x0, y0, x, y)
		var n1 = gradient_dot_product(x1, y0, x, y)
		var ix0 = sx.lerp(n0, n1)
		n0 = gradient_dot_product(x0, y1, x, y)
		n1 = gradient_dot_product(x1, y1, x, y)
		var ix1 = sx.lerp(n0, n1)
		var val = sy.lerp(ix0, ix1)

		# Return value in [min...max] from val in [-1.0...1.0]
		val /= 2.0
		val += 0.5
		return val.lerp(min, max)
	end

	# Get the component `w` of the gradient unit vector at `x`, `y`
	#
	# `w` at 0 targets the X axis, at 1 the Y axis.
	#
	# Returns a value between -1.0 and 1.0.
	#
	# Require: `w == 0 or w == 1`
	protected fun gradient_vector(x, y, w: Int): Float
	do
		assert w == 0 or w == 1

		# Use our own deterministic pseudo random number generator
		#
		# These magic prime numbers were determined good enough by
		# non-emperical experimentation. They may need to be changed/improved.
		var seed = 817721 + self.seed
		var i = seed * (x+seed) * 25111217 * (y+seed) * 72233613
		var mod = 137121
		var angle = (i.mask.abs%mod).to_f*2.0*pi/mod.to_f

		# Debug code to evaluate the efficiency of the random angle generator
		# The average of the produced angles should be at pi
		#
		#var sum = once new Container[Float](0.0)
		#var count = once new Container[Float](0.0)
		#sum.item += angle
		#count.item += 1.0
		#if count.item.to_i % 1000 == 0 then print "avg:{sum.item/count.item}/{count.item} i:{i} a:{angle} ({x}, {y}: {seed})"

		if w == 0 then return angle.cos
		return angle.sin
	end

	private fun gradient_dot_product(ix, iy: Int, x, y: Float): Float
	do
		var dx = x - ix.to_f
		var dy = y - iy.to_f

		return dx*gradient_vector(ix, iy, 0) + dy*gradient_vector(ix, iy, 1)
	end
end

redef universal Int
	# The value of the least-significant 30 bits of `self`
	#
	# This mask is used as compatibility with 32 bits architecture.
	# The missing 2 bits are used to tag integers by the Nit system.
	private fun mask: Int
	do
		return self & 0x3FFF_FFFF
	end
end

redef universal Float
	# Smoothened `self`, used by `ImprovedNoise`
	private fun fade: Float do return self*self*self*(self*(self*6.0-15.0)+10.0)
end

# Direct translation of Ken Perlin's improved noise Java implementation
#
# This implementation differs from `PerlinNoise` on two main points.
# This noise is calculated for a 3D point, vs 2D in `PerlinNoise`.
# `PerlinNoise` is based off a customizable seed, while this noise has a static data source.
class ImprovedNoise

	# Permutations
	private var p: Array[Int] = [151,160,137,91,90,15,
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
		138,236,205,93,222,114,67,29,24,72,243,141,128,195,78,66,215,61,156,180] * 2

	# Noise value in [-1..1] at 3D coordinates `x, y, z`
	fun noise(x, y, z: Float): Float
	do
		var xx = x.floor.to_i & 255
		var yy = y.floor.to_i & 255
		var zz = z.floor.to_i & 255

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
	private fun grad(hash: Int, x, y, z: Float): Float
	do
		var h = hash & 15
		var u = if h < 8 then x else y
		var v = if h < 4 then y else if h == 12 or h == 14 then x else z
		return (if h.is_even then u else -u) + (if h & 2 == 0 then v else -v)
	end
end
