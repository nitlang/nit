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

import core::kernel

class O
	fun foo: O do
		0.output
		return new B
	end
end

class A
	super O
	redef fun foo: B do
		1.output
		return new B
	end
	fun bar: B do
		10.output
		return new B
	end
end

class B
	super O
	redef fun foo: C do
		2.output
		return new C
	end
	fun bar: C do
		20.output
		return new C
	end
end

class C
	super O
end

var a: O #alt1# var a

a = new A
var i = 0
while i < 4 do
	a = a.foo #alt2# a = a.bar
	i += 1
end
