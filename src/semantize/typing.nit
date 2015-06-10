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

import modelize
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

	# The module of the analysis
	# Used to correctly query the model
	var mmodule: MModule

	# The static type of the receiver
	# Mainly used for type tests and type resolutions
	var anchor: nullable MClassType = null

	# The analyzed mclassdef
	var mclassdef: nullable MClassDef = null

	# The analyzed property
	var mpropdef: nullable MPropDef

	var selfvariable = new Variable("self")

	# Is `self` use restricted?
	# * no explicit `self`
	# * method called on the implicit self must be top-level
	# Currently only used for `new` factory since there is no valid receiver inside
	var is_toplevel_context = false

	init
	do
		var mpropdef = self.mpropdef

		if mpropdef != null then
			self.mpropdef = mpropdef
			var mclassdef = mpropdef.mclassdef
			self.mclassdef = mclassdef
			self.anchor = mclassdef.bound_mtype

			var mclass = mclassdef.mclass

			var selfvariable = new Variable("self")
			self.selfvariable = selfvariable
			selfvariable.declared_type = mclass.mclass_type

			var mprop = mpropdef.mproperty
			if mprop isa MMethod and mprop.is_new then
				is_toplevel_context = true
			end
		end
	end

	fun anchor_to(mtype: MType): MType
	do
		var anchor = anchor
		if anchor == null then
			assert not mtype.need_anchor
			return mtype
		end
		return mtype.anchor_to(mmodule, anchor)
	end

	fun is_subtype(sub, sup: MType): Bool
	do
		return sub.is_subtype(mmodule, anchor, sup)
	end

	fun resolve_for(mtype, subtype: MType, for_self: Bool): MType
	do
		#print "resolve_for {mtype} sub={subtype} forself={for_self} mmodule={mmodule} anchor={anchor}"
		var res = mtype.resolve_for(subtype, anchor, mmodule, not for_self)
		return res
	end

	# Check that `sub` is a subtype of `sup`.
	# If `sub` is not a valid suptype, then display an error on `node` an return null.
	# If `sub` is a safe subtype of `sup` then return `sub`.
	# If `sub` is an unsafe subtype (ie an implicit cast is required), then return `sup`.
	#
	# The point of the return type is to determinate the usable type on an expression when `autocast` is true:
	# If the suptype is safe, then the return type is the one on the expression typed by `sub`.
	# Is the subtype is unsafe, then the return type is the one of an implicit cast on `sup`.
	fun check_subtype(node: ANode, sub, sup: MType, autocast: Bool): nullable MType
	do
		if self.is_subtype(sub, sup) then return sub
		if autocast and self.is_subtype(sub, self.anchor_to(sup)) then
			# FIXME workaround to the current unsafe typing policy. To remove once fixed virtual types exists.
			#node.debug("Unsafe typing: expected {sup}, got {sub}")
			return sup
		end
		if sub.need_anchor then
			var u = anchor_to(sub)
			self.modelbuilder.error(node, "Type Error: expected `{sup}`, got `{sub}: {u}`.")
		else
			self.modelbuilder.error(node, "Type Error: expected `{sup}`, got `{sub}`.")
		end
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
	#  * `nexpr` is a statement
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
		self.error(nexpr, "Error: expected an expression.")
		return null
	end

	# Visit an expression and expect its static type is a least a `sup`
	# Return the type of the expression or null if
	#  * the type cannot be determined or
	#  * `nexpr` is a statement or
	#  * `nexpr` is not a `sup`
	fun visit_expr_subtype(nexpr: AExpr, sup: nullable MType): nullable MType
	do
		var sub = visit_expr(nexpr)
		if sub == null then return null # Forward error

		if sup == null then return null # Forward error

		var res = check_subtype(nexpr, sub, sup, true)
		if res != sub then
			nexpr.implicit_cast_to = res
		end
		return res
	end

	# Visit an expression and expect its static type is a `Bool`
	# Return the type of the expression or null if
	#  * the type cannot be determined or
	#  * `nexpr` is a statement or
	#  * `nexpr` is not a `Bool`
	fun visit_expr_bool(nexpr: AExpr): nullable MType
	do
		return self.visit_expr_subtype(nexpr, self.type_bool(nexpr))
	end


	fun visit_expr_cast(node: ANode, nexpr: AExpr, ntype: AType): nullable MType
	do
		var sub = visit_expr(nexpr)
		if sub == null then return null # Forward error

		var sup = self.resolve_mtype(ntype)
		if sup == null then return null # Forward error

		if sup == sub then
			self.modelbuilder.warning(node, "useless-type-test", "Warning: expression is already a `{sup}`.")
		else if self.is_subtype(sub, sup) then
			self.modelbuilder.warning(node, "useless-type-test", "Warning: expression is already a `{sup}` since it is a `{sub}`.")
		end
		return sup
	end

	# Can `mtype` be null (up to the current knowledge)?
	fun can_be_null(mtype: MType): Bool
	do
		if mtype isa MNullableType or mtype isa MNullType then return true
		if mtype isa MFormalType then
			var x = anchor_to(mtype)
			if x isa MNullableType or x isa MNullType then return true
		end
		return false
	end

	# Check that `mtype` can be null (up to the current knowledge).
	#
	# If not then display a `useless-null-test` warning on node and return false.
	# Else return true.
	fun check_can_be_null(anode: ANode, mtype: MType): Bool
	do
		if can_be_null(mtype) then return true

		if mtype isa MFormalType then
			var res = anchor_to(mtype)
			modelbuilder.warning(anode, "useless-null-test", "Warning: expression is not null, since it is a `{mtype}: {res}`.")
		else
			modelbuilder.warning(anode, "useless-null-test", "Warning: expression is not null, since it is a `{mtype}`.")
		end
		return false
	end

	# Special verification on != and == for null
	# Return true
	fun null_test(anode: ABinopExpr)
	do
		var mtype = anode.n_expr.mtype
		var mtype2 = anode.n_expr2.mtype

		if mtype == null or mtype2 == null then return

		if not mtype2 isa MNullType then return

		# Check of useless null
		if not check_can_be_null(anode.n_expr, mtype) then return

		if mtype isa MNullType then
			# Because of type adaptation, we cannot just stop here
			# so return use `null` as a bottom type that will be merged easily (cf) `merge_types`
			mtype = null
		else
			mtype = mtype.as_notnull
		end

		# Check for type adaptation
		var variable = anode.n_expr.its_variable
		if variable == null then return

		# One is null (mtype2 see above) the other is not null
		if anode isa AEqExpr then
			anode.after_flow_context.when_true.set_var(self, variable, mtype2)
			anode.after_flow_context.when_false.set_var(self, variable, mtype)
		else if anode isa ANeExpr then
			anode.after_flow_context.when_false.set_var(self, variable, mtype2)
			anode.after_flow_context.when_true.set_var(self, variable, mtype)
		else
			abort
		end
	end

	fun try_get_mproperty_by_name2(anode: ANode, mtype: MType, name: String): nullable MProperty
	do
		return self.modelbuilder.try_get_mproperty_by_name2(anode, mmodule, mtype, name)
	end

	fun resolve_mtype(node: AType): nullable MType
	do
		return self.modelbuilder.resolve_mtype(mmodule, mclassdef, node)
	end

	fun try_get_mclass(node: ANode, name: String): nullable MClass
	do
		var mclass = modelbuilder.try_get_mclass_by_name(node, mmodule, name)
		return mclass
	end

	fun get_mclass(node: ANode, name: String): nullable MClass
	do
		var mclass = modelbuilder.get_mclass_by_name(node, mmodule, name)
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
			var objclass = get_mclass(node, "Object")
			if objclass == null then return null # Forward error
			unsafe_type = objclass.mclass_type
		end

		var mproperty = self.try_get_mproperty_by_name2(node, unsafe_type, name)
		if name == "new" and mproperty == null then
			name = "init"
			mproperty = self.try_get_mproperty_by_name2(node, unsafe_type, name)
		end

		if mproperty == null then
			if recv_is_self then
				self.modelbuilder.error(node, "Error: method or variable `{name}` unknown in `{recvtype}`.")
			else if recvtype.need_anchor then
				self.modelbuilder.error(node, "Error: method `{name}` does not exists in `{recvtype}: {unsafe_type}`.")
			else
				self.modelbuilder.error(node, "Error: method `{name}` does not exists in `{recvtype}`.")
			end
			return null
		end

		assert mproperty isa MMethod

		# `null` only accepts some methods of object.
		if recvtype isa MNullType and not mproperty.is_null_safe then
			self.error(node, "Error: method `{name}` called on `null`.")
			return null
		else if unsafe_type isa MNullableType and not mproperty.is_null_safe then
			modelbuilder.advice(node, "call-on-nullable", "Warning: method call on a nullable receiver `{recvtype}`.")
		end

		if is_toplevel_context and recv_is_self and not mproperty.is_toplevel then
			error(node, "Error: `{name}` is not a top-level method, thus need a receiver.")
		end
		if not recv_is_self and mproperty.is_toplevel then
			error(node, "Error: cannot call `{name}`, a top-level method, with a receiver.")
		end

		if mproperty.visibility == protected_visibility and not recv_is_self and self.mmodule.visibility_for(mproperty.intro_mclassdef.mmodule) < intrude_visibility and not modelbuilder.toolcontext.opt_ignore_visibility.value then
			self.modelbuilder.error(node, "Error: method `{name}` is protected and can only accessed by `self`.")
			return null
		end

		var info = mproperty.deprecation
		if info != null and self.mpropdef.mproperty.deprecation == null then
			var mdoc = info.mdoc
			if mdoc != null then
				self.modelbuilder.warning(node, "deprecated-method", "Deprecation Warning: method `{name}` is deprecated: {mdoc.content.first}")
			else
				self.modelbuilder.warning(node, "deprecated-method", "Deprecation Warning: method `{name}` is deprecated.")
			end
		end

		var propdefs = mproperty.lookup_definitions(self.mmodule, unsafe_type)
		var mpropdef
		if propdefs.length == 0 then
			self.modelbuilder.error(node, "Type Error: no definition found for property `{name}` in `{unsafe_type}`.")
			return null
		else if propdefs.length == 1 then
			mpropdef = propdefs.first
		else
			self.modelbuilder.warning(node, "property-conflict", "Warning: conflicting property definitions for property `{name}` in `{unsafe_type}`: {propdefs.join(" ")}")
			mpropdef = mproperty.intro
		end


		var msignature = mpropdef.new_msignature or else mpropdef.msignature
		if msignature == null then return null # skip error
		msignature = resolve_for(msignature, recvtype, recv_is_self).as(MSignature)

		var erasure_cast = false
		var rettype = mpropdef.msignature.return_mtype
		if not recv_is_self and rettype != null then
			rettype = rettype.undecorate
			if rettype isa MParameterType then
				var erased_rettype = msignature.return_mtype
				assert erased_rettype != null
				#node.debug("Erasure cast: Really a {rettype} but unsafely a {erased_rettype}")
				erasure_cast = true
			end
		end

		var callsite = new CallSite(node, recvtype, mmodule, anchor, recv_is_self, mproperty, mpropdef, msignature, erasure_cast)
		return callsite
	end

	fun try_get_method(node: ANode, recvtype: MType, name: String, recv_is_self: Bool): nullable CallSite
	do
		var unsafe_type = self.anchor_to(recvtype)
		var mproperty = self.try_get_mproperty_by_name2(node, unsafe_type, name)
		if mproperty == null then return null
		return get_method(node, recvtype, name, recv_is_self)
	end


	# Visit the expressions of args and check their conformity with the corresponding type in signature
	# The point of this method is to handle varargs correctly
	# Note: The signature must be correctly adapted
	fun check_signature(node: ANode, args: Array[AExpr], mproperty: MProperty, msignature: MSignature): nullable SignatureMap
	do
		var vararg_rank = msignature.vararg_rank
		if vararg_rank >= 0 then
			if args.length < msignature.arity then
				modelbuilder.error(node, "Error: expected at least {msignature.arity} argument(s) for `{mproperty}{msignature}`; got {args.length}. See introduction at `{mproperty.full_name}`.")
				return null
			end
		else if args.length != msignature.arity then
			if msignature.arity == msignature.min_arity then
				modelbuilder.error(node, "Error: expected {msignature.arity} argument(s) for `{mproperty}{msignature}`; got {args.length}. See introduction at `{mproperty.full_name}`.")
				return null
			end
			if args.length > msignature.arity then
				modelbuilder.error(node, "Error: expected at most {msignature.arity} argument(s) for `{mproperty}{msignature}`; got {args.length}. See introduction at `{mproperty.full_name}`.")
				return null
			end
			if args.length < msignature.min_arity then
				modelbuilder.error(node, "Error: expected at least {msignature.min_arity} argument(s) for `{mproperty}{msignature}`; got {args.length}. See introduction at `{mproperty.full_name}`.")
				return null
			end
		end

		#debug("CALL {unsafe_type}.{msignature}")

		# Associate each parameter to a position in the arguments
		var map = new SignatureMap

		var setted = args.length - msignature.min_arity

		# First, handle named arguments
		for i in [0..args.length[ do
			var e = args[i]
			if not e isa ANamedargExpr then continue
			var name = e.n_id.text
			var param = msignature.mparameter_by_name(name)
			if param == null then
				modelbuilder.error(e.n_id, "Error: no parameter `{name}` for `{mproperty}{msignature}`.")
				return null
			end
			if not param.is_default then
				modelbuilder.error(e, "Error: parameter `{name}` is not optional for `{mproperty}{msignature}`.")
				return null
			end
			var idx = msignature.mparameters.index_of(param)
			var prev = map.map.get_or_null(idx)
			if prev != null then
				modelbuilder.error(e, "Error: parameter `{name}` already associated with argument #{prev} for `{mproperty}{msignature}`.")
				return null
			end
			map.map[idx] = i
			setted -= 1
			e.mtype = self.visit_expr_subtype(e.n_expr, param.mtype)
		end

		# Second, associate remaining parameters
		var vararg_decl = args.length - msignature.arity
		var j = 0
		for i in [0..msignature.arity[ do
			# Skip parameters associated by name
			if map.map.has_key(i) then continue

			var param = msignature.mparameters[i]
			if param.is_default then
				if setted > 0 then
					setted -= 1
				else
					continue
				end
			end

			# Search the next free argument: skip named arguments since they are already associated
			while args[j] isa ANamedargExpr do j += 1
			var arg = args[j]
			map.map[i] = j
			j += 1

			if i == vararg_rank then
				j += vararg_decl
				continue # skip the vararg
			end

			var paramtype = param.mtype
			self.visit_expr_subtype(arg, paramtype)
		end

		# Third, check varargs
		if vararg_rank >= 0 then
			var paramtype = msignature.mparameters[vararg_rank].mtype
			var first = args[vararg_rank]
			if vararg_decl == 0 then
				var mclass = get_mclass(node, "Array")
				if mclass == null then return null # Forward error
				var array_mtype = mclass.get_mtype([paramtype])
				if first isa AVarargExpr then
					self.visit_expr_subtype(first.n_expr, array_mtype)
					first.mtype  = first.n_expr.mtype
				else
					# only one vararg, maybe `...` was forgot, so be gentle!
					var t = visit_expr(first)
					if t == null then return null # Forward error
					if not is_subtype(t, paramtype) and is_subtype(t, array_mtype) then
						# Not acceptable but could be a `...`
						error(first, "Type Error: expected `{paramtype}`, got `{t}`. Is an ellipsis `...` missing on the argument?")
						return null
					end
					# Standard valid vararg, finish the job
					map.vararg_decl = 1
					self.visit_expr_subtype(first, paramtype)
				end
			else
				map.vararg_decl = vararg_decl + 1
				for i in [vararg_rank..vararg_rank+vararg_decl] do
					self.visit_expr_subtype(args[i], paramtype)
				end
			end
		end

		return map
	end

	fun error(node: ANode, message: String)
	do
		self.modelbuilder.toolcontext.error(node.hot_location, message)
	end

	fun get_variable(node: AExpr, variable: Variable): nullable MType
	do
		if not variable.is_adapted then return variable.declared_type

		var flow = node.after_flow_context
		if flow == null then return null # skip error

		if flow.vars.has_key(variable) then
			return flow.vars[variable]
		else
			#node.debug("*** START Collected for {variable}")
			var mtypes = flow.collect_types(variable)
			#node.debug("**** END Collected for {variable}")
			if mtypes.length == 0 then
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

	# Some variables where type-adapted during the visit
	var dirty = false

	# Some loops had been visited during the visit
	var has_loop = false

	fun set_variable(node: AExpr, variable: Variable, mtype: nullable MType)
	do
		var flow = node.after_flow_context
		assert flow != null

		flow.set_var(self, variable, mtype)
	end

	fun merge_types(node: ANode, col: Array[nullable MType]): nullable MType
	do
		if col.length == 1 then return col.first
		for t1 in col do
			if t1 == null then continue # return null
			var found = true
			for t2 in col do
				if t2 == null then continue # return null
				if can_be_null(t2) and not can_be_null(t1) then
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

# Mapping between parameters and arguments in a call.
#
# Parameters and arguments are not stored in the class but referenced by their position (starting from 0)
#
# The point of this class is to help engine and other things to map arguments in the AST to parameters of the model.
class SignatureMap
	# Associate a parameter to an argument
	var map = new ArrayMap[Int, Int]

	# The length of the vararg sequence
	# 0 if no vararg or if reverse vararg (cf `AVarargExpr`)
	var vararg_decl: Int = 0
end

# A specific method call site with its associated informations.
class CallSite
	# The associated node for location
	var node: ANode

	# The static type of the receiver (possibly unresolved)
	var recv: MType

	# The module where the callsite is present
	var mmodule: MModule

	# The anchor to use with `recv` or `msignature`
	var anchor: nullable MClassType

	# Is the receiver self?
	# If "for_self", virtual types of the signature are kept
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

	# The mapping used on the call to associate arguments to parameters
	# If null then no specific association is required.
	var signaturemap: nullable SignatureMap = null

	private fun check_signature(v: TypeVisitor, args: Array[AExpr]): Bool
	do
		var map = v.check_signature(self.node, args, self.mproperty, self.msignature)
		signaturemap = map
		return map == null
	end
end

redef class Variable
	# The declared type of the variable
	var declared_type: nullable MType is writable

	# Was the variable type-adapted?
	# This is used to speedup type retrieval while it remains `false`
	private var is_adapted = false
end

redef class FlowContext
	# Store changes of types because of type evolution
	private var vars = new HashMap[Variable, nullable MType]

	# Adapt the variable to a static type
	# Warning1: do not modify vars directly.
	# Warning2: sub-flow may have cached a unadapted variable
	private fun set_var(v: TypeVisitor, variable: Variable, mtype: nullable MType)
	do
		if variable.declared_type == mtype and not variable.is_adapted then return
		if vars.has_key(variable) and vars[variable] == mtype then return
		self.vars[variable] = mtype
		v.dirty = true
		variable.is_adapted = true
		#node.debug "set {variable} to {mtype or else "X"}"
	end

	# Look in the flow and previous flow and collect all first reachable type adaptation of a local variable
	private fun collect_types(variable: Variable): Array[nullable MType]
	do
		#node.debug "flow for {variable}"
		var res = new Array[nullable MType]

		var todo = [self]
		var seen = new HashSet[FlowContext]
		while not todo.is_empty do
			var f = todo.pop
			if f.is_unreachable then continue
			if seen.has(f) then continue
			seen.add f

			if f.vars.has_key(variable) then
				# Found something. Collect it and do not process further on this path
				res.add f.vars[variable]
				#f.node.debug "process {variable}: got {f.vars[variable] or else "X"}"
			else
				todo.add_all f.previous
				todo.add_all f.loops
				if f.previous.is_empty then
					# Root flowcontext mean a parameter or something related
					res.add variable.declared_type
					#f.node.debug "root process {variable}: got {variable.declared_type or else "X"}"
				end
			end
		end
		#self.node.debug "##### end flow for {variable}: {res.join(" ")}"
		return res
	end
end

redef class APropdef
	# The entry point of the whole typing analysis
	fun do_typing(modelbuilder: ModelBuilder)
	do
	end

	# The variable associated to the receiver (if any)
	var selfvariable: nullable Variable
end

redef class AMethPropdef
	redef fun do_typing(modelbuilder: ModelBuilder)
	do
		var nblock = self.n_block
		if nblock == null then return

		var mpropdef = self.mpropdef
		if mpropdef == null then return # skip error

		var v = new TypeVisitor(modelbuilder, mpropdef.mclassdef.mmodule, mpropdef)
		self.selfvariable = v.selfvariable

		var mmethoddef = self.mpropdef.as(not null)
		var msignature = mmethoddef.msignature
		if msignature == null then return # skip error
		for i in [0..msignature.arity[ do
			var mtype = msignature.mparameters[i].mtype
			if msignature.vararg_rank == i then
				var arrayclass = v.get_mclass(self.n_signature.n_params[i], "Array")
				if arrayclass == null then return # Skip error
				mtype = arrayclass.get_mtype([mtype])
			end
			var variable = self.n_signature.n_params[i].variable
			assert variable != null
			variable.declared_type = mtype
		end

		loop
			v.dirty = false
			v.visit_stmt(nblock)
			if not v.has_loop or not v.dirty then break
		end

		if not nblock.after_flow_context.is_unreachable and msignature.return_mtype != null then
			# We reach the end of the function without having a return, it is bad
			v.error(self, "Error: reached end of function; expected `return` with a value.")
		end
	end
end

redef class AAttrPropdef
	redef fun do_typing(modelbuilder: ModelBuilder)
	do
		if not has_value then return

		var mpropdef = self.mpropdef
		if mpropdef == null then return # skip error

		var v = new TypeVisitor(modelbuilder, mpropdef.mclassdef.mmodule, mpropdef)
		self.selfvariable = v.selfvariable

		var nexpr = self.n_expr
		if nexpr != null then
			var mtype = self.mpropdef.static_mtype
			v.visit_expr_subtype(nexpr, mtype)
		end
		var nblock = self.n_block
		if nblock != null then
			v.visit_stmt(nblock)
			if not nblock.after_flow_context.is_unreachable then
				# We reach the end of the init without having a return, it is bad
				v.error(self, "Error: reached end of block; expected `return`.")
			end
		end
	end
end

###

redef class AExpr
	# The static type of the expression.
	# null if self is a statement or in case of error
	var mtype: nullable MType = null

	# Is the statement correctly typed?
	# Used to distinguish errors and statements when `mtype == null`
	var is_typed: Bool = false

	# If required, the following implicit cast `.as(XXX)`
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

	# Is non-null if `self` is a leaf of a comprehension array construction.
	# In this case, the enclosing literal array node is designated.
	# The result of the evaluation of `self` must be
	# stored inside the designated array (there is an implicit `push`)
	var comprehension: nullable AArrayExpr = null
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
				var etype = v.visit_expr_subtype(nexpr, mtype)
				if etype == mtype then
					assert ntype != null
					v.modelbuilder.advice(ntype, "useless-type", "Warning: useless type definition for variable `{variable.name}`")
				end
			else
				mtype = v.visit_expr(nexpr)
				if mtype == null then return # Skip error
			end
		end

		var decltype = mtype
		if mtype == null or mtype isa MNullType then
			var objclass = v.get_mclass(self, "Object")
			if objclass == null then return # skip error
			decltype = objclass.mclass_type.as_nullable
			if mtype == null then mtype = decltype
		end

		variable.declared_type = decltype
		v.set_variable(self, variable, mtype)

		#debug("var {variable}: {mtype}")

		self.mtype = mtype
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
	# The method designed by the reassign operator.
	var reassign_callsite: nullable CallSite

	var read_type: nullable MType = null

	# Determine the `reassign_property`
	# `readtype` is the type of the reading of the left value.
	# `writetype` is the type of the writing of the left value.
	# (Because of `ACallReassignExpr`, both can be different.
	# Return the static type of the value to store.
	private fun resolve_reassignment(v: TypeVisitor, readtype, writetype: MType): nullable MType
	do
		var reassign_name = self.n_assign_op.operator

		self.read_type = readtype

		var callsite = v.get_method(self.n_assign_op, readtype, reassign_name, false)
		if callsite == null then return null # Skip error
		self.reassign_callsite = callsite

		var msignature = callsite.msignature
		var rettype = msignature.return_mtype
		assert msignature.arity == 1 and rettype != null

		var value_type = v.visit_expr_subtype(self.n_value, msignature.mparameters.first.mtype)
		if value_type == null then return null # Skip error

		v.check_subtype(self, rettype, writetype, false)
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

		read_type = readtype

		var writetype = variable.declared_type
		if writetype == null then return

		var rettype = self.resolve_reassignment(v, readtype, writetype)

		v.set_variable(self, variable, rettype)

		self.is_typed = rettype != null
	end
end


redef class AContinueExpr
	redef fun accept_typing(v)
	do
		var nexpr = self.n_expr
		if nexpr != null then
			v.visit_expr(nexpr)
		end
		self.is_typed = true
	end
end

redef class ABreakExpr
	redef fun accept_typing(v)
	do
		var nexpr = self.n_expr
		if nexpr != null then
			v.visit_expr(nexpr)
		end
		self.is_typed = true
	end
end

redef class AReturnExpr
	redef fun accept_typing(v)
	do
		var nexpr = self.n_expr
		var ret_type
		var mpropdef = v.mpropdef
		if mpropdef isa MMethodDef then
			ret_type = mpropdef.msignature.return_mtype
		else if mpropdef isa MAttributeDef then
			ret_type = mpropdef.static_mtype
		else
			abort
		end
		if nexpr != null then
			if ret_type != null then
				v.visit_expr_subtype(nexpr, ret_type)
			else
				v.visit_expr(nexpr)
				v.error(nexpr, "Error: `return` with value in a procedure.")
				return
			end
		else if ret_type != null then
			v.error(self, "Error: `return` without value in a function.")
			return
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

		if n_then != null and n_else == null then
			self.mtype = n_then.mtype
		end
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
			v.error(self, "Type Error: ambiguous type `{t1}` vs `{t2}`.")
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
		v.has_loop = true
		v.visit_expr_bool(n_expr)
		v.visit_stmt(n_block)
		self.is_typed = true
	end
end

redef class ALoopExpr
	redef fun accept_typing(v)
	do
		v.has_loop = true
		v.visit_stmt(n_block)
		self.is_typed = true
	end
end

redef class AForExpr
	var coltype: nullable MClassType

	var method_iterator: nullable CallSite
	var method_is_ok: nullable CallSite
	var method_item: nullable CallSite
	var method_next: nullable CallSite
	var method_key: nullable CallSite
	var method_finish: nullable CallSite

	var method_lt: nullable CallSite
	var method_successor: nullable CallSite

	private fun do_type_iterator(v: TypeVisitor, mtype: MType)
	do
		if mtype isa MNullType then
			v.error(self, "Type Error: `for` cannot iterate over `null`.")
			return
		end

		# get obj class
		var objcla = v.get_mclass(self, "Object")
		if objcla == null then return

		# check iterator method
		var itdef = v.get_method(self, mtype, "iterator", n_expr isa ASelfExpr)
		if itdef == null then
			v.error(self, "Type Error: `for` expects a type providing an `iterator` method, got `{mtype}`.")
			return
		end
		self.method_iterator = itdef

		# check that iterator return something
		var ittype = itdef.msignature.return_mtype
		if ittype == null then
			v.error(self, "Type Error: `for` expects the method `iterator` to return an `Iterator` or `MapIterator` type.")
			return
		end

		# get iterator type
		var colit_cla = v.try_get_mclass(self, "Iterator")
		var mapit_cla = v.try_get_mclass(self, "MapIterator")
		var is_col = false
		var is_map = false

		if colit_cla != null and v.is_subtype(ittype, colit_cla.get_mtype([objcla.mclass_type.as_nullable])) then
			# Iterator
			var coltype = ittype.supertype_to(v.mmodule, v.anchor, colit_cla)
			var variables =  self.variables
			if variables.length != 1 then
				v.error(self, "Type Error: `for` expects only one variable when using `Iterator`.")
			else
				variables.first.declared_type = coltype.arguments.first
			end
			is_col = true
		end

		if mapit_cla != null and v.is_subtype(ittype, mapit_cla.get_mtype([objcla.mclass_type.as_nullable, objcla.mclass_type.as_nullable])) then
			# Map Iterator
			var coltype = ittype.supertype_to(v.mmodule, v.anchor, mapit_cla)
			var variables = self.variables
			if variables.length != 2 then
				v.error(self, "Type Error: `for` expects two variables when using `MapIterator`.")
			else
				variables[0].declared_type = coltype.arguments[0]
				variables[1].declared_type = coltype.arguments[1]
			end
			is_map = true
		end

		if not is_col and not is_map then
			v.error(self, "Type Error: `for` expects the method `iterator` to return an `Iterator` or `MapIterator` type.")
			return
		end

		# anchor formal and virtual types
		if mtype.need_anchor then mtype = v.anchor_to(mtype)

		mtype = mtype.undecorate
		self.coltype = mtype.as(MClassType)

		# get methods is_ok, next, item
		var ikdef = v.get_method(self, ittype, "is_ok", false)
		if ikdef == null then
			v.error(self, "Type Error: `for` expects a method `is_ok` in type `{ittype}`.")
			return
		end
		self.method_is_ok = ikdef

		var itemdef = v.get_method(self, ittype, "item", false)
		if itemdef == null then
			v.error(self, "Type Error: `for` expects a method `item` in type `{ittype}`.")
			return
		end
		self.method_item = itemdef

		var nextdef = v.get_method(self, ittype, "next", false)
		if nextdef == null then
			v.error(self, "Type Error: `for` expects a method `next` in type {ittype}.")
			return
		end
		self.method_next = nextdef

		self.method_finish = v.try_get_method(self, ittype, "finish", false)

		if is_map then
			var keydef = v.get_method(self, ittype, "key", false)
			if keydef == null then
				v.error(self, "Type Error: `for` expects a method `key` in type `{ittype}`.")
				return
			end
			self.method_key = keydef
		end

		if self.variables.length == 1 and n_expr isa ARangeExpr then
			var variable = variables.first
			var vtype = variable.declared_type.as(not null)

			if n_expr isa AOrangeExpr then
				self.method_lt = v.get_method(self, vtype, "<", false)
			else
				self.method_lt = v.get_method(self, vtype, "<=", false)
			end

			self.method_successor = v.get_method(self, vtype, "successor", false)
		end
	end

	redef fun accept_typing(v)
	do
		v.has_loop = true
		var mtype = v.visit_expr(n_expr)
		if mtype == null then return

		self.do_type_iterator(v, mtype)

		v.visit_stmt(n_block)

		self.mtype = n_block.mtype
		self.is_typed = true
	end
end

redef class AWithExpr
	var method_start: nullable CallSite
	var method_finish: nullable CallSite

	redef fun accept_typing(v: TypeVisitor)
	do
		var mtype = v.visit_expr(n_expr)
		if mtype == null then return

		method_start = v.get_method(self, mtype, "start", n_expr isa ASelfExpr)
		method_finish = v.get_method(self, mtype, "finish", n_expr isa ASelfExpr)

		v.visit_stmt(n_block)
		self.mtype = n_block.mtype
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

redef class AImpliesExpr
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

		if t1 isa MNullType then
			v.error(n_expr, "Type Error: `or else` on `null`.")
		else if v.check_can_be_null(n_expr, t1) then
			t1 = t1.as_notnull
		end

		var t = v.merge_types(self, [t1, t2])
		if t == null then
			var c = v.get_mclass(self, "Object")
			if c == null then return # forward error
			t = c.mclass_type
			if v.can_be_null(t2) then
				t = t.as_nullable
			end
			#v.error(self, "Type Error: ambiguous type {t1} vs {t2}")
		end
		self.mtype = t
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

redef class AByteExpr
	redef fun accept_typing(v)
	do
		var mclass = v.get_mclass(self, "Byte")
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
		var objclass = v.get_mclass(self, "Object")
		if objclass == null then return # Forward error
		var objtype = objclass.mclass_type
		for nexpr in self.n_exprs do
			v.visit_expr_subtype(nexpr, objtype)
		end
	end
end

redef class AArrayExpr
	# The `with_capacity` method on Array
	var with_capacity_callsite: nullable CallSite

	# The `push` method on arrays
	var push_callsite: nullable CallSite

	# The element of each type
	var element_mtype: nullable MType

	# Set that `self` is a part of comprehension array `na`
	# If `self` is a `for`, or a `if`, then `set_comprehension` is recursively applied.
	private fun set_comprehension(n: nullable AExpr)
	do
		if n == null then
			return
		else if n isa AForExpr then
			set_comprehension(n.n_block)
		else if n isa AIfExpr then
			set_comprehension(n.n_then)
			set_comprehension(n.n_else)
		else
			# is a leave
			n.comprehension = self
		end
	end
	redef fun accept_typing(v)
	do
		var mtype: nullable MType = null
		var ntype = self.n_type
		if ntype != null then
			mtype = v.resolve_mtype(ntype)
			if mtype == null then return # Skip error
		end
		var mtypes = new Array[nullable MType]
		var useless = false
		for e in self.n_exprs do
			var t = v.visit_expr(e)
			if t == null then
				return # Skip error
			end
			set_comprehension(e)
			if mtype != null then
				if v.check_subtype(e, t, mtype, false) == null then return # Forward error
				if t == mtype then useless = true
			else
				mtypes.add(t)
			end
		end
		if mtype == null then
			# Ensure monotony for type adaptation on loops
			if self.element_mtype != null then mtypes.add self.element_mtype
			mtype = v.merge_types(self, mtypes)
		end
		if mtype == null or mtype isa MNullType then
			v.error(self, "Type Error: ambiguous array type {mtypes.join(" ")}")
			return
		end
		if useless then
			assert ntype != null
			v.modelbuilder.warning(ntype, "useless-type", "Warning: useless type declaration `{mtype}` in literal Array since it can be inferred from the elements type.")
		end

		self.element_mtype = mtype

		var mclass = v.get_mclass(self, "Array")
		if mclass == null then return # Forward error
		var array_mtype = mclass.get_mtype([mtype])

		with_capacity_callsite = v.get_method(self, array_mtype, "with_capacity", false)
		push_callsite = v.get_method(self, array_mtype, "push", false)

		self.mtype = array_mtype
	end
end

redef class ARangeExpr
	var init_callsite: nullable CallSite

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
		var mtype
		if v.is_subtype(t1, t2) then
			mtype = mclass.get_mtype([t2])
		else if v.is_subtype(t2, t1) then
			mtype = mclass.get_mtype([t1])
		else
			v.error(self, "Type Error: cannot create range: `{t1}` vs `{t2}`.")
			return
		end

		self.mtype = mtype

		# get the constructor
		var callsite
		if self isa ACrangeExpr then
			callsite = v.get_method(self, mtype, "init", false)
		else if self isa AOrangeExpr then
			callsite = v.get_method(self, mtype, "without_last", false)
		else
			abort
		end
		init_callsite = callsite
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
	# (different from the static type of the expression that is `Bool`).
	var cast_type: nullable MType
	redef fun accept_typing(v)
	do
		var mtype = v.visit_expr_cast(self, self.n_expr, self.n_type)
		self.cast_type = mtype

		var variable = self.n_expr.its_variable
		if variable != null then
			#var orig = self.n_expr.mtype
			#var from = if orig != null then orig.to_s else "invalid"
			#var to = if mtype != null then mtype.to_s else "invalid"
			#debug("adapt {variable}: {from} -> {to}")
			self.after_flow_context.when_true.set_var(v, variable, mtype)
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
		if mtype == null then return # Forward error

		if mtype isa MNullType then
			v.error(self, "Type Error: `as(not null)` on `null`.")
			return
		end

		if v.check_can_be_null(n_expr, mtype) then
			mtype = mtype.as_notnull
		end

		self.mtype = mtype
	end
end

redef class AParExpr
	redef fun accept_typing(v)
	do
		self.mtype = v.visit_expr(self.n_expr)
	end
end

redef class AOnceExpr
	redef fun accept_typing(v)
	do
		self.mtype = v.visit_expr(self.n_expr)
	end
end

redef class ASelfExpr
	redef var its_variable: nullable Variable
	redef fun accept_typing(v)
	do
		if v.is_toplevel_context and not self isa AImplicitSelfExpr then
			v.error(self, "Error: `self` cannot be used in top-level method.")
		end
		var variable = v.selfvariable
		self.its_variable = variable
		self.mtype = v.get_variable(self, variable)
	end
end

redef class AImplicitSelfExpr
	# Is the implicit receiver `sys`?
	#
	# By default, the implicit receiver is `self`.
	# But when there is not method for `self`, `sys` is used as a fall-back.
	# Is this case this flag is set to `true`.
	var is_sys = false
end

## MESSAGE SENDING AND PROPERTY

redef class ASendExpr
	# The property invoked by the send.
	var callsite: nullable CallSite

	redef fun accept_typing(v)
	do
		var nrecv = self.n_expr
		var recvtype = v.visit_expr(nrecv)
		var name = self.property_name
		var node = self.property_node

		if recvtype == null then return # Forward error

		var callsite = null
		var unsafe_type = v.anchor_to(recvtype)
		var mproperty = v.try_get_mproperty_by_name2(node, unsafe_type, name)
		if mproperty == null and nrecv isa AImplicitSelfExpr then
			# Special fall-back search in `sys` when noting found in the implicit receiver.
			var sysclass = v.try_get_mclass(node, "Sys")
			if sysclass != null then
				var systype = sysclass.mclass_type
				mproperty = v.try_get_mproperty_by_name2(node, systype, name)
				if mproperty != null then
					callsite = v.get_method(node, systype, name, false)
					if callsite == null then return # Forward error
					# Update information, we are looking at `sys` now, not `self`
					nrecv.is_sys = true
					nrecv.its_variable = null
					nrecv.mtype = systype
					recvtype = systype
				end
			end
		end
		if callsite == null then
			# If still nothing, just exit
			callsite = v.get_method(node, recvtype, name, nrecv isa ASelfExpr)
			if callsite == null then return
		end

		self.callsite = callsite
		var msignature = callsite.msignature

		var args = compute_raw_arguments

		callsite.check_signature(v, args)

		if callsite.mproperty.is_init then
			var vmpropdef = v.mpropdef
			if not (vmpropdef isa MMethodDef and vmpropdef.mproperty.is_init) then
				v.error(node, "Error: an `init` can only be called from another `init`.")
			end
			if vmpropdef isa MMethodDef and vmpropdef.mproperty.is_root_init and not callsite.mproperty.is_root_init then
				v.error(node, "Error: `{vmpropdef}` cannot call a factory `{callsite.mproperty}`.")
			end
		end

		var ret = msignature.return_mtype
		if ret != null then
			self.mtype = ret
		else
			self.is_typed = true
		end
	end

	# The name of the property
	# Each subclass simply provide the correct name.
	private fun property_name: String is abstract

	# The node identifying the name (id, operator, etc) for messages.
	#
	# Is `self` by default
	private fun property_node: ANode do return self

	# An array of all arguments (excluding self)
	fun raw_arguments: Array[AExpr] do return compute_raw_arguments

	private fun compute_raw_arguments: Array[AExpr] is abstract
end

redef class ABinopExpr
	redef fun compute_raw_arguments do return [n_expr2]
	redef fun property_name do return operator
	redef fun property_node do return n_op
end
redef class AEqExpr
	redef fun accept_typing(v)
	do
		super
		v.null_test(self)
	end
end
redef class ANeExpr
	redef fun accept_typing(v)
	do
		super
		v.null_test(self)
	end
end

redef class AUnaryopExpr
	redef fun property_name do return "unary {operator}"
	redef fun compute_raw_arguments do return new Array[AExpr]
end


redef class ACallExpr
	redef fun property_name do return n_id.text
	redef fun property_node do return n_id
	redef fun compute_raw_arguments do return n_args.to_a
end

redef class ACallAssignExpr
	redef fun property_name do return n_id.text + "="
	redef fun property_node do return n_id
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
	# The property invoked for the writing
	var write_callsite: nullable CallSite

	redef fun accept_typing(v)
	do
		var recvtype = v.visit_expr(self.n_expr)
		var name = self.property_name
		var node = self.property_node

		if recvtype == null then return # Forward error

		var for_self = self.n_expr isa ASelfExpr
		var callsite = v.get_method(node, recvtype, name, for_self)

		if callsite == null then return
		self.callsite = callsite

		var args = compute_raw_arguments

		callsite.check_signature(v, args)

		var readtype = callsite.msignature.return_mtype
		if readtype == null then
			v.error(node, "Error: `{name}` is not a function.")
			return
		end

		var wcallsite = v.get_method(node, recvtype, name + "=", self.n_expr isa ASelfExpr)
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
	redef fun property_node do return n_id
	redef fun compute_raw_arguments do return n_args.to_a
end

redef class ABraReassignExpr
	redef fun property_name do return "[]"
	redef fun compute_raw_arguments do return n_args.to_a
end

redef class AInitExpr
	redef fun property_name do return "init"
	redef fun property_node do return n_kwinit
	redef fun compute_raw_arguments do return n_args.to_a
end

redef class AExprs
	fun to_a: Array[AExpr] do return self.n_exprs.to_a
end

###

redef class ASuperExpr
	# The method to call if the super is in fact a 'super init call'
	# Note: if the super is a normal call-next-method, then this attribute is null
	var callsite: nullable CallSite

	# The method to call is the super is a standard `call-next-method` super-call
	# Note: if the super is a special super-init-call, then this attribute is null
	var mpropdef: nullable MMethodDef

	redef fun accept_typing(v)
	do
		var anchor = v.anchor
		assert anchor != null
		var recvtype = v.get_variable(self, v.selfvariable)
		assert recvtype != null
		var mproperty = v.mpropdef.mproperty
		if not mproperty isa MMethod then
			v.error(self, "Error: `super` only usable in a `method`.")
			return
		end
		var superprops = mproperty.lookup_super_definitions(v.mmodule, anchor)
		if superprops.length == 0 then
			if mproperty.is_init and v.mpropdef.is_intro then
				process_superinit(v)
				return
			end
			v.error(self, "Error: no super method to call for `{mproperty}`.")
			return
		end
		# FIXME: covariance of return type in linear extension?
		var superprop = superprops.first

		var msignature = superprop.msignature.as(not null)
		msignature = v.resolve_for(msignature, recvtype, true).as(MSignature)
		var args = self.n_args.to_a
		if args.length > 0 then
			signaturemap = v.check_signature(self, args, mproperty, msignature)
		end
		self.mtype = msignature.return_mtype
		self.is_typed = true
		v.mpropdef.has_supercall = true
		mpropdef = v.mpropdef.as(MMethodDef)
	end

	# The mapping used on the call to associate arguments to parameters.
	# If null then no specific association is required.
	var signaturemap: nullable SignatureMap

	private fun process_superinit(v: TypeVisitor)
	do
		var anchor = v.anchor
		assert anchor != null
		var recvtype = v.get_variable(self, v.selfvariable)
		assert recvtype != null
		var mpropdef = v.mpropdef
		assert mpropdef isa MMethodDef
		var mproperty = mpropdef.mproperty
		var superprop: nullable MMethodDef = null
		for msupertype in mpropdef.mclassdef.supertypes do
			msupertype = msupertype.anchor_to(v.mmodule, anchor)
			var errcount = v.modelbuilder.toolcontext.error_count
			var candidate = v.try_get_mproperty_by_name2(self, msupertype, mproperty.name).as(nullable MMethod)
			if candidate == null then
				if v.modelbuilder.toolcontext.error_count > errcount then return # Forward error
				continue # Try next super-class
			end
			if superprop != null and candidate.is_root_init then
				continue
			end
			if superprop != null and superprop.mproperty != candidate and not superprop.mproperty.is_root_init then
				v.error(self, "Error: conflicting super constructor to call for `{mproperty}`: `{candidate.full_name}`, `{superprop.mproperty.full_name}`")
				return
			end
			var candidatedefs = candidate.lookup_definitions(v.mmodule, anchor)
			if superprop != null and superprop.mproperty == candidate then
				if superprop == candidatedefs.first then continue
				candidatedefs.add(superprop)
			end
			if candidatedefs.length > 1 then
				v.error(self, "Error: conflicting property definitions for property `{mproperty}` in `{recvtype}`: {candidatedefs.join(", ")}")
				return
			end
			superprop = candidatedefs.first
		end
		if superprop == null then
			v.error(self, "Error: no super method to call for `{mproperty}`.")
			return
		end

		var msignature = superprop.new_msignature or else superprop.msignature.as(not null)
		msignature = v.resolve_for(msignature, recvtype, true).as(MSignature)

		var callsite = new CallSite(self, recvtype, v.mmodule, v.anchor, true, superprop.mproperty, superprop, msignature, false)
		self.callsite = callsite

		var args = self.n_args.to_a
		if args.length > 0 then
			callsite.check_signature(v, args)
		else
			# Check there is at least enough parameters
			if mpropdef.msignature.arity < msignature.arity then
				v.error(self, "Error: not enough implicit arguments to pass. Got `{mpropdef.msignature.arity}`, expected at least `{msignature.arity}`. Signature is `{msignature}`.")
				return
			end
			# Check that each needed parameter is conform
			var i = 0
			for sp in msignature.mparameters do
				var p = mpropdef.msignature.mparameters[i]
				if not v.is_subtype(p.mtype, sp.mtype) then
					v.error(self, "Type Error: expected argument #{i} of type `{sp.mtype}`, got implicit argument `{p.name}` of type `{p.mtype}`. Signature is {msignature}")
					return
				end
				i += 1
			end
		end

		self.is_typed = true
	end
end

####

redef class ANewExpr
	# The constructor invoked by the new.
	var callsite: nullable CallSite

	# The designated type
	var recvtype: nullable MClassType

	redef fun accept_typing(v)
	do
		var recvtype = v.resolve_mtype(self.n_type)
		if recvtype == null then return

		if not recvtype isa MClassType then
			if recvtype isa MNullableType then
				v.error(self, "Type Error: cannot instantiate the nullable type `{recvtype}`.")
				return
			else if recvtype isa MFormalType then
				v.error(self, "Type Error: cannot instantiate the formal type `{recvtype}`.")
				return
			else
				v.error(self, "Type Error: cannot instantiate the type `{recvtype}`.")
				return
			end
		end

		self.recvtype = recvtype
		var kind = recvtype.mclass.kind

		var name: String
		var nid = self.n_id
		var node: ANode
		if nid != null then
			name = nid.text
			node = nid
		else
			name = "new"
			node = self.n_kwnew
		end
		if name == "intern" then
			if kind != concrete_kind then
				v.error(self, "Type Error: cannot instantiate {kind} {recvtype}.")
				return
			end
			if n_args.n_exprs.not_empty then
				v.error(n_args, "Type Error: the intern constructor expects no arguments.")
				return
			end
			# Our job is done
			self.mtype = recvtype
			return
		end

		var callsite = v.get_method(node, recvtype, name, false)
		if callsite == null then return

		if not callsite.mproperty.is_new then
			if kind != concrete_kind then
				v.error(self, "Type Error: cannot instantiate {kind} `{recvtype}`.")
				return
			end
			self.mtype = recvtype
		else
			self.mtype = callsite.msignature.return_mtype
			assert self.mtype != null
		end

		self.callsite = callsite

		if not callsite.mproperty.is_init_for(recvtype.mclass) then
			v.error(self, "Error: `{name}` is not a constructor.")
			return
		end

		var args = n_args.to_a
		callsite.check_signature(v, args)
	end
end

####

redef class AAttrFormExpr
	# The attribute accessed.
	var mproperty: nullable MAttribute

	# The static type of the attribute.
	var attr_type: nullable MType

	# Resolve the attribute accessed.
	private fun resolve_property(v: TypeVisitor)
	do
		var recvtype = v.visit_expr(self.n_expr)
		if recvtype == null then return # Skip error
		var node = self.n_id
		var name = node.text
		if recvtype isa MNullType then
			v.error(node, "Error: attribute `{name}` access on `null`.")
			return
		end

		var unsafe_type = v.anchor_to(recvtype)
		var mproperty = v.try_get_mproperty_by_name2(node, unsafe_type, name)
		if mproperty == null then
			v.modelbuilder.error(node, "Error: attribute `{name}` does not exist in `{recvtype}`.")
			return
		end
		assert mproperty isa MAttribute
		self.mproperty = mproperty

		var mpropdefs = mproperty.lookup_definitions(v.mmodule, unsafe_type)
		assert mpropdefs.length == 1
		var mpropdef = mpropdefs.first
		var attr_type = mpropdef.static_mtype
		if attr_type == null then return # skip error
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
		self.is_typed = mtype != null
	end
end

redef class AAttrReassignExpr
	redef fun accept_typing(v)
	do
		self.resolve_property(v)
		var mtype = self.attr_type
		if mtype == null then return # Skip error

		var rettype = self.resolve_reassignment(v, mtype, mtype)

		self.is_typed = rettype != null
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
			v.error(n_id, "Type Error: `isset` on a nullable attribute.")
		end
		self.mtype = v.type_bool(self)
	end
end

redef class AVarargExpr
	redef fun accept_typing(v)
	do
		# This kind of pseudo-expression can be only processed trough a signature
		# See `check_signature`
		# Other cases are a syntax error.
		v.error(self, "Syntax Error: unexpected `...`.")
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
			v.modelbuilder.warning(self, "debug", "Found type {expr} (-> {unsafe}), expected {mtype} (-> {umtype})")
		end
		self.is_typed = true
	end
end
