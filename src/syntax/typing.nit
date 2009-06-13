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
	meth do_typing(tc: ToolContext)
	do
		var tv = new TypingVisitor(tc, self)
		tv.visit(node)
	end
end

# Typing visitor
# * Associate local variables to nodes
# * Distinguish method call and local variable access
# * Resolve call and attribute access
# * Check type conformance
private class TypingVisitor
special AbsSyntaxVisitor
	redef meth visit(n)
	do
		if n != null then n.accept_typing(self)
	end

	# Current knowledge about variables names and types
	readable writable attr _variable_ctx: VariableContext

	# Non-bypassable knowledge about variables names and types
	readable writable attr _base_variable_ctx: VariableContext

	# Current knowledge about escapable blocks
	readable writable attr _escapable_ctx: EscapableContext = new EscapableContext(self)

	# The current reciever
	readable writable attr _self_var: ParamVariable

	# Block of the current method
	readable writable attr _top_block: PExpr

	# List of explicit invocation of constructors of super-classes
	readable writable attr _explicit_super_init_calls: Array[MMMethod]

	# Is a other constructor of the same class invoked
	readable writable attr _explicit_other_init_call: Bool

	# Make the if_true_variable_ctx of the expression effective
	private meth use_if_true_variable_ctx(e: PExpr)
	do
		var ctx = e.if_true_variable_ctx
		if ctx != null then variable_ctx = ctx
	end

	# Make the if_false_variable_ctx of the expression effective
	private meth use_if_false_variable_ctx(e: PExpr)
	do
		var ctx = e.if_false_variable_ctx
		if ctx != null then variable_ctx = ctx
	end

	# Number of nested once
	readable writable attr _once_count: Int = 0

	init(tc, module) do super

	private meth get_default_constructor_for(n: PNode, c: MMLocalClass, prop: MMSrcMethod): MMMethod
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
			if prop != null and gp.name == prop.name then
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

redef class PNode
	private meth accept_typing(v: TypingVisitor) 
	do
		accept_abs_syntax_visitor(v)
		after_typing(v)
	end
	private meth after_typing(v: TypingVisitor) do end
end

redef class PClassdef
	redef meth accept_typing(v)
	do
		v.self_var = new ParamVariable("self".to_symbol, self)
		v.self_var.stype = local_class.get_type
		super
	end
end

redef class AAttrPropdef
	redef meth accept_typing(v)
	do
		super
		if n_expr != null then
			v.check_conform_expr(n_expr, prop.signature.return_type)
		end
	end
end

redef class AMethPropdef
	redef readable attr _self_var: ParamVariable
	redef meth accept_typing(v)
	do
		v.variable_ctx = new RootVariableContext(v, self)
		v.base_variable_ctx = v.variable_ctx
		_self_var = v.self_var
		super
	end
end

redef class AConcreteMethPropdef
	redef meth accept_typing(v)
	do
		super
		if v.variable_ctx.unreash == false and method.signature.return_type != null then
			v.error(self, "Control error: Reached end of function (a 'return' with a value was expected).")
		end
	end
end

redef class AConcreteInitPropdef
	readable attr _super_init_calls: Array[MMMethod] = new Array[MMMethod]
	readable attr _explicit_super_init_calls: Array[MMMethod] = new Array[MMMethod]
	redef meth accept_typing(v)
	do
		v.top_block = n_block
		v.explicit_super_init_calls = explicit_super_init_calls
		v.explicit_other_init_call = false
		super
		if v.explicit_other_init_call or method.global.intro != method then
			# TODO: something?
		else 
			var i = 0
			var l = explicit_super_init_calls.length
			var cur_m: MMMethod = null
			var cur_c: MMLocalClass = null
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
					super_init_calls.add(cur_m)
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

redef class PParam
	redef meth after_typing(v)
	do
		# TODO: why the test?
		if v.variable_ctx != null then
			v.variable_ctx.add(variable)
		end
	end
end

redef class AClosureDecl
	# The corresponding escapable object
	readable attr _escapable: EscapableBlock

	redef meth accept_typing(v)
	do
		# Register the closure for ClosureCallExpr
		v.variable_ctx.add(variable)

		var old_var_ctx = v.variable_ctx
		var old_base_var_ctx = v.base_variable_ctx
		v.base_variable_ctx = v.variable_ctx
		v.variable_ctx = v.variable_ctx.sub(self)

		_escapable = new EscapableClosure(self, variable.closure, null)
		v.escapable_ctx.push(_escapable)

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

