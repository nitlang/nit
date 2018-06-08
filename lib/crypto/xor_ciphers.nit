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

redef class CString
	# In-place XOR `self` with `key`
	fun xor(key: CString, len: Int, key_length: Int, key_offset: nullable Int) do
		if key_offset == null then key_offset = 0

		var key_pos = key_offset % key_length

		for i in [0 .. len[ do
			self[i] = key[key_pos] ^ self[i]
			key_pos += 1
			if key_pos >= key_length then key_pos = 0
		end
	end
end

# Base class to modelize cryptographic ciphers
abstract class Cipher

	# Encrypted data
	var ciphertext = new Bytes.empty is writable

	# Unencrypted data
	var plaintext = new Bytes.empty is writable

	# Encrypt plaintext and populate `self.ciphertext`
	fun encrypt is abstract

	# Decrypt ciphertext and populate `self.plaintext`
	fun decrypt is abstract

end

# Simple XOR cipher where the whole plaintext is XORed with a single byte.
class SingleByteXorCipher
	super Cipher

	# Cryptographic key used in encryption and decryption.
	var key: Int = 0

	redef fun encrypt do
		var key_bytes = new Bytes.with_capacity(1)
		key_bytes.add(key)
		ciphertext = plaintext.xorcipher(key_bytes)
	end

	redef fun decrypt do
		var key_bytes = new Bytes.with_capacity(1)
		key_bytes.add(key)
		plaintext = ciphertext.xorcipher(key_bytes)
	end
end

# XOR cipher where the key is repeated to match the length of the message.
class RepeatingKeyXorCipher
	super Cipher

	# Cryptographic key used in encryption and decryption.
	var key = new Bytes.empty

	redef fun encrypt do
		assert key.length > 0
		ciphertext = plaintext.xorcipher(key)
	end

	redef fun decrypt do
		assert key.length > 0
		plaintext = ciphertext.xorcipher(key)
	end
end
