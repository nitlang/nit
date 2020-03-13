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
# This module provide extension of the model to add contracts, the building phase and the "re-driving" to call the contract.
#
# FIXME Split the module in three parts: extension of the modele, building phase and the "re-driving"
module contracts

import parse_annotations
import phase
import semantize
import mclassdef_collect
import nitbuilder
intrude import modelize_property
intrude import astbuilder
intrude import model_contract

redef class ToolContext
	# Parses contracts annotations.
	var contracts_phase: Phase = new ContractsPhase(self, [modelize_property_phase,typing_phase])
end

private class ContractsPhase
	super Phase

	# The entry point of the contract phase
	# In reality, the contract phase is executed on each module
	# FIXME: Actually all method is checked to add method if any contract is inherited
	redef fun process_nmodule(nmodule)do
		# Check if the contracts are disabled
		if toolcontext.opt_no_contract.value then return
		nmodule.do_contracts(self.toolcontext)
	end
end

redef class AModule
	# Compile all contracts
	#
	# The implementation of the contracts is done in two visits.
	#
	# - First step, the visitor analyzes and constructs the contracts
	#   for each class (invariant) and method (expect, ensure).
	#
	# - Second step the visitor analyzes each `ASendExpr` to see
	#   if the callsite calls a method with a contract. If this is
	#	the case the callsite is replaced by another callsite to the contract method.
	fun do_contracts(toolcontext: ToolContext) do

		var nitbuilder = new NitBuilder(toolcontext, new ASTBuilder(mmodule.as(not null)))
		#
		var contract_visitor = new ContractsVisitor(nitbuilder, toolcontext.modelbuilder.identified_modules.first, self)
		contract_visitor.enter_visit(self)
		#
		var callsite_visitor = new CallSiteVisitor(nitbuilder)
		callsite_visitor.enter_visit(self)
	end
end

# This visitor checks the `AMethPropdef` and the `AClassDef` to check if they have a contract annotation or it's a redefinition with a inheritance contract
private class ContractsVisitor
	super Visitor

	# Instance of nitbuilder
	var nitbuilder: NitBuilder

	# The main module
	# It's strore to define if the contract need to be build depending on the selected policy `--no-contract` `--full-contract` or default
	var mainmodule: MModule

	# Actual visited module
	var visited_module: AModule

	# The `ASignature` of the actual build contract
	var n_signature: ASignature is noinit

	# The `MSignature` of the actual build contract
	var m_signature: MSignature is noinit

	# The `current_location` can corresponding of the annotation or method location.
	var current_location: Location is noinit

	# Is the contrat is an introduction or not?
	# This attribute has the same value as the `is_intro` of the propdef attached to the contract.
	# except for the MClassDef were it's always `false`, to solve the problem of multiple inheritance an empty invariant method is systematically added in object.
	var is_intro_contract: Bool is noinit

	# Keep the invariant property to avoid searching at each invariant
	var global_invariant: nullable MInvariant = null

	# Keep the set in_contract attribute to avoid searching at each contrat
	var in_contract_attribute: nullable MAttribute = null

	redef fun visit(node)
	do
		node.check_contracts(self)
		node.visit_all(self)
	end

	# Method use to define the signature part of the method `ASignature` and `MSignature`
	# The given `mcontract` provided `adapt_nsignature` and `adapt_msignature` to copy and adapt the given signature (`nsignature` and `msignature`)
	fun define_contract_signature(mcontract: MContract, nsignature: nullable ASignature, msignature: nullable MSignature)
	do
		if nsignature != null and msignature != null then nsignature.ret_type = msignature.return_mtype
		self.n_signature = mcontract.adapt_nsignature(nsignature)
		self.m_signature = mcontract.adapt_msignature(msignature)
	end

	# Define the new contract take in consideration that an old contract exist or not
	private fun build_contract(n_annotations: Array[AAnnotation], mcontract: MContract, mclassdef: MClassDef)
	do
		# Retrieving the expression provided in the annotation
		var n_conditions = new Array[AExpr]
		for n_annotation in n_annotations do n_conditions.add n_annotation.construct_condition(self)
		var m_contractdef: AMethPropdef
		if is_intro_contract then
			# Create new contract method
			mcontract.create_intro_contract(self, n_conditions, mclassdef)
		else
			# Create a redef of contract to take in consideration the new condition
			mcontract.create_subcontract(self, n_conditions, mclassdef)
		end
	end

	# Verification if the construction of the contract is necessary.
	# Three cases are checked for `expect`:
	#
	# - Was the `--full-contract` option passed?
	# - Is the method is in the main package?
	# - Is the method is in a direct imported package.
	#
	fun check_usage_expect(actual_mmodule: MModule): Bool
	do
		var main_package = mainmodule.mpackage
		var actual_package = actual_mmodule.mpackage
		if main_package != null and actual_package != null then
			var condition_direct_arc = nitbuilder.toolcontext.modelbuilder.model.mpackage_importation_graph.has_arc(main_package, actual_package)
			return nitbuilder.toolcontext.opt_full_contract.value or condition_direct_arc or main_package == actual_package
		end
		return false
	end

	# Verification if the construction of the contract is necessary.
	# Two cases are checked for `ensure`:
	#
	# - Was the `--full-contract` option passed?
	# - Is the method is in the main package?
	#
	fun check_usage_ensure(actual_mmodule: MModule): Bool
	do
		return nitbuilder.toolcontext.opt_full_contract.value or mainmodule.mpackage == actual_mmodule.mpackage
	end

	# Verification if the construction of the contract is necessary.
	# Two cases are checked for `invariant`:
	#
	# - Was the `--full-contract` option passed?
	# - Is the method is in the main package?
	#
	fun check_usage_invariants(actual_mmodule: MModule): Bool
	do
		return nitbuilder.toolcontext.opt_full_contract.value or mainmodule.mpackage == actual_mmodule.mpackage
	end

	# Inject the invariant method (`_invariant_`) verification in the Object class
	# By default the method is empty.
	# Note it is not abstract because the implementation of this method makes a super call to resolve multiple inheritance problem
	private fun inject_invariant_in_object
	do
		# If the global_invariant already know just return
		if global_invariant != null then return
		# Get the object class from the modelbuilder
		var object_class = nitbuilder.toolcontext.modelbuilder.get_mclass_by_name(visited_module, mainmodule, "Object")

		# Try to get a global invariant if it's already defined in a previously visited module.
		var invariant_property = nitbuilder.toolcontext.modelbuilder.try_get_mproperty_by_name(visited_module, object_class.intro, "_invariant_")
		if invariant_property != null then
			global_invariant = invariant_property.as(MInvariant)
			return
		end

		var m_invariant = new MInvariant(object_class.intro, "_invariant_", object_class.intro.location, public_visibility)
		global_invariant = m_invariant

		nitbuilder.create_method_from_property(m_invariant, object_class.intro, new MSignature(new Array[MParameter]))
	end

	# Return the invariant property (`Minvariant`)
	# If the `_invariant_` does not exist it's injected this with `inject_invariant_in_object`
	private fun get_global_invariant: MInvariant
	do
		if self.global_invariant == null then inject_invariant_in_object
		return global_invariant.as(not null)
	end

	# Inject the incontract attribute (`_in_contract_`) in the Sys class
	# This attribute allows to check if the contract need to be executed
	private fun inject_incontract_in_sys
	do
		# If the global_invariant already know just return
		if in_contract_attribute != null then return

		# Get the sys class from the modelbuilder
		var sys_class = nitbuilder.toolcontext.modelbuilder.get_mclass_by_name(visited_module, mainmodule, "Sys")

		# Try to get a global in_contract if it's already defined in a previously visited module.
		var in_contract_property = nitbuilder.toolcontext.modelbuilder.try_get_mproperty_by_name(visited_module, sys_class.intro, "__in_contract_")
		if in_contract_property != null then
			self.in_contract_attribute = in_contract_property.as(MAttribute)
			return
		end

		var bool_false = new AFalseExpr.make(mainmodule.bool_type)
		var n_in_contract_attribute = nitbuilder.create_attribute_from_name("__in_contract_", sys_class.intro, mainmodule.bool_type, public_visibility, true, bool_false)
		# Get the mproperty of the new n_in_contract_attribute
		in_contract_attribute = n_in_contract_attribute.mpropdef.mproperty
	end

	# Return the in_contract attribute of sys (`_in_contract_`)
	# If the attribute `_in_contract_` does not exist it's injected this with `inject_incontract_in_sys`
	private fun get_incontract: MAttribute
	do
		if self.in_contract_attribute == null then inject_incontract_in_sys
		return in_contract_attribute.as(not null)
	end

	# Return an AIfExpr with the contract encapsulated by an `if` to check if it's already in a contract verification.
	#
	# exemple
	# ~~~nitish
	# class A
	# 	fun bar([...]) is except([...])
	#
	# 	fun _contract_bar([...])
	#	do
	#		if not self.sys._in_contract_ then
	#			self.sys._in_contract_ = true
	#			_bar_expect([...])
	#			self.sys._in_contract_ = false
	#		end
	#		bar([...])
	#	end
	#
	# 	fun _bar_expect([...])
	# end
	# ~~~~
	#
	private fun encapsulated_contract_call(visited_method: AMethPropdef, call_to_contracts: Array[ACallExpr]): AIfExpr
	do
		var sys_property = nitbuilder.toolcontext.modelbuilder.model.get_mproperties_by_name("sys").first.as(MMethod)
		var callsite_sys = nitbuilder.create_callsite(visited_method, sys_property, true)

		var incontract_attribute = get_incontract

		var callsite_get_incontract = nitbuilder.create_callsite(visited_method, incontract_attribute.getter.as(MMethod), false)
		var callsite_set_incontract = nitbuilder.create_callsite(visited_method, incontract_attribute.setter.as(MMethod), false)

		var n_condition = nitbuilder.ast_builder.make_not(nitbuilder.ast_builder.make_call(nitbuilder.ast_builder.make_call(new ASelfExpr, callsite_sys, null), callsite_get_incontract, null))

		var n_if = nitbuilder.ast_builder.make_if(n_condition, null)

		var if_then_block = n_if.n_then.as(ABlockExpr)

		if_then_block.add(nitbuilder.ast_builder.make_call(nitbuilder.ast_builder.make_call(new ASelfExpr, callsite_sys, null), callsite_set_incontract, [new ATrueExpr.make(mainmodule.bool_type)]))
		if_then_block.add_all(call_to_contracts)
		if_then_block.add(nitbuilder.ast_builder.make_call(nitbuilder.ast_builder.make_call(new ASelfExpr, callsite_sys, null), callsite_set_incontract, [new AFalseExpr.make(mainmodule.bool_type)]))

		return n_if
	end
