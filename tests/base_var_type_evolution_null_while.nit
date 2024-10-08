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

import end

interface Object
	fun ==(o: nullable Object): Bool do return self.is_same_instance(o)
	fun !=(o: nullable Object): Bool do return not self.is_same_instance(o)
	fun is_same_instance(other: nullable Object): Bool is intern
end
class A
end

class Bool
	fun output is intern
end

fun maybe: Bool do return true

fun test1(a: nullable A)
do
	var res = a
	while res == null do
		if maybe then
			false.output
			return
		end
	end
	__debug__ type A : res
	true.output
end

fun test2(a: nullable A)
do
	var res = a
	while res != null do
		__debug__ type A : res
		if maybe then
			false.output
			return
		end
	end
	true.output
end

test1(new A)
test1(null)
test2(new A)
test2(null)
