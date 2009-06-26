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

import module_1

redef class A # class 3
   redef fun a13
   do
	   print(13)
	   print(3)
   end
   redef fun a123
   do
	   print(123)
	   print(3)
   end   

   init do end
end

# B is class 4

class C # class 5
special B
   redef fun all25
   do
	   print(250)
	   print(5)
	   a1
	   a12
	   a13
	   a123
   end

   init do end
end

var a = new A
var c = new C
a.a1
a.a12
a.a13
a.a123
print(0) 
c.a1
c.a12
c.a13
c.a123
print(0)
c.all2
print(0)
c.all25
