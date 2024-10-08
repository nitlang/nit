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

class A
end

class G[T: A]
	type U: A

	var at: T
	var au: U

	fun test(t: T, u: U)
	do
		__debug__ type T: t
		__debug__ type U: u

		__debug__ type T: at
		__debug__ type U: au
	end
end

interface Object
end
