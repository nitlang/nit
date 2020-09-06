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

# Module to build contract
# This module provide extension of the modele to add contracts, the building phase and the "re-driving" to call the contract.
#
# FIXME Split the module in three parts: extension of the modele, building phase and the "re-driving"
module contracts

import parse_annotations
import phase
import semantize
import mclassdef_collect
intrude import model_contract
intrude import astbuilder
intrude import modelize_property
intrude import scope
intrude import typing
intrude import model

redef class ToolContext
	# Parses contracts annotations.
	var contracts_phase: Phase = new ContractsPhase(self, [modelize_property_phase,typing_phase])

	# Option --no-contract
	var opt_no_contract = new OptionBool("Disable the contracts usage", "--no-contract")

	# Option --full-contract
	var opt_full_contract = new OptionBool("Enable all contracts usage", "--full-contract")

	# Option --in-out-invariant
	var opt_in_out_invariant = new OptionBool("Enable invariant verification in enter and exit", "--in-out-invariant")

	# Option --contract-metrics
	var opt_contract_metrics = new OptionBool("Enable dynamic count of contract checking", "--contract-metrics")

	# Option --keep-old-instance
	var opt_old_attribute = new OptionBool("Enable the conservation of ensure `old` intance in a class attribute", "--keep-old-instance")

	# Option --all-ensure
	var opt_all_ensure = new OptionBool("Enable all ensure usage (disable default contract strategy)", "--all-ensure")

	# Option --all-expect
	var opt_all_expect = new OptionBool("Enable all expect usage (disable default contract strategy)", "--all-expect")

	# Option --all-invariant
	var opt_all_invariant = new OptionBool("Enable all invariant usage (disable default contract strategy)", "--all-invariant")

	# Option --true-contract
	var opt_true_contract = new OptionBool("Replace contract condition by `true` expression", "--true-contract")

	# Option --only-lock-check-contract
	var opt_only_in_assertion_check = new OptionBool("Only inject the evaluation lock state check", "--only-lock-check-contract")

	redef init
	do
		super
		option_context.add_option(opt_no_contract, opt_full_contract, opt_in_out_invariant, opt_contract_metrics, opt_old_attribute, opt_all_ensure, opt_all_expect, opt_all_invariant, opt_true_contract, opt_only_in_assertion_check)
	end
end

private class ContractsPhase
	super Phase

	redef fun process_nmodule(nmodule)do
		# Check if the contracts are disabled
		if toolcontext.opt_no_contract.value then return
		nmodule.do_contracts(self.toolcontext)
	end

	redef fun process_mainmodule(mainmodule: MModule, given_mmodules: SequenceRead[MModule]) do
		# Visit all loaded modules `toolcontext.nmodules` to do contract weaving
		for nmodule in toolcontext.modelbuilder.nmodules do
			nmodule.do_weaving_contracts(self.toolcontext)
		end
	end
end

redef class AModule

	# Entry point to generate the entire contract infrastructure.
	# Once this method is called we must call the `do_weaving_contracts` method (see it for more information).
	fun do_contracts(toolcontext: ToolContext) do
		var ast_builder = new ASTBuilder(mmodule.as(not null))
		#
		var contract_visitor = new ContractsVisitor(toolcontext, toolcontext.modelbuilder.identified_modules.first, self, ast_builder)
		contract_visitor.enter_visit(self)
	end

	# Entry point to execute the weaving in order to redirect the calls to the contract sides if it's needed.
	fun do_weaving_contracts(toolcontext: ToolContext)
	do
		var ast_builder = new ASTBuilder(mmodule.as(not null))
		var callsite_visitor = new CallSiteVisitor(toolcontext, ast_builder)
		callsite_visitor.enter_visit(self)
	end
end

# Visitor to build all contracts.
private class ContractsVisitor
	super Visitor

	# Instance of the toolcontext
	var toolcontext: ToolContext

	# The main module
	# It's strore to define if the contract need to be build depending on the selected policy `--no-contract` `--full-contract` or default
	var mainmodule: MModule

	# Actual visited module
	var visited_module: AModule

	var ast_builder: ASTBuilder

	# The `ASignature` of the actual build contract
	var n_signature: ASignature is noinit

	# The `MSignature` of the actual build contract
	var m_signature: MSignature is noinit

	# The `current_location` can corresponding of the annotation or method location.
	var current_location: Location is noinit

	# Is the contrat is an introduction or not?
	# This attribute has the same value as the `is_intro` of the propdef attached to the contract.
	# Note : For MClassDef `is_intro_contract == false`. This is due to the fact that a method for checking invariants is systematically added to the root object class.
	var is_intro_contract: Bool is noinit

	# Actual visited class
	var visited_class: nullable AClassdef

	# is `no_contract` annotation was found
	var find_no_contract = false

	# The reference to the `in_contract` attribute.
	# This attribute is used to disable contract verification when you are already in a contract verification.
	# Keep the `in_contract` attribute to avoid searching at each contrat
	var in_contract_attribute: nullable MAttribute = null

	# Keep the invariant property to avoid searching at each invariant
	var global_invariant: nullable MInvariant = null

	redef fun visit(node)
	do
		node.create_contracts(self)
		node.visit_all(self)
	end

	# Method use to define the signature part of the method `ASignature` and `MSignature`
	# The given `mcontract` provided `adapt_nsignature` and `adapt_msignature` to copy and adapt the given signature (`nsignature` and `msignature`)
	fun define_signature(mcontract: MContract, nsignature: nullable ASignature, msignature: nullable MSignature)
	do
		if nsignature != null and msignature != null then nsignature.ret_type = msignature.return_mtype
		self.n_signature = mcontract.adapt_nsignature(nsignature, self)
		self.m_signature = mcontract.adapt_msignature(msignature, self)
	end

	# Define the new contract take in consideration that an old contract exist or not
	private fun build_contract(n_annotations: Array[AAnnotation], mcontract: MContract, mclassdef: MClassDef)
	do
		var n_conditions = new Array[AExpr]
		# Retrieving the expression provided in the annotation
		for n_annotation in n_annotations do n_conditions.add n_annotation.construct_condition(self)
		if is_intro_contract then
			# Create new contract method
			mcontract.create_intro_contract(self, n_conditions, mclassdef)
		else
			# Create a redef of contract to take in consideration the new condition
			mcontract.create_subcontract(self, n_conditions, mclassdef)
		end
	end

	# Return an `AIfAssertion` with the contract encapsulated by an `if` to check if it's already in a contract verification.
	private fun encapsulated_contract_call(mcontract: MContract, call_to_contracts: Array[ACallExpr]): AIfInAssertion
	do
		var n_block = ast_builder.make_block
		if not toolcontext.opt_only_in_assertion_check.value then n_block.add_all(call_to_contracts)
		return new AIfInAssertion(mcontract, n_block)
	end
	# Inject the invariant method (`_invariant_`) verification in the root `Object` class
	# By default the method is empty.
	# Note the method is not abstract because the implementation of this method makes a super call to resolve multiple inheritance problem
	private fun inject_invariant_in_object
	do
		# If the global_invariant already know just return
		if global_invariant != null then return
		# Get the object class from the modelbuilder
		var object_class = toolcontext.modelbuilder.get_mclass_by_name(visited_module, mainmodule, "Object")

		# Try to get a global invariant if it's already defined in a previously visited module.
		var invariant_property = toolcontext.modelbuilder.try_get_mproperty_by_name(visited_module, object_class.intro, "_invariant_")
		if invariant_property != null then
			global_invariant = invariant_property.as(MInvariant)
			return
		end

		var m_invariant = new MInvariant(object_class.intro, "_invariant_", object_class.intro.location, public_visibility)
		global_invariant = m_invariant

		toolcontext.modelbuilder.create_method_from_property(m_invariant, object_class.intro, false, new MSignature(new Array[MParameter]))
	end
	# Return the invariant property `_invariant_`
	# If the `_invariant_` does not exist it's injected this with `inject_invariant_in_object`
	private fun get_global_invariant: MInvariant
	do
		if self.global_invariant == null then inject_invariant_in_object
		return global_invariant.as(not null)
	end
