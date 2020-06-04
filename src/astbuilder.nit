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

# Instantiation and transformation of semantic nodes in the AST of expressions and statements
module astbuilder

intrude import semantize::typing
intrude import literal
intrude import parser
intrude import semantize::scope
intrude import modelbuilder_base
intrude import modelize_property

# General factory to build semantic nodes in the AST of expressions
class ASTBuilder
	# The module used as reference for the building
	# It is used to gather types and other stuff
	var mmodule: MModule

	# The anchor used for some mechanism relying on types
	var anchor: nullable MClassType

	# Check mmodule to avoid a new instantiation of ASTBuilder
	fun check_mmodule(mmodule: MModule)
	do
		if self.mmodule != mmodule then self.mmodule = mmodule
	end

	# Make a new Int literal
	fun make_int(value: Int): AIntegerExpr
	do
		return new AIntegerExpr.make(value, mmodule.int_type)
	end

	# Make a new instantiation
	fun make_new(callsite: CallSite, args: nullable Array[AExpr]): ANewExpr
	do
		return new ANewExpr.make(callsite, args)
	end

	# Make a new message send
	fun make_call(recv: AExpr, callsite: CallSite, args: nullable Array[AExpr]): ACallExpr
	do
		return new ACallExpr.make(recv, callsite, args)
	end

	# Make a new, empty, sequence of statements
	fun make_block: ABlockExpr
	do
		return new ABlockExpr.make
	end

	# Make a new, empty, loop of statements
	fun make_loop: ALoopExpr
	do
		return new ALoopExpr.make
	end

	# Make a new variable read
	fun make_var_read(variable: Variable, mtype: MType): AVarExpr
	do
		return new AVarExpr.make(variable, mtype)
	end

	# Make a new variable assignment
	fun make_var_assign(variable: Variable, value: AExpr): AVarAssignExpr
	do
		return new AVarAssignExpr.make(variable, value)
	end

	# Make a new attribute read
	fun make_attr_read(recv: AExpr, attribute: MAttribute): AAttrExpr
	do
		var mtype = attribute.intro.static_mtype.resolve_for(recv.mtype.as(not null), anchor, mmodule, true)
		return new AAttrExpr.make(recv, attribute, mtype)
	end

	# Make a new attribute assignment
	fun make_attr_assign(recv: AExpr, attribute: MAttribute, value: AExpr): AAttrAssignExpr
	do
		return new AAttrAssignExpr.make(recv, attribute, value)
	end

	# Make a new escapable block
	fun make_do: ADoExpr
	do
		return new ADoExpr.make
	end

	# Make a new break for a given escapemark
	fun make_break(escapemark: EscapeMark): ABreakExpr
	do
		return new ABreakExpr.make(escapemark)
	end

	# Make a new conditional
	# `mtype` is the return type of the whole if, in case of a ternary operator.
	fun make_if(condition: AExpr, mtype: nullable MType): AIfExpr
	do
		return new AIfExpr.make(condition, mtype)
	end

	# Make a new assert
	fun make_assert(n_id : nullable TId , n_expr : AExpr , n_else : nullable AExpr): AAssertExpr
	do
		return new AAssertExpr.make(n_id , n_expr , n_else)
	end

	# Make a new method
	fun make_method(n_visibility: nullable AVisibility,
					tk_redef: nullable TKwredef,
					mmethoddef: nullable MMethodDef,
					n_signature: nullable ASignature,
					n_annotations: nullable AAnnotations,
					n_extern_calls: nullable AExternCalls,
					n_extern_code_block: nullable AExternCodeBlock,
					n_block: nullable AExpr): AMethPropdef
	do
		return new AMethPropdef.make(n_visibility, tk_redef, mmethoddef, n_signature, n_annotations, n_extern_calls, n_extern_code_block, n_block)
	end

	# Make a new or with two expr
	fun make_or(right_expr: AExpr, left_expr: AExpr): AOrExpr
	do
		return new AOrExpr.make(right_expr,left_expr)
	end

	# Make a new and with two expr
	fun make_and(right_expr: AExpr, left_expr: AExpr): AAndExpr
	do
		return new AAndExpr.make(right_expr,left_expr)
	end

	# Make a new parenthesis expr
	fun make_parenthesis(expr: AExpr, annotations: nullable AAnnotations): AParExpr
	do
		return new AParExpr.make(expr,annotations)
	end

	# Make a new message super
	fun make_super_call(args: nullable Array[AExpr], n_qualified: nullable AQualified): ASuperExpr
	do
		return new ASuperExpr.make(args,n_qualified)
	end

	# Make a new return
	fun make_return(expr: nullable AExpr): AReturnExpr
	do
		return new AReturnExpr.make(expr)
	end

	# Make a new not
	fun make_not(expr: AExpr): ANotExpr
	do
		return new ANotExpr.make(expr)
	end

	# Make a new attribute
	fun make_attribute(name: String,
					n_type: nullable AType,
					n_visibility: nullable AVisibility,
					initial_value: nullable AExpr,
					n_block: nullable AExpr,
					m_attributedef: nullable MAttributeDef,
					m_setterdef: nullable MMethodDef,
					m_getterdef: nullable MMethodDef): AAttrPropdef
	do
		return new AAttrPropdef.make(name, n_type, n_visibility, initial_value, n_block, m_attributedef, m_setterdef, m_getterdef)
	end

	# Make a new class (AStdClassdef)
	fun make_class(mclassdef: nullable MClassDef,
					n_visibility: nullable AVisibility,
					n_formaldefs : Collection[AFormaldef],
					n_extern_code_block : nullable AExternCodeBlock,
					n_propdefs : Collection[APropdef],
					n_classkind: nullable AClasskind): AStdClassdef
	do
		return new AStdClassdef.make(mclassdef, n_visibility, n_formaldefs, n_extern_code_block, n_propdefs, n_classkind)
	end

	fun make_var(variable: Variable, mtype: MType): AVarExpr
	do
		return new AVarExpr.make(variable, mtype)
	end

	# Make a call assignment i.e `a = 10`
	fun make_call_assign(recv: AExpr, callsite: CallSite, n_args: nullable Collection[AExpr], n_value: AExpr): ACallAssignExpr
	do
		return new ACallAssignExpr.make(recv, callsite, n_args, n_value)
	end

	# Build a callsite to call the `mproperty` in the current method `caller_method`.
	# `is_self_call` indicate if the method caller is a property of `self`
	fun create_callsite(modelbuilder: ModelBuilder, caller_property: APropdef, mproperty: MMethod, is_self_call: Bool): CallSite
	do
		# FIXME It's not the better solution to call `TypeVisitor` here to build a model entity, but some make need to have a callsite
		var type_visitor = new TypeVisitor(modelbuilder, caller_property.mpropdef.as(not null))
		var callsite = type_visitor.build_callsite_by_property(caller_property, mproperty.intro_mclassdef.bound_mtype, mproperty, is_self_call)
		assert callsite != null
		return callsite
	end
