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

# Use this tool to bench nitdoc automatic ordering on expert groups.
module bench_gen_order

import bench_base

private class GroupBench
	super TOCBench

	# Where to output the resulting output files?
	var opt_output_dir = new OptionString("Output dir", "-d", "--output-dir")

	# Analysis to use.
	var opt_analysis = new OptionString("Analysis to bench", "-a", "--analysis")

	# Known analysis
	var analysis_list: Array[String] =
		["natural", "dependencies", "mendel", "size", "loc",
		"lod", "usage", "pagerank"]

	init do
		opts.add_option(opt_analysis, opt_output_dir)
	end

	# Output directory to use.
	var output_dir: String is lazy do return opt_output_dir.value or else "out_order/"

	fun bench_analysis(analysis_list: Array[String]) do
		"bin/".mkdir
		sys.system "../../bin/nitc ../../src/doc/light_clients/bench_order.nit " +
			"-o bin/bench_order"
		output_dir.mkdir
		for analysis in analysis_list do
			if not self.analysis_list.has(analysis) then
				print "Warning: unknown analysis `{analysis}`"
				continue
			end
			for expert in experts do expert.bench_analysis(self, analysis)
		end
	end
end

redef class TOCExpert
	private fun bench_analysis(bench: GroupBench, analysis: String) do
		for file in toc_files(bench) do
			file.bench_analysis(bench, analysis)
		end
	end
end

redef class TOCFile
	private fun bench_analysis(bench: GroupBench, analysis: String) do
		for file in group_files(bench) do
			print file
			var out_dir = bench.output_dir / analysis / expert.name / lvl / name
			out_dir.mkdir
			sys.system "bin/bench_order --gen-order --gen-order-input {file.path} --gen-order-output {out_dir / file.name}.md --gen-order-analysis {analysis} {lib}"
		end
	end
end

var base = new GroupBench

var arguments = base.parse_options(args)
var input_expert = base.opt_expert.value

if arguments.is_empty and input_expert == null then
	print "Usage:"
	print "bench_toc_gen -e <expert>"
	print "or"
	print "bench_toc_gen <experts.lst>"
	sys.exit 1
end

if input_expert == null then
	base.experts.add_all base.parse_experts_list(arguments.first)
else
	base.experts.add new TOCExpert(base.experts_dir / input_expert)
end

var input_analysis = base.opt_analysis.value
if input_analysis == null then
	base.bench_analysis(base.analysis_list)
else
	base.bench_analysis([input_analysis])
end