redef class PType
	readable attr _stype: MMType
	redef meth after_typing(v)
	do
		_stype = get_stype(v)
	end
end

redef class PExpr
	redef readable attr _is_typed: Bool = false
	redef meth is_statement: Bool do return _stype == null
	redef meth stype
	do
		if not is_typed then
			print "{locate}: not is_typed"
			abort
		end
		if is_statement then
			print "{locate}: is_statement"
			abort
		end
		return _stype
	end
	attr _stype: MMType

	# Is the expression the implicit receiver
	meth is_implicit_self: Bool do return false

	# Is the expression the current receiver (implicit or explicit)
	meth is_self: Bool do return false

	# The variable accessed is any
	meth its_variable: Variable do return null

	# The variable type information if current boolean expression is true
	readable private attr _if_true_variable_ctx: VariableContext

	# The variable type information if current boolean expression is false
	readable private attr _if_false_variable_ctx: VariableContext
end

redef class AVardeclExpr
	redef meth after_typing(v)
	do
		var va = new VarVariable(n_id.to_symbol, self)
		variable = va
		v.variable_ctx.add(va)
		if n_expr != null then v.variable_ctx.mark_is_set(va)

		if n_type != null then
			va.stype = n_type.stype
			if n_expr != null then
				v.check_conform_expr(n_expr, va.stype)
			end
		else
			if not v.check_expr(n_expr) then return
			va.stype = n_expr.stype
		end
		_is_typed = true
	end
end

redef class ABlockExpr
	redef meth accept_typing(v)
	do
		var old_var_ctx = v.variable_ctx
		v.variable_ctx = v.variable_ctx.sub(self)

		for e in n_expr do
			if v.variable_ctx.unreash and not v.variable_ctx.already_unreash then
				v.variable_ctx.already_unreash = true
				v.warning(e, "Warning: unreachable statement.")
			end
			v.visit(e)
		end

		old_var_ctx.merge(v.variable_ctx)
		v.variable_ctx = old_var_ctx
		_is_typed = true
	end
end

redef class AReturnExpr
	redef meth after_typing(v)
	do
		v.variable_ctx.unreash = true
		var t = v.local_property.signature.return_type
		if n_expr == null and t != null then
			v.error(self, "Error: Return without value in a function.")
		else if n_expr != null and t == null then
			v.error(self, "Error: Return with value in a procedure.")
		else if n_expr != null and t != null then
			v.check_conform_expr(n_expr, t)
		end
		_is_typed = true
	end
end

redef class AContinueExpr
	redef meth after_typing(v)
	do
		v.variable_ctx.unreash = true
		var esc = compute_escapable_block(v.escapable_ctx)
		if esc == null then return

		if esc.is_break_block then
			v.error(self, "Error: 'continue' forbiden in break blocks.")
			return
		end

		var t = esc.continue_stype
		if n_expr == null and t != null then
			v.error(self, "Error: continue with a value required in this block.")
		else if n_expr != null and t == null then
			v.error(self, "Error: continue without value required in this block.")
		else if n_expr != null and t != null then
			v.check_conform_expr(n_expr, t)
		end
		_is_typed = true
	end
end

redef class ABreakExpr
	redef meth after_typing(v)
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
			bl.add(n_expr)
		end
		_is_typed = true
	end
end

redef class AAbortExpr
	redef meth after_typing(v)
	do
		v.variable_ctx.unreash = true
	end
end

redef class AIfExpr
	redef meth accept_typing(v)
	do
		var old_var_ctx = v.variable_ctx
		v.visit(n_expr)
		v.check_conform_expr(n_expr, v.type_bool)

		# Prepare 'then' context
		v.use_if_true_variable_ctx(n_expr)

		# Process the 'then'
		if n_then != null then
			v.variable_ctx = v.variable_ctx.sub(n_then)
			v.visit(n_then)
		end

		# Remember what appened in the 'then'
		var then_var_ctx = v.variable_ctx

		# Prepare 'else' context
		v.variable_ctx = old_var_ctx
		v.use_if_false_variable_ctx(n_expr)

		# Process the 'else'
		if n_else != null then
			v.variable_ctx = v.variable_ctx.sub(n_else)
			v.visit(n_else)
		end

		# Merge 'then' and 'else' contexts
		old_var_ctx.merge2(then_var_ctx, v.variable_ctx, v.base_variable_ctx)
		v.variable_ctx = old_var_ctx
		_is_typed = true
	end
