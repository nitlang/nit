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

import kernel

class I
	var v: Int
	redef fun output do v.output
end

class A
	var o: Object = 'c'
	var a: I is noinit
	var b: nullable I = null
	#alt2#var c: I = self.a
	#alt3#var d: I = self.b.as(not null)
	#alt4#var e: I = self.o.as(I)
	#alt5#var f: I = self.initattr
	#alt6#var g: I = self.getnull.a

	fun initattr: I do abort
	fun getnull: nullable A do return null

	init
	do
		self.a = new I(1) #alt7#
		self.b = new I(2) #alt8#
	end
end

class B
	super A

	fun foo
	do
		self.o.output
		'\n'.output
		self.a.output
		self.b.output
		#alt2#self.c.output
		#alt3#self.d.output
		#alt4#self.e.output
		#alt5#self.f.output
		#alt6#self.g.output
	end
end

var b = new B
b.foo
'\n'.output
