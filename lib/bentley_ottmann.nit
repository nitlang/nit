# This file is part of NIT (http://www.nitlanguage.org).
#
# Copyright 2011-2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Implements the Bentley-Ottmann algorithm to detect intersections
# between line segments.
#
#
# Usage example:
#
#	class MyPoint[N: Int]
#		super Extremity[N]
#	
#		redef var x: N
#		redef var y: N
#	
#		init(x, y: N)
#		do
#			self.x = x
#			self.y = y
#		end
#	end
#
#	# a   d
#	#  \ /
#	#   X
#	#  / \
#	# c   b
#	var na = new MyPoint(0, 0)
#	var nb = new MyPoint(4, 4)
#	var nc = new MyPoint(0, 4)
#	var nd = new MyPoint(4, 0)
#	
#	var lab = new LineSegment[Int](na, nb)
#	var lcd = new LineSegment[Int](nc, nd)
#	
#	var lines = [lab, lcd]
#	var boa = new BentleyOttmann[Int]
#	var intersections = boa.intersections_in(lines)
#
#	assert intersections.length == 1
module bentley_ottmann

import geometry

# An extremity to a line segment
#
# Sub-class with your own classes (or Point) according to your
# buisness logic
abstract class Extremity[N: Numeric]
	super Pointable[N]

	private var line: nullable LineSegment[N] = null
	private var is_left: nullable Bool = null
end

# An intersection between two line segments
#
# Are instanciated and returned by BentleyOttman::intersections_in
class Intersection[N: Numeric]
	super Point[N]

	var lines = new ArraySet[LineSegment[N]]
	
	var line_a: LineSegment[N]
	var line_b: LineSegment[N]
	
	protected init(x, y: N, line_a, line_b: LineSegment[N])
	do
		super

		lines.add(line_a)
		lines.add(line_b)
		
		self.line_a = line_a
		self.line_b = line_b
	end

	redef fun hash do return line_a.hash + line_b.hash
	redef fun ==(o) do return o isa Intersection[N] and
		((line_a == o.line_a and line_b == o.line_b) or
		 (line_a == o.line_b and line_b == o.line_a))
end

# A line segment between two points (or extremities)
class LineSegment[N: Numeric]
	var points: Set[Extremity[N]] = new HashSet[Extremity[N]]
	
	var left_extremity: Extremity[N]
	var right_extremity: Extremity[N]
	
	private var swept_at_y: N
	
	init(point_a, point_b: Extremity[N])
	do
		points.add(point_a)
		points.add(point_b)
		
		var a_is_left = (point_a.x == point_b.x and point_a.y < point_b.y) or point_a.x < point_b.x
		point_a.is_left = a_is_left
		point_b.is_left = not a_is_left
		
		if a_is_left then
			self.left_extremity = point_a
			self.right_extremity = point_b
		else
			self.left_extremity = point_b
			self.right_extremity = point_a
		end
		
		for point in points do point.line = self
		
		self.swept_at_y = point_a.y.zero
	end
	
	fun intersection_with(o: LineSegment[N]): nullable Intersection[N]
	do
		var x1 = left_extremity.x
		var x2 = right_extremity.x
		var x3 = o.left_extremity.x
		var x4 = o.right_extremity.x
		var y1 = left_extremity.y
		var y2 = right_extremity.y
		var y3 = o.left_extremity.y
		var y4 = o.right_extremity.y
		
		var divisor = (y4-y3)*(x2-x1) - (x4-x3)*(y2-y1)
		if divisor.is_zero then return null
		var dividend = (x4-x3)*(y1-y3) - (y4-y3)*(x1-x3)

		var intersection = new Intersection[N](
			left_extremity.x + dividend * (right_extremity.x - left_extremity.x) / divisor,
			left_extremity.y + dividend * (right_extremity.y - left_extremity.y) / divisor,
			self, o)
									 
		if intersection.x >= left_extremity.x and intersection.x <= right_extremity.x and
		   ((left_extremity.y < right_extremity.y and intersection.y >= left_extremity.y and
		     intersection.y <= right_extremity.y) or
			 (left_extremity.y >= right_extremity.y and intersection.y <= left_extremity.y and
			  intersection.y >= right_extremity.y)) then
			return intersection
		else
			return null
		end
	end
	
	redef fun to_s do return "<{left_extremity}-{right_extremity}>"