end

# This visitor checks the `callsite` to see if the target `mpropdef` has a contract.
private class CallSiteVisitor
	super Visitor

	# Instance of nitbuilder
	var nitbuilder: NitBuilder

	# Actual visited property definition (AAttrPropdef or AMethPropdef)
	var visited_propdef: APropdef is noinit

	redef fun visit(node)
	do
		node.check_callsite(self)
		node.visit_all(self)
	end

	# Check if the callsite calls a method with a contract.
	# If it's the case the callsite is replaced by another callsite to the contract method.
	private fun drive_callsite_contract(callsite: CallSite, mclass: nullable MClass): CallSite
	do
		var contract_facet = callsite.mproperty.mcontract_facet
		var invariant_facet = callsite.mproperty.minvariant_facet
		var visited_mpropdef = visited_propdef.mpropdef

		if contract_facet == null or visited_mpropdef == null then return callsite
		if visited_mpropdef isa MContract or visited_mpropdef isa MFacet then return callsite
		if mclass != null and invariant_facet != null and not mclass.has_invariant then return callsite

		# Do not drive contract in self if it's necessary `--no-self-contract`
		if nitbuilder.toolcontext.opt_no_self_contract.value and callsite.recv_is_self then return callsite

		var facet: MFacet
		# Check to drive the callsite on the right facet
		if not callsite.recv_is_self and invariant_facet != null then
			facet = invariant_facet
		else
			facet = contract_facet
		end
		return nitbuilder.create_callsite(visited_propdef, facet, callsite.recv_is_self)
	end
end

