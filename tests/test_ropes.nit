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

import core
intrude import core::text::ropes

# Force building a Rope
redef fun maxlen: Int do return once 2

var x :String = new Concat("NODE", "AT")

x += "TEST"

print x

var lst = new List[String]

lst.push("ZZ")

lst.push((lst.last * 5))

lst.push(lst.last.insert_at("AA", 2))

lst.push(lst.last.insert_at("NN", 0))

lst.push(lst.last.insert_at("II", 1))

lst.push(lst.last.insert_at(lst.last, 2))

var ss = lst.last.substring(4,4)

print ss

ss = ss.insert_at("DD", 2)

print ss

ss = ss.insert_at("EE", 0)

print ss

ss = ss.insert_at("FF", ss.length)

print ss

ss = ss.to_lower

print ss

ss = ss.to_upper

print ss

ss = ss.reversed

print ss

var atb = new Array[String]

var s: String = "./examples/hello_world.nit".substring(11,11) + ".types"
s += "."
s += "1"
s += ".o"

print s

var str = "now" + " step" + " live..."

print str

print str.reversed

for i in str.chars do printn i
printn "\n"

for i in [0..str.length[ do printn str.chars[i]
printn "\n"

var iter = str.chars.iterator
for i in [0..str.length[ do
	assert str.chars[i] == iter.item
	iter.next
end

assert "now step live...".hash == str.hash

for i in str.chars.iterator_from(8) do printn i
printn "\n"

for i in str.chars.iterator_from(str.length-1) do printn i
printn "\n"

for i in str.chars.reverse_iterator do printn i
printn "\n"

for i in str.chars.reverse_iterator_from(0) do printn i
printn "\n"

var str2 = str.insert_at(str.substring_from(3), 3)

print str2

print str2.substring(2,3)

for i in lst do print i