end

redef class AWhileExpr
	# The corresponding escapable block
	readable attr _escapable: EscapableBlock

	redef meth accept_typing(v)
	do
		_escapable = new EscapableBlock(self)
		v.escapable_ctx.push(_escapable)
		var old_var_ctx = v.variable_ctx
		var old_base_var_ctx = v.base_variable_ctx
		v.base_variable_ctx = v.variable_ctx
		v.variable_ctx = v.variable_ctx.sub(self)

		# Process condition
		v.visit(n_expr)
		v.check_conform_expr(n_expr, v.type_bool)

		# Prepare inside context (assert cond)
		v.use_if_true_variable_ctx(n_expr)

		# Process inside
		if n_block != null then
			v.variable_ctx = v.variable_ctx.sub(n_block)
			v.visit(n_block)
		end

		v.variable_ctx = old_var_ctx
		v.base_variable_ctx = old_base_var_ctx
		v.escapable_ctx.pop
		_is_typed = true
	end
end

redef class AForExpr
	# The corresponding escapable block
	readable attr _escapable: EscapableBlock

	readable attr _meth_iterator: MMMethod
	readable attr _meth_is_ok: MMMethod
	readable attr _meth_item: MMMethod
	readable attr _meth_next: MMMethod
	redef meth accept_typing(v)
	do
		_escapable = new EscapableBlock(self)
		v.escapable_ctx.push(_escapable)

		var old_var_ctx = v.variable_ctx
		var old_base_var_ctx = v.base_variable_ctx
		v.base_variable_ctx = v.variable_ctx
		v.variable_ctx = v.variable_ctx.sub(self)
		var va = new AutoVariable(n_id.to_symbol, self)
		variable = va
		v.variable_ctx.add(va)

		v.visit(n_expr)

		if not v.check_conform_expr(n_expr, v.type_collection) then return
		var expr_type = n_expr.stype
		_meth_iterator = expr_type.local_class.select_method(once ("iterator".to_symbol))
		if _meth_iterator == null then
			v.error(self, "Error: Collection MUST have an iterate method")
			return
		end
		var iter_type = _meth_iterator.signature_for(expr_type).return_type
		_meth_is_ok = iter_type.local_class.select_method(once ("is_ok".to_symbol))
		if _meth_is_ok == null then
			v.error(self, "Error: {iter_type} MUST have an is_ok method")
			return
		end
		_meth_item = iter_type.local_class.select_method(once ("item".to_symbol))
		if _meth_item == null then
			v.error(self, "Error: {iter_type} MUST have an item method")
			return
		end
		_meth_next = iter_type.local_class.select_method(once ("next".to_symbol))
		if _meth_next == null then
			v.error(self, "Error: {iter_type} MUST have a next method")
			return
		end
		var t = _meth_item.signature_for(iter_type).return_type
		if not n_expr.is_self then t = t.not_for_self
		va.stype = t

		if n_block != null then v.visit(n_block)

		# pop context
		v.variable_ctx = old_var_ctx
		v.base_variable_ctx = old_base_var_ctx
		v.escapable_ctx.pop
		_is_typed = true
	end
end

redef class AAssertExpr
	redef meth after_typing(v)
	do
		v.check_conform_expr(n_expr, v.type_bool)
		v.use_if_true_variable_ctx(n_expr)
		_is_typed = true
	end
end

redef class AVarExpr
	redef meth its_variable do return variable

	redef meth after_typing(v)
	do
		v.variable_ctx.check_is_set(self, variable)
		_stype = v.variable_ctx.stype(variable)
		_is_typed = _stype != null
	end
end

redef class AVarAssignExpr
	redef meth after_typing(v)
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
	private meth do_rvalue_typing(v: TypingVisitor, type_lvalue: MMType): MMType
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

	# Method used through the reassigment operator (once computed)
	readable attr _assign_method: MMMethod
end

redef class AVarReassignExpr
	redef meth after_typing(v)
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

redef class PAssignOp
	meth method_name: Symbol is abstract
end
redef class APlusAssignOp
	redef meth method_name do return once "+".to_symbol
end
redef class AMinusAssignOp
	redef meth method_name do return once "-".to_symbol
end

redef class ASelfExpr
	redef meth its_variable do return variable

	redef meth after_typing(v)
	do
		variable = v.self_var
		_stype = v.variable_ctx.stype(variable)
		_is_typed = true
	end

        redef meth is_self do return true
