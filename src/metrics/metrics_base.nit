# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012 Jean Privat <jean@pryen.org>
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

# Helpers for various statistics tools.
module metrics_base

import model_utils
import csv
import counter
import console

redef class ToolContext

	# --all
	var opt_all = new OptionBool("Compute all metrics", "--all")

	# --mmodules
	var opt_mmodules = new OptionBool("Compute metrics about mmodules", "--mmodules")
	# --mclassses
	var opt_mclasses = new OptionBool("Compute metrics about mclasses", "--mclasses")
	# --mendel
	var opt_mendel = new OptionBool("Compute mendel metrics", "--mendel")
	# --inheritance
	var opt_inheritance = new OptionBool("Compute metrics about inheritance usage", "--inheritance")
	# --genericity
	var opt_refinement = new OptionBool("Compute metrics about refinement usage", "--refinement")
	# --self
	var opt_self = new OptionBool("Compute metrics about the usage of explicit and implicit self", "--self")
	# --ast
	var opt_ast = new OptionBool("Compute metrics about the usage of nodes and identifiers in the AST", "--ast")
	# --nullables
	var opt_nullables = new OptionBool("Compute metrics on nullables send", "--nullables")
	# --static-types
	var opt_static_types = new OptionBool("Compute explicit static types metrics", "--static-types")
	# --tables
	var opt_tables = new OptionBool("Compute tables metrics", "--tables")
	# --rta
	var opt_rta = new OptionBool("Compute RTA metrics", "--rta")
	# --generate-csv
	var opt_csv = new OptionBool("Export metrics in CSV format", "--csv")
	# --generate_hyperdoc
	var opt_generate_hyperdoc = new OptionBool("Generate Hyperdoc", "--generate_hyperdoc")
	# --poset
	var opt_poset = new OptionBool("Complete metrics on posets", "--poset")

	# --no-colors
	var opt_nocolors = new OptionBool("Disable colors in console outputs", "--no-colors")


	var opt_dir = new OptionString("Directory where some statistics files are generated", "-d", "--dir")
	var output_dir: String = "."

	redef init
	do
		super
		self.option_context.add_option(opt_all)
		self.option_context.add_option(opt_mmodules)
		self.option_context.add_option(opt_mclasses)
		self.option_context.add_option(opt_mendel)
		self.option_context.add_option(opt_inheritance)
		self.option_context.add_option(opt_refinement)
		self.option_context.add_option(opt_self)
		self.option_context.add_option(opt_ast)
		self.option_context.add_option(opt_nullables)
		self.option_context.add_option(opt_static_types)
		self.option_context.add_option(opt_tables)
		self.option_context.add_option(opt_rta)
		self.option_context.add_option(opt_csv)
		self.option_context.add_option(opt_generate_hyperdoc)
		self.option_context.add_option(opt_poset)
		self.option_context.add_option(opt_dir)
		self.option_context.add_option(opt_nocolors)
	end

	redef fun process_options(args)
	do
		super
		var val = self.opt_dir.value
		if val != null then
			val = val.simplify_path
			val.mkdir
			self.output_dir = val
		end
	end

	# colorize heading 1 for console output
	fun format_h1(str: String): String do
		if opt_nocolors.value then return str
		return str.yellow.bold
	end

	fun format_h2(str: String): String do
		if opt_nocolors.value then return str
		return str.bold
	end

	fun format_h3(str: String): String do
		if opt_nocolors.value then return str
		return str
	end

	fun format_h4(str: String): String do
		if opt_nocolors.value then return str
		return str.green
	end

	fun format_p(str: String): String do
		if opt_nocolors.value then return str
		return str.light_gray
	end

end

redef class MClass
	# is the class imported from standard lib?
	fun is_standard: Bool do
		return self.intro_mmodule.mgroup.mproject.name == "standard"
	end
end

redef class MModule
	# is the module imported from standard lib?
	fun is_standard: Bool do
		return self.mgroup.mproject.name == "standard"
	end
end

