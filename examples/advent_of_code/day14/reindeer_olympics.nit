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

class Reindeer
	var name: String
	var speed: Int
	var endurance: Int
	var resting_time: Int

	var points = 0
	var distance = 0

	var rst: Int is lazy do return resting_time
	var endur: Int is lazy do return endurance

	fun lap do
		if endur > 0 then
			distance += speed
			endur -= 1
			return
		end
		if rst > 0 then
			rst -= 1
			return
		end
		rst = resting_time
		endur = endurance - 1
		distance += speed
		return
	end
end

if args.is_empty then
	print "Usage: ./reindeer_olympics input.txt"
	exit 1
end

var lns = args[0].to_path.read_lines

var deers = new HashSet[Reindeer]

for i in lns do
	var pts = i.split(" ")
	var name = pts.first
	var speed = pts[3].to_i
	var endur = pts[6].to_i
	var rest = pts[pts.length - 2].to_i
	deers.add(new Reindeer(name, speed, endur, rest))
end

for sec in [0 .. 2503[ do
	for i in deers do
		i.lap
	end

	var max = 0
	for i in deers do if i.distance > max then max = i.distance

	for i in deers do if i.distance == max then i.points += 1
end

var pos = 0
for i in deers do
	print "{i.name} has raced {i.distance} km and has {i.points} points"
	pos += 1
end
