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

class Coordinates
	var x: Int
	var y: Int

	redef fun ==(o) do return o isa Coordinates and o.x == x and o.y == y

	redef fun hash do return x + y
end

if args.is_empty then
	print "Usage: ./spherical_houses_in_a_vaccuum_2 input.txt"
	exit 1
end

var in_txt = args[0].to_path.read_all

var santa_houses = new HashSet[Coordinates]
var robosanta_houses = new HashSet[Coordinates]

var x = 0
var y = 0

santa_houses.add(new Coordinates(0, 0))
robosanta_houses.add(new Coordinates(0, 0))

for i in [0 .. in_txt.length[.step(2) do
	var c = in_txt[i]
	if c == '^' then y += 1
	if c == '>' then x += 1
	if c == '<' then x -= 1
	if c == 'v' then y -= 1
	var place = new Coordinates(x, y)
	if not santa_houses.has(place) then santa_houses.add(place)
end

x = 0
y = 0

for i in [1 .. in_txt.length[.step(2) do
	var c = in_txt[i]
	if c == '^' then y += 1
	if c == '>' then x += 1
	if c == '<' then x -= 1
	if c == 'v' then y -= 1
	var place = new Coordinates(x, y)
	if not robosanta_houses.has(place) then robosanta_houses.add(place)
end

print santa_houses.union(robosanta_houses).length
