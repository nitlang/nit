# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
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
	meth f0 is abstract
	meth f1(a,b: Int) is abstract 
	meth f2(a,b: Int) is abstract
	meth f3(a,b: Int): Int is abstract
	meth f4: Int is abstract
end

class B
special A
	redef meth f0 do 0.output
	redef meth f1(a: Int, b: Int) do (a+b).output
	redef meth f2(a,b) do (a+b).output
	redef meth f3(a,b) do return a+b
	redef meth f4 do return 4
	init do end
end


meth m1 do 1.output
meth m2(a:Int) do a.output
meth m3(a,b:Int) do (a+b).output
#alt1#meth e1(a,b:Int...) do (a.first).output

m1
m2(2)
m3(1,2)
#alt1#e1(4,5)

var b = new B
b.f0
b.f1(0,1)
b.f2(1,1)
b.f3(1,2).output
b.f4.output
