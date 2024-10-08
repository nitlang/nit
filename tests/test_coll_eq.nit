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

var a = [1,2,3]
var l = new List[Int].from(a)
var l2 = new List[Object].from(a)

print a == l
print a == l2
print l == a
print l == l2
print l2 == a
print l2 == l
print ""

var aa = [a]
print aa.has(a)
print aa.has(l)
print aa.has(l2)
print ""

var map = new Map[List[Int], String]
map[l] = "hello"

var mapr: MapRead[Object, String] = map
print mapr.has_key(a)
print mapr[l2]
