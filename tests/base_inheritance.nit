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

import end

interface Object
end

enum Int
	fun output is intern
end

class A
	fun foo do 1.output
end

class B
	super A
end

class C
	super B
	redef fun foo do 2.output
end

class D
	super C
end

class D2
	super C
	redef fun foo do 3.output
end

class E
	super D
	super D2
end

fun test(a: A)
do
	a.foo
end

test(new A)
test(new B)
test(new C)
test(new D)
test(new D2)
test(new E)
