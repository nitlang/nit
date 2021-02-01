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
import contracts_invariant_inheritance_multi

# Test import a class with invariant and add a new one by new inheritance

class E
	invariant(bazz)

	var bazz = true
end

redef class C
	super E

	redef fun set_bar_baz(x: Int, y: Float) do
		super
		self.bazz = false
		print bazz
	end
end

var test = new C(10, 2.0)
test.set_bar_baz(10, 2.0)# The method broke the E invariant with the set bazz = false
