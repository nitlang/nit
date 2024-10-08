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

# A simple exemple 

class Tower
	# A tower is a stack of discus.
	fun top: Int
	# Diameter of the last discus.
	do
		return _t.last
	end

	fun height: Int
	# Number of discus.
	do
		return _t.length
	end

	fun push(i: Int)
	# Put an discus of diameter `i'.
	do
		_t.push(i)
	end

	fun pop: Int
	# Remove the last discus and get its diameter.
	do
		assert not_empty: not _t.is_empty
		return _t.pop
	end

	redef fun to_s: String
	# Display the tower
	do
		if _t.is_empty then
			return "-"
		else
			return "({_t.join(":")})"
		end
	end

	var t = new Array[Int] # The stack of discus (only the diameter is stored).

	init full(n: Int)
	# Build a new tower with `n' discus.
	do
		assert positive: n >= 0
		t.enlarge(n)
		for i in [0..n[ do
			push(n-i)
		end
	end

	init empty
	# Build a empty tower.
	do
	end
end

class Hanoi
	# Hanoi is a city with 3 towers.
	fun run
	do
		move(_tower1.height, _tower1, _tower2, _tower3)
	end

	private fun move(nb: Int, source: Tower, intermediate: Tower, destination: Tower)
	do
		if nb <= 0 then
			return
		end
		move(nb-1, source, destination, intermediate)
		destination.push(source.pop)
		print(self)
		move(nb-1, intermediate, source, destination)
	end

	redef fun to_s: String
	do
		return "{_tower1} {_tower2} {_tower3}"
	end

	var tower1: Tower
	var tower2: Tower
	var tower3: Tower

	init(nb: Int)
	do
		_tower1 = new Tower.full(nb)
		_tower2 = new Tower.empty
		_tower3 = new Tower.empty
	end
end

fun usage
do
	print("Usage: hanoi <number of discus>")
	exit(0)
end

#

if args.length != 1 then
	usage
end

var nb = args.first.to_i
if nb < 1 then
	usage
end
var h = new Hanoi(nb)
print(h)
h.run
