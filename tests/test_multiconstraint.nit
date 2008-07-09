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

import kernel

class A
   meth foo
   do
      11.output
   end

   init do end
end

class B
special A
   redef  meth foo
   do
      21.output
   end
   meth bar
   do
      22.output
   end

   init do end
end

class C
special B
   redef meth foo
   do
      31.output
   end
   redef meth bar
   do
      32.output
   end

   init do end
end

class G[E]
   meth out0
   do
      0.output
   end

   init do end
end
class G[E: A]
   meth out1(e: E)
   do
      e.foo
   end
end
class G[E: B]
   meth out2(e: E)
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
