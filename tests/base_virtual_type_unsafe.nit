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
	type E: T
	fun new_e: E do return new T
end

class B
	super A
	redef type E: U
end

class T
	fun foo do 0.output
end

class U
	super T
	redef fun foo do 1.output
	fun bar do 2.output
end

var a = new A
a.new_e.foo
var b = new B
b.new_e.foo
b.new_e.bar
