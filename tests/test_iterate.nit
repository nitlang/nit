# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2009 Jean Privat <jean@pryen.org>
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

fun test_iterator(c: Collection[Int])
do
	var idx = 0
	var it = c.iterator
	while it.is_ok do
		var i = it.item
		print "  {idx}->{i}"
		it.next
		idx += 1
	end
end

fun test_iterate(c: Collection[Int])
do
	var idx = 0
	c.iterate !each i do
		print "  {idx}->{i}"
		idx += 1
	end
end

fun test_for(c: Collection[Int])
do
	var idx = 0
	for i in c do
		print "  {idx}->{i}"
		idx += 1
	end
end

fun test_coll(c: Collection[Int], s: String)
do
	print("{s}: iterator")
	test_iterator(c)
	print("{s}: iterate")
	test_iterate(c)
	print("{s}: for")
	test_for(c)
	print("")
end

fun init_seq(c: SimpleCollection[Int]): SimpleCollection[Int]
do
	for i in [0..5[ do
		c.add(i)
	end
	return c
end

fun init_map(c: Map[Int, Int]): Map[Int, Int]
do
	for i in [0..5[ do
		c[i*10] = i
	end
	return c
end

test_coll(init_seq(new Array[Int]), "Array")
test_coll(init_seq(new List[Int]), "List")
test_coll(init_seq(new ArraySet[Int]), "ArraySet")
test_coll(init_seq(new HashSet[Int]), "HashSet")
test_coll([0..5[, "ORange")
test_coll([0..4], "CRange")
test_coll(init_map(new ArrayMap[Int, Int]).values, "ArrayMap")
test_coll(init_map(new HashMap[Int, Int]).values, "HashMap")

