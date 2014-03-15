# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 <alexis.laf@xymus.net>
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

import bentley_ottmann

redef interface Pointable[N]
	redef fun to_s do return "<{class_name} ({x}, {y})>"
end

class MyPoint[N: Numeric]
	super Extremity[N]

	redef var x: N
	redef var y: N

	init(x, y: N)
	do
		self.x = x
		self.y = y
	end
end

class IL super LineSegment[Int] end
class IP super MyPoint[Int] end

class FL super LineSegment[Float] end
class FP super MyPoint[Float] end

# a   d
#  \ /
#   X
#  / \
# c   b
var na = new IP(0, 0)
var nb = new IP(4, 4)
var nc = new IP(0, 4)
var nd = new IP(4, 0)

var lab = new IL(na, nb)
var lcd = new IL(nc, nd)

var lines = [lab, lcd]
var boa = new BentleyOttmann[Int]
var intersections = boa.intersections_in(lines)
print "R: {intersections.join(", ")}"

# a---d
#  \
#   X
#    \
#     b
#
# `na` is shared between the 2 line segments.
na = new IP(0, 0)
nb = new IP(4, 4)
nd = new IP(4, 0)

lab = new IL(na, nb)
lcd = new IL(na, nd)

lines = [lab, lcd]
intersections = boa.intersections_in(lines)
print "R: {intersections.join(", ")}"

# Same as before but without shared extremities
nc = new IP(0, 0)
lab = new IL(na, nb)
lcd = new IL(nc, nd)

lines = [lab, lcd]
intersections = boa.intersections_in(lines)
print "R: {intersections.join(", ")}"

#  a   d
#   \ /
#    X
# e-X-X-f
#  c   b
na = new IP( 0,  0)
nb = new IP(40, 40)
nc = new IP( 0, 40)
nd = new IP(40,  0)
var ne = new IP( 0, 30)
var nf = new IP(40, 30)

lab = new IL(na, nb)
lcd = new IL(nc, nd)
var lef = new IL(ne, nf)

lines = [lab, lcd, lef]
intersections = boa.intersections_in(lines)
print "R: {intersections.join(", ")}"

#   a
#   |
# c-+-d
#   |
#   b
lines = [new IL(new IP(1, 0), new IP(1, 2)),
		 new IL(new IP(0, 1), new IP(2, 1))]
intersections = boa.intersections_in(lines)
print "R: {intersections.join(", ")}"

# Float test
#
# a   d
#  \ /
#   X
#  / \
# c   b
var f_lines = [new FL(new FP(0.0, 0.0), new FP(1.0, 1.0)),
			   new FL(new FP(0.0, 1.0), new FP(1.0, 0.0))]
var f_boa = new BentleyOttmann[Float]
var f_intersections = f_boa.intersections_in(f_lines)
print "R: {f_intersections.join(", ")}"

#   a
#   |
# c-+-d
#   |
# e-+-f
#   |
#   b
f_lines = [new FL(new FP(0.5, 0.0), new FP(0.5, 1.0)),
	       new FL(new FP(0.0, 0.3), new FP(1.0, 0.4)),
	       new FL(new FP(0.0, 0.8), new FP(1.0, 0.8))]
f_intersections = f_boa.intersections_in(f_lines)
print "R: {f_intersections.join(", ")}"
