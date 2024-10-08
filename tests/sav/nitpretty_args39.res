# This file is part of NIT ( https://nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

class A
	fun foo(a, b: Int): Bool do return true # 1

	fun foo2(a, b: Int): Bool do return true # 2

	fun foo3(a, b: Int): Bool do return true

	fun foo4(a, b: Int): Bool do
		var res = true # 3
		return res # 4
	end

	fun foo5 do end # 5
	# fun foo6 do end
end

# end

