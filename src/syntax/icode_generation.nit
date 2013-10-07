# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2009 Jean Privat <jean@pryen.org>
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

# Things needed by typing.nit to generate intermediate code from AST
module icode_generation

import icode
import syntax_base
private import typing
private import primitive_info

# An AST2ICode context stores the currently built icode informations
class A2IContext
	super ICodeBuilder
	redef fun stmt(s: ICode)
	do
		if _current_node != null then
			current_location = _current_node.location
		else if visitor.current_node != null then
			current_location = visitor.current_node.location
		end
		super
	end

	# Prepare a new array of length item
	fun add_new_array(stype: MMType, length: Int): IRegister
	do
		var prop = visitor.get_method(stype, once "with_capacity".to_symbol)
		var ni = expr(new IIntValue(length.to_s), visitor.type_int)
		return expr(new INew(stype, prop, [ni]), stype)
	end

	# Add an array add
	fun add_call_array_add(recv, item: IRegister)
	do
		var stype = recv.stype
		var prop = visitor.get_method(stype, once "add".to_symbol)
		stmt(new ICall(prop, [recv, item]))
	end

	# Get the iregister associated with a variable
	# Or assign one if none exists
	fun variable(v: Variable): IRegister
	do
		if _variables.has_key(v) then
			return _variables[v]
		else
			var reg = new_register(v.stype.as(not null))
			_variables[v] = reg
			return reg
		end
	end

	# Current registered variable
	var _variables: HashMap[Variable, IRegister] = new HashMap[Variable, IRegister]

	# Current registered closurevariables
	readable var _closurevariables: HashMap[ClosureVariable, IClosureDecl] = new HashMap[ClosureVariable, IClosureDecl]

	# The current syntax visitor
	readable var _visitor: AbsSyntaxVisitor

	# Where a nit return must branch
	readable writable var _return_seq: nullable ISeq

	# Register where a functionnal nit return must store its value
	readable writable var _return_value: nullable IRegister

	# The method associated to the iroutine (if any)
	readable var _method: nullable MMMethod

	# The register of self (if any)
	var selfreg: nullable IRegister writable

	init(visitor: AbsSyntaxVisitor, r: IRoutine, m: nullable MMMethod)
	do
		super(visitor.mmmodule, r)
		_visitor = visitor
		_return_seq = r.body
		_return_value = r.result
		_method = m
	end

	# Insert implicit super init calls
	fun invoke_super_init_calls_after(start_prop: nullable MMMethod)
	do
		var p = method
		assert p isa MMSrcMethod
		var n = p.node
		assert n isa AConcreteInitPropdef

		if n.super_init_calls.is_empty then return
		var i = 0
		var j = 0
		if start_prop != null then
			while n.super_init_calls[i] != start_prop do
				i += 1
			end
			i += 1

			while n.explicit_super_init_calls[j] != start_prop do
				j += 1
			end
			j += 1
		end
		var stop_prop: nullable MMMethod = null
		if j < n.explicit_super_init_calls.length then
			stop_prop = n.explicit_super_init_calls[j]
		end
		var l = n.super_init_calls.length
		while i < l do
			var sp = n.super_init_calls[i]
			if sp == stop_prop then break
			var cargs = new Array[IRegister]
			if sp.signature.arity == 0 then
				cargs.add(iroutine.params.first)
			else
				for va in iroutine.params do
					cargs.add(va)
				end
			end
			stmt(new ICall(sp, cargs))
			i += 1
		end
	end

	# The current  AExpr
	var _current_node: nullable AExpr = null

	# Generate icode in the current sequence from a statement
	fun generate_stmt(n: nullable AExpr)
	do
		if n == null then return
		var old = _current_node
		_current_node = n
		n.generate_icode(self)
		_current_node = old
	end

	# Generate icode in the current sequence from an expression
	fun generate_expr(n: AExpr): IRegister
	do
		var old = _current_node
		_current_node = n
		var reg = n.generate_icode(self).as(not null)
		_current_node = old
		return reg
	end
end

redef class EscapableBlock
	# Where a nit break must branch
	readable writable var _break_seq: nullable ISeq

	# Where a nit continue must branch
	readable writable var _continue_seq: nullable ISeq

	# Register where a functionnal nit break must store its value
	readable writable var _break_value: nullable IRegister

	# Register where a functionnal nit continue must store its value
	readable writable var _continue_value: nullable IRegister
end

redef class MMSrcModule
	# Generate icode for method bodies
	fun generate_icode(tc: ToolContext)
	do
		var v = new A2IVisitor(tc, self)
		for c in src_local_classes.values do
			for p in c.src_local_properties.values do
				if p isa MMSrcMethod then
					p.generate_iroutine(v)
				else if p isa MMSrcAttribute then
					p.generate_iroutine(v)
				end
			end
		end
	end