end

redef class AImplicitSelfExpr
        redef meth is_implicit_self do return true
end

redef class AIfexprExpr
	redef meth accept_typing(v)
	do
		var old_var_ctx = v.variable_ctx

		v.visit(n_expr)
		v.use_if_true_variable_ctx(n_expr)
		v.visit(n_then)
		v.variable_ctx = old_var_ctx
		v.use_if_false_variable_ctx(n_expr)
		v.visit(n_else)

		v.check_conform_expr(n_expr, v.type_bool)

		_stype = v.check_conform_multiexpr(null, [n_then, n_else])
		_is_typed = _stype != null
	end
end

redef class ABoolExpr
	redef meth after_typing(v)
	do
		_stype = v.type_bool
		_is_typed = true
	end
end

redef class AOrExpr
	redef meth accept_typing(v)
	do
		var old_var_ctx = v.variable_ctx

		v.visit(n_expr)
		v.use_if_false_variable_ctx(n_expr)

		v.visit(n_expr2)
		if n_expr2.if_false_variable_ctx != null then 
			_if_false_variable_ctx = n_expr2.if_false_variable_ctx
		else
			_if_false_variable_ctx = v.variable_ctx
		end

		v.variable_ctx = old_var_ctx

		v.check_conform_expr(n_expr, v.type_bool)
		v.check_conform_expr(n_expr2, v.type_bool)
		_stype = v.type_bool
		_is_typed = true
	end
end

redef class AAndExpr
	redef meth accept_typing(v)
	do
		var old_var_ctx = v.variable_ctx

		v.visit(n_expr)
		v.use_if_true_variable_ctx(n_expr)

		v.visit(n_expr2)
		if n_expr2.if_true_variable_ctx != null then 
			_if_true_variable_ctx = n_expr2.if_true_variable_ctx
		else
			_if_true_variable_ctx = v.variable_ctx
		end

		v.variable_ctx = old_var_ctx

		v.check_conform_expr(n_expr, v.type_bool)
		v.check_conform_expr(n_expr2, v.type_bool)
		_stype = v.type_bool
		_is_typed = true
	end
end

redef class ANotExpr
	redef meth after_typing(v)
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
	redef meth after_typing(v)
	do
		_stype = v.type_int
		_is_typed = true
	end
end

redef class AFloatExpr
	redef meth after_typing(v)
	do
		_stype = v.type_float
		_is_typed = true
	end
end

redef class ACharExpr
	redef meth after_typing(v)
	do
		_stype = v.type_char
		_is_typed = true
	end
end

redef class AStringFormExpr
	readable attr _meth_with_native: MMMethod
	redef meth after_typing(v)
	do
		_stype = v.type_string
		_is_typed = true
		_meth_with_native = _stype.local_class.select_method(once "with_native".to_symbol)
		if _meth_with_native == null then v.error(self, "{_stype} MUST have a with_native method.")
	end
end

redef class ASuperstringExpr
	readable attr _meth_with_capacity: MMMethod
	readable attr _meth_add: MMMethod
	readable attr _meth_to_s: MMMethod
	readable attr _atype: MMType
	redef meth after_typing(v)
	do
		_stype = v.type_string
		_atype = v.type_array(_stype)
		_meth_with_capacity = _atype.local_class.select_method(once "with_capacity".to_symbol)
		if _meth_with_capacity == null then v.error(self, "{_atype} MUST have a with_capacity method.")
		_meth_add = _atype.local_class.select_method(once "add".to_symbol)
		if _meth_add == null then v.error(self, "{_atype} MUST have an add method.")
		_meth_to_s = v.type_object.local_class.select_method(once "to_s".to_symbol)
		if _meth_to_s == null then v.error(self, "Object MUST have a to_s method.")
		_is_typed = true
	end
end

redef class ANullExpr
	redef meth after_typing(v)
	do
		_stype = v.type_none
		_is_typed = true
	end
end

redef class AArrayExpr
	readable attr _meth_with_capacity: MMMethod
	readable attr _meth_add: MMMethod

	redef meth after_typing(v)
	do
		var stype = v.check_conform_multiexpr(null, n_exprs)
		if stype == null then return
		do_typing(v, stype)
	end

	private meth do_typing(v: TypingVisitor, element_type: MMType)
	do
		_stype = v.type_array(element_type)

		_meth_with_capacity = _stype.local_class.select_method(once "with_capacity".to_symbol)
		if _meth_with_capacity == null then v.error(self, "{_stype} MUST have a with_capacity method.")
		_meth_add = _stype.local_class.select_method(once "add".to_symbol)
		if _meth_add == null then v.error(self, "{_stype} MUST have an add method.")

		_is_typed = true
	end
