# This file is part of NIT ( https://nitlanguage.org ).
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

import array

class MyC
	var data: Collection[Object]
	fun iterator: MyI do return new MyI(data.iterator)
end

class MyI
	super Iterator[Object]
	var iter: Iterator[Object]
	redef fun is_ok do return iter.is_ok
	redef fun item do return iter.item
	redef fun next do iter.next
	redef fun finish do 0.output
end

fun test(a: MyC)
do
	for x in a do
		x.output
		for y in [10,20] do
			y.output
			if x == 2 then return
		end
		100.output
	end
	200.output
end

var a = new MyC([1,2,3])

for x in a do
	x.output
end

'\n'.output

for x in a do
	x.output
	if x == 2 then break
	100.output
end

'\n'.output

test(a)
