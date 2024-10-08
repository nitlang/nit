# This file is part of NIT ( https://nitlanguage.org ).
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

class ColIterable
	var col = new Array[String]
	fun iterator: Iterator[String] do return col.iterator
end

class MapIterable
	var map = new HashMap[String, Array[Char]]
	fun iterator: MapIterator[String, Array[Char]] do return map.iterator
end

# ok
var col = new ColIterable
col.col.add("Riri")
col.col.add("Fidi")
col.col.add("Loulou")
for v in col do print v

# ok
var map = new MapIterable
map.map["Riri"] = "Riri".chars.to_a
map.map["Fifi"] = "Fifi".chars.to_a
map.map["Loulou"] = "Loulou".chars.to_a
for k, v in map do print "{k}: {v.join(",")}"

