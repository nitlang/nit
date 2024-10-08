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

class A
	var i: Int
end

class B
	autoinit b, i #alt2# autoinit foo #alt4# autoinit fail
	super A
	var b: Bool #alt5# var b: Bool is noinit
	fun foo do end
end

class C
	super A
	var f: Float
end

class D
	autoinit i, b, f
	super B
	super C
end

class E
	noautoinit #alt6#
	#alt6,7# autoinit
	super A
	var a: A #alt9#
end

class F
	#alt8#noautoinit
end

var a = new A(1)
a.i.output

var b = new B(false, 2)
b.i.output
b.b.output

var c = new C(3, 3.3)
c.i.output
c.f.output

var d = new D(4, true, 4.4)
d.i.output
d.b.output
d.f.output

var e = new E
#alt1# e.a.i.output
