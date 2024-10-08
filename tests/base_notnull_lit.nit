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

class A[E: nullable Discrete]
	fun array(e, f: E): Object
	do
		assert e != null
		assert f != null #alt1# #alt2# assert f == null
		return [e, f]
	end

	fun range(e, f: E): Object
	do
		assert e != null
		assert f != null #alt1#
		return [e..f]
	end
end

var a = new A[nullable Int]

var ar = a.array(1, 5)
ar.output_class_name
ar.as(Array[Int]).add 6
print ar

var ra = a.range(1, 5)
ra.output_class_name
print ra
