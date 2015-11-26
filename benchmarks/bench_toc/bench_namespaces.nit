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

# Use this tool add namespaces to experts original toc trees.
module bench_namespaces

import bench_base
intrude import value_tree

# Add namespaces to expert files.
class BenchNamespaces
	super TOCBench

	# Output directory for generated files.
	var opt_output_dir = new OptionString("Output file", "-d", "--output-dir")

	init do
		opts.add_option opt_output_dir
	end

	# Output directory to use.
	var output_dir: String is lazy do return opt_output_dir.value or else "out_namespaces/"

	# Add namespace to each expert file.
	fun add_namespaces do
		output_dir.mkdir
		for expert in experts do expert.add_namespaces(self)
	end

	# Check generated namespaces.
	fun check_namespaces do
		"bin/".mkdir
		sys.system "../../bin/nitc ../../src/doc/light_clients/check_namespaces.nit " +
			"-o bin/check_namespaces"
		for expert in experts do expert.check_namespaces(self)
	end
end

redef class TOCExpert
	# Add namespace to each toc file
	private fun add_namespaces(bench: BenchNamespaces) do
		for file in toc_files(bench) do file.write_namespaces(bench)
	end

	# Check generated namespaces for each files
	private fun check_namespaces(bench: BenchNamespaces) do
		for file in toc_files(bench) do file.check_namespaces(bench)
	end
end

redef class TOCFile
	# Add namespaces to each `tree` node.
	private fun write_namespaces(bench: BenchNamespaces) do
		var tree = new ValueTree.from_file(path)
		for id, node in tree.ids do
			node.value = make_namespace(node)
		end
		var expert_dir = bench.output_dir / expert.name
		expert_dir.mkdir
		var lvl_dir = expert_dir / lvl
		lvl_dir.mkdir
		var out = new FileWriter.open(lvl_dir / "{name}.md")
		out.write tree.to_str
		out.close
	end

	# Make the namespace for that group.
	private fun make_namespace(node: ValueNode): String do
		var name = node.value.trim
		if name.has_prefix("-") then name = name.substring(1, name.length)
		var parent = node.parent
		if parent != null then
			if node.value.trim.has_prefix("#") then
				return make_namespace(parent)
			end
			return "{make_namespace(parent)}::{name}"
		end
		return "{name}::{name}"
	end

	private fun check_namespaces(bench: BenchNamespaces) do
		var file = bench.output_dir / expert.name / lvl / "{name}.md"
		print "Checking {file}..."
		sys.system "bin/check_namespaces -c {file} {lib}"
	end
end

var base = new BenchNamespaces

var arguments = base.parse_options(args)
var input_expert = base.opt_expert.value

if arguments.is_empty and input_expert == null then
	print "Usage:"
	print "bench_namespaces -e <expert>"
	print "or"
	print "bench_namespaces <experts.lst>"
	sys.exit 1
end

if input_expert == null then
	base.experts.add_all base.parse_experts_list(arguments.first)
else
	base.experts.add new TOCExpert(base.experts_dir / input_expert)
end
base.add_namespaces
base.check_namespaces