end

redef class AExpr
	# Return a new variable read that contains the value of the expression
	# This method take care efficiently of creating and initalising an anonymous local variable
	#
	# Note: since this method do side-effects (AST replacement), there could be unexpected effects when used as
	# argument of other methods related to AST transformations.
	fun make_var_read: AVarExpr
	do
		var variable = self.variable_cache
		if variable == null then
			assert parent != null
			var place = detach_with_placeholder
			variable = new Variable("")
			variable.declared_type = self.mtype
			var nvar = new AVarAssignExpr.make(variable, self)
			place.replace_with(nvar)
			self.variable_cache = variable
		end
		return new AVarExpr.make(variable, variable.declared_type.as(not null))
	end

	private var variable_cache: nullable Variable

	# The `detach` method completely remove the node in the parent.
	# However, sometime, it is useful to keep the emplacement of the removed child.
	#
	# The standard use case is the insertion of a node between a parent `p` and a child `p.c`.
	# To create the new node `n`, we need to attach the child to it.
	# But, to put `n` where `c` was in `p`, the place has to be remembered.
	#
	# ~~~nitish
	# var p: AExpr
	# var c = p.c
	# var h = c.detach_with_placeholder
	# var n = astbuilder.make_XXX(c)
	# h.replace_with(n)
	# ~~~
	fun detach_with_placeholder: AExpr
	do
		var h = new APlaceholderExpr.make
		self.replace_with(h)
		return h
	end


	# Add `expr` at the end of the block
	#
	# REQUIRE: self isa ABlockExpr
	#
	# Note: this method, aimed to `ABlockExpr` is promoted to `AExpr` because of the limitations of the hierarchies generated by sablecc3
	fun add(expr: AExpr)
	do
		print "add not implemented in {inspect}"
		abort
	end

	redef fun accept_ast_validation(v)
	do
		super
		if mtype == null and not is_typed then
			#debug "TYPING: untyped expression"
		end
	end
