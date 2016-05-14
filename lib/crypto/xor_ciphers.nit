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

# XOR oriented cryptographic ciphers and utilities.
module xor_ciphers

redef class Bytes
	# Returns `self` xored with `key`
	#
	# The key is cycled through until the `self` has been completely xored.
	#
	#     assert "goodmorning".to_bytes.xorcipher(" ".to_bytes) == "GOODMORNING".bytes
	fun xorcipher(key: Bytes): Bytes do
		var xored = new Bytes.with_capacity(self.length)

		for i in self.length.times do
			xored.add(self[i] ^ key[i % key.length])
		end

		return xored
	end
end
