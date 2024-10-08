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

# Vector Space Model
#
# Vector Space Model (VSM) is an algebraic model for representing text documents
# (and any objects, in general) as vectors of identifiers, such as, for example,
# index terms.
#
# It is used in information filtering, information retrieval, indexing and
# relevancy rankings.
module vsm

import counter

# A n-dimensions vector
#
# *n-dimensions* vectors are used to represent a text document or an object.
class Vector
	super HashMap[nullable Object, Float]

	# Cosine similarity of `self` and `other`.
	#
	# Gives the proximity in the range `[0.0 .. 1.0]` where 0.0 means that the
	# two vectors are orthogonal and 1.0 means that they are identical.
	#
	# ~~~
	# var v1 = new Vector
	# v1["x"] = 1.0
	# v1["y"] = 2.0
	# v1["z"] = 3.0
	#
	# var v2 = new Vector
	# v2["x"] = 1.0
	# v2["y"] = 2.0
	# v2["z"] = 3.0
	#
	# var v3 = new Vector
	# v3["a"] = 1.0
	# v3["b"] = 2.0
	# v3["c"] = 3.0
	#
	# print v1.cosine_similarity(v2)
	# assert v1.cosine_similarity(v2) == 1.0
	# print v1.cosine_similarity(v3)
	# assert v1.cosine_similarity(v3) == 0.0
	# ~~~
	fun cosine_similarity(other: SELF): Float do
		# Collect terms
		var terms = new HashSet[nullable Object]
		for k in self.keys do terms.add k
		for k in other.keys do terms.add k

		# Get dot product of two vectors
		var dot = 0.0
		for term in terms do
			dot += self.get_or_default(term, 0.0) * other.get_or_default(term, 0.0)
		end
		var cos = dot.to_f / (self.norm * other.norm)
		if cos.is_nan then return 0.0
		return cos
	end

	redef fun [](k) do
		if not has_key(k) then return 0.0
		return super
	end

	# Increment value for `obj` term
	#
	# If the term isn't already in the vector, the new value is 1.0.
	fun inc(obj: nullable Object) do
		if has_key(obj) then
			self[obj] += 1.0
		else
			self[obj] = 1.0
		end
	end

	# The norm of the vector.
	#
	# `||x|| = (x1 ** 2 ... + xn ** 2).sqrt`
	#
	# ~~~
	# var v = new Vector
	# v["x"] = 1.0
	# v["y"] = 1.0
	# v["z"] = 1.0
	# v["t"] = 1.0
	# assert v.norm.is_approx(2.0, 0.001)
	#
	# v["x"] = 1.0
	# v["y"] = 2.0
	# v["z"] = 3.0
	# v["t"] = 0.0
	# assert v.norm.is_approx(3.742, 0.001)
	# ~~~
	fun norm: Float do
		var sum = 0.0
		for v in self.values do sum += v.pow(2.0)
		return sum.to_f.sqrt
	end

	redef fun to_s do
		return "[{join(", ", ":")}]"
	end
end

# A Document index based on VSM
#
# Using VSMIndex you can index documents associated with their vector.
# Documents can then be matched to query vectors.
class VSMIndex

	# Kind of documents stored in this index
	#
	# Clients can redefine this type to specialize the index.
	type DOC: Document

	# Documents index
	var documents = new HashSet[DOC]

	# Inversed index
	#
	# Link documents to existing terms.
	var inversed_index = new HashMap[nullable Object, Array[DOC]]

	# Count for all terms in all indexed documents
	#
	# Used to compute the `inverse_doc_frequency`.
	var terms_doc_count = new Vector

	# Inverse document frequency
	#
	# The inverse document frequency is a measure of how much information a term
	# provides, that is, whether the term is common or rare across all documents.
	var inverse_doc_frequency = new Vector

	# Used to sort matches
	#
	# See `IndexMatch`.
	var sorter = new IndexMatchSorter

	# Match `query` vector to all index document vectors
	#
	# Returns an `IndexMatch` for each indexed document.
	# Results are ordered by descending similarity.
	fun match_vector(query: Vector): Array[IndexMatch[DOC]] do
		var documents = new HashSet[DOC]
		for term, count in query do
			if inversed_index.has_key(term) then
				documents.add_all inversed_index[term]
			end
		end
		var matches = new Array[IndexMatch[DOC]]
		for doc in documents do
			var sim = query.cosine_similarity(doc.tfidf)
			if sim == 0.0 then continue
			matches.add new IndexMatch[DOC](doc, sim)
		end
		sorter.sort(matches)
		return matches
	end

	# Index a document
	#
	# With each new document, the `inverse_doc_frequency` must be updated.
	# By default, the method `update_index` is called after each call to
	# `index_document`.
	#
	# When processing batch documents, use `auto_update = false` to disable
	# the auto update of the index.
	fun index_document(doc: DOC, auto_update: nullable Bool) do
		for term, count in doc.terms_count do
			terms_doc_count.inc(term)
			if not inversed_index.has_key(term) then
				inversed_index[term] = new Array[DOC]
			end
			inversed_index[term].add doc
		end
		documents.add doc
		if auto_update == null or auto_update then update_index
	end

	# Update the index
	#
	# Recompute the `inverse_doc_frequency` values.
	# Must be called manually after indexing new document with the option
	# `auto_update = false`.
	fun update_index do
		for doc in documents do
			for term, ccount in doc.terms_count do
				inverse_doc_frequency[term] = (documents.length.to_f / terms_doc_count[term]).log
			end
		end
		for doc in documents do
			for term, freq in doc.terms_frequency do
				doc.tfidf[term] = freq * inverse_doc_frequency[term]
			end
		end
	end
