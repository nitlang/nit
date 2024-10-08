#This file is part of NIT (https://nitlanguage.org).
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

# a bench for the polygons
module bench_polygon

intrude import geometry::polygon
import opts

# Bench adding random vertices
fun bench_add_vertices(n: Int) do
	var randompoints = generate_points(n + 1)
	var points = randompoints.clone
	points.remove_at(points.length -1)
	var poly = new ConvexPolygon(randompoints)
	poly.sort_ccw
	poly.add_vertex(randompoints.last)
end

# Bench the convex hull algorithm
fun bench_convex_hull(n: Int) do
	srand_from(50)
	var randompoints = new Array[Point[Float]]
	for i in [0..n] do
		var point = new Point[Float](300.0.rand, 300.0.rand)
		randompoints.add(point)
	end
	convex_hull(randompoints)
end


# Bench the convexity verificatioon
fun bench_convexity(n : Int) do
	var randompoints = generate_points(n)
	var poly = new ConvexPolygon(randompoints)
	poly.sort_ccw
	poly.is_convex
end

# Bench the point in polygon algorithm
fun bench_contain(n : Int) do
	srand_from(50)
	var randompoints = generate_points(n)
	var poly = new ConvexPolygon(randompoints)
	poly.sort_ccw
	var point = new Point[Float](0.0, 0.0)
	poly.contain(point)
end

# Bench the sorting of the vertices
fun bench_sorting(n : Int) do
	var randompoints = generate_points(n)
	randompoints.shuffle
	var poly = new ConvexPolygon(randompoints)
	poly.sort_ccw

end

# Bench the intersection test between two polygons
fun bench_intersection(n : Int) do
	var r1 = generate_points(n)
	var r2 = generate_points(n)
	var poly1 = new ConvexPolygon(r1)
	var poly2 = new ConvexPolygon(r2)
	poly1.sort_ccw
	poly2.sort_ccw
	poly1.intersects(poly2)
end

# Get `n` points from a circle
fun get_points_on_circle(radius: Float, n: Int): Array[Point[Float]] do
	srand_from(50)
	var points = new Array[Point[Float]]
	for i in n.times do
		var angle =  1000.0.rand * pi * 2.0
		var point = new Point[Float](angle.cos * radius, angle.sin * radius)
		points.add(point)
	end
	return points
end

# Helper for `get_points_on_circle`
fun generate_points(n: Int): Array[Point[Float]] do
	return get_points_on_circle(100.0, n)
end

var opts = new OptionContext
var mode = new OptionEnum(["add_vertex","sort_vertices","intersection","convex_hull","is_convex","contain"], "Mode", -1, "-m")
var nb_points = new OptionInt("number of points generated for the bench", -1, "--nbpts")
opts.add_option(mode, nb_points)

opts.parse(args)

if nb_points.value == -1 then
	opts.usage
	exit(-1)
end

var modval = mode.value
var n = nb_points.value
if modval == 0 then
	print "bench_add_vertices"
	bench_add_vertices(n)
else if modval == 1 then
	print "bench_sorting"
	bench_sorting(n)
else if modval == 2 then
	print "bench_intersection"
	bench_intersection(n)
else if modval == 3 then
	print "bench_convex_hull"
	bench_convex_hull(n)
else if modval == 4 then
	print "bench_convexity"
	bench_convexity(n)
else if modval == 5 then
	print "bench_contain"
	bench_contain(n)
else
	opts.usage
	exit(-1)
end
