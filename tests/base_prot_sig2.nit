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
private import base_prot_sig

class C
	#alt1#fun pubA(a: A) do end
	#alt2#protected fun proA(a: A) do end
	private fun priA(a: A) do end

	#alt3#var vpubA: nullable A is writable, noinit
	#alt4#protected var vproA: nullable A is protected writable, noinit
	private var vpriA: nullable A is noinit

	#alt5#var vpubA2 = new A is writable
	#alt6#protected var vproA2 = new A is protected writable
	private var vpriA2 = new A

	init do end
end

private class D
	fun pubA(a: A) do end
	private fun priA(a: A) do end

	var vpubA: nullable A is writable, noinit
	private var vpriA: nullable A is noinit

	var vpubA2 = new A is writable
	private var vpriA2 = new A

	init do end
end
