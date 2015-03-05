# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Provides the noise generators `PerlinNoise` and `InterpolatedNoise`
module noise

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
	var seed: Int = 19559.rand is lazy, writable
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
# 7778887888899999888777666666666666666667777877776666666677777777788888
# 7788877788899999998877776666666666666667777777766666666667777777778888
# 77877777888999aa999888777777776666666667777777666666666666667777778888
# 7777777888899aaaa99988877777776666666667777777666666666666667777778888
# 7777777888899aaaa99998877777776666666667777777666666666666666777778888
# 7777778888999aaaa99999887777777666666666777667666666666656667777788888
# 7777778888899aaaa99999888877776666666666666666666666666555666777888888
# 7777778888999aaaa99999888887777666666666666666666666666555666778888888
# 6677778888999aaaa99999888887777666666677766666666666666555667778888888
# 6677788889999aaa999998888877777766666677766667666666666656667788888888
# 777788889999999a999998888777777766666677777777766666666666667788888888
# 6677888899999999999988888777667776677777777777766666666666666788888888
# 6677888999999999999988888776667777777777777777766666665566666788888888
# 6777788999999999998888887766667777777777777777666666665566666788888889
# 6777788999999999998888877766677777777777777777667666655566666788988999
# 7777888999988999988888877766677777777777877777777665555666667788999999
# 6778888899888889988888877766666777777777777776666665555666667888999999
# 7788888899888888888888877666666777777777777766666665556666677888898999
# 7788888899888888888888776666666777777777777666666666566666677888899999
# 7788889998888888888877766666666777777777777666666666666666777888899999
# 7888999988888888888777666666666777777777776666666666666667777788899988
# 7888999988888887777776666666666777777777776666766666666677788888899988
# 7788999998888877777776666666666777777777776667776666667778888888899988
# 7788999988888777777776666666666777776677766777776677777788888889999988
# 6788999988888777777766666666666677676677667777766677777888999999999998
# 7788888888888777777776666666666666676677777776666777778889999999999998
# 6778888888888777777766666566666666667777666776667777888999999999999999
# 6778888888888777777766666566666666667776666776667778889999999999999999
# 6778888888777777777666666566666666667776666777677788899999999999888999
# 6777787777777777776666666666666666677777677777777888999999999998888899
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
		return value + 2935391 % 954847
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
# 8777766666666666777787777666666666667777888999aaaaaaaaa999888777766666
# 88877776666666667777777766666666666667777889999aaaaaaa9999887777666666
# 98887777776666667777777666666666666666777889999aaaaaaa9999887776666666
# 998888777777766777777776666666666666667778889999aaaaa99998887776666666
# a998888777777777777777666666666666666667778899999aaa999998877766666666
# aa99888877777777777777666666655566666667778899999999999998877766666665
# aa99988877777777777777666666555556666667778889999999999988877766666655
# aaa9988887777777777777666665555555666667778889999999999988877766666555
# baa9998887777777777776666665555555666666778889999999999988877666666555
# baa9998887777777777776666665555555666666778889999999999988877666666555
# baa9998887777777777776666655555555566666778889999999999988877666665555
# baa9998887777777777776666665555555666666778889999999999988877666666555
# baa9998887777777777776666665555555666666778889999999999988877666666555
# aaa9988887777777777777666665555555666667778889999999999988877766666555
# aa99988877777777777777666666555556666667778889999999999988877766666655
# aa99888877777777777777666666655566666667778899999999999998877766666665
# a998888777777777777777666666666666666667778899999aaa999998877766666666
# 998888777777766777777776666666666666667778889999aaaaa99998887776666666
# 98887777776666667777777666666666666666777889999aaaaaaa9999887776666666
# 88877776666666667777777766666666666667777889999aaaaaaa9999887777666666
# 8777766666666666777787777666666666667777888999aaaaaaaaa999888777766666
# 777766666666666667777777777666677777778889999aaaaaaaaaa999887777666666
# 7776666666666666667777777777777777778888999aaaaaaaaaaa9999887776666666
# 777666666666666666777777777777777888889999aaaaaaaaaaaa9998887776666666
# 7766666666666666666777777777778888889999aaaaaaaaaaaaa99998877766666666
# 776666666555666666677777777888888899999aaaaaaaaaaaaaa99998877766666665
# 7766666655555666666777777788888899999aaaaaaaaaaaaaaa999988877766666655
# 776666655555556666677777788888999999aaaaaaaaaaaaaaaa999988877766666555
# 7666666555555566666677778888899999aaaaaabbbbaaaaaaa9999888777666666555
# 766666655555556666667778888899999aaaaaabbbbaaaaaaa99999888777666666555
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

		# Return value in [min...max] from val in [-0.5...0.5]
		val += 0.5
		return val.lerp(min, max)
	end

	# Get the gradient vector at `x`, `y` on the axis `w`
	#
	# Returns a value between 0.0 and 1.0.
	#
	# Require: `w == 0 or w == 1`
	protected fun gradient_vector(x, y, w: Int): Float
	do
		assert w == 0 or w == 1

		# Use our own deterministic pseudo random number generator
		#
		# These magic prime numbers were determined good enough by
		# non-emperical experimentation. They may need to be changed/improved.
		var i = 17957*seed + 45127*x + 22613*y + 36919*w
		var mod = 19031

		return (i%mod).to_f/mod.to_f
	end

	private fun gradient_dot_product(ix, iy: Int, x, y: Float): Float
	do
		var dx = x - ix.to_f
		var dy = y - iy.to_f

		return dx*gradient_vector(ix, iy, 0) + dy*gradient_vector(ix, iy, 1)
	end
end
