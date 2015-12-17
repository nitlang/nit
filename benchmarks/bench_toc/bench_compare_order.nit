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

# Use this tool to compare nitdoc automatic ordering output with expert groups.
module bench_compare_order

import bench_base
import csv

private class GroupCompare
	super TOCBench

	# Where to output the resulting CSV file?
	var opt_output_csv = new OptionString("CSV Output file", "-o", "--csv-output")

	# Where to output the resulting output files?
	var opt_compare = new OptionString("Comparison expert dir", "-c", "--compare-dir")

	# Analysis to use.
	var opt_analysis = new OptionString("Analysis to bench", "-a", "--analysis")

	var opt_comparator = new OptionString("Order comparison method to use", "--comparator")

	# Known analysis
	var analysis_list: Array[String] =
		["natural", "dependencies", "mendel", "size", "loc",
		"lod", "usage", "pagerank"]

	var comparator_list: Array[String] = ["levenshtein", "ted", "kendall-tau"]

	init do
		opts.add_option(opt_analysis, opt_output_csv, opt_compare, opt_comparator)
	end

	# Compare directory to use.
	var compare_dir: String is lazy do return opt_compare.value or else "experts/ordered"

	# CSV file to output.
	var output_csv: String is lazy do return opt_output_csv.value or else "order.csv"

	# Comparison method to use.
	var comparator: TOCGroupComparator is lazy do
		if opt_comparator.value == "ted" then
			return new TreeEditDistanceComparator
		else if opt_comparator.value == "kendall-tau" then
			return new KendallTauDistanceComparator
		end
		return new LevenshteinDistanceComparator
	end

	fun compare_orders(analysis_list: Array[String]) do
		var csv = prepare_csv(analysis_list)
		for expert in experts do
			expert.compare_orders(self, analysis_list, comparator, csv)
		end
		csv.write_to_file(output_csv)
	end

	fun prepare_csv(analysis_list: Array[String]): CsvDocument do
		var csv = new CsvDocument
		var headers = new Array[String]
		headers.add "group"
		headers.add "lines"
		headers.add_all analysis_list
		csv.header = headers
		return csv
	end
end

redef class TOCExpert
	private fun compare_orders(bench: GroupCompare, analysis_list: Array[String], comparator: TOCGroupComparator, csv: CsvDocument) do
		for file in toc_files(bench) do file.compare_orders(bench, analysis_list, comparator, csv)
	end
end

redef class TOCFile
	private fun compare_orders(bench: GroupCompare, analysis_list: Array[String], comparator: TOCGroupComparator, csv: CsvDocument) do
		for group in group_files(bench) do
			var record = new Array[String]
			record.add group.name
			record.add group.count_lines.to_s
			for analysis in analysis_list do
				var path = bench.compare_dir / analysis / expert.name / lvl / name / "{group.name}.md"
				var generated = new TOCGroup.from_analysis(self, group.name, path)
				var dist = (comparator.compare_orders(group, generated) * 100.0).to_i
				if generated.lines.length <= 1 then
					record.add "n/a"
				else
					record.add dist.to_s
				end
				print "* n={generated.lines.length} d={dist} | {group.path} {generated.path}"
			end
			csv.records.add record
		end
	end

end

redef class TOCGroup

	# Init self with from an analysis folder
	init from_analysis(toc: TOCFile, name, path: String) do
		init(toc, name)
		self.path = path
	end

	# Count lines in this group.
	fun count_lines: Int do return lines.length

	# Is this group empty (have no lines)?
	fun is_empty: Bool do return lines.is_empty
end

# Comparison method used to compare group orders.
interface TOCGroupComparator

	# Compare `a` and `b` orders.
	fun compare_orders(a, b: TOCGroup): Float is abstract

	# Discard elements from `ta` order that don't appear in `tb`.
	fun normalize(ta, tb: Array[String]): Array[String] do
		var taa = new Array[String]
		for i in ta do
			if not tb.has(i) then continue
			taa.add i
		end
		return taa
	end
end

