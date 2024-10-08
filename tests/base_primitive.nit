# This file is part of NIT ( https://nitlanguage.org ).
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

import kernel

redef class Object
	fun foo(i: Int)
	do
		0.output
	end
end

redef class Int
	redef fun foo(i: Int)
	do
		(-i).output
	end
end

class A
	redef fun foo(i: Int)
	do
		i.output
	end
	fun bar(i: Int)
	do
		(i*10).output
	end

	init do end
end

class B
	super A
	redef fun bar(i: Int)
	do
		(i*100).output
	end

	init do end
end

var a = new A
var b = new B
var i = 5
var aa: Object
a.foo(1)
i.foo(2)
aa = a
aa.foo(3)
aa = i
aa.foo(4)
a.bar(5)
a = b
a.bar(6)
