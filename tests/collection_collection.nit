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

# Test add method on Collection
fun test_add(col: Collection[Int])
do
	printn "Test add: "
	for i in [1..10] do
		col.add(i)
	end
	print col.length == 10
end

# Test add_all method on Collection
fun test_add_all(col: Collection[Int])
do
	printn "Test add_all: "
	col.add_all([1..10])
	print col.length == 10
end

# Test clear method on Collection
fun test_clear(col: Collection[Int])
do
	printn "Test clear: "
	col.clear
	print col.length == 0
end

# Test pick method on Collection
fun test_pick(col: Collection[Int])
do
	var length_before = col.length
	printn "Test pick: "
	col.pick
	print col.length == length_before - 1
end

# Test remove method on Collection
fun test_remove(col: Collection[Int])
do
	var length_before = col.length
	print "Test remove: "
	col.remove(2)
	print col.length == length_before - 1
	print col.has(2)
end

# Test remove_all method on Collection
fun test_remove_all(col: Collection[Int])
do
	print "Test remove_all: "
	col.remove_all([1..10[)
	print col.length == 1
	print col.has(1)
	print col.has(10)
end