end

# A placeholder for a `AExpr` node
# Instances are transiantly used to mark some specific emplacements in the AST
# during complex transformations.
#
# Their must not appear in a valid AST
#
# @see AExpr::detach_with_placeholder
class APlaceholderExpr
	super AExpr
	private init make
	do
	end

	redef fun accept_ast_validation(v)
	do
		super
		debug "PARENT: remaining placeholder"
	end
end

redef class ACallAssignExpr
	private init make(recv: AExpr, callsite: CallSite, args: nullable Collection[AExpr], n_value: AExpr)
	do
		_callsite = callsite
		_mtype = callsite.recv
		_is_typed = true
		var n_args = new AListExprs
		if args != null then
			n_args.n_exprs.add_all(args)
		end
		var n_qid = new AQid
		n_qid.n_id = new TId
		n_qid.n_id.text = callsite.mproperty.name
		init_acallassignexpr(recv, n_qid, n_args, new TAssign, n_value)
	end
end

redef class AStdClassdef
	private init make(mclassdef: nullable MClassDef,
					n_visibility: nullable AVisibility,
					n_formaldefs : Collection[Object],
					n_extern_code_block : nullable AExternCodeBlock,
					n_propdefs : Collection[Object],
					n_classkind: nullable AClasskind)
	do
		if n_visibility == null then n_visibility = new APublicVisibility
		if n_classkind == null then n_classkind = new AConcreteClasskind.init_aconcreteclasskind(new TKwclass)
		var n_qid = new AQclassid.init_aqclassid(null, new TClassid)
		init_astdclassdef(null, null, n_visibility, n_classkind, n_qid, null, n_formaldefs, null, n_extern_code_block, n_propdefs, new TKwend)
		_mclassdef = mclassdef
		_mclass = mclassdef.mclass
	end
end

redef class AAttrPropdef

	# Create a new `AAttrPropdef`
	# Note: By default if the `AVisibility` is not given the visibility is set to public
	private init make(name: String,
					n_type: nullable AType,
					n_visibility: nullable AVisibility,
					initial_value: nullable AExpr,
					n_block: nullable AExpr,
					m_attributedef: nullable MAttributeDef,
					m_setterdef: nullable MMethodDef,
					m_getterdef: nullable MMethodDef)
	do
		# Set the model type
		if n_type != null then mtype = n_type.mtype
		# Define the visibility default is public
		if n_visibility == null then n_visibility = new APublicVisibility
		init_aattrpropdef(null, null, n_visibility, new TKwvar, new TId, n_type, null, initial_value, null, null , n_block, null)
		# Set the name of the attribute
		_n_id2.text = name
		_mpropdef = m_attributedef
		_mreadpropdef = m_getterdef
		_mwritepropdef = m_setterdef
		if initial_value != null or n_block != null then has_value = true
		if m_attributedef != null then self.location = m_attributedef.location
	end
end

redef class ANotExpr
	private init make(expr: AExpr)
	do
		self.init_anotexpr(new TKwnot, expr)
	end
end

redef class AReturnExpr
	private init make(expr: nullable AExpr)
	do
		self.init_areturnexpr(null, expr)
	end
end

redef class ASuperExpr
	private init make(args: nullable Array[AExpr], n_qualified: nullable AQualified, mpropdef: nullable MMethodDef)
	do
		var n_args = new AListExprs
		if args != null then
			n_args.n_exprs.add_all(args)
		end
		_mpropdef = mpropdef
		self.init_asuperexpr(n_qualified, new TKwsuper, n_args)
	end
end

redef class AOrExpr
	private init make(right_expr: AExpr, left_expr: AExpr)
	do
		self.init_aorexpr(right_expr,new TKwor,left_expr)
	end
end

redef class AAndExpr
	private init make(right_expr: AExpr, left_expr: AExpr)
	do
		self.init_aandexpr(right_expr,new TKwand ,left_expr)
	end
end

