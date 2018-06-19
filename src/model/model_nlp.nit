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

# ModelIndex based on a NLPIndex
#
# Can be used to perform NLP queries on a Model.
# Model entities are matched by the relevance of the natural language found
# in their comments.
module model_nlp

import nlp
import model::model_index
import md5
import markdown::decorators

# A ModelIndex that accepts NLP queries
class ModelNLPIndex
	super ModelIndex
	super NLPIndex

	init do cache_dir.mkdir

	# Cache directory
	#
	# Used so we don't need to call the NLP server for already processed vectors.
	var cache_dir: String = ".nlp"

	# Is there a cached vector for the `md5` representation of a string?
	fun has_cache(md5: String): Bool do
		return (cache_dir / md5).file_exists
	end

	# Cache the `vector` associated with the `md5` representation of a string
	fun save_cache(md5: String, vector: Vector) do
		vector.join(", ", ": ").write_to_file(cache_dir / md5)
	end

	# Load the corresponding vector from a cached `md5` representation of a string
	fun load_cache(md5: String): Vector do
		var v = new Vector
		var content = (cache_dir / md5).to_path.read_all
		if content.is_empty then return v
		var parts = content.split(", ")
		for part in parts do
			var ps = part.split(": ")
			v[ps.first.trim] = ps.last.trim.to_f
		end
		return v
	end

	# Index model entities
	#
	# By default, we do not index class and property definitions.
	# Redefine this method if you want to do so.
	fun index_model(view: ModelView) do
		for mentity in view.mpackages do index_mentity(mentity)
		for mentity in view.mgroups do index_mentity(mentity)
		for mentity in view.mmodules do index_mentity(mentity)
		for mentity in view.mclasses do index_mentity(mentity)
		for mentity in view.mproperties do index_mentity(mentity)
		update_index
	end

	# Get the NLP vector for a MEntity
	fun mentity_vector(mentity: MEntity): Vector do
		var content = ""
		var mdoc = mentity.mdoc_or_fallback
		if mdoc != null then
			var parser = new MarkdownProcessor
			var decorator = new DocIndexDecorator
			parser.decorator = decorator
			parser.process(mdoc.content.join("\n"))
			content = decorator.raw_md.write_to_string
		end

		var md5 = content.md5
		if has_cache(md5) then return load_cache(md5)

		var vector = parse_string(content)
		save_cache(md5, vector)

		return vector
	end

	# Add `mentity` to the index
	fun index_mentity(mentity: MEntity): Document do
		index mentity
		var terms = mentity_vector(mentity)
		var doc = new Document(mentity.full_name, mentity.location.to_s, terms)
		index_document doc

		return doc
	end

	# Find mentities using NLP queries
	#
	# This implementation redefines the default index behavior to use NLP queries
	# instead of the name prefix and levenshtein matches.
	redef fun find(name) do
		var results = new IndexMatches
		for match in match_string(name) do
			var mentity = find_by_full_name(match.document.title).first.mentity
			results.add new nitc::IndexMatch(mentity, 1.0 - match.similarity)
		end
		return results
	end

	# By default we blacklist things like symbols and numbers
	redef var blacklist_pos = [".", ",", "''", "``", ":", "POS", "CD", "-RRB-", "-LRB-", "SYM"]

	# Default stoplist includes most of the symbols not recognized by StanfordNLP
	#
	# FIXME this should be done by the NLP engine.
	redef var stoplist = [
		"=", "==", "&lt;", "&gt;", "*", "/", "\\", "=]", "%", "_", "!=", ">=",
		"<=", "<=>", "+", "-", ">>", "<<"]
end

# Custom decorator used to extract raw strings from Markdown constructs
#
# Used so we don't index Markdown tokens, only strings.
private class DocIndexDecorator
	super MdDecorator

	var raw_md = new FlatBuffer

	redef fun add_headline(v, block) do
		var first_line = block.block.first_line
		if first_line != null then raw_md.append first_line.value
		super
	end

	redef fun add_paragraph(v, block) do
		raw_md.append block.block.text
		super
	end

	redef fun add_listitem(v, block) do
		raw_md.append block.block.text
		super
	end

	redef fun add_span_code(v, buffer, from, to) do
		raw_md.add ' '
		buffer.read(raw_md, from, to)
		raw_md.add ' '
		super
	end
end

redef class Text
	# Read `self` between `nstart` and `nend` (excluded) and writte chars to `out`.
	private fun read(out: FlatBuffer, nstart, nend: Int): Int do
		var pos = nstart
		while pos < length and pos < nend do
			out.add self[pos]
			pos += 1
		end
		if pos == length then return -1
		return pos
	end
end