end

redef class ARangeExpr
	readable attr _meth_init: MMMethod
	redef meth after_typing(v)
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

redef class ACrangeExpr
	redef meth after_typing(v)
	do
		super
		_meth_init = stype.local_class.select_method(once "init".to_symbol)
	end
end
redef class AOrangeExpr
	redef meth after_typing(v)
	do
		super
		_meth_init = stype.local_class.select_method(once "without_last".to_symbol)
	end
end


redef class ASuperExpr
special ASuperInitCall
	# readable attr _prop: MMSrcMethod
	readable attr _init_in_superclass: MMMethod
	redef meth after_typing(v)
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
				var signature = get_signature(v, v.self_var.stype, p, true)
				_arguments = process_signature(v, signature, p.name, n_args.to_a)
			end
		else
			v.error(self, "Error: No super method to call for {v.local_property}.")
			return
		end

		if precs.first.signature_for(v.self_var.stype).return_type != null then
			var stypes = new Array[MMType]
			var stype: MMType = null
			for prop in precs do
				assert prop isa MMMethod
				var t = prop.signature_for(v.self_var.stype).return_type.for_module(v.module).adapt_to(v.local_property.signature.recv)
				stypes.add(t)
				if stype == null or stype < t then
					stype = t
				end
			end
			for t in stypes do
				v.check_conform(self, t, stype)
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
	# Attribute accessed
	readable attr _prop: MMAttribute

	# Attribute type of the acceded attribute
	readable attr _attr_type: MMType

	# Compute the attribute accessed
	private meth do_typing(v: TypingVisitor)
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
	redef meth after_typing(v)
	do
		do_typing(v)
		if prop == null then return
		_stype = attr_type
		_is_typed = true
	end
end

redef class AAttrAssignExpr
	redef meth after_typing(v)
	do
		do_typing(v)
		if prop == null then return
		if not v.check_conform_expr(n_value, attr_type) then return
		_is_typed = true
	end
end

redef class AAttrReassignExpr
	redef meth after_typing(v)
	do
		do_typing(v)
		if prop == null then return
		var t = do_rvalue_typing(v, attr_type)
		if t == null then return
		v.check_conform(self, t, n_value.stype)
		_is_typed = true
	end
end

