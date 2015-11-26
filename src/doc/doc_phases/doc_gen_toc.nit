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

# Generate TOC documentation.
module doc_gen_toc

import toc_gen
import doc_extract
import modelbuilder

redef class ToolContext

	# Generate the documentation TOC.
	var opt_toc_gen = new OptionBool("Generate the documentation table of contents", "--gen-toc")

	# Write the generated TOC in a file.
	var opt_toc_output = new OptionString("Write the generated TOC in a file", "--toc-output")

	# TOC Analysis toggle.
	var opt_toc_analysis = new OptionEnum(
		["none", "rand", "natural", "dependencies", "mendel", "size", "loc", "lod", "usage", "pagerank"],
		"Analysis to use when generating the TOC", 0, "--toc-analysis")

	# Activate debug mode of TOC generation (very verbose)
	var opt_toc_debug = new OptionBool("Active debug mode for TOC generation", "--toc-debug")

	redef init do
		option_context.add_option(opt_toc_gen, opt_toc_output, opt_toc_analysis, opt_toc_debug)
	end
end

# TOC generator phase
class DocTOCGenPhase
	super DocPhase

	# List to modules to apply the analysis on.
	#
	# Basically the list of modules that will be included in the TOC tree.
	var mmodules: Collection[MModule]

	# Concerns tree to build and weight
	var tree = new ConcernsTree

	# List of ConcernsWeighters used to generate the toc
	var weighters = new Array[ConcernsWeighter]

	redef fun apply do
		if not ctx.opt_toc_gen.value then return

		var analysis: ConcernsWeighter
		var analysis_name = ctx.opt_toc_analysis.values[ctx.opt_toc_analysis.value]
		if analysis_name == "rand" then
			analysis = new RandomWeighter
		else if analysis_name == "natural" then
			analysis = new NaturalWeighter
		else if analysis_name == "dependencies" then
			analysis = new DepWeighter(doc.mainmodule)
		else if analysis_name == "mendel" then
			analysis = new NaturalWeighter
		else if analysis_name == "size" then
			analysis = new SizeWeighter
		else if analysis_name == "loc" then
			analysis = new LOCWeighter
		else if analysis_name == "lod" then
			analysis = new LODWeighter
		else if analysis_name == "usage" then
			analysis = new UsageWeighter(ctx.modelbuilder)
		else if analysis_name == "pagerank" then
			analysis = new PageRankWeighter(ctx.modelbuilder, doc.mainmodule)
		else
			analysis = new NoneWeighter
		end

		# Build the TOC tree and sort it
		var tree = build_base_tree
		for node in tree do analysis.weight_concern(node)
		tree.sort_with(new MConcernComparator)

		# Display results
		if ctx.opt_toc_debug.value then
			print tree.write_to_string
		else
			print tree.to_markdown
		end

		# Write into file
		var out = ctx.opt_toc_output.value
		if out != null then
			var f = new FileWriter.open(out)
			f.write tree.to_markdown
			f.close
		end
	end

	# Build a concerns tree without any specific order.
	fun build_base_tree: ConcernsTree do
		var tree = new ConcernsTree
		if mmodules.is_empty then return tree
		# Prefix the TOC with the main mpackage
		var mgroup = mmodules.first.mgroup
		var mpackage = null
		if mgroup != null then
			mpackage = mgroup.mpackage
			tree.add(null, mpackage)
		end
		# List entities in given modules
		var ctx = self.ctx
		for mmodule in self.mmodules do
			if mmodule == mgroup.default_mmodule then continue
			if ctx.ignore_mentity(mmodule) then continue
			tree.add(mpackage, mmodule)
			for mclassdef in mmodule.mclassdefs do
				if ctx.ignore_mentity(mclassdef) then continue
				tree.add(mmodule, mclassdef)
				for mpropdef in mclassdef.mpropdefs do
					if ctx.ignore_mentity(mpropdef) then continue
					tree.add(mclassdef, mpropdef)
				end
			end
		end
		return tree
	end
end

redef class ConcernsTree
	# More accurate debugging.
	redef fun display(e) do return "{e.to_s} ({e.weight})"

	# Display self as a Markdown TOC.
	#
	# With `#` for TOC levels.
	fun to_markdown: Text do
		var res = new FlatBuffer
		for r in roots do
			# res.append "# {r} ({r.weight})\n"
			res.append "{r}\n"
			build_list(r, res, 2)
		end
		return res
	end

	# Recursively build `to_markdown`
	private fun build_list(e: MConcern, res: FlatBuffer, lvl: Int) do
		if not sub.has_key(e) then return
		var subs = sub[e]
		for e2 in subs do
			# if e2 isa MClass then continue
			# res.append "{"  " * lvl}{"#" * lvl} {e2} ({e2.weight})\n"
			res.append "{" " * (lvl - 1)}{e2.name}\n"
			#({e2.weight})\n"
			build_list(e2, res, lvl + 1)
		end
	end
end
