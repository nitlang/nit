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
	fun foo is intern `{ puts("A::foo from C"); `}
	fun bar is intern do print "A::bar from Nit"
end

redef class NativeArray[E]
	fun foo is intern `{ puts("NA::foo from C"); `}
	fun bar is intern do print "NA::bar from Nit"
end

redef class Int
	fun foo is intern `{ puts("Int::foo from C"); `}
	fun bar is intern do print "Int::bar from Nit"
end

var a = new A
a.foo
a.bar

var na = new NativeArray[Object](5)
na.foo
na.bar

1.foo
1.bar
