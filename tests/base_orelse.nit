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

class A
	var i: Int
end

var a: nullable A = new A(1)
var na: nullable A = null

var oa: A

do
	var b = a or else new A(2)
	b.i.output
	oa = b
end

do
	var b = na or else new A(3)
	b.i.output
	oa = b
end

do
	var b = na or else a
	b.i.output
	#alt1#oa = b
end

do
	var b = a or else na
	b.i.output
	#alt2#oa = b
end

do
	var na2 = na
	var b = na or else na2 or else new A(4)
	b.i.output
	oa = b
end

do
	var b = na or else a or else new A(5)
	b.i.output
	oa = b
end

do
	var b = a or else na or else new A(6)
	b.i.output
	oa = b
end
