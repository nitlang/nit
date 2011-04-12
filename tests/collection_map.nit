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

# Test []= method on Map
fun test_setindex(map: Map[Int, Int])
do
	printn "Test []=: "
	for i in [1..10] do
		map[i] = i * 100
	end
	print map.length == 10
end

# Test clear method on Map
fun test_clear(map: Map[Int, Int])
do
	printn "Test clear: "
	map.clear
	print map.length == 0
end

# Test remove_value method on Map
fun test_remove_value(map: Map[Int, Int])
do
	var length_before = map.length
	print "Test remove_value: "
	map.remove_value(200)
	print map.length == length_before - 1
	print map.has_value(200)
end

# Test remove_value method on Map
fun test_remove_first_value(map: Map[Int, Int])
do
	print "Test remove_first_value: "
	map[11] = 800
	var length_before = map.length
	map.remove_first_value(800)
	print map.length == length_before - 1
	print map.has_value(800)
	map.remove_first_value(800)
	print map.length == length_before - 2
	print map.has_value(800)
end

# Test remove_at method on Map
fun test_remove_at(map: Map[Int, Int])
do
	var length_before = map.length
	print "Test remove_at: "
	map.remove_at(3)
	print map.length == length_before - 1
	print map.has_key(3)
end

# Test remove_all_keys method on Map
fun test_remove_all_keys(map: Map[Int, Int])
do
	print "Test remove_all_keys: "
	map.remove_all_keys([1..10[)
	print map.length == 1
	print map.has_key(1)
	print map.has_key(10)
end

# Test remove_all_values method on Map
fun test_remove_all_values(map: Map[Int, Int])
do
	print "Test remove_all_values: "
	var values = new Array[Int]()
	for i in [1..10[ do
		values.add(i * 100)
	end
	map.remove_all_values(values)
	print map.length == 1
	print map.has_value(1)
	print map.has_value(10*100)
end