end

# This visitor checks the `callsite` to see if the target `mpropdef` has a contract.
private class CallSiteVisitor
	super Visitor

	# Instance of the toolcontext
	var toolcontext: ToolContext

	var ast_builder: ASTBuilder

	# Actual visited method
	var visited_propdef: APropdef is noinit

	redef fun visit(node)
	do
		if node isa AAnnotation then return # Annotations don't need to be woven
		node.check_callsite(self)
		node.visit_all(self)
	end

	# Check if the callsite is bound on a property with a contract.
	# If the property is linked to a contract a new callsite will be created towards the correct facet,
	# in the other case the returned callsite wall be the same as the given `callsite`
	private fun drive_callsite_to_contract(callsite: CallSite): CallSite
	do
		var contract_facet = callsite.mproperty.mcontract_facet
		var invariant_facet = callsite.mproperty.minvariant_facet
		var visited_mpropdef = visited_propdef.mpropdef

		if visited_mpropdef.mproperty isa MContract or visited_mpropdef.mproperty isa MFacet then return callsite
		if visited_mpropdef == null or contract_facet == null then return callsite

		var facet: MFacet
		if not callsite.recv_is_self and invariant_facet != null then
			facet = invariant_facet
		else
			facet = contract_facet
		end

		return ast_builder.create_callsite(toolcontext.modelbuilder, visited_propdef, callsite.recv, facet, callsite.recv_is_self)
	end
end

# Visitor to evaluate the expressions to detect the old usage in ensure.
private class OldVisitor
	super Visitor

	# Actual visited mpropdef
	var visited_mpropdef: MPropDef

	# The Instance of the actual contract visitor.
	var contract_visitor: ContractsVisitor

	# Array of attributes to keep the old value.
	var old_attributes = new HashMap[AExpr, nullable AAttrPropdef]

	redef fun visit(node)
	do
		node.check_old(self)
		node.visit_all(self)
	end

	# Create all old attributes and inject them into the given `mclassdef`
	private fun build_old_attributes(mclassdef: MClassDef)
	do
		# Get the number of attributes in the given mclassdef.
		# It will be used to define the name of the attribute.
		var number_attributes = mclassdef.mclass.collect_intro_mattributes.length

		for old_expr, attribute in old_attributes do

			# Typing the old expression to assign the correct type to the attribute
			old_expr.do_typing(contract_visitor.toolcontext.modelbuilder, visited_mpropdef)
			if old_expr.mtype == null then continue # skip error. The generation of warning is not needed since the typing does it for us.

			var attribute_name = "_old_{number_attributes}"

			var resolved_mtype = old_expr.mtype.anchor_to(contract_visitor.visited_module.mmodule.as(not null), visited_mpropdef.mclassdef.bound_mtype).as_nullable
			var n_attribute = contract_visitor.toolcontext.modelbuilder.create_attribute_from_name(attribute_name, mclassdef, resolved_mtype, public_visibility).create_setter(contract_visitor.toolcontext.modelbuilder, true)
			n_attribute.noinit = true

			old_attributes[old_expr] = n_attribute
			number_attributes += 1
		end
	end

	# Switch old references captured during the visit with references to old attributes, generated by the `build_old_attributes` method.
	# Example:
	# ~~~nitish
	# from:
	# 	fun add_one(i: Int) is ensure(old(i) + 1 == i)
	# to:
	# 	fun add_one(i: Int) is ensure(old.i + 1 == i)
	# ~~
	#
	private fun switch_call_to_old_attribut(mensure: MEnsure, n_caller_propdef: APropdef)
	do
		for expr, n_attribut in old_attributes do

			# If this happens, the attribute was not generated due to a typing error. See `build_old_attributes`
			if n_attribut == null then continue

			# Cast the old parameter because it's typed with object type
			var object_type = contract_visitor.toolcontext.modelbuilder.get_mclass_by_name(contract_visitor.visited_module, contract_visitor.mainmodule, "Object").mclass_type
			var n_old_var_param = contract_visitor.ast_builder.make_var(mensure.old_param, object_type)

			var n_old_cast = new AAsCastExpr.init_aascastexpr(n_old_var_param, new TKwas , null, mensure.old_mclass.mclass_type.create_ast_representation, null)

			var attid = new TAttrid
			attid.text = "{n_attribut.mpropdef.mproperty.name}"

			expr.replace_with(new AAttrExpr.init_aattrexpr(n_old_cast, attid))
		end
	end
end

redef class ANode
	private fun create_contracts(v: ContractsVisitor) do end
	private fun check_callsite(v: CallSiteVisitor) do end
	private fun check_old(v: OldVisitor) do end
end

redef class AAnnotation

	# Returns the conditions of annotation parameters. If there are several parameters, the result is an `AAndExpr`
	# Example:
	# the contract `ensure(true, i == 10, f >= 1.0)`
	# return this condition `(true and i == 10 and f >= 1.0)`
	private fun construct_condition(v : ContractsVisitor): AExpr
	do
		if v.toolcontext.opt_true_contract.value then
			var bool_true = new ATrueExpr.make(v.mainmodule.bool_type)
			bool_true.location = self.location
			return bool_true
		end

		var n_condition = n_args.first
		n_args.remove_at(0)
		for n_arg in n_args do n_condition = v.ast_builder.make_and(n_condition, n_arg)
		n_condition.location = self.location
		return n_condition
	end
end

