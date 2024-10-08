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

class A
	fun foo(a: nullable Int, bs: Int..., c: nullable Int)
	do
		if a == null then '\n'.output else a.output
		for b in bs do
			' '.output
			b.output
		end
		if c == null then '\n'.output else c.output
		'-'.output
		'\n'.output

	end

	fun bar(a: nullable Int, bs: Int...)
	do
		if a == null then '\n'.output else a.output
		for b in bs do
			' '.output
			b.output
		end
		'-'.output
		'\n'.output
	end

	fun bar=(a:nullable Int, bs: Int..., c: nullable Int)
	do
		if a == null then '\n'.output else a.output
		for b in bs do
			' '.output
			b.output
		end
		if c == null then '\n'.output else c.output
		'-'.output
		'\n'.output
	end

	fun [](a: nullable Int, bs: Int...): Int
	do
		if a == null then '\n'.output else a.output
		for b in bs do
			' '.output
			b.output
		end
		'-'.output
		'\n'.output
		return 0
	end

	fun []=(a: nullable Int, bs: Int..., c: nullable Int): Int
	do
		if a == null then '\n'.output else a.output
		for b in bs do
			' '.output
			b.output
		end
		if c == null then '\n'.output else c.output
		'-'.output
		'\n'.output
		return 0
	end
end

var a = new A
var x

#alt1#a.foo
#alt1#a.foo(2)
#alt1#a.foo(1,2)
a.foo(1,2,3)
a.foo(1,2,3,4)

#alt1#a.bar
#alt1#a.bar(1)
a.bar(1,2)
a.bar(1,2,3)

#alt1#a.bar = 10
#alt1#a.bar(1) = 20
a.bar(1,2) = 30
a.bar(1,2,3) = 40

#alt1#x = a[1]
x = a[1,2]
x = a[1,2,3]

#alt1#a[1] = 20
a[1,2] = 30
a[1,2,3] = 40
a[1,2,3,4] = 50
