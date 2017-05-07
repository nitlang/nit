# This file is part of NIT (http://www.nitlanguage.org).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Interfaces and classes to represent basic geometry needs.
module points_and_lines is serialize

import serialization

# Abstract 2d point, strongly linked to its implementation `Point`
interface IPoint[N: Numeric]

	# Horizontal coordinate
	fun x: N is abstract

	# Vertical coordinate
	fun y: N is abstract

	redef fun to_s do return "({x}, {y})"

	# Distance with `other`
	#
	# ~~~
	# var p0 = new Point[Float](0.0, 0.0)
	# var p1 = new Point[Float](2.0, 3.0)
	# assert p0.dist(p1).is_approx(3.6, 0.01)
	# ~~~
	#
	# TODO 3D implementation.
	fun dist(other: Point[Numeric]): N
	do
		return x.value_of(dist2(other).to_f.sqrt)
	end

	# Square of the distance with `other`
	#
	# May be used as an approximation to compare distance between two points.
	#
	# ~~~
	# var p0 = new Point[Float](0.0, 0.0)
	# var p1 = new Point[Float](2.0, 3.0)
	# assert p0.dist2(p1) == 13.0
	# ~~~
	#
	# TODO 3D implementation.
	fun dist2(other: Point[Numeric]): N
	do
		var dx = other.x.sub(x)
		var dy = other.y.sub(y)
		var s = (dx.mul(dx)).add(dy.mul(dy))
		return x.value_of(s)
	end

	# Linear interpolation between `self` and `other` at `p` out of `1.0`
	#
	# ~~~
	# var p0 = new Point[Float](0.0, 0.0)
	# var p1 = new Point[Float](2.0, 3.0)
	# assert p0.lerp(p1, 0.0) == p0
	# assert p0.lerp(p1, 1.0) == p1
	# assert p0.lerp(p1, 0.5) == new Point[Float](1.0, 1.5)
	# ~~~
	#
	# TODO 3D implementation.
	fun lerp(other: Point[Numeric], p: Float): Point[N]
	do
		var xx = x.to_f + (other.x.to_f - x.to_f).to_f * p
		var yy = y.to_f + (other.y.to_f - y.to_f).to_f * p
		return new Point[N](x.value_of(xx), y.value_of(yy))
	end

	redef fun ==(o) do return o isa IPoint[Numeric] and o.x == x and o.y == y
end

# 2D point with `x` and `z`
class Point[N: Numeric]
	super IPoint[N]

	redef var x: N is writable
	redef var y: N is writable
end

# Abstract 3d point, strongly linked to its implementation `Point3d`
interface IPoint3d[N: Numeric]
	super IPoint[N]

	# Depth coordinate
	fun z: N is abstract

	redef fun to_s do return "({x}, {y}, {z})"
end

# 3D point with `x`, `y` and `z`
class Point3d[N: Numeric]
	super IPoint3d[N]
	super Point[N]

	redef var z: N is writable
end

# Abstract 2D line segment between two ordered points
interface ILine[N: Numeric]
	# The type of points that ends the segment
	type P: IPoint[N]

	# Point at the left-end of the segment
	fun point_left: P is abstract

	# Point at the right-end of the segment
	fun point_right: P is abstract

	redef fun to_s do return "{point_left}--{point_right}"
end

# 2D line segment between two ordered points
class Line[N: Numeric]
	super ILine[N]

	redef var point_left
	redef var point_right

	init
	do
		var a = point_left
		var b = point_right
		if a.x > b.x then
			point_left = b
			point_right = a
		end
	end
end

# Abstract 3D line segment between two ordered points
interface ILine3d[N: Numeric]
	super ILine[N]

	redef type P: IPoint3d[N]
end

# 3D line segment between two ordered points
class Line3d[N: Numeric]
	super Line[N]
	super ILine3d[N]
end