redef class MContract

	# Should contract be called?
	# return `true` if the contract needs to be called.
	private fun is_called(v: ContractsVisitor, mclassdef: MClassDef): Bool
	do
		return v.toolcontext.opt_full_contract.value
	end

	# Return the string that it represents the incrementation of contract invocation counter.
	fun write_c_metric: String is abstract

	# Method use to diplay warning when the contract is not present at the introduction
	private fun no_intro_contract(v: ContractsVisitor, a: Array[AAnnotation])do end

	# Creating specific inheritance block contract
	#
	# `super_args` : Correspond to the `super` call arguments
	private fun create_inherit_nblock(v: ContractsVisitor, n_conditions: Array[AExpr], super_args: Array[AExpr]): ABlockExpr is abstract

	# Method to adapt the given `n_mpropdef.n_block` to the contract
	private fun adapt_method_to_contract(v: ContractsVisitor, mfacet: MFacet, n_mpropdef: AMethPropdef) is abstract

	# Create and return an adapted `MSignature` specifically for the contract in fonction of the given `m_signature`
	private fun adapt_specific_msignature(m_signature: MSignature, visitor: ContractsVisitor): MSignature do return m_signature.adapt_to_contract

	# Create and return an adapted `ASignature` specifically for the contract in fonction of the given `n_signature`
	private fun adapt_specific_nsignature(n_signature: ASignature, visitor: ContractsVisitor): ASignature do return n_signature.adapt_to_contract

	# Adapt the `m_signature` to the contract
	# If `m_signature == null` return a new `MSignature` else it calls a specific adapt method see `adapt_specific_msignature`
	private fun adapt_msignature(m_signature: nullable MSignature, visitor: ContractsVisitor): MSignature
	do
		if m_signature == null then return new MSignature(new Array[MParameter])
		return adapt_specific_msignature(m_signature, visitor)
	end

	# Adapt the `n_signature` to the contract
	# If `n_signature == null` return a new `ASignature` else it calls a specific adapt method see `adapt_specific_nsignature`
	private fun adapt_nsignature(n_signature: nullable ASignature, visitor: ContractsVisitor): ASignature
	do
		if n_signature == null then return new ASignature
		return adapt_specific_nsignature(n_signature, visitor)
	end

	# Create the initial contract (intro)
	# All contracts have the same implementation for the introduction.
	#
	# Example:
	# ~~~nitish
	# fun contrat([...])
	# do
	#	assert contract_condition
	# end
	# ~~~
	#
	private fun create_intro_contract(v: ContractsVisitor, n_conditions: Array[AExpr], mclassdef: MClassDef)
	do
		var n_block = v.ast_builder.make_block
		for n_condition in n_conditions do
			# Create a new tid to set the name of the assert for more explicit error
			var tid = new TId.init_tk(n_condition.location)
			tid.text = "{n_condition.location.text}"
			var n_assert = v.ast_builder.make_assert(tid, n_condition, null)
			# Define the assert location to reference the annoation
			n_assert.location = n_condition.location
			n_block.add n_assert
		end
		make_contract(v, n_block, mclassdef)
	end

	# Create a contract to check the old (super call) and the new conditions
	#
	# Example:
	# ~~~nitish
	# fun contrat([...])
	# do
	#	super # Call the old contracts
	#	assert new_condition
	# end
	# ~~~
	#
	private fun create_subcontract(v: ContractsVisitor, n_conditions: Array[AExpr], mclassdef: MClassDef)
	do
		var args = v.n_signature.make_parameter_read(v.ast_builder)
		var n_block = v.ast_builder.make_block
		n_block = self.create_inherit_nblock(v, n_conditions, args)
		make_contract(v, n_block, mclassdef)
	end

	# Build a new contract method with a specific block `n_block` in a specified `mclassdef`
	private fun make_contract(v: ContractsVisitor, n_block: AExpr, mclassdef: MClassDef)
	do
		var n_contractdef = v.toolcontext.modelbuilder.create_method_from_property(self, mclassdef, false, v.m_signature)
		# Set the signature to keep the same variable
		n_contractdef.n_signature = v.n_signature
		n_contractdef.n_block = n_block
		# Define the location of the new method for corresponding of the annotation location
		n_contractdef.location = v.current_location
		n_contractdef.do_all(v.toolcontext)
	end
end

redef class MExpect

	redef fun write_c_metric: String do return "count_executed_precondition_contracts++;"

	redef fun is_called(v: ContractsVisitor, mclassdef: MClassDef): Bool
	do
		if super then return true
		if v.toolcontext.opt_all_expect.value then return true
		if v.toolcontext.opt_all_ensure.value or v.toolcontext.opt_all_invariant.value then return false

		var main_package = v.mainmodule.mpackage
		var actual_package = mclassdef.mmodule.mpackage
		if main_package != null and actual_package != null then
			var condition_direct_arc = v.toolcontext.modelbuilder.model.mpackage_importation_graph.has_arc(main_package, actual_package)
			return main_package == actual_package or condition_direct_arc
		end
		return false
	end

	# Display warning if no contract is defined at introduction `expect`,
	# because if no contract is defined at the introduction the added
	# contracts will not cause any error even if they are not satisfied.
	#
	# Example:
	# ~~~nitish
	# class A
	# 	fun bar [...]
	# 	fun _bar_expect([...])
	# 	do
	# 		[empty contract]
	# 	end
	# end
	#
	# redef class A
	# 	redef fun bar is expect(contract_condition)
	# 	redef fun _bar_expect([...])
	# 	do
	# 		if (contract_condition) then return
	#		super
	# 	end
	# end
	# ~~~~
	#
	redef fun no_intro_contract(v: ContractsVisitor, a: Array[AAnnotation])
	do
		v.toolcontext.warning(a.first.location,"useless_contract","Useless contract: No contract defined at the introduction of the method")
	end

	redef fun create_inherit_nblock(v: ContractsVisitor, n_conditions: Array[AExpr], super_args: Array[AExpr]): ABlockExpr
	do
		var n_block = v.ast_builder.make_block
		for n_condition in n_conditions do
			# Creating the if expression with the new condition
			var if_block = v.ast_builder.make_if(n_condition, n_condition.mtype)
			# Creating and adding return expr to the then case
			if_block.n_then = v.ast_builder.make_return
			if_block.location = n_condition.location
			n_block.add if_block
		end
		n_block.add v.ast_builder.make_super_call(super_args)
		return n_block
	end

	redef fun adapt_method_to_contract(v: ContractsVisitor, mfacet: MFacet, n_mpropdef: AMethPropdef)
	do
		var callsite = v.ast_builder.create_callsite(v.toolcontext.modelbuilder, n_mpropdef, self.intro_mclassdef.bound_mtype, self, true)
		var args = n_mpropdef.n_signature.make_parameter_read(v.ast_builder)
		var n_callexpect = v.ast_builder.make_call(new ASelfExpr, callsite,args)
		# Creation of the new instruction block with the call to expect condition
		var actual_expr = n_mpropdef.n_block
		var new_block = new ABlockExpr
		new_block.n_expr.push v.encapsulated_contract_call(self, [n_callexpect])
		if actual_expr isa ABlockExpr then
			new_block.n_expr.add_all(actual_expr.n_expr)
		else if actual_expr != null then
			new_block.n_expr.push(actual_expr)
		end
		n_mpropdef.n_block = new_block
		mfacet.has_applied_expect = true
	end
end

redef class BottomMContract

	redef fun create_inherit_nblock(v: ContractsVisitor, n_conditions: Array[AExpr], super_args: Array[AExpr]): ABlockExpr
	do
		# Define contract block
		var n_block = v.ast_builder.make_block

		var super_call = v.ast_builder.make_super_call(super_args)

		n_block.add super_call
		for n_condition in n_conditions do
			var tid = new TId.init_tk(n_condition.location)
			tid.text = "{n_condition.location.text}"
			# Creating the assert expression with the new condition
			var n_assert = v.ast_builder.make_assert(tid, n_condition)
			n_assert.location = n_condition.location
			n_block.add n_assert
		end
		return n_block
	end

	# Inject the `result` variable into the `n_block` of the given n_mpropdef`.
	#
	# The purpose of the variable is to capture return values to use it in contracts.
	private fun inject_result(v: ContractsVisitor, n_mpropdef: AMethPropdef, ret_type: MType): Variable
	is
		expect(n_mpropdef.n_signature.n_type != null)
	do
		var actual_block = n_mpropdef.n_block
		# never happen. If it's the case the problem is in the contract facet building
		assert actual_block isa ABlockExpr

		var return_expr = actual_block.n_expr.last.as(AReturnExpr)

		var returned_expr = return_expr.n_expr
		# The return node has no returned expression
		assert returned_expr != null

		var return_var = new Variable("result")
		# Creating a new variable to keep the old return of the method
		var assign_result = v.ast_builder.make_var_assign(return_var, returned_expr)
		# Remove the actual return
		actual_block.n_expr.pop
		# Set the return type
		return_var.declared_type = ret_type
		# Adding the reading expr of result variable to the block
		actual_block.add assign_result
		# Expr to read the result variable
		var read_result = v.ast_builder.make_var_read(return_var, ret_type)
		# Definition of the new return
		return_expr = v.ast_builder.make_return(read_result)
		actual_block.add return_expr
		return return_var
	end
