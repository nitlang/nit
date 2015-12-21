# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Apply NLP analysis to DocModel.
#
# Result of the analysis can then be used by other phases.
#
# NLP can be used to handle natural language queries, compare documents, valid
# comments syntax, sky is the limit...
module doc_nlp

import doc_extract
import doc_down
import nlp
import nlp::vsm
import metrics::metrics_base

redef class ToolContext

	# Because the NLP processing can be long, we deactivate it by default.
	var opt_nlp = new OptionBool("Use NLP phases (default is `no`)", "--nlp")

	# Classpath to StanfordNLPJar
	var opt_nlp_cp = new OptionString("Java classpath for StanfordNLP jars", "--cp")

	redef init do
		super
		option_context.add_option(opt_nlp, opt_nlp_cp)
	end

	# Java NLP classpath to use.
	#
	# See `opt_nlp_cp`.
	var nlp_cp: String is lazy do
		var cp = opt_nlp_cp.value
		if cp == null then cp = "*"
		return cp
	end
end

redef class DocModel
	# NLProcessor instance used to process comments.
	var nlp_processor: NLPProcessor is noinit
end

# NLP processing phase for comments.
class NLPPhase
	super DocPhase

	# Populates the given DocModel with NLP documents.
	redef fun apply do
		if not ctx.opt_nlp.value then return

		# Build nlp indexes
		doc.nlp_processor = new NLPProcessor(ctx.nlp_cp)
		# FIXME also index projects README files
		var mentities = new Array[MEntity]
		mentities.add_all doc.mmodules
		mentities.add_all doc.mclasses
		mentities.add_all doc.mproperties
		build_nlp_documents(mentities)
	end

	# Build NLPDocuents from the comments of the `mentities`.
	#
	# See `MEntity::nlp_document`.
	fun build_nlp_documents(mentities: Collection[MEntity]) do
		var tmp_dir = ".nitdoc.nlp.tmp/"
		tmp_dir.mkdir

		# Process `mentities` comments.
		var proc = doc.nlp_processor
		var input_files = build_nlp_inputs(tmp_dir, mentities)
		var map = proc.process_files(input_files.values, tmp_dir)

		# Retrieve documents and associate them to their entities
		for mentity, file in input_files do
			mentity.nlp_document = map[file]
		end

		tmp_dir.rmdir
	end

	# Generate NLP input files for the NLP processor batch mode.
	fun build_nlp_inputs(tmp_dir: String, mentities: Collection[MEntity]): Map[MEntity, String] do
		var inputs = new HashMap[MEntity, String]
		for mentity in mentities do
			var file = tmp_dir / mentity.nitdoc_id

			# Write the mentity comment into a single file
			var fw = new FileWriter.open(file)
			var mdoc = mentity.mdoc
			if mdoc != null then
				fw.write mdoc.comment
			else
				fw.write ""
			end
			fw.close

			inputs[mentity] = file
		end
		return inputs
	end
end

redef class MEntity
	# NLPDocument associated with this mentity `comment`.
	var nlp_document: nullable NLPDocument = null
end

# Cosine Similarity with other comments.
class VectorSimilarityMetric
	super FloatMetric

	redef type ELM: NLPVector

	redef fun name do return "cosine_similarity"
	redef fun desc do return "Cosine similarity to other vectors"

	# MVector compared with.
	var vector: NLPVector

	redef fun collect(vectors) do
		var v = self.vector
		for ov in vectors do values[ov] = v.cosine_similarity(ov)
	end
end
