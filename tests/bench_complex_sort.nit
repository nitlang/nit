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


interface Elt
	fun val1: Int is abstract
	fun val2: Int do return val1
end

class A
	super Elt
	var a: Int
	redef fun val1: Int do return _a

	init(i: Int) do _a = i
end

class Elt2
	super Elt
	var b: Int
	redef fun val1: Int do return _b/2
	redef fun val2: Int do return _b
	init initelt2(i: Int) do _b = i
end

class B
	super Elt2
	init(i: Int) do initelt2(i)
end

class C
	super Elt
	var c: Int
	var d: Int
	redef fun val1: Int do return _c end
	redef fun val2: Int do return _d end

	init init2(i: Int, j: Int) do
		_c = i
		_d = j
	end
end

class D
	super A
	super Elt2
	redef fun val1: Int do return _a end
	redef fun val2: Int do return _b end

	init init2(i: Int, j: Int) do
		init(i)
		initelt2(j)
	end
end

class E
	super Elt2
	redef fun val1: Int do return 5 end

	init(i: Int) do initelt2(i)
end

class EltComparator
	super Comparator
	redef type COMPARED: Elt
	redef fun compare(a, b)
	do
		if _is_val1 then
			return a.val1 <=> b.val1
		else
			return a.val2 <=> b.val2
		end
	end
	
	fun toggle
	do
		_is_val1 = not _is_val1
	end
	
	var is_val1: Bool = false

	init do end
end

fun generator: Elt
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

var comparator = new EltComparator
for i in [0..n[ do
	comparator.sort(array)
	comparator.toggle
end