end

redef class MEnsure

	redef fun is_called(v: ContractsVisitor, mclassdef: MClassDef): Bool
	do
		if super then return true
		if v.toolcontext.opt_all_ensure.value then return true
		if v.toolcontext.opt_all_expect.value or v.toolcontext.opt_all_invariant.value then return false
		return v.mainmodule.mpackage == mclassdef.mmodule.mpackage
	end

	redef fun write_c_metric: String do return "count_executed_postcondition++;"

	redef fun adapt_specific_msignature(m_signature: MSignature, visitor: ContractsVisitor): MSignature
	do
		var msignature = m_signature.adapt_to_ensurecondition

		# Addition of a parameter to express `old` reference
		var object_class = visitor.toolcontext.modelbuilder.get_mclass_by_name(visitor.visited_module, visitor.mainmodule, "Object")

		if object_class != null then
			var object_mtype = object_class.mclass_type.as_nullable
			# Addition of a parameter to express `old` reference
			msignature.mparameters.add(new MParameter("old", object_mtype, false))
		end

		return msignature
	end

	redef fun adapt_specific_nsignature(n_signature: ASignature, visitor: ContractsVisitor): ASignature
	do
		var nsignature = n_signature.adapt_to_ensurecondition

		# Addition of a parameter to express `old` reference
		var object_class = visitor.toolcontext.modelbuilder.get_mclass_by_name(visitor.visited_module, visitor.mainmodule, "Object")

		if object_class != null then
			old_param.declared_type = object_class.mclass_type.as_nullable
			nsignature.n_params.add new AParam.make(self.old_param, object_class.mclass_type.as_nullable.create_ast_representation)
		end

		return nsignature
	end

	redef fun adapt_method_to_contract(v: ContractsVisitor, mfacet: MFacet, n_mpropdef: AMethPropdef)
	do
		var callsite = v.ast_builder.create_callsite(v.toolcontext.modelbuilder, n_mpropdef, self.intro_mclassdef.bound_mtype, self, true)
		var n_self = new ASelfExpr
		# argument to call the contract method
		var args = n_mpropdef.n_signature.make_parameter_read(v.ast_builder)

		var n_read_old: nullable AVarExpr = null

		if self.old_mclass != null then
			inject_old(v, n_mpropdef)
			n_read_old = v.ast_builder.make_var_read(self.old_param, old_mclass.mclass_type)
		end

		var actual_block = n_mpropdef.n_block
		# never happen. If it's the case the problem is in the contract facet building
		assert actual_block isa ABlockExpr

		var ret_type = n_mpropdef.mpropdef.mproperty.intro.msignature.return_mtype
		if ret_type != null then
			# Inject the variable result
			var result_var = inject_result(v, n_mpropdef, ret_type)
			# Expr to read the result variable
			var read_result = v.ast_builder.make_var_read(result_var, ret_type)
			var return_expr = actual_block.n_expr.pop
			# Adding the read return to argument
			args.add(read_result)
			if n_read_old != null then args.add(n_read_old)
			var n_call_contract = v.ast_builder.make_call(n_self, callsite, args)
			actual_block.add_all([v.encapsulated_contract_call(self, [n_call_contract]), return_expr])
		else
			if n_read_old != null then args.add(n_read_old)
			# build the call to the contract method
			var n_call_contract = v.ast_builder.make_call(n_self, callsite, args)
			actual_block.add v.encapsulated_contract_call(self, [n_call_contract])
		end

		n_mpropdef.do_all(v.toolcontext)
		mfacet.has_applied_ensure = true
	end

	# Old attribute use to avoid new instantiation old class
	var old_attribute: nullable MAttribute

	# Return an `TAttrid` corresponding to `old_attribute`
	fun get_attid: TAttrid
	is
		expect(old_attribute != null)
	do
		var att_id = new TAttrid
		att_id.text = "{old_attribute.name}"
		return att_id
	end

	# Inject the `old` variable into the `n_block` of the given `n_mpropdef`.
	#
	# The purpose of the variable is to capture the values of `old()` expr to use it in contracts.
	# This variable will be injected at the start of the block (first instruction)
	private fun inject_old(v: ContractsVisitor, n_mpropdef: AMethPropdef)
	do
		# Creation of a new block with as first expression the `old` variable and follow by all expr of the `n_mpropdef` body
		var new_block = v.ast_builder.make_block

		# Create a new old_object to store the old expression value
		var old_class_initdef = old_mclass.intro.default_init
		var callsite_new_old_class = v.ast_builder.create_callsite(v.toolcontext.modelbuilder, n_mpropdef, old_class_initdef.mproperty.intro_mclassdef.bound_mtype, old_class_initdef.mproperty, false)
		var n_new_old_class = v.ast_builder.make_new(callsite_new_old_class, null)
		n_new_old_class.n_type = old_mclass.mclass_type.create_ast_representation


		if v.toolcontext.opt_old_attribute.value then
			if old_attribute == null then
				var oldclass_mtype = self.old_mclass.mclass_type.as_nullable
				var attribute_name = "_old_{self.old_mclass.name}"
				var mclassdef = n_mpropdef.mpropdef.mclassdef
				var n_attribute = v.toolcontext.modelbuilder.create_attribute_from_name(attribute_name, mclassdef, oldclass_mtype, public_visibility).create_setter(v.toolcontext.modelbuilder, true)
				n_attribute.noinit = true
				old_attribute = n_attribute.mpropdef.mproperty
			end

			var if_old_attribute = v.ast_builder.make_if(new AEqExpr.init_aeqexpr(new AAttrExpr.init_aattrexpr(new ASelfExpr, self.get_attid), new TEq, new ANullExpr.init_anullexpr( new TKwnull, null)), null)
			if_old_attribute.n_then = new AAttrAssignExpr.init_aattrassignexpr(new ASelfExpr, self.get_attid, new TAssign, n_new_old_class)

			new_block.add if_old_attribute
		end

		# Args to call the old init property
		var n_args_call_init_property = new Array[AExpr]
		n_args_call_init_property.add_all(n_mpropdef.n_signature.make_parameter_read(v.ast_builder))

		if v.toolcontext.opt_old_attribute.value then
			var n_old_cast = new AAsCastExpr.init_aascastexpr(new AAttrExpr.init_aattrexpr(new ASelfExpr, self.get_attid), new TKwas , null, self.old_mclass.mclass_type.create_ast_representation, null)
			n_args_call_init_property.add(n_old_cast)
		else
			n_args_call_init_property.add(n_new_old_class)
		end

		var callsite_old_class_init = v.ast_builder.create_callsite(v.toolcontext.modelbuilder, n_mpropdef, old_mclass.init_old_property.intro_mclassdef.bound_mtype, old_mclass.init_old_property.as(not null), true)
		var ncall_init_old = v.ast_builder.make_call(new ASelfExpr, callsite_old_class_init, n_args_call_init_property)

		new_block.add v.ast_builder.make_var_assign(self.old_param, ncall_init_old)
		new_block.n_expr.add_all(n_mpropdef.n_block.as(ABlockExpr).n_expr)
		n_mpropdef.n_block = new_block
	end
end

