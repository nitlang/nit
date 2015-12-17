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

# Generate TOC documentation groups.
module doc_gen_order

import gen_order
import doc_extract
import modelbuilder

redef class ToolContext

	# Generate the documentation TOC groups.
	#
	# EXPERIMENTAL
	var opt_gen_order = new OptionBool("Generate the documentation groups", "--gen-order")

	# Limit documentation to entries selected by this list.
	#
	# The list is a standard text file with a qualified name by line.
	var opt_gen_order_input = new OptionString(
		"Generate documentation only for the entries specified in that list", "--gen-order-input")

	# Write the generated TOC in a file.
	var opt_gen_order_output = new OptionString(
		"Write the generated TOC in a file", "--gen-order-output")

	# TOC Analysis toggle.
	var opt_gen_order_analysis = new OptionEnum(
		["none", "rand", "natural", "dependencies", "mendel", "size", "loc", "lod", "usage", "pagerank"],
		"Analysis to use when generating the TOC", 0, "--gen-order-analysis")

	redef init do
		option_context.add_option(
			opt_gen_order, opt_gen_order_input, opt_gen_order_output, opt_gen_order_analysis)
	end
end

# TOC generator phase
class DocGenOrderPhase
	super DocPhase

	redef fun apply do
		if not ctx.opt_gen_order.value then return

		var analysis = load_analysis
		var mentities = load_input_list

		# print "Input list:"
		# print mentities.join(", ")

		var order = mentities.to_a
		for mentity in order do
			analysis.weight_mentity(mentity)
		end
		if not analysis isa NoneWeighter then
			(new MEntityWeightComparator).sort order
		end

		print "\nGenerated order ({analysis}):"
		var i = 1
		for mentity in order do
			print " {i}. {mentity.toc_namespace} ({mentity.weight})"
			i += 1
		end

		var out_file = ctx.opt_gen_order_output.value
		if out_file != null then
			var fw = new FileWriter.open(out_file)
			for mentity in order do
				fw.write mentity.toc_namespace
				if mentity != order.last then fw.write "\n"
			end
			fw.close
		end
	end

	private fun load_analysis: MEntityWeighter do
		var analysis_name = ctx.opt_gen_order_analysis.values[ctx.opt_gen_order_analysis.value]
		if analysis_name == "rand" then
			return new RandomWeighter
		else if analysis_name == "natural" then
			return new NaturalWeighter
		else if analysis_name == "dependencies" then
			return new DepWeighter(doc.mainmodule)
		else if analysis_name == "mendel" then
			return new MendelWeighter(doc.mainmodule)
		else if analysis_name == "size" then
			return new SizeWeighter
		else if analysis_name == "loc" then
			return new LOCWeighter(ctx.modelbuilder)
		else if analysis_name == "lod" then
			return new LODWeighter
		else if analysis_name == "usage" then
			return new UsageWeighter(ctx.modelbuilder)
		else if analysis_name == "pagerank" then
			return new PageRankWeighter(ctx.modelbuilder, doc.mainmodule)
		else
			return new NoneWeighter
		end
	end

	# Populate `self` from the content of a select list.
	#
	# See ToolContext::opt_select_list.
	private fun load_input_list: Set[MEntity] do
		var input_list = ctx.opt_gen_order_input.value
		if input_list == null then
			print "Error: option `--gen-order` needs option `--gen-order-input` to work"
			abort
		end
		if not input_list.file_exists then
			print "Error: unable to open select list `{input_list}`"
			abort
		end
		var mentities = new HashSet[MEntity]
		var fr = new FileReader.open(input_list)
		for line in fr.read_lines do
			line = line.trim
			var res = doc.mentities_by_namespace(line)
			if res.length == 0 then
				print "Warning: namespace {line} not found"
			else if res.length > 1 then
				print "Warning: conflict for namespace {line}"
			end
			mentities.add_all res
		end
		fr.close
		return mentities
	end
end

redef class MEntity
	# Returns `self` namespace formatted for console.
	#
	# * MPackage: `mpackage`
	# * MGroup: `mpackage(::group)`
	# * MModule: `mgroup::mmodule`
	# * MClass: `mpackage::mclass`
	# * MClassDef: `mmodule::mclassdef`
	# * MProperty: `mclass::mprop`
	# * MPropdef: `mclassdef:mpropdef`
	fun toc_namespace: String is abstract
end

redef class MPackage
	redef fun toc_namespace do return "{name}::{name}"
end

redef class MGroup
	# Depends if `self` is root or not.
	#
	# * If root `mpackage`.
	# * Else `mpackage::self`.
	redef fun toc_namespace do
		var tpl = new FlatBuffer
		tpl.append mpackage.toc_namespace
		if mpackage.root != self then
			tpl.append "::"
			tpl.append name
		end
		return tpl.write_to_string
	end
end

redef class MModule
	# Depends if `self` belongs to a MGroup.
	#
	# * If mgroup `mgroup::self`.
	# * Else `self`.
	redef fun toc_namespace do
		var tpl = new FlatBuffer
		if mgroup != null then
			tpl.append mgroup.toc_namespace
			tpl.append "::"
		end
		tpl.append name
		return tpl.write_to_string
	end
end

redef class MClass
	# Returns `mpackage::self`.
	redef fun toc_namespace do
		var tpl = new FlatBuffer
		tpl.append intro_mmodule.mgroup.mpackage.toc_namespace
		tpl.append "::"
		tpl.append name
		return tpl.write_to_string
	end
end

redef class MClassDef
	# Returns `mmodule::self`
	redef fun toc_namespace do
		var tpl = new FlatBuffer
		tpl.append mmodule.toc_namespace
		tpl.append "::"
		tpl.append mclass.name
		return tpl.write_to_string.write_to_string
	end
end

redef class MProperty
	# Returns `mclass::self`.
	redef fun toc_namespace do
		var tpl = new FlatBuffer
		tpl.append intro_mclassdef.mclass.toc_namespace
		tpl.append "::"
		tpl.append intro.name
		return tpl.write_to_string
	end
end

redef class MPropDef
	# Returns `mclassdef::self`
	redef fun toc_namespace do
		var tpl = new FlatBuffer
		tpl.append mclassdef.toc_namespace
		tpl.append "::"
		tpl.append name
		return tpl.write_to_string
	end
end
