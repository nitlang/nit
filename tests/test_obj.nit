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


class O
   fun foo
   do
      printn(10)
   end
   
   fun bar
   do
      printn(20)
   end

   init do end
end

class A
	super O
   redef fun foo
   do
      printn(11)
   end
   
   redef fun bar
   do
      printn(21)
   end

   init do end
end

class B
	super A
   redef fun foo
   do
      printn(12)
   end
   
   fun baz
   do
      printn(32)
   end

   init do end
end

var a = new A
var ab: A = new B
var b = new B
a.foo
a.bar
ab.foo
ab.bar
b.foo
b.bar
b.baz
