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
	#alt1#redef var foo: Bool = true
	#alt2#var bar: Bool = true is redef writable
	#alt3#redef var baz: Bool = true is redef writable
end

var b = new B
b.foo.output
'\n'.output
b.bar = 200
'\n'.output
b.baz.output
b.baz = 300
b.baz.output
