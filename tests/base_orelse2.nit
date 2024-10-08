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
end

class B
end

var a: A = new A
var na: nullable A = null

var b: B = new B
var nb: nullable B = null

do
	var x = na or else b
	(x == b).output
	__debug__ type Object: x
end

do
	var x = na or else nb
	(x == null).output
	__debug__ type nullable Object: x
end
