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

import knights_dinner_table

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

var me = new Person("Myself")

for k, v in persons do
	me.happiness_map[v] = 0
	v.happiness_map[me] = 0
end

persons["Myself"] = me

var fst = persons.values.first

var pers_set = new HashSet[Person]
for i in persons.values do pers_set.add i
pers_set.remove fst

var happinesses = new Array[Int]
for i in fst.compute_seatings(pers_set) do happinesses.add happiness(i)

print "Max happiness is {find_max(happinesses)}"
print "Min happiness is {find_min(happinesses)}"
