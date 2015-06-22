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

# Geometric computations around vectors and points for collision detection
module collision

import geometry

# trigonometry

# Get the distance between `p1` and `p2`
fun distance(p1, p2: Point[Float]): Float
do
	var x = p1.x - p2.x
	var y = p1.y - p2.y
	return ( x * x + y * y ).sqrt
end

# Get the magnitude (length) of `vector`
fun magnitude(vector: Point[Float]): Float do return ( vector.x * vector.x + vector.y * vector.y ).sqrt

# Get the unit vector of `vector`
fun unit_vector(vector: Point[Float]): Point[Float] do return new Point[Float](vector.x / magnitude(vector), vector.y / magnitude(vector))

# Get the dot product of vectors `v1` and `v2`
fun dot_product(v1, v2: Point[Float]): Float do return v1.x * v2.x + v1.y * v2.y

# Get the vector between `start_point` and `end_point`
fun vector_between(start_point, end_point: Point[Float]): Point[Float] do return new Point[Float](end_point.x - start_point.x, end_point.y - start_point.y)

# Returns the point on a line with endpoints `l1` and `l2` closest to `center`
fun point_closest_to_line(center, l1, l2: Point[Float]): Point[Float]
do
	var luvector = unit_vector(vector_between(l1, l2))
	var l_to_ball = vector_between(l1, center)

	var projection = dot_product(l_to_ball, luvector)

	if projection <= 0.0 then return l1
	if projection >= distance(l1, l2) then return l2
	return new Point[Float](l1.x + luvector.x * projection, l1.y + luvector.y * projection)
end

# Is the ball with the `center` and `radius` intersecting the line with the endpoints `l1` and `l2`?
fun is_intersecting(center, l1, l2: Point[Float], radius: Float): Bool
do
	var closest = point_closest_to_line(center, l1, l2)
	var distance = distance(center, closest)
	return distance < radius
end

# Bouncing function, returns the new point of the center of the ball
fun bounce(center, l1, l2, offset: Point[Float]): Point[Float]
do
	var bln = bounce_line_normal(center, l1, l2)
	var dot = dot_product(offset, bln)
	return new Point[Float](offset.x - (2.0 * dot * bln.x), offset.y - (2.0 * dot * bln.y))
end

private fun bounce_line_normal(center, l1, l2: Point[Float]): Point[Float]
do
	var p = point_closest_to_line(center, l1, l2)
	var v = vector_between(p, center)
	return unit_vector(v)
end

# Rotate `p` around `center` through `angle`
fun rotate_point(p, center: Point[Float], angle: Float): Point[Float]
do
	var s = angle.sin
	var c = angle.cos

	var nx = c * (p.x - center.x) - s * (p.y - center.y) + center.x
	var ny = s * (p.x - center.x) + c * (p.y - center.y) + center.y
	return new Point[Float](nx, ny)
end