redef class MInvariant
	super BottomMContract

	redef fun is_called(v: ContractsVisitor, mclassdef: MClassDef): Bool
	do
		if super then return true
		if v.toolcontext.opt_all_invariant.value then return true
		if v.toolcontext.opt_all_ensure.value or v.toolcontext.opt_all_expect.value then return false
		return v.mainmodule.mpackage == mclassdef.mmodule.mpackage
	end

	redef fun write_c_metric: String do return "count_executed_invariant++;"

	redef fun adapt_method_to_contract(v: ContractsVisitor, mfacet: MFacet, n_mpropdef: AMethPropdef)
	do
		var callsite = v.ast_builder.create_callsite(v.toolcontext.modelbuilder, n_mpropdef, self.intro_mclassdef.bound_mtype, self, true)
		var n_self = new ASelfExpr
		# build the call to the contract method
		var n_call = v.ast_builder.make_call(n_self, callsite, null)
		var actual_block = n_mpropdef.n_block
		# never happen. If it's the case the problem is in the contract facet building
		assert actual_block isa ABlockExpr

		var new_block = v.ast_builder.make_block

		if v.toolcontext.opt_in_out_invariant.value and not n_mpropdef.mpropdef.mproperty.is_init then new_block.add v.encapsulated_contract_call(self, [n_call])

		new_block.n_expr.add_all(actual_block.n_expr)

		n_mpropdef.n_block = new_block

		var ret_type = n_mpropdef.mpropdef.mproperty.intro.msignature.return_mtype
		if ret_type != null then
			# Inject the variable result (the injection of the result is necessary even if the invariants cannot take `result` as an argument)
			# In this case the result variable is here to keep the return value of the original method.
			# exemple
			# ~~~nitish
			# class A
			# 	fun bar([...]): Bool is invariant([...])
			#
			# 	fun _contract_bar([...])
			#	do
			#		var result = bar([...])
			#		# Check if the invariant check call is necessary and execute it.
			#		[...]
			#		return result
			#	end
			#
			# 	fun _bar_expect([...])
			# end
			# ~~~~
			var result_var = inject_result(v, n_mpropdef, ret_type)
			var return_expr = new_block.n_expr.pop
			new_block.add_all([v.encapsulated_contract_call(self, [n_call]), return_expr])
		else
			new_block.add(n_call)
		end
	end
end

redef class MClass

	# Build the invariant verification property `_invariant` if is not exist and return it
	private fun build_invariant(v: ContractsVisitor): MInvariant
	do
		var m_invariant = self.minvariant
		if m_invariant != null then return m_invariant
		# get a invariant property from the `ContractsVisitor`
		m_invariant = v.get_global_invariant
		self.minvariant = m_invariant
		return m_invariant
	end

	# Try to get the class definition `MClassDef` in the given `mmodule`. Return `null` if not exist.
	fun try_get_mclassdef(mmodule: MModule): nullable MClassDef
	do
		for mclassdef in mclassdefs do
			if mclassdef.mmodule == mmodule then return mclassdef
		end
		return null
	end
end

redef class MOldClass

	# Create a new method to init old parameter of the contract.
	private fun build_old_init_methdef(v: OldVisitor, n_method: AMethPropdef)
	do
		var modelbuilder = v.contract_visitor.toolcontext.modelbuilder
		var mpropdef = n_method.mpropdef
		if mpropdef == null then abort

		var init_msignature = make_init_msignature(mpropdef.mproperty.intro.msignature.mparameters.to_a)

		var n_methdef = modelbuilder.create_method_from_name("_init_old_{mpropdef.name}", mpropdef.mclassdef, false, init_msignature, public_visibility)

		# This method is a little bit weird. But I need to do this because of the variables.
		# Once the variable defines the scope will not redefine it so we will have to reuse the same, and i use a specific variable to
		# TO-DO: One solution would be to keep the variable information in the msignature.
		n_methdef.n_signature.n_params.last.variable = old_variable

		# FIXME set the location because the callsite creation need the node location
		n_methdef.location = n_method.location
		n_methdef.validate

		if self.init_old_property == null then
			n_methdef.n_block = make_intro_block(v, n_methdef)
		else
			n_methdef.n_block = make_sub_block(v, n_methdef)
		end

		n_methdef.do_all(v.contract_visitor.toolcontext)
		self.init_old_property = n_methdef.mpropdef.mproperty
	end

	# Create all old attribute assignments based on the OldVisitor `old_attributes`
	private fun build_old_assignations(v: OldVisitor, n_method: AMethPropdef): Array[AExpr]
	do
		var ast_builder = v.contract_visitor.ast_builder
		var array_assign = new Array[AExpr]

		for expr, n_attribut in v.old_attributes do
			if n_attribut == null then continue # skip error

			var attid = new TAttrid
			attid.text = "{n_attribut.mpropdef.mproperty.name}"

			array_assign.add new AAttrAssignExpr.init_aattrassignexpr(v.contract_visitor.ast_builder.make_var(self.old_variable, self.mclass_type), attid, new TAssign, expr)
		end
		return array_assign
	end

	# Create a block with a new assignment of old attributes.
	private fun make_intro_block(v: OldVisitor, n_method: AMethPropdef): ABlockExpr
	do
		var ast_builder = v.contract_visitor.ast_builder
		var n_block = ast_builder.make_block
		n_block.add_all(build_old_assignations(v, n_method))

		var read_old_variable = v.contract_visitor.ast_builder.make_var(self.old_variable, self.mclass_type)
		n_block.add(ast_builder.make_return(read_old_variable))

		return n_block
	end

	# Create a block with a call of super `init_old` and the new old attributes assignation.
	private fun make_sub_block(v: OldVisitor, n_method: AMethPropdef): ABlockExpr
	do
		var ast_builder = v.contract_visitor.ast_builder
		var super_call = ast_builder.make_super_call(n_method.n_signature.make_parameter_read(ast_builder))
		var assign_old_variable = v.contract_visitor.ast_builder.make_var_assign(self.old_variable, super_call)
		var n_block = ast_builder.make_block

		n_block.add(assign_old_variable)
		n_block.add_all(make_intro_block(v, n_method).n_expr.to_a)

		return n_block
	end

	# Create new MSignature for the `init_old_property`.
	# This signature is create with the given `MParameter` representing the argument of the method and with the add of a old parameter.
	#
	# Exemple :
	# ~~~nitish
	#	fun add_i_to_a(i) is ensure (old(a) + i == a)
	#
	# 	fun init_old_add_i_to_a(i, old): OldClass
	# ~~~
	private fun make_init_msignature(mparameters: Array[MParameter]): MSignature
	do
		var msignature = new MSignature(mparameters, self.mclass_type)
		msignature.mparameters.add(new MParameter("old", self.mclass_type, false))
		msignature.return_mtype = self.mclass_type
		return msignature
	end
end

redef class MClassDef

	# Is there an inherited invariant contract?
	private fun has_inherited_invariant: Bool
	do
		var super_classes = self.in_hierarchy.direct_greaters
		for super_class in super_classes do
			if super_class.mclass.has_invariant then return true
		end
		return false
	end
end

