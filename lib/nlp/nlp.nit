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

# Natural Language Processor based on the StanfordNLP core.
#
# See http://nlp.stanford.edu/software/corenlp.shtml.
module nlp

import stanford
import vsm

redef class NLPDocument

	# `NLPVector` representing `self`.
	var vector: Vector[String] is lazy do
		var vector = new Vector[String]
		for sentence in sentences do
			for token in sentence.tokens do
				if not keep_pos_token(token) then continue
				var lemma = token.lemma
				if lemma_black_list.has(lemma) then continue
				if not vector.has_key(lemma) then
					vector[lemma] = 1
				else
					vector[lemma] += 1
				end
			end
		end
		return vector
	end

	# Should we keep `token` when composing the vector?
	#
	# Choice is based on the POS tag of the token.
	# See `allowed_pos_prefixes`.
	private fun keep_pos_token(token: NLPToken): Bool do
		var pos = token.pos
		for prefix in allowed_pos_prefixes do
			if pos.has_prefix(prefix) then return true
		end
		return false
	end

	# Should we keep `lemma` when composing the vector?
	#
	# See `lemma_black_list`.
	private fun keep_lemma(lemma: String): Bool do
		return true
	end

	# Allowed POS tag prefixes.
	#
	# When building a vector from `self`,  only tokens tagged with one of these
	# prefixes are kept.
	# Other tokens are ignored.
	var allowed_pos_prefixes: Array[String] = ["NN", "VB", "RB"] is writable

	# Ignored lemmas.
	var lemma_black_list: Array[String] = ["module", "class", "method"] is writable
end
