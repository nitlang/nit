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
import end
interface Object
end
class A
	type T: A
	var t: T = self
	var nt: nullable T = self

	type U: nullable A
	var u: U = self
	var nu: nullable U = self
	fun test
	do
		__debug__ type T : self.t
		__debug__ type nullable T : self.nt
		__debug__ type U : self.u
		__debug__ type nullable U : self.nu
	end
end

var a = new A
__debug__ type A : a.t
__debug__ type nullable A : a.nt
__debug__ type nullable A : a.u
__debug__ type nullable A : a.nu
