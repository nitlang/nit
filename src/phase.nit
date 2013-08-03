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

# Phases of the processing of nit programs
module phase

import toolcontext
import parser
import poset

redef class ToolContext
	# The various registered phases to performs
	# The order in the poset is the dependance of phases
	#
	# While you can directly modify the poset (nodes and edges),
	# it is often simpler to use the constructor in `Phase`
	var phases = new POSet[Phase]

	fun phases_list: Sequence[Phase]
	do
		var phases = self.phases.to_a
		self.phases.sort(phases)
		return phases
	end

	# Run all registered phases on a set of modules
	fun run_phases(nmodules: Collection[AModule])
	do
		var time0 = get_time
		self.info("*** SEMANTIC ANALYSIS ***", 1)
		#phases.show_dot

		var phases = phases_list

		for phase in phases do
			self.info(" registered phases: {phase.class_name}", 2)
		end

		for nmodule in nmodules do
			self.info("Semantic analysis module {nmodule.location.file.filename}", 2)
			for phase in phases do
				self.info(" phase: {phase.class_name}", 3)
				assert phase.toolcontext == self
				var errcount = self.error_count
				phase.process_nmodule(nmodule)
				if errcount != self.error_count then
					self.check_errors
					break
				end
				errcount = self.error_count
				for nclassdef in nmodule.n_classdefs do
					for npropdef in nclassdef.n_propdefs do
						assert phase.toolcontext == self
						phase.process_npropdef(npropdef)
					end
				end
				if errcount != self.error_count then
					self.check_errors
					break
				end
				var v = new AnnotationPhaseVisitor(phase)
				v.enter_visit(nmodule)
				if errcount != self.error_count then
					self.check_errors
					break
				end
			end
			self.check_errors
		end

		var time1 = get_time
		self.info("*** END SEMANTIC ANALYSIS: {time1-time0} ***", 2)
	end
end

private class AnnotationPhaseVisitor
	super Visitor

	var phase: Phase

	init(phase: Phase) do self.phase = phase

	redef fun visit(n)
	do
		n.visit_all(self)
		if n isa AAnnotation then phase.process_annotated_node(n.parent.parent.as(not null), n)
	end
end

# Abstraction of steps in the analysis/processing of Nit programs
# Specific phases should implements one of the `process_*` method
abstract class Phase
	# The toolcontext instance attached to the phase
	var toolcontext: ToolContext

	# The dependence relation of the phase with the other phases
	var in_hierarchy: POSetElement[Phase]

	# Initialize and register a phase to the toolcontext
	init(toolcontext: ToolContext, depends: nullable Collection[Phase])
	do
		self.toolcontext = toolcontext
		in_hierarchy = toolcontext.phases.add_node(self)
		if depends != null then
			for d in depends do
				toolcontext.phases.add_edge(self, d)
			end
		end
	end

	# Specific actions to execute on the whole tree of a module
	# @toimplement
	fun process_nmodule(nmodule: AModule) do end

	# Specific actions to execute on the tree of a property
	# Note that the order of the visit is the one of the file
	# @toimplement
	fun process_npropdef(npropdef: APropdef) do end

	# Specific actions to execute on annotated nodes
	# Note that the order of the visit is the one of the file
	# @toimplement
	fun process_annotated_node(node: ANode, nat: AAnnotation) do end
end