end

class SortOnX
	super AbstractSorter[Pointable[Numeric]]

	redef fun compare(a, b)
	do
		var cx = a.x <=> b.x
		if cx != 0 then return cx
		return a.y <=> b.y
	end
end

class SortOnSweptAtY
	super AbstractSorter[LineSegment[Numeric]]

	redef fun compare(a, b) do return a.swept_at_y <=> b.swept_at_y
end

class BentleyOttmann[N: Numeric]
	fun intersections_in(lines: Collection[LineSegment[N]]): Set[Intersection[N]]
	do
		# Future event (triggers and possible intersections)
		# FIXME use a binary search tree instead of an Array
		var schedule = new Array[Pointable[N]]
		for line in lines do for point in line.points do
			schedule.add(point)
		end
		sorter_on_x.sort schedule

		var intersections = new HashSet[Intersection[N]]

		var sweep_line = new Array[LineSegment[N]]

		while not schedule.is_empty do
			var e = schedule.shift

			if e isa Extremity[N] then
				var seg_e = e.line.as(not null)
				if e.is_left.as(not null) then
					seg_e.swept_at_y = e.y
					sorter_on_swept_at_y.insert_sorted(sweep_line, seg_e)
		
					var index_e = sweep_line.index_of(seg_e)
					if index_e > 0 then # segment r
						var seg_1 = sweep_line[index_e-1]
						var intersection = seg_e.intersection_with(seg_1)
						if intersection != null and intersection.x >= e.x then sorter_on_x.insert_sorted(schedule, intersection)
					end
					if index_e < sweep_line.length-1 then # segment t
						var seg_2 = sweep_line[index_e+1]
						var intersection = seg_e.intersection_with(seg_2)
						if intersection != null and intersection.x >= e.x then sorter_on_x.insert_sorted(schedule, intersection)

						if index_e > 0 then # segment r
							var seg_1 = sweep_line[index_e-1]
							intersection = seg_1.intersection_with(seg_2)
							if intersection != null and intersection.x >= e.x then sorter_on_x.insert_sorted(schedule, intersection)
						end
					end
				else
					var index_e = sweep_line.index_of(seg_e)
					if index_e > 0 and index_e < sweep_line.length-1 then
						var seg_1 = sweep_line[index_e-1]
						var seg_2 = sweep_line[index_e+1]
				
						var intersection = seg_1.intersection_with(seg_2)

						# TODO check if intersection is in schedule
						if intersection != null and intersection.x >= e.x then sorter_on_x.insert_sorted(schedule, intersection)
					end
					sweep_line.remove(seg_e)
				end
			else if e isa Intersection[N] then
				intersections.add(e)
		
				for line in e.lines do line.swept_at_y = e.y
		
				var seg_1
				var seg_2
		
				if sweep_line.index_of(e.line_a) < sweep_line.index_of(e.line_b) then
					# line_a is above line_b
					seg_1 = e.line_a
					seg_2 = e.line_b
				else
					seg_1 = e.line_b
					seg_2 = e.line_a
				end
		
				# swap
				sweep_line.swap_at(sweep_line.index_of(e.line_a), sweep_line.index_of(e.line_b))
		
				var index_e_1 = sweep_line.index_of(seg_1)
				var index_e_2 = sweep_line.index_of(seg_2)
		
				if index_e_2 > 0 then
					var seg_o = sweep_line[index_e_2-1]
					var intersection = seg_2.intersection_with(seg_o)
					if intersection != null and intersection.x >= e.x then sorter_on_x.insert_sorted(schedule, intersection)
				end
				if index_e_1 < sweep_line.length-1 then
					var seg_o = sweep_line[index_e_1+1]
					var intersection = seg_1.intersection_with(seg_o)
					if intersection != null and intersection.x >= e.x then sorter_on_x.insert_sorted(schedule, intersection)
				end
			end
		end

		return intersections
	end
end

private fun sorter_on_x: SortOnX do return once new SortOnX
private fun sorter_on_swept_at_y: SortOnSweptAtY do return once new SortOnSweptAtY
