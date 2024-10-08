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
	var foo: Int = 1
	var bar: Int = 2
	var baz: Int = 3
	var vaz: Int = 4
end

class B
	super A
	redef fun foo: Int do return super + 10
	redef fun bar=(i: Int)
	do
		'#'.output
		i.output
		super(i+20)
	end
	redef fun baz: Int do return super + 30
	redef fun baz=(i: Int)
	do
		'#'.output
		i.output
		super(i+30)
	end
	redef var vaz: Int = 40 is redef writable
end

var b = new B
b.foo.output
b.foo = 100
b.foo.output
'\n'.output
b.bar.output
b.bar = 200
b.bar.output
'\n'.output
b.baz.output
b.baz = 300
b.baz.output
'\n'.output
b.vaz.output
b.vaz = 400
b.vaz.output