# Compare group orders using Levenshtein distance.
class LevenshteinDistanceComparator
	super TOCGroupComparator

	redef fun compare_orders(a, b) do
		var ga = a.lines
		var gb = b.lines
		var gaa = normalize(ga, gb)
		if gaa.is_empty or gb.is_empty then return 0.0
		var d = levenshtein(gaa, gb)
		return 1.0 - d.to_f / gaa.length.to_f
	end

	# Compute Levenshtein distance between `ta` and `tb`.
	# ~~~
	# var comparator = new LevenshteinDistanceComparator
	#
	# var a = ["A", "B", "C"]
	# var b = ["A", "B", "C"]
	# var c = ["C", "B", "A"]
	# assert comparator.levenshtein(a, b) == 0
	# assert comparator.levenshtein(a, c) == 2
	# ~~~
	fun levenshtein(a, b: Array[Object]): Int do
		var la = a.length
		var lb = b.length
		var d = new Array[Array[Int]]
		for i in [0 .. la] do
			d.add(new Array[Int].filled_with(0, lb + 1))
			d[i][0] = i
		end
		for j in [0 .. lb] do d[0][j] = j

		for i in [1 .. la] do
			for j in [1 .. lb] do
				var cost = 1
				if a[i - 1] == b[j - 1] then
					cost = 0
				end
				d[i][j] = min(
					d[i - 1][j] + 1,
					d[i][j - 1] + 1,
					d[i - 1][j - 1] + cost)
			end
		end
		return d[la][lb]
	end

	private fun min(v1, v2, v3: Int): Int do
		return v1.min(v2.min(v3))
	end
end

# Compare group orders using Tree Edit Distance
class TreeEditDistanceComparator
	super TOCGroupComparator

	redef fun compare_orders(a, b) do
		var ga = a.lines
		var gb = b.lines
		var gaa = normalize(ga, gb)
		if gaa.is_empty or gb.is_empty then return 0.0
		var ta = parse_lines(gaa)
		var tb = parse_lines(gb)
		var d = tb.distance_from(ta)
		return 1.0 - d.to_f / gaa.length.max(tb.length).to_f
	end

	# Parse the group file and build a tree with it.
	fun parse_lines(lines: Array[String]): ValueTree do
		var res = new Array[String]
		res.add "root"
		for line in lines do
			res.add " {line}"
		end
		return new ValueTree.from_string(res)
	end
end

# Compare group orders using Kendall-Tau distance.
class KendallTauDistanceComparator
	super TOCGroupComparator

	redef fun compare_orders(a, b) do
		var ta = a.lines.to_a
		var tb = b.lines.to_a
		var taa = normalize(ta, tb)
		if taa.is_empty or tb.is_empty then return 0.0
		if taa.length != tb.length then return 0.0
		var d = kendall_tau(taa, tb)
		return 1.0 - d.to_f / (b.count_lines * (b.count_lines - 1) / 2).to_f
	end

	# Compute Kendall-Tau distance between `ta` and `tb`.
	#
	# ~~~
	# var comparator = new KendallTauDistanceComparator
	#
	# var a = ["A", "B", "C"]
	# var b = ["A", "B", "C"]
	# var c = ["C", "B", "A"]
	# var d = ["A", "B", "C", "D", "E"]
	# var e = ["C", "D", "A", "B", "E"]
	# assert comparator.kendall_tau(a, b) == 0
	# assert comparator.kendall_tau(a, c) == 3
	# assert comparator.kendall_tau(d, e) == 4
	# ~~~
	fun kendall_tau(ta, tb: Array[String]): Int do
		var n = ta.length
		assert n == tb.length

		# Ranks
		var pa = new HashMap[String, Int]
		var pb = new HashMap[String, Int]
		for i in [0 .. n[ do
			pa[ta[i]] = i
			pb[tb[i]] = i
		end

		var tau = 0
		for i in [0 .. n[ do
			for j in [i + 1 .. n[ do
				if pb[ta[i]] > pb[ta[j]] then tau += 1
			end
		end
		return tau
	end
end


var base = new GroupCompare

var arguments = base.parse_options(args)
var input_expert = base.opt_expert.value

if arguments.is_empty and input_expert == null then
	print "Usage:"
	print "bench_compare_order -e <expert>"
	print "or"
	print "bench_compare_order <experts.lst>"
	sys.exit 1
end

if input_expert == null then
	base.experts.add_all base.parse_experts_list(arguments.first)
else
	base.experts.add new TOCExpert(input_expert)
end

var input_analysis = base.opt_analysis.value
if input_analysis == null then
	base.compare_orders(base.analysis_list)
else
	base.compare_orders([input_analysis])
end
