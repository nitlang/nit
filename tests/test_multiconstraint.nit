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

import kernel

class A
   fun foo
   do
      11.output
   end

   init do end
end

class B
	super A
   redef  fun foo
   do
      21.output
   end
   fun bar
   do
      22.output
   end

   init do end
end

class C
	super B
   redef fun foo
   do
      31.output
   end
   redef fun bar
   do
      32.output
   end

   init do end
end

class G[E]
   fun out0
   do
      0.output
   end

   init do end
end
class G[E: A]
   fun out1(e: E)
   do
      e.foo
   end
end
class G[E: B]
   fun out2(e: E)
   do
      e.foo
      e.bar
   end
end

var a = new A
var b = new B
var c = new C
var ga = new G[A]
var gb = new G[B]
var gc = new G[C]
ga.out0
ga.out1(a)
#ga.out2(a)
gb.out1(b)
gb.out2(b)
gc.out1(c)
gc.out2(c)
