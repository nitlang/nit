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

# Test length method on TraversableMap[K,E]
fun test_length(map: TraversableMap[Int, Int])
do
	printn "Test length: "
	print map.length
end

# Test is_empty method on TraversableMap[K,E]
fun test_is_empty(map: TraversableMap[Int, Int])
do
	printn "Test is_empty: "
	print map.is_empty
end

# Test has_key method on TraversableMap[K,E]
fun test_has_key(map: TraversableMap[Int, Int])
do
	print "Test has_key: "
	for i in [1..10] do	
		print map.has_key(i)
	end
	print map.has_key(1000)
end

# Test has_value method on TraversableMap[K,E]
fun test_has_value(map: TraversableMap[Int, Int])
do
	print "Test has_value: "
	for i in [1..10] do	
		print map.has_value(i * 100)
	end
	print map.has_value(100000)
end

# Test has_all_keys method on TraversableMap[K,E]
fun test_has_all_keys(map: TraversableMap[Int, Int])
do
	print "Test has_all_keys: "
	var range = [1..10]
	print map.has_all_keys(range)
	range = [1..11]
	print map.has_all_keys(range)
end

# Test has_all_values method on TraversableMap[K,E]
fun test_has_all_values(map: TraversableMap[Int, Int])
do
	print "Test has_all_values: "
	var values = new Array[Int]()
	for i in [1..10] do
		values.add(i * 100)
	end
	print map.has_all_values(values)
	values.add(10000)
	print map.has_all_values(values)
end

# Test has_only_keys method on TraversableMap[K,E]
fun test_has_only_keys(map: TraversableMap[Int, Int])
do
	print "Test has_only_keys: "
	var range = [1..10]
	print map.has_only_keys(range)
	range = [1..9]
	print map.has_only_keys(range)
end

# Test has_only_values method on TraversableMap[K,E]
fun test_has_only_values(map: TraversableMap[Int, Int])
do
	print "Test has_only_values: "
	var values = new Array[Int]()
	for i in [1..10] do
		values.add(i * 100)
	end
	print map.has_only_values(values)
	values.pick_last
	print map.has_only_values(values)
end

# Test count method on TraversableMap[K,E]
fun test_count(map: TraversableMap[Int, Int])
do
	print "Test count: "
	print map.count(0)
	print map.count(100)
end

# Test [] method on TraversableMap[K,E]
fun test_retindex(map: TraversableMap[Int, Int])
do
	printn "Test []: "
	for i in [1..10] do
		printn "{i}:{map[i]} "
	end
	print ""
end
