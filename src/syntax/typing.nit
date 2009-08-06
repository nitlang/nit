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

# Analysis property bodies, statements and expressions
package typing

import syntax_base
import escape
import control_flow

redef class MMSrcModule
	# Walk trough the module and type statments and expressions
	# Require than supermodules are processed
	fun do_typing(tc: ToolContext)
	do
		var tv = new TypingVisitor(tc, self)
		tv.enter_visit(node)
	end
end

# Typing visitor
# * Associate local variables to nodes
# * Distinguish method call and local variable access
# * Resolve call and attribute access
# * Check type conformance
private class TypingVisitor
special AbsSyntaxVisitor
	redef fun visit(n)
	do
		if n != null then n.accept_typing(self)
	end

	# Current knowledge about variables names and types
	fun variable_ctx: VariableContext do return _variable_ctx.as(not null)
	writable var _variable_ctx: nullable VariableContext

	# Non-bypassable knowledge about variables names and types
	fun base_variable_ctx: VariableContext do return _base_variable_ctx.as(not null)
	writable var _base_variable_ctx: nullable VariableContext

	# Current knowledge about escapable blocks
	readable writable var _escapable_ctx: EscapableContext = new EscapableContext(self)

	# The current reciever
	fun self_var: ParamVariable do return _self_var.as(not null)
	writable var _self_var: nullable ParamVariable

	# Block of the current method
	readable writable var _top_block: nullable AExpr

	# List of explicit invocation of constructors of super-classes
	readable writable var _explicit_super_init_calls: nullable Array[MMMethod]

	# Is a other constructor of the same class invoked
	readable writable var _explicit_other_init_call: Bool = false

	# Make the if_true_variable_ctx of the expression effective
	private fun use_if_true_variable_ctx(e: AExpr)
	do
		var ctx = e.if_true_variable_ctx
		if ctx != null then variable_ctx = ctx
	end

	# Make the if_false_variable_ctx of the expression effective
	private fun use_if_false_variable_ctx(e: AExpr)
	do
		var ctx = e.if_false_variable_ctx
		if ctx != null then variable_ctx = ctx
	end

	# Number of nested once
	readable writable var _once_count: Int = 0

	init(tc, module) do super

	private fun get_default_constructor_for(n: ANode, c: MMLocalClass, prop: MMSrcMethod): nullable MMMethod
	do
		var v = self
		#var prop = v.local_property
		#assert prop isa MMMethod
		var candidates = new Array[MMMethod]
		var false_candidates = new Array[MMMethod]
		var parity = prop.signature.arity
		for g in c.global_properties do
			if not g.is_init_for(c) then continue
			var gp = c[g]
			var gps = gp.signature_for(c.get_type)
			assert gp isa MMSrcMethod
			var garity = gps.arity
			if gp.name == prop.name then
				if garity == 0 or (parity == garity and prop.signature < gps) then
					return gp
				else
					false_candidates.add(gp)
				end
			else if garity == 0 and gp.name == once ("init".to_symbol) then
				candidates.add(gp)
				false_candidates.add(gp)
			else
				false_candidates.add(gp)
			end
		end
		if candidates.length == 1 then
			return candidates.first
		else if candidates.length > 0 then
			var a = new Array[String]
			for p in candidates do
				a.add("{p.full_name}{p.signature}")
			end
			v.error(n, "Error: Conflicting default constructor to call for {c}: {a.join(", ")}.")
			return null
		else if false_candidates.length > 0 then
			var a = new Array[String]
			for p in false_candidates do
				a.add("{p.full_name}{p.signature}")
			end
			v.error(n, "Error: there is no available compatible constrctor in {c}. Discarded candidates are {a.join(", ")}.")
			return null
		else
			v.error(n, "Error: there is no available compatible constrctor in {c}.")
			return null
		end
	end
end


###############################################################################

redef class ANode
	private fun accept_typing(v: TypingVisitor) 
	do
		accept_abs_syntax_visitor(v)
		after_typing(v)
	end
	private fun after_typing(v: TypingVisitor) do end
end

redef class AClassdef
	redef fun accept_typing(v)
	do
		v.variable_ctx = new RootVariableContext(v, self)
		v.base_variable_ctx = v.variable_ctx
		v.self_var = new ParamVariable("self".to_symbol, self)
		v.self_var.stype = local_class.get_type
		super
	end
end

redef class APropdef
	redef fun self_var do return _self_var.as(not null)
	var _self_var: nullable ParamVariable
end

redef class AAttrPropdef
	redef fun accept_typing(v)
	do
		var old_var_ctx = v.variable_ctx
		v.variable_ctx = old_var_ctx.sub(self)
		_self_var = v.self_var
		super
		if n_expr != null then
			v.check_conform_expr(n_expr.as(not null), prop.signature.return_type.as(not null))
		end
		v.variable_ctx = old_var_ctx
	end
end

redef class AMethPropdef
	redef fun accept_typing(v)
	do
		var old_var_ctx = v.variable_ctx
		v.variable_ctx = old_var_ctx.sub(self)
		_self_var = v.self_var
		super
		v.variable_ctx = old_var_ctx
	end
end

redef class AConcreteMethPropdef
	redef fun after_typing(v)
	do
		super
		if v.variable_ctx.unreash == false and method.signature.return_type != null then
			v.error(self, "Control error: Reached end of function (a 'return' with a value was expected).")
		end
	end
end

redef class AConcreteInitPropdef
	redef fun accept_typing(v)
	do
		v.top_block = n_block
		v.explicit_super_init_calls = explicit_super_init_calls
		v.explicit_other_init_call = false
		super
	end

	redef fun after_typing(v)
	do
		super
		if v.explicit_other_init_call or method.global.intro != method then
			# TODO: something?
		else 
			var i = 0
			var l = explicit_super_init_calls.length
			var cur_m: nullable MMMethod = null
			var cur_c: nullable MMLocalClass = null
			if i < l then
				cur_m = explicit_super_init_calls[i]
				cur_c = cur_m.global.intro.local_class.for_module(v.module)
			end
			var j = 0
			while j < v.local_class.cshe.direct_greaters.length do
				var c = v.local_class.cshe.direct_greaters[j]
				if c.global.is_interface or c.global.is_universal or c.global.is_mixin then
					j += 1
				else if cur_c != null and (c.cshe <= cur_c or cur_c.global.is_mixin) then
					if c == cur_c then j += 1
					super_init_calls.add(cur_m.as(not null))
					i += 1
					if i < l then
						cur_m = explicit_super_init_calls[i]
						cur_c = cur_m.global.intro.local_class.for_module(v.module)
					else
						cur_m = null
						cur_c = null
					end
				else
					var p = v.get_default_constructor_for(self, c, method)
					if p != null then
						super_init_calls.add(p)
					end
					j += 1
				end
			end
		end
	end
