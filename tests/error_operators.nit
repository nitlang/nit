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

# no return
class A
	fun + do abort
	fun +(a: A) do abort
	fun - do abort
	fun -(a: A) do abort
	fun *(a: A) do abort
	fun /(a: A) do abort
	fun %(a: A) do abort
	fun <(a: A) do abort
	fun >(a: A) do abort
	fun <=(a: A) do abort
	fun >=(a: A) do abort
	fun <=>(a: A) do abort
	fun <<(a: A) do abort
	fun >>(a: A) do abort
	fun foo=(a: A) do abort # should be fine
	fun [](a: A) do abort
	fun []=(a, b: A) do abort # should be fine
end

# not enough parameters
class B
	fun +: A do abort # should be fine
	fun -: A do abort # should be fine
	fun *: A do abort
	fun /: A do abort
	fun %: A do abort
	fun <: A do abort
	fun >: A do abort
	fun <=: A do abort
	fun >=: A do abort
	fun <=>: A do abort
	fun <<: A do abort
	fun >>: A do abort
	fun foo= do abort
	fun []: A do abort
	fun []=(a: A) do abort
end

# too much parameters
class C
	fun +(a,b,c:A): A do abort
	fun -(a,b,c:A): A do abort
	fun *(a,b,c:A): A do abort
	fun /(a,b,c:A): A do abort
	fun %(a,b,c:A): A do abort
	fun <(a,b,c:A): A do abort
	fun >(a,b,c:A): A do abort
	fun <=(a,b,c:A): A do abort
	fun >=(a,b,c:A): A do abort
	fun <=>(a,b,c:A): A do abort
	fun <<(a,b,c:A): A do abort
	fun >>(a,b,c:A): A do abort
	fun foo=(a,b,c:A) do abort # should be fine
	fun [](a,b,c:A): A do abort # should be fine
	fun []=(a,b,c:A) do abort # should be fine
end

# bad vararg
class D
	fun +(a:A...): A do abort
	fun -(a:A...): A do abort
	fun *(a:A...): A do abort
	fun /(a:A...): A do abort
	fun %(a:A...): A do abort
	fun <(a:A...): A do abort
	fun >(a:A...): A do abort
	fun <=(a:A...): A do abort
	fun >=(a:A...): A do abort
	fun <=>(a:A...): A do abort
	fun <<(a:A...): A do abort
	fun >>(a:A...): A do abort
	fun foo=(a,b,c:A, d:A...) do abort
	fun [](a,b,c:A, d:A...): A do abort # should be fine
	fun []=(a,b,c:A, d:A...) do abort
end
