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

# Test type on SequenceIterator[E]
fun test_sequence_iterator(iterable: Sequence[Int])
do
	printn "Test type of sequence iterator: "
	print iterable.iterator isa SequenceIterator[Int]
end

# Test insert_before method on SequenceIterator[E]
fun test_iterator_insert_before(iterable: Sequence[Int])
do
	print "Test insert_before iterator: "
        var iterator = iterable.iterator
	var length_before = iterable.length
        while iterator.has_next do
		if iterator.index == 0 or iterator.index == iterable.length - 1 then
			iterator.insert_before(-2)
		end
                iterator.next
        end
	print iterable.length == length_before + 2
	print iterable.join(",")
end

# Test delete_before method on SequenceIterator[E]
fun test_iterator_delete_before(iterable: Sequence[Int])
do
	print "Test delete_before iterator: "        
	var iterator = iterable.iterator

	var length_before = iterable.length
	var pos = 0
        while iterator.has_next do
		if pos == 1 or pos == iterable.length then
			iterator.delete_before
		end
		pos += 1
                iterator.next
        end
	print iterable.length == length_before - 2
	print iterable.join(",")
end

# Test insert_before method on SequenceIterator[E]
fun test_iterator_insert_after(iterable: Sequence[Int])
do
	print "Test insert_after iterator: "        
	var iterator = iterable.iterator

	var length_before = iterable.length
	var pos = 0
        while iterator.has_next do
		if pos == 0 or pos == length_before then
			iterator.insert_after(-2)
		end
		pos += 1
                iterator.next
        end
	print iterable.length == length_before + 2
	print iterable.join(",")
end

# Test delete_before method on SequenceIterator[E]
fun test_iterator_delete_after(iterable: Sequence[Int])
do
	print "Test delete_after iterator: "
	var iterator = iterable.iterator

	var length_before = iterable.length
        while iterator.has_next do
		if iterator.index == 0 or iterator.index == iterable.length - 2 then
			iterator.delete_after
		end
                iterator.next
        end
	print iterable.length == length_before - 2
	print iterable.join(",")
end

# Test index method on SequenceIterator[E]
fun test_iterator_index(iterable: Sequence[Int])
do
	printn "Test index iterator: "
        var iterator = iterable.iterator

        while iterator.has_next do
		printn "{iterator.index}:{iterator.current}"
                iterator.next
		if iterator.has_next then printn ", "
        end
	print ""
end
