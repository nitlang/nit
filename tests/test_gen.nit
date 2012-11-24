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


class Toto[E]
   var _item: E
   fun set(e: E)
      do _item = e end
   fun get: E
      do return _item end
   redef fun to_s: String
      do return _item.to_s end

   init(e:E) do _item = e
end

class TestNative
	super ArrayCapable[Int]

init
do
	var a: Array[Int]
	var b: NativeArray[Int]
	var u: Object
	a = [10, 20, 30]
	a[1] = 2
	print(a[0])
	print(a[1])
	b = calloc_array(5)
	b[0]=200
	b[1]=300
	print(b[0])
	print(b[1])
end
end



fun test_toto
do
	var t = new Toto[Int](1)
	t.set(5)
	print(t)
end

fun test_array
do
	var a = new Array[Int].with_capacity(3)
	a.add(1)
	a.add(2)
	a.add(3)
	a.add(4)
	a.add(5)
	print(a[0])
	print(a)
	var i = a.iterator
	while i.is_ok do
		print(i.index)
		print(i.item)
		i.next
	end
end

test_toto
print("-")
var n = new TestNative
print("-")
test_array
