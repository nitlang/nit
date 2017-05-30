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

class Lights
	var grid: Array[Array[Int]] is noinit
	var width: Int
	var height: Int

	init do
		grid = new Array[Array[Int]].with_capacity(width)
		for i in [0 .. width[ do
			grid.add(new Array[Int].with_capacity(height))
			var curr_grid = grid[i]
			for j in [0 .. height[ do curr_grid.add 0
		end
	end

	fun toggle(xfrom, xto, yfrom, yto: Int) do
		for i in [xfrom .. xto] do
			for j in [yfrom .. yto] do
				grid[i][j] += 2
			end
		end
	end

	fun on(xfrom, xto, yfrom, yto: Int) do
		for i in [xfrom .. xto] do
			for j in [yfrom .. yto] do
				grid[i][j] += 1
			end
		end
	end

	fun off(xfrom, xto, yfrom, yto: Int) do
		for i in [xfrom .. xto] do
			for j in [yfrom .. yto] do
				var el = grid[i][j]
				if el == 0 then continue
				grid[i][j] = el - 1
			end
		end
	end

	fun count_on: Int do
		var lit = 0
		for i in [0 .. width[ do
			for j in [0 .. height[ do
				lit += grid[i][j]
			end
		end
		return lit
	end
end

if args.is_empty then
	print "Usage: ./fire_hazard_2 input.txt"
	exit 1
end

var instructions = args[0].to_path.read_lines

var lights = new Lights(1000, 1000)

for i in instructions do
	var inst_parts = i.split(" ")
	var fst = inst_parts.shift
	var inst = -1
	if fst == "toggle" then
		inst = 0
	else if fst == "turn" then
		fst = inst_parts.shift
		if fst == "on" then inst = 1 else inst = 2
	end
	fst = inst_parts.shift
	var rng = fst.split(",")
	var xfrom = rng.shift.to_i
	var yfrom = rng.shift.to_i
	inst_parts.shift
	fst = inst_parts.shift
	rng = fst.split(",")
	var xto = rng.shift.to_i
	var yto = rng.shift.to_i
	if inst == 0 then lights.toggle(xfrom, xto, yfrom, yto)
	if inst == 1 then lights.on(xfrom, xto, yfrom, yto)
	if inst == 2 then lights.off(xfrom, xto, yfrom, yto)
end

print lights.count_on
