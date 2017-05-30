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

class Person
	var name: String

	var happiness_map = new HashMap[Person, Int]

	fun compute_seatings(remaining: Set[Person]): Array[Array[Person]] do
		if remaining.length == 1 then return [[self]]
		var persons = new Array[Array[Person]]
		var rem_set = remaining.clone
		rem_set.remove self
		for i in rem_set do
			persons.add_all i.compute_seatings(rem_set)
		end
		for i in persons do i.unshift self
		return persons
	end

	redef fun to_s do return name
end

fun happiness(arr: Array[Person]): Int do
	var curr = arr.first
	var arrln = arr.length
	var lft = arr.last
	var rgt = arr[1]
	var happiness = curr.happiness_map[lft] + curr.happiness_map[rgt]
	for i in [1 .. arrln - 1[ do
		var pers = arr[i]
		lft = arr[i - 1]
		rgt = arr[i + 1]
		happiness += pers.happiness_map[lft] + pers.happiness_map[rgt]
	end
	var lst = arr.last
	lft = arr[arrln - 2]
	rgt = curr
	happiness += lst.happiness_map[lft] + lst.happiness_map[rgt]
	return happiness
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

# Map of persons to index in matrix
var persons = new HashMap[String, Person]

if args.is_empty then
	print "Usage: ./knights_dinner_table input.txt"
	exit 1
end

var input = args[0].to_path.read_lines

for i in input do
	var els = i.split(" ")
	var pers_from = els.shift
	var amount = els[2].to_i
	if els[1] == "lose" then amount = -amount
	var pers_to = els.last
	pers_to = pers_to.substring(0, pers_to.length - 1)
	if not persons.has_key(pers_from) then persons[pers_from] = new Person(pers_from)
	if not persons.has_key(pers_to) then persons[pers_to] = new Person(pers_to)
	var from = persons[pers_from]
	var to = persons[pers_to]
	from.happiness_map[to] = amount
end

var fst = persons.values.first

var pers_set = new HashSet[Person]
for i in persons.values do pers_set.add i
pers_set.remove fst

var happinesses = new Array[Int]
for i in fst.compute_seatings(pers_set) do happinesses.add happiness(i)

print "Max happiness is {find_max(happinesses)}"
print "Min happiness is {find_min(happinesses)}"
