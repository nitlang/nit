# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012 Jean Privat <jean@pryen.org>
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

# Intraprocedural resolution of static types and OO-services
# By OO-services we mean message sending, attribute access, instantiation, etc.
module typing

import flow
import modelize_property
import phase
import local_var_init

redef class ToolContext
	var typing_phase: Phase = new TypingPhase(self, [flow_phase, modelize_property_phase, local_var_init_phase])
end

private class TypingPhase
	super Phase
	redef fun process_npropdef(npropdef) do npropdef.do_typing(toolcontext.modelbuilder)
end

private class TypeVisitor
	var modelbuilder:  ModelBuilder
	var nclassdef: AClassdef
	var mpropdef: MPropDef

	var selfvariable: Variable = new Variable("self")

	init(modelbuilder: ModelBuilder, nclassdef: AClassdef, mpropdef: MPropDef)
	do
		self.modelbuilder = modelbuilder
		self.nclassdef = nclassdef
		self.mpropdef = mpropdef

		var mclass = nclassdef.mclassdef.mclass

		var selfvariable = new Variable("self")
		self.selfvariable = selfvariable
		selfvariable.declared_type = mclass.mclass_type
	end

	fun mmodule: MModule do return self.nclassdef.mclassdef.mmodule

	fun anchor: MClassType do return self.nclassdef.mclassdef.bound_mtype

	fun anchor_to(mtype: MType): MType
	do
		var mmodule = self.nclassdef.mclassdef.mmodule
		var anchor = self.nclassdef.mclassdef.bound_mtype
		return mtype.anchor_to(mmodule, anchor)
	end

	fun is_subtype(sub, sup: MType): Bool
	do
		var mmodule = self.nclassdef.mclassdef.mmodule
		var anchor = self.nclassdef.mclassdef.bound_mtype
		return sub.is_subtype(mmodule, anchor, sup)
	end

	fun resolve_for(mtype, subtype: MType, for_self: Bool): MType
	do
		var mmodule = self.nclassdef.mclassdef.mmodule
		var anchor = self.nclassdef.mclassdef.bound_mtype
		#print "resolve_for {mtype} sub={subtype} forself={for_self} mmodule={mmodule} anchor={anchor}"
		var res = mtype.resolve_for(subtype, anchor, mmodule, not for_self)
		return res
	end

	# Retrieve the signature of a MMethodDef resolved for a specific call.
	# This method is an helper to symplify the query on the model.
	#
	# Note: `for_self` indicates if the reciever is self or not.
	# If yes, virtual types are not resolved.
	fun resolve_signature_for(mmethoddef: MMethodDef, recv: MType, for_self: Bool): MSignature
	do
		return self.resolve_for(mmethoddef.msignature.as(not null), recv, for_self).as(MSignature)
	end

	# Check that `sub` is a subtype of `sup`.
	# If `sub` is not a valud suptype, then display an error on `node` an return null.
	# If `sub` is a safe subtype of `sup` then return `sub`.
	# If `sun` is an insafe subtype (ie an imlicit cast is required), then return `sup`.
	#
	# The point of the return type is to determinate the usable type on an expression:
	# If the suptype is safe, then the return type is the one on the expression typed by `sub`.
	# Is the subtype is unsafe, then the return type is the one of an implicit cast on `sup`.
	fun check_subtype(node: ANode, sub, sup: MType): nullable MType
	do
		if self.is_subtype(sub, sup) then return sub
		if self.is_subtype(sub, self.anchor_to(sup)) then
			# FIXME workarround to the current unsafe typing policy. To remove once fixed virtual types exists.
			#node.debug("Unsafe typing: expected {sup}, got {sub}")
			return sup
		end
		self.modelbuilder.error(node, "Type error: expected {sup}, got {sub}")
		return null
	end

	# Visit an expression and do not care about the return value
	fun visit_stmt(nexpr: nullable AExpr)
	do
		if nexpr == null then return
		nexpr.accept_typing(self)
	end

	# Visit an expression and expects that it is not a statement
	# Return the type of the expression
	# Display an error and return null if:
	#  * the type cannot be determined or
	#  * `nexpr' is a statement
	fun visit_expr(nexpr: AExpr): nullable MType
	do
		nexpr.accept_typing(self)
		var mtype = nexpr.mtype
		if mtype != null then return mtype
		if not nexpr.is_typed then
			if not self.modelbuilder.toolcontext.error_count > 0 then # check that there is really an error
				if self.modelbuilder.toolcontext.verbose_level > 1 then
					nexpr.debug("No return type but no error.")
				end
			end
			return null # forward error
		end
		self.error(nexpr, "Type error: expected expression.")
		return null
	end

	# Visit an expression and expect its static type is a least a `sup'
	# Return the type of the expression
	#  * the type cannot be determined or
	#  * `nexpr' is a statement
	#  * `nexpt' is not a `sup'
	fun visit_expr_subtype(nexpr: AExpr, sup: nullable MType): nullable MType
	do
		var sub = visit_expr(nexpr)
		if sub == null then return null # Forward error

		if sup == null then return null # Forward error

		var res = check_subtype(nexpr, sub, sup)
		if res != sub then
			nexpr.implicit_cast_to = res
		end
		return res
	end

	# Visit an expression and expect its static type is a bool
	# Return the type of the expression
	#  * the type cannot be determined or
	#  * `nexpr' is a statement
	#  * `nexpt' is not a `sup'
	fun visit_expr_bool(nexpr: AExpr): nullable MType
	do
		return self.visit_expr_subtype(nexpr, self.type_bool(nexpr))
	end


	private fun visit_expr_cast(node: ANode, nexpr: AExpr, ntype: AType): nullable MType
	do
		var sub = visit_expr(nexpr)
		if sub == null then return null # Forward error

		var sup = self.resolve_mtype(ntype)
		if sup == null then return null # Forward error

		var mmodule = self.nclassdef.mclassdef.mmodule
		var anchor = self.nclassdef.mclassdef.bound_mtype
		if sup == sub then
			self.modelbuilder.warning(node, "Warning: Expression is already a {sup}.")
		else if self.is_subtype(sub, sup) and not sup.need_anchor then
			self.modelbuilder.warning(node, "Warning: Expression is already a {sup} since it is a {sub}.")
		end
		return sup
	end

	fun try_get_mproperty_by_name2(anode: ANode, mtype: MType, name: String): nullable MProperty
	do
		return self.modelbuilder.try_get_mproperty_by_name2(anode, self.nclassdef.mclassdef.mmodule, mtype, name)
	end

	fun resolve_mtype(node: AType): nullable MType
	do
		return self.modelbuilder.resolve_mtype(self.nclassdef, node)
	end

	fun try_get_mclass(node: ANode, name: String): nullable MClass
	do
		var mmodule = self.nclassdef.mclassdef.mmodule
		var mclass = modelbuilder.try_get_mclass_by_name(node, mmodule, name)
		return mclass
	end

	fun get_mclass(node: ANode, name: String): nullable MClass
	do
		var mmodule = self.nclassdef.mclassdef.mmodule
		var mclass = modelbuilder.try_get_mclass_by_name(node, mmodule, name)
		if mclass == null then
			self.modelbuilder.error(node, "Type Error: missing primitive class `{name}'.")
		end
		return mclass
	end

	fun type_bool(node: ANode): nullable MType
	do
		var mclass = self.get_mclass(node, "Bool")
		if mclass == null then return null
		return mclass.mclass_type
	end

	fun get_method(node: ANode, recvtype: MType, name: String, recv_is_self: Bool): nullable CallSite
	do
		var unsafe_type = self.anchor_to(recvtype)

		#debug("recv: {recvtype} (aka {unsafe_type})")
		if recvtype isa MNullType then
			self.error(node, "Error: Method '{name}' call on 'null'.")
			return null
		end

		var mproperty = self.try_get_mproperty_by_name2(node, unsafe_type, name)
		if mproperty == null then
			#self.modelbuilder.error(node, "Type error: property {name} not found in {unsafe_type} (ie {recvtype})")
			if recv_is_self then
				self.modelbuilder.error(node, "Error: Method or variable '{name}' unknown in {recvtype}.")
			else
				self.modelbuilder.error(node, "Error: Method '{name}' doesn't exists in {recvtype}.")
			end
			return null
		end

		assert mproperty isa MMethod
		if mproperty.visibility == protected_visibility and not recv_is_self and self.mmodule.visibility_for(mproperty.intro_mclassdef.mmodule) < intrude_visibility then
			self.modelbuilder.error(node, "Error: Method '{name}' is protected and can only acceded by self. {mproperty.intro_mclassdef.mmodule.visibility_for(self.mmodule)}")
			return null
		end

		var propdefs = mproperty.lookup_definitions(self.mmodule, unsafe_type)
		var mpropdef
		if propdefs.length == 0 then
			self.modelbuilder.error(node, "Type error: no definition found for property {name} in {unsafe_type}")
			return null
		else if propdefs.length == 1 then
			mpropdef = propdefs.first
		else
			self.modelbuilder.warning(node, "Warning: confliting property definitions for property {name} in {unsafe_type}: {propdefs.join(" ")}")
			mpropdef = mproperty.intro
		end


		var msignature = self.resolve_signature_for(mpropdef, recvtype, recv_is_self)

		var erasure_cast = false
		var rettype = mpropdef.msignature.return_mtype
		if not recv_is_self and rettype != null then
			if rettype isa MNullableType then rettype = rettype.mtype
			if rettype isa MParameterType then
				var erased_rettype = msignature.return_mtype
				assert erased_rettype != null
				#node.debug("Erasure cast: Really a {rettype} but unsafely a {erased_rettype}")
				erasure_cast = true
			end
		end

		var callsite = new CallSite(node, recvtype, recv_is_self, mproperty, mpropdef, msignature, erasure_cast)
		return callsite
	end

	# Visit the expressions of args and cheik their conformity with the corresponding typi in signature
	# The point of this method is to handle varargs correctly
	# Note: The signature must be correctly adapted
	fun check_signature(node: ANode, args: Array[AExpr], name: String, msignature: MSignature): Bool
	do
		var vararg_rank = msignature.vararg_rank
		if vararg_rank >= 0 then
			if args.length < msignature.arity then
				#self.modelbuilder.error(node, "Error: Incorrect number of parameters. Got {args.length}, expected at least {msignature.arity}. Signature is {msignature}")
				self.modelbuilder.error(node, "Error: arity mismatch; prototype is '{name}{msignature}'")
				return false
			end
		else if args.length != msignature.arity then
			self.modelbuilder.error(node, "Error: Incorrect number of parameters. Got {args.length}, expected {msignature.arity}. Signature is {msignature}")
			return false
		end

		#debug("CALL {unsafe_type}.{msignature}")

		var vararg_decl = args.length - msignature.arity
		for i in [0..msignature.arity[ do
			var j = i
			if i == vararg_rank then continue # skip the vararg
			if i > vararg_rank then
				j = i + vararg_decl
			end
			var paramtype = msignature.mparameters[i].mtype
			self.visit_expr_subtype(args[j], paramtype)
		end
		if vararg_rank >= 0 then
			var varargs = new Array[AExpr]
			var paramtype = msignature.mparameters[vararg_rank].mtype
			for j in [vararg_rank..vararg_rank+vararg_decl] do
				varargs.add(args[j])
				self.visit_expr_subtype(args[j], paramtype)
			end
		end
		return true
	end

	fun error(node: ANode, message: String)
	do
		self.modelbuilder.toolcontext.error(node.hot_location, message)
	end

	fun get_variable(node: AExpr, variable: Variable): nullable MType
	do
		var flow = node.after_flow_context
		if flow == null then
			self.error(node, "No context!")
			return null
		end

		if flow.vars.has_key(variable) then
			return flow.vars[variable]
		else
			#node.debug("*** START Collected for {variable}")
			var mtypes = flow.collect_types(variable)
			#node.debug("**** END Collected for {variable}")
			if mtypes == null or mtypes.length == 0 then
				return variable.declared_type
			else if mtypes.length == 1 then
				return mtypes.first
			else
				var res = merge_types(node,mtypes)
				if res == null then res = variable.declared_type
				return res
			end
		end
	end

	fun set_variable(node: AExpr, variable: Variable, mtype: nullable MType)
	do
		var flow = node.after_flow_context
		assert flow != null

		flow.set_var(variable, mtype)
	end

	fun merge_types(node: ANode, col: Array[nullable MType]): nullable MType
	do
		if col.length == 1 then return col.first
		var res = new Array[nullable MType]
		for t1 in col do
			if t1 == null then continue # return null
			var found = true
			for t2 in col do
				if t2 == null then continue # return null
				if t2 isa MNullableType or t2 isa MNullType then
					t1 = t1.as_nullable
				end
				if not is_subtype(t2, t1) then found = false
			end
			if found then
				#print "merge {col.join(" ")} -> {t1}"
				return t1
			end
		end
		#self.modelbuilder.warning(node, "Type Error: {col.length} conflicting types: <{col.join(", ")}>")
		return null
	end
end

# A specific method call site with its associated informations.
class CallSite
	# The assiciated node for location
	var node: ANode

	# The statis type of the receiver
	var recv: MType

	# Is the receiver self?
	# If "for_self", virtual types of the signature are keeped
	# If "not_for_self", virtual type are erased
	var recv_is_self: Bool

	# The designated method
	var mproperty: MMethod

	# The statically designated method definition
	# The most specif one, it is.
	var mpropdef: MMethodDef

	# The resolved signature for the receiver
	var msignature: MSignature

	# Is a implicit cast required on erasure typing policy?
	var erasure_cast: Bool

	private fun check_signature(v: TypeVisitor, args: Array[AExpr]): Bool
	do
		return v.check_signature(self.node, args, self.mproperty.name, self.msignature)
	end
end

redef class Variable
	# The declared type of the variable
	var declared_type: nullable MType
end

redef class FlowContext
	# Store changes of types because of type evolution
	private var vars: HashMap[Variable, nullable MType] = new HashMap[Variable, nullable MType]
	private var cache: HashMap[Variable, nullable Array[nullable MType]] = new HashMap[Variable, nullable Array[nullable MType]]

	# Adapt the variable to a static type
	# Warning1: do not modify vars directly.
	# Warning2: sub-flow may have cached a unadapted variabial
	private fun set_var(variable: Variable, mtype: nullable MType)
	do
		self.vars[variable] = mtype
		self.cache.keys.remove(variable)
	end

	private fun collect_types(variable: Variable): nullable Array[nullable MType]
	do
		if cache.has_key(variable) then
			return cache[variable]
		end
		var res: nullable Array[nullable MType] = null
		if vars.has_key(variable) then
			var mtype = vars[variable]
			res = [mtype]
		else if self.previous.is_empty then
			# Root flow
			res = [variable.declared_type]
		else
			for flow in self.previous do
				if flow.is_unreachable then continue
				var r2 = flow.collect_types(variable)
				if r2 == null then continue
				if res == null then
					res = r2.to_a
				else
					for t in r2 do
						if not res.has(t) then res.add(t)
					end
				end
			end
		end
		cache[variable] = res
		return res
	end
end

redef class APropdef
	# The entry point of the whole typing analysis
	fun do_typing(modelbuilder: ModelBuilder)
	do
	end

	# The variable associated to the reciever (if any)
	var selfvariable: nullable Variable
end

redef class AConcreteMethPropdef
	redef fun do_typing(modelbuilder: ModelBuilder)
	do
		var nclassdef = self.parent.as(AClassdef)
		var mpropdef = self.mpropdef.as(not null)
		var v = new TypeVisitor(modelbuilder, nclassdef, mpropdef)
		self.selfvariable = v.selfvariable

		var nblock = self.n_block
		if nblock == null then return

		var mmethoddef = self.mpropdef.as(not null)
		for i in [0..mmethoddef.msignature.arity[ do
			var mtype = mmethoddef.msignature.mparameters[i].mtype
			if mmethoddef.msignature.vararg_rank == i then
				var arrayclass = v.get_mclass(self.n_signature.n_params[i], "Array")
				if arrayclass == null then return # Skip error
				mtype = arrayclass.get_mtype([mtype])
			end
			var variable = self.n_signature.n_params[i].variable
			assert variable != null
			variable.declared_type = mtype
		end
		for i in [0..mmethoddef.msignature.mclosures.length[ do
			var mclosure = mmethoddef.msignature.mclosures[i]
			var variable = self.n_signature.n_closure_decls[i].variable
			assert variable != null
			variable.declared_type = mclosure.mtype
		end
		v.visit_stmt(nblock)

		if not nblock.after_flow_context.is_unreachable and mmethoddef.msignature.return_mtype != null then
			# We reach the end of the function without having a return, it is bad
			v.error(self, "Control error: Reached end of function (a 'return' with a value was expected).")
		end
	end
end

redef class AAttrPropdef
	redef fun do_typing(modelbuilder: ModelBuilder)
	do
		var nclassdef = self.parent.as(AClassdef)
		var v = new TypeVisitor(modelbuilder, nclassdef, self.mpropdef.as(not null))
		self.selfvariable = v.selfvariable

		var nexpr = self.n_expr
		if nexpr != null then
			var mtype = self.mpropdef.static_mtype
			v.visit_expr_subtype(nexpr, mtype)
		end
	end
end

###

redef class AExpr
	# The static type of the expression.
	# null if self is a statement of in case of error
	var mtype: nullable MType = null

	# Is the statement correctly typed?
	# Used to distinguish errors and statements when `mtype' == null
	var is_typed: Bool = false

	# If required, the following implicit cast ".as(XXX)"
	# Such a cast may by required after evaluating the expression when
	# a unsafe operation is detected (silently accepted by the Nit language).
	# The attribute is computed by `check_subtype`
	var implicit_cast_to: nullable MType = null

	# Return the variable read (if any)
	# Used to perform adaptive typing
	fun its_variable: nullable Variable do return null

	private fun accept_typing(v: TypeVisitor)
	do
		v.error(self, "no implemented accept_typing for {self.class_name}")
	end
end

redef class ABlockExpr
	redef fun accept_typing(v)
	do
		for e in self.n_expr do v.visit_stmt(e)
		self.is_typed = true
	end

	# The type of a blockexpr is the one of the last expression (or null if empty)
	redef fun mtype
	do
		if self.n_expr.is_empty then return null
		return self.n_expr.last.mtype
	end
end

redef class AVardeclExpr
	redef fun accept_typing(v)
	do
		var variable = self.variable
		if variable == null then return # Skip error

		var ntype = self.n_type
		var mtype: nullable MType
		if ntype == null then
			mtype = null
		else
			mtype = v.resolve_mtype(ntype)
			if mtype == null then return # Skip error
		end

		var nexpr = self.n_expr
		if nexpr != null then
			if mtype != null then
				v.visit_expr_subtype(nexpr, mtype)
			else
				mtype = v.visit_expr(nexpr)
				if mtype == null then return # Skip error
			end
		end

		var decltype = mtype
		if mtype == null or mtype isa MNullType then
			decltype = v.get_mclass(self, "Object").mclass_type.as_nullable
			if mtype == null then mtype = decltype
		end

		variable.declared_type = decltype
		v.set_variable(self, variable, mtype)

		#debug("var {variable}: {mtype}")

		self.is_typed = true
	end
end

redef class AVarExpr
	redef fun its_variable do return self.variable
	redef fun accept_typing(v)
	do
		var variable = self.variable
		if variable == null then return # Skip error

		var mtype = v.get_variable(self, variable)
		if mtype != null then
			#debug("{variable} is {mtype}")
		else
			#debug("{variable} is untyped")
		end

		self.mtype = mtype
	end
end

redef class AVarAssignExpr
	redef fun accept_typing(v)
	do
		var variable = self.variable
		assert variable != null

		var mtype = v.visit_expr_subtype(n_value, variable.declared_type)

		v.set_variable(self, variable, mtype)

		self.is_typed = true
	end
end

redef class AReassignFormExpr
	# @depreciated use `reassign_callsite`
	fun reassign_property: nullable MMethodDef do return self.reassign_callsite.mpropdef

	# The method designed by the reassign operator.
	var reassign_callsite: nullable CallSite

	var read_type: nullable MType = null

	# Determine the `reassign_property'
	# `readtype' is the type of the reading of the left value.
	# `writetype' is the type of the writing of the left value.
	# (Because of ACallReassignExpr, both can be different.
	# Return the static type of the value to store.
	private fun resolve_reassignment(v: TypeVisitor, readtype, writetype: MType): nullable MType
	do
		var reassign_name: String
		if self.n_assign_op isa APlusAssignOp then
			reassign_name = "+"
		else if self.n_assign_op isa AMinusAssignOp then
			reassign_name = "-"
		else
			abort
		end

		self.read_type = readtype

		if readtype isa MNullType then
			v.error(self, "Error: Method '{reassign_name}' call on 'null'.")
			return null
		end

		var callsite = v.get_method(self, readtype, reassign_name, false)
		if callsite == null then return null # Skip error
		self.reassign_callsite = callsite

		var msignature = callsite.msignature
		var rettype = msignature.return_mtype
		assert msignature.arity == 1 and rettype != null

		var value_type = v.visit_expr_subtype(self.n_value, msignature.mparameters.first.mtype)
		if value_type == null then return null # Skip error

		v.check_subtype(self, rettype, writetype)
		return rettype
	end
end

redef class AVarReassignExpr
	redef fun accept_typing(v)
	do
		var variable = self.variable
		assert variable != null

		var readtype = v.get_variable(self, variable)
		if readtype == null then return

		var writetype = variable.declared_type
		if writetype == null then return

		var rettype = self.resolve_reassignment(v, readtype, writetype)

		v.set_variable(self, variable, rettype)

		self.is_typed = true
	end
end


redef class AContinueExpr
	redef fun accept_typing(v)
	do
		var nexpr = self.n_expr
		if nexpr != null then
			var mtype = v.visit_expr(nexpr)
		end
		self.is_typed = true
	end
end

redef class ABreakExpr
	redef fun accept_typing(v)
	do
		var nexpr = self.n_expr
		if nexpr != null then
			var mtype = v.visit_expr(nexpr)
		end
		self.is_typed = true
	end
end

redef class AReturnExpr
	redef fun accept_typing(v)
	do
		var nexpr = self.n_expr
		var ret_type = v.mpropdef.as(MMethodDef).msignature.return_mtype
		if nexpr != null then
			if ret_type != null then
				var mtype = v.visit_expr_subtype(nexpr, ret_type)
			else
				var mtype = v.visit_expr(nexpr)
				v.error(self, "Error: Return with value in a procedure.")
			end
		else if ret_type != null then
			v.error(self, "Error: Return without value in a function.")
		end
		self.is_typed = true
	end
end

redef class AAbortExpr
	redef fun accept_typing(v)
	do
		self.is_typed = true
	end
end

redef class AIfExpr
	redef fun accept_typing(v)
	do
		v.visit_expr_bool(n_expr)

		v.visit_stmt(n_then)
		v.visit_stmt(n_else)
		self.is_typed = true
	end
end

redef class AIfexprExpr
	redef fun accept_typing(v)
	do
		v.visit_expr_bool(n_expr)

		var t1 = v.visit_expr(n_then)
		var t2 = v.visit_expr(n_else)

		if t1 == null or t2 == null then
			return # Skip error
		end

		var t = v.merge_types(self, [t1, t2])
		if t == null then
			v.error(self, "Type Error: ambiguous type {t1} vs {t2}")
		end
		self.mtype = t
	end
end

redef class ADoExpr
	redef fun accept_typing(v)
	do
		v.visit_stmt(n_block)
		self.is_typed = true
	end
end

redef class AWhileExpr
	redef fun accept_typing(v)
	do
		v.visit_expr_bool(n_expr)

		v.visit_stmt(n_block)
		self.is_typed = true
	end
end

redef class ALoopExpr
	redef fun accept_typing(v)
	do
		v.visit_stmt(n_block)
		self.is_typed = true
	end
end

redef class AForExpr
	var coltype: nullable MClassType

	var method_iterator: nullable MMethod
	var method_is_ok: nullable MMethod
	var method_item: nullable MMethod
	var method_next: nullable MMethod
	var method_key: nullable MMethod

	private fun do_type_iterator(v: TypeVisitor, mtype: MType)
	do
		var objcla = v.get_mclass(self, "Object")
		if objcla == null then return

		var is_col = false
		var is_map = false

		var colcla = v.try_get_mclass(self, "Collection")
		if colcla != null and v.is_subtype(mtype, colcla.get_mtype([objcla.mclass_type.as_nullable])) then
			var coltype = mtype.supertype_to(v.mmodule, v.anchor, colcla)
			self.coltype = coltype
			var variables =  self.variables
			if variables.length != 1 then
				v.error(self, "Type Error: Expected one variable")
			else
				variables.first.declared_type = coltype.arguments.first
			end
			is_col = true
		end

		var mapcla = v.try_get_mclass(self, "Map")
		if mapcla != null and v.is_subtype(mtype, mapcla.get_mtype([objcla.mclass_type.as_nullable, objcla.mclass_type.as_nullable])) then
			var coltype = mtype.supertype_to(v.mmodule, v.anchor, mapcla)
			self.coltype = coltype
			var variables = self.variables
			if variables.length != 2 then
				v.error(self, "Type Error: Expected two variables")
			else
				variables[0].declared_type = coltype.arguments[0]
				variables[1].declared_type = coltype.arguments[1]
			end
			is_map = true
		end

		if is_col or is_map then
			# get iterator method
			var coltype = self.coltype.as(not null)
			var itdef = v.get_method(self, coltype, "iterator", true)
			if itdef == null then
				v.error(self, "Type Error: Expected method 'iterator' in type {coltype}")
				return
			end
			self.method_iterator = itdef.mproperty

			# get iterator type
			var ittype = itdef.msignature.return_mtype
			if ittype == null then
				v.error(self, "Type Error: Expected method 'iterator' to return an Iterator type")
				return
			end

			# get methods is_ok, next, item
			var ikdef = v.get_method(self, ittype, "is_ok", false)
			if ikdef == null then
				v.error(self, "Type Error: Expected method 'is_ok' in Iterator type {ittype}")
				return
			end
			self.method_is_ok = ikdef.mproperty

			var itemdef = v.get_method(self, ittype, "item", false)
			if itemdef == null then
				v.error(self, "Type Error: Expected method 'item' in Iterator type {ittype}")
				return
			end
			self.method_item = itemdef.mproperty

			var nextdef = v.get_method(self, ittype, "next", false)
			if nextdef == null then
				v.error(self, "Type Error: Expected method 'next' in Iterator type {ittype}")
				return
			end
			self.method_next = nextdef.mproperty

			if is_map then
				var keydef = v.get_method(self, ittype, "key", false)
				if keydef == null then
					v.error(self, "Type Error: Expected method 'key' in Iterator type {ittype}")
					return
				end
				self.method_key = keydef.mproperty
			end
			return
		end

		v.modelbuilder.error(self, "NOT YET IMPLEMENTED: Do 'for' on {mtype}")
	end

	redef fun accept_typing(v)
	do
		var mtype = v.visit_expr(n_expr)
		if mtype == null then return

		self.do_type_iterator(v, mtype)

		v.visit_stmt(n_block)
		self.is_typed = true
	end
end

redef class AAssertExpr
	redef fun accept_typing(v)
	do
		v.visit_expr_bool(n_expr)

		v.visit_stmt(n_else)
		self.is_typed = true
	end
end

redef class AOrExpr
	redef fun accept_typing(v)
	do
		v.visit_expr_bool(n_expr)
		v.visit_expr_bool(n_expr2)
		self.mtype = v.type_bool(self)
	end
end

redef class AAndExpr
	redef fun accept_typing(v)
	do
		v.visit_expr_bool(n_expr)
		v.visit_expr_bool(n_expr2)
		self.mtype = v.type_bool(self)
	end
end


redef class ANotExpr
	redef fun accept_typing(v)
	do
		v.visit_expr_bool(n_expr)
		self.mtype = v.type_bool(self)
	end
end

redef class AOrElseExpr
	redef fun accept_typing(v)
	do
		var t1 = v.visit_expr(n_expr)
		var t2 = v.visit_expr(n_expr2)

		if t1 == null or t2 == null then
			return # Skip error
		end

		if t1 isa MNullableType then
			t1 = t1.mtype
		end

		var t = v.merge_types(self, [t1, t2])
		if t == null then
			v.error(self, "Type Error: ambiguous type {t1} vs {t2}")
		end
		self.mtype = t
	end
end

redef class AEeExpr
	redef fun accept_typing(v)
	do
		v.visit_expr(n_expr)
		v.visit_expr(n_expr2)
		self.mtype = v.type_bool(self)
	end
end

redef class ATrueExpr
	redef fun accept_typing(v)
	do
		self.mtype = v.type_bool(self)
	end
end

redef class AFalseExpr
	redef fun accept_typing(v)
	do
		self.mtype = v.type_bool(self)
	end
end

redef class AIntExpr
	redef fun accept_typing(v)
	do
		var mclass = v.get_mclass(self, "Int")
		if mclass == null then return # Forward error
		self.mtype = mclass.mclass_type
	end
end

redef class AFloatExpr
	redef fun accept_typing(v)
	do
		var mclass = v.get_mclass(self, "Float")
		if mclass == null then return # Forward error
		self.mtype = mclass.mclass_type
	end
end

redef class ACharExpr
	redef fun accept_typing(v)
	do
		var mclass = v.get_mclass(self, "Char")
		if mclass == null then return # Forward error
		self.mtype = mclass.mclass_type
	end
end

redef class AStringFormExpr
	redef fun accept_typing(v)
	do
		var mclass = v.get_mclass(self, "String")
		if mclass == null then return # Forward error
		self.mtype = mclass.mclass_type
	end
end

redef class ASuperstringExpr
	redef fun accept_typing(v)
	do
		var mclass = v.get_mclass(self, "String")
		if mclass == null then return # Forward error
		self.mtype = mclass.mclass_type
		for nexpr in self.n_exprs do
			var t = v.visit_expr(nexpr)
		end
	end
end

redef class AArrayExpr
	redef fun accept_typing(v)
	do
		var mtypes = new Array[nullable MType]
		for e in self.n_exprs.n_exprs do
			var t = v.visit_expr(e)
			if t == null then
				return # Skip error
			end
			mtypes.add(t)
		end
		var mtype = v.merge_types(self, mtypes)
		if mtype == null then
			v.error(self, "Type Error: ambiguous array type {mtypes.join(" ")}")
			return
		end
		var mclass = v.get_mclass(self, "Array")
		if mclass == null then return # Forward error
		self.mtype = mclass.get_mtype([mtype])
	end
end

redef class ARangeExpr
	redef fun accept_typing(v)
	do
		var discrete_class = v.get_mclass(self, "Discrete")
		if discrete_class == null then return # Forward error
		var discrete_type = discrete_class.intro.bound_mtype
		var t1 = v.visit_expr_subtype(self.n_expr, discrete_type)
		var t2 = v.visit_expr_subtype(self.n_expr2, discrete_type)
		if t1 == null or t2 == null then return
		var mclass = v.get_mclass(self, "Range")
		if mclass == null then return # Forward error
		if v.is_subtype(t1, t2) then
			self.mtype = mclass.get_mtype([t2])
		else if v.is_subtype(t2, t1) then
			self.mtype = mclass.get_mtype([t1])
		else
			v.error(self, "Type Error: Cannot create range: {t1} vs {t2}")
		end
	end
end

redef class ANullExpr
	redef fun accept_typing(v)
	do
		self.mtype = v.mmodule.model.null_type
	end
end

redef class AIsaExpr
	# The static type to cast to.
	# (different from the static type of the expression that is Bool).
	var cast_type: nullable MType
	redef fun accept_typing(v)
	do
		var mtype = v.visit_expr_cast(self, self.n_expr, self.n_type)
		self.cast_type = mtype

		var variable = self.n_expr.its_variable
		if variable != null then
			var orig = self.n_expr.mtype
			var from = if orig != null then orig.to_s else "invalid"
			var to = if mtype != null then mtype.to_s else "invalid"
			#debug("adapt {variable}: {from} -> {to}")
			self.after_flow_context.when_true.set_var(variable, mtype)
		end

		self.mtype = v.type_bool(self)
	end
end

redef class AAsCastExpr
	redef fun accept_typing(v)
	do
		self.mtype = v.visit_expr_cast(self, self.n_expr, self.n_type)
	end
end

redef class AAsNotnullExpr
	redef fun accept_typing(v)
	do
		var mtype = v.visit_expr(self.n_expr)
		if mtype isa MNullType then
			v.error(self, "Type error: as(not null) on null")
			return
		end
		if mtype isa MNullableType then
			self.mtype = mtype.mtype
			return
		end
		# TODO: warn on useless as not null
		self.mtype = mtype
	end
end

redef class AProxyExpr
	redef fun accept_typing(v)
	do
		self.mtype = v.visit_expr(self.n_expr)
	end
end

redef class ASelfExpr
	redef var its_variable: nullable Variable
	redef fun accept_typing(v)
	do
		var variable = v.selfvariable
		self.its_variable = variable
		self.mtype = v.get_variable(self, variable)
	end
end

## MESSAGE SENDING AND PROPERTY

redef class ASendExpr
	# @depreciated: use `callsite`
	fun mproperty: nullable MMethod do return callsite.mproperty

	# The property invoked by the send.
	var callsite: nullable CallSite

	redef fun accept_typing(v)
	do
		var recvtype = v.visit_expr(self.n_expr)
		var name = self.property_name

		if recvtype == null then return # Forward error
		if recvtype isa MNullType then
			v.error(self, "Error: Method '{name}' call on 'null'.")
			return
		end

		var callsite = v.get_method(self, recvtype, name, self.n_expr isa ASelfExpr)
		if callsite == null then return
		self.callsite = callsite
		var msignature = callsite.msignature

		var args = compute_raw_arguments
		self.raw_arguments = args

		callsite.check_signature(v, args)

		if callsite.mproperty.is_init then
			var vmpropdef = v.mpropdef
			if not (vmpropdef isa MMethodDef and vmpropdef.mproperty.is_init) then
				v.error(self, "Can call a init only in another init")
			end
		end

		var ret = msignature.return_mtype
		if ret != null then
			self.mtype = ret
		else
			self.is_typed = true
		end

		if self.n_closure_defs.length == msignature.mclosures.length then
			for i in [0..self.n_closure_defs.length[ do
				self.n_closure_defs[i].accept_typing(v, msignature.mclosures[i])
			end
		else
			debug("closure: got {self.n_closure_defs.length}, want {msignature.mclosures.length}")
		end
	end

	# The name of the property
	# Each subclass simply provide the correct name.
	private fun property_name: String is abstract

	# An array of all arguments (excluding self)
	var raw_arguments: nullable Array[AExpr]

	private fun compute_raw_arguments: Array[AExpr] is abstract
end

redef class ABinopExpr
	redef fun compute_raw_arguments do return [n_expr2]
end
redef class AEqExpr
	redef fun property_name do return "=="
	redef fun accept_typing(v)
	do
		super

		var variable = self.n_expr.its_variable
		if variable == null then return
		var mtype = self.n_expr2.mtype
		if not mtype isa MNullType then return
		var vartype = v.get_variable(self, variable)
		if not vartype isa MNullableType then return
		self.after_flow_context.when_true.set_var(variable, mtype)
		self.after_flow_context.when_false.set_var(variable, vartype.mtype)
		#debug("adapt {variable}:{vartype} ; true->{mtype} false->{vartype.mtype}")
	end
end
redef class ANeExpr
	redef fun property_name do return "!="
	redef fun accept_typing(v)
	do
		super

		var variable = self.n_expr.its_variable
		if variable == null then return
		var mtype = self.n_expr2.mtype
		if not mtype isa MNullType then return
		var vartype = v.get_variable(self, variable)
		if not vartype isa MNullableType then return
		self.after_flow_context.when_false.set_var(variable, mtype)
		self.after_flow_context.when_true.set_var(variable, vartype.mtype)
		#debug("adapt {variable}:{vartype} ; true->{vartype.mtype} false->{mtype}")
	end
end
redef class ALtExpr
	redef fun property_name do return "<"
end
redef class ALeExpr
	redef fun property_name do return "<="
end
redef class ALlExpr
	redef fun property_name do return "<<"
end
redef class AGtExpr
	redef fun property_name do return ">"
end
redef class AGeExpr
	redef fun property_name do return ">="
end
redef class AGgExpr
	redef fun property_name do return ">>"
end
redef class APlusExpr
	redef fun property_name do return "+"
end
redef class AMinusExpr
	redef fun property_name do return "-"
end
redef class AStarshipExpr
	redef fun property_name do return "<=>"
end
redef class AStarExpr
	redef fun property_name do return "*"
end
redef class ASlashExpr
	redef fun property_name do return "/"
end
redef class APercentExpr
	redef fun property_name do return "%"
end

redef class AUminusExpr
	redef fun property_name do return "unary -"
	redef fun compute_raw_arguments do return new Array[AExpr]
end


redef class ACallExpr
	redef fun property_name do return n_id.text
	redef fun compute_raw_arguments do return n_args.to_a
end

redef class ACallAssignExpr
	redef fun property_name do return n_id.text + "="
	redef fun compute_raw_arguments
	do
		var res = n_args.to_a
		res.add(n_value)
		return res
	end
end

redef class ABraExpr
	redef fun property_name do return "[]"
	redef fun compute_raw_arguments do return n_args.to_a
end

redef class ABraAssignExpr
	redef fun property_name do return "[]="
	redef fun compute_raw_arguments
	do
		var res = n_args.to_a
		res.add(n_value)
		return res
	end
end

redef class ASendReassignFormExpr
	# @depreciated use `write_callsite`
	fun write_mproperty: nullable MMethod do return write_callsite.mproperty

	# The property invoked for the writing
	var write_callsite: nullable CallSite

	redef fun accept_typing(v)
	do
		var recvtype = v.visit_expr(self.n_expr)
		var name = self.property_name

		if recvtype == null then return # Forward error
		if recvtype isa MNullType then
			v.error(self, "Error: Method '{name}' call on 'null'.")
			return
		end

		var for_self = self.n_expr isa ASelfExpr
		var callsite = v.get_method(self, recvtype, name, for_self)

		if callsite == null then return
		self.callsite = callsite

		var args = compute_raw_arguments
		self.raw_arguments = args

		callsite.check_signature(v, args)

		var readtype = callsite.msignature.return_mtype
		if readtype == null then
			v.error(self, "Error: {name} is not a function")
			return
		end

		var wcallsite = v.get_method(self, recvtype, name + "=", self.n_expr isa ASelfExpr)
		if wcallsite == null then return
		self.write_callsite = wcallsite

		var wtype = self.resolve_reassignment(v, readtype, wcallsite.msignature.mparameters.last.mtype)
		if wtype == null then return

		args = args.to_a # duplicate so raw_arguments keeps only the getter args
		args.add(self.n_value)
		wcallsite.check_signature(v, args)

		self.is_typed = true
	end
end

redef class ACallReassignExpr
	redef fun property_name do return n_id.text
	redef fun compute_raw_arguments do return n_args.to_a
end

redef class ABraReassignExpr
	redef fun property_name do return "[]"
	redef fun compute_raw_arguments do return n_args.to_a
end

redef class AInitExpr
	redef fun property_name do return "init"
	redef fun compute_raw_arguments do return n_args.to_a
end

redef class AExprs
	fun to_a: Array[AExpr] do return self.n_exprs.to_a
end

###

redef class ASuperExpr
	# The method to call if the super is in fact a 'super init call'
	# Note: if the super is a normal call-next-method, then this attribute is null
	var mproperty: nullable MMethod

	redef fun accept_typing(v)
	do
		var recvtype = v.nclassdef.mclassdef.bound_mtype
		var mproperty = v.mpropdef.mproperty
		if not mproperty isa MMethod then
			v.error(self, "Error: super only usable in a method")
			return
		end
		var superprops = mproperty.lookup_super_definitions(v.mmodule, recvtype)
		if superprops.length == 0 then
			if mproperty.is_init and v.mpropdef.is_intro then
				process_superinit(v)
				return
			end
			v.error(self, "Error: No super method to call for {mproperty}.")
			return
		end
		# FIXME: covariance of return type in linear extension?
		var superprop = superprops.first
		assert superprop isa MMethodDef

		var msignature = v.resolve_signature_for(superprop, recvtype, true)
		var args = self.n_args.to_a
		if args.length > 0 then
			v.check_signature(self, args, mproperty.name, msignature)
		end
		self.mtype = msignature.return_mtype
		self.is_typed = true
	end

	private fun process_superinit(v: TypeVisitor)
	do
		var recvtype = v.nclassdef.mclassdef.bound_mtype
		var mproperty = v.mpropdef.mproperty
		var superprop: nullable MMethodDef = null
		for msupertype in v.nclassdef.mclassdef.supertypes do
			msupertype = msupertype.anchor_to(v.mmodule, recvtype)
			var errcount = v.modelbuilder.toolcontext.error_count
			var candidate = v.try_get_mproperty_by_name2(self, msupertype, mproperty.name).as(nullable MMethod)
			if candidate == null then
				if v.modelbuilder.toolcontext.error_count > errcount then return # Forard error
				continue # Try next super-class
			end
			if superprop != null and superprop.mproperty != candidate then
				v.error(self, "Error: conflicting super constructor to call for {mproperty}: {candidate.full_name}, {superprop.mproperty.full_name}")
				return
			end
			var candidatedefs = candidate.lookup_definitions(v.mmodule, recvtype)
			if superprop != null then
				if superprop == candidatedefs.first then continue
				candidatedefs.add(superprop)
			end
			if candidatedefs.length > 1 then
				v.error(self, "Error: confliting property definitions for property {mproperty} in {recvtype}: {candidatedefs.join(", ")}")
				return
			end
			superprop = candidatedefs.first
		end
		if superprop == null then
			v.error(self, "Error: No super method to call for {mproperty}.")
			return
		end
		self.mproperty = superprop.mproperty

		var args = self.n_args.to_a
		var msignature = v.resolve_signature_for(superprop, recvtype, true)
		if args.length > 0 then
			v.check_signature(self, args, mproperty.name, msignature)
		else
			# TODO: Check signature
		end

		self.is_typed = true
	end
end

####

redef class ANewExpr
	# @depreciated use `callsite`
	fun mproperty: nullable MMethod do return self.callsite.mproperty

	# The constructor invoked by the new.
	var callsite: nullable CallSite

	redef fun accept_typing(v)
	do
		var recvtype = v.resolve_mtype(self.n_type)
		if recvtype == null then return
		self.mtype = recvtype

		if not recvtype isa MClassType then
			if recvtype isa MNullableType then
				v.error(self, "Type error: cannot instantiate the nullable type {recvtype}.")
				return
			else
				v.error(self, "Type error: cannot instantiate the formal type {recvtype}.")
				return
			end
		end

		var name: String
		var nid = self.n_id
		if nid != null then
			name = nid.text
		else
			name = "init"
		end
		var callsite = v.get_method(self, recvtype, name, false)
		if callsite == null then return

		self.callsite = callsite

		if not callsite.mproperty.is_init_for(recvtype.mclass) then
			v.error(self, "Error: {name} is not a constructor.")
			return
		end

		var args = n_args.to_a
		callsite.check_signature(v, args)
	end
end

####

redef class AAttrFormExpr
	# The attribute acceded.
	var mproperty: nullable MAttribute

	# The static type of the attribute.
	var attr_type: nullable MType

	# Resolve the attribute acceded.
	private fun resolve_property(v: TypeVisitor)
	do
		var recvtype = v.visit_expr(self.n_expr)
		if recvtype == null then return # Skip error
		var name = self.n_id.text
		if recvtype isa MNullType then
			v.error(self, "Error: Attribute '{name}' access on 'null'.")
			return
		end

		var unsafe_type = v.anchor_to(recvtype)
		var mproperty = v.try_get_mproperty_by_name2(self, unsafe_type, name)
		if mproperty == null then
			v.modelbuilder.error(self, "Error: Attribute {name} doesn't exists in {recvtype}.")
			return
		end
		assert mproperty isa MAttribute
		self.mproperty = mproperty

		var mpropdefs = mproperty.lookup_definitions(v.mmodule, unsafe_type)
		assert mpropdefs.length == 1
		var mpropdef = mpropdefs.first
		var attr_type = mpropdef.static_mtype.as(not null)
		attr_type = v.resolve_for(attr_type, recvtype, self.n_expr isa ASelfExpr)
		self.attr_type = attr_type
	end
end

redef class AAttrExpr
	redef fun accept_typing(v)
	do
		self.resolve_property(v)
		self.mtype = self.attr_type
	end
end


redef class AAttrAssignExpr
	redef fun accept_typing(v)
	do
		self.resolve_property(v)
		var mtype = self.attr_type

		v.visit_expr_subtype(self.n_value, mtype)
		self.is_typed = true
	end
end

redef class AAttrReassignExpr
	redef fun accept_typing(v)
	do
		self.resolve_property(v)
		var mtype = self.attr_type
		if mtype == null then return # Skip error

		self.resolve_reassignment(v, mtype, mtype)

		self.is_typed = true
	end
end

redef class AIssetAttrExpr
	redef fun accept_typing(v)
	do
		self.resolve_property(v)
		var mtype = self.attr_type
		if mtype == null then return # Skip error

		var recvtype = self.n_expr.mtype.as(not null)
		var bound = v.resolve_for(mtype, recvtype, false)
		if bound isa MNullableType then
			v.error(self, "Error: isset on a nullable attribute.")
		end
		self.mtype = v.type_bool(self)
	end
end

###

redef class AClosureCallExpr
	redef fun accept_typing(v)
	do
		var variable = self.variable
		if variable == null then return # Skip error

		var recvtype = v.nclassdef.mclassdef.bound_mtype
		var msignature = variable.declared_type.as(not null)
		msignature = v.resolve_for(msignature, recvtype, false).as(MSignature)

		var args = n_args.to_a
		v.check_signature(self, args, variable.name, msignature)

		self.is_typed = true
		self.mtype = msignature.return_mtype
	end
end

redef class AClosureDef
	var mclosure: nullable MParameter

	private fun accept_typing(v: TypeVisitor, mparameter: MParameter)
	do
		var variables = self.variables
		if variables == null then return

		self.mclosure = mparameter
		var msignature = mparameter.mtype.as(MSignature)

		if msignature.arity != variables.length then
			v.error(self, "Type error: closure {mparameter.name} expects {msignature.arity} parameters, {variables.length} given")
			return
		end

		for i in [0..variables.length[ do
			variables[i].declared_type = msignature.mparameters[i].mtype
		end

		v.visit_stmt(self.n_expr)
	end
end

###

redef class ADebugTypeExpr
	redef fun accept_typing(v)
	do
		var expr = v.visit_expr(self.n_expr)
		if expr == null then return
		var unsafe = v.anchor_to(expr)
		var ntype = self.n_type
		var mtype = v.resolve_mtype(ntype)
		if mtype != null and mtype != expr then
			var umtype = v.anchor_to(mtype)
			v.modelbuilder.warning(self, "Found type {expr} (-> {unsafe}), expected {mtype} (-> {umtype})")
		end
		self.is_typed = true
	end
end
