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

# Test [] method on Sequence[Int]
fun test_retindex(seq: Sequence[Int])
do
	printn "Test []: "
	var i = 0
	while i < seq.length do
		printn seq[i]
		i+= 1
	end
	print ""
end

# Test []= method on Sequence[Int]
fun test_setindex(seq: Sequence[Int])
do
	printn "Test []=: "
	var i = 0
	while i < 10 do
		seq[i] = i
		i += 1
	end
	print seq.length == 10
end

# Test append method on Sequence[Int]
fun test_append(seq: Sequence[Int])
do
	print "Test append: "
	seq.append(10)
	seq.append(11)
	print seq[10] == 10
	print seq[11] == 11
end

# Test append_all method on Sequence[Int]
fun test_append_all(seq: Sequence[Int])
do
	print "Test append_all: "
	seq.clear
	var length_before = seq.length
	seq.append_all( [0..10[ )
	seq.append_all( [10..20] )
	print seq[0] == 0
	print seq[9] == 9
	print seq.length == length_before + 21
	print seq[10] == 10
	print seq[20] == 20
end

# Test prepend method on Sequence[Int]
fun test_prepend(seq: Sequence[Int])
do
	print "Test prepend: "
	seq.prepend(-1)
	seq.prepend(-2)
	print seq[0] == -2
	print seq[1] == -1
end

# Test prepend_all method on Sequence[Int]
fun test_prepend_all(seq: Sequence[Int])
do
	print "Test prepend_all: "
	var length_before = seq.length
	seq.prepend_all( [-10..0] )
	print seq.length == length_before + 11
	print seq[0] == 0
	print seq[10] == -10
end

# Test firt method on Sequence[Int]
fun test_first(seq: Sequence[Int])
do
	printn "Test first and first=: "
	seq.first = 100
	print seq.first == 100
end

# Test last method on Sequence[Int]
fun test_last(seq: Sequence[Int])
do
	printn "Test last and last=: "
	seq.last = 1000
	print seq.last == 1000
end

# Test index_of method on Sequence[Int]
fun test_index_of(seq: Sequence[Int])
do
	print "Test index_of: "
	seq.clear
	seq.add_all([0..100])
	print seq.index_of(50) == 50
	seq.prepend(50)
	print seq.index_of(50) == 0
end

# Test last_index_of method on Sequence[Int]
fun test_last_index_of(seq: Sequence[Int])
do
	print "Test last_index_of: "
	seq.clear
	seq.add_all([0..100])
	print seq.last_index_of(50) == 50
	seq.prepend(50)
	print seq.last_index_of(50) == 51
	seq.append(50)
	print seq.last_index_of(50) == 102
end

# Test pick_first method on Sequence[Int]
fun test_pick_first(seq: Sequence[Int])
do
	print "Test pick_first: "
	seq.clear
	seq.add_all([0..100])
	print seq.pick_first == 0
	print seq.first == 1
end

# Test pick_last method on Sequence[Int]
fun test_pick_last(seq: Sequence[Int])
do
	print "Test pick_last: "
	seq.clear
	seq.add_all([0..100])
	print seq.pick_last == 100
	print seq.last == 99
end

# Test remove_at method on Sequence[Int]
fun test_remove_at(seq: Sequence[Int])
do
	print "Test remove_at: "
	seq.clear
	seq.add_all([0..100[)
	seq.remove_at(50)
	print seq.length == 99
	print not seq.has(50)
	print seq[50] == 51
end

# Test insert_at method on Sequence[Int]
fun test_insert_at(seq: Sequence[Int])
do
	print "Test insert_at: "
	seq.clear
	seq.add_all([0..100[)
	seq.insert_at(50, 1000)
	print seq.length == 101
	print seq.has(1000)
	print seq[49] == 49
	print seq[50] == 1000
	print seq[51] == 50
end

# Test iterator_from method on Sequence[Int]
fun test_iterator_from(seq: Sequence[Int])
do
	printn "Test iterator_from: "
	seq.clear
	seq.add_all([0..10])
	var iterator = seq.iterator_from(5)
	while iterator.has_next do
		printn iterator.current
		iterator.next
	end
	print ""
end

# Test iterator_within method on Sequence[Int]
fun test_iterator_within(seq: Sequence[Int])
do
	printn "Test iterator_within: "
	seq.clear
	seq.add_all([0..30])
	var iterator = seq.iterator_within(10, 20)
	while iterator.has_next do
		printn iterator.current
		iterator.next
	end
	print ""
end

