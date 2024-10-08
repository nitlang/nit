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

import base_gen2

redef class B[E] #alt1# redef class B #alt2# redef class B[X] #alt3# redef class B[E,X]
	fun output2 do e2.output
	fun e2: E do return e
	#alt2#fun e3: X do return e
end

var b = new B[Int](2)
b.output2
