# This file is part of NIT ( https://nitlanguage.org ).
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


class C

	init do end
end


var c = new C
var i = 5
var a = [c]
var s = "Bonjour"
var id1: Int
var id2: Int
var id3: Int
var id4: Int

id1 = c.object_id
print(c.object_id == id1)
var an1: Object = c
print(an1.object_id == id1)
print((new C).object_id != id1)
printn('\n')

id2 = i.object_id
print(id1 != id2)
print(i.object_id == id2)
var an2: Object = i
print(an2.object_id == id2)
print(5.object_id == id2)
printn('\n')

id3 = a.object_id
print(id1 != id3 and id2 != id3)
print(a.object_id == id3)
var an3: Object = a
print(an3.object_id == id3)
print([c].object_id != id3)
printn('\n')

id4 = s.object_id
print(id1 != id4 and id2 != id4 and id3 != id4)
print(s.object_id == id4)
var an4: Object = s
print(an4.object_id == id4)
print("Bonjour".object_id != id4)
