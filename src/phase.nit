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

# Phases of the processing of nit programs
module phase

import toolcontext
import parser
import poset

redef class ToolContext
	# The various registered phases to performs
	# The order in the poset is the dependence of phases
	#
	# While you can directly modify the poset (nodes and edges),
	# it is often simpler to use the constructor in `Phase`
	var phases = new POSet[Phase]

	# --disable-phase
	var opt_disable_phase = new OptionArray("Disable a specific phase; use `list` to get the list (debug)", "--disable-phase")

	# --sloppy
	var opt_sloppy = new OptionBool("Force lazy semantic analysis of the source-code (debug)", "--sloppy")

	redef init
	do
		super

		option_context.add_option(opt_disable_phase, opt_sloppy)
	end

	redef fun process_options(args)
	do
		super

		for v in opt_disable_phase.value do
			if v == "list" then
				for p in phases_list do
					var deps = p.in_hierarchy.direct_greaters
					if deps.is_empty then
						print p
					else
						print "{p} (dep: {deps.join(", ")})"
					end
				end
				exit 0
			end

			var found = false
			for p in phases do
				if v != p.to_s then continue
				found = true
				p.disabled = true
			end
			if not found then fatal_error(null, "Error: no phase named `{v}`. Use `list` to list all phases.")
		end

		if opt_sloppy.value then semantize_is_lazy = true
	end

	# The list of registered phases in the application order.
	var phases_list: Sequence[Phase] is lazy do
		var phases = self.phases.to_a
		self.phases.sort(phases)
		return phases
	end

	# Is `phase_process_npropdef` not called automatically by `run_phases`?
	#
	# When set to true, it is the responsibility of the tools
	#
	# Is false by default.
	var semantize_is_lazy = false is writable

	# Set of already analyzed modules.
	private var phased_modules = new HashSet[AModule]

	# List of module to process according to `run_phases`
	#
	# This allow some new modules to be found and added while analysing the code.
	var todo_nmodules: Sequence[AModule]

	# Run all registered phases on a set of modules
	fun run_phases(nmodules: Collection[AModule])
	do
		var time0 = get_time
		self.info("*** SEMANTIC ANALYSIS ***", 1)
		#phases.show_dot

		var phases = phases_list

		for phase in phases do
			self.info(" registered phases: {phase}", 2)
		end

		var todo_nmodules = nmodules.to_a
		self.todo_nmodules = todo_nmodules

		while not todo_nmodules.is_empty do
			var nmodule = todo_nmodules.shift
			if phased_modules.has(nmodule) then continue
			phased_modules.add nmodule

			self.info("Semantic analysis module {nmodule.location.file.filename}", 2)

			var vannot = new AnnotationPhaseVisitor
			vannot.enter_visit(nmodule)

			for phase in phases do
				if phase.disabled then continue
				assert phase.toolcontext == self
				var errcount = self.error_count
				phase.process_nmodule(nmodule)
				if errcount != self.error_count then
					self.check_errors
				end
				errcount = self.error_count
				for nclassdef in nmodule.n_classdefs do
					assert phase.toolcontext == self
					phase.process_nclassdef(nclassdef)
					if not semantize_is_lazy then for npropdef in nclassdef.n_propdefs do
						assert phase.toolcontext == self
						phase_process_npropdef(phase, npropdef)
					end
				end
				if errcount != self.error_count then
					self.check_errors
				end
				for na in vannot.annotations do
					var p = na.parent
					if p isa AAnnotations then p = p.parent
					assert p != null
					phase.process_annotated_node(p, na)
				end
				if errcount != self.error_count then
					self.check_errors
				end
				phase.process_nmodule_after(nmodule)
			end
			self.check_errors
		end

		var time1 = get_time
		self.info("*** END SEMANTIC ANALYSIS: {time1-time0} ***", 2)

		self.check_errors
	end

	# Process the given `phase` on the `npropdef`
	# Called by `run_phases`
	protected fun phase_process_npropdef(phase: Phase, npropdef: APropdef)
	do
		phase.process_npropdef(npropdef)
	end

	# Run the phase on the given npropdef.
	# Does nothing if `semantize_is_lazy` is false.
	fun run_phases_on_npropdef(npropdef: APropdef)
	do
		if not semantize_is_lazy then return
		if npropdef.is_phased then return
		npropdef.is_phased = true

		#self.info("Semantic analysis of property {npropdef.location.file.filename}", 0)

		var phases = phases_list
		for phase in phases do
			if phase.disabled then continue
			assert phase.toolcontext == self
			phase_process_npropdef(phase, npropdef)
			self.check_errors
		end
	end
end

redef class APropdef
	# Is the propdef already analyzed by `run_phases_on_npropdef`.
	# Unused unless `semantize_is_lazy` is true.
	private var is_phased = false
end

# Collect all annotation
private class AnnotationPhaseVisitor
	super Visitor

	# The collected annotations
	var annotations = new Array[AAnnotation]

	redef fun visit(n)
	do
		n.visit_all(self)
		if n isa AAnnotation then annotations.add n
	end
end

# Abstraction of steps in the analysis/processing of Nit programs
# Specific phases should implements one of the `process_*` method
abstract class Phase
	# The toolcontext instance attached to the phase
	var toolcontext: ToolContext

	# The dependence relation of the phase with the other phases
	var in_hierarchy: POSetElement[Phase] is noinit

	# The explicit dependences, used to initialize `in_importation`
	var depends: nullable Collection[Phase]

	# Initialize and register a phase to the toolcontext
	init
	do
		in_hierarchy = toolcontext.phases.add_node(self)
		var depends = self.depends
		if depends != null then
			for d in depends do
				toolcontext.phases.add_edge(self, d)
			end
		end
	end

	# By default, the name is the lowercased prefix of the classname
	redef fun to_s do return class_name.strip_extension("Phase").to_snake_case

	# Is the phase globally disabled?
	# A disabled phase is not called automatically called by `ToolContext::run_phases` and cie.
	#
	# Warning: disabling a phase may cause subsequent phases to work in a degraded way or to fail.
	var disabled = false is writable

	# Specific actions to execute on the whole tree of a module
	# @toimplement
	fun process_nmodule(nmodule: AModule) do end

	# Specific actions to execute on the tree of a class definition
	# Note that the order of the visit is the one of the file
	# @toimplement
	fun process_nclassdef(nclassdef: AClassdef) do end

	# Specific actions to execute on the tree of a property
	# Note that the order of the visit is the one of the file
	# @toimplement
	fun process_npropdef(npropdef: APropdef) do end

	# Specific actions to execute on annotated nodes
	# Note that the order of the visit is the one of the file
	# @toimplement
	fun process_annotated_node(node: ANode, nat: AAnnotation) do end

	# Specific actions to execute on the whole tree of a module
	# Called at the end of a phase on a module
	# Last called hook
	# @toimplement
	fun process_nmodule_after(nmodule: AModule) do end
end