redef class AMethPropdef
	private init make(n_visibility: nullable AVisibility,
					tk_redef: nullable TKwredef,
					mmethoddef: nullable MMethodDef,
					n_signature: nullable ASignature,
					n_annotations: nullable AAnnotations,
					n_extern_calls: nullable AExternCalls,
					n_extern_code_block: nullable AExternCodeBlock,
					n_block: nullable AExpr)
	do
		var n_tid = new TId
		var n_methid = new AIdMethid.init_aidmethid(n_tid)
		if n_signature == null then n_signature = new ASignature
		if n_visibility == null then n_visibility = new APublicVisibility
		self.init_amethpropdef(null,tk_redef,n_visibility,new TKwmeth,null,null,null,n_methid,n_signature,n_annotations,n_extern_calls,n_extern_code_block,new TKwdo,n_block,new TKwend)
		self.mpropdef = mmethoddef
		if mpropdef != null then self.location = mmethoddef.location
	end

	# Execute all method verification scope flow and typing.
	# It also execute an ast validation to define all parents and all locations
	fun do_all(toolcontext: ToolContext)
	do
		self.validate
		# FIXME: The `do_` usage it is maybe to much (verification...). Solution: Cut the `do_` methods into simpler parts
		self.do_scope(toolcontext)
		self.do_flow(toolcontext)
		self.do_typing(toolcontext.modelbuilder)
	end
end

redef class AAssertExpr
	private init make(n_id : nullable TId , n_expr : nullable AExpr , n_else : nullable AExpr)
	do
		n_kwassert = new TKwassert
		n_kwelse = null
		if n_else != null then n_kwelse = new TKwelse
		self.init_aassertexpr(n_kwassert, n_id , n_expr , n_kwelse , n_else)
	end
end

redef class ALoopExpr
	private init make
	do
		_n_kwloop = new TKwloop
		self.is_typed = true
		n_block = new ABlockExpr
		n_block.is_typed = true
	end

	redef fun add(expr)
	do
		n_block.add expr
	end
end

redef class ADoExpr
	private init make
	do
		_n_kwdo = new TKwdo
		self.is_typed = true
		n_block = new ABlockExpr
		n_block.is_typed = true
	end

	# Make a new break expression of the given do
	fun make_break: ABreakExpr
	do
		var escapemark = self.break_mark
		if escapemark == null then
			escapemark = new EscapeMark(null)
			self.break_mark = escapemark
		end
		return new ABreakExpr.make(escapemark)
	end

	redef fun add(expr)
	do
		n_block.add expr
	end
end

redef class ABreakExpr
	private init make(escapemark: EscapeMark)
	do
		_n_kwbreak = new TKwbreak
		self.escapemark = escapemark
		escapemark.escapes.add self
		self.is_typed = true
	end
end

redef class AIfExpr
	private init make(condition: AExpr, mtype: nullable MType)
	do
		_n_kwif = new TKwif
		_n_expr = condition
		_n_expr.parent = self
		_n_kwthen = new TKwthen
		_n_then = new ABlockExpr.make
		_n_kwelse = new TKwelse
		_n_else = new ABlockExpr.make
		self.mtype = mtype
		if mtype != null then self.is_typed = true
	end
end

redef class AType

	private init make(t: nullable MType)
	do
		var n_id = new TClassid
		var n_qid = new AQclassid
		n_qid.n_id = n_id
		_n_qid = n_qid
		_mtype = t
	end

	redef fun clone: SELF
	do
		return new AType.make(mtype)
	end
end

# Primitive type

redef class AIntegerExpr

	private init make(value: nullable Numeric, t: nullable MType)
	do
		_mtype = t
		if t != null then self.is_typed = true
		_value = value
		_n_integer = new TInteger # dummy
	end

	redef fun clone: SELF
	do
		return new AIntegerExpr.make(value, mtype)
	end
end

redef class AFloatExpr

	private init make(value: nullable Float, t: nullable MType)
	do
		_mtype = t
		if t != null then self.is_typed = true
		_value = value
		_n_float = new TFloat # dummy
	end

	redef fun clone: SELF
	do
		return new AFloatExpr.make(value, mtype)
	end
end

redef class ATrueExpr

	private init make(t: nullable MType)
	do
		init_atrueexpr(new TKwtrue, null)
		_mtype = t
		if t != null then self.is_typed = true
	end

	redef fun clone: SELF
	do
		return new ATrueExpr.make(mtype)
	end
end

redef class AFalseExpr

	private init make(t: nullable MType)
	do
		init_afalseexpr(new TKwfalse, null)
		_mtype = t
		if t != null then self.is_typed = true
	end

	redef fun clone: SELF
	do
		return new AFalseExpr.make(mtype)
	end
end