class AAbsAbsSendExpr
special PExpr
	# The signature of the called property
	readable attr _prop_signature: MMSignature

	# The real arguments used (after star transformation) (once computed)
	readable attr _arguments: Array[PExpr]

	# Check the conformity of a set of arguments `raw_args' to a signature.
	private meth process_signature(v: TypingVisitor, psig: MMSignature, name: Symbol, raw_args: Array[PExpr]): Array[PExpr]
	do
		var par_vararg = psig.vararg_rank
		var par_arity = psig.arity
		var raw_arity: Int
		if raw_args == null then raw_arity = 0 else raw_arity = raw_args.length
		if par_arity > raw_arity or (par_arity != raw_arity and par_vararg == -1) then
			v.error(self, "Error: '{name}' arity missmatch.")
			return null
		end
		var arg_idx = 0
		var args = new Array[PExpr]
		for par_idx in [0..par_arity[ do
			var a: PExpr
			var par_type = psig[par_idx]
			if par_idx == par_vararg then
				var star = new Array[PExpr]
				for i in [0..(raw_arity-par_arity)] do
					a = raw_args[arg_idx]
					v.check_conform_expr(a, par_type)
					star.add(a)
					arg_idx = arg_idx + 1
				end
				var aa = new AArrayExpr.init_aarrayexpr(star)
				aa.do_typing(v, par_type)
				a = aa
			else
				a = raw_args[arg_idx]
				v.check_conform_expr(a, par_type)
				arg_idx = arg_idx + 1
			end
			args.add(a)
		end
		return args
	end

	# Check the conformity of a set of defined closures
	private meth process_closures(v: TypingVisitor, psig: MMSignature, name: Symbol, cd: Array[PClosureDef]): MMType
	do
		var t = psig.return_type
		var cs = psig.closures # Declared closures
		var min_arity = 0
		for c in cs do
			if not c.is_optional then min_arity += 1
		end
		if cd != null then
			if cs.length == 0 then
				v.error(self, "Error: {name} does not require blocks.")
			else if cd.length > cs.length or cd.length < min_arity then
				v.error(self, "Error: {name} requires {cs.length} blocks, {cd.length} found.")
			else
				# Initialize the break list if a value is required for breaks (ie. if the method is a function)
				var break_list: Array[ABreakExpr] = null
				if t != null then break_list = new Array[ABreakExpr]

				# Process each closure definition
				for i in [0..cd.length[ do
					var csi = cs[i]
					var cdi = cd[i]
					var esc = new EscapableClosure(cdi, csi, break_list)
					v.escapable_ctx.push(esc)
					cdi.accept_typing2(v, esc)
					v.escapable_ctx.pop
				end

				# Check break type conformity
				if break_list != null then
					t = v.check_conform_multiexpr(t, break_list)
				end
			end
		else if min_arity != 0 then
			v.error(self, "Error: {name} requires {cs.length} blocks.")
		end
		return t
	end
end

class AAbsSendExpr
special AAbsAbsSendExpr
	# Compute the called global property
	private meth do_typing(v: TypingVisitor, type_recv: MMType, is_implicit_self: Bool, recv_is_self: Bool, name: Symbol, raw_args: Array[PExpr], closure_defs: Array[PClosureDef])
	do
		var prop = get_property(v, type_recv, is_implicit_self, name)
		if prop == null then return
		var sig = get_signature(v, type_recv, prop, recv_is_self)
		if sig == null then return
		var args = process_signature(v, sig, prop.name, raw_args)
		if args == null then return
		var rtype = process_closures(v, sig, prop.name, closure_defs)
		if rtype == null and sig.return_type != null then return
		_prop = prop
		_prop_signature = sig
		_arguments = args
		_return_type = rtype
	end

	private meth get_property(v: TypingVisitor, type_recv: MMType, is_implicit_self: Bool, name: Symbol): MMMethod
	do
		if type_recv == null then return null
		var lc = type_recv.local_class
		var prop: MMMethod = null
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
	private meth get_signature(v: TypingVisitor, type_recv: MMType, prop: MMMethod, recv_is_self: Bool): MMSignature
	do
		prop.global.check_visibility(v, self, v.module, recv_is_self)
		var psig = prop.signature_for(type_recv)
		if not recv_is_self then psig = psig.not_for_self
		return psig
	end

	# The invoked method (once computed)
	readable attr _prop: MMMethod

	# The return type (if any) (once computed)
	readable attr _return_type: MMType
end

# A possible call of constructor in a super class
# Could be an explicit call or with the 'super' keyword
class ASuperInitCall
special AAbsSendExpr
	private meth register_super_init_call(v: TypingVisitor, property: MMMethod)
	do
		if parent != v.top_block and self != v.top_block then
			v.error(self, "Error: Constructor invocation {property} must not be in nested block.")
		end
		var cla = v.module[property.global.intro.local_class.global]
		var prev_class: MMLocalClass = null
		if not v.explicit_super_init_calls.is_empty then
			prev_class = v.explicit_super_init_calls.last.global.intro.local_class
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
					v.explicit_super_init_calls.add(property)
					break
				end
			end
		end
	end

end

redef class ANewExpr
special AAbsSendExpr
	redef meth after_typing(v)
	do
		var t = n_type.stype
		if t == null then return
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

		do_typing(v, t, false, false, name, n_args.to_a, null)
		if prop == null then return

		if not prop.global.is_init then
			v.error(self, "Error: {prop} is not a constructor.")
			return
		end
		_stype = t
		_is_typed = true
	end
end


redef class ASendExpr
special ASuperInitCall
	# Name of the invoked property
	meth name: Symbol is abstract 

	# Raw arguments used (withour star transformation)
	meth raw_arguments: Array[PExpr] is abstract

	# Closure definitions
	meth closure_defs: Array[PClosureDef] do return null

	redef meth after_typing(v)
	do
		do_all_typing(v)
	end

	private meth do_all_typing(v: TypingVisitor)
	do
		if not v.check_expr(n_expr) then return
		do_typing(v, n_expr.stype, n_expr.is_implicit_self, n_expr.is_self, name, raw_arguments, closure_defs)
		if prop == null then return

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

class ASendReassignExpr
special ASendExpr
special AReassignFormExpr
	readable attr _read_prop: MMMethod
	redef meth do_all_typing(v)
	do
		if not v.check_expr(n_expr) then return
		var raw_args = raw_arguments
		do_typing(v, n_expr.stype, n_expr.is_implicit_self, n_expr.is_self, name, raw_args, null)
		if prop == null then return
		if prop.global.is_init then
			if not v.local_property.global.is_init then
				v.error(self, "Error: try to invoke constructor {prop} in a method.")
			else if not n_expr.is_self then
				v.error(self, "Error: constructor {prop} is not invoken on 'self'.")
			end
		end
		var t = prop.signature_for(n_expr.stype).return_type
		if not n_expr.is_self then t = t.not_for_self

		var t2 = do_rvalue_typing(v, t)
		if t2 == null then return
		v.check_conform(self, t2, n_value.stype)

		_read_prop = prop
		var old_args = arguments
		raw_args.add(n_value)

		do_typing(v, n_expr.stype, n_expr.is_implicit_self, n_expr.is_self, "{name}=".to_symbol, raw_args, null)
		if prop == null then return
		if prop.global.is_init then
			if not v.local_property.global.is_init then
				v.error(self, "Error: try to invoke constructor {prop} in a method.")
			else if not n_expr.is_self then
				v.error(self, "Error: constructor {prop} is not invoken on 'self'.")
			end
		end

		_arguments = old_args # FIXME: What if star parameters do not match betwen the two methods?
		_is_typed = true
	end
end

redef class ABinopExpr
	redef meth raw_arguments do return [n_expr2]
end
redef class AEqExpr
	redef meth name do return once "==".to_symbol
	redef meth after_typing(v)
	do
		super
		if not is_typed then return
		if n_expr.stype isa MMTypeNone and not n_expr2.stype.is_nullable or
		n_expr2.stype isa MMTypeNone and not n_expr.stype.is_nullable then
			v.warning(self, "Warning: comparaison between null and a non nullable value.")
		end
	end
end
redef class ANeExpr
	redef meth name do return once "!=".to_symbol
	redef meth after_typing(v)
	do
		super
		if not is_typed then return
		if n_expr.stype isa MMTypeNone and not n_expr2.stype.is_nullable or
		n_expr2.stype isa MMTypeNone and not n_expr.stype.is_nullable then
			v.warning(self, "Warning: comparaison between null and a non nullable value.")
		end
	end
end
redef class ALtExpr
	redef meth name do return once "<".to_symbol
end
redef class ALeExpr
	redef meth name do return once "<=".to_symbol
end
redef class AGtExpr
	redef meth name do return once ">".to_symbol
end
redef class AGeExpr
	redef meth name do return once ">=".to_symbol
end
redef class APlusExpr
	redef meth name do return once "+".to_symbol
end
redef class AMinusExpr
	redef meth name do return once "-".to_symbol
end
redef class AStarshipExpr
	redef meth name do return once "<=>".to_symbol
end
redef class AStarExpr
	redef meth name do return once "*".to_symbol
end
redef class ASlashExpr
	redef meth name do return once "/".to_symbol
end
redef class APercentExpr
	redef meth name do return once "%".to_symbol
end

redef class AUminusExpr
	redef meth name do return once "unary -".to_symbol
	redef meth raw_arguments do return null
end

redef class ACallFormExpr
	redef meth after_typing(v)
	do
		if n_expr != null and n_expr.is_implicit_self then
			var name = n_id.to_symbol
			var variable = v.variable_ctx[name]
			if variable != null then
				if variable isa ClosureVariable then
					var n = new AClosureCallExpr.init_aclosurecallexpr(n_id, n_args, n_closure_defs)
					replace_with(n)
					n.variable = variable
					n.after_typing(v)
					return
				else
					if not n_args.is_empty then
						v.error(self, "Error: {name} is variable, not a function.")
						return
					end
					var vform = variable_create(variable)
					vform.variable = variable
					replace_with(vform)
					vform.after_typing(v)
					return
				end
			end
		end

		super
	end

	redef meth closure_defs
	do
		if n_closure_defs == null or n_closure_defs.is_empty then
			return null
		else
			return n_closure_defs.to_a
		end
	end

	# Create a variable acces corresponding to the call form
	meth variable_create(variable: Variable): AVarFormExpr is abstract
end

redef class ACallExpr
	redef meth variable_create(variable)
	do
		return new AVarExpr.init_avarexpr(n_id)
	end

	redef meth name do return n_id.to_symbol
	redef meth raw_arguments do return n_args.to_a
end

redef class ACallAssignExpr
	redef meth variable_create(variable)
	do
		return new AVarAssignExpr.init_avarassignexpr(n_id, n_assign, n_value)
	end

	redef meth name do return (n_id.text + "=").to_symbol
	redef meth raw_arguments do
		var res = n_args.to_a
		res.add(n_value)
		return res
	end
end

redef class ACallReassignExpr
special ASendReassignExpr
	redef meth variable_create(variable)
	do
		return new AVarReassignExpr.init_avarreassignexpr(n_id, n_assign_op, n_value)
	end

	redef meth name do return n_id.to_symbol
	redef meth raw_arguments do return n_args.to_a
end

redef class ABraExpr
	redef meth name do return once "[]".to_symbol
	redef meth raw_arguments do return n_args.to_a
end

redef class ABraAssignExpr
	redef meth name do return once "[]=".to_symbol
	redef meth raw_arguments do
		var res = n_args.to_a
		res.add(n_value)
		return res
	end
end

redef class ABraReassignExpr
special ASendReassignExpr
	redef meth name do return once "[]".to_symbol
	redef meth raw_arguments do return n_args.to_a
end

redef class AInitExpr
	redef meth name do return once "init".to_symbol
	redef meth raw_arguments do return n_args.to_a
end

redef class AClosureCallExpr
special AAbsAbsSendExpr
	redef meth after_typing(v)
	do
		var va = variable
		if va.closure.is_break then v.variable_ctx.unreash = true
		var sig = va.closure.signature
		var args = process_signature(v, sig, n_id.to_symbol, n_args.to_a)
		if not n_closure_defs.is_empty then
			process_closures(v, sig, n_id.to_symbol, n_closure_defs.to_a)
		end
		if args == null then return
		_prop_signature = sig
		_arguments = args
		_stype = sig.return_type
		_is_typed = true
	end
end

redef class PClosureDef
	# The corresponding escapable object
	readable attr _escapable: EscapableBlock

	attr _accept_typing2: Bool
	redef meth accept_typing(v)
	do
		# Typing is deferred, wait accept_typing2(v)
		if _accept_typing2 then super
	end

	private meth accept_typing2(v: TypingVisitor, esc: EscapableClosure) is abstract
end

redef class AClosureDef
	redef meth accept_typing2(v, esc)
	do
		_escapable = esc

		var sig = esc.closure.signature
		if sig.arity != n_id.length then
			v.error(self, "Error: {sig.arity} automatic variable names expected, {n_id.length} found.")
			return
		end

		closure = esc.closure

		var old_var_ctx = v.variable_ctx
		var old_base_var_ctx = v.base_variable_ctx
		v.base_variable_ctx = v.variable_ctx
		v.variable_ctx = v.variable_ctx.sub(self)
		variables = new Array[AutoVariable]
		for i in [0..n_id.length[ do
			var va = new AutoVariable(n_id[i].to_symbol, self)
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
special PExpr
	private meth check_expr_cast(v: TypingVisitor, n_expr: PExpr, n_type: PType)
	do
		if not v.check_expr(n_expr) then return
		var etype = n_expr.stype
		var ttype = n_type.stype
		if etype == ttype then
			v.warning(self, "Warning: Expression is already a {ttype}.")
		else if etype < ttype then
			v.warning(self, "Warning: Expression is already a {ttype} since it is a {etype}.")
		end
	end
end

redef class AIsaExpr
special ATypeCheckExpr
	redef meth after_typing(v)
	do
		check_expr_cast(v, n_expr, n_type)
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
	redef meth after_typing(v)
	do
		check_expr_cast(v, n_expr, n_type)
		_stype = n_type.stype
		_is_typed = _stype != null
	end
end

redef class AAsNotnullExpr
	redef meth after_typing(v)
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
	redef meth after_typing(v)
	do
		if not n_expr.is_typed then return
		_is_typed = true
		if n_expr.is_statement then return
		_stype = n_expr.stype
	end
end

redef class AOnceExpr
	redef meth accept_typing(v)
	do
		if v.once_count > 0 then
			v.warning(self, "Useless once in a once expression.")
		end
		v.once_count = v.once_count + 1

		super

		v.once_count = v.once_count - 1
	end
end

