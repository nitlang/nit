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

# Angle related service using `Float` to represent an angle in radians
module angles

import points_and_lines

redef class Point[N]
	# Arctangent function using the difference between `self` and `other` as trigonometric ratio
	#
	# Behave similarly to the toplevel `atan2` as it returns the angle in the appropriate quadrant.
	#
	# ~~~
	# var p0 = new Point[Float](0.0, 0.0)
	# var p1 = new Point[Float](1.0, 1.0)
	# assert p0.atan2(p1).is_approx(0.25*pi, 0.0001)
	# ~~~
	fun atan2(other: Point[N]): Float
	do
		var dx = other.x.to_f - x.to_f
		var dy = other.y.to_f - y.to_f
		return sys.atan2(dy.to_f, dx.to_f)
	end
end

redef universal Float
	# Normalize the `self` angle in radians to be within `[-pi .. pi[`
	#
	# ~~~
	# assert (1.5*pi).angle_normalize.is_approx(-0.5*pi, 0.0001)
	# assert 8.0.angle_normalize.is_approx(1.7168, 0.0001)
	# assert (-1.0).angle_normalize == -1.0
	# ~~~
	fun angle_normalize: Float
	do
		var s = self
		while s < -pi do s += 2.0*pi
		while s >= pi do s -= 2.0*pi
		return s
	end

	# Linear interpolation of between the angles `a` and `b`, in radians
	#
	# The result is normalized with `angle_normalize`.
	#
	# ~~~
	# assert 0.5.angle_lerp(0.0, pi).is_approx(0.5*pi, 0.0001)
	# assert 8.5.angle_lerp(0.0, pi).is_approx(0.5*pi, 0.0001)
	# assert 7.5.angle_lerp(0.0, pi).is_approx(-0.5*pi, 0.0001)
	# assert 0.5.angle_lerp(0.2, 2.0*pi-0.1).is_approx(0.05, 0.0001)
	# ~~~
	fun angle_lerp(a, b: Float): Float
	do
		var d = b - a
		while d > pi do d -= 2.0*pi
		while d < -pi do d += 2.0*pi
		return (a + d*self).angle_normalize
	end
end
