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

# Test use of for .. in syntax on Iterable[E]
fun with_forin(iterable: Iterable[Int])
do
	printn "Test iterate with for..in: "
        for i in iterable do
                printn i
        end
	print ""
end

# Test iterator method on Iterable[E]
fun with_iterator(iterable: Iterable[Int])
do
	printn "Test iterator: "
        var iterator = iterable.iterator

        while iterator.has_next do
                printn iterator.current
                iterator.next
        end
	print ""
end

# Test iterate method on Iterable[E]
fun with_iterate(iterable: Iterable[Int])
do
	printn "Test iterate with closure: "
	iterable.iterate !each(item) do
		printn item
	end
	print ""
end

# Test is_a method on Iterable[E]
fun test_to_a(iterable: Iterable[Int])
do
	printn "Test is_a method on Iterable: "	
	var array = iterable.to_a
	printn array isa Array[Int]
	print ""
	print array.join(",")

	printn "Test is_a method on Iterator: "	
	array = iterable.iterator.to_a
	printn array isa Array[Int]
	print ""
	print array.join(",")
end




 
