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
	fun foo: Int do return 1
	fun set_bar(i: Int) do i.output
	fun baz: Int do return 4
	fun set_baz(i: Int) do i.output
	fun zz do end
end

class B
	super A
	redef var foo: Int = 20 is writable(set_foo)
	var bar: Int = 30 is redef writable(set_bar)
	redef var baz: Int = 40 is writable(set_baz)
	#alt2#var z: Int is writable(set_baz)
	#alt3#var z: Int is writable(zz)
	#alt4#var z: Int is redef writable(zz)
end

class C
	super B
	fun foo=(i: Int) do set_foo(i)
	fun bar=(i: Int) do set_bar(i)
	fun baz=(i: Int) do set_baz(i)
end

var a = new A
a.foo.output
a.set_bar 2
a.set_baz 3
a.baz.output

'\n'.output

var b = new B
b.set_foo 10
#alt1#b.foo = 10
b.foo.output
b.set_bar 20
b.bar.output
b.set_baz 30
b.baz.output

'\n'.output

var c = new C
c.foo = 100
c.foo.output
c.bar = 200
c.bar.output
c.baz = 300
c.baz.output
