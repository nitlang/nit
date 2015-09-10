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

# Module containing all objects of the game
module objects

import geometry
import geometry::polygon
import geometry::boxes
import collision

# The ball is the main character of the game!
class Ball
	# Center of the ball
	var center: Point[Float] is writable
end

# Walls make the ball bounce on them
class Wall
	# Coordinates of the center of the wall
	var center: Point[Float]

	# Angle in radian
	var angle: Float

	# Scale for drawing `self`
	var scale: Float

	# Width of `self`
	var width: Float is noautoinit

	# Height of `self`
	var height: Float is noautoinit

	# Lines composing `self`
	var lines: Array[OrientedLine] is noautoinit

	# Initialize `self` with all its lines from `center` and `angle`
	init do
		self.height = 128.0
		self.width = 32.0
		var i = new Point[Float](0.0, 0.0)
		var j = new Point[Float](0.0, 0.0)

		var a = new Point[Float]((center.x - width/2.0), center.y)
		var b = new Point[Float]((center.x), (center.y - height/2.0))
		var c = new Point[Float]((center.x + width/2.0), center.y)
		var d = new Point[Float]((center.x), (center.y + height/2.0))

		var l1 = new OrientedLine(i, j, angle - pi/2.0, height * scale.to_f, rotate_point(a, center, angle))
		var l2 = new OrientedLine(i, j, angle, width * scale.to_f, rotate_point(b, center, angle))
		var l3 = new OrientedLine(i, j, angle - pi/2.0, height * scale.to_f, rotate_point(c, center, angle))
		var l4 = new OrientedLine(i, j, angle, width * scale.to_f, rotate_point(d, center, angle))
		lines = new Array[OrientedLine]
		lines.add_all([l1, l2, l3, l4])
	end
end

# A line represented with a center and an angle
class OrientedLine
	super Line[Float]
	redef type P: Point[Float]

	# Angle in radian
	var angle: Float is writable

	# Length
	var length: Float

	# Center
	var center: Point[Float]

	redef fun point_left
	do
		var luv = unit_vector(new Point[Float](angle.cos, angle.sin))
		var offset_from_center = new Point[Float](luv.x * (length / 2.0), luv.y * (length / 2.0))
		return new Point[Float](center.x + offset_from_center.x, center.y + offset_from_center.y)
	end

	redef fun point_right
	do
		var luv = unit_vector(new Point[Float](angle.cos, angle.sin))
		var offset_from_center = new Point[Float](luv.x * length / 2.0, luv.y * length / 2.0)
		return new Point[Float](center.x - offset_from_center.x, center.y - offset_from_center.y)
	end

	redef fun left do return point_left.x.min(point_right.x)
	redef fun right do return point_left.x.max(point_right.x)
end