end

redef class AParam
	redef fun after_typing(v)
	do
		v.variable_ctx.add(variable)
	end
end

redef class AClosureDecl
	# The corresponding escapable object
	readable var _escapable: nullable EscapableBlock

	redef fun accept_typing(v)
	do
		# Register the closure for ClosureCallExpr
		v.variable_ctx.add(variable)

		var old_var_ctx = v.variable_ctx
		var old_base_var_ctx = v.base_variable_ctx
		v.base_variable_ctx = v.variable_ctx
		v.variable_ctx = v.variable_ctx.sub(self)

		var escapable = new EscapableClosure(self, variable.closure, null)
		_escapable = escapable
		v.escapable_ctx.push(escapable, null)

		super

		if n_expr != null then
			if v.variable_ctx.unreash == false then
				if variable.closure.signature.return_type != null then
					v.error(self, "Control error: Reached end of block (a 'continue' with a value was expected).")
				else if variable.closure.is_break then
					v.error(self, "Control error: Reached end of break block (an 'abort' was expected).")
				end
			end
		end

		old_var_ctx.merge(v.variable_ctx)
		v.variable_ctx = old_var_ctx
		v.base_variable_ctx = old_base_var_ctx
		v.escapable_ctx.pop
	end
end

redef class AType
	redef fun stype: MMType do return _stype.as(not null)
	redef fun is_typed: Bool do return _stype != null
	var _stype: nullable MMType

	redef fun after_typing(v)
	do
		_stype = get_stype(v)
	end
end

redef class AExpr
	redef readable var _is_typed: Bool = false
	redef fun is_statement: Bool do return _stype == null
	redef fun stype
	do
		if not is_typed then
			print "{location}: not is_typed"
			abort
		end
		if is_statement then
			print "{location}: is_statement"
			abort
		end
		return _stype.as(not null)
	end
	var _stype: nullable MMType

	redef fun after_typing(v)
	do
		# Default behavior is to be happy
		_is_typed = true
	end

	# Is the expression the implicit receiver
	fun is_implicit_self: Bool do return false

	# Is the expression the current receiver (implicit or explicit)
	fun is_self: Bool do return false

	# The variable accessed is any
	fun its_variable: nullable Variable do return null

	# The variable type information if current boolean expression is true
	readable private var _if_true_variable_ctx: nullable VariableContext

	# The variable type information if current boolean expression is false
	readable private var _if_false_variable_ctx: nullable VariableContext
end

redef class AVardeclExpr
	var _variable: nullable VarVariable
	redef fun variable do return _variable.as(not null)

	redef fun after_typing(v)
	do
		var va = new VarVariable(n_id.to_symbol, n_id)
		_variable = va
		v.variable_ctx.add(va)
		if n_expr != null then v.variable_ctx.mark_is_set(va)

		if n_type != null then
			if not n_type.is_typed then return
			va.stype = n_type.stype
			if n_expr != null then
				v.check_conform_expr(n_expr.as(not null), va.stype)
			end
		else
			if not v.check_expr(n_expr.as(not null)) then return
			va.stype = n_expr.stype
		end
		_is_typed = true
	end
end

redef class ABlockExpr
	redef fun accept_typing(v)
	do
		var old_var_ctx = v.variable_ctx
		v.variable_ctx = v.variable_ctx.sub(self)

		for e in n_expr do
			if v.variable_ctx.unreash and not v.variable_ctx.already_unreash then
				v.variable_ctx.already_unreash = true
				v.warning(e, "Warning: unreachable statement.")
			end
			v.enter_visit(e)
		end

		old_var_ctx.merge(v.variable_ctx)
		v.variable_ctx = old_var_ctx
		_is_typed = true
	end
end

redef class AReturnExpr
	redef fun after_typing(v)
	do
		v.variable_ctx.unreash = true
		var t = v.local_property.signature.return_type
		var e = n_expr
		if e == null and t != null then
			v.error(self, "Error: Return without value in a function.")
		else if e != null and t == null then
			v.error(self, "Error: Return with value in a procedure.")
		else if e != null and t != null then
			v.check_conform_expr(e, t)
		end
		_is_typed = true
	end
end

redef class AContinueExpr
	redef fun after_typing(v)
	do
		v.variable_ctx.unreash = true
		var esc = compute_escapable_block(v.escapable_ctx)
		if esc == null then return

		if esc.is_break_block then
			v.error(self, "Error: cannot 'continue', only 'break'.")
			return
		end

		var t = esc.continue_stype
		if n_expr == null and t != null then
			v.error(self, "Error: continue with a value required in this block.")
		else if n_expr != null and t == null then
			v.error(self, "Error: continue without value required in this block.")
		else if n_expr != null and t != null then
			v.check_conform_expr(n_expr.as(not null), t)
		end
		_is_typed = true
	end
end

redef class ABreakExpr
	redef fun after_typing(v)
	do
		v.variable_ctx.unreash = true
		var esc = compute_escapable_block(v.escapable_ctx)
		if esc == null then return

		var bl = esc.break_list
		if n_expr == null and bl != null then
			v.error(self, "Error: break with a value required in this block.")
		else if n_expr != null and bl == null then
			v.error(self, "Error: break without value required in this block.")
		else if n_expr != null and bl != null then
			# Typing check can only be done later
			bl.add(n_expr.as(not null))
		end
		_is_typed = true
	end
end

redef class AAbortExpr
	redef fun after_typing(v)
	do
		v.variable_ctx.unreash = true
		_is_typed = true
	end
end

redef class ADoExpr
	# The corresponding escapable block
	readable var _escapable: nullable EscapableBlock

	redef fun accept_typing(v)
	do
		var escapable = new BreakOnlyEscapableBlock(self)
		_escapable = escapable
		v.escapable_ctx.push(escapable, n_label)

		super

		v.escapable_ctx.pop
		_is_typed = true
	end
