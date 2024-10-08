# This file is part of NIT ( https://nitlanguage.org ).
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
# Detect the code smells and antipatterns in the code.

module codesmells_metrics

import frontend
import nitsmell_toolcontext
import method_analyze_metrics
import mclassdef_collect

redef class ToolContext
	var codesmells_metrics_phase = new CodeSmellsMetricsPhase(self, null)
end

class CodeSmellsMetricsPhase
	super Phase
	var average_number_of_lines = 0.0
	var average_number_of_parameter = 0.0
	var average_number_of_method = 0.0
	var average_number_of_attribute = 0.0

	redef fun process_mainmodule(mainmodule, given_mmodules) do
		print toolcontext.format_h1("--- Code Smells Metrics ---")

		var model = toolcontext.modelbuilder.model
		var filter = new ModelFilter(private_visibility)
		self.set_all_average_metrics(model)
		var mclass_codesmell = new BadConceptonController(model, filter)
		var collect = new Counter[MClassDef]
		var mclassdefs = new Array[MClassDef]

		for mclass in mainmodule.flatten_mclass_hierarchy do
			mclass_codesmell.collect(mclass.mclassdefs,self)
		end
		if toolcontext.opt_get_all.value then
			mclass_codesmell.print_all
		else
			mclass_codesmell.print_top(10)
		end
	end

	fun set_all_average_metrics(model: Model) do
		var model_builder = toolcontext.modelbuilder
		self.average_number_of_lines = model.get_avg_linenumber(model_builder)
		self.average_number_of_parameter = model.get_avg_parameter
		self.average_number_of_method = model.get_avg_method
		self.average_number_of_attribute = model.get_avg_attribut
	end
end

