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
	init do 'a'.output #alt1,2#
end

class B
	super A
	init do 'b'.output #alt1,2#
end

class C
	super A
	var c: Int
	init do 'c'.output #alt2#
end

class D
	super B
	super C
	#alt3,5#var b: Int
	#alt4#var b = 11
	init do 'd'.output #alt2#
end

class E
	super B
	super C
	var e: Int
	init do 'e'.output #alt1,2#
end

class F
	super D
	super E
	init do 'f'.output #alt1,2#
	#alt5#autoinit c=, e=
end

class G
	super D
	super E
	var g: Int
	init do 'g'.output #alt2#
	#alt5#autoinit c=, e=, g=
end

class H
	super F
	super G
	init do 'h'.output #alt1,2#
end


var a = new A
'\n'.output

var b = new B
'\n'.output

var c = new C(1)
'\n'.output
c.c.output

var d = new D(2)
'\n'.output
d.c.output

var e = new E(3, 30)
'\n'.output
e.c.output
e.e.output

var f = new F(4, 40)
'\n'.output
f.c.output
f.e.output

var g = new G(5, 50, 500)
'\n'.output
g.c.output
g.e.output
g.g.output

var h = new H(6, 60, 600)
'\n'.output
h.c.output
h.e.output
h.g.output
