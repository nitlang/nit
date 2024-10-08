# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain
# Copyright 2014 amineorion <amineorion@gmail.com>
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
#
# Task: Hailstone sequence
# SEE: <http://rosettacode.org/wiki/Hailstone_sequence>
#
# Not optimize version.

module hailstone

fun hailstone (n: Int): Array[Int]
do
	var sequence = [n]
	while n != 1 do
		if n & 0x01 == 0 then
			n = n / 2
		else
			n = 3 * n + 1
		end
		sequence.add(n)
	end
	return sequence
end
var sequence27 = hailstone(27)
var size27 = sequence27.length
print "Sequence for 27 has {size27} begin with: {sequence27[0]}, " +
		 "{sequence27[1]}, {sequence27[2]}, {sequence27[3]} " +
		 "and end with: {sequence27[size27 - 4]}, {sequence27[size27 - 3]}, " +
		 "{sequence27[size27 - 2]}, {sequence27[size27 - 1]}"

var max = hailstone(1).length
var max_sequence = hailstone(1)
var max_element = 1

for i in [2..100000] do
	var sequence = hailstone(i)
	if max < sequence.length then
		max = sequence.length
		max_element = i
		max_sequence = sequence
	end
end
print "The number with longest sequence is {max_element} " +
		"with length of {max_sequence.length}"
