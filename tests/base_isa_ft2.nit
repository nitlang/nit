# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2012 Alexandre Terrasa <alexandre@moz-code.org>
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

import base_minimal

class A[E]

	fun foo(obj: Object): Bool do
		return obj isa A[E]
	end

	fun bar(obj: Object): Bool do
		return obj isa A[nullable Object]
	end
end

class B
end

var a = new A[Object]

assert not a.foo(new B)
assert a.foo(new A[Bool])

true.output