# Evaluation of expressions to detect the old usage in ensure.
private class OldVisitor
	super Visitor

	# Actual visited mpropdef
	var visited_mpropdef: MPropDef

	# The Instance of the actual contract visitor.
	var contract_visitor: ContractsVisitor

	# Array of expressions evaluated as old.
	var old_exprs = new Array[AExpr]

	# Array of attributes to keep the old value.
	# This list will be used to define the mpropdef to set the old object.
	var old_attributes = new HashMap[AExpr, AAttrPropdef]

	redef fun visit(node)
	do
		node.check_old(self)
		node.visit_all(self)
	end

	# Create all old attributes and inject them into the given `mclassdef`
	private fun build_old_attributes(mclassdef: MClassDef, old_variable: Variable)
	do
		old_attributes = new HashMap[AExpr, AAttrPropdef]
		for old_expr in old_exprs do
			# We only check calls to methods and attributes. It is useless to evaluate old literals seen that their value cannot change, we can directly keep them as is
			if old_expr isa ACallExpr then
				var attribute_name = old_expr.collect_text
				var called_property_name = old_expr.n_qid.n_id.text

				# Check if the property exist in the context
				var call_property = contract_visitor.nitbuilder.toolcontext.modelbuilder.try_get_mproperty_by_name2(old_expr, contract_visitor.visited_module.mmodule.as(not null), visited_mpropdef.mclassdef.bound_mtype, called_property_name)
				if call_property == null then
					contract_visitor.nitbuilder.toolcontext.error(old_expr.location, "Error: method or variable `{called_property_name}` unknown in `{visited_mpropdef.mclassdef.bound_mtype}`.")
					return
				end

				# Check if the property already exist in the old class
				var property = contract_visitor.nitbuilder.toolcontext.modelbuilder.try_get_mproperty_by_name(contract_visitor.visited_module, mclassdef, attribute_name)
				if property != null then
					old_attributes[old_expr] = contract_visitor.nitbuilder.toolcontext.modelbuilder.mpropdef2npropdef[property.intro].as(AAttrPropdef)
					return
				end

				# typing of the expression
				old_expr.do_typing(contract_visitor.nitbuilder.toolcontext.modelbuilder, visited_mpropdef)
				if old_expr.mtype == null then
					contract_visitor.nitbuilder.toolcontext.error(old_expr.location, "Error: expected an expression to be store in `old` context.")
					return
				end

				var resolved_mtype = old_expr.mtype.anchor_to(contract_visitor.visited_module.mmodule.as(not null), visited_mpropdef.mclassdef.bound_mtype).as_nullable
				var n_attribute = contract_visitor.nitbuilder.create_attribute_from_name(attribute_name, mclassdef, resolved_mtype, public_visibility, true)
				n_attribute.noinit = true

				old_attributes[old_expr] = n_attribute
			end
		end
	end

	# Switch of old references captured during the visit with references to old attributes, generated by the method `build_old_attributes`.
	# Example:
	# ~~~nitish
	# from:
	# 	fun add_one(i: Int) is ensure(old(i) + 1 == i)
	# to:
	# 	fun add_one(i: Int) is ensure(old.i + 1 == i)
	# ~~
	#
	private fun switch_call_to_old_attribut(old_mclass_def: MClassDef, visited_nmethod: AMethPropdef)
	do
		var old_mclass = old_mclass_def.mclass
		assert old_mclass isa MOldClass
		for expr, n_attribut in old_attributes do
			var n_old_var = contract_visitor.nitbuilder.ast_builder.make_var(old_mclass.old_variable, old_mclass.mclass_type)
			var callsite_update = contract_visitor.nitbuilder.create_callsite(visited_nmethod, n_attribut.mpropdef.mproperty.getter.as(MMethod), false)
			expr.replace_with(contract_visitor.nitbuilder.ast_builder.make_call(n_old_var, callsite_update, null))
		end
	end
end

redef class ANode
	private fun check_contracts(v: ContractsVisitor) do end
	private fun check_callsite(v: CallSiteVisitor) do end
	private fun check_old(v: OldVisitor) do end
end

redef class AAnnotation

	# Returns the conditions of annotation parameters in the form of and expr
	# Example:
	# the contract ensure(true, i == 10, f >= 1.0)
	# return this condition (true and i == 10 and f >= 1.0)
	private fun construct_condition(v : ContractsVisitor): AExpr
	do
		var n_condition = n_args.first
		n_args.remove_at(0)
		for n_arg in n_args do n_condition = v.nitbuilder.ast_builder.make_and(n_condition, n_arg)
		n_condition.location = self.location
		return n_condition
	end
end

redef class ACallExpr

	# Checks if the call is of type old. If it's the case register in the OldVisitor and remove it.
	redef fun check_old(v: OldVisitor)
	do
		if n_qid.n_id.text == "old" then
			var n_arguments = n_args
			assert n_arguments isa AParExprs
			assert n_arguments.n_exprs.length == 1
			v.old_exprs.add(n_arguments.n_exprs.first)
			# Remove the old value
			self.replace_with(n_arguments.n_exprs.first)
		end
	end
end

redef class MContract
	super MMethod

	# Method use to diplay warning when the contract is not present at the introduction
	private fun no_intro_contract(v: ContractsVisitor, a: Array[AAnnotation])do end

	# Creating specific inheritance block contract
	private fun create_nblock(v: ContractsVisitor, n_conditions: Array[AExpr], args: Array[AExpr]): ABlockExpr is abstract

	# Method to adapt the `n_mpropdef.n_block` to the contract
	private fun adapt_method_to_contract(v: ContractsVisitor, n_mpropdef: AMethPropdef, called_method: MMethod) is abstract

	# Adapt the msignature specifically for the contract method
	private fun adapt_specific_msignature(m_signature: MSignature): MSignature do return m_signature.adapt_to_condition

	# Adapt the nsignature specifically for the contract method
	private fun adapt_specific_nsignature(n_signature: ASignature): ASignature do return n_signature.adapt_to_condition(null)

	# Adapt the `m_signature` to the contract
	# If it is not null call the specific adapt `m_signature` for the contract
	private fun adapt_msignature(m_signature: nullable MSignature): MSignature
	do
		if m_signature == null then return new MSignature(new Array[MParameter])
		return adapt_specific_msignature(m_signature)
	end

	# Adapt the `n_signature` to the contract
	# If it is not null call the specific adapt `n_signature` for the contract
	private fun adapt_nsignature(n_signature: nullable ASignature): ASignature
	do
		if n_signature == null then return new ASignature
		return adapt_specific_nsignature(n_signature)
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
		var n_block = v.nitbuilder.ast_builder.make_block
		for n_condition in n_conditions do
			# Create a new tid to set the name of the assert for more explicit error
			var tid = new TId.init_tk(n_condition.location)
			tid.text = "{n_condition.location.text}"
			var n_assert = v.nitbuilder.ast_builder.make_assert(tid, n_condition, null)
			# Define the assert location to reference the annoation
			n_assert.location = n_condition.location
			n_block.add n_assert
		end
		make_contract(v, n_block, mclassdef)
	end

	# Create a contract with old (super) and the new conditions
	private fun create_subcontract(v: ContractsVisitor, n_conditions: Array[AExpr], mclassdef: MClassDef)
	do
		var args = v.n_signature.make_parameter_read(v.nitbuilder.ast_builder)
		var n_block = v.nitbuilder.ast_builder.make_block
		n_block = self.create_nblock(v, n_conditions, args)
		make_contract(v, n_block, mclassdef)
	end

	# Build a method with a specific block `n_block` in a specified `mclassdef`
	private fun make_contract(v: ContractsVisitor, n_block: AExpr, mclassdef: MClassDef)
	do
		var n_contractdef = v.nitbuilder.create_method_from_property(self, mclassdef, v.m_signature)
		# Set the signature to keep the same variable
		n_contractdef.n_signature = v.n_signature
		n_contractdef.n_block = n_block
		# Define the location of the new method for corresponding of the annotation location
		n_contractdef.location = v.current_location
		n_contractdef.do_all(v.nitbuilder.toolcontext)
	end
