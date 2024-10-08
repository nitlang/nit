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

class A
	fun foo
	do
		1.output
	end
	fun bar
	do
		foo
	end

	init do end
end

class B
	super A
	redef fun foo
	do
		2.output
	end

	init do end
end

class C
	super B
	fun baz
	do
		bar
	end

	init do end
end

var a = new A
var b = new B
var c = new C
a.foo
b.bar
c.baz
