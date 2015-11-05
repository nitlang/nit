#this file is part of NIT ( http://www.nitlanguage.org ).
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

# All the logic of the game
module game_logic

import assets
import objects
import geometry::quadtree
import collision

redef class Ball

	# Scale for drawing the image of `self`
	var scale = 1.0

	# ASensorProximity value for modifying `scale`
	# Not used yet
	var scale_proximity_modifier = 6.0

	# Radius of `self`
	var radius = 32.0

	# Movement vector of `self`
	var offset = new Point[Float](0.0, 0.0)

	# Calculates the acceleration of `self`
	fun acceleration(x,y: Float)
	do
		var max_offset = 10.0
		var max_value = 9.80
		var offset_x = offset.x - x/max_value
		var offset_y = offset.y + y/max_value
		if offset_x > max_offset then offset_x = max_offset
		if offset_x < -max_offset then offset_x = -max_offset
		if offset_y > max_offset then offset_y = max_offset
		if offset_y < -max_offset then offset_y = -max_offset
		offset = new Point[Float](offset_x, offset_y)
	end

	# Do the collision detection, then move `self`consequently
	fun do_turn(game: Game)
	do
		offset = new Point[Float](offset.x * 0.98, offset.y * 0.98)
		var np = collision(game.quadtree)
		if np != null then
			offset = np
			center = new Point[Float](center.x + offset.x, center.y + offset.y)
		else
			center = new Point[Float](center.x + offset.x, center.y + offset.y)
		end
	end

	# Collision detection
	fun collision(quadtree: SQuadTree[OrientedLine]): nullable Point[Float]
	do

		var nx = self.center.x + offset.x
		var ny = self.center.y + offset.y
		var new_center = new Point[Float](nx, ny)
		var effective_radius = radius*scale
		# Lines intersecting with the ball
		var intersecting_lines = new Array[OrientedLine]

		# Line intersecting closest to the ball
		var intersecting_line: nullable OrientedLine = null

		# closest point of the intersecting line
		var closest_point: nullable Point[Float] = null

		# get the intersecting lines with help of the quadtree
		var lines = quadtree.items_overlapping(new_center.padded(effective_radius))
		for l in lines do
			if is_intersecting(new_center, l.point_left, l.point_right, effective_radius) then
				intersecting_lines.add(l)
			end
		end

		# get the line closest to the ball from the intersecting lines, setting the closest point
		var min_dist = 100.0
		if intersecting_lines.length >= 2 then
			for l in intersecting_lines do
				var closest = point_closest_to_line(new_center, l.point_left, l.point_right)
				var distance = distance(closest, new_center)
				if distance < min_dist then
					min_dist = distance
					intersecting_line = l
					closest_point = closest
				end
			end
		else if intersecting_lines.length == 1 then
			intersecting_line = intersecting_lines[0]
			closest_point = point_closest_to_line(new_center, intersecting_line.point_left, intersecting_line.point_right)
		end

		if intersecting_line != null and closest_point != null then
			return bounce(center, intersecting_line.point_left, intersecting_line.point_right, offset)
		end
		return null
	end

	# Event interception
	fun intercepts(event: InputEvent): Bool is abstract
end

# The core of the game
class Game

	# The Ball!
	var ball: Ball is noinit

	# List of walls in the level
	var walls: Array[Wall] is noinit

	# Width of the display
	var width: Float

	# Heightof the display
	var height: Float

	# Quadtree used for collision detection
	var quadtree: SQuadTree[OrientedLine] is noinit

	init
	do
		ball = new Ball(new Point[Float](width/2.0, height/2.0))
		# Walls initialisation
		var walla = new Wall(new Point[Float](width/4.0, height/4.0), pi/3.0, 1.0)
		var wallb = new Wall(new Point[Float](width*0.75, height/4.0), 0.0, 1.0)
		var wallc = new Wall(new Point[Float](width/4.0, height*0.75), 0.0, 1.0)
		var walld = new Wall(new Point[Float](width*0.75, height*0.75), pi/3.0, 1.0)
		walls = new Array[Wall].with_items(walla, wallb, wallc, walld)

		# adding screen bordures
		var i = new Point[Float](0.0,0.0)
		var a = new Point[Float](0.0, height/2.0)
		var b = new Point[Float](width/2.0, 0.0)
		var c = new Point[Float](width, height/2.0)
		var d = new Point[Float](width/2.0, height)

		var l1 = new OrientedLine(i, i, pi/2.0, height, a)
		var l2 = new OrientedLine(i, i, 0.0, width, b)
		var l3 = new OrientedLine(i, i, pi/2.0, height, c)
		var l4 = new OrientedLine(i, i, 0.0, width, d)

		quadtree = new SQuadTree[OrientedLine](5, width, height)
		for w in walls do for l in w.lines do
			quadtree.add(l)
		end
		quadtree.add(l1)
		quadtree.add(l2)
		quadtree.add(l3)
		quadtree.add(l4)
	end

	# Only calls `do_turn` of the ball for the moment
	fun do_turn do ball.do_turn(self)

	# Input gestion
	fun input(ie: InputEvent): Bool do return false
end

redef class App

	# Assets used in all the app
	var assets = new Assets

	redef fun on_create do
		super
		assets.load
	end
end
