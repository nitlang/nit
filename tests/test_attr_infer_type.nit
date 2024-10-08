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

import collection
import text

class A
	var i0 = 0
	var i1 = -1
	var f = -1.0
	var a0 = [0, 1]
#alt1#	var a1 = [0, 1.0, "a"] # Different types
#alt1#	var a2 = [0, 1: Int] # Can't reliably check subtypes
#alt1#	var a4 = [1+1] # Expression
	var o0 = once [0, 2]
#alt1#	var o1 = once [0, "a"] # Forwarded error
end

var a = new A
