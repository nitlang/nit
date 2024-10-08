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

import abstract_collection

class A
	fun foo do 1.output
end

class G[E]
	super Collection[E]

	var a: E

	redef fun iterator do return new I[E](self)
end

class I[E]
	super Iterator[E]

	var g: G[E]
	var fini: Bool = false

	redef fun next
	do
		fini = true
	end

	redef fun is_ok
	do
		return not fini
	end

	redef fun item
	do
		return g.a
	end
end

class B
	var a = new A
	var g = new G[A](a)

	fun bar
	do
		for x in g do x.foo
	end
end

var b = new B
b.bar
for x in b.g do x.foo
