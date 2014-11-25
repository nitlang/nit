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

import kernel

class A[E]
	type N: G[E] is fixed
	type M: N is fixed
	type O: G[M] is fixed

	var x: G[E]
	var y: N
	var u: G[G[E]]

	fun foo(n: M)
	do
		x = n
		y = n
	end

	fun bar(o: O)
	do
		u = o
		o = u
	end
end

class G[E] end
