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
	invariant(bar >= 10)

	var bar: Int
end

class B
	invariant(bar > 10)
	super A

	fun set_bar(x: Int) do
		print x
		bar = x
	end
end

class C
	invariant(bar > 12)
	super A
end

class D
	super B
	super C
end

var test = new D(13)
test.set_bar(11)
