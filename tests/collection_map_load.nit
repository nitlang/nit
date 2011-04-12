# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Test load support on Map
fun test_maxload(map: Map[Int, String])
do
	printn "Test []=: "
	for i in [1..10000] do
		map[i] = (i * 100).to_s
	end
	print map.length == 10000
end

fun test_read(map: Map[Int, String])
do
	printn "Test []: "
	for i in [1..10000] do
		if map[i] != (i * 100).to_s then print "Read error on Map"
	end
	print true
end

fun test_remove_at(map: Map[Int, String])
do
	printn "Test []: "
	var length_before = map.length
	var deleted = 0
	for i in [1..10000] do
		if i % 2 == 0 then
			deleted += 1
			map.remove_at(i)
		end
	end
	print map.length == length_before - deleted
end

var map: Map[Int, String] = new HashMap[Int, String]
#alt1#map = new ArrayMap[Int, String]

test_maxload(map)
test_read(map)
test_remove_at(map)
