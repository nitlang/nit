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

# Use this tool to split TOC files into groups.
module bench_extract_groups

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

	fun extract_groups do
		output_dir.mkdir
		for expert in experts do expert.extract_groups(self)
	end
end

redef class TOCExpert
	# Extract groups for each expert files
	private fun extract_groups(bench: BenchExtractGroups) do
		for file in toc_files(bench) do file.extract_groups(bench)
	end
end

redef class TOCFile
	private fun extract_groups(bench: BenchExtractGroups) do
		var i = 0
		for id, node in load_tree.ids do
			if node.children.length <= 2 then continue
			var group = new ExpertGroup(node.value)
			extract_children(node, group.entries, bench.opt_flatten_groups.value)
			var orig_dir = bench.output_dir / expert.name / lvl / name
			orig_dir.mkdir
			group.write_to_file(orig_dir / "{name}_{i}.md")
			i += 1
		end
	end

	private fun extract_children(node: ValueNode, children: Array[String], flatten: Bool) do
		for child in node.children do
			children.add child.value
			if flatten then extract_children(child, children, flatten)
		end
	end
end

private class ExpertGroup
	var name: String
	var entries = new Array[String]

	fun write_to_file(filename: String) do
		var fw = new FileWriter.open(filename)
		fw.write(entries.join("\n"))
		fw.close
	end

	fun is_empty: Bool do return entries.is_empty
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
bench.extract_groups
