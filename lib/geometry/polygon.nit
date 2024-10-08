# This file is part of NIT (https://nitlanguage.org).
#
# Copyright 2015 Romain Chanoir <romain.chanoir@viacesi.fr>
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

# Convex Polygons manipulations
module polygon

import points_and_lines

# Abstraction of a Polygon
abstract class APolygon
	# Vertices of this polygon
	var points: Array[Point[Float]]

	init do assert points.length >= 3

	# Get an array of the x coordinates of the vertices
	private fun x_coordinates: Array[Float] do
		return [for p in points do p.x]
	end

	# Get an array of the y coordinates of the vertices
	private fun y_coordinates: Array[Float] do
		return [for p in points do p.y]
	end

	# Get a matrice containing the coordinates of the vertices
	private fun vertices: Array[Array[Float]] do
		var vertices = new Array[Array[Float]]
		for i in [0..points.length[ do
			var temp = new Array[Float]
			temp.add(points[i].x)
			temp.add(points[i].y)
			vertices.add(temp)
		end
		return vertices
	end

	# Returns the axes corresponding to the edges of the polygon, used for collision detection
	private fun axes: Array[Point[Float]] do
		var axes = new Array[Point[Float]]
		for i in [0..points.length[ do
			var p1 = new Point[Float](points[i].x, points[i].y)
			var p2 = new Point[Float](points[(i+1) % points.length].x, points[(i+1) % points.length].y)
			var edge = new Point[Float](p1.x - p2.x, p1.y - p2.y)
			var normal = new Point[Float](-edge.y, edge.x)
			axes[i] = normal
		end
		return axes
	end

	# Sort the vertices in counter clockwise order
	#
	# ~~~
	# var p1 = new Point[Float](0.0, 0.0)
	# var p2 = new Point[Float](5.0, 0.0)
	# var p3 = new Point[Float](0.0, 5.0)
	# var p4 = new Point[Float](5.0, 5.0)
	# var arr = new Array[Point[Float]].with_items(p1, p2, p3, p4)
	# var poly = new ConvexPolygon(arr)
	# poly.sort_ccw
	# assert poly.points == [p4, p2, p1, p3]
	# ~~~
	fun sort_ccw do
		var sorter = new CounterClockWiseSort.with_center(vertices)
		sorter.sort(points)
	end

	# Sort the vertices in clockwise order
	#
	# ~~~
	# var p1 = new Point[Float](0.0, 0.0)
	# var p2 = new Point[Float](5.0, 0.0)
	# var p3 = new Point[Float](0.0, 5.0)
	# var p4 = new Point[Float](5.0, 5.0)
	# var arr = new Array[Point[Float]].with_items(p1, p2, p3, p4)
	# var poly = new ConvexPolygon(arr)
	# poly.sort_cw
	# assert poly.points == [p3, p1, p2, p4]
	# ~~~
	fun sort_cw do
		var sorter = new ClockWiseSort.with_center(vertices)
		sorter.sort(points)
	end

	# Is `self` convex ?
	#
	# ~~~
	# var p1 = new Point[Float](0.0, 0.0)
	# var p2 = new Point[Float](5.0, 0.0)
	# var p3 = new Point[Float](0.0, 5.0)
	# var p4 = new Point[Float](5.0, 5.0)
	# var arr = new Array[Point[Float]].with_items(p1, p2, p3, p4)
	# var poly = new ConvexPolygon(arr)
	# poly.sort_ccw
	# assert poly.is_convex
	# ~~~
	fun is_convex: Bool do
		var prev = points[points.length - 2]
		var curr = points[points.length - 1]
		var next = points[0]
		var is_ccw = turn_left(prev, curr, next)
		for i in [1..points.length[ do
			prev = curr
			curr= next
			next = points[i]
			if turn_left(prev ,curr, next) != is_ccw then return false
		end
		return true
	end

	# Generate a projection of an edge of the polygon on a given axis
	private fun project(axis: Point[Float]): Projection do
		var min = axis.x * points[0].x + axis.y * points[0].y
		var max = min
		for i in [0..points.length[ do
			var p = axis.x * points[i].x + axis.y * points[i].y
			if p < min then min = p
			if p > max then max = p
		end
		var projection = new Projection(min, max)
		return projection
	end

	# Remove  `p` from the vertices, keeping at least 3 vertices
	fun delete_vertex(p: Point[Float]) do
		assert points.length > 3
		points.remove(p)
	end

	# Does `self` intersects with `other`
	fun intersects(other: APolygon): Bool is abstract

	# Is `p` contained in `self` ?
	fun contain(p: Point[Float]): Bool is abstract

	# Add a vertex to `self`
	fun add_vertex(p: Point[Float]): Bool do
		points.add(p)
		return true
	end
end

# A simple polygon
class Polygon
	super APolygon
	# TODO: implement algorithms for concave polygons ?
end

# Convex Polygon class
class ConvexPolygon
	super APolygon

	# Does this polygon intersects `other` ?
	#
	# ~~~
	# var p1 = new Point[Float](0.0, 0.0)
	# var p2 = new Point[Float](5.0, 0.0)
	# var p3 = new Point[Float](0.0, 5.0)
	# var p4 = new Point[Float](5.0, 5.0)
	# var arr = new Array[Point[Float]].with_items(p1, p2, p3, p4)
	# var poly = new ConvexPolygon(arr)
	# poly.sort_ccw
	# p1 = new Point[Float](2.5, 2.5)
	# p2 = new Point[Float](7.5, 2.5)
	# p3 = new Point[Float](2.5, 7.5)
	# p4 = new Point[Float](7.5, 7.5)
	# arr = new Array[Point[Float]].with_items(p1, p2, p3, p4)
	# var poly2 = new ConvexPolygon(arr)
	# poly2.sort_ccw
	# assert poly.intersects(poly2)
	# ~~~
	redef fun intersects(other) do
		assert is_convex

		var axes1 = axes
		var axes2 = other.axes
		for axis in axes1 do
			var project1 = project(axis)
			var project2 = other.project(axis)
			if not project1.overlap(project2) then return false
		end
		for axis in axes2 do
			var project1 = project(axis)
			var project2 = other.project(axis)
			if not project1.overlap(project2) then return false
		end
		return true
	end

	# ~~~
	# var p1 = new Point[Float](0.0, 0.0)
	# var p2 = new Point[Float](5.0, 0.0)
	# var p3 = new Point[Float](0.0, 5.0)
	# var p4 = new Point[Float](5.0, 5.0)
	# var p5 = new Point[Float](2.5, 2.5)
	# var arr = new Array[Point[Float]].with_items(p1, p2, p3, p4)
	# var poly = new ConvexPolygon(arr)
	# poly.sort_ccw
	# assert poly.contain(p5)
	# ~~~
	redef fun contain(p) do
		var prev = points[points.length - 1]
		var curr = p
		var next = points[0]
		var is_ccw = turn_left(prev, curr, next)
		for i in [1..points.length[ do
			prev = next
			next = points[i]
			if turn_left(prev, curr, next) != is_ccw then return false
		end
		return true
	end

	# Check if the order of the points in the polygon is counter-clockwise
	# The vertices in the polygon need to be sorted
	#
	# ~~~
	# var p1 = new Point[Float](0.0, 0.0)
	# var p2 = new Point[Float](5.0, 0.0)
	# var p3 = new Point[Float](0.0, 5.0)
	# var p4 = new Point[Float](5.0, 5.0)
	# var arr = new Array[Point[Float]].with_items(p1, p2, p3, p4)
	# var poly = new ConvexPolygon(arr)
	# poly.sort_ccw
	# assert poly.is_ccw
	# ~~~
	fun is_ccw: Bool do
		var min = points[0].y
		var min_index = 0
		for i in [1..points.length - 1[ do
			if points[i].y < min then
				min = points[i].y
				min_index = i
			end
		end
		var prev = points[(min_index - 1 + points.length) % points.length]
		var next = points[(min_index + 1) % points.length]
		return not turn_left(prev, points[min_index], next)
	end



	# Add a vertex to the polygon
	#
	# ~~~
	# var p1 = new Point[Float](0.0, 0.0)
	# var p2 = new Point[Float](5.0, 0.0)
	# var p3 = new Point[Float](0.0, 5.0)
	# var p4 = new Point[Float](5.0, 5.0)
	# var arr = new Array[Point[Float]].with_items(p1, p2, p3, p4)
	# var poly = new ConvexPolygon(arr)
	# var p5 = new Point[Float](2.5, 7.5)
	# assert poly.add_vertex(p5)
	# ~~~
	redef fun add_vertex(p) do
		assert points.length >= 3
		var temp_list = points.clone
		temp_list.add(p)
		var temp_polygon = new ConvexPolygon(temp_list)
		temp_polygon.sort_ccw
		if temp_polygon.is_convex then
			points = temp_polygon.points
			return true
		else
			return false
		end
	end
end

# Projection of an edge of a `ConvexPolygon` used for intersection test
private class Projection
	var min: Float is writable
	var max: Float is writable

	fun overlap(other: Projection): Bool do return not (min > other.max or other.min > max)
end

private class PointXCompare
	super Comparator

	redef type COMPARED: Point[Float]

	redef fun compare(a,b) do
		if a.x == b.x then
			if a.y == b.y then return 0
			if a.y > b.y then return - 1
			return 1
		else
			if a.x > b.x then return -1
			return 1
		end
	end
end

# Sorter for polygon vertices
private abstract class PolygonSorter
	super Comparator

	redef type COMPARED: Point[Float]

	# Center of the polygon's points
	var center: COMPARED

	# init calculating the center
	init with_center(pts : Array[Array[Float]]) do
		init(calc_center(pts))
	end

	# Calculate the center
	fun calc_center(pts : Array[Array[Float]]): COMPARED do
		var sumx = 0.0
		var sumy = 0.0
		for ap in pts do
			sumx += ap[0]
			sumy += ap[1]
		end
		return new Point[Float](sumx / pts.length.to_f, sumy / pts.length.to_f)
	end
end

#TODO: CounterClockWise and ClockWise sorts are broken in some cases of concave polygons

# Sort the vertices of a polygon in counter clockwise order
private class CounterClockWiseSort
	super PolygonSorter

	redef fun compare(a,b) do
		if a.x == b.x and a.y == b.y then return 0
		if a.x - center.x >= 0.0 and b.x - center.x < 0.0 then return -1
		if a.x - center.x < 0.0 and b.x - center.x >= 0.0 then return 1
		if a.x - center.x == 0.0 and b.x - center.x == 0.0 then
			if a.y - center.y >= 0.0 or b.y - center.y >= 0.0 then
				if a.y > b.y then return -1
				return 1
			end
			if b.y > a.y then return -1
			return 1
		end

		var det = (a.x - center.x) * (b.y - center.y) - (b.x - center.x) * (a.y - center.y)
		if det > 0.0 then return 1
		if det < 0.0 then return -1

		var d1 = (a.x - center.x) * (a.x - center.x) + (a.y - center.y) * (a.y - center.y)
		var d2 = (b.x - center.x) * (b.x - center.x) + (b.y - center.y) * (b.y - center.y)
		if d1 > d2 then return -1
		return 1
	end
end

# Sort the vertices of a polygon in clockwise order
private class ClockWiseSort
	super PolygonSorter

	redef fun compare(a,b) do
		if a.x == b.x and a.y == b.y then return 0
		if a.x - center.x >= 0.0 and b.x - center.x < 0.0 then return 1
		if a.x - center.x < 0.0 and b.x - center.x >= 0.0 then return -1
		if a.x - center.x == 0.0 and b.x - center.x == 0 then
			if a.y - center.y >= 0.0 or b.y - center.y >= 0.0 then
				if a.y > b.y then return 1
				return -1
			end
			if b.y > a.y then return 1
			return -1
		end

		var det = (a.x - center.x) * (b.y - center.y) - (b.x - center.x) * (a.y - center.y)
		if det > 0.0 then return -1
		if det < 0.0 then return 1

		var d1 = (a.x - center.x) * (a.x - center.x) + (a.y - center.y) * (a.y - center.y)
		var d2 = (b.x - center.x) * (b.x - center.x) + (b.y - center.y) * (b.y - center.y)
		if d1 > d2 then return 1
		return -1
	end
end

# Get the convex hull of the set of `points`
#
# ~~~
# var p1 = new Point[Float](0.0, 0.0)
# var p2 = new Point[Float](5.0, 0.0)
# var p3 = new Point[Float](0.0, 5.0)
# var p4 = new Point[Float](5.0, 5.0)
# var p5 = new Point[Float](2.5, 2.5)
# var arr = new Array[Point[Float]].with_items(p1, p2, p3, p4, p5)
# var poly = convex_hull(arr)
# assert poly.points == [p4, p3, p1, p2]
# ~~~
fun convex_hull(points: Array[Point[Float]]): ConvexPolygon do
	var sorter = new PointXCompare
	sorter.sort(points)
	var l = points.length

	var pl1 = new Array[Point[Float]]
	var pl2 = new Array[Point[Float]]
	for i in [0..l[ do
		while pl2.length >= 2 and not turn_left(pl2[pl2.length - 2], pl2[pl2.length - 1], points[i]) do
			pl2.remove(pl2.last)
		end
		pl2.add(points[i])
	end
	var i = l - 1
	while i >= 0 do
		while pl1.length >= 2 and not turn_left(pl1[pl1.length - 2], pl1[pl1.length - 1], points[i]) do
			pl1.remove(pl1.last)
		end
		pl1.add(points[i])
		i-= 1
	end
	pl1.remove_at(pl1.length - 1)
	pl2.remove_at(pl2.length -1)
	pl2.add_all(pl1)
	return new ConvexPolygon(pl2)
end

# Is the angle between [p1,p2] and [p2,p3] going left (counter clockwise) or right (clockwise) ?
#
# ~~~
# var p1 = new Point[Float](0.0, 0.0)
# var p2 = new Point[Float](5.0, 0.0)
# var p3 = new Point[Float](0.0, 5.0)
# assert turn_left(p1, p2, p3)
# ~~~
fun turn_left(p1, p2, p3: Point[Float]): Bool do
	return ((p2.x - p1.x) * (p3.y - p2.y) - (p3.x - p2.x) * (p2.y - p1.y)) > 0.0
end

# Split a polygon into triangles
#
# Useful for converting a concave polygon into multiple convex ones.
#
# See: the alternative `triangulate_recursive` uses arrays in-place.
fun triangulate(points: Array[Point[Float]]): Array[ConvexPolygon]
do
	var results = new Array[ConvexPolygon]
	triangulate_recursive(points.clone, results)
	return results
end

# Split a polygon into triangles using arrays in-place
#
# Consumes the content of `points` and add the triangles to `results`.
#
# See: the alternative `triangulate` which does not modify `points` and returns a new array.
fun triangulate_recursive(points: Array[Point[Float]], results: Array[ConvexPolygon]) do
	if points.length == 3 then
		results.add(new ConvexPolygon(points))
		return
	end
	var prev = points[points.length - 1]
	var curr = points[0]
	var next = points[1]
	for i in [1..points.length[ do
		if turn_left(prev, curr, next) then
			prev = points[i-1]
			curr = next
			if i+1 == points.length then next = points[points.length - 1] else next = points[i+1]
			continue
		end
		var contains = false
		var triangle = new ConvexPolygon(new Array[Point[Float]].with_items(prev, curr, next))
		for p in points do
			if p != prev and p != curr and p != next then
				if triangle.contain(p) then
					contains = true
					break
				end
			end
		end
		if not contains then
			results.add(triangle)
			points.remove(curr)
			triangulate_recursive(points, results)
			break
		end
		prev = points[i-1]
		curr = next
		if i+1 == points.length then next = points[points.length - 1] else next = points[i+1]
	end
end