redef class ACharExpr

	# `token_text` represent the real value as it's present in a file not only the char.
	# `token_text` is needed if you want to use some methods (for exemple: `prefix`, `suffix` or `is_code_point methods`)
	private init make(value: nullable Char, t: nullable MType, token_text: nullable String)
	do
		_value = value
		_mtype = t
		_n_char = new TChar
		if token_text != null then n_char.text = token_text
		if t != null then self.is_typed = true
	end

	redef fun clone: SELF
	do
		var self_clone = new ACharExpr.make(self.value, mtype, n_char.text)
		return self_clone
	end
end

redef class ANewExpr
	private init make(callsite: CallSite, args: nullable Array[AExpr])
	do
		_n_kwnew = new TKwnew
		_n_type = new AType.make
		_n_args = new AListExprs
		if args != null then
			n_args.n_exprs.add_all(args)
		end
		self.callsite = callsite
		self.recvtype = callsite.recv.as(MClassType)
		if callsite.mproperty.is_new then
			self.mtype = callsite.msignature.return_mtype
		else
			self.mtype = callsite.recv
		end
		self.is_typed = true
	end
end

redef class ACallExpr
	private init make(recv: AExpr, callsite: nullable CallSite, args: nullable Array[AExpr])
	do
		self._n_expr = recv
		_n_args = new AListExprs
		_n_qid = new AQid
		_n_qid.n_id = new TId
		_n_qid.n_id.text = callsite.mproperty.name
		if args != null then
			self.n_args.n_exprs.add_all(args)
		end

		if callsite != null then
			self.callsite = callsite
			self.mtype = callsite.msignature.return_mtype
			self.is_typed = true
		end
	end
end

redef class AAsNotnullExpr
	private init make(n_expr: AExpr, t: nullable MType)
	do
		init_aasnotnullexpr(n_expr, new TKwas, null, new TKwnot, new TKwnull, null)
		_mtype = t
		if t != null then _is_typed = true
	end
end

redef class ANullExpr

	private init make(t: nullable MType)
	do
		init_anullexpr(new TKwnull, null)
		_mtype = t
		if t != null then self.is_typed = true
	end
end

redef class ASelfExpr

	private init make(v: nullable Variable, t: nullable MType)
	do
		init_aselfexpr(new TKwself, null)
		_mtype = t
		if t != null then is_typed =true
	end

	redef fun clone: SELF
	do
		return new ASelfExpr.make(self.variable, self.mtype)
	end
end

redef class AImplicitSelfExpr

	redef fun clone: SELF
	do
		var self_clone = new AImplicitSelfExpr.make(variable, mtype)
		self_clone.is_sys = is_sys
		return self_clone
	end
end


redef class AAttrExpr
	private init make(recv: AExpr, attribute: nullable MAttribute, t: nullable MType)
	do
		_n_expr = recv
		recv.parent = self
		_n_id = new TAttrid
		_mproperty = attribute
		_mtype = t
		if t != null then _is_typed = true
	end
end

redef class AAttrAssignExpr
	private init make(recv: AExpr, attribute: nullable MAttribute, value: AExpr)
	do
		_n_expr = recv
		recv.parent = self
		_n_id = new TAttrid
		_n_value = value
		value.parent = self
		_n_assign = new TAssign
		_mproperty = attribute
		_mtype = value.mtype
	end
end

redef class AVarExpr
	private init make(v: nullable Variable, t: nullable MType)
	do
		_n_id = new TId
		if v != null then _n_id.text = v.name
		_variable = v
		_mtype = t
		if t != null then is_typed = true
	end
end

redef class AVarAssignExpr
	private init make(v: nullable Variable, value: AExpr)
	do
		_n_id = new TId
		if v != null then _n_id.text = v.name
		_n_value = value
		value.parent = self
		_n_assign = new TAssign
		_variable = v
		_mtype = value.mtype
		if _mtype != null then _is_typed = true
	end
end

redef class ASignature

	init make_from_msignature(msignature: MSignature)
	do
		var nparams = new Array[AParam]
		for mparam in msignature.mparameters do
			var variable = new Variable(mparam.name)
			variable.declared_type = mparam.mtype
			n_params.add(new AParam.make(variable, new AType.make(mparam.mtype)))
		end
		var return_type = null
		if msignature.return_mtype != null then return_type = new AType.make(msignature.return_mtype)
		init_asignature(null, nparams, null, return_type)
	end

	redef fun clone: SELF
	do
		var ntype = n_type
		if ntype != null then ntype = n_type.clone
		return new ASignature.init_asignature(null, n_params.clone, null, ntype)
	end
end

