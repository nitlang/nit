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
	fun bar=(i: Int)
	do
		'#'.output
		i.output
	end
	fun baz: Int do return 3
	fun baz=(i: Int)
	do
		'#'.output
		i.output
	end
end

class B
	super A
	#alt1#var foo: Int = 10
	#alt2#redef var foo: Int = 10
	#alt3#var foo: Int = 10 is writable
	#alt4#redef var foo: Int = 10 is writable
	#alt5#var foo: Int = 10 is redef writable
	#alt6#redef var foo: Int = 10 is redef writable
	#alt7#redef var foo
	#alt11#var bar: Int = 20
	#alt12#redef var bar: Int = 20
	#alt13#var bar: Int = 20 is writable
	#alt14#redef var bar: Int = 20 is writable
	#alt15#var bar: Int = 20 is redef writable
	#alt16#redef var bar: Int = 20 is redef writable
	#alt17#redef var bar
	#alt21#var baz: Int = 30
	#alt22#redef var baz: Int = 30
	#alt23#var baz: Int = 30 is writable
	#alt24#redef var baz: Int = 30 is writable
	#alt25#var baz: Int = 30 is redef writable
	#alt26#redef var baz: Int = 30 is redef writable
	#alt27#redef var baz
end

var b = new B #alt7,17,27# var b = new B(100)
b.foo.output
#alt2#b.foo = 100
#alt4#b.foo = 100
b.foo.output
'\n'.output
#alt15#b.bar.output
b.bar = 200
#alt15#b.bar.output
'\n'.output
b.baz.output
b.baz = 300
b.baz.output