end

redef class AIfExpr
	redef fun accept_typing(v)
	do
		var old_var_ctx = v.variable_ctx
		v.enter_visit(n_expr)
		v.check_conform_expr(n_expr, v.type_bool)

		# Prepare 'then' context
		v.use_if_true_variable_ctx(n_expr)

		# Process the 'then'
		if n_then != null then
			v.variable_ctx = v.variable_ctx.sub(n_then.as(not null))
			v.enter_visit(n_then)
		end

		# Remember what appened in the 'then'
		var then_var_ctx = v.variable_ctx

		# Prepare 'else' context
		v.variable_ctx = old_var_ctx
		v.use_if_false_variable_ctx(n_expr)

		# Process the 'else'
		if n_else != null then
			v.variable_ctx = v.variable_ctx.sub(n_else.as(not null))
			v.enter_visit(n_else)
		end

		# Merge 'then' and 'else' contexts
		old_var_ctx.merge2(then_var_ctx, v.variable_ctx, v.base_variable_ctx)
		v.variable_ctx = old_var_ctx
		_is_typed = true
	end
end

redef class AWhileExpr
	# The corresponding escapable block
	readable var _escapable: nullable EscapableBlock

	redef fun accept_typing(v)
	do
		var escapable = new EscapableBlock(self)
		_escapable = escapable
		v.escapable_ctx.push(escapable, n_label)
		var old_var_ctx = v.variable_ctx
		var old_base_var_ctx = v.base_variable_ctx
		v.base_variable_ctx = v.variable_ctx
		v.variable_ctx = v.variable_ctx.sub(self)

		# Process condition
		v.enter_visit(n_expr)
		v.check_conform_expr(n_expr, v.type_bool)

		# Prepare inside context (assert cond)
		v.use_if_true_variable_ctx(n_expr)

		# Process inside
		if n_block != null then
			v.variable_ctx = v.variable_ctx.sub(n_block.as(not null))
			v.enter_visit(n_block)
		end

		v.variable_ctx = old_var_ctx
		v.base_variable_ctx = old_base_var_ctx
		v.escapable_ctx.pop
		_is_typed = true
	end
end

redef class ALoopExpr
	# The corresponding escapable block
	readable var _escapable: nullable EscapableBlock

	redef fun accept_typing(v)
	do
		var escapable = new EscapableBlock(self)
		_escapable = escapable
		v.escapable_ctx.push(escapable, n_label)
		var old_var_ctx = v.variable_ctx
		var old_base_var_ctx = v.base_variable_ctx
		v.base_variable_ctx = v.variable_ctx
		v.variable_ctx = v.variable_ctx.sub(self)

		# Process inside
		if n_block != null then
			v.variable_ctx = v.variable_ctx.sub(n_block.as(not null))
			v.enter_visit(n_block)
		end

		v.variable_ctx = old_var_ctx
		v.base_variable_ctx = old_base_var_ctx
		v.escapable_ctx.pop
		_is_typed = true
	end
end

redef class AForExpr
	var _variable: nullable AutoVariable
	redef fun variable do return _variable.as(not null)

	# The corresponding escapable block
	readable var _escapable: nullable EscapableBlock

	redef fun accept_typing(v)
	do
		var escapable = new EscapableBlock(self)
		_escapable = escapable
		v.escapable_ctx.push(escapable, n_label)

		var old_var_ctx = v.variable_ctx
		var old_base_var_ctx = v.base_variable_ctx
		v.base_variable_ctx = v.variable_ctx
		v.variable_ctx = v.variable_ctx.sub(self)
		var va = new AutoVariable(n_id.to_symbol, n_id)
		_variable = va
		v.variable_ctx.add(va)

		# Process collection
		v.enter_visit(n_expr)

		if not v.check_conform_expr(n_expr, v.type_collection) then return
		var expr_type = n_expr.stype

		# Get iterator
		var meth_iterator = v.get_method(expr_type, once "iterator".to_symbol)
		var iter_type = meth_iterator.signature_for(expr_type).return_type.as(not null)
		var meth_item = v.get_method(iter_type, once ("item".to_symbol))
		var va_stype = meth_item.signature_for(iter_type).return_type.as(not null)
		if not n_expr.is_self then va_stype = va_stype.not_for_self
		va.stype = va_stype

		# Body evaluation
		if n_block != null then v.enter_visit(n_block)

		# pop context
		v.variable_ctx = old_var_ctx
		v.base_variable_ctx = old_base_var_ctx
		v.escapable_ctx.pop
		_is_typed = true
	end
end

redef class AAssertExpr
	redef fun after_typing(v)
	do
		v.check_conform_expr(n_expr, v.type_bool)
		v.use_if_true_variable_ctx(n_expr)
		_is_typed = true
	end
end

redef class AVarFormExpr
	var _variable: nullable Variable
	redef fun variable do return _variable.as(not null)
end

redef class AVarExpr
	redef fun its_variable do return variable

	redef fun after_typing(v)
	do
		v.variable_ctx.check_is_set(self, variable)
		_stype = v.variable_ctx.stype(variable)
		_is_typed = _stype != null
	end
end

redef class AVarAssignExpr
	redef fun after_typing(v)
	do
		v.variable_ctx.mark_is_set(variable)
		var t = v.variable_ctx.stype(variable)

		# Check the base type
		var btype = v.base_variable_ctx.stype(variable)
		if not v.check_conform_expr(n_value, btype) then return

		# Always cast
		v.variable_ctx.stype(variable) = n_value.stype

		_is_typed = true
	end
end

redef class AReassignFormExpr
	# Compute and check method used through the reassigment operator
	# On success return the static type of the result of the reassigment operator
	# Else display an error and return null
	private fun do_rvalue_typing(v: TypingVisitor, type_lvalue: nullable MMType): nullable MMType
	do
		if type_lvalue == null then
			return null
		end
		var name = n_assign_op.method_name
		var lc = type_lvalue.local_class
		if not lc.has_global_property_by_name(name) then
			v.error(self, "Error: Method '{name}' doesn't exists in {type_lvalue}.")
			return null
		end
		var prop = lc.select_method(name)
		prop.global.check_visibility(v, self, v.module, false)
		var psig = prop.signature_for(type_lvalue)
		_assign_method = prop
		if not v.check_conform_expr(n_value, psig[0].not_for_self) then return null
		return psig.return_type.not_for_self
	end

	redef fun assign_method do return _assign_method.as(not null)
	var _assign_method: nullable MMMethod