redef class AParam

	private init make(v: nullable Variable, t: nullable AType)
	do
		_n_id = new TId
		if v != null then _n_id.text = v.name
		_variable = v
		_n_type = t
	end

	redef fun clone: SELF
	do
		var ntype = n_type
		if ntype != null then ntype = n_type.clone
		return new AParam.make(variable, ntype)
	end
end

redef class AFormaldef

	private init make(mparameter: MParameterType, t: AType)
	do
		_n_id = new TClassid
		_n_id.text = mparameter.name
		_n_type = t
		_mtype = mparameter
	end
end

redef class ABlockExpr
	private init make(t: nullable MType)
	do
		if t != null then
			_mtype = t
			_is_typed = true
		end
	end

	redef fun add(expr)
	do
		n_expr.add expr
		expr.parent = self
	end

	fun add_all(exprs: Array[AExpr])
	do
		for expr in exprs do
			add(expr)
		end
	end

	redef fun clone: SELF
	do
		var clone = new ABlockExpr.make(mtype)
		for expr in self.n_expr do
			clone.add(expr.clone)
		end
		return clone
	end
end

redef class AQclassid
	redef fun clone: SELF
	do
		return new AQclassid.init_aqclassid(n_qualified.clone, n_id)
	end
end

redef class AQualified
	redef fun clone: SELF
	do
		return new AQualified.init_aqualified(n_id.clone, n_classid)
	end
end

redef class AQid
	redef fun clone: SELF
	do
		var clone_n_qualified = n_qualified
		if n_qualified != null then clone_n_qualified = n_qualified.clone
		return new AQid.init_aqid(clone_n_qualified, n_id.clone)
	end
end

redef class TId
	redef fun clone: SELF
	do
		return new TId.init_tk(location)
	end
end

redef class AParExpr
	private init make(expr: AExpr, annotations: nullable AAnnotations)
	do
		self.init_aparexpr(new TOpar, expr, new TCpar, annotations)
	end
end

# Check the consitency of AST
class ASTValidationVisitor
	super Visitor
	redef fun visit(node)
	do
		node.accept_ast_validation(self)
	end
	private var path = new CircularArray[ANode]
	private var seen = new HashSet[ANode]
end

redef class ANodes
	super Cloneable

	redef fun clone: SELF
	do
		var clone_anodes = new ANodes[E](self.parent)
		for node in self do
			clone_anodes.add(node.clone)
		end
		return clone_anodes
	end
end

redef class ANode
	super Cloneable

	redef fun clone: SELF
	do
		# By default the clone abort to avoid surprises
		print "The clone method is not implemented for the `{self.class_name}` class"
		abort
	end
	# Recursively validate a AST node.
	# This ensure that location and parenting are defined and coherent.
	#
	# After complex low-level AST manipulation and construction,
	# it is recommended to call it.
	#
	# Note: this just instantiate and run an `ASTValidationVisitor`.
	fun validate
	do
		(new ASTValidationVisitor).enter_visit(self)
	end

	private fun accept_ast_validation(v: ASTValidationVisitor)
	do
		var parent = self.parent
		var path = v.path

		if path.length > 0 then
			var path_parent = v.path.first
			if parent == null then
				self.parent = path_parent
				#debug "PARENT: expected parent: {path_parent}"
				v.seen.add(self)
			else if parent != path_parent then
				self.parent = path_parent
				if v.seen.has(self) then
					debug "DUPLICATE (NOTATREE): already seen node with parent {parent} now with {path_parent}."
				else
					v.seen.add(self)
					debug "PARENT: expected parent: {path_parent}, got {parent}"
				end
			end
		end

		if not isset _location then
			#debug "LOCATION: unlocated node {v.path.join(", ")}"
			_location = self.parent.location
		end

		path.unshift(self)
		visit_all(v)
		path.shift
	end
end

redef class AAnnotation

	redef fun accept_ast_validation(v)
	do
		# Do not enter in annotations
	end

	private init make(n_args : ANodes[AExpr])
	do
		_n_visibility = new APublicVisibility
		_n_args = n_args
	end
end

redef class MEntity
	# Build a ANode from `self`
	#
	# Allows the creation of an AST node from a model entity.
	fun create_ast_representation(astbuilder: nullable ASTBuilder): ANode is abstract
end

redef class MPropDef
	redef fun create_ast_representation(astbuilder: nullable ASTBuilder): APropdef is abstract
end

