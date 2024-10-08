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

class Account
	invariant solde > 0

	fun toto(i: Int): Int is
		pre i >= 0
		post result == i + 1
		test toto(5) == 6
	do
		return i + 1
	end

	fun stop
	is
		inter
	do
		abort
	end

	var tata: Int@u32 is
		ondebug(@daemon@after(print(toto)))
		final
	end

	var titi = 5 is writable, readable, initable, fast_init

	var x = new HashMap[String, Object] is lazy

	type T: Object is unchecked
end
