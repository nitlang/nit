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
	var opt_generate_csv = new OptionBool("Generate CVS format metrics", "--generate-csv")
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
		self.option_context.add_option(opt_inheritance)
		self.option_context.add_option(opt_refinement)
		self.option_context.add_option(opt_self)
		self.option_context.add_option(opt_ast)
		self.option_context.add_option(opt_nullables)
		self.option_context.add_option(opt_static_types)
		self.option_context.add_option(opt_tables)
		self.option_context.add_option(opt_rta)
		self.option_context.add_option(opt_generate_csv)
		self.option_context.add_option(opt_generate_hyperdoc)
		self.option_context.add_option(opt_poset)
		self.option_context.add_option(opt_dir)
		self.option_context.add_option(opt_nocolors)
	end

	redef fun process_options
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
	fun name: String is abstract
	fun desc: String is abstract
	# clear all results for this metric
	fun clear is abstract
end

# A Metric that collects integer data
#
# Used to count things
class IntMetric[E: Object]
	super Metric

	var values = new Counter[E]

	redef fun clear do values.clear

	# Return the couple with the highest value
	fun max: Couple[E, Int] do
		assert not values.is_empty
		var elem = values.max.as(not null)
		var value = values[elem]
		return new Couple[E, Int](elem, value)
	end

	# Return the couple with the lowest value
	fun min: Couple[E, Int] do
		assert not values.is_empty
		var elem = values.min.as(not null)
		var value = values[elem]
		return new Couple[E, Int](elem, value)
	end

	# Values average
	fun avg: Float do return values.avg
end

# A Metric that collects float datas
#
# Used sor summarization
class FloatMetric[E: Object]
	super Metric

	var values: Map[E, Float] = new HashMap[E, Float]

	redef fun clear do values.clear

	# Return the couple with the highest value
	fun max: Couple[E, Float] do
		assert not values.is_empty
		var max: nullable Float = null
		var elem: nullable E = null
		for e, v in values do
			if max == null or v > max then
				max = v
				elem = e
			end
		end
		return new Couple[E, Float](elem.as(not null), max.as(not null))
	end

	# Return the couple with the lowest value
	fun min: Couple[E, Float] do
		assert not values.is_empty
		var min: nullable Float = null
		var elem: nullable E = null
		for e, v in values do
			if min == null or v < min then
				min = v
				elem = e
			end
		end
		return new Couple[E, Float](elem.as(not null), min.as(not null))
	end

	# Values average
	fun avg: Float do
		if values.is_empty then return 0.0
		var sum = 0.0
		for value in values.values do
			sum += value
		end
		return sum / values.length.to_f
	end
end

# A MetricSet is a metric holder
#
# It purpose is to be extended with a metric collect service
class MetricSet
	type METRIC: Metric

	# Metrics to compute
	var metrics: Map[String, METRIC] = new HashMap[String, METRIC]

	# Add a metric to the set
	fun register(metrics: METRIC...) do for metric in metrics do self.metrics[metric.name] = metric

	# Clear all results for all metrics
	fun clear do for metric in metrics.values do metric.clear
end