redef class MClassDef
	redef fun create_ast_representation(astbuilder: nullable ASTBuilder): AStdClassdef do
		if astbuilder == null then astbuilder = new ASTBuilder(mmodule)
		var n_propdefs = new Array[APropdef]
		for mpropdef in self.mpropdefs do
			n_propdefs.add(mpropdef.create_ast_representation(astbuilder))
		end
		var n_formaldefs = new Array[AFormaldef]
		for mparameter in self.mclass.mparameters do n_formaldefs.add(mparameter.create_ast_representation(astbuilder))

		return astbuilder.make_class(self, visibility.create_ast_representation(astbuilder), n_formaldefs, null, n_propdefs, null)
	end
end

redef class MAttributeDef
	redef fun create_ast_representation(astbuilder: nullable ASTBuilder): AAttrPropdef do
		if astbuilder == null then astbuilder = new ASTBuilder(mclassdef.mmodule)
		var ntype = null
		if self.static_mtype != null then ntype = static_mtype.create_ast_representation(astbuilder)
		return astbuilder.make_attribute("_" + self.name, ntype, self.visibility.create_ast_representation(astbuilder), null, null, self, null, null)
	end
end

redef class MMethodDef
	redef fun create_ast_representation(astbuilder: nullable ASTBuilder): AMethPropdef do
		if astbuilder == null then astbuilder = new ASTBuilder(mclassdef.mmodule)
		var tk_redef = null
		if self.mproperty.intro != self then tk_redef = new TKwredef
		var  n_signature = if self.msignature == null then new ASignature else self.msignature.create_ast_representation(astbuilder)
		return astbuilder.make_method(visibility.create_ast_representation(astbuilder), tk_redef, self, n_signature)
	end
end

redef class MVisibility
	fun create_ast_representation(astbuilder: nullable ASTBuilder): AVisibility do
		if self.to_s == "public" then
			return new APublicVisibility
		else if self.to_s == "private" then
			return new APrivateVisibility
		else if self.to_s == "protected" then
			return new AProtectedVisibility
		else
			return new AIntrudeVisibility
		end
	end
end

redef class MSignature
	redef fun create_ast_representation(astbuilder: nullable ASTBuilder): ASignature do
		var nparams = new Array[AParam]
		for mparam in mparameters do nparams.add(mparam.create_ast_representation(astbuilder))
		var return_type = null
		if self.return_mtype != null then return_type = self.return_mtype.create_ast_representation(astbuilder)
		return new ASignature.init_asignature(null, nparams, null, return_type)
	end
end

redef class MParameter
	redef fun create_ast_representation(astbuilder: nullable ASTBuilder): AParam do
		var variable = new Variable(self.name)
		variable.declared_type = self.mtype
		return new AParam.make(variable, self.mtype.create_ast_representation(astbuilder))
	end
end

redef class MParameterType
	redef fun create_ast_representation(astbuilder: nullable ASTBuilder): AFormaldef do
		var n_type = super
		return new AFormaldef.make(self, n_type)
	end
end

redef class MType
	redef fun create_ast_representation(astbuilder: nullable ASTBuilder): AType do
		return new AType.make(self)
	end
end

