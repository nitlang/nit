# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
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

class Point
private
	var x: Int = 0	# Abscisse
	var y: Int = 0	# Ordonnée

	# Change la position d'un point
	fun moveto(x: Int, y: Int)
	do
		_x = x
		_y = y
	end

	redef fun to_s: String
	do
		var s = "({_x}:{_y})"
		return s
	end

	redef fun ==(p)
	do
		return p isa Point and _x == p.x and _y == p.y
	end


	init at(x: Int, y: Int)
	do
		moveto(x, y)
	end

end


var p1 = new Point
var p2 = new Point.at(5, 8)
print(p1)		# (0,0)
print(p2)		# (5,8)
print(p1 == p2)	# false
p1.moveto(5,12)
p2.y = 12
print(p1 == p2)	# true
