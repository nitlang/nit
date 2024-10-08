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
	type PUBA: A
	protected type PROA: A
	private type PRIA: A

	#alt1#type PUBB: B
	#alt2#protected type PROB: B
	private type PRIB: B

	fun pubPUBA(a: PUBA) do end
	protected fun proPUBA(a: PUBA) do end
	private fun priPUBA(a: PUBA) do end

	#alt3#fun pubPROA(a: PROA) do end
	protected fun proPROA(a: PROA) do end
	private fun priPROA(a: PROA) do end

	#alt4#fun pubPRIA(a: PRIA) do end
	#alt5#protected fun proPRIA(a: PRIA) do end
	private fun priPRIA(a: PRIA) do end

	#alt1#fun pubPUBB(a: PUBB) do end
	#alt1#protected fun proPUBB(a: PUBB) do end
	#alt1#private fun priPUBB(a: PUBB) do end

	#alt1#fun pubPROB(a: PROB) do end
	#alt1#protected fun proPROB(a: PROB) do end
	#alt1#private fun priPROB(a: PROB) do end

	#alt6#fun pubPRIB(a: PRIB) do end
	#alt7#protected fun proPRIB(a: PRIB) do end
	private fun priPRIB(a: PRIB) do end
end

private class B
	type PUBA: A
	#alt8#protected type PROA: A
	private type PRIA: A

	type PUBB: B
	#alt8#protected type PROB: B
	private type PRIB: B

	fun pubPUBA(a: PUBA) do end
	private fun priPUBA(a: PUBA) do end

	#alt8#fun pubPROA(a: PROA) do end
	#alt8#private fun priPROA(a: PROA) do end

	fun pubPRIA(a: PRIA) do end
	private fun priPRIA(a: PRIA) do end

	fun pubPUBB(a: PUBB) do end
	private fun priPUBB(a: PUBB) do end

	#alt8#fun pubPROB(a: PROB) do end
	#alt8#private fun priPROB(a: PROB) do end

	fun pubPRIB(a: PRIB) do end
	private fun priPRIB(a: PRIB) do end
end