# A Metric is used to collect data about things
#
# The concept is reified here for a better organization and documentation
interface Metric
	type ELM: Object
	type VAL: Object
	type RES: Map[ELM, VAL]

	fun name: String is abstract
	fun desc: String is abstract

	# Clear all results for this metric
	fun clear is abstract

	# Values for each element
	fun values: RES is abstract

	# Collect metric values on elements
	fun collect(elements: Set[ELM]) is abstract

	# The value calculated for the element
	fun [](element: ELM): VAL do return values[element]

	# Does the element have a value for this metric?
	fun has_element(element: ELM): Bool do return values.has_key(element)

	# The values average
	fun avg: Float is abstract

	# Pretty print the metric results in console
	fun to_console(indent: Int, colors: Bool) do
		if values.is_empty then
			if colors then
				print "{"\t" * indent}{name}: {desc} -- nothing".green
			else
				print "{"\t" * indent}{name}: {desc} -- nothing"
			end
			return
		end

		var max = self.max
		var min = self.min
		if colors then
			print "{"\t" * indent}{name}: {desc}".green
			print "{"\t" * indent}  avg: {avg}".light_gray
			print "{"\t" * indent}  max: {max} ({self[max]})".light_gray
			print "{"\t" * indent}  min: {min} ({self[min]})".light_gray
			print "{"\t" * indent}  std: {std_dev}".light_gray
		else
			print "{"\t" * indent}{name}: {desc}"
			print "{"\t" * indent}  avg: {avg}"
			print "{"\t" * indent}  max: {max} ({self[max]})"
			print "{"\t" * indent}  min: {min} ({self[min]})"
			print "{"\t" * indent}  std: {std_dev}"
		end
	end

	# The values standard derivation
	fun std_dev: Float is abstract

	# The element with the highest value
	fun max: ELM is abstract

	# The element with the lowest value
	fun min: ELM is abstract

	# The value threshold above what elements are considered as 'interesting'
	fun threshold: Float do return avg + std_dev

	# The set of element above the threshold
	fun above_threshold: Set[ELM] is abstract
end

# A Metric that collects integer data
#
# Used to count things
class IntMetric
	super Metric

	redef type VAL: Int
	redef type RES: Counter[ELM]

	protected var values_cache = new Counter[ELM]
	redef fun values do return values_cache

	redef fun clear do values_cache.clear

	fun sum: Int do return values_cache.sum

	redef fun max do
		assert not values_cache.is_empty
		return values_cache.max.as(not null)
	end

	redef fun min do
		assert not values_cache.is_empty
		return values_cache.min.as(not null)
	end

	# Values average
	redef fun avg: Float do return values_cache.avg

	redef fun std_dev: Float do return values_cache.std_dev

	redef fun above_threshold do
		var above = new HashSet[ELM]
		var threshold = threshold
		for element, value in values do
			if value.to_f > threshold then above.add(element)
		end
		return above
	end

	redef fun to_console(indent, colors) do
		super
		if colors then
			print "{"\t" * indent}  sum: {sum}".light_gray
		else
			print "{"\t" * indent}  sum: {sum}"
		end
	end
end

# A Metric that collects float datas
#
# Used sor summarization
class FloatMetric
	super Metric

	redef type VAL: Float

	protected var values_cache = new HashMap[ELM, VAL]
	redef fun values do return values_cache

	redef fun clear do values_cache.clear

	fun sum: Float do
		var sum = 0.0
		for v in values.values do sum += v
		return sum
	end

	redef fun max do
		assert not values.is_empty
		var max: nullable Float = null
		var elem: nullable ELM = null
		for e, v in values do
			if max == null or v > max then
				max = v
				elem = e
			end
		end
		return elem.as(not null)
	end

	redef fun min do
		assert not values.is_empty
		var min: nullable Float = null
		var elem: nullable ELM = null
		for e, v in values do
			if min == null or v < min then
				min = v
				elem = e
			end
		end
		return elem.as(not null)
	end

	redef fun avg do
		if values.is_empty then return 0.0
		return sum / values.length.to_f
	end

	redef fun std_dev: Float do
		var sum = 0.0
		for value in values.values do
			sum += (value - avg).pow(2.to_f)
		end
		return (sum / values.length.to_f).sqrt
	end

	redef fun above_threshold do
		var above = new HashSet[ELM]
		var threshold = threshold
		for element, value in values do
			if value > threshold then above.add(element)
		end
		return above
	end

	redef fun to_console(indent, colors) do
		super
		if colors then
			print "{"\t" * indent}  sum: {sum}".light_gray
		else
			print "{"\t" * indent}  sum: {sum}"
		end
	end

end

# A MetricSet is a metric holder
#
# It purpose is to be extended with a metric collect service
class MetricSet
	type ELM: Object

	# Metrics to compute
	var metrics: Set[Metric] = new HashSet[Metric]

	# Add a metric to the set
	fun register(metrics: Metric...) do for metric in metrics do self.metrics.add(metric)

	# Clear all results for all metrics
	fun clear do for metric in metrics do metric.clear

	# Collect all metrics for this set of class
	fun collect(elements: Set[ELM]) do
		for metric in metrics do metric.collect(elements)
	end

	# Pretty print the resuls in console
	fun to_console(indent: Int, colors: Bool) do
		for metric in metrics do metric.to_console(indent, colors)
	end

	# Export the metric set in CSV format
	fun to_csv: CSVDocument do
		var csv = new CSVDocument

		# set csv headers
		csv.header.add("entry")
		for metric in metrics do csv.header.add(metric.name)

		# collect all entries to merge metric results
		var entries = new HashSet[ELM]
		for metric in metrics do
			for entry in metric.values.keys do entries.add(entry)
		end

		# collect results
		for entry in entries do
			var line = [entry.to_s]
			for metric in metrics do
				if metric.has_element(entry) then
					line.add(metric[entry].to_s)
				else
					line.add("n/a")
				end
			end
			csv.lines.add(line)
		end
		return csv
	end
end
