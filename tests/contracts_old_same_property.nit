# This file is part of NIT ( http://www.nitlanguage.org ).
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
	var i: Int

	fun add_one
	is
		ensure(old(i) + 1 == i)
	do
		i = i + 1
	end
end

class B
	var i: Int

	var a: A

	fun add_one
	is
		ensure(old(i) + 1 == i)
		ensure(old(a.i) + 1 == a.i)
	do
		i = i + 1
		a.add_one
	end
end

var b = new B(0, new A(0))
b.add_one