end

redef class AVarReassignExpr
	redef fun after_typing(v)
	do
		v.variable_ctx.check_is_set(self, variable)
		v.variable_ctx.mark_is_set(variable)
		var t = v.variable_ctx.stype(variable)
		var t2 = do_rvalue_typing(v, t)
		if t2 == null then return

		# Check the base type
		var btype = v.base_variable_ctx.stype(variable)
		if not v.check_conform(n_value, t2, btype) then return

		# Always cast
		v.variable_ctx.stype(variable) = t2

		_is_typed = true
	end
end

redef class AAssignOp
	fun method_name: Symbol is abstract
end
redef class APlusAssignOp
	redef fun method_name do return once "+".to_symbol
end
redef class AMinusAssignOp
	redef fun method_name do return once "-".to_symbol
end

redef class ASelfExpr
	var _variable: nullable ParamVariable
	redef fun variable do return _variable.as(not null)

	redef fun its_variable do return variable

	redef fun after_typing(v)
	do
		_variable = v.self_var
		_stype = v.variable_ctx.stype(variable)
		_is_typed = true
	end

        redef fun is_self do return true
end

redef class AImplicitSelfExpr
        redef fun is_implicit_self do return true
end

redef class AIfexprExpr
	redef fun accept_typing(v)
	do
		var old_var_ctx = v.variable_ctx

		# Process condition
		v.enter_visit(n_expr)
		v.check_conform_expr(n_expr, v.type_bool)

		# Prepare 'then' context
		v.use_if_true_variable_ctx(n_expr)

		# Process 'then'
		v.enter_visit(n_then)

		# Prepare 'else' context
		v.variable_ctx = old_var_ctx
		v.use_if_false_variable_ctx(n_expr)

		# Process 'else'
		v.enter_visit(n_else)

		var stype = v.check_conform_multiexpr(null, [n_then, n_else])
		if stype == null then return

		_stype = stype
		_is_typed = true
	end
end

redef class ABoolExpr
	redef fun after_typing(v)
	do
		_stype = v.type_bool
		_is_typed = true
	end
end

redef class AOrExpr
	redef fun accept_typing(v)
	do
		var old_var_ctx = v.variable_ctx
		var stype = v.type_bool
		_stype = stype

		# Process left operand
		v.enter_visit(n_expr)

		# Prepare right operand context
		v.use_if_false_variable_ctx(n_expr)

		# Process right operand
		v.enter_visit(n_expr2)
		if n_expr2.if_false_variable_ctx != null then
			_if_false_variable_ctx = n_expr2.if_false_variable_ctx
		else
			_if_false_variable_ctx = v.variable_ctx
		end

		v.variable_ctx = old_var_ctx

		v.check_conform_expr(n_expr, stype)
		v.check_conform_expr(n_expr2, stype)
		_stype = stype
		_is_typed = true
	end
end

redef class AAndExpr
	redef fun accept_typing(v)
	do
		var old_var_ctx = v.variable_ctx
		var stype = v.type_bool

		# Process left operand
		v.enter_visit(n_expr)

		# Prepare right operand context
		v.use_if_true_variable_ctx(n_expr)

		# Process right operand
		v.enter_visit(n_expr2)
		if n_expr2.if_true_variable_ctx != null then
			_if_true_variable_ctx = n_expr2.if_true_variable_ctx
		else
			_if_true_variable_ctx = v.variable_ctx
		end

		v.variable_ctx = old_var_ctx

		v.check_conform_expr(n_expr, stype)
		v.check_conform_expr(n_expr2, stype)
		_stype = stype
		_is_typed = true
	end
end

redef class ANotExpr
	redef fun after_typing(v)
	do
		v.check_conform_expr(n_expr, v.type_bool)

		# Invert if_true/if_false information
		_if_false_variable_ctx = n_expr._if_true_variable_ctx
		_if_true_variable_ctx = n_expr._if_false_variable_ctx

		_stype = v.type_bool
		_is_typed = true
	end
end

redef class AIntExpr
	redef fun after_typing(v)
	do
		_stype = v.type_int
		_is_typed = true
	end
end

redef class AFloatExpr
	redef fun after_typing(v)
	do
		_stype = v.type_float
		_is_typed = true
	end
end

redef class ACharExpr
	redef fun after_typing(v)
	do
		_stype = v.type_char
		_is_typed = true
	end
end

redef class AStringFormExpr
	redef fun after_typing(v)
	do
		_stype = v.type_string
		_is_typed = true
	end
end

redef class ASuperstringExpr
	redef fun atype do return _atype.as(not null)
	var _atype: nullable MMType
	redef fun after_typing(v)
	do
		var stype = v.type_string
		_stype = stype
		var atype = v.type_array(stype)
		_atype = atype
		_is_typed = true
	end
end

redef class ANullExpr
	redef fun after_typing(v)
	do
		_stype = v.type_none
		_is_typed = true
	end
end

redef class AArrayExpr
	redef fun after_typing(v)
	do
		var stype = v.check_conform_multiexpr(null, n_exprs)
		if stype != null then do_typing(v, stype)
	end

	private fun do_typing(v: TypingVisitor, element_type: MMType)
	do
		_stype = v.type_array(element_type)
		_is_typed = true
	end
end

redef class ARangeExpr
	redef fun after_typing(v)
	do
		if not v.check_expr(n_expr) or not v.check_expr(n_expr2) then return
		var ntype = n_expr.stype
		var ntype2 = n_expr2.stype
		if ntype < ntype2 then
			ntype = ntype2
		else if not ntype2 < ntype then
			v.error(self, "Type error: {ntype} incompatible with {ntype2}.")
			return
		end
		var dtype = v.type_discrete
		if not v.check_conform_expr(n_expr, dtype) or not v.check_conform_expr(n_expr2, dtype) then return
		_stype = v.type_range(ntype)
		_is_typed = true
	end
end