end

redef class MExpect
	super MContract

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
		v.nitbuilder.toolcontext.warning(a.first.location,"useless_contract","Useless contract: No contract defined at the introduction of the method")
	end

	redef fun create_nblock(v: ContractsVisitor, n_conditions: Array[AExpr], args: Array[AExpr]): ABlockExpr
	do
		var n_block = v.nitbuilder.ast_builder.make_block
		for n_condition in n_conditions do
			# Creating the if expression with the new condition
			var if_block = v.nitbuilder.ast_builder.make_if(n_condition, n_condition.mtype)
			# Creating and adding return expr to the then case
			if_block.n_then = v.nitbuilder.ast_builder.make_return
			if_block.location = n_condition.location
			n_block.add if_block
		end
		# Creating the super call if all `if` has not returned
		n_block.add v.nitbuilder.ast_builder.make_super_call(args)
		return n_block
	end

	redef fun adapt_method_to_contract(v: ContractsVisitor, n_mpropdef: AMethPropdef, called_method: MMethod)
	do
		var callsite = v.nitbuilder.create_callsite(n_mpropdef, self, true)
		var args = n_mpropdef.n_signature.make_parameter_read(v.nitbuilder.ast_builder)
		var n_callexpect = v.nitbuilder.ast_builder.make_call(new ASelfExpr, callsite,args)
		# Creation of the new instruction block with the call to expect condition
		var actual_expr = n_mpropdef.n_block
		var new_block = new ABlockExpr
		new_block.n_expr.push v.encapsulated_contract_call(n_mpropdef, [n_callexpect])
		if actual_expr isa ABlockExpr then
			new_block.n_expr.add_all(actual_expr.n_expr)
		else if actual_expr != null then
			new_block.n_expr.push(actual_expr)
		end
		n_mpropdef.n_block = new_block
	end
end

redef class BottomMContract
	super MContract

	redef fun create_nblock(v: ContractsVisitor, n_conditions: Array[AExpr], args: Array[AExpr]): ABlockExpr
	do
		# Define contract block
		var n_block = v.nitbuilder.ast_builder.make_block
		# Creating the super call to the contract
		var super_call = v.nitbuilder.ast_builder.make_super_call(args)
		# Adding the expressions to the block
		n_block.add super_call
		for n_condition in n_conditions do
			var tid = new TId.init_tk(n_condition.location)
			tid.text = "{n_condition.location.text}"
			# Creating the assert expression with the new condition
			var n_assert = v.nitbuilder.ast_builder.make_assert(tid, n_condition)
			n_assert.location = n_condition.location
			n_block.add n_assert
		end
		return n_block
	end

	# Inject the result variable in the `n_block` of the given `n_mpropdef`.
	private fun inject_result(v: ContractsVisitor, n_mpropdef: AMethPropdef, ret_type: MType): Variable
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
		var assign_result = v.nitbuilder.ast_builder.make_var_assign(return_var, returned_expr)
		# Remove the actual return
		actual_block.n_expr.pop
		# Set the return type
		return_var.declared_type = ret_type
		# Adding the reading expr of result variable to the block
		actual_block.add assign_result
		# Expr to read the result variable
		var read_result = v.nitbuilder.ast_builder.make_var_read(return_var, ret_type)
		# Definition of the new return
		return_expr = v.nitbuilder.ast_builder.make_return(read_result)
		actual_block.add return_expr
		return return_var
	end
end

redef class MEnsure
	super BottomMContract

	redef fun adapt_specific_msignature(m_signature: MSignature): MSignature
	do
		var msignature = m_signature.adapt_to_ensurecondition
		if self.old_mclass != null then msignature.mparameters.add(new MParameter("old", old_mclass.mclass_type, false))
		return msignature
	end

	redef fun adapt_specific_nsignature(n_signature: ASignature): ASignature
	do
		var nsignature = n_signature.adapt_to_ensurecondition
		if self.old_mclass != null then
			var n_id = new TId
			n_id.text = "old"
			var new_param = new AParam.init_aparam(n_id, self.old_mclass.mclass_type.create_ast_representation)
			new_param.variable = old_mclass.old_variable
			nsignature.n_params.add new_param
		end
		return nsignature
	end

	redef fun adapt_method_to_contract(v: ContractsVisitor, n_mpropdef: AMethPropdef, called_method: MMethod)
	do
		var callsite = v.nitbuilder.create_callsite(n_mpropdef, self, true)
		var n_self = new ASelfExpr
		# argument to call the contract method
		var args = n_mpropdef.n_signature.make_parameter_read(v.nitbuilder.ast_builder)

		var n_read_old: nullable AVarExpr = null

		if self.old_mclass != null then
			inject_old(v, n_mpropdef)
			n_read_old = v.nitbuilder.ast_builder.make_var_read(old_mclass.old_variable, old_mclass.mclass_type)
		end

		var actual_block = n_mpropdef.n_block
		# never happen. If it's the case the problem is in the contract facet building
		assert actual_block isa ABlockExpr

		var ret_type = n_mpropdef.mpropdef.mproperty.intro.msignature.return_mtype
		if ret_type != null then
			# Inject the variable result
			var result_var = inject_result(v, n_mpropdef, ret_type)
			# Expr to read the result variable
			var read_result = v.nitbuilder.ast_builder.make_var_read(result_var, ret_type)
			var return_expr = actual_block.n_expr.pop
			# Adding the read return to argument
			args.add(read_result)
			if n_read_old != null then args.add(n_read_old)
			var n_call_contract = v.nitbuilder.ast_builder.make_call(n_self, callsite, args)
			actual_block.add_all([v.encapsulated_contract_call(n_mpropdef, [n_call_contract]), return_expr])
		else
			if n_read_old != null then args.add(n_read_old)
			# build the call to the contract method
			var n_call_contract = v.nitbuilder.ast_builder.make_call(n_self, callsite, args)
			actual_block.add v.encapsulated_contract_call(n_mpropdef, [n_call_contract])
		end
		n_mpropdef.do_all(v.nitbuilder.toolcontext)
	end

	private fun inject_old(v: ContractsVisitor, n_mpropdef: AMethPropdef)
	do
		var old_class_initdef = old_mclass.intro.default_init

		var callsite_new_old_class = v.nitbuilder.create_callsite(n_mpropdef, old_class_initdef.mproperty, false)

		var n_new_old_class = v.nitbuilder.ast_builder.make_new(callsite_new_old_class, null)

		n_new_old_class.n_type = old_mclass.mclass_type.create_ast_representation

		var callsite_old_init_property = v.nitbuilder.create_callsite(n_mpropdef, old_mclass.init_old_property.as(not null), true)

		var n_args_call_init_property = new Array[AExpr]

		n_args_call_init_property.add_all(n_mpropdef.n_signature.make_parameter_read(v.nitbuilder.ast_builder))
		n_args_call_init_property.add(n_new_old_class)

		var n_call_init_old_property = v.nitbuilder.ast_builder.make_call(new ASelfExpr, callsite_old_init_property, n_args_call_init_property)

		var new_block = v.nitbuilder.ast_builder.make_block
		new_block.add v.nitbuilder.ast_builder.make_var_assign(old_mclass.old_variable, n_call_init_old_property)

		new_block.n_expr.add_all(n_mpropdef.n_block.as(ABlockExpr).n_expr)
		n_mpropdef.n_block = new_block
	end
