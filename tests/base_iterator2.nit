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
	fun iterator: MyIterator do return new MyIterator
end

class MyIterator
	super Iterator[String]

	var count = 0
	redef fun is_ok do return count < 3
	redef fun next do count += 1
	redef fun item do return "Item{count}"
end

class MapIterable
	fun iterator: MyMapIterator do return new MyMapIterator
end

class MyMapIterator
	super MapIterator[String, String]

	var count = 0
	redef fun is_ok do return count < 3
	redef fun next do count += 1
	redef fun item do return "Item{count}"
	redef fun key do return "Key{count}"
end

#ok
var col = new ColIterable
for v in col do print v

#ok
var map = new MapIterable
for k, v in map do print "{k}:{v}"

