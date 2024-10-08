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
	fun bar=(i: Int) do i.output
	fun baz: Int do return 4
	fun baz=(i: Int) do i.output
end

class B
	super A
	redef var foo: Int = 20
	var bar: Int = 30 is redef writable
	redef var baz: Int = 40 is redef writable
end

class C
	super B
	redef fun foo: Int do return 100
	redef fun bar=(i: Int) do
		super
		i.output
	end
	redef fun baz: Int do return 400
	redef fun baz=(i: Int) do
		super
		i.output
	end
end

var a = new A
#alt1#a.foo = 1
a.foo.output
a.bar = 2
#alt2#a.bar.output
a.baz = 3
a.baz.output

'\n'.output

var b = new B
b.foo = 10
b.foo.output
b.bar = 20
b.bar.output
b.baz = 30
b.baz.output

'\n'.output

var c = new C
c.foo = 100
c.foo.output
c.bar = 200
c.bar.output
c.baz = 300
c.baz.output
