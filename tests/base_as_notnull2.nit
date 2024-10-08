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

class G[E]
	fun foo(e: E): E
	do
		var ee = e.as(not null)
		ee.output
		return ee
	end
end

class A
	super G[Object]
	redef fun foo(e)
	do
		var ee = e.as(not null)
		ee.output
		return ee
	end
end

class B[F: Object]
	super G[nullable F]
	redef fun foo(e)
	do
		var ee = e.as(not null)
		ee.output
		return ee
	end
end

class C[F: Object]
	super G[F]
	redef fun foo(e)
	do
		var ee = e.as(not null)
		ee.output
		return ee
	end
end

var a = new A
a.foo(1).output
#alt1#a.foo(null).output
var b = new B[Int]
b.foo(2).output
#alt2#b.foo(null).output
var c = new C[Int]
c.foo(3).output
#alt3#c.foo(null).output
