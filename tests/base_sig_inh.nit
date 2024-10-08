# This file is part of NIT ( https://nitlanguage.org ).
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
#alt1#import array

class A
	fun f0 is abstract
	fun f1(a,b: Int) is abstract 
	fun f2(a,b: Int) is abstract
	fun f3(a,b: Int): Int is abstract
	fun f4: Int is abstract
end

class B
	super A
	redef fun f0 do 0.output
	redef fun f1(a: Int, b: Int) do (a+b).output
	redef fun f2(a,b) do (a+b).output
	redef fun f3(a,b) do return a+b
	redef fun f4 do return 4
	init do end
end


fun m1 do 1.output
fun m2(a:Int) do a.output
fun m3(a,b:Int) do (a+b).output
#alt1#fun e1(a,b:Int...) do (a.first).output

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
