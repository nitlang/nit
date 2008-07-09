# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2006-2008 Jean Privat <jean@pryen.org>
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


class Elt
	meth val1: Int is abstract
	meth val2: Int do return val1 end
end

class A
special Elt
	attr _a: Int
	redef meth val1: Int do return _a end

	init(i: Int) do _a = i end
end

class Elt2
special Elt
	attr _b: Int
	redef meth val1: Int do return _b/2 end
	redef meth val2: Int do return _b end
end

class B
special Elt2

	init(i: Int) do _b = i end
end

class C
special Elt
	attr _c: Int
	attr _d: Int
	redef meth val1: Int do return _c end
	redef meth val2: Int do return _d end

	init init2(i: Int, j: Int) do
		_c = i
		_d = j
	end
end

class D
special A
special Elt2
	redef meth val1: Int do return _a end
	redef meth val2: Int do return _b end

	init init2(i: Int, j: Int) do
		init(i)
		_b = j
	end
end

class E
special Elt2
	redef meth val1: Int do return 5 end

	init(i: Int) do _b = i end
end

class EltSorter
special AbstractSorter[Elt]
	redef meth compare(a: Elt, b: Elt): Int
	do
		if _is_val1 then
			return a.val1 <=> b.val1
		else
			return a.val2 <=> b.val2
		end
	end
	
	meth toggle
	do
		_is_val1 = not _is_val1
	end
	
	attr _is_val1: Bool

	init do end
end

meth generator: Elt
do
	var r = 5.rand
	if r == 0 then
		return new A(10.rand)
	else if r == 1 then
		return new B(10.rand)
	else if r == 2 then
		return new C.init2(10.rand, 10.rand)
	else if r == 3 then
		return new D.init2(10.rand, 10.rand)
	else
		return new E(10.rand)
	end
end

var n = 100

if not args.is_empty then
	n = args.first.to_i
end

var array = new Array[Elt].with_capacity(n)
for i in [0..n[ do
	array.push(generator)
end

var sorter = new EltSorter
for i in [0..n[ do
	sorter.sort(array)
	sorter.toggle
end

