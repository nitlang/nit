# This file is part of NIT ( http://www.nitlanguage.org ).
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

var a
var b: Bool
var c: Collection[Int] = [1]
var d = 1
a = 1 + 2 - - 3 / 4 * 5 % 6 ** 2
b = true and not false or true or a < 0 or a <= 0 or a == 0 or a != 0 or a >= 0 or a > 0
a = 1 & 2 | ~3 ^ 4 << 5 >> 6
a = 1 <=> 2
c = [1..2[
c = [1..2]
c = [1,2,3]

a += 1
a -= 1
a *= 1
a /= 1
a %= 1
a **= 1

a &= 1
a |= 1
a ^= 1
a <<= 1
a >>= 1

a = 1
print(a)
print a
a.abs
a.max(2)
a.max 2
a.setbit(0, 1)

c = new Array[Int]
c = new Array[Int].with_capacity(10)
a = new Array[Int].with_capacity(10).length
c.add(1)

a = a isa Array[Int]
a = null
if b then a = 1
d = a.as(not null)
d = a.as(Int)


do end
do a = 1
do
	a = 1
	a = 1
end

if b then end
if b then a = 1
if b then
	a = 2
	a = 2
end
if b then a = 3 else end
if b then a = 4 else a = 5
if b then a = 6 else
	a = 7
	a = 7
end
if b then
else
end
if b then else end
if b then else a = 8
if b then else
	a = 9
	a = 9
end
if b then
	if b then
		a = 1
	end
end
if b then
	if b then
		a = 2
		a = 3
	end
end

a = if b then 1 else 2
a = if b then if b then 3 else 4 else if b then 5 else 6

for i in c do end
for i in c do
	a = 1
	a = 1
end
for i in c, j in c do end
var m = new HashMap[String,String]
for k, v in m do end

loop
	if b then break
	if b then continue
end

assert b
if not b then return
