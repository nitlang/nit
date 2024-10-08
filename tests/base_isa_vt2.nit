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

class A[X]
	type T: X
	type U: T

	fun testT(o: Object): Bool do
		return o isa T
	end

	fun testU(o: Object): Bool do
		return o isa U
	end

end

var a = new A[Object]

assert a.testT(true)
assert a.testT(a)

assert a.testU(true)
assert a.testU(a)

true.output
