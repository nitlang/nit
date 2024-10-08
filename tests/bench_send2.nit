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

redef class Object
	fun foo do end
end
class A
	redef fun foo do i += 1 end
	init do end
	var i = 0
end
class B
	super A
	redef fun foo do end
	init do end

end
class C
	super A
	init do end

end
class D
	super B
	super C
	init do end

end
class E
	super B
	super C
	redef fun foo do end
	init do end

end
class F
	super D
	super E
	redef fun foo do end
	init do end

end

var n = 10
if args.not_empty then n = args.first.to_i

var nb = 60
var a = new Array[Object].with_capacity(nb)
for i in [0..(nb/6)[ do
	a[i*6] = new A
	a[i*6+1] = new B
	a[i*6+2] = new C
	a[i*6+3] = new D
	a[i*6+4] = new E
	a[i*6+5] = new F
end
for i in [0..1 << n[ do
	for j in [0..nb[ do
		a[j].foo
	end
end

for j in [0..nb[ do
	print a[j].as(A).i
end
