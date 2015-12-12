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

import graphs::digraph

class City
	var name: String
	var paths = new HashMap[City, Int]

	fun unroll_paths(to_visit: Set[City]): Array[Array[City]] do
		if to_visit.length == 1 then return [[self]]
		var remaining = to_visit.clone
		remaining.remove self
		var paths_to_cities = new Array[Array[City]]
		for i in remaining do
			paths_to_cities.add_all(i.unroll_paths(remaining))
		end
		for i in paths_to_cities do i.unshift(self)
		return paths_to_cities
	end
end

fun find_min(arr: Array[Int]): Int do
	if arr.is_empty then return -1
	var min = arr.first
	for i in [1 .. arr.length[ do if min > arr[i] then min = arr[i]
	return min
end

fun find_max(arr: Array[Int]): Int do
	if arr.is_empty then return 999999
	var max = arr.first
	for i in [1 .. arr.length[ do if max < arr[i] then max = arr[i]
	return max
end

var cities = new HashMap[String, City]

if args.is_empty then
	print "Usage: ./all_single_night input.txt"
	exit 1
end

var lines = args[0].to_path.read_lines

for i in lines do
	var parts = i.split(" ")
	var cfrom = parts.shift
	parts.shift
	var cto = parts.shift
	parts.shift
	var ln = parts.shift.to_i
	if not cities.has_key(cfrom) then cities[cfrom] = new City(cfrom)
	if not cities.has_key(cto) then cities[cto] = new City(cto)
	cities[cfrom].paths[cities[cto]] = ln
	cities[cto].paths[cities[cfrom]] = ln
end

var city_set = new HashSet[City]
for v in cities.values do city_set.add v

var paths = new Array[Array[City]]
for v in cities.values do
	paths.add_all v.unroll_paths(city_set)
end

var distances = new Array[Int].with_capacity(paths.length)

for i in paths do
	var distance = 0
	#printn i[0].name
	distance = i[0].paths[i[1]]
	for j in [1 .. i.length - 1[ do
		#printn " -> "
		#printn i[j].name
		distance += i[j].paths[i[j + 1]]
	end
	#printn " -> "
	#printn i[i.length - 1].name
	#print " = {distance}"
	distances.add(distance)
end

print "Minimum distance = {find_min(distances)}"
print "Maximum distance = {find_max(distances)}"
