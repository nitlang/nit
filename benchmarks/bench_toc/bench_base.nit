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

import opts
import value_tree

# Base class used to factorize usefull services about toc benches.
class TOCBench

	# Expert original files directory
	var opt_expert_dir = new OptionString("Directory where the expert files are located", "--expert-dir")

	# Run only for a specific expert.
	var opt_expert = new OptionString("Expert to compare the TOCs with", "-e", "--expert")

	# Level used for the analysis (modules, classes, properties)
	var opt_level = new OptionEnum(
		["properties", "classes", "modules"], "Level of the analysis", 0, "-l", "--level")

	var opts = new OptionContext

	# Expert dir to use.
	#
	# See `opt_expert_dir`.
	fun experts_dir: String do return opt_expert_dir.value or else "experts/"

	# Directory name where expert files will be looked up for depending on the level.
	fun expert_lvl: String do return "lvl-{opt_level.value_name}"

	init do
		opts.add_option(opt_expert_dir, opt_expert, opt_level)
	end

	# Parse args as option and return the rest.
	fun parse_options(args: Sequence[String]): Array[String] do
		opts.parse(args)
		return opts.rest
	end

	# Parse the file containing the list of experts to analyze.
	fun parse_experts_list(experts_list: String): Array[TOCExpert] do
		if not experts_list.file_exists then
			print "Error: can't access file {experts_list}"
			abort
		end

		var experts = new Array[TOCExpert]
		var fr = new FileReader.open(experts_list)
		for expert_name in fr.read_lines do
			experts.add(new TOCExpert(experts_dir / expert_name))
		end
		fr.close

		return experts
	end

	var experts = new Array[TOCExpert]
end

# An expert who wrote some experts TOC files.
class TOCExpert

	# Path to this expert directory.
	var path: String

	# Name of the expert (the name used in the directory that holds the TOC files).
	var name: String is lazy do return path.basename

	redef fun to_s do return name

	fun toc_files(bench: TOCBench): Array[TOCFile] do
		var input = "experts/{name}.in"
		if not input.file_exists then
			print "Error: can't access benches input file `{input}`"
			abort
		end
		var bench_files = new Array[TOCFile]
		var fr = new FileReader.open(input)
		for line in fr.read_lines do
			bench_files.add new TOCFile(self, bench.expert_lvl, "../../{line}")
		end
		fr.close
		return bench_files
	end
end

class TOCFile

	# Expert this bench is from
	var expert: TOCExpert

	# Level of analysis to apply
	var lvl: String

	# Library to gen toc for.
	var lib: String

	# Bench name.
	var name: String is lazy do return lib.basename.strip_extension(".nit")

	fun path: String do return expert.path / lvl / "{name}.md"

	redef fun to_s do return name

	fun load_lines: Array[String] do
		var fr = new FileReader.open(path)
		var lines = fr.read_lines
		fr.close
		return lines
	end

	fun load_tree: ValueTree do return new ValueTree.from_file(path)

	# Load group files for this expert.
	fun group_files(bench: TOCBench): Array[TOCGroup] do
		var files = new Array[TOCGroup]
		var group_dir = path.strip_extension(".md")
		print group_dir
		for file in group_dir.files do
			files.add new TOCGroup(self, file.strip_extension(".md"))
		end
		return files
	end
end

# A Group of mentities created by an expert.
class TOCGroup
	# Expert this bench is from
	var toc: TOCFile

	# Bench name.
	var name: String

	# Path to this group.
	var path: String is lazy do return toc.expert.path / toc.lvl / toc.name / "{name}.md"

	# Lines of the file.
	var lines: Array[String] is lazy do
		var fr = new FileReader.open(path)
		var lines = fr.read_lines
		fr.close
		return lines
	end

	# Write this group into a file.
	fun write_to_file(filename: String) do
		var fw = new FileWriter.open(filename)
		fw.write(lines.join("\n"))
		fw.close
	end

	redef fun to_s do return name
end

# var base = new TOCBench
#
# var arguments = base.parse_options(args)
# var input_expert = base.opt_expert.value
#
# if arguments.is_empty and input_expert == null then
#	print "Usage:"
#	print "bench_toc_gen -e <expert>"
#	print "or"
#	print "bench_toc_gen <experts.lst>"
#	sys.exit 1
# end
#
# var experts = new Array[TOCExpert]
# if input_expert == null then
#	experts.add_all base.parse_experts_list(arguments.first)
# else
#	experts.add new TOCExpert(input_expert)
# end
#
# for expert in experts do
#	print expert
# end