redef class ASuperExpr
	redef readable var _init_in_superclass: nullable MMMethod
	redef fun compute_raw_arguments do return n_args.to_a
	redef fun after_typing(v)
	do
		var precs: Array[MMLocalProperty] = v.local_property.prhe.direct_greaters
		if not precs.is_empty then
			v.local_property.need_super = true
		else if v.local_property.global.is_init then
			var base_precs = v.local_class.super_methods_named(v.local_property.name)
			for p in base_precs do
				if not p.global.is_init then
					v.error(self, "Error: {p.local_class}::{p} is not a constructor.")
				else
					precs.add(v.local_class[p.global])
				end
			end
			if precs.is_empty then
				v.error(self, "Error: No contructor named {v.local_property.name} in superclasses.")
				return
			else if precs.length > 1 then
				v.error(self, "Error: Conflicting contructors named {v.local_property.name} in superclasses: {precs.join(", ")}.")
				return
			end
			var p = base_precs.first
			assert p isa MMMethod
			_init_in_superclass = p
			register_super_init_call(v, p)
			if n_args.length > 0 then
				var signature = get_signature(v, v.self_var.stype.as(not null), p, true)
				process_signature(v, signature, p.name, compute_raw_arguments)
			end
		else
			v.error(self, "Error: No super method to call for {v.local_property}.")
			return
		end

		if precs.first.signature_for(v.self_var.stype.as(not null)).return_type != null then
			var stypes = new Array[MMType]
			var stype: nullable MMType = null
			for prop in precs do
				assert prop isa MMMethod
				var t = prop.signature_for(v.self_var.stype.as(not null)).return_type.for_module(v.module).adapt_to(v.local_property.signature.recv)
				stypes.add(t)
				if stype == null or stype < t then
					stype = t
				end
			end
			for t in stypes do
				v.check_conform(self, t, stype.as(not null))
			end
			_stype = stype
		end
		var p = v.local_property
		assert p isa MMSrcMethod
		_prop = p
		_is_typed = true
	end
end

redef class AAttrFormExpr
	redef fun prop do return _prop.as(not null)
	var _prop: nullable MMAttribute

	redef fun attr_type do return _attr_type.as(not null)
	var _attr_type: nullable MMType

	# Compute the attribute accessed
	private fun do_typing(v: TypingVisitor)
	do
		if not v.check_expr(n_expr) then return
		var type_recv = n_expr.stype
		var name = n_id.to_symbol
		var lc = type_recv.local_class
		if not lc.has_global_property_by_name(name) then
			v.error(self, "Error: Attribute {name} doesn't exists in {type_recv}.")
			return
		end
		var prop = lc.select_attribute(name)
		if v.module.visibility_for(prop.global.local_class.module) < 3 then
			v.error(self, "Error: Attribute {name} from {prop.global.local_class.module} is invisible in {v.module}")
		end
		_prop = prop
		var at = prop.signature_for(type_recv).return_type 
		if not n_expr.is_self then at = at.not_for_self
		_attr_type = at
	end
end

redef class AAttrExpr
	redef fun after_typing(v)
	do
		do_typing(v)
		if _prop == null then return
		_stype = attr_type
		_is_typed = true
	end
end

redef class AAttrAssignExpr
	redef fun after_typing(v)
	do
		do_typing(v)
		if _prop == null then return
		if not v.check_conform_expr(n_value, attr_type) then return
		_is_typed = true
	end
end

redef class AAttrReassignExpr
	redef fun after_typing(v)
	do
		do_typing(v)
		if _prop == null then return
		var t = do_rvalue_typing(v, attr_type)
		if t == null then return
		v.check_conform(self, t, n_value.stype)
		_is_typed = true
	end
end

redef class AIssetAttrExpr
	redef fun after_typing(v)
	do
		do_typing(v)
		if _prop == null then return
		if attr_type.is_nullable then
			v.error(self, "Error: isset on a nullable attribute.")
		end
		_stype = v.type_bool
		_is_typed = true
	end
end

