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

# Cryptographic attacks and utilities for XOR-based algorithms.
module xor

import combinations
import crypto
import english_utils

redef class SingleByteXorCipher
	# Tries to find key using frequency analysis on all possible plaintexts.
	# Populates `self.key`
	fun find_key do

		# Accumulate best result
		var max = 0.0
		var best = 0

		# Iterate on possible values for a byte
		var xor_b = new Bytes.with_capacity(1)
		for b in [0 .. 255] do
			# Need `Bytes` to pass to xor
			xor_b[0] = b

			# Xor and evaluate result
			var xored = ciphertext.xorcipher(xor_b)
			var result = xored.to_s.english_scoring
			if result > max then
				max = result
				best = b
			end
		end

		self.key = best

	end
end

redef class RepeatingKeyXorCipher
	# Attempts to find the key by using frequency analysis on the resulting plaintexts.
	# Best key lengths are estimated using the hamming distance of blocks of keylength bytes.
	# Ciphertext is then transposed in such a way that it can be solved by sequences of
	# SingleByteXor (one for each offset in the key).
	#
	# `min_keylength` and `max_keylength` are limits as to what key lengths are tested.
	# `considered_keylength_count` is the number of best key lengths that are kept to be
	# analysed by the SingleByteXor frequency analysis.
	fun find_key(min_keylength, max_keylength, considered_keylength_count: nullable Int)  do

		# Set default values
		if min_keylength == null then min_keylength = 2
		if max_keylength == null then max_keylength = 40
		if considered_keylength_count == null then considered_keylength_count = 3

		# Find the best candidate key lengths based on the normalized hamming distances
		var best_sizes = get_normalized_hamming_distances(min_keylength, max_keylength, considered_keylength_count)

		var best = 0.0
		var best_key: nullable Bytes = null
		for ks in best_sizes do

			# Rearrange ciphertext to be in SingleByteXORable blocks
			var transposed = transpose_ciphertext(ks)

			var key = new Bytes.empty
			for slot in transposed do
				var sbx = new SingleByteXorCipher
				sbx.ciphertext = slot
				sbx.find_key
				key.add sbx.key
			end

			# Evaluate the resulting plaintext based on english frequency analysis
			var eng_score = ciphertext.xorcipher(key).to_s.english_scoring
			if eng_score > best then
				best_key = key
				best = eng_score
			end

			assert best_key != null
			self.key = best_key

		end
	end

	# Computes the normalized hamming distances between blocks of ciphertext of length between `min_length` and `max_length`.
	# The `considered_keylength_count` smallest results are returned
	private fun get_normalized_hamming_distances(min_keylength, max_keylength, considered_keylength_count: Int): Array[Int] do

		var normalized_distances = new HashMap[Float, Int]

		# Iterate over all given key lengths
		for ks in [min_keylength .. max_keylength[ do

			# Initialize the blocks of size `ks`
			var blocks = new Array[Bytes]
			while (blocks.length + 1) * ks < ciphertext.length do
				blocks.add(ciphertext.slice(blocks.length * ks, ks))
			end

			# Compute the normalized hamming distance with all block combinations
			var pairs = new CombinationCollection[Bytes](blocks, 2)
			var hamming_dists = new Array[Float]
			for p in pairs do
				hamming_dists.add(p[0].hamming_distance(p[1]).to_f / ks.to_f)
			end

			# Normalize the results based on the number of blocks
			var normalized = 0.0
			for dist in hamming_dists do normalized += dist
			normalized /= hamming_dists.length.to_f
			normalized_distances[normalized] = ks

		end

		# Collect the best candidates
		var distances = normalized_distances.keys.to_a
		default_comparator.sort(distances)
		var best_distances = distances.subarray(0, considered_keylength_count)
		var best_sizes = [for d in best_distances do normalized_distances[d]]

		return best_sizes
	end

	# Returns a rearranged format of the ciphertext where every byte of a slot will be XORed with the same offset of a key of length `keylength`.
	private fun transpose_ciphertext(keylength: Int): Array[Bytes] do
		var transposed = new Array[Bytes]
		for i in [0 .. keylength[ do
			transposed.add(new Bytes.empty)
		end

		for byte_idx in [0 .. ciphertext.length[ do
			transposed[byte_idx % keylength].add(ciphertext[byte_idx])
		end

		return transposed
	end
end