end

redef class MMSrcAttribute
	redef readable writable var _iroutine: nullable IRoutine

	# Generate the initialization iroutine
	fun generate_iroutine(visitor: A2IVisitor)
	do
		if node.n_expr != null then
			var iroutine = signature.generate_empty_iroutine
			iroutine.location = node.location
			var v = new A2IContext(visitor, iroutine, null)
			visitor.icode_ctx = v
			visitor.enter_visit(node)
			visitor.icode_ctx = null
			_iroutine = iroutine
		end
	end
end

redef class MMSrcMethod
	redef readable writable var _iroutine: nullable IRoutine

	# Generate the body iroutine
	fun generate_iroutine(visitor: A2IVisitor)
	do
		var iroutine = signature.generate_empty_iroutine
		if node != null then
			iroutine.location = node.location
		end
		var v = new A2IContext(visitor, iroutine, self)
		visitor.icode_ctx = v
		inner_generate_iroutine(v)
		visitor.icode_ctx = null
		_iroutine = iroutine
	end

	# Generate the body iroutine (specific part)
	fun inner_generate_iroutine(v: A2IContext) is abstract
end

redef class MMReadImplementationMethod
	redef fun inner_generate_iroutine(v)
	do
		var e = v.add_attr_read(node.prop, v.iroutine.params.first)
		v.add_return_value(e)
	end
end

redef class MMWriteImplementationMethod
	redef fun inner_generate_iroutine(v)
	do
		var params = v.iroutine.params
		v.stmt(new IAttrWrite(node.prop, params[0], params[1]))
	end
end

redef class MMMethSrcMethod
	redef fun inner_generate_iroutine(v)
	do
		v.visitor.enter_visit(node)
	end
end

