# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
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

# Analysis control flow in property bodies, statements and expressions
package control_flow

import syntax_base

redef class MMSrcModule
	# Walk trough the module and type statments and expressions
	# Require than supermodules are processed
	meth do_control_flow(tc: ToolContext)
	do
		var tv = new ControlFlowVisitor(tc, self)
		tv.visit(node)
	end
end

redef class Variable
	# Is the variable must be set before being used ?
	meth must_be_set: Bool do return false
end

redef class VarVariable
	redef meth must_be_set do return true
end



# Control flow visitor
# * Check reachability in methods
# * Associate breaks and continues
# * Check some other warning
private class ControlFlowVisitor
special AbsSyntaxVisitor
	redef meth visit(n)
	do
		if n != null then n.accept_control_flow(self)
	end

	# Number of nested once
	readable writable attr _once_count: Int

	# Current knowledge about variables types
	readable writable attr _control_flow_ctx: ControlFlowContext

	meth check_is_set(n: PNode, v: Variable)
	do
		if v.must_be_set and not control_flow_ctx.is_set(v) then
			error(n, "Error: variable '{v}' is possibly unset.")
			var cfc = control_flow_ctx
			while cfc != null do
				print("cfc: " + cfc.set_variables.join(" "))
				cfc = cfc.prev
			end
		end
	end

	meth mark_is_set(v: Variable)
	do
		control_flow_ctx.set_variables.add(v)
	end

	init(tc, m) do super
end

private class ControlFlowContext
	# Previous control flow context if any
	readable attr _prev: ControlFlowContext

	# Is a return met?
	readable writable attr _has_return: Bool 

	# Is a control flow break met? (return, break, continue)
	readable writable attr _unreash: Bool

	# Is a control flow already broken?
	# Used to avoid repeating the same error message
	readable writable attr _already_unreash: Bool

	# Current controlable block (for or while)
	readable writable attr _base_block: AControlableBlock

	# Set of variable that are set (assigned)
	readable attr _set_variables: HashSet[Variable] = new HashSet[Variable]

	# Is a variable set?
	meth is_set(v: Variable): Bool
	do
		return _set_variables.has(v) or (_prev != null and _prev.is_set(v))
	end

	meth sub: ControlFlowContext
	do
		return new ControlFlowContext.with_prev(self)
	end

	init
	do 
	end

	init with_prev(p: ControlFlowContext)
	do
		_prev = p
		_has_return = p.has_return
		_unreash = p.unreash
		_already_unreash = p.already_unreash
		_base_block = p.base_block
	end
end

###############################################################################

redef class PNode
	private meth accept_control_flow(v: ControlFlowVisitor) 
	do
		accept_abs_syntax_visitor(v)
	end
end

redef class AMethPropdef
	redef meth accept_control_flow(v)
	do
		v.control_flow_ctx = new ControlFlowContext
		super
	end
end

redef class AConcreteMethPropdef
	redef meth accept_control_flow(v)
	do
		super
		if v.control_flow_ctx.has_return == false and method.signature.return_type != null then
			v.error(self, "Control error: Reached end of function.")
		end
	end
end

redef class AVardeclExpr
	redef meth accept_control_flow(v)
	do
		super
		if n_expr != null then v.mark_is_set(variable)
	end
end

redef class ABlockExpr
	redef meth accept_control_flow(v)
	do
		for e in n_expr do
			if v.control_flow_ctx.unreash and not v.control_flow_ctx.already_unreash then
				v.control_flow_ctx.already_unreash = true
				v.warning(e, "Warning: unreachable statement.")
			end
			v.visit(e)
		end
	end
end

redef class AReturnExpr
	redef meth accept_control_flow(v)
	do
		super
		v.control_flow_ctx.has_return = true
		v.control_flow_ctx.unreash = true
	end
end

class ABlockControler
special PExpr
	readable attr _block: AControlableBlock
end

redef class ABreakExpr
special ABlockControler
	redef meth accept_control_flow(v)
	do
		super
		var block = v.control_flow_ctx.base_block
		if block == null then
			v.error(self, "Syntax Error: 'break' statment outside block.")
			return
		end
		_block = block
		v.control_flow_ctx.unreash = true
	end
end
redef class AContinueExpr
special ABlockControler
	redef meth accept_control_flow(v)
	do
		super
		var block = v.control_flow_ctx.base_block
		if block == null then
			v.error(self, "Syntax Error: 'continue' outside block.")
			return
		end
		_block = block
		v.control_flow_ctx.unreash = true
	end
end

redef class AAbortExpr
	redef meth accept_control_flow(v)
	do
		super
		v.control_flow_ctx.has_return = true
		v.control_flow_ctx.unreash = true
	end
end

redef class AIfExpr
	redef meth accept_control_flow(v)
	do
		v.visit(n_expr)

		var old_control_flow_ctx = v.control_flow_ctx
		v.control_flow_ctx = v.control_flow_ctx.sub

		v.visit(n_then)

		if n_else == null then
			# Restore control flow ctx since the 'then" block is optional
			v.control_flow_ctx = old_control_flow_ctx
		else
			# Remember what appens in the 'then'
			var then_control_flow_ctx = v.control_flow_ctx
			# Reset to execute the 'else'
			v.control_flow_ctx = old_control_flow_ctx.sub

			v.visit(n_else)

			# Merge then and else in the old control_flow
			old_control_flow_ctx.has_return = v.control_flow_ctx.has_return and then_control_flow_ctx.has_return
			old_control_flow_ctx.unreash = v.control_flow_ctx.unreash and then_control_flow_ctx.unreash

			if v.control_flow_ctx.unreash then v.control_flow_ctx = then_control_flow_ctx
			if then_control_flow_ctx.unreash then then_control_flow_ctx = v.control_flow_ctx
			for variable in v.control_flow_ctx.set_variables do
				if then_control_flow_ctx.is_set(variable) then
					old_control_flow_ctx.set_variables.add(variable)
				end
			end
			v.control_flow_ctx = old_control_flow_ctx
		end
	end
end

class AControlableBlock
special PExpr
	redef meth accept_control_flow(v)
	do
		# Store old control flow values
		var old_control_flow_ctx = v.control_flow_ctx
		v.control_flow_ctx = v.control_flow_ctx.sub

		# Register the block
		v.control_flow_ctx.base_block = self

		super

		# Restore control flow value since all controlable blocks are optionnal
		v.control_flow_ctx = old_control_flow_ctx
	end
end

redef class AWhileExpr
special AControlableBlock
end

redef class AForExpr
special AControlableBlock
end

redef class AVarExpr
	redef meth accept_control_flow(v)
	do
		super
		v.check_is_set(self, variable)
	end
end

redef class AVarAssignExpr
	redef meth accept_control_flow(v)
	do
		super
		v.mark_is_set(variable)
	end
end

redef class AVarReassignExpr
	redef meth accept_control_flow(v)
	do
		super
		v.check_is_set(self, variable)
		v.mark_is_set(variable)
	end
end


redef class AOnceExpr
	redef meth accept_control_flow(v)
	do
		if v.once_count > 0 then
			v.warning(self, "Useless once in a once expression.")
		end
		v.once_count = v.once_count + 1

		super

		v.once_count = v.once_count - 1
	end
end

