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

# This module tests multivalue brackets

class Matrice
	# A matrice of integers

	fun [](x: Int, y: Int): Int
	# The integer at (x,y)
	do
		return _tab[x][y]
	end

	fun []=(x: Int, y: Int, v: Int)
	# Put v in (x, y)
	do
		# Buld more arrays if needed
		if x >= _tab.length then
			var i = _tab.length
			while i <= x do
				_tab[i] = new Array[Int]
				i = i + 1
			end
		end
		# Put the value
		var row = _tab[x]
		if y > row.length then
			var j = row.length
			while j < y do
				row[j] = 0
				j = j + 1
			end
		end
		row[y] = v
	end

	private var tab = new Array[Array[Int]] # An array of array to store items
end


# Main program

var m = new Matrice
m[1,1] = 11
m[2,1] = 21
m[5,5] = 55
print(m[1,1])
print(m[2,1])
print(m[5,5])
