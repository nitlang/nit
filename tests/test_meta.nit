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


class A
   fun foo
      do
          printn("A")
      end
   fun blup(a: Int)
      do
         blup2(a, 1)
      end
   fun blup2(a: Int, b : Int)
      do
         printn(a+b)
      end
   fun blop(a: Int, b: Int...)
      do
         var i = b.iterator
         while i.is_ok do
            printn(a+i.item)
            i.next
         end
      end
end

class B
	super A
   redef fun foo
      do
          printn("B")
      end
end

class C
	super A
   fun foo2
      do
          printn("C")
      end
end

class D
	super B
	super C
   redef fun foo
      do
          printn("D")
      end

   init do end
end

fun test1
do
	var b: B
	b = new D
	b.foo
	b.blup2(1,2)
	b.blup(3)
end

fun test2
do
	var b = new D
	var a = [1,2,3]
	var u: Object
	printn("=",5)
	b.blop(5,2,3)
end

test1
test2
