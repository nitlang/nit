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

# Use this tool to shuffle the groups.
module bench_shuffle_groups

import bench_base
intrude import value_tree

# Split TOC file into groups
private class BenchExtractGroups
	super TOCBench

	# Output directory for generated files.
	var opt_output_dir = new OptionString("Output file", "-d", "--output-dir")

	# Flatten groups?
	var opt_flatten_groups = new OptionBool("Flatten sub-groups", "--flatten")

	init do
		opts.add_option(opt_output_dir, opt_flatten_groups)
	end

	# Output directory to use.
	var output_dir: String is lazy do return opt_output_dir.value or else "out_groups/"

	fun shuffle_groups do
		output_dir.mkdir
		for expert in experts do expert.shuffle_groups(self)
	end
end

redef class TOCExpert
	private fun shuffle_groups(bench: BenchExtractGroups) do
		for toc in toc_files(bench) do toc.shuffle_groups(bench)
	end
end

redef class TOCFile
	private fun shuffle_groups(bench: BenchExtractGroups) do
		for group in group_files(bench) do
			var out_dir = bench.output_dir / expert.name / lvl / name
			out_dir.mkdir
			group.shuffle
			group.write_to_file(out_dir / "{group.name}.md")
		end
	end
end

# A Group of mentities created by an expert.
redef class TOCGroup
	# Shuffle the lines of this group.
	fun shuffle do lines.shuffle
end

var bench = new BenchExtractGroups

var arguments = bench.parse_options(args)
var input_expert = bench.opt_expert.value

if arguments.is_empty and input_expert == null then
	print "Usage:"
	print "bench_extract_groups -e <expert>"
	print "or"
	print "bench_extract_groups <experts.lst>"
	sys.exit 1
end

if input_expert == null then
	bench.experts.add_all bench.parse_experts_list(arguments.first)
else
	bench.experts.add new TOCExpert(input_expert)
end
bench.shuffle_groups
