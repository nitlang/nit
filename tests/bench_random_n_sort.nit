# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2005-2008 Jean Privat <jean@pryen.org>
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

import example_sorts

redef class Int
	fun random: Int
	# Return a random generated number between 0 and self
	do
		var val = (last_number.value * 3877 + 29573) % 139968
		last_number.value = val
		return val % self
	end

	fun last_number: Integer
	do
		return once new Integer
	end
end

class Integer
	var value: Int = 42
end

var n = 100
if not args.is_empty then
	n = args.first.to_i
	n = n * n
end

# Build an array
var array = new Array[Int].with_capacity(n)
for i in [0..n[ do
	array.add(n.random)
end

# Clone the array
var array2 = new Array[Int].with_capacity(n)
for i in [0..n[ do
	array2.add(array[i])
end

# Sort now

for i in [0..10[ do
	printn(array[n*i/10], " ")
end
print(array.last)

quicksort(array)

for i in [0..10[ do
	printn(array[n*i/10], " ")
end
print(array.last)


for i in [0..10[ do
	printn(array2[n*i/10], " ")
end
print(array2.last)

heapsort(array2)

for i in [0..10[ do
	printn(array2[n*i/10], " ")
end
print(array2.last)
