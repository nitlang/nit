# This file is part of NIT (https://nitlanguage.org).
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

# Example implemented from "The computer Language Benchmarks Game" - Chameneos-Redux
# http://benchmarksgame.alioth.debian.org/
#
# Complete description of the chameneos-redux :
# https://benchmarksgame.alioth.debian.org/u64q/chameneosredux-description.html#chameneosredux
module chameneosredux is example, no_warning("missing-doc")

import actors

class Creature
	actor
	var place: MeetingPlace
	var color: Int
	var id: Int
	var count = 0
	var samecount = 0

	fun run do
		loop
			var p = place.meet(id, color)
			if p == null then break
			color = p.color
			if p.sameid then samecount += 1
			count += 1
		end
	end

	fun to_string: String do return count.to_s + " " + numbers[samecount]
end

class Pair
	var sameid: Bool
	var color: Int
end

class MeetingPlace
	var meetings_left: Int
	var firstcolor: nullable Int
	var firstid: Int = 0
	var current: Future[Pair] is noinit

	private var mutex = new Mutex

	fun meet(id, c: Int): nullable Pair do
		var new_pair = new Future[Pair]
		mutex.lock
		if meetings_left == 0 then
			mutex.unlock
			return null
		else
			if firstcolor == null then
				firstcolor = c
				firstid = id
				current = new Future[Pair]
			else
				var color = complements[c][firstcolor.as(not null)]
				current.set_value(new Pair(id == firstid, color))
				firstcolor = null
				meetings_left -= 1
			end
			new_pair = current
		end
		mutex.unlock
		return new_pair.join
	end
end

redef class Sys
	fun blue: Int do return 0
	fun red: Int do return 1
	fun yellow: Int do return 2
	var numbers = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
	var colors = ["blue", "red", "yellow"]
	# Matrix for complementing colors
	var complements: Array[Array[Int]] = [[0, 2, 1],
	                                      [2, 1, 0],
	                                      [1, 0, 2]]

end

fun print_all_colors do
	print_colors(blue, blue)
	print_colors(blue, red)
	print_colors(blue, yellow)
	print_colors(red, blue)
	print_colors(red, red)
	print_colors(red, yellow)
	print_colors(yellow, blue)
	print_colors(yellow, red)
	print_colors(yellow, yellow)
end

fun print_colors(c1, c2: Int) do
	print colors[c1] + " + " + colors[c2] + " -> " + colors[complements[c1][c2]]
end

fun get_number(n: Int): String do
	var str = ""
	var nstr = n.to_s
	for c in nstr do
		str += " " + numbers[c.to_i]
	end
	return str
end

fun work(n, nb_colors : Int ) do
	var place = new MeetingPlace(n)
	var creatures = new Array[Creature]
	for i in [0..nb_colors[ do
		printn " " + colors[i % 3]
		creatures[i] = new Creature(place, i % 3, i)
	end
	print ""

	for c in creatures do c.async.run

	active_actors.wait

	var total = 0
	for c in creatures do
		print c.to_string
		total += c.count
	end

	print get_number(total)
	print ""

	for c in creatures do
		c.async.terminate
		c.async.wait_termination
	end
end

var n = if args.is_empty then 600 else args[0].to_i

print_all_colors
print ""

work(n, 3)
work(n, 10)