end

redef class MInvariant
	super BottomMContract

	redef fun adapt_method_to_contract(v: ContractsVisitor, n_mpropdef: AMethPropdef, called_method: MMethod)
	do
		var callsite = v.nitbuilder.create_callsite(n_mpropdef, self, true)
		var n_self = new ASelfExpr
		# build the call to the contract method
		var n_call = v.nitbuilder.ast_builder.make_call(n_self, callsite, null)
		var actual_block = n_mpropdef.n_block
		# never happen. If it's the case the problem is in the contract facet building
		assert actual_block isa ABlockExpr

		var new_block = v.nitbuilder.ast_builder.make_block

		if v.nitbuilder.toolcontext.opt_in_out_invariant.value and not called_method.is_init then new_block.add n_call

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
			new_block.add_all([n_call, return_expr])
		else
			new_block.add(n_call)
		end
	end
end

redef class MClass

	# Build the invariant property if does not already exist and return it
	private fun build_invariant_property(v: ContractsVisitor): MInvariant
	do
		var m_invariant = self.minvariant
		if m_invariant != null then return m_invariant
		# get a invariant property from the `ContractsVisitor`
		m_invariant = v.get_global_invariant
		self.minvariant = m_invariant
		return m_invariant
	end
end

redef class MMethod

	# Define contract facet for MMethod in the given mclassdef.
	# If a contract is given adapt the contract facet.
	private fun define_contract_facet(v: ContractsVisitor, classdef: MClassDef, exist_contract: Bool, mcontract: nullable MContract)
	do
		var exist_contract_facet = check_contract_facet
		# Do nothing the contract and the contract facet already exist
		if exist_contract_facet and exist_contract then return

		var contract_facet = build_contract_facet

		var n_contract_facet: AMethPropdef
		if not exist_contract_facet then
			# If has no contract facet in intro just create it
			if classdef != intro_mclassdef then
				create_facet(v, intro_mclassdef, contract_facet, self)
			end
			n_contract_facet = create_facet(v, classdef, contract_facet, self)
		else
			# Check if the contract facet already exist in this context (in this classdef)
			if classdef.mpropdefs_by_property.has_key(contract_facet) then
				# get the definition
				n_contract_facet = v.nitbuilder.toolcontext.modelbuilder.mpropdef2node(classdef.mpropdefs_by_property[contract_facet]).as(AMethPropdef)
			else
				# create a new contract facet definition
				n_contract_facet = create_facet(v, classdef, contract_facet, self)
				var block = v.nitbuilder.ast_builder.make_block
				# super call to the contract facet
				var args = n_contract_facet.n_signature.make_parameter_read(v.nitbuilder.ast_builder)
				var n_super_call = v.nitbuilder.ast_builder.make_super_call(args)
				# verification for add a return or not
				if self.intro.msignature.return_mtype != null then
					block.add(v.nitbuilder.ast_builder.make_return(n_super_call))
				else
					block.add(n_super_call)
				end
				n_contract_facet.n_block = block
			end
		end
		if mcontract != null then mcontract.adapt_method_to_contract(v, n_contract_facet, self)

		n_contract_facet.location = v.current_location
		n_contract_facet.do_all(v.nitbuilder.toolcontext)
	end

	# Define invariant facet for the MMethod in the given mclassdef.
	# This method also defines the contract facet.
	private fun define_invariant_facet(v: ContractsVisitor, classdef: MClassDef, exist_contract: Bool, mcontract: MContract)
	do
		# Make a contract facet if it's not exist
		define_contract_facet(v, classdef, false)
		# Do nothing the invariant facet already exist
		if check_invariant_facet then return
		# Make invariant mproperty facet
		var invariant_facet = build_invariant_facet

		# Check if the MMethod has a invariant facet in the intro_mclassdef
		if classdef != intro_mclassdef then
			create_facet(v, intro_mclassdef, invariant_facet, self.mcontract_facet.as(not null))
		end

		# Create an ast definition for the invariant facet
		var n_invariant_facet = create_facet(v, classdef, invariant_facet, self.mcontract_facet.as(not null))
		mcontract.adapt_method_to_contract(v, n_invariant_facet, self)
		n_invariant_facet.location = v.current_location
		n_invariant_facet.do_all(v.nitbuilder.toolcontext)
	end

	# Method to create a facet of the method
	private fun create_facet(v: ContractsVisitor, classdef: MClassDef, facet: MFacet, called: MMethod): AMethPropdef
	do
		# Defines the contract facet is an init or not
		# it is necessary to use the contracts with in a constructor
		facet.is_init = is_init
		var n_contractdef = v.nitbuilder.create_method_from_property(facet, classdef, self.intro.msignature)
		# FIXME set the location because the callsite creation need the node location
		n_contractdef.location = v.current_location
		n_contractdef.validate

		var block = v.nitbuilder.ast_builder.make_block

		# Arguments to call the super facet property
		var args: Array[AExpr]
		args = n_contractdef.n_signature.make_parameter_read(v.nitbuilder.ast_builder)

		var callsite = v.nitbuilder.create_callsite(n_contractdef, called, true)
		var n_call = v.nitbuilder.ast_builder.make_call(new ASelfExpr, callsite, args)

		if self.intro.msignature.return_mtype == null then
			block.add(n_call)
		else
			block.add(v.nitbuilder.ast_builder.make_return(n_call))
		end

		n_contractdef.n_block = block
		n_contractdef.do_all(v.nitbuilder.toolcontext)
		return n_contractdef
	end
