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

# A StringIndex using a NLPProcessor to parse and vectorize strings
class NLPIndex
	super StringIndex

	# NLP Processor used to tokenize, lemmatize and POS tag documents
	var nlp_processor: NLPProcessor

	redef fun parse_string(string) do
		var vector = new Vector
		if string.trim.is_empty then return vector
		var doc = nlp_processor.process(string)
		for sentence in doc.sentences do
			for token in sentence.tokens do
				if not accept_token(token) then continue
				var lemma = token.lemma
				if not vector.has_key(lemma) then
					vector[lemma] = 1.0
				else
					vector[lemma] += 1.0
				end
			end
		end
		return vector
	end

	# Is `token` accepted by this index?
	#
	# See `whitelist_pos` and `blacklist_pos`.
	fun accept_token(token: NLPToken): Bool do
		var pos = token.pos
		if whitelist_pos.not_empty and not whitelist_pos.has(pos) then return false
		if blacklist_pos.has(pos) then return false
		if stoplist.has(token.lemma) then return false
		return true
	end

	# Part-Of-Speech whitelist
	#
	# If not empty, the index accept only the POS tags contained in this list.
	var whitelist_pos = new Array[String] is writable

	# Part-Of-Speech blacklist
	#
	# Reject POS tags contained in this list.
	var blacklist_pos = new Array[String] is writable

	# List of lemmas that must not be indexed
	var stoplist = new Array[String] is writable
end

# A FileIndex based using a NLPProcessor
class NLPFileIndex
	super NLPIndex
	super FileIndex
end
