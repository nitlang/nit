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

import kernel

redef class Object
	fun printn(a: Object)
	do
		a.output
	end
end

class Toto
	var a: Int is noinit
	redef fun output
	do
		printn(_a)
	end

	init
	do 
		_a = 0
	end

	init foo
	do
		_a = 10
	end

	init bar(i: Int)
	do
		_a = i
	end
end

class Test
	var t: Toto is noinit

	init
	do
		var t: Toto
		t = new Toto
		printn(t)
		t = new Toto.foo
		printn(t)
		t = new Toto.bar(5)
		printn(t)
		t = new Toto
		printn(t)
		t = new Toto.foo
		printn(t)
		t = new Toto.bar(15)
		printn(t)

		_t = new Toto
		printn(_t)
		_t = new Toto.foo
		printn(_t)
		_t = new Toto.bar(50)
		printn(_t)
		_t = new Toto
		printn(_t)
		_t = new Toto.foo
		printn(_t)
		_t = new Toto.bar(150)
		printn(_t)
	end
end

var t = new Test
