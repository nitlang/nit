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

# Detection of divisions by zero in obvious cases
# This module is only an example of how to implements a simple phase in the nit tools
module div_by_zero

import literal # Because we need the real value of literal in the AST
import semantize # Because we need the static type of receivers

# Note, `ToolContext` is the main overlord class
# Among its jobs, it orchestrates and executes the various phases
redef class ToolContext
	# Instantiate a new specific phase `div_by_zero_phase`
	# It must be executed after the two phases `literal_phase` and `typing_phase`
	# Those two phases are statically known since they are introduced by the modules `literal` and `typing`
	# Note that the constructor automatically register the phase to the ToolContext; this explains why there is `self`
	var div_by_zero_phase: Phase = new DivByZeroPhase(self, [literal_phase, typing_phase])
end

# OK, let we create a specific phase
private class DivByZeroPhase
	super Phase

	# Specific phases just have to implement the `process_nmodule` method.
	redef fun process_nmodule(nmodule)
	do
		# The AST node is not enough, we need also the associated model element
		var mmodule = nmodule.mmodule
		if mmodule == null then return
		# For the specific job we have, the simpler it to launch a visitor on
		# all elements of the AST.
		var visitor = new DivByZeroVisitor(toolcontext, mmodule)
		visitor.enter_visit(nmodule)
	end
end

# The real visitor that does the real job
private class DivByZeroVisitor
	super Visitor

	# The toolcontext is our entree point to most services
	var toolcontext: ToolContext

	# The mmodule is the current module
	var mmodule: MModule

	redef fun visit(node)
	do
		# Recursively visit all sub-nodes
		node.visit_all(self)

		# Now just filter out until we get what we want...

		# 1. We need a `/` operation
		if not node isa ASlashExpr then return

		# 2. The second operand must be an integer literal
		var op2 = node.n_expr2
		if not op2 isa AIntegerExpr then return

		# 3. Its value must be 0
		# Note: because of `literal_phase` the `value` method exists
		if op2.value != 0 then return

		# 4. The receiver (first operand) must be an Int
		var op1 = node.n_expr
		var int_type = mmodule.get_primitive_class("Int").mclass_type
		if not op1.mtype.is_subtype(mmodule, null, int_type) then return

		# Error detected
		toolcontext.warning(node.location, "div-by-zero", "Warning: division by zero.")
	end
end