redef class AAbsAbsSendExpr
	# The signature of the called property
	redef fun prop_signature do return _prop_signature.as(not null)
	var _prop_signature: nullable MMSignature

	# Raw arguments used (without vararg transformation)
	redef fun raw_arguments: Array[AExpr]
	do
		var res = _raw_arguments_cache
		if res != null then
			return res
		else
			res = compute_raw_arguments
			if res == null then res = new Array[AExpr]
			_raw_arguments_cache = res
			return res
		end
	end

	var _raw_arguments_cache: nullable Array[AExpr] = null

	fun compute_raw_arguments: nullable Array[AExpr]
	do
		print "{location} no compute_raw_arguments"
		return null
	end

	# Check the conformity of a set of arguments `raw_args' to a signature.
	private fun process_signature(v: TypingVisitor, psig: MMSignature, name: Symbol, raw_args: nullable Array[AExpr]): Bool
	do
		var par_vararg = psig.vararg_rank
		var par_arity = psig.arity
		var raw_arity: Int
		if raw_args == null then raw_arity = 0 else raw_arity = raw_args.length
		if par_arity > raw_arity or (par_arity != raw_arity and par_vararg == -1) then
			v.error(self, "Error: arity missmatch; prototype is '{name}{psig}'.")
			return false
		end
		var arg_idx = 0
		for par_idx in [0..par_arity[ do
			var a: AExpr
			var par_type = psig[par_idx]
			if par_idx == par_vararg then
				for i in [0..(raw_arity-par_arity)] do
					a = raw_args[arg_idx]
					v.check_conform_expr(a, par_type)
					arg_idx = arg_idx + 1
				end
			else
				a = raw_args[arg_idx]
				v.check_conform_expr(a, par_type)
				arg_idx = arg_idx + 1
			end
		end
		return true
	end

	# Check the conformity of a set of defined closures
	private fun process_closures(v: TypingVisitor, psig: MMSignature, name: Symbol, cd: nullable Array[AClosureDef]): nullable MMType
	do
		var t = psig.return_type
		var cs = psig.closures # Declared closures
		var min_arity = 0
		for c in cs do
			if not c.is_optional then min_arity += 1
		end
		var arity = 0
		if cd != null then arity = cd.length
		if cs.length > 0 then
			if arity == 0 and min_arity > 0 then
				v.error(self, "Error: {name} requires {cs.length} blocks.")
			else if arity > cs.length or arity < min_arity then
				v.error(self, "Error: {name} requires {cs.length} blocks, {cd.length} found.")
			else
				# Initialize the break list if a value is required for breaks (ie. if the method is a function)
				var break_list: nullable Array[ABreakExpr] = null
				if t != null then break_list = new Array[ABreakExpr]

				# The n_label, is any in only set on the last decl
				var n_label = if arity > 0 then cd[arity-1].n_label else null

				# Process each closure definition
				for i in [0..arity[ do
					var cdi = cd[i]
					var cni = cdi.n_id.to_symbol
					var csi = psig.closure_named(cni)
					if csi != null then
						var esc = new EscapableClosure(cdi, csi, break_list)
						v.escapable_ctx.push(esc, n_label)
						cdi.accept_typing2(v, esc)
						v.escapable_ctx.pop
					else if cs.length == 1 then
						v.error(cdi.n_id, "Error: no closure named '!{cni}' in {name}; only closure is !{cs.first.name}.")
					else
						var a = new Array[String]
						for c in cs do
							a.add("!{c.name}")
						end
						v.error(cdi.n_id, "Error: no closure named '!{cni}' in {name}; only closures are {a.join(",")}.")
					end
				end

				# Check break type conformity
				if break_list != null then
					t = v.check_conform_multiexpr(t, break_list)
				end
			end
		else if arity != 0 then
			v.error(self, "Error: {name} does not require blocks.")
		end
		return t
	end
end

redef class AAbsSendExpr
	# Compute the called global property
	private fun do_typing(v: TypingVisitor, type_recv: MMType, is_implicit_self: Bool, recv_is_self: Bool, name: Symbol, raw_args: nullable Array[AExpr], closure_defs: nullable Array[AClosureDef])
	do
		var prop = get_property(v, type_recv, is_implicit_self, name)
		if prop == null then return
		var sig = get_signature(v, type_recv, prop, recv_is_self)
		if not process_signature(v, sig, prop.name, raw_args) then return
		var rtype = process_closures(v, sig, prop.name, closure_defs)
		if rtype == null and sig.return_type != null then return
		_prop = prop
		_prop_signature = sig
		_return_type = rtype
	end

	private fun get_property(v: TypingVisitor, type_recv: MMType, is_implicit_self: Bool, name: Symbol): nullable MMMethod
	do
		var lc = type_recv.local_class
		var prop: nullable MMMethod = null
		if lc.has_global_property_by_name(name) then prop = lc.select_method(name)
		if prop == null and v.local_property.global.is_init then
			var props = type_recv.local_class.super_methods_named(name)
			if props.length > 1 then
				v.error(self, "Error: Ambigous method name '{name}' for {props.join(", ")}. Use explicit designation.")
				return null
			else if props.length == 1 then 
				var p = type_recv.local_class[props.first.global]
				assert p isa MMMethod
				prop = p
			end

		end
		if prop == null then
			if is_implicit_self then
				v.error(self, "Error: Method or variable '{name}' unknown in {type_recv}.")
			else
				v.error(self, "Error: Method '{name}' doesn't exists in {type_recv}.")
			end
			return null
		end
		return prop
	end

	# Get the signature for a local property and a receiver
	private fun get_signature(v: TypingVisitor, type_recv: MMType, prop: MMMethod, recv_is_self: Bool): MMSignature
	do
		prop.global.check_visibility(v, self, v.module, recv_is_self)
		var psig = prop.signature_for(type_recv)
		if not recv_is_self then psig = psig.not_for_self
		return psig
	end

	# The invoked method (once computed)
	redef fun prop do return _prop.as(not null)
	var _prop: nullable MMMethod

	# The return type (if any) (once computed)
	redef readable var _return_type: nullable MMType
end

# A possible call of constructor in a super class
# Could be an explicit call or with the 'super' keyword
redef class ASuperInitCall
	private fun register_super_init_call(v: TypingVisitor, property: MMMethod)
	do
		if parent != v.top_block and self != v.top_block then
			v.error(self, "Error: Constructor invocation {property} must not be in nested block.")
		end
		var cla = v.module[property.global.intro.local_class.global]
		var prev_class: nullable MMLocalClass = null
		var esic = v.explicit_super_init_calls.as(not null)
		if not esic.is_empty then
			prev_class = esic.last.global.intro.local_class
		end
		var order = v.local_class.cshe.reverse_linear_extension
		if cla == v.local_class then
			v.explicit_other_init_call = true
		else if not order.has(cla) then
			v.error(self, "Error: Constructor of class {cla} must be one in {order.join(", ")}.")
		else if cla == prev_class then
			v.error(self, "Error: Only one super constructor invocation of class {cla} is allowed.")
		else
			var last_is_found = prev_class == null
			for c in order do
				if c == prev_class then
					last_is_found = true
				else if c == cla then
					if not last_is_found then
						v.error(self, "Error: Constructor of {c} must be invoked before constructor of {prev_class}")
					end
					esic.add(property)
					break
				end
			end
		end
	end

end

redef class ANewExpr
	redef fun compute_raw_arguments do return n_args.to_a
	redef fun after_typing(v)
	do
		if not n_type.is_typed then return
		var t = n_type.stype
		if t.local_class.global.is_abstract then
			v.error(self, "Error: try to instantiate abstract class {t.local_class}.")
			return
		end
		var name: Symbol
		if n_id == null then
			name = once "init".to_symbol
		else
			name = n_id.to_symbol
		end

		do_typing(v, t, false, false, name, raw_arguments, null)
		if _prop == null then return

		if not prop.global.is_init then
			v.error(self, "Error: {prop} is not a constructor.")
			return
		end
		_stype = t
		_is_typed = true
	end
end


redef class ASendExpr
	# Name of the invoked property
	fun name: Symbol is abstract 

	# Closure definitions
	redef fun closure_defs: nullable Array[AClosureDef] do return null

	redef fun after_typing(v)
	do
		do_all_typing(v)
	end

	private fun do_all_typing(v: TypingVisitor)
	do
		if not v.check_expr(n_expr) then return
		do_typing(v, n_expr.stype, n_expr.is_implicit_self, n_expr.is_self, name, raw_arguments, closure_defs)
		if _prop == null then return
		var prop = _prop.as(not null)

		if prop.global.is_init then
			if not v.local_property.global.is_init then
				v.error(self, "Error: try to invoke constructor {prop} in a method.")
			else if not n_expr.is_self then
				v.error(self, "Error: constructor {prop} is not invoken on 'self'.")
			else
				register_super_init_call(v, prop)
			end
		end

		_stype = return_type
		_is_typed = true
	end
end

redef class ASendReassignExpr
	redef fun read_prop do return _read_prop.as(not null)
	var _read_prop: nullable MMMethod
	redef fun do_all_typing(v)
	do
		if not v.check_expr(n_expr) then return
		var raw_args = raw_arguments
		do_typing(v, n_expr.stype, n_expr.is_implicit_self, n_expr.is_self, name, raw_args, null)
		var prop = _prop
		if prop == null then return
		if prop.global.is_init then
			if not v.local_property.global.is_init then
				v.error(self, "Error: try to invoke constructor {prop} in a method.")
			else if not n_expr.is_self then
				v.error(self, "Error: constructor {prop} is not invoken on 'self'.")
			end
		end
		var t = prop.signature_for(n_expr.stype).return_type.as(not null)
		if not n_expr.is_self then t = t.not_for_self

		var t2 = do_rvalue_typing(v, t)
		if t2 == null then return
		v.check_conform(self, t2, n_value.stype)

		_read_prop = prop
		raw_args = raw_args.to_a
		raw_args.add(n_value)

		do_typing(v, n_expr.stype, n_expr.is_implicit_self, n_expr.is_self, "{name}=".to_symbol, raw_args, null)
		if prop.global.is_init then
			if not v.local_property.global.is_init then
				v.error(self, "Error: try to invoke constructor {prop} in a method.")
			else if not n_expr.is_self then
				v.error(self, "Error: constructor {prop} is not invoken on 'self'.")
			end
		end

		_is_typed = true
	end
end

redef class ABinopExpr
	redef fun compute_raw_arguments do return [n_expr2]
end
redef class AEqExpr
	redef fun name do return once "==".to_symbol
	redef fun after_typing(v)
	do
		super
		if not n_expr.is_typed or not n_expr2.is_typed then return
		if n_expr.stype isa MMTypeNone and not n_expr2.stype.is_nullable or
		n_expr2.stype isa MMTypeNone and not n_expr.stype.is_nullable then
			v.warning(self, "Warning: comparaison between null and a non nullable value.")
		end

		if n_expr.stype isa MMTypeNone then
			try_to_isa(v, n_expr2)
		else if n_expr2.stype isa MMTypeNone then
			try_to_isa(v, n_expr)
		end
	end

	private fun try_to_isa(v: TypingVisitor, n: AExpr)
	do
		var variable = n.its_variable
		if variable != null then
			_if_false_variable_ctx = v.variable_ctx.sub_with(self, variable, n.stype.as_notnull)
		end
	end
end
redef class ANeExpr
	redef fun name do return once "!=".to_symbol
	redef fun after_typing(v)
	do
		super
		if not n_expr.is_typed or not n_expr2.is_typed then return
		if n_expr.stype isa MMTypeNone and not n_expr2.stype.is_nullable or
		n_expr2.stype isa MMTypeNone and not n_expr.stype.is_nullable then
			v.warning(self, "Warning: comparaison between null and a non nullable value.")
		end

		if n_expr.stype isa MMTypeNone then
			try_to_isa(v, n_expr2)
		else if n_expr2.stype isa MMTypeNone then
			try_to_isa(v, n_expr)
		end
	end

	private fun try_to_isa(v: TypingVisitor, n: AExpr)
	do
		var variable = n.its_variable
		if variable != null then
			_if_true_variable_ctx = v.variable_ctx.sub_with(self, variable, n.stype.as_notnull)
		end
	end
end
redef class ALtExpr
	redef fun name do return once "<".to_symbol
end
redef class ALeExpr
	redef fun name do return once "<=".to_symbol
end
redef class AGtExpr
	redef fun name do return once ">".to_symbol
end
redef class AGeExpr
	redef fun name do return once ">=".to_symbol
end
redef class APlusExpr
	redef fun name do return once "+".to_symbol
end
redef class AMinusExpr
	redef fun name do return once "-".to_symbol
end
redef class AStarshipExpr
	redef fun name do return once "<=>".to_symbol
end
redef class AStarExpr
	redef fun name do return once "*".to_symbol
end
redef class ASlashExpr
	redef fun name do return once "/".to_symbol
end
redef class APercentExpr
	redef fun name do return once "%".to_symbol
end

redef class AUminusExpr
	redef fun name do return once "unary -".to_symbol
	redef fun compute_raw_arguments do return null
end

redef class ACallFormExpr
	redef fun after_typing(v)
	do
		if n_expr.is_implicit_self then
			var name = n_id.to_symbol
			var variable = v.variable_ctx[name]
			if variable != null then
				var n: AExpr
				if variable isa ClosureVariable then
					n = new AClosureCallExpr.init_aclosurecallexpr(n_id, n_args, n_closure_defs)
					n._variable = variable
				else
					if not n_args.is_empty then
						v.error(self, "Error: {name} is variable, not a function.")
						return
					end
					n = variable_create(variable)
					n._variable = variable
				end
				replace_with(n)
				n.after_typing(v)
				return
			end
		end

		super
	end

	redef fun closure_defs
	do
		if n_closure_defs.is_empty then
			return null
		else
			return n_closure_defs.to_a
		end
	end

	# Create a variable acces corresponding to the call form
	fun variable_create(variable: Variable): AVarFormExpr is abstract
end

redef class ACallExpr
	redef fun variable_create(variable)
	do
		return new AVarExpr.init_avarexpr(n_id)
	end

	redef fun name do return n_id.to_symbol
	redef fun compute_raw_arguments do return n_args.to_a
end

redef class ACallAssignExpr
	redef fun variable_create(variable)
	do
		return new AVarAssignExpr.init_avarassignexpr(n_id, n_assign, n_value)
	end

	redef fun name do return (n_id.text + "=").to_symbol
	redef fun compute_raw_arguments do
		var res = n_args.to_a
		res.add(n_value)
		return res
	end
end

redef class ACallReassignExpr
	redef fun variable_create(variable)
	do
		return new AVarReassignExpr.init_avarreassignexpr(n_id, n_assign_op, n_value)
	end

	redef fun name do return n_id.to_symbol
	redef fun compute_raw_arguments do return n_args.to_a
end

redef class ABraExpr
	redef fun name do return once "[]".to_symbol
	redef fun compute_raw_arguments do return n_args.to_a
	redef fun closure_defs
	do
		if n_closure_defs.is_empty then
			return null
		else
			return n_closure_defs.to_a
		end
	end
end

redef class ABraAssignExpr
	redef fun name do return once "[]=".to_symbol
	redef fun compute_raw_arguments do
		var res = n_args.to_a
		res.add(n_value)
		return res
	end
end

redef class ABraReassignExpr
	redef fun name do return once "[]".to_symbol
	redef fun compute_raw_arguments do return n_args.to_a
end

redef class AInitExpr
	redef fun name do return once "init".to_symbol
	redef fun compute_raw_arguments do return n_args.to_a
end

redef class AClosureCallExpr
	var _variable: nullable ClosureVariable
	redef fun variable do return _variable.as(not null)
	redef fun compute_raw_arguments do return n_args.to_a

	redef fun after_typing(v)
	do
		var va = variable
		if va.closure.is_break then v.variable_ctx.unreash = true
		var sig = va.closure.signature
		var s = process_signature(v, sig, n_id.to_symbol, compute_raw_arguments)
		if not n_closure_defs.is_empty then
			process_closures(v, sig, n_id.to_symbol, n_closure_defs.to_a)
		end
		if not s then return
		_prop_signature = sig
		_stype = sig.return_type
		_is_typed = true
	end
end

redef class AClosureId
	fun to_symbol: Symbol is abstract
end
redef class ASimpleClosureId
	redef fun to_symbol: Symbol do return n_id.to_symbol
end
redef class ABreakClosureId
	redef fun to_symbol: Symbol do return n_kwbreak.to_symbol
end

redef class AClosureDef
	var _closure: nullable MMClosure
	redef fun closure do return _closure.as(not null)

	# The corresponding escapable object
	readable var _escapable: nullable EscapableBlock

	var _accept_typing2: Bool = false
	redef fun accept_typing(v)
	do
		# Typing is deferred, wait accept_typing2(v)
		if _accept_typing2 then super
	end

	private fun accept_typing2(v: TypingVisitor, esc: EscapableClosure)
	do
		_escapable = esc

		var sig = esc.closure.signature
		if sig.arity != n_ids.length then
			v.error(self, "Error: {sig.arity} automatic variable names expected, {n_ids.length} found.")
			return
		end

		_closure = esc.closure

		var old_var_ctx = v.variable_ctx
		var old_base_var_ctx = v.base_variable_ctx
		v.base_variable_ctx = v.variable_ctx
		v.variable_ctx = v.variable_ctx.sub(self)
		variables = new Array[AutoVariable]
		for i in [0..n_ids.length[ do
			var va = new AutoVariable(n_ids[i].to_symbol, n_ids[i])
			variables.add(va)
			va.stype = sig[i]
			v.variable_ctx.add(va)
		end

		_accept_typing2 = true
		accept_typing(v)

		if v.variable_ctx.unreash == false then
			if closure.signature.return_type != null then
				v.error(self, "Control error: Reached end of block (a 'continue' with a value was expected).")
			else if closure.is_break then
				v.error(self, "Control error: Reached end of break block (a 'break' was expected).")
			end
		end
		v.variable_ctx = old_var_ctx
		v.base_variable_ctx = old_base_var_ctx
	end
end

class ATypeCheckExpr
special AExpr
	private fun check_expr_cast(v: TypingVisitor, n_expr: AExpr, n_type: AType)
	do
		if not v.check_expr(n_expr) then return
		if not n_type.is_typed then return
		var etype = n_expr.stype
		var ttype = n_type.stype
		if etype == ttype then
			v.warning(self, "Warning: Expression is already a {ttype}.")
		else if etype < ttype then
			v.warning(self, "Warning: Expression is already a {ttype} since it is a {etype}.")
		else if etype.is_nullable and etype.as_notnull == ttype then
			if ttype isa MMTypeFormal and ttype.bound.is_nullable then
				# No warning in this case since with
				#   type T: nullable A
				#   var x: nullable T
				# 'x.as(not null)' != 'x.as(T)'
				# 'x != null' != 'x isa T'
			else if self isa AIsaExpr then
				v.warning(self, "Warning: Prefer '!= null'.")
			else
				v.warning(self, "Warning: Prefer '.as(not null)'.")
			end
		end
	end
end

redef class AIsaExpr
special ATypeCheckExpr
	redef fun after_typing(v)
	do
		check_expr_cast(v, n_expr, n_type)
		if not n_type.is_typed then return
		var variable = n_expr.its_variable
		if variable != null then
			_if_true_variable_ctx = v.variable_ctx.sub_with(self, variable, n_type.stype)
		end
		_stype = v.type_bool
		_is_typed = true
	end
end

redef class AAsCastExpr
special ATypeCheckExpr
	redef fun after_typing(v)
	do
		check_expr_cast(v, n_expr, n_type)
		if not n_type.is_typed then return
		_stype = n_type.stype
		_is_typed = _stype != null
	end
end

redef class AAsNotnullExpr
	redef fun after_typing(v)
	do
		if not v.check_expr(n_expr) then return
		var t = n_expr.stype
		if t isa MMTypeNone then
			v.error(n_expr, "Type error: 'as(not null)' on 'null' value.")
			return
		else if not t.is_nullable then
			v.warning(n_expr, "Warning: 'as(not null)' on non nullable type.")
		end
		_stype = n_expr.stype.as_notnull
		_is_typed = true
	end
end

redef class AProxyExpr
	redef fun after_typing(v)
	do
		if not n_expr.is_typed then return
		_is_typed = true
		if n_expr.is_statement then return
		_stype = n_expr.stype
	end
end

redef class AOnceExpr
	redef fun accept_typing(v)
	do
		if v.once_count > 0 then
			v.warning(self, "Useless once in a once expression.")
		end
		v.once_count = v.once_count + 1

		super

		v.once_count = v.once_count - 1
	end
end