end

# A VSM index to store strings
class StringIndex
	super VSMIndex

	# Index a new Document from `title`, `uri` and string `string`.
	#
	# Return the Document created.
	#
	# See `index_document`.
	fun index_string(title, uri, string: String, auto_update: nullable Bool): DOC do
		var vector = parse_string(string)
		var doc = new Document(title, uri, vector)
		index_document(doc, auto_update)
		return doc
	end

	# Match the `query` string against all indexed documents
	#
	# See `match_vector`.
	fun match_string(query: String): Array[IndexMatch[DOC]] do
		var vector = parse_string(query)
		var doc = new Document("", "", vector)
		return match_vector(doc.terms_frequency)
	end

	# Parse the `string` as a Vector
	#
	# Returns a vector containing the terms of `string`.
	fun parse_string(string: String): Vector do
		var reader = new StringReader(string)
		var vector = new Vector
		loop
			var token = reader.read_word
			if token == "" then break
			vector.inc(token)
		end
		return vector
	end
end

# A VSMIndex to index files
class FileIndex
	super StringIndex

	# Index a file from its `path`.
	#
	# Return the created document or null if `path` is not accepted by `accept_file`.
	#
	# See `index_document`.
	fun index_file(path: String, auto_update: nullable Bool): nullable DOC do
		if not accept_file(path) then return null
		var vector = parse_file(path)
		var doc = new Document(path, path, vector)
		index_document(doc, auto_update)
		return doc
	end

	# Index multiple files
	#
	# The recursive method `index_dir` will be called for each directory found
	# in `paths`.
	#
	# See `index_file`
	fun index_files(paths: Collection[String], auto_update: nullable Bool) do
		for path in paths do
			if path.to_path.is_dir then
				index_dir(path, false)
			else
				index_file(path, false)
			end
		end
		if auto_update != null and auto_update then update_index
	end

	# Index all files in `dir` recursively
	#
	# See `index_file`.
	fun index_dir(dir: String, auto_update: nullable Bool) do
		if not dir.to_path.is_dir then return
		for file in dir.files do
			var path = dir / file
			if path.to_path.is_dir then
				index_dir(path, false)
			else
				index_file(path, false)
			end
		end
		if auto_update != null and auto_update then update_index
	end

	# Is `path` accepted depending on `whitelist_exts` and `blacklist_exts`?
	fun accept_file(path: String): Bool do
		var ext = path.file_extension
		if ext != null then
			ext = ext.to_lower
			if blacklist_exts.has(ext) then return false
			if whitelist_exts.not_empty and not whitelist_exts.has(ext) then return false
		end
		return whitelist_exts.is_empty
	end

	# Parse the `file` content as a Vector
	#
	# See `parse_string`.
	fun parse_file(file: String): Vector do
		return parse_string(file.to_path.read_all)
	end

	# File extensions white list
	#
	# If not empty, only files with these extensions will be indexed.
	#
	# If an extension is in both `whitelist_exts` and `blacklist_exts`, the
	# blacklist will prevail and the file will be ignored.
	var whitelist_exts = new Array[String] is writable

	# File extensions black list
	#
	# Files with these extensions will not be indexed.
	var blacklist_exts = new Array[String] is writable
end

# A Document to add in a VSMIndex
class Document

	# Document title
	var title: String

	# Document URI
	var uri: String

	# Count of all terms found in the document
	#
	# Used to compute the document `terms_frequency`.
	var terms_count: Vector

	# Frequency of each term found in the document
	#
	# Used to match the document against the `VSMIndex::inverse_doc_frequency`.
	var terms_frequency: Vector is lazy do
		var all_terms = 0.0
		for t, c in terms_count do all_terms += c

		var vector = new Vector
		for t, c in terms_count do
			vector[t] = c / all_terms
		end
		return vector
	end

	# Term frequency–Inverse document frequency for each term
	#
	# A high weight in tf–idf is reached by a high term frequency
	# (in the given document) and a low document frequency of the term in the
	# whole collection of documents
	var tfidf: Vector = terms_count is lazy

	redef fun to_s do return "{title}"
end

# A match to a `request` in an `Index`
class IndexMatch[DOC: Document]
	super Comparable

	# Document matching the `request_vector`
	var document: DOC

	# Similarity between the `request` and the `doc`.
	#
	# Result is in the range 0.0 .. 1.1 where 0.0 means no similarity and 1.0
	# means perfect similarity.
	var similarity: Float

	redef fun to_s do return "{document} ({similarity})"
end

# Sort matches by similarity
class IndexMatchSorter
	super DefaultComparator

	redef type COMPARED: IndexMatch[Document]

	redef fun compare(a, b) do
		return b.similarity <=> a.similarity
	end
end