redef class AClassdef

	# Entry point to create a contract (verification of inheritance, or new contract).
	redef fun create_contracts(v)
	do
		if mclassdef == null then return
		v.ast_builder.check_mmodule(mclassdef.mmodule)
		v.current_location = self.location
		# Invariants are always considered to be a redefinition of contract.
		# This is due to an empty invariant method which is added to the root `object` class.
		v.is_intro_contract = false
		check_annotation(v)
		if not mclass.has_invariant then check_redef(v)
	end

	# Verification if the class has an inherited contract to apply it.
	private fun check_redef(v: ContractsVisitor)
	do
		# Check if the method has an attached contract (Inherited)
		if mclassdef.has_inherited_invariant then mclass.minvariant = v.global_invariant
	end

	# Verification of the annotation to know if it is a contract annotation.
	# If this is the case, we built the appropriate contract.
	private fun check_annotation(v: ContractsVisitor)
	do
		var annotation_invariants = get_annotations("invariant")
		var annotation_no_contract = get_annotations("no_contract")

		if not annotation_invariants.is_empty and not annotation_no_contract.is_empty then
			v.toolcontext.error(location, "The new contract definition is not correct when using `no_contract`. Remove the `invariant` definition or the `no_contract`")
			return
		end

		if not annotation_no_contract.is_empty then
			var minvariant = mclass.minvariant
			if minvariant == null then
				v.toolcontext.warning(location, "useless_nocontract", "Useless `no_contract`, no invariant was declared or inherited for `{mclass.name}`. Remove the `no_contract`")
			else
				# Add an empty invariant method to replace the actual definition
				v.toolcontext.modelbuilder.create_method_from_property(minvariant, mclassdef.as(not null), false, minvariant.intro.msignature)
			end
			return
		end

		if not annotation_invariants.is_empty then

			var minvariant = mclass.build_invariant(v)

			v.define_signature(minvariant, null, null)
			v.build_contract(annotation_invariants, minvariant, mclassdef.as(not null))

			add_invariant_in_super_def(v)
			# Construct invariant facet for the `default_init`
			mclassdef.default_init.mproperty.define_invariant_facet(v, mclassdef.as(not null), mclass.minvariant.as(not null))
		end
	end

	# Create all contract facet for each inherited property definition of the class to take in consideration the invariant
	# Redefine or introduced properties will be processed later
	private fun add_invariant_in_super_def(v: ContractsVisitor)
	do
		var mpropertys = mclassdef.collect_inherited_mmethods(v.mainmodule, new ModelFilter)
		for mproperty in mpropertys do
			if mproperty isa MFacet or mproperty isa MContract or mproperty.has_invariant_facet then continue

			# All property defined in Object is considered as a pure property (without side effect)
			# TO-DO add an option to manage it. Take care with `!=` and `==` on MNullableType you can't do a call to invariant facet because the object might be null.
			if mproperty.intro.mclassdef.name == "Object" then continue

			# Check if the actual class definition redef this property definition. if it's the case do nothing the visit of the method will do the job
			if mclassdef.mpropdefs_by_property.has_key(mproperty) then continue

			if mproperty.intro.is_intern then continue
			# Do not generate invariant facet with inherited `defaultinit`
			if not mproperty.name == "defaultinit" then mproperty.define_invariant_facet(v, mclassdef.as(not null), mclass.minvariant.as(not null))
		end
	end
end

redef class MMethod

	# Define invariant facet for the MMethod in the given mclassdef.
	# This method also defines the contract facet.
	private fun define_invariant_facet(v: ContractsVisitor, classdef: MClassDef, minvariant: MInvariant)
	do
		if not minvariant.is_called(v, classdef) then return

		# Do nothing the invariant facet already exist
		if has_invariant_facet then return

		# Make a contract facet if it's not exist
		if not self.has_contract_facet then define_contract_facet(v, classdef)

		# Make invariant mproperty facet
		var invariant_facet = build_invariant_facet

		# Check if the MMethod has a invariant facet in the intro_mclassdef
		if classdef != intro_mclassdef then
			create_facet(v, intro_mclassdef, invariant_facet, self.mcontract_facet.as(not null))
		end

		# Create an ast definition for the invariant facet
		var n_invariant_facet = create_facet(v, classdef, invariant_facet, self.mcontract_facet.as(not null))
		minvariant.adapt_method_to_contract(v, invariant_facet, n_invariant_facet)
		n_invariant_facet.location = v.current_location
		n_invariant_facet.do_all(v.toolcontext)
	end

	# Define contract facet for MMethod in the given mclassdef. The facet represents the entry point with contracts (expect, ensure) of the method.
	# If a contract is given adapt the contract facet.
	#
	# `classdef`: Indicates the class where we want to introduce our facet
	# `exist_contract`: Indicates if it is necessary to define a new facet for the contract. If `exist_contract_facet and exist_contract` it's not necessary to add a facet.
	#
	# Exemple:
	# ~~~nitish
	# from:
	#	classe A
	#		i :Int
	#		fun add_one is ensure(old(i) + 1 == i)
	#	end
	# to:
	#	classe A
	#		fun add_one is ensure(old(i) + 1 == i)
	#
	#		# The contract facet
	#		fun contract_add_one do
	#			add_one
	#			ensure_add_one(old_add_one)
	#		end
	#	end
	# ~~
	private fun define_contract_facet(v: ContractsVisitor, classdef: MClassDef, mcontract: nullable MContract)
	do
		var exist_contract_facet = has_contract_facet
		var contract_facet = build_contract_facet
		# Do nothing the contract and the contract facet already exist
		if mcontract != null and mcontract.is_already_applied(contract_facet) then return

		var n_contract_facet: AMethPropdef
		if not exist_contract_facet then
			# If has no contract facet in intro just create it
			if classdef != intro_mclassdef then
				var n_intro_face = create_facet(v, intro_mclassdef, contract_facet, self)
				n_intro_face.location = self.intro.location
				n_intro_face.do_all(v.toolcontext)
			end
			n_contract_facet = create_facet(v, classdef, contract_facet, self)
		else
			# Check if the contract facet already exist in this context (in this classdef)
			if classdef.mpropdefs_by_property.has_key(contract_facet) then
				# get the definition
				n_contract_facet = v.toolcontext.modelbuilder.mpropdef2node(classdef.mpropdefs_by_property[contract_facet]).as(AMethPropdef)
			else
				# create a new contract facet definition
				n_contract_facet = create_facet(v, classdef, contract_facet, self)

				if self.has_expect and self.mexpect != mcontract then mexpect.adapt_method_to_contract(v, contract_facet, n_contract_facet)
				if self.has_ensure and self.mensure != mcontract then mensure.adapt_method_to_contract(v, contract_facet, n_contract_facet)
			end
		end
		if mcontract != null then mcontract.adapt_method_to_contract(v, contract_facet, n_contract_facet)

		n_contract_facet.location = v.current_location
		n_contract_facet.do_all(v.toolcontext)
	end

	# Method to create a facet of the method.
	# See `define_contract_facet` for more information about two types of facets.
	#
	# `called` : is the property to call in this facet.
	private fun create_facet(v: ContractsVisitor, classdef: MClassDef, facet: MFacet, called: MMethod): AMethPropdef
	is
		expect( called.is_same_instance(self) or called.is_same_instance(self.mcontract_facet) )
	do
		# Defines the contract facet is an init or not
		# it is necessary to use the contracts with in a constructor
		facet.is_init = is_init
		var n_contractdef = v.toolcontext.modelbuilder.create_method_from_property(facet, classdef, false, self.intro.msignature)
		# FIXME set the location because the callsite creation need the node location
		n_contractdef.location = v.current_location
		n_contractdef.validate

		var block = v.ast_builder.make_block

		# Arguments to call the `called` property
		var args: Array[AExpr]
		args = n_contractdef.n_signature.make_parameter_read(v.ast_builder)

		var callsite = v.ast_builder.create_callsite(v.toolcontext.modelbuilder, n_contractdef, called.intro_mclassdef.bound_mtype, called, true)
		var n_call = v.ast_builder.make_call(new ASelfExpr, callsite, args)

		if self.intro.msignature.return_mtype == null then
			block.add(n_call)
		else
			block.add(v.ast_builder.make_return(n_call))
		end

		n_contractdef.n_block = block
		n_contractdef.do_all(v.toolcontext)
		return n_contractdef
	end
end

