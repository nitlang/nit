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

class A[E]
	fun foo(e: E): E
	do
		if e == null then e = true
		return e
	end
end

fun foo(a: A[nullable Object], o: nullable Object) do
	a.foo(o).as(not null).output
end

foo(new A[nullable Object], 1.0)
foo(new A[nullable Float], 1.0)
foo(new A[Float], 1.0)

foo(new A[nullable Object], null)
#alt1#foo(new A[nullable Float], null)
#alt2#foo(new A[Float], null)
