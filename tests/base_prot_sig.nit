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
class A
	fun pubA(a: A) do end
	protected fun proA(a: A) do end
	private fun priA(a: A) do end

	fun pubA2: A do abort
	protected fun proA2: A do abort
	private fun priA2: A do abort

	var vpubA: nullable A is writable, noinit
	protected var vproA: nullable A is protected writable, noinit
	private var vpriA: nullable A is noinit

	var vpubA2 = new A is writable
	protected var vproA2 = new A is protected writable
	private var vpriA2 = new A

	#alt1#fun pubB(a: B) do end
	#alt2#protected fun proB(a: B) do end
	private fun priB(a: B) do end

	#alt1#fun pubB2: B do abort
	#alt2#protected fun proB2: B do abort
	private fun priB2: B do abort

	#alt3#var vpubB: nullable B is writable, noinit
	#alt4#protected var vproB: nullable B is protected writable, noinit
	private var vpriB: nullable B is noinit

	#alt5#var vpubB2 = new B is writable
	#alt6#protected var vproB2 = new B is protected writable
	private var vpriB2 = new B


end

private class B
	fun pubA(a: A) do end
	#alt7#protected fun proA(a: A) do end
	private fun priA(a: A) do end

	var vpubA: nullable A is writable, noinit
	#alt7#protected var vproA: nullable A is protected writable, noinit
	private var vpriA: nullable A is noinit

	var vpubA2 = new A is writable
	#alt7#protected var vproA2 = new A is protected writable
	private var vpriA2 = new A

	fun pubB(a: B) do end
	#alt7#protected fun proB(a: B) do end
	private fun priB(a: B) do end

	var vpubB: nullable B is writable, noinit
	#alt7#protected var vproB: nullable B is protected writable, noinit
	private var vpriB: nullable B is noinit

	var vpubB2 = new B is writable
	#alt7#protected var vproB2 = new B is protected writable
	private var vpriB2 = new B


end