redef class MMethodDef

	# Entry point to build contract (define the contract facet and define the contract method verification)
	private fun construct_contract(v: ContractsVisitor, n_signature: ASignature, n_annotations: Array[AAnnotation], mcontract: MContract, exist_contract: Bool)
	do
		v.define_signature(mcontract, n_signature, mproperty.intro.msignature)
		if not exist_contract and not is_intro then no_intro_contract(v, mcontract, n_annotations)
		v.build_contract(n_annotations, mcontract, mclassdef)
		# Check if the contract must be called to know if it's needed to construct the facet
		if mcontract.is_called(v, self.mclassdef) then mproperty.define_contract_facet(v, mclassdef, mcontract)
	end

	# Create a contract on the introduction classdef of the property.
	# Display an warning message if necessary
	private fun no_intro_contract(v: ContractsVisitor, mcontract: MContract, n_annotations: Array[AAnnotation])
	do
		v.toolcontext.modelbuilder.create_method_from_property(mcontract, mcontract.intro_mclassdef, false, v.m_signature)
		mcontract.no_intro_contract(v, n_annotations)
	end

	# Apply the `no_contract` annotation to the contract. This method removes the inheritance by adding an empty contract method.
	# Display a warning if the annotation is not needed
	private fun no_contract_apply(v: ContractsVisitor, n_signature: ASignature)
	do
		var mensure = mproperty.mensure
		var mexpect = mproperty.mexpect
		if mensure == null and mexpect == null then
			v.toolcontext.warning(location, "useless_nocontract", "Useless `no_contract`, no contract was declared for `{name}`. Remove the `no_contract`")
		end
		if mensure != null then
			# Add an empty ensure method to replace the actual definition
			v.toolcontext.modelbuilder.create_method_from_property(mensure, mclassdef, false, mensure.intro.msignature)
		end
		if mexpect != null then
			# Add an empty expect method to replace the actual definition
			v.toolcontext.modelbuilder.create_method_from_property(mexpect, mclassdef, false, mexpect.intro.msignature)
		end
	end
end

redef class APropdef
	redef fun check_callsite(v)
	do
		v.visited_propdef = self
	end
end

redef class AAttrPropdef
	# Entry point to create a contract (verification of inheritance, or new contract).
	redef fun create_contracts(v)
	do
		v.ast_builder.check_mmodule(v.visited_module.mmodule.as(not null))
		v.current_location = self.location
		check_annotation(v)
		check_redef(v)
		check_invariant(v)
	end

	# Verification of the annotation to know if it is a contract annotation.
	# If this is the case, we built the appropriate contract.
	private fun check_annotation(v: ContractsVisitor)
	do
		var annotations_expect = get_annotations("expect")
		var annotations_ensure = get_annotations("ensure")
		var annotation_no_contract = get_annotations("no_contract")

		if (not annotations_expect.is_empty or not annotations_ensure.is_empty) and not annotation_no_contract.is_empty then
			v.toolcontext.error(location, "The new contract definition is not correct when using `no_contract`. Remove the contract definition or the `no_contract`")
			return
		end

		if mwritepropdef == null and (not annotations_ensure.is_empty or not annotations_ensure.is_empty) then
			# The contract is not applicable on no writable attribute
			v.toolcontext.error(location, "Not applicable contract on not writable attribute")
			return
		end

		if mwritepropdef != null and not annotation_no_contract.is_empty then
			mwritepropdef.no_contract_apply(v, new ASignature.make_from_msignature(mwritepropdef.msignature.as(not null)))
			return
		end

		if not annotations_expect.is_empty then
			v.is_intro_contract = mwritepropdef.is_intro
			var exist_contract = mwritepropdef.mproperty.has_expect
			mwritepropdef.construct_contract(v, new ASignature.make_from_msignature(mwritepropdef.msignature.as(not null)), annotations_expect, mwritepropdef.mproperty.build_expect, exist_contract)
		end

		if not annotations_ensure.is_empty then
			v.is_intro_contract = mwritepropdef.is_intro
			var exist_contract = mwritepropdef.mproperty.has_ensure

			var mensure = mwritepropdef.mproperty.build_ensure

			mwritepropdef.construct_contract(v, new ASignature.make_from_msignature(mwritepropdef.msignature.as(not null)), annotations_ensure, mensure, exist_contract)
		end
	end

	# Verification if the method have an inherited contract to apply it.
	private fun check_redef(v: ContractsVisitor)
	do
		var mwritepropdef = self.mwritepropdef

		if mwritepropdef != null and not mwritepropdef.is_intro then
			var mexpect = mwritepropdef.mproperty.mexpect
			var mensure = mwritepropdef.mproperty.mensure
			var mcontract_facet = mwritepropdef.mproperty.mcontract_facet

			if mexpect != null then
				if mcontract_facet != null and mcontract_facet.has_applied_expect then return
				if mexpect.is_called(v, mwritepropdef.mclassdef) then mwritepropdef.mproperty.define_contract_facet(v, mwritepropdef.mclassdef, mexpect)
			end
			if mensure != null then
				if mcontract_facet != null and mcontract_facet.has_applied_ensure then return
				if mensure.is_called(v, mwritepropdef.mclassdef) then mwritepropdef.mproperty.define_contract_facet(v, mwritepropdef.mclassdef, mensure)
			end
		end
	end

	# Check if the class has an invariant to apply it on the property
	private fun check_invariant(v: ContractsVisitor)
	do
		var mpropdef = mpropdef or else mwritepropdef or else mreadpropdef
		if not mpropdef isa MPropDef then return

		var minvariant = mpropdef.mclassdef.mclass.minvariant
		if minvariant != null then
			if mreadpropdef != null and not mreadpropdef.mproperty.has_invariant_facet then
				mreadpropdef.mproperty.define_invariant_facet(v, mpropdef.mclassdef, minvariant)
			end
			if mwritepropdef != null and not mwritepropdef.mproperty.has_invariant_facet then
				mwritepropdef.mproperty.define_invariant_facet(v, mpropdef.mclassdef, minvariant)
			end
		end
	end
end

