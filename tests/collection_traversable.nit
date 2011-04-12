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

# Test length method on traversable
fun test_length(col: Traversable[Int])
do
	printn "Test length: "
	print col.length
end

# Test is_empty method on traversable
fun test_is_empty(col: Traversable[Int])
do
	printn "Test is_empty: "
	print col.is_empty
end

# Test get method on traversable
fun test_get(col: Traversable[Int])
do
	printn "Test get: "
	print col.get
end

# Test has method on traversable
fun test_has(col: Traversable[Int])
do
	print "Test has: "
	for i in [1..10] do	
		print col.has(i)
	end
	print col.has(1000)
end

# Test has_all method on traversable
fun test_has_all(col: Traversable[Int])
do
	print "Test has_all: "
	var range = [1..10]
	print col.has_all(range)
	range = [1..11]
	print col.has_all(range)
end

# Test has_only method on traversable
fun test_has_only(col: Traversable[Int])
do
	print "Test has_only: "
	var range = [1..10]
	print col.has_only(range)
	range = [1..9]
	print col.has_only(range)
end

# Test count method on traversable
fun test_count(col: Traversable[Int])
do
	print "Test count: "
	print col.count(0)
	print col.count(1)
end


