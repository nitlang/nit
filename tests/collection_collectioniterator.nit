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

# Test type on CollectionIterator[E]
fun test_collection_iterator(iterable: Collection[Int])
do
	printn "Test type of writable iterator: "

	print iterable.iterator isa CollectionIterator[Int]
end

# Test replace method on CollectionIterator[E]
fun test_iterator_replace(iterable: Collection[Int])
do
        var iterator = iterable.iterator

	var count = 0
        while iterator.has_next do
		if count % 2 == 0 then
			iterator.current = -1
		end
                iterator.next
		count += 1
        end

	printn "Test replace iterator: "
	print iterable.join(",")
end

# Test delete method on CollectionIterator[E]
fun test_iterator_delete(iterable: Collection[Int])
do
        var iterator = iterable.iterator

	var length_before = iterable.length
	var deleted = 0
	var count = 0
        while iterator.has_next do
		if count % 2 == 0 then
			iterator.delete
			deleted += 1
		end
                iterator.next
		count += 1
        end
	printn "Test delete iterator: "
	print iterable.length == length_before - deleted
end