redef class MMImplicitInit
	redef fun inner_generate_iroutine(v)
	do
		var params = v.iroutine.params
		var f = params.length - unassigned_attributes.length
		var recv = params.first
		for sp in super_inits do
			assert sp isa MMMethod
			var args_recv = [recv]
			if sp == super_init then
				var args = new Array[IRegister].with_capacity(f)
				args.add(recv)
				for i in [1..f[ do
					args.add(params[i])
				end
				v.stmt(new ICall(sp, args))
			else
				v.stmt(new ICall(sp, args_recv))
			end
		end
		for i in [f..params.length[ do
			var attribute = unassigned_attributes[i-f]
			v.stmt(new IAttrWrite(attribute, recv, params[i]))
		end
	end
end

class A2IVisitor
	super AbsSyntaxVisitor
	writable var _icode_ctx: nullable A2IContext
	fun icode_ctx: A2IContext do return _icode_ctx.as(not null)
	redef fun visit(n) do n.accept_icode_generation(self)
	init(tc, m) do super
end


###############################################################################

redef class ANode
	fun accept_icode_generation(v: A2IVisitor) do accept_abs_syntax_visitor(v) end
end

redef class AAttrPropdef
	redef fun accept_icode_generation(vv)
	do
		var v = vv.icode_ctx
		v.stmt(new IMove(v.variable(self_var), v.iroutine.params.first))
		super
		var ne = n_expr
		if ne != null then
			v.stmt(new IMove(v.iroutine.result.as(not null), v.generate_expr(ne)))
		end
	end
end

redef class AMethPropdef
	redef fun accept_icode_generation(vv)
	do
		super
		fill_iroutine(vv.icode_ctx, method)
	end

	# Compile the method body common preambule (before specific body stuff if any)
	fun fill_iroutine(v: A2IContext, method: MMSrcMethod) is abstract
end

redef class ASignature
	fun fill_iroutine_parameters(v: A2IContext, orig_sig: MMSignature, params: Sequence[IRegister], closdecls: nullable Sequence[IClosureDecl])
	do
		for ap in n_params do
			var reg = v.variable(ap.variable)
			var orig_type = orig_sig[ap.position]
			var apst = ap.variable.stype.as(not null)
			if not orig_type < apst then
				v.add_type_cast(params[ap.position], apst)
			end
			v.stmt(new IMove(reg, params[ap.position]))
		end
		for i in [0..n_closure_decls.length[ do
			var wd = n_closure_decls[i]
			v.closurevariables[wd.variable] = closdecls[i]
		end
	end
end

redef class AClosureDecl
	redef fun accept_icode_generation(vv)
	do
		var v = vv.icode_ctx
		var iclos = variable.closure.signature.generate_empty_iclosuredef(v)
		var old_seq = v.seq
		v.seq = iclos.body
		escapable.continue_seq = iclos.body
		escapable.continue_value = iclos.result
		escapable.break_seq = v.return_seq
		escapable.break_value = v.return_value
		n_signature.fill_iroutine_parameters(v, variable.closure.signature, iclos.params, null)

		if n_expr != null then
			v.generate_stmt(n_expr)
			v.iroutine.closure_decls[position].default = iclos

			# Add a final break in case of break block witout value
			if variable.closure.is_break and v.return_value == null then
				v.add_escape(v.return_seq.as(not null))
			end
		end
		v.seq = old_seq
	end
end

redef class AConcreteMethPropdef
	redef fun fill_iroutine(v, method)
	do
		var params = v.iroutine.params.to_a
		var selfreg = v.variable(self_var)
		v.stmt(new IMove(selfreg, params[0]))
		v.selfreg = selfreg
		params.shift

		var orig_meth: MMLocalProperty = method.global.intro
		var orig_sig = orig_meth.signature_for(method.signature.recv)
		if n_signature != null then
			n_signature.fill_iroutine_parameters(v, orig_sig, params, v.iroutine.closure_decls)
		end

		if self isa AConcreteInitPropdef then
			v.invoke_super_init_calls_after(null)
		end

		if n_block != null then
			v.generate_stmt(n_block)
		end
		v.selfreg = null
	end
end

redef class AExternPropdef
	redef fun fill_iroutine(v, method)
	do
		# add all explicit extern calls for this extern method
		for explicit_import in method.as(MMMethSrcMethod).explicit_imports
		do
			var prop = explicit_import.method
			var ic : IAbsCall
			if prop.is_init then
				ic = new INew(prop.signature.recv, prop, new List[IRegister])
			else
				ic = new ICall(prop, new List[IRegister])
			end
			ic.is_explicit_from_extern = true
			v.stmt(ic)
		end
	end
end

redef class AExternInitPropdef
	redef fun fill_iroutine(v, method)
	do
		var params = v.iroutine.params
		var sig = method.signature
		assert params.length == sig.arity + 1
		var rtype = sig.recv # sig.return_type
		v.add_assignment(new IRegister(rtype), v.expr(new INative(method, params), rtype))

		super
	end
end

redef class ADeferredMethPropdef
	redef fun fill_iroutine(v, method)
	do
		v.add_abort("Deferred method called")
	end
end

redef class AExternMethPropdef
	redef fun fill_iroutine(v, method)
	do
		var params = v.iroutine.params
		var rtype = method.signature.return_type
		if rtype != null then
			v.add_return_value(v.expr(new INative(method, params), rtype))
		else
			v.stmt(new INative(method, params))
		end

		super
	end
end

redef class AInternMethPropdef
	redef fun fill_iroutine(v, method)
	do
		var params = v.iroutine.params
		var rtype = method.signature.return_type
		if rtype != null then
			v.add_return_value(v.expr(new INative(method, params), rtype))
		else
			v.stmt(new INative(method, params))
		end
	end
end

###############################################################################

redef class AExpr
	redef fun accept_icode_generation(v) do end

	# Generate icode sequence in the current A2IContext
	# This method should not be called direclty: use generate_expr and generate_stmt from A2IContext instead
	protected fun generate_icode(v: A2IContext): nullable IRegister is abstract
end

redef class AVardeclExpr
	redef fun generate_icode(v)
	do
		var reg = v.variable(variable)
		var ne = n_expr
		if ne != null then
			v.add_assignment(reg, v.generate_expr(ne))
		end
		return null
	end
end

redef class ABlockExpr
	redef fun generate_icode(v)
	do
		for ne in n_expr do v.generate_stmt(ne)
		return null
	end
end

redef class ADoExpr
	redef fun generate_icode(v)
	do
		var seq_old = v.seq
		var seq = new ISeq
		v.stmt(seq)
		escapable.break_seq = seq
		v.seq = seq

		v.generate_stmt(n_block)

		v.seq = seq_old
		return null
	end
end

redef class AReturnExpr
	redef fun generate_icode(v)
	do
		var ne = n_expr
		if ne != null then
			v.add_assignment(v.return_value.as(not null), v.generate_expr(ne))
		end
		v.add_escape(v.return_seq.as(not null))
		return null
	end
end

redef class ABreakExpr
	redef fun generate_icode(v)
	do
		var ne = n_expr
		if ne != null then
			v.add_assignment(escapable.break_value.as(not null), v.generate_expr(ne))
		end
		v.add_escape(escapable.break_seq.as(not null))
		return null
	end
end

redef class AContinueExpr
	redef fun generate_icode(v)
	do
		var ne = n_expr
		if ne != null then
			v.add_assignment(escapable.continue_value.as(not null), v.generate_expr(ne))
		end
		v.add_escape(escapable.continue_seq.as(not null))
		return null
	end
end

redef class AAbortExpr
	redef fun generate_icode(v)
	do
		v.add_abort("Aborted")
		return null
	end
end

redef class AIfExpr
	redef fun generate_icode(v)
	do
		var iif = new IIf(v.generate_expr(n_expr))
		v.stmt(iif)
		var seq_old = v.seq

		if n_then != null then
			v.seq = iif.then_seq
			v.generate_stmt(n_then)
		end

		if n_else != null then
			v.seq = iif.else_seq
			v.generate_stmt(n_else)
		end

		v.seq = seq_old
		return null
	end
end

redef class AWhileExpr
	redef fun generate_icode(v)
	do
		var seq_old = v.seq
		var iloop = new ILoop
		v.stmt(iloop)
		escapable.break_seq = iloop
		v.seq = iloop

		# Process condition
		var iif = new IIf(v.generate_expr(n_expr))
		v.stmt(iif)

		# Process inside (condition is true)
		if n_block != null then
			v.seq = iif.then_seq
			escapable.continue_seq = iif.then_seq
			v.generate_stmt(n_block)
		end

		# Process escape (condition is false)
		v.seq = iif.else_seq
		v.add_escape(iloop)

		v.seq = seq_old
		return null
	end
end

redef class ALoopExpr
	redef fun generate_icode(v)
	do
		var seq_old = v.seq
		var iloop = new ILoop
		v.stmt(iloop)
		escapable.break_seq = iloop
		v.seq = iloop

		# Process inside
		if n_block != null then
			var seq = new ISeq
			v.stmt(seq)
			v.seq = seq
			escapable.continue_seq = seq
			v.generate_stmt(n_block)
		end

		v.seq = seq_old
		return null
	end
end

redef class AForExpr
	redef fun generate_icode(v)
	do
		var ne = n_expr
		var expr_type = ne.stype
		var tint = v.visitor.type_int
		var meth # The method that call the closure
		var args # The arguments of meth

		if ne isa ARangeExpr and expr_type == v.visitor.type_range(tint) then
			# Shortcut. No Range[Int] object allocated.
			# 'for x in [y..z] do' become 'y.enumerate_to(z) !each(x) do'
			# 'for x in [y..z[ do' become 'y.enumerate_before(z) !each(x) do'
			# And both methods may be inlined
			args = [v.generate_expr(ne.n_expr), v.generate_expr(ne.n_expr2)]
			if ne isa ACrangeExpr then
				meth = v.visitor.get_method(tint, once "enumerate_to".to_symbol)
			else
				assert ne isa AOrangeExpr
				meth = v.visitor.get_method(tint, once "enumerate_before".to_symbol)
			end
		else
			# Standard way.
			# 'for x in e do' become 'e.iterate !each(x) do'
			# Some iterate methods may be inlined (eg. the Array one)
			meth = v.visitor.get_method(expr_type, once "iterate".to_symbol)
			args = [v.generate_expr(n_expr)]
		end

		# Build closure
		var iclos = meth.signature.closures.first.signature.generate_empty_iclosuredef(v)
		var old_seq = v.seq

		var seq = new ISeq
		v.stmt(seq)
		v.seq = seq
		escapable.break_seq = seq
		escapable.break_value = null

		v.seq = iclos.body
		escapable.continue_seq = iclos.body
		escapable.continue_value = null
		for i in [0..variables.length[ do
			v.stmt(new IMove(v.variable(variables[i]), iclos.params[i]))
		end
		v.generate_stmt(n_block)

		# Call closure
		v.seq = seq
		v.add_call(meth, args, [iclos])

		v.seq = old_seq
		return null
	end
end

redef class AAssertExpr
	redef fun generate_icode(v)
	do
		var e = v.generate_expr(n_expr)
		var iif = new IIf(e)
		v.stmt(iif)
		var seq_old = v.seq
		v.seq = iif.else_seq
		v.generate_stmt(n_else)
		var id = n_id
		if id == null then
			v.add_abort("Assert failed")
		else
			v.add_abort("Assert '%s' failed", id.text.to_s)
		end
		v.seq = seq_old
		return null
	end
end

redef class AVarExpr
	redef fun generate_icode(v)
	do
		return v.variable(variable)
	end
end

redef class AVarAssignExpr
	redef fun generate_icode(v)
	do
		var e = v.generate_expr(n_value)
		v.add_assignment(v.variable(variable), e)
		return null
	end
end

redef class AVarReassignExpr
	redef fun generate_icode(v)
	do
		var e1 = v.variable(variable)
		var e2 = v.generate_expr(n_value)
		var e3 = v.expr(new ICall(assign_method, [e1, e2]), assign_method.signature.return_type.as(not null))
		v.add_assignment(e1, e3)
		return null
	end
end

redef class ASelfExpr
	redef fun generate_icode(v)
	do
		return v.variable(variable)
	end
end

redef class AIfexprExpr
	redef fun generate_icode(v)
	do
		# Process condition
		var iif = new IIf(v.generate_expr(n_expr))
		v.stmt(iif)
		var seq_old = v.seq

		# Prepare result
		var reg = v.new_register(stype)

		# Process 'then'
		v.seq = iif.then_seq
		v.add_assignment(reg, v.generate_expr(n_then))

		# Process 'else'
		v.seq = iif.else_seq
		v.add_assignment(reg, v.generate_expr(n_else))

		v.seq = seq_old
		return reg
	end
end

redef class AEeExpr
	redef fun generate_icode(v)
	do
		var e = v.generate_expr(n_expr)
		var e2 = v.generate_expr(n_expr2)
		return v.expr(new IIs(e, e2), stype)
	end
end

redef class AOrExpr
	redef fun generate_icode(v)
	do
		# Prepare result
		var reg = v.new_register(stype)

		# Process left operand (in a if/then)
		var iif = new IIf(v.generate_expr(n_expr))
		v.stmt(iif)
		var seq_old = v.seq
		v.seq = iif.then_seq
		v.add_assignment(reg, v.lit_true_reg)

		# Process right operand (in the else)
		v.seq = iif.else_seq
		v.add_assignment(reg, v.generate_expr(n_expr2))

		v.seq = seq_old
		return reg
	end
end

redef class AImpliesExpr
	redef fun generate_icode(v)
	do
		# Prepare result
		var reg = v.new_register(stype)

		# Process left operand (in a if/then)
		var iif = new IIf(v.generate_expr(n_expr))
		v.stmt(iif)
		var seq_old = v.seq
		v.seq = iif.else_seq
		v.add_assignment(reg, v.lit_true_reg)

		# Process right operand (in the else)
		v.seq = iif.then_seq
		v.add_assignment(reg, v.generate_expr(n_expr2))

		v.seq = seq_old
		return reg
	end
end

redef class AAndExpr
	redef fun generate_icode(v)
	do
		# Prepare result
		var reg = v.new_register(stype)

		# Process left operand (in a if/else)
		var iif = new IIf(v.generate_expr(n_expr))
		v.stmt(iif)
		var seq_old = v.seq
		v.seq = iif.else_seq
		v.add_assignment(reg, v.lit_false_reg)

		# Process right operand (in the then)
		v.seq = iif.then_seq
		v.add_assignment(reg, v.generate_expr(n_expr2))

		v.seq = seq_old
		return reg
	end
end

redef class ANotExpr
	redef fun generate_icode(v)
	do
		var e = v.generate_expr(n_expr)
		return v.expr(new INot(e), stype)
	end
end

redef class AOrElseExpr
	redef fun generate_icode(v)
	do
		# Compute left operand
		var e = v.generate_expr(n_expr)

		# Prepare result
		var reg = v.new_register(stype)

		# Compare left and null
		var n = v.lit_null_reg
		var c = v.expr(new IIs(e, n), v.mmmodule.type_bool)
		var iif = new IIf(c)
		v.stmt(iif)
		var old_seq = v.seq

		# if equal, result = right opr
		v.seq = iif.then_seq
		v.add_assignment(reg, v.generate_expr(n_expr2))

		# else, result = left operand
		v.seq = iif.else_seq
		v.add_assignment(reg, e)

		v.seq = old_seq

		return reg
	end
end

redef class AIsaExpr
	redef fun generate_icode(v)
	do
		var e = v.generate_expr(n_expr)
		return v.expr(new ITypeCheck(v.selfreg.as(not null), e, n_type.stype), stype)
	end
end

redef class AAsCastExpr
	redef fun generate_icode(v)
	do
		var e = v.generate_expr(n_expr)
		v.add_type_cast(e, stype)
		return e
	end
end

redef class AAsNotnullExpr
	redef fun generate_icode(v)
	do
		var e = v.generate_expr(n_expr)
		v.add_type_cast(e, stype)
		return e
	end
end

redef class ATrueExpr
	redef fun generate_icode(v)
	do
		return v.lit_true_reg
	end
end

redef class AFalseExpr
	redef fun generate_icode(v)
	do
		return v.lit_false_reg
	end
end

redef class AIntExpr
	redef fun generate_icode(v)
	do
		return v.expr(new IIntValue(n_number.text), stype)
	end
end

redef class AFloatExpr
	redef fun generate_icode(v)
	do
		return v.expr(new IFloatValue(n_float.text), stype)
	end
end

redef class ACharExpr
	redef fun generate_icode(v)
	do
		return v.expr(new ICharValue(n_char.text), stype)
	end
end

redef class AStringFormExpr
	redef fun generate_icode(v)
	do
		compute_string_infos
		var old_seq = v.seq
		var ionce = new IOnce
		var reg = v.expr(ionce, stype)
		v.seq = ionce.body
		var native_type = v.visitor.type_nativestring
		var ns = v.expr(new IStringValue(_cstring.as(not null)), native_type)
		var ni = v.expr(new IIntValue(_cstring_length.to_s), v.visitor.type_int)
		var prop = v.visitor.get_method(native_type, once "to_s_with_length".to_symbol)
		var e = v.expr(new ICall(prop, [ns, ni]), stype)
		v.add_assignment(reg, e)
		v.seq = old_seq
		return reg
	end

	# The raw string value
	protected fun string_text: String is abstract

	# The string in a C native format
	protected var _cstring: nullable String

	# The string length in bytes
	protected var _cstring_length: nullable Int

	# Compute _cstring and _cstring_length using string_text
	protected fun compute_string_infos
	do
		var str = n_string.text
		if str.length >= 6 and str.chars[0] == str.chars[1] then
			str = str.substring(3, str.length - 6)
		else
			str = str.substring(1, str.length - 2)
		end
		var res = new Buffer
		var len = 0
		var i = 0
		while i < str.length do
			var c = str.chars[i]
			if c == '\\' then
				i = i + 1
				var c2 = str.chars[i]
				if c2 != '{' and c2 != '}' then
					res.add(c)
				end
				c = c2
			else if c == '"' then
				res.add('\\')
			else if c == '\n' then
				res.add('\\')
				c = 'n'
			end
			len = len + 1
			res.add(c)
			i = i + 1
		end
		_cstring = res.to_s
		_cstring_length = len
	end
end

redef class AStringExpr
	redef fun string_text do return n_string.text.substring(1, n_string.text.length - 2)
end
redef class AStartStringExpr
	redef fun string_text do return n_string.text.substring(1, n_string.text.length - 2)
end
redef class AMidStringExpr
	redef fun string_text do return n_string.text.substring(1, n_string.text.length - 2)
end
redef class AEndStringExpr
	redef fun string_text do return n_string.text.substring(1, n_string.text.length - 2)
end

redef class ASuperstringExpr
	redef fun generate_icode(v)
	do
		var array = v.add_new_array(atype, n_exprs.length)
		var prop_to_s = v.visitor.get_method(v.visitor.type_object, once "to_s".to_symbol)
		for ne in n_exprs do
			var e = v.generate_expr(ne)
			if ne.stype != stype then
				e = v.expr(new ICall(prop_to_s, [e]), stype)
			end
			v.add_call_array_add(array, e)
		end
		return v.expr(new ICall(prop_to_s, [array]), stype)
	end
end

redef class ANullExpr
	redef fun generate_icode(v)
	do
		return v.lit_null_reg
	end
end

redef class AArrayExpr
	redef fun generate_icode(v)
	do
		var nes = n_exprs.n_exprs
		var recv = v.add_new_array(stype, nes.length)
		for ne in nes do
			var e = v.generate_expr(ne)
			v.add_call_array_add(recv, e)
		end
		return recv
	end
end

redef class ACrangeExpr
	redef fun generate_icode(v)
	do
		var e = v.generate_expr(n_expr)
		var e2 = v.generate_expr(n_expr2)
		var prop = v.visitor.get_method(stype, once "init".to_symbol)
		return v.expr(new INew(stype, prop, [e, e2]), stype)
	end
end

redef class AOrangeExpr
	redef fun generate_icode(v)
	do
		var e = v.generate_expr(n_expr)
		var e2 = v.generate_expr(n_expr2)
		var prop = v.visitor.get_method(stype, once "without_last".to_symbol)
		return v.expr(new INew(stype, prop, [e, e2]), stype)
	end
end

redef class ASuperExpr
	redef fun generate_icode(v)
	do
		var arity = v.iroutine.params.length - 1
		if init_in_superclass != null then
			arity = init_in_superclass.signature.arity
		end
		var args = new Array[IRegister].with_capacity(arity + 1)
		args.add(v.iroutine.params[0])
		var nas = n_args.n_exprs
		if nas.length != arity then
			for i in [0..arity[ do
				args.add(v.iroutine.params[i + 1])
			end
		else
			for na in nas do
				args.add(v.generate_expr(na))
			end
		end
		var p = init_in_superclass
		if p != null then
			var rtype = p.signature.return_type
			if rtype != null then
				return v.expr(new ICall(p, args), rtype)
			else
				v.stmt(new ICall(p, args))
				return null
			end
		else
			p = prop
			var rtype = p.signature.return_type
			if rtype == null then
				v.stmt(new ISuper(p, args))
				return null
			else
				return v.expr(new ISuper(p, args), rtype)
			end
		end
	end
end

redef class AAttrExpr
	redef fun generate_icode(v)
	do
		var e = v.generate_expr(n_expr)
		if n_expr.stype.is_nullable then v.add_null_reciever_check(e)
		return v.add_attr_read(prop, e)
	end
end

redef class AAttrAssignExpr
	redef fun generate_icode(v)
	do
		var e = v.generate_expr(n_expr)
		if n_expr.stype.is_nullable then v.add_null_reciever_check(e)
		var e2 = v.generate_expr(n_value)
		v.stmt(new IAttrWrite(prop, e, e2))
		return null
	end
end
redef class AAttrReassignExpr
	redef fun generate_icode(v)
	do
		var e1 = v.generate_expr(n_expr)
		if n_expr.stype.is_nullable then v.add_null_reciever_check(e1)
		var e2 = v.expr(new IAttrRead(prop, e1), attr_type)
		var e3 = v.generate_expr(n_value)
		var e4 = v.expr(new ICall(assign_method, [e2, e3]), attr_type)
		v.stmt(new IAttrWrite(prop, e1, e4))
		return null
	end
end

redef class AIssetAttrExpr
	redef fun generate_icode(v)
	do
		var e = v.generate_expr(n_expr)
		if n_expr.stype.is_nullable then v.add_null_reciever_check(e)
		return v.expr(new IAttrIsset(prop, e), stype)
	end
end

redef class AAbsAbsSendExpr
	# Compile each argument and add them to the array
	fun generate_icode_for_arguments_in(v: A2IContext, args: Array[IRegister], signature: MMSignature)
	do
		var par_arity = signature.arity
		var par_vararg = signature.vararg_rank
		var raw_args = raw_arguments
		var raw_arity = raw_args.length
		var arg_idx = 0
		for par_idx in [0..par_arity[ do
			var a: AExpr
			var par_type = signature[par_idx]
			if par_idx == par_vararg then
				var arr = v.add_new_array(v.visitor.type_array(par_type), raw_arity-par_arity)
				for i in [0..(raw_arity-par_arity)] do
					a = raw_args[arg_idx]
					v.add_call_array_add(arr, v.generate_expr(a))
					arg_idx = arg_idx + 1
				end
				args.add(arr)
			else
				a = raw_args[arg_idx]
				args.add(v.generate_expr(a))
				arg_idx = arg_idx + 1
			end
		end
	end
end

redef class ASendExpr
	redef fun generate_icode(v)
	do
		var recv = v.generate_expr(n_expr)
		var args = new Array[IRegister]
		args.add(recv)
		var prop = prop
		generate_icode_for_arguments_in(v, args, prop.signature.as(not null))
		var r: nullable IRegister = null # The full result of the send (raw call + breaks)
		var r2: nullable IRegister # The raw result of the call

		# Prepare closures
		var seq_old = v.seq
		var closcns: nullable Array[nullable IClosureDef] = null
		if not prop_signature.closures.is_empty then
			var rtype = prop_signature.return_type
			if rtype != null then
				r = v.new_register(rtype)
			end
			var seq = new ISeq
			v.stmt(seq)
			v.seq = seq
			closcns = new Array[nullable IClosureDef]
			var cdarity = 0
			if closure_defs != null then cdarity = closure_defs.length
			var closure_defs = closure_defs
			for mmc in prop_signature.closures do
				var found = false
				var name = mmc.name
				if closure_defs != null then
					for cd in closure_defs do
						if cd.n_id.to_symbol != name then continue
						assert found == false
						found = true
						cd.escapable.break_seq = seq
						cd.escapable.break_value = r
						var cn = cd.generate_iclosuredef(v)
						closcns.add(cn)
					end
				end
				if not found then
					closcns.add(null)
				end
			end
		end

		r2 = v.add_call(prop, args, closcns)

		# Closure work
		if not prop_signature.closures.is_empty then
			if r != null and r2 != null then v.add_assignment(r, r2)
			v.seq = seq_old
		else
			r = r2
		end

		if prop.global.is_init then
			v.invoke_super_init_calls_after(prop)
		end
		return r
	end
end

redef class ASendReassignExpr
	redef fun generate_icode(v)
	do
		var recv = v.generate_expr(n_expr)
		if n_expr.stype.is_nullable then v.add_null_reciever_check(recv)
		var args = new Array[IRegister]
		args.add(recv)
		generate_icode_for_arguments_in(v, args, read_prop.signature.as(not null))

		var e2 = v.expr(new ICall(read_prop, args), read_prop.signature.return_type.as(not null))
		var e3 = v.generate_expr(n_value)
		var e4 = v.expr(new ICall(assign_method, [e2, e3]), assign_method.signature.return_type.as(not null))
		var args2 = args.to_a
		args2.add(e4)
		v.stmt(new ICall(prop, args2))
		return null
	end
end

redef class ANewExpr
	redef fun generate_icode(v)
	do
		var args = new Array[IRegister]
		generate_icode_for_arguments_in(v, args, prop.signature.as(not null))
		return v.expr(new INew(stype, prop, args), stype)
	end
end

redef class AProxyExpr
	redef fun generate_icode(v)
	do
		return v.generate_expr(n_expr)
	end
end

redef class AOnceExpr
	redef fun generate_icode(v)
	do
		var ionce = new IOnce
		var reg = v.expr(ionce, stype)
		var old_seq = v.seq
		v.seq = ionce.body

		var e = v.generate_expr(n_expr)
		v.add_assignment(reg, e)

		v.seq = old_seq
		return reg
	end
end


redef class AClosureDef
	var _iclosure_def: nullable IClosureDef

	fun generate_iclosuredef(v: A2IContext): IClosureDef
	do
		# Prepare signature
		var args = new Array[IRegister]
		var sig = closure.signature
		for i in [0..sig.arity[ do
			args.add(v.new_register(sig[i]))
		end
		var ret: nullable IRegister = null
		var rtype = sig.return_type
		if rtype != null then
			ret = v.new_register(rtype)
		end

		var iclos = new IClosureDef(args, ret)
		iclos.location = location

		# Prepare env
		var seq_old = v.seq
		v.seq = iclos.body
		escapable.continue_seq = iclos.body
		escapable.continue_value = iclos.result

		# Assign parameters
		for i in [0..variables.length[ do
			var res = v.variable(variables[i])
			v.add_assignment(res, iclos.params[i])
		end

		v.generate_stmt(n_expr)

		# Add a final break in case of break block witout value
		if closure.is_break and escapable.break_value == null then
			v.add_escape(escapable.break_seq.as(not null))
		end

		v.seq = seq_old
		_iclosure_def = iclos
		return iclos
	end
end

redef class AClosureCallExpr
	redef fun generate_icode(v)
	do
		# Geneate arguments
		var args = new Array[IRegister]
		generate_icode_for_arguments_in(v, args, variable.closure.signature)

		# Prepare icall
		var closdecl = v.closurevariables[variable]
		var icall = new IClosCall(closdecl, args)
		var seq_old = v.seq

		# Fill break of ical
		if n_closure_defs.length == 1 then do
			var iseq = new ISeq
			icall.break_seq = iseq
			v.seq = iseq
			v.generate_stmt(n_closure_defs.first.n_expr)
			v.seq = seq_old
		end

		# Prepare in case of default block
		var iif: nullable IIf = null # The iif of default block
		var closdecl_default = closdecl.default # The default (if any)
		if closdecl_default != null then
			iif = new IIf(v.expr(new IHasClos(closdecl), v.visitor.type_bool))
			v.stmt(iif)
			v.seq = iif.then_seq
		end

		# Add the icall
		var r2: nullable IRegister = null # the result of the icall
		var rtype = variable.closure.signature.return_type
		if rtype == null then
			v.stmt(icall)
		else
			r2 = v.expr(icall, rtype)
		end

		# Process the case of default block
		var r: nullable IRegister = null # the real result
		if closdecl_default != null then
			assert iif != null
			if r2 != null then
				assert rtype != null
				r = v.new_register(rtype)
				v.add_assignment(r, r2)
			end
			v.seq = iif.else_seq
			var r3 = v.inline_routine(closdecl_default, args, null)
			if r != null then
				assert r3 != null
				v.add_assignment(r, r3)
			end
			v.seq = seq_old
		else
			r = r2
		end
		return r
	end
end

redef class ADebugTypeExpr
	redef fun generate_icode(v)
	do
		# Do nothing.
		return null
	end
end
