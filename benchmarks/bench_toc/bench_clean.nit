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

# Use this tool to clean TOC files from expert annotation.
#
# By default, it removes:
# * ~~striked lines~~
# * the `-` in front of private properties
# * the `*` in front of private properties
module bench_clean

import bench_base
intrude import value_tree

# Add namespaces to expert files.
class BenchClean
	super TOCBench

	# Output directory for generated files.
	var opt_output_dir = new OptionString("Output file", "-d", "--output-dir")

	# Also remove markdown titles
	var opt_titles = new OptionBool("Also remove markdown titles", "-t", "--remove-titles")

	init do
		opts.add_option(opt_output_dir, opt_titles)
	end

	# Output directory to use.
	var output_dir: String is lazy do return opt_output_dir.value or else "out_clean/"

	# Clean all expert files.
	fun clean_files do
		output_dir.mkdir
		for expert in experts do expert.clean_files(self)
	end
end

redef class TOCExpert
	private fun clean_files(bench: BenchClean) do
		for file in toc_files(bench) do file.clean(bench)
	end
end

redef class TOCFile
	private fun clean(bench: BenchClean) do
		var orig = load_lines
		var clean = new Array[String]

		for line in orig do
			var value = line.trim
			if value.has_prefix("~") then continue
			if value.has_prefix("-") and value != "-" then
				var pos = line.index_of('-')
				line = line.substring(0, pos) + value.substring(1, value.length - 1)
			end
			if value.has_prefix("*") and value != "*" then
				var pos = line.index_of('*')
				line = line.substring(0, pos) + value.substring(1, value.length - 1)
			end
			clean.add line
		end
		var expert_dir = bench.output_dir / expert.name
		expert_dir.mkdir
		var lvl_dir = expert_dir / lvl
		lvl_dir.mkdir
		var out = new FileWriter.open(lvl_dir / "{name}.md")
		out.write clean.join("\n")
		out.close
	end
end

var bench = new BenchClean

var arguments = bench.parse_options(args)
var input_expert = bench.opt_expert.value

if arguments.is_empty and input_expert == null then
	print "Usage:"
	print "bench_clean -e <expert>"
	print "or"
	print "bench_clean <experts.lst>"
	sys.exit 1
end

if input_expert == null then
	bench.experts.add_all bench.parse_experts_list(arguments.first)
else
	bench.experts.add new TOCExpert(input_expert)
end
bench.clean_files