redef class AMethPropdef

	# Entry point to create a contract (verification of inheritance, or new contract).
	redef fun create_contracts(v)
	do
		if mpropdef == null then return
		v.ast_builder.check_mmodule(mpropdef.mclassdef.mmodule)
		v.current_location = self.location
		v.is_intro_contract = mpropdef.is_intro
		check_annotation(v)
		if not mpropdef.is_intro then check_redef(v)
		check_invariant(v)
	end

	# Verification of the annotation to know if it is a contract annotation.
	# If this is the case, we built the appropriate contract.
	private fun check_annotation(v: ContractsVisitor)
	do
		var annotations_expect = get_annotations("expect")
		var annotations_ensure = get_annotations("ensure")
		var annotation_no_contract = get_annotations("no_contract")

		if (not annotations_expect.is_empty or not annotations_ensure.is_empty) and not annotation_no_contract.is_empty then
			v.toolcontext.error(location, "The new contract definition is not correct when using `no_contract`. Remove the contract definition or the `no_contract`")
			return
		end

		var nsignature = n_signature or else new ASignature

		if not annotation_no_contract.is_empty then
			mpropdef.no_contract_apply(v, nsignature.clone)
			return
		end

		if not annotations_expect.is_empty then
			var exist_contract = mpropdef.mproperty.has_expect
			mpropdef.construct_contract(v, nsignature.clone, annotations_expect, mpropdef.mproperty.build_expect, exist_contract)
		end

		if not annotations_ensure.is_empty then
			var exist_contract = mpropdef.mproperty.has_ensure

			var mensure = mpropdef.mproperty.build_ensure

			compute_old(v, mensure, exist_contract, annotations_ensure)

			if not v.toolcontext.check_errors then return # If an error was found in the old compute, just return

			mpropdef.construct_contract(v, nsignature.clone, annotations_ensure, mensure, exist_contract)
		end
	end

	# Verification if the method have an inherited contract to apply it.
	private fun check_redef(v: ContractsVisitor)
	do
		var mexpect = mpropdef.mproperty.mexpect
		var mensure = mpropdef.mproperty.mensure
		var mcontract_facet = mpropdef.mproperty.mcontract_facet

		if mexpect != null then
			if mcontract_facet != null and mcontract_facet.has_applied_expect then return
			if mexpect.is_called(v, mpropdef.mclassdef) then mpropdef.mproperty.define_contract_facet(v, mpropdef.mclassdef, mexpect)
		end
		if mensure != null then
			if mcontract_facet != null and mcontract_facet.has_applied_ensure then return
			if mensure.is_called(v, mpropdef.mclassdef) then mpropdef.mproperty.define_contract_facet(v, mpropdef.mclassdef, mensure)
		end
	end

	# Check if the class has an invariant to apply it on the property
	private fun check_invariant(v: ContractsVisitor)
	do
		var minvariant = mpropdef.mclassdef.mclass.minvariant
		if minvariant != null and not mpropdef.mproperty.has_invariant_facet then mpropdef.mproperty.define_invariant_facet(v, mpropdef.mclassdef, minvariant)
	end

	# Checks the `old` in the ensure annotations. If `old`s are found a new class is generated to keep the old values and an `init_old_{name_method}` method is injected.
	#
	# Exemple:
	# ~~~nitish
	# from:
	#	classe A
	#		fun add_one(i: Int):Int is ensure(old(i) + 1 == result)
	#	end
	# to:
	#	classe A
	#		fun add_one(i: Int):Int is ensure(old(i) + 1 == result)
	#
	#		fun init_old_ensure_add_one(i: Int, old: Old_ensure_add_one): Old_ensure_add_one do
	#			old.i = i
	#			return old
	#		end
	#	end
	#	classe Old_ensure_add_one
	#		var _1: Int
	#	end
	# ~~
	#
	private fun compute_old(v: ContractsVisitor, mensure: MEnsure, exist_contract: Bool, annotations_ensure: Collection[AAnnotation])
	do
		var old_visitor = new OldVisitor(mpropdef.as(not null), v)

		for annotation_ensure in annotations_ensure do old_visitor.enter_visit(annotation_ensure)
		if old_visitor.old_attributes.is_empty then return

		if self.mpropdef.mproperty.is_init then
			v.toolcontext.error(location, "The `old` cannot be used with a constructor")
			return
		end

		# Take into consideration if an ensure contract is already defined without `old` to force the facet override
		if exist_contract and not mensure.has_old_mclass then mpropdef.mproperty.mcontract_facet.has_applied_ensure = false

		var old_mclass = mensure.build_old_mclass

		# Try to get the old_classdef in the current context
		var old_classdef = old_mclass.try_get_mclassdef(mpropdef.mclassdef.mmodule)

		var n_class: AStdClassdef

		# If the old class does not exist in the current context build a new.
		if old_classdef == null then
			var object_type = v.mainmodule.get_primitive_class("Object").mclass_type
			n_class = v.toolcontext.modelbuilder.create_class_from_mclass(old_mclass, [object_type], mpropdef.mclassdef.mmodule)
		else
			n_class = v.toolcontext.modelbuilder.mclassdef2node(old_classdef).as(AStdClassdef)
		end

		old_visitor.build_old_attributes(n_class.mclassdef.as(not null))
		old_visitor.switch_call_to_old_attribut(mensure, self)
		old_mclass.build_old_init_methdef(old_visitor, self)
	end
end

redef class MSignature

	# Adapt signature for an contract
	#
	# The returned `MSignature` is the copy of `self` without return type.
	private fun adapt_to_contract: MSignature do return new MSignature(mparameters.to_a, null)

	# Adapt signature for a ensure contract
	#
	# The returned `MSignature` is the copy of `self` without return type.
	# The return type is replaced by a new parameter `result`
	private fun adapt_to_ensurecondition: MSignature
	do
		var rtype = return_mtype
		var msignature = adapt_to_contract
		if rtype != null then
			msignature.mparameters.add(new MParameter("result", rtype, false))
		end
		return msignature
	end

	# The returned `MSignature` is the exact copy of `self`.
	private fun clone: MSignature do return new MSignature(mparameters.to_a, return_mtype)
end

redef class ASignature

	# Create an array of AVarExpr representing the read of every parameters
	private fun make_parameter_read(ast_builder: ASTBuilder): Array[AVarExpr]
	do
		var args = new Array[AVarExpr]
		for n_param in self.n_params do
			var mtype = n_param.variable.declared_type
			var variable = n_param.variable
			if variable != null and mtype != null then
				args.push ast_builder.make_var_read(variable, mtype)
			end
		end
		return args
	end

	# Create a new ASignature adapted for contract
	#
	# The returned `ASignature` is the copy of `self` without return type.
	private fun adapt_to_contract: ASignature
	do
		var adapt_nsignature = self.clone
		if adapt_nsignature.n_type != null then adapt_nsignature.n_type.detach
		return adapt_nsignature
	end

	# Create a new ASignature adapted for ensure
	#
	# The returned `ASignature` is the copy of `self` without return type.
	# The return type is replaced by a new parameter `result`
	private fun adapt_to_ensurecondition: ASignature do
		var nsignature = adapt_to_contract
		if ret_type != null then
			var variable = new Variable("result")
			variable.declared_type = ret_type
			nsignature.n_params.add new AParam.make(variable, ret_type.create_ast_representation)
		end
		return nsignature
	end
end

redef class ACallExpr

	# Checks if the call is an old. If it's the case register in the OldVisitor and remove it.
	redef fun check_old(v: OldVisitor)
	do
		if n_qid.n_id.text == "old" then
			var n_arguments = n_args
			# Check that the old is in good form `old(one_expression)`
			if n_arguments isa AParExprs and n_arguments.n_exprs.length == 1 then
				v.old_attributes[n_arguments.n_exprs.first] = null
				# Remove the old value
				self.replace_with(n_arguments.n_exprs.first)
			end
		end
	end
end

redef class ASendExpr
	redef fun check_callsite(v)
	do
		var actual_callsite = callsite
		if actual_callsite != null then
			callsite = v.drive_callsite_to_contract(actual_callsite)
			# Set the signature mapping with the old value, this avoids having to re-check the callsite.
			callsite.signaturemap = actual_callsite.signaturemap
		end
	end
end

redef class ANewExpr
	redef fun check_callsite(v)
	do
		var actual_callsite = callsite
		if actual_callsite != null then
			callsite = v.drive_callsite_to_contract(actual_callsite)
			# Set the signature mapping with the old value, this avoids having to re-check the callsite
			callsite.signaturemap = actual_callsite.signaturemap
		end
	end
end

# Ast representation of the `in_assertion` checking
# Note, the node if is only composed with a then body (`n_body`)
class AIfInAssertion
	super AExpr

	# The associed contract
	var mcontract: MContract

	# The body of the if
	var n_body: AExpr is writable

	redef fun accept_scope_visitor(v)
	do
		v.enter_visit_block(n_body, null)
	end

	redef fun visit_all(v: Visitor)
	do
		v.enter_visit(n_body)
	end

	redef fun accept_typing(v)
	do
		v.visit_stmt(n_body)

		self.is_typed = true

		self.mtype = n_body.mtype
	end
end
