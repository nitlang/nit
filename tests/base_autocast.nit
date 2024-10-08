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

class G[E]
	type V: nullable Object

	fun foo1
	do
		bar(1)
	end

	fun foo2
	do
		baz(2)
	end

	fun bar(x: E) do x.output
	fun baz(x: V) do x.output
end

class H
	super G[Char]
end

class I
	super G[nullable Object]
	redef type V: Char
end

(new G[Object]).foo1
(new G[Object]).foo2
#alt1#(new H).foo1
#alt1#(new H).foo2
#alt2#(new I).foo1
#alt2#(new I).foo2
