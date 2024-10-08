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

interface Object end

enum Bool end

class A[E: Object]
	var o: Object

	var e: E

	type VE: E
	var ve: VE

	type VVE: VE
	var vve: VVE

	type VGE: G[E]
	var vge: VGE

	type VVGE: VGE
	var vvge: VVGE

	type VGVE: G[VE]
	var vgve: VGVE

	type VGVVE: G[VVE]
	var vgvve: VGVVE

	fun foo
	do
		# In order to check type relations, this test looks for the warnings about useless cast
		# The following should produce a warning
		assert o isa Object

		assert e isa E
		assert e isa Object

		assert ve isa VE
		assert ve isa E
		assert ve isa Object

		assert vve isa VVE
		assert vve isa VE
		assert vve isa E
		assert vve isa Object

		assert vge isa VGE
		assert vge isa G[E]
		assert vge isa G[Object]
		assert vge isa Object

		assert vvge isa VVGE
		assert vvge isa VGE
		assert vvge isa G[E]
		assert vvge isa G[Object]
		assert vvge isa Object

		assert vgve isa VGVE
		assert vgve isa G[VE]
		assert vgve isa G[E]
		assert vgve isa G[Object]
		assert vgve isa Object

		assert vgvve isa VGVVE
		assert vgvve isa G[VVE]
		assert vgvve isa G[VE]
		assert vgvve isa G[E]
		assert vgvve isa G[Object]
		assert vgvve isa Object

		# The following should not
		assert o isa VGVVE
		assert o isa G[VVE]
		assert o isa VVGE
		assert o isa VGVE
		assert o isa G[VE]
		assert o isa VGE
		assert o isa G[E]
		assert o isa G[Object]
		assert o isa VVE
		assert o isa VE
		assert o isa E

		assert e isa VGVVE
		assert e isa G[VVE]
		assert e isa VVGE
		assert e isa VGVE
		assert e isa G[VE]
		assert e isa VGE
		assert e isa G[E]
		assert e isa G[Object]
		assert e isa VVE
		assert e isa VE

		assert ve isa VGVVE
		assert ve isa G[VVE]
		assert ve isa VVGE
		assert ve isa VGVE
		assert ve isa G[VE]
		assert ve isa VGE
		assert ve isa G[E]
		assert ve isa G[Object]
		assert ve isa VVE

		assert vve isa VGVVE
		assert vve isa G[VVE]
		assert vve isa VVGE
		assert vve isa VGVE
		assert vve isa G[VE]
		assert vve isa VGE
		assert vve isa G[E]
		assert vve isa G[Object]

		assert vge isa VGVVE
		assert vge isa G[VVE]
		assert vge isa VVGE
		assert vge isa VGVE
		assert vge isa G[VE]
		assert vge isa VVE
		assert vge isa VE
		assert vge isa E

		assert vvge isa VGVVE
		assert vvge isa G[VVE]
		assert vvge isa VGVE
		assert vvge isa G[VE]
		assert vvge isa VVE
		assert vvge isa VE
		assert vvge isa E

		assert vgve isa VGVVE
		assert vgve isa G[VVE]
		assert vgve isa VGE
		assert vgve isa VVGE
		assert vgve isa VVE
		assert vgve isa VE
		assert vgve isa E

		assert vgvve isa VGE
		assert vgvve isa VVGE
		assert vgvve isa VGVE
		assert vgvve isa VVE
		assert vgvve isa VE
		assert vgvve isa E
	end
end

class G[E]
end