end

redef class MMethodDef

	# Entry point to build contract (define the contract facet and define the contract method verification)
	private fun construct_contract(v: ContractsVisitor, n_signature: ASignature, n_annotations: Array[AAnnotation], mcontract: MContract, exist_contract: Bool)
	do
		v.define_contract_signature(mcontract, n_signature, mproperty.intro.msignature)
		if not exist_contract and not is_intro then no_intro_contract(v, mcontract, n_annotations)
		v.build_contract(n_annotations, mcontract, mclassdef)
		mproperty.define_contract_facet(v, mclassdef, exist_contract, mcontract)
	end

	# Create a contract on the introduction classdef of the property.
	# Display an warning message if necessary
	private fun no_intro_contract(v: ContractsVisitor, mcontract: MContract, n_annotations: Array[AAnnotation])
	do
		v.nitbuilder.create_method_from_property(mcontract, mcontract.intro_mclassdef, v.m_signature)
		mcontract.no_intro_contract(v, n_annotations)
	end

	# Apply the `no_contract` annotation to the contract
	# Display a warning if the annotation is not needed
	private fun no_contract_apply(v: ContractsVisitor, n_signature: ASignature)
	do
		var mensure = mproperty.mensure
		var mexpect = mproperty.mexpect
		if mensure == null and mexpect == null then
			v.nitbuilder.toolcontext.warning(location, "useless_nocontract", "Useless `no_contract`, no contract was declared for `{name}`. Remove the `no_contract`")
		end
		if mensure != null then
			# Add an empty ensure method to replace the actual definition
			v.nitbuilder.create_method_from_property(mensure, mclassdef, mensure.intro.msignature)
		end
		if mexpect != null then
			# Add an empty expect method to replace the actual definition
			v.nitbuilder.create_method_from_property(mexpect, mclassdef, mexpect.intro.msignature)
		end
	end
end

redef class MClassDef
	# Check if the class inherits an invariant contract
	private fun check_inherited_invariant: Bool
	do
		var super_classes = self.in_hierarchy.direct_greaters
		for super_class in super_classes do
			if super_class.mclass.has_invariant then return true
		end
		return false
	end
end

redef class APropdef
	redef fun check_callsite(v) do v.visited_propdef = self
end

redef class AClassdef

	# Entry point to create a contract (verification of inheritance, or new contract)
	redef fun check_contracts(v)
	do
		v.nitbuilder.ast_builder.check_mmodule(mclassdef.mmodule)
		v.current_location = location
		# Invariants are always considered to be a redefinition of contract.
		# This is due to an empty invariant method which is added to the object class to solve a potential problem in multiple inheritance.
		v.is_intro_contract = false
		check_redef(v)
		check_annotation(v)
	end

	# Verification of the annotation to know if it is a contract annotation.
	# If this is the case, we built the appropriate contract.
	private fun check_annotation(v: ContractsVisitor)
	do
		var annotation_invariants = get_annotations("invariant")
		var annotation_no_contract = get_annotations("no_contract")

		if not annotation_invariants.is_empty and not annotation_no_contract.is_empty then
			v.nitbuilder.toolcontext.error(location, "The new contract definition is not correct when using `no_contract`. Remove the `invariant` definition or the` no_contract`")
			return
		end

		if not annotation_no_contract.is_empty then
			var minvariant = mclass.minvariant
			if minvariant == null then
				v.nitbuilder.toolcontext.warning(location, "useless_nocontract", "Useless `no_contract`, no invariant was declared for `{mclass.name}`. Remove the `no_contract`")
			else
				# Add an empty invariant method to replace the actual definition
				v.nitbuilder.create_method_from_property(minvariant, mclassdef.as(not null), minvariant.intro.msignature)
			end
		end

		if not annotation_invariants.is_empty then
			# Check if the contract is necessary
			if not v.check_usage_invariants(mclassdef.mmodule) then return

			var minvariant = mclass.build_invariant_property(v)
			v.define_contract_signature(minvariant, null, null)
			v.build_contract(annotation_invariants, minvariant, mclassdef.as(not null))
			add_invariant_in_super_def(v)
			# Construct invariant facet for the `default_init`
			mclassdef.default_init.mproperty.define_invariant_facet(v, mclassdef.as(not null), false, mclass.minvariant.as(not null))
		end
	end

	# Verification if the class has an inherited contract to apply it.
	private fun check_redef(v: ContractsVisitor)
	do
		# Check if the method has an attached contract (Inherited)
		if mclassdef.check_inherited_invariant then mclass.minvariant = v.global_invariant
	end

	# Create all contract facet for each inherited property definition of the class to take in consideration the invariant
	# Redefine or introduced properties will be processed later
	private fun add_invariant_in_super_def(v: ContractsVisitor)
	do
		var mpropertys = mclassdef.collect_inherited_mmethods(v.mainmodule, new ModelFilter)
		for mproperty in mpropertys do
			if not mproperty isa MFacet and not mproperty isa MContract and mproperty.minvariant_facet == null then
				# Check if the actual definition have this property definition. if it's the case do nothing the visit of the method will do the job
				if mclassdef.mpropdefs_by_property.has_key(mproperty) then continue
				var intro_propdef = mproperty.intro
				if intro_propdef.is_intern then continue
				# Get the n_intro to use the signature as a contract facet signature
				var n_intro = v.nitbuilder.toolcontext.modelbuilder.mpropdef2node(intro_propdef)
				if n_intro isa AMethPropdef then
					# Define the contract facet (add contract facet in the actual mclass definition and in intro if intro mclassdef != actual mclassdef)
					mproperty.define_invariant_facet(v, mclassdef.as(not null), false, mclass.minvariant.as(not null))
				end
			end
		end
	end
