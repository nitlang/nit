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

# Analysis that determines which definitions may reach a given point in the code.
import saf_base

import scope

# Determines wich variables definitions reach each statement.
class ReachingDefsAnalysis
	super ForwardAnalysis

	redef type FLOW: FlowHashSet[VarDef]

	# New initial flows are empty (conservative analysis).
	redef fun new_initial_flow do return new FlowHashSet[VarDef]

	# New initial flows for methods contains the parameters.
	redef fun new_initial_method_flow(n) do
		var flow = new_initial_flow
		var n_signature = n.n_signature
		if n_signature == null then return flow
		for n_param in n_signature.n_params do
			var variable = n_param.variable
			if variable == null then continue
			flow.add(new VarDef(variable, n_param.location))
		end
		return flow
	end

	# Perform set union (used for **some path** analysis).
	redef fun merge(s1, s2) do return s1.flow_union(s2)

	redef fun visit(n) do n.accept_reaching_defs(self)

	# Generate a new variable definition in the `current_outset`.
	fun gen(variable: Variable, location: Location) do
		current_outset.add(new VarDef(variable, location))
	end

	# Kill a variable definition in the `current_outset`.
	fun kill(variable: Variable) do
		for vardef in current_outset.to_a do
			if vardef.variable == variable then current_outset.remove(vardef)
		end
	end

	redef fun pretty_print do
		for node, outset in outsets do
			if outset.is_empty then continue
			var values = outset.to_a
			default_comparator.sort(values)
			print "{node.location.line_end}: {values.join(", ")} out of {node.class_name}"
		end
	end
end

redef class ANode

	# Apply a ReachingDefsAnalysis to `self`.
	fun accept_reaching_defs(v: ReachingDefsAnalysis) do accept_forward_analysis(v)
end

redef class AVardeclExpr
	redef fun accept_reaching_defs(v) do
		super
		v.kill(variable.as(not null))
		v.gen(variable.as(not null), location)
	end
end

redef class AVarAssignExpr
	redef fun accept_reaching_defs(v) do
		super
		v.kill(variable.as(not null))
		v.gen(variable.as(not null), location)
	end
end

redef class AVarReassignExpr
	redef fun accept_reaching_defs(v) do
		super
		v.kill(variable.as(not null))
		v.gen(variable.as(not null), location)
	end
end

redef class AForExpr
	redef fun accept_reaching_defs(v) do
		# add variables from `for` declaration
		for n_group in n_groups do
			var variables = n_group.variables
			if variables == null then continue
			for variable in variables do v.gen(variable, n_group.location)
		end
		super
		# remove variables from `for` declaration
		for n_group in n_groups do
			var variables = n_group.variables
			if variables == null then continue
			for variable in variables do v.kill(variable)
		end
	end
end

# A Variable definition.
#
# Associates a variable to the location of its definition.
class VarDef
	super Comparable

	redef type OTHER: VarDef

	# Variable this definition is about.
	var variable: Variable

	# Location of this definition in the source code.
	var location: Location

	redef fun ==(o) do
		return o isa OTHER and variable == o.variable and location == o.location
	end

	redef fun <=>(o) do
		if variable.name == o.variable.name then
			return location.line_start <=> o.location.line_start
		else
			return variable.name <=> o.variable.name
		end
	end

	redef fun hash do return variable.hash + location.hash
	redef fun to_s do return "\{{variable}: {location.line_start}\}"
end
