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

class A[E] #alt2# class A[E: Object]
	type V: nullable Object #alt2# type V: Object

	fun foo(e: E, v: E) do #1alt1# fun foo(e: nullable E, v: nullable E) do
		assert e != null#alt1# #alt3# assert e == null #alt4# if false then e = null
		assert v != null#alt1# #alt3# assert v == null #alt4# if false then e = null
		bar(e)
		bar(v)
		if e != null then
			bar(e)
		else bar(e)
		if v != null then
			bar(v)
		else bar(v)
		bar(e.as(not null))
		bar(v.as(not null))
		bar(e or else 0)
		bar(v or else 0)
		bar(e or else v)
		bar(v or else e)
	end

	fun bar(o: Object) do o.output
end

var a = new A[Object]
a.foo (1, 2)
