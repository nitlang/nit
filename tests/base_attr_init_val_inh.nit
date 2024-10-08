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
	var a1 = new W(1)
	var a2: W = a1
end

class B
	super A
	var b1 = new W(2)
	var b2: W = b1
	var b3: W = a1
end

class W
	var v: Int
end

var test1 = new A
test1.a1.v.output
test1.a2.v.output

'\n'.output

var test2 = new B
test2.a1.v.output
test2.a2.v.output
test2.b1.v.output
test2.b2.v.output
test2.b3.v.output