class BadConceptonController

	var model: Model

	var filter: ModelFilter

	# Code smell list
	var bad_conception_elements = new Array[BadConceptionFinder]

	# Print all collected code smell sort in decroissant order
	fun print_all do
		for bad_conception in self.sort do
			bad_conception.print_collected_data
		end
	end

	# Print the n top element
	fun print_top(number: Int) do
		for bad_conception in self.get_numbers_of_elements(number) do
			bad_conception.print_collected_data
		end
	end

	# Collect method take Array of mclassdef to find the code smells for every class
	fun collect(mclassdefs: Array[MClassDef],phase: CodeSmellsMetricsPhase) do
		for mclassdef in mclassdefs do
			var bad_conception_class = new BadConceptionFinder(mclassdef, phase, model, filter)
			bad_conception_class.collect
			bad_conception_elements.add(bad_conception_class)
		end
	end

	# Sort the bad_conception_elements array
	fun sort: Array[BadConceptionFinder]
	do
		var res = bad_conception_elements
		var sorter = new BadConceptionComparator
		sorter.sort(res)
		return res
	end

	# Return an array with n elements
	fun get_numbers_of_elements(number : Int) : Array[BadConceptionFinder]do
		var return_values = new Array[BadConceptionFinder]
		var list = self.sort
		var min = number
		if list.length <= number*2 then min = list.length
		for i in [0..min[ do
			var t = list[list.length-i-1]
			return_values.add(t)
		end
		return return_values
	end
end

class BadConceptionFinder
	var mclassdef: MClassDef
	var array_badconception = new Array[BadConception]
	var phase: CodeSmellsMetricsPhase
	var model: Model
	var filter: ModelFilter
	var score = 0.0

	# Collect code smell with selected toolcontext option
	fun collect do
		var bad_conception_elements = new Array[BadConception]
		# Check toolcontext option
		if phase.toolcontext.opt_feature_envy.value or phase.toolcontext.opt_all.value then bad_conception_elements.add(new FeatureEnvy(phase, model, filter))
		if phase.toolcontext.opt_long_method.value or phase.toolcontext.opt_all.value then bad_conception_elements.add(new LongMethod(phase, model, filter))
		if phase.toolcontext.opt_long_params.value or phase.toolcontext.opt_all.value then bad_conception_elements.add(new LongParameterList(phase, model, filter))
		if phase.toolcontext.opt_no_abstract_implementation.value or phase.toolcontext.opt_all.value then bad_conception_elements.add(new NoAbstractImplementation(phase, model, filter))
		if phase.toolcontext.opt_large_class.value or phase.toolcontext.opt_all.value then bad_conception_elements.add(new LargeClass(phase, model, filter))
		# Collected all code smell if their state is true
		for bad_conception_element in bad_conception_elements do
			if bad_conception_element.collect(self.mclassdef,phase.toolcontext.modelbuilder) then array_badconception.add(bad_conception_element)
		end
		# Compute global score
		collect_global_score
	end

	fun print_collected_data do
		if array_badconception.length != 0 then
			print "--------------------"
			print phase.toolcontext.format_h1("Full name: {mclassdef.full_name} Location: {mclassdef.location}")
			for bad_conception in array_badconception do
				bad_conception.print_result
			end
		end
	end

	fun collect_global_score do
		if array_badconception.not_empty then
			for bad_conception in array_badconception do
				self.score += bad_conception.score
			end
		end
	end
end

abstract class BadConception
	var phase: CodeSmellsMetricsPhase

	var model: Model

	var filter: ModelFilter

	var score = 0.0

	# Name
	fun name: String is abstract

	# Description
	fun desc: String is abstract

	# Collection method
	fun collect(mclassdef: MClassDef, model_builder: ModelBuilder): Bool is abstract

	# Show results in console
	fun print_result is abstract

	# Compute code smell score to sort
	fun score_rate do
		score = 1.0
	end
end

class LargeClass
	super BadConception
	var number_attribut = 0

	var number_method = 0

	redef fun name do return "LARGC"

	redef fun desc do return "Large class"

	redef fun collect(mclassdef, model_builder): Bool do
		self.number_attribut = mclassdef.collect_intro_and_redef_mattributes(filter).length
		# Get the number of methods (Accessor include) (subtract the get and set of attibutes with (numberAtribut*2))
		self.number_method = mclassdef.collect_intro_and_redef_methods(filter).length
		self.score_rate
		return self.number_method.to_f > phase.average_number_of_method and self.number_attribut.to_f > phase.average_number_of_attribute
	end

	redef fun print_result do
		print phase.toolcontext.format_h2("{desc}: {number_attribut} attributes and {number_method} methods ({phase.average_number_of_attribute}A {phase.average_number_of_method}M Average)")
	end

	redef fun score_rate do
		score = (number_method.to_f + number_attribut.to_f) / (phase.average_number_of_method + phase.average_number_of_attribute)
	end
end

class LongParameterList
	super BadConception
	var bad_methods = new Array[MMethodDef]

	redef fun name do return "LONGPL"

	redef fun desc do return "Long parameter list"

	redef fun collect(mclassdef, model_builder): Bool do
		for meth in mclassdef.collect_intro_and_redef_mpropdefs(filter) do
			var threshold_value = 4
			# Get the threshold value from the toolcontext command
			if phase.toolcontext.opt_long_params_threshold.value != 0 then threshold_value = phase.toolcontext.opt_long_params_threshold.value
			# Check if the property is a method definition
			if not meth isa MMethodDef then continue
			# Check if method has a signature
			if meth.msignature == null then continue
			if meth.msignature.mparameters.length <= threshold_value then continue
			self.bad_methods.add(meth)
		end
		self.score_rate
		return self.bad_methods.not_empty
	end

	redef fun print_result do
		print phase.toolcontext.format_h2("{desc}:")
		if self.bad_methods.not_empty then
			print "	Affected method(s):"
			for method in self.bad_methods do
				print "		-{method.name} has {method.msignature.mparameters.length} parameters"
			end
		end
	end

	redef fun score_rate do
		if self.bad_methods.not_empty then
			self.score = self.bad_methods.length.to_f/ phase.average_number_of_method
		end
	end
end

class FeatureEnvy
	super BadConception
	var bad_methods = new Array[MMethodDef]

	redef fun name do return "FEM"

	redef fun desc do return "Feature envy"

	redef fun collect(mclassdef, model_builder): Bool do
		var mmethoddefs = call_analyze_methods(mclassdef,model_builder, filter)
		for mmethoddef in mmethoddefs do
			var max_class_call = mmethoddef.class_call.max
			# Check if the class with the maximum call is >= auto-call and the maximum call class is != of this class
			if mmethoddef.class_call[max_class_call] <= mmethoddef.total_self_call or max_class_call.mclass.full_name == mclassdef.mclass.full_name then continue
			self.bad_methods.add(mmethoddef)
		end
		self.score_rate
		return self.bad_methods.not_empty
	end

	redef fun print_result do
		print phase.toolcontext.format_h2("{desc}:")
		if self.bad_methods.not_empty then
			print "	Affected method(s):"
			for method in self.bad_methods do
				var max_class_call = method.class_call.max
				if max_class_call != null then
					# Check if the type of max call class is generique
					if max_class_call.mclass.mclass_type isa MGenericType and not phase.toolcontext.opt_move_generics.value then
						print "		-{method.name}({method.msignature.mparameters.join(", ")}) {method.total_self_call}/{method.class_call[max_class_call]}"
					else
						print "		-{method.name}({method.msignature.mparameters.join(", ")}) {method.total_self_call}/{method.class_call[max_class_call]} move to {max_class_call}"
					end
				end
			end
		end
	end

	redef fun score_rate do
		if self.bad_methods.not_empty then
			self.score = self.bad_methods.length.to_f / phase.average_number_of_method
		end
	end
end

class LongMethod
	super BadConception
	var bad_methods = new Array[MMethodDef]

	redef fun name do return "LONGMETH"

	redef fun desc do return "Long method"

	redef fun collect(mclassdef, model_builder): Bool do
		var mmethoddefs = call_analyze_methods(mclassdef,model_builder, filter)
		var threshold_value = phase.average_number_of_lines.to_i
		# Get the threshold value from the toolcontext command
		if phase.toolcontext.opt_long_method_threshold.value != 0 then threshold_value = phase.toolcontext.opt_long_method_threshold.value

		for mmethoddef in mmethoddefs do
			if mmethoddef.line_number <= threshold_value then continue
			self.bad_methods.add(mmethoddef)
		end
		self.score_rate
		return self.bad_methods.not_empty
	end

	redef fun print_result do
		print phase.toolcontext.format_h2("{desc}:  Average {phase.average_number_of_lines.to_i} lines")
		if self.bad_methods.not_empty then
			print "	Affected method(s):"
			for method in self.bad_methods do
				print "		-{method.name} has {method.line_number} lines"
			end
		end
	end

	redef fun score_rate do
		if self.bad_methods.not_empty then
			self.score = self.bad_methods.length.to_f / phase.average_number_of_method
		end
	end
end

class NoAbstractImplementation
	super BadConception
	var bad_methods = new Array[MMethodDef]

	redef fun name do return "LONGMETH"

	redef fun desc do return "No Implemented abstract property"

	redef fun collect(mclassdef, model_builder): Bool do
		if not mclassdef.mclass.is_abstract and not mclassdef.mclass.is_interface then
			if mclassdef.collect_abstract_methods(filter).not_empty then
				bad_methods.add_all(mclassdef.collect_not_define_properties(filter))
			end
		end
		self.score_rate
		return bad_methods.not_empty
	end

	redef fun print_result do
		print phase.toolcontext.format_h2("{desc}:")
		if self.bad_methods.not_empty then
			print "	Affected method(s):"
			for method in self.bad_methods do
				print "		-{method.name}"
			end
		end
	end

	redef fun score_rate do
		if self.bad_methods.not_empty then
			self.score = self.bad_methods.length.to_f / phase.average_number_of_method
		end
	end
end

redef class Model
	fun get_avg_parameter: Float do
		var counter = new Counter[MMethodDef]
		var filter = new ModelFilter
		for mclassdef in collect_mclassdefs(filter) do
			for method in mclassdef.collect_intro_and_redef_mpropdefs(filter) do
			# check if the property is a method definition
				if not method isa MMethodDef then continue
				#Check if method has a signature
				if method.msignature == null then continue
				if method.msignature.mparameters.length == 0 then continue
				counter[method] = method.msignature.mparameters.length
			end
		end
		return counter.avg + counter.std_dev
	end

	fun get_avg_attribut: Float do
		var counter = new Counter[MClassDef]
		var filter = new ModelFilter
		for mclassdef in collect_mclassdefs(filter) do
			var number_attributs = mclassdef.collect_intro_and_redef_mattributes(filter).length
			if number_attributs != 0 then counter[mclassdef] = number_attributs
		end
		return counter.avg + counter.std_dev
	end

	fun get_avg_method: Float do
		var counter = new Counter[MClassDef]
		var filter = new ModelFilter
		for mclassdef in collect_mclassdefs(filter) do
			var number_methodes = mclassdef.collect_intro_and_redef_methods(filter).length
			if number_methodes != 0 then counter[mclassdef] = number_methodes
		end
		return counter.avg + counter.std_dev
	end

	fun get_avg_linenumber(model_builder: ModelBuilder): Float do
		var methods_analyse_metrics = new Counter[MClassDef]
		var filter = new ModelFilter
		for mclassdef in collect_mclassdefs(filter) do
			var result = 0
			var count = 0
			for mmethoddef in call_analyze_methods(mclassdef,model_builder, filter) do
				result += mmethoddef.line_number
				if mmethoddef.line_number == 0 then continue
				count += 1
			end
			if not mclassdef.collect_local_mproperties(filter).length != 0 then continue
			if count == 0 then continue
			methods_analyse_metrics[mclassdef] = (result/count).to_i
		end
		return methods_analyse_metrics.avg + methods_analyse_metrics.std_dev
	end
end

class BadConceptionComparator
	super Comparator
	redef type COMPARED: BadConceptionFinder
	redef fun compare(a,b) do
		var test = a.array_badconception.length <=> b.array_badconception.length
		if test == 0 then
			return a.score <=> b.score
		end
		return a.array_badconception.length <=> b.array_badconception.length
	end
end