redef class ModelBuilder
	# Try to get MMethod property if exist in the given mclassdef. return new `MMethod` if not exist.
	private fun get_mmethod(name: String, mclassdef: MClassDef, visibility: nullable MVisibility): MMethod do
		visibility = visibility or else public_visibility
		var mproperty = try_get_mproperty_by_name(null, mclassdef, name).as(nullable MMethod)
		if mproperty == null then mproperty = new MMethod(mclassdef, name, mclassdef.location, visibility)
		return mproperty
	end

	# Creation of a new method (AST and model representation) with the given name.
	# See `create_method_from_property` for more information.
	fun create_method_from_name(name: String, mclassdef: MClassDef, is_abstract: Bool, msignature: nullable MSignature, visibility: nullable MVisibility): AMethPropdef do
		var mproperty = get_mmethod(name, mclassdef, visibility)
		return create_method_from_property(mproperty, mclassdef, is_abstract, msignature)
	end

	# Creation of a new method (AST and model representation) with the given MMethod.
	# Take care, if `is_abstract == false` the AMethPropdef returned has an empty body (potential error if the given signature has an return type).
	fun create_method_from_property(mproperty: MMethod,  mclassdef: MClassDef, is_abstract: Bool, msignature: nullable MSignature): AMethPropdef do
		var m_def = new MMethodDef(mclassdef, mproperty, mclassdef.location)

		if msignature == null then msignature = new MSignature(new Array[MParameter])

		m_def.msignature = msignature
		m_def.is_abstract = true
		var n_def = m_def.create_ast_representation
		# Association new npropdef to mpropdef
		unsafe_add_mpropdef2npropdef(m_def,n_def)

		if not is_abstract then
			n_def.mpropdef.is_abstract = false
			n_def.n_block = new ABlockExpr.make
		end

		return n_def
	end

	# Creation of a new attribute (AST and model representation) with the given name.
	# See `create_attribute_from_property` for more information.
	fun create_attribute_from_name(name: String, mclassdef: MClassDef, mtype: MType, visibility: nullable MVisibility): AAttrPropdef do
		if visibility == null then visibility = public_visibility
		var mattribute = try_get_mproperty_by_name(null, mclassdef, name)
		if mattribute == null then mattribute = new MAttribute(mclassdef, name, mclassdef.location, visibility)
		return create_attribute_from_property(mattribute.as(MAttribute), mclassdef, mtype)
	end

	# Creation of a new attribute (AST and model representation) with the given MAttribute.
	# See `create_attribute_from_propdef` for more information.
	fun create_attribute_from_property(mattribute: MAttribute, mclassdef: MClassDef, mtype: MType): AAttrPropdef do
		var attribut_def = new MAttributeDef(mclassdef, mattribute, mclassdef.location)
		attribut_def.static_mtype = mtype
		return create_attribute_from_propdef(attribut_def)
	end

	# Creation of a new attribute (AST representation) with the given MAttributeDef.
	fun create_attribute_from_propdef(mattribut_def: MAttributeDef): AAttrPropdef
	is
		expect(mclassdef2node(mattribut_def.mclassdef) != null)
	do
		var n_attribute = mattribut_def.create_ast_representation

		var nclass = mclassdef2node(mattribut_def.mclassdef)

		n_attribute.location = mattribut_def.location
		n_attribute.validate

		nclass.n_propdefs.unsafe_add_all([n_attribute])
		nclass.validate

		n_attribute.build_read_property(self, mattribut_def.mclassdef)
		n_attribute.build_read_signature

		mpropdef2npropdef[mattribut_def] = n_attribute
		return n_attribute
	end

	# Creation of a new class (AST and model representation) with the given name.
	# `visibility` : Define the visibility of the method. If it's `null` the default is `public_visibility`
	# See `create_class_from_mclass` for more information.
	fun create_class_from_name(name: String, super_type: Array[MClassType], mmodule: MModule, visibility: nullable MVisibility): AStdClassdef do
		if visibility == null then visibility = public_visibility
		var mclass = try_get_mclass_by_name(null, mmodule, name)
		if mclass == null then mclass = new MClass(mmodule, name, mmodule.location, new Array[String], concrete_kind, visibility)
		return create_class_from_mclass(mclass, super_type, mmodule)
	end

	# Creation of a new class (AST and model representation) with the given MClass.
	# This method creates a new concrete class definition `MClassDef`, and adds it to the class hierarchy.
	# See `create_class_from_mclassdef` for more information.
	fun create_class_from_mclass(mclass: MClass, super_type: Array[MClassType], mmodule: MModule): AStdClassdef do
		var mclassdef = new MClassDef(mmodule, mclass.mclass_type, mmodule.location)
		mclassdef.set_supertypes(super_type)
		mclassdef.add_in_hierarchy

		return create_class_from_mclassdef(mclassdef, mmodule)
	end

	# Creation of a new class (AST representation) with the given MClassDef.
	# Note all the properties of our MClassDef will also generate an AST representation.
	# Make an error if the attribute already has a representation in the modelbuilder.
	# This method also create the default constructor.
	fun create_class_from_mclassdef(mclassdef: MClassDef, mmodule: MModule): AStdClassdef do
		var n_classdef = mclassdef.create_ast_representation
		n_classdef.location = mclassdef.location
		n_classdef.validate

		for n_propdef in n_classdef.n_propdefs do
			var mpropdef = n_propdef.mpropdef
			assert mpropdef != null

			var p_npropdef = mpropdef2node(mpropdef)
			if  p_npropdef != null then error(null, "The property `{mpropdef.name}` already has a representation in the AST.")
			unsafe_add_mpropdef2npropdef(mpropdef, n_propdef)
		end

		process_default_constructors(n_classdef)
		unsafe_add_mclassdef2nclassdef(mclassdef, n_classdef)

		return n_classdef
	end
end
