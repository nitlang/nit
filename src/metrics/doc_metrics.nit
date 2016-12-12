# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexandre Terrasa <alexandre@moz-code.org>
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

# Collect common metrics about documentation
module doc_metrics

import metrics_base
import model::model_collect
import doc_down

redef class ToolContext

	# --dpc
	var opt_doc = new OptionBool("Compute metrics about documentation", "--doc")

	# Doc related metrics phase
	var doc_metrics_phase: Phase = new DocMetricsPhase(self, null)

	redef init do
		super
		self.option_context.add_option(opt_doc)
	end
end

# Extract metrics about documentation.
private class DocMetricsPhase
	super Phase
	redef fun process_mainmodule(mainmodule, given_mmodules) do
		if not toolcontext.opt_doc.value and not toolcontext.opt_all.value then return

		var csv = toolcontext.opt_csv.value
		var out = "{toolcontext.opt_dir.value or else "metrics"}/doc"
		out.mkdir

		var model = toolcontext.modelbuilder.model
		var model_view = model.private_view

		print toolcontext.format_h1("\n# Doc metrics")

		var metrics = new DocMetricSet(model_view)

		var mentities = new HashSet[MEntity]
		for mpackage in model.collect_mpackages(model_view) do
			mentities.add mpackage
			for mgroup in mpackage.mgroups do
				mentities.add mgroup
			end
			for mmodule in mpackage.collect_mmodules(model_view) do
				mentities.add mmodule
				for mclass in mmodule.collect_intro_mclasses(model_view) do
					mentities.add mclass
					for mprop in mclass.collect_intro_mproperties(model_view) do
						mentities.add mprop
					end
				end
			end
		end
		metrics.collect(mentities)
		metrics.to_console(1, not toolcontext.opt_nocolors.value)
		if csv then metrics.to_csv.write_to_file("{out}/mdoc.csv")
	end
end

# Count entities class_names
class KindMetric
	super StringMetric

	redef type ELM: MEntity

	redef fun name do return "Kind"
	redef fun desc do return "MEntity kind"
end

# A metric about MDoc
abstract class MDocMetric
	super Metric

	redef type ELM: MEntity

	# Model view used to collect and filter entities
	var model_view: ModelView
end

# MetricsSet related to documentation
class DocMetricSet
	super MetricSet

	# Model view used to collect and filter entities
	var model_view: ModelView

	# COunt by kinds
	var kinds = new KindMetric

	# Lines of documentation
	var lod = new LOD(model_view) is lazy

	# Number of paragraphs in markdown
	var nb_pars = new MDPars(model_view) is lazy

	# Number of code blocks in markdown
	var nb_code_blocks = new MDCodeBlocks(model_view) is lazy

	# Number of code lines in markdown
	var nb_code_lines = new MDCodeLines(model_view) is lazy

	# Number of code spans in markdown
	var nb_code_spans = new MDCodeSpans(model_view) is lazy

	# Number of headlines in markdown
	var nb_headlines = new MDHeadlines(model_view) is lazy

	# Number of lists in markdown
	var nb_lists = new MDLists(model_view) is lazy

	# Number of links in markdown
	var nb_links = new MDLinks(model_view) is lazy

	init do
		super
		register(kinds, lod)
		register(nb_pars, nb_code_blocks, nb_code_lines, nb_code_spans)
		register(nb_headlines, nb_lists, nb_links)
	end

	redef fun collect(elements) do
		for mentity in elements do
			if not mentity isa MEntity then continue
			var mdoc = mentity.mdoc_or_fallback
			if mdoc == null then continue

			kinds.values[mentity] = mentity.class_name

			var decorator = parse_doc(mdoc)

			nb_pars.values[mentity] = decorator.nb_pars
			nb_code_blocks.values[mentity] = decorator.nb_code_blocks
			nb_code_lines.values[mentity] = decorator.nb_code_lines
			nb_code_spans.values[mentity] = decorator.nb_code_spans
			nb_links.values[mentity] = decorator.nb_links
			nb_lists.values[mentity] = decorator.nb_lists
			nb_headlines.values[mentity] = decorator.nb_headlines

			lod.values[mentity] = mdoc.content.length
		end
	end

	# Get decorator from `mdoc` so we can extract its counters
	private fun parse_doc(mdoc: MDoc): NitdocDecorator do
		var doc = mdoc.content.join("\n")
		var proc = new MarkdownProcessor
		proc.emitter.decorator = new NitdocDecorator
		proc.process(doc)
		return proc.emitter.decorator.as(NitdocDecorator)
	end
end

# Doc metric: Lines of Documentation
class LOD
	super MDocMetric
	super IntMetric
	redef fun name do return "LOD"
	redef fun desc do return "Lines of Documentation"

	redef fun collect(mentities) do
		for mentity in mentities do
			var doc = mentity.mdoc_or_fallback
			if doc == null then continue
			values[mentity] = doc.content.length
		end
	end
end

# Doc metric: number of MD paragraphs
class MDPars
	super MDocMetric
	super IntMetric
	redef fun name do return "MDPars"
	redef fun desc do return "Number of MD Paragraphs"
end

# Doc metric: number of MD code blocks
class MDCodeBlocks
	super MDocMetric
	super IntMetric
	redef fun name do return "MDCodeBlocks"
	redef fun desc do return "Number of MD Code Blocks"
end

# Doc metric: number of MD code blocks lines
class MDCodeLines
	super MDocMetric
	super IntMetric
	redef fun name do return "MDCodeLines"
	redef fun desc do return "Number of lines in MD Code Blocks"
end

# Doc metric: number of MD code spans
class MDCodeSpans
	super MDocMetric
	super IntMetric
	redef fun name do return "MDCodeSpans"
	redef fun desc do return "Number of MD Code Spans"
end

# Doc metric: number of MD headlines
class MDHeadlines
	super MDocMetric
	super IntMetric
	redef fun name do return "MDHeadlines"
	redef fun desc do return "Number of MD healines"
end

# Doc metric: number of MD lists
class MDLists
	super MDocMetric
	super IntMetric
	redef fun name do return "MDLists"
	redef fun desc do return "Number of MD Lists"
end

# Doc metric: number of MD code blocks lines
class MDLinks
	super MDocMetric
	super IntMetric
	redef fun name do return "MDLinks"
	redef fun desc do return "Number of MD links"
end

redef class NitdocDecorator

	# Number of paragraphs
	var nb_pars = 0

	# Number of code blocks
	var nb_code_blocks = 0

	# Number of code lines
	var nb_code_lines = 0

	# Number of code spans
	var nb_code_spans = 0

	# Number of headlines (h1 to h6)
	var nb_headlines = 0

	# Number of links
	var nb_links = 0

	# Number of list (ordered and unordered)
	var nb_lists = 0

	redef fun add_orderedlist(v, b) do
		nb_lists += 1
		super
	end

	redef fun add_unorderedlist(v, b) do
		nb_lists += 1
		super
	end

	redef fun add_paragraph(v, b) do
		nb_pars += 1
		super
	end

	redef fun add_link(v, link, name, comment) do
		nb_links += 1
		super
	end

	redef fun add_headline(v, b) do
		nb_headlines += 1
		super
	end

	redef fun add_code(v, b) do
		nb_code_blocks += 1
		nb_code_lines += b.block.location.line_end - b.block.location.line_start
		super
	end

	redef fun add_span_code(v, b, f, t) do
		nb_code_spans += 1
		super
	end
end
