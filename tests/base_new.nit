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

interface A
	new do return new B(1)
	new n2 do return new B(2)
	new n3: B do return new B(3)
	new n4: Int do return 4
	new n5: Int do return new B.ni(5)
	#alt1#new n do return 5
	#alt2#new n do 0.output
	#alt3#new n do return self
	#alt4#new n: Int do return object_id
end

class B
	super A
	var i: Int
	redef fun output do
		'B'.output
		i.output
	end
	new n2 do return new B(22)
	new n3: B do return new B(33)
	new n4: Int do return 44
	new n5: Int do return new B.ni(55)
	new ni(i: Int): Int do return i*10
end

class C
	super B
	new(i: Int): B do return new B(i)
	redef fun output do
		'C'.output
		i.output
	end
end

class D
	super C
	new(z: Bool): B do return new C(1111)
end

redef class Int
	new z do return 0
	new a: A do return new A
end

(new A).output
#alt5#(new A).i.output
(new A.n2).output
#alt6#(new A.n2).i.output
(new A.n3).i.output
(new A.n4).output
(new A.n5).output
#alt1-4#(new A.n).output

'\n'.output

(new B(11)).output
(new B.n2).i.output
(new B.n3).i.output
(new B.n4).output
(new B.n5).output
(new B.ni(66)).output

'\n'.output

(new C(111)).output
#alt7#(new C.n2).output

'\n'.output

(new D(true)).output

'\n'.output

#alt8#(new Int).output
(new Int.z).output
(new Int.a).output