end

redef class AAttrPropdef

	# Entry point to create all contracts.
	redef fun check_contracts(v)
	do
		v.nitbuilder.ast_builder.check_mmodule(v.visited_module.mmodule.as(not null))
		v.current_location = self.location
		check_annotation(v)
		check_invariant(v)
	end

	# Verification of the annotation to know if it is a contract annotation.
	# If this is the case, we built the appropriate contract.
	private fun check_annotation(v: ContractsVisitor)
	do
		var annotation_expect = get_annotations("expect")
		var annotation_ensure = get_annotations("ensure")
		var annotation_no_contract = get_annotations("no_contract")

		if (not annotation_expect.is_empty or not annotation_ensure.is_empty) and not annotation_no_contract.is_empty then
			v.nitbuilder.toolcontext.error(location, "The new contract definition is not correct when using `no_contract`. Remove the contract definition or the` no_contract`")
			return
		end

		if mwritepropdef == null and (not annotation_expect.is_empty or not annotation_ensure.is_empty) then
			# The contract is not applicable on no writable attribute
			v.nitbuilder.toolcontext.error(location, "Not applicable contract on not writable attribute")
			return
		end

		if mwritepropdef != null and not annotation_no_contract.is_empty then
			mwritepropdef.no_contract_apply(v, new ASignature.make_from_msignature(mwritepropdef.msignature.as(not null)))
			return
		end

		if not annotation_expect.is_empty then
			if not v.check_usage_expect(mwritepropdef.mclassdef.mmodule) then return

			v.is_intro_contract = mwritepropdef.is_intro
			var exist_set_contract = mwritepropdef.mproperty.check_expect
			mwritepropdef.construct_contract(v, new ASignature.make_from_msignature(mwritepropdef.msignature.as(not null)), annotation_expect, mwritepropdef.mproperty.build_expect, exist_set_contract)
		end

		if not annotation_ensure.is_empty then
			if not v.check_usage_ensure(mwritepropdef.mclassdef.mmodule) then return

			v.is_intro_contract = mwritepropdef.is_intro
			var exist_set_contract = mwritepropdef.mproperty.check_ensure
			mwritepropdef.construct_contract(v, new ASignature.make_from_msignature(mwritepropdef.msignature.as(not null)), annotation_ensure, mwritepropdef.mproperty.build_ensure, exist_set_contract)
		end
	end

	# Check if the class has an invariant.
	private fun check_invariant(v: ContractsVisitor)
	do
		if mpropdef != null and mpropdef.mclassdef.mclass.has_invariant then
			var minvariant = mpropdef.mclassdef.mclass.minvariant
			assert minvariant != null
			if mreadpropdef != null then
				mreadpropdef.mproperty.define_invariant_facet(v, mpropdef.mclassdef, false, minvariant)
			end
			if mwritepropdef != null then
				mwritepropdef.mproperty.define_invariant_facet(v, mpropdef.mclassdef, false, minvariant)
			end
		end
	end
end

redef class AMethPropdef

	# Entry point to create a contract (verification of inheritance, or new contract).
	redef fun check_contracts(v)
	do
		v.nitbuilder.ast_builder.check_mmodule(mpropdef.mclassdef.mmodule)
		v.current_location = self.location
		v.is_intro_contract = mpropdef.is_intro
		check_annotation(v)
		check_invariant(v)
	end

	# Verification of the annotation to know if it is a contract annotation.
	# If this is the case, we built the appropriate contract.
	private fun check_annotation(v: ContractsVisitor)
	do
		var annotation_expect = get_annotations("expect")
		var annotation_ensure = get_annotations("ensure")
		var annotation_no_contract = get_annotations("no_contract")

		if (not annotation_expect.is_empty or not annotation_ensure.is_empty) and not annotation_no_contract.is_empty then
			v.nitbuilder.toolcontext.error(location, "The new contract definition is not correct when using `no_contract`. Remove the contract definition or the `no_contract`")
			return
		end

		var nsignature = n_signature or else new ASignature

		if not annotation_no_contract.is_empty then
			mpropdef.no_contract_apply(v, nsignature.clone)
			return
		end

		if not annotation_expect.is_empty then
			if not v.check_usage_expect(mpropdef.mclassdef.mmodule) then return
			var exist_contract = mpropdef.mproperty.check_expect
			mpropdef.construct_contract(v, nsignature.clone, annotation_expect, mpropdef.mproperty.build_expect, exist_contract)
		end

		if not annotation_ensure.is_empty then
			if not v.check_usage_ensure(mpropdef.mclassdef.mmodule) then return
			var exist_contract = mpropdef.mproperty.check_ensure
			var mensure = mpropdef.mproperty.build_ensure
			compute_old(v, mensure, annotation_ensure)
			mpropdef.construct_contract(v, nsignature.clone, annotation_ensure, mensure, exist_contract)
		end
	end

	# Check if the class has an invariant to apply it on the property
	private fun check_invariant(v: ContractsVisitor)
	do
		var minvariant = mpropdef.mclassdef.mclass.minvariant
		if mpropdef != null and minvariant != null then
			mpropdef.mproperty.define_invariant_facet(v, mpropdef.mclassdef, false, minvariant)
		end
	end

	# Checks the `old` in the ensure annotations found. If `old`s are found a new class is generated to keep the old values and an `init_old_{name_method}` method is inserted.
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
	#		var i: Int
	#	end
	# ~~
	#
	private fun compute_old(v: ContractsVisitor, mensure: MEnsure, annotations_ensure: Collection[AAnnotation])
	do
		var old_visitor = new OldVisitor(mpropdef.as(not null), v)

		for annotation_ensure in annotations_ensure do old_visitor.enter_visit(annotation_ensure)

		if old_visitor.old_exprs.is_empty then return

		if self.mpropdef.mproperty.is_init then
			v.nitbuilder.toolcontext.error(location, "The `old` cannot be used with a constructor")
			return
		end

		if not self.mpropdef.is_intro and mensure.old_mclass == null then
			v.nitbuilder.toolcontext.error(location, "The `old` is not declared at the introduction")
			return
		end

		var old_mclass = mensure.build_old_mclass

		# Try to get the old_classdef in the current context
		var old_classdef = mpropdef.mclassdef.mmodule.get_mclassdef(old_mclass)

		var n_class: AStdClassdef

		# If the old class does not exist in the current context build a new.
		if old_classdef == null then
			var object_type = v.mainmodule.get_primitive_class("Object").mclass_type
			n_class = v.nitbuilder.create_class_from_mclass(old_mclass, [object_type], mpropdef.mclassdef.mmodule)
		else
			n_class = v.nitbuilder.toolcontext.modelbuilder.mclassdef2node(old_classdef).as(AStdClassdef)
		end

		old_visitor.build_old_attributes(n_class.mclassdef.as(not null), old_mclass.old_variable)
		old_visitor.switch_call_to_old_attribut(n_class.mclassdef.as(not null), self)
		old_mclass.build_old_init_methdef(old_visitor, self)
	end
end

redef class MOldClass

	# Create a new method to init old parameter of the contract.
	private fun build_old_init_methdef(v: OldVisitor, n_method: AMethPropdef)
	do
		var nitbuilder = v.contract_visitor.nitbuilder
		var mpropdef = n_method.mpropdef
		if mpropdef == null then abort
		var old_property = self.init_old_property

		var init_msignature = make_init_msignature(n_method.mpropdef.mproperty.intro.msignature.mparameters.to_a)

		var n_methdef = nitbuilder.create_method_from_name("_init_old_{mpropdef.name}", mpropdef.mclassdef, init_msignature, public_visibility)
		# Replace the last param with a new to use the `old_variable`
		n_methdef.n_signature.n_params.last.replace_with(new AParam.make(old_variable, self.mclass_type.create_ast_representation))
		# FIXME set the location because the callsite creation need the node location
		n_methdef.location = n_method.location
		n_methdef.validate

		if self.init_old_property == null then
			n_methdef.n_block = make_intro_block(v, n_methdef)
		else
			n_methdef.n_block = make_sub_block(v, n_methdef)
		end

		n_methdef.do_all(v.contract_visitor.nitbuilder.toolcontext)
		self.init_old_property = n_methdef.mpropdef.mproperty
	end

	# Create all old attribute assignments based on the OldVisitor `old_attributes`
	private fun build_old_assignations(v: OldVisitor, n_method: AMethPropdef): Array[AExpr]
	do
		var nitbuilder = v.contract_visitor.nitbuilder
		var array_assign = new Array[AExpr]
		for expr, n_attribut in v.old_attributes do
			var readproperty = n_attribut.mreadpropdef.mproperty
			# We use the read property because the name of this property is used to build the AQid which is used for typing.
			# Typing get the text of the AQid and add "=" to find the property to call
			var callsite = v.contract_visitor.nitbuilder.create_callsite(n_method, readproperty, false)
			array_assign.add(nitbuilder.ast_builder.make_call_assign(nitbuilder.ast_builder.make_var(old_variable, self.mclass_type), callsite, null, expr))
		end
		return array_assign
	end

	# Create a block with a new assignment of old attributes.
	private fun make_intro_block(v: OldVisitor, n_method: AMethPropdef): ABlockExpr
	do
		var nitbuilder = v.contract_visitor.nitbuilder
		var n_block = nitbuilder.ast_builder.make_block
		n_block.add_all(build_old_assignations(v, n_method))

		var read_old_variable = nitbuilder.ast_builder.make_var_read(old_variable, self.mclass_type)
		n_block.add(nitbuilder.ast_builder.make_return(read_old_variable))

		return n_block
	end

	# Create a block with a call of super `init_old` and the new old attributes assignation.
	private fun make_sub_block(v: OldVisitor, n_method: AMethPropdef): ABlockExpr
	do
		var nitbuilder = v.contract_visitor.nitbuilder
		var super_call = nitbuilder.ast_builder.make_super_call(n_method.n_signature.make_parameter_read(nitbuilder.ast_builder))
		var assign_old_variable = nitbuilder.ast_builder.make_var_assign(old_variable, super_call)
		var n_block = nitbuilder.ast_builder.make_block
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
	# 	fun init_old_add_i_to_a(i, old)
	# ~~~
	private fun make_init_msignature(mparameters: Array[MParameter]): MSignature
	do
		var msignature = new MSignature(mparameters, self.mclass_type)
		msignature.mparameters.add(new MParameter("old", self.mclass_type, false))
		return msignature
	end
end

redef class MSignature

	# Adapt signature for a expect condition
	# Removed the return type is it not necessary
	private fun adapt_to_condition: MSignature do return new MSignature(mparameters.to_a, null)

	# Adapt signature for a ensure condition
	#
	# Create new parameter with the return type
	private fun adapt_to_ensurecondition: MSignature
	do
		var rtype = return_mtype
		var msignature = adapt_to_condition
		if rtype != null then
			msignature.mparameters.add(new MParameter("result", rtype, false))
		end
		return msignature
	end

	# Adapt signature for a expect condition
	# Removed the return type is it not necessary
	private fun clone: MSignature do return new MSignature(mparameters.to_a, return_mtype)
end

redef class ASignature

	# Create an array of AVarExpr representing the read of every parameters
	private fun make_parameter_read(ast_builder: ASTBuilder): Array[AExpr]
	do
		var args = new Array[AExpr]
		for n_param in self.n_params do
			var mtype = n_param.variable.declared_type
			var variable = n_param.variable
			if variable != null and mtype != null then
				args.push ast_builder.make_var_read(variable, mtype)
			end
		end
		return args
	end

	# Return a copy of self adapted for the expect condition
	# npropdef it is use to define the parent of the parameters
	private fun adapt_to_condition(return_type: nullable AType): ASignature
	do
		var adapt_nsignature = self.clone
		adapt_nsignature.n_type = return_type
		return adapt_nsignature
	end

	# Return a copy of self adapted for postcondition on npropdef
	private fun adapt_to_ensurecondition: ASignature do
		var nsignature = adapt_to_condition(null)
		if ret_type != null then
			var variable = new Variable("result")
			variable.declared_type = ret_type
			nsignature.n_params.add new AParam.make(variable, ret_type.create_ast_representation)
		end
		return nsignature
	end
end

redef class ASendExpr
	redef fun check_callsite(v)
	do
		var actual_callsite = callsite
		if actual_callsite != null then
			callsite = v.drive_callsite_contract(actual_callsite)
		end
	end
end

redef class ANewExpr
	redef fun check_callsite(v)
	do
		var actual_callsite = callsite
		if actual_callsite != null then
			callsite = v.drive_callsite_contract(actual_callsite, recvtype.mclass)
		end
	end
end
