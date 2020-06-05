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
intrude import model_contract
intrude import astbuilder
intrude import modelize_property
intrude import scope
intrude import typing

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
		var ast_builder = new ASTBuilder(mmodule.as(not null))
		#
		var contract_visitor = new ContractsVisitor(toolcontext, toolcontext.modelbuilder.identified_modules.first, self, ast_builder)
		contract_visitor.enter_visit(self)
		#
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
		self.n_signature = mcontract.adapt_nsignature(nsignature)
		self.m_signature = mcontract.adapt_msignature(msignature)
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

	# Verification if the construction of the contract is necessary.
	# Three cases are checked for `expect`:
	#
	# - Was the `--full-contract` option passed?
	# - Is the method is in the main package?
	# - Is the method is in a direct imported package?
	#
	fun check_usage_expect(actual_mmodule: MModule): Bool
	do
		var main_package = mainmodule.mpackage
		var actual_package = actual_mmodule.mpackage
		if main_package != null and actual_package != null then
			var condition_direct_arc = toolcontext.modelbuilder.model.mpackage_importation_graph.has_arc(main_package, actual_package)
			return toolcontext.opt_full_contract.value or condition_direct_arc or main_package == actual_package
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
		return toolcontext.opt_full_contract.value or mainmodule.mpackage == actual_mmodule.mpackage
	end

	# Inject the incontract attribute (`_in_contract_`) in the `Sys` class
	# This attribute allows to check if the contract need to be executed
	private fun inject_incontract_in_sys
	do
		# If the `in_contract_attribute` already know just return
		if in_contract_attribute != null then return

		var sys_class = toolcontext.modelbuilder.get_mclass_by_name(visited_module, mainmodule, "Sys")

		# Try to get the `in_contract` property, if it has already defined in a previously visited module.
		var in_contract_property = toolcontext.modelbuilder.try_get_mproperty_by_name(visited_module, sys_class.intro, "__in_contract_")
		if in_contract_property != null then
			self.in_contract_attribute = in_contract_property.as(MAttribute)
			return
		end

		var bool_false = new AFalseExpr.make(mainmodule.bool_type)
		var n_in_contract_attribute = toolcontext.modelbuilder.create_attribute_from_name("__in_contract_", sys_class.intro, mainmodule.bool_type, public_visibility).create_setter(toolcontext.modelbuilder, true).define_default(bool_false)

		in_contract_attribute = n_in_contract_attribute.mpropdef.mproperty
	end

	# Return the `_in_contract_` attribute.
	# If the attribute `_in_contract_` does not exist it's injected with `inject_incontract_in_sys`
	private fun get_incontract: MAttribute
	do
		if self.in_contract_attribute == null then inject_incontract_in_sys
		return in_contract_attribute.as(not null)
	end

	# Return an `AIfExpr` with the contract encapsulated by an `if` to check if it's already in a contract verification.
	#
	# Example:
	# ~~~nitish
	# class A
	# 	fun bar([...]) is except([...])
	#
	# 	fun _contract_bar([...])
	#	do
	#		if not sys._in_contract_ then
	#			sys._in_contract_ = true
	#			_bar_expect([...])
	#			sys._in_contract_ = false
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
		var sys_property = toolcontext.modelbuilder.model.get_mproperties_by_name("sys").first.as(MMethod)
		var callsite_sys = ast_builder.create_callsite(toolcontext.modelbuilder, visited_method, sys_property, true)

		var incontract_attribute = get_incontract

		var callsite_get_incontract = ast_builder.create_callsite(toolcontext.modelbuilder, visited_method, incontract_attribute.getter.as(MMethod), false)
		var callsite_set_incontract = ast_builder.create_callsite(toolcontext.modelbuilder, visited_method, incontract_attribute.setter.as(MMethod), false)

		var n_condition = ast_builder.make_not(ast_builder.make_call(ast_builder.make_call(new ASelfExpr, callsite_sys, null), callsite_get_incontract, null))

		var n_if = ast_builder.make_if(n_condition, null)

		var if_then_block = n_if.n_then.as(ABlockExpr)

		if_then_block.add(ast_builder.make_call(ast_builder.make_call(new ASelfExpr, callsite_sys, null), callsite_set_incontract, [new ATrueExpr.make(mainmodule.bool_type)]))
		if_then_block.add_all(call_to_contracts)
		if_then_block.add(ast_builder.make_call(ast_builder.make_call(new ASelfExpr, callsite_sys, null), callsite_set_incontract, [new AFalseExpr.make(mainmodule.bool_type)]))

		return n_if
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
		node.check_callsite(self)
		node.visit_all(self)
	end

	# Check if the callsite calls a method with a contract.
	# If it's the case the callsite is replaced by another callsite to the contract method.
	private fun drive_method_contract(callsite: CallSite): CallSite
	do
		var contract_facet = callsite.mproperty.mcontract_facet
		var visited_mpropdef = visited_propdef.mpropdef

		if visited_mpropdef isa MContract or visited_mpropdef isa MFacet then return callsite
		if visited_mpropdef == null or contract_facet == null then return callsite

		return ast_builder.create_callsite(toolcontext.modelbuilder, visited_propdef, contract_facet, callsite.recv_is_self)
	end
end

redef class ANode
	private fun create_contracts(v: ContractsVisitor) do end
	private fun check_callsite(v: CallSiteVisitor) do end
end

redef class AAnnotation

	# Returns the conditions of annotation parameters. If there are several parameters, the result is an `AAndExpr`
	# Example:
	# the contract `ensure(true, i == 10, f >= 1.0)`
	# return this condition `(true and i == 10 and f >= 1.0)`
	private fun construct_condition(v : ContractsVisitor): AExpr
	do
		var n_condition = n_args.first
		n_args.remove_at(0)
		for n_arg in n_args do n_condition = v.ast_builder.make_and(n_condition, n_arg)
		return n_condition
	end
end

redef class MContract

	# Method use to diplay warning when the contract is not present at the introduction
	private fun no_intro_contract(v: ContractsVisitor, a: Array[AAnnotation])do end

	# Creating specific inheritance block contract
	#
	# `super_args` : Correspond to the `super` call arguments
	private fun create_inherit_nblock(v: ContractsVisitor, n_conditions: Array[AExpr], super_args: Array[AExpr]): ABlockExpr is abstract

	# Method to adapt the `n_mpropdef.n_block` to the contract
	private fun adapt_block_to_contract(v: ContractsVisitor, n_mpropdef: AMethPropdef) is abstract

	# Adapt the msignature specifically for the contract method
	private fun adapt_specific_msignature(m_signature: MSignature): MSignature do return m_signature.adapt_to_contract

	# Adapt the nsignature specifically for the contract method
	private fun adapt_specific_nsignature(n_signature: ASignature): ASignature do return n_signature.adapt_to_contract

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

	# Create a new empty contract
	private fun create_empty_contract(v: ContractsVisitor, mclassdef: MClassDef, msignature: nullable MSignature, n_signature: ASignature)
	do
		var n_contract_def = intro_mclassdef.mclass.create_empty_method(v, self, mclassdef, msignature, n_signature)
		n_contract_def.do_all(v.toolcontext)
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

	# Build a method with a specific block `n_block` in a specified `mclassdef`
	private fun make_contract(v: ContractsVisitor, n_block: AExpr, mclassdef: MClassDef)
	do
		var n_contractdef = intro_mclassdef.mclass.create_empty_method(v, self, mclassdef, v.m_signature, v.n_signature)
		n_contractdef.n_block = n_block
		# Define the location of the new method for corresponding of the annotation location
		n_contractdef.location = v.current_location
		n_contractdef.do_all(v.toolcontext)
	end
end

redef class MExpect

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

	redef fun adapt_block_to_contract(v: ContractsVisitor, n_mpropdef: AMethPropdef)
	do
		var callsite = v.ast_builder.create_callsite(v.toolcontext.modelbuilder, n_mpropdef, self, true)
		var n_self = new ASelfExpr
		var args = n_mpropdef.n_signature.make_parameter_read(v.ast_builder)
		var n_callexpect = v.ast_builder.make_call(n_self,callsite,args)
		# Creation of the new instruction block with the call to expect condition
		var actual_expr = n_mpropdef.n_block
		var new_block = new ABlockExpr
		new_block.n_expr.push n_callexpect
		if actual_expr isa ABlockExpr then
			new_block.n_expr.add_all(actual_expr.n_expr)
		else if actual_expr != null then
			new_block.n_expr.push(actual_expr)
		end
		n_mpropdef.n_block = new_block
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
	do
		var actual_block = n_mpropdef.n_block
		# never happen. If it's the case the problem is in the contract facet building
		assert actual_block isa ABlockExpr

		var return_var: nullable Variable = null

		var return_expr = actual_block.n_expr.last.as(AReturnExpr)

		var returned_expr = return_expr.n_expr
		# The return node has no returned expression
		assert returned_expr != null

		# Check if the result variable already exit
		if returned_expr isa AVarExpr then
			if returned_expr.variable.name == "result" then
				return_var = returned_expr.variable
			end
		end

		return_var = new Variable("result")
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

	redef fun adapt_specific_msignature(m_signature: MSignature): MSignature
	do
		return m_signature.adapt_to_ensurecondition
	end

	redef fun adapt_specific_nsignature(n_signature: ASignature): ASignature
	do
		return n_signature.adapt_to_ensurecondition
	end

	redef fun adapt_block_to_contract(v: ContractsVisitor, n_mpropdef: AMethPropdef)
	do
		var callsite = v.ast_builder.create_callsite(v.toolcontext.modelbuilder, n_mpropdef, self, true)
		var n_self = new ASelfExpr
		# argument to call the contract method
		var args = n_mpropdef.n_signature.make_parameter_read(v.ast_builder)
		# Inject the variable result
		# The cast is always safe because the online adapted method is the contract facet

		var actual_block = n_mpropdef.n_block
		# never happen. If it's the case the problem is in the contract facet building
		assert actual_block isa ABlockExpr

		var ret_type = n_mpropdef.mpropdef.mproperty.intro.msignature.return_mtype
		if ret_type != null then
			var result_var = inject_result(v, n_mpropdef, ret_type)
			# Expr to read the result variable
			var read_result = v.ast_builder.make_var_read(result_var, ret_type)
			var return_expr = actual_block.n_expr.pop
			# Adding the read return to argument
			args.add(read_result)
			var n_callcontract = v.ast_builder.make_call(n_self,callsite,args)
			actual_block.add_all([n_callcontract,return_expr])
		else
			# build the call to the contract method
			var n_callcontract = v.ast_builder.make_call(n_self,callsite,args)
			actual_block.add n_callcontract
		end
	end
end

redef class MClass

	# This method create an abstract method representation with this MMethodDef an this AMethoddef
	private fun create_abstract_method(v: ContractsVisitor, mproperty: MMethod, mclassdef: MClassDef, msignature: nullable MSignature, n_signature: ASignature): AMethPropdef
	do
		# new methoddef definition
		var m_def = new MMethodDef(mclassdef, mproperty, v.current_location)
		# set the signature
		if msignature != null then m_def.msignature = msignature.clone
		# set the abstract flag
		m_def.is_abstract = true
		# Build the new node method
		var n_def = v.ast_builder.make_method(null,null,m_def,n_signature,null,null,null,null)
		# Define the location of the new method for corresponding of the actual method
		n_def.location = v.current_location
		# Association new npropdef to mpropdef
		v.toolcontext.modelbuilder.unsafe_add_mpropdef2npropdef(m_def,n_def)
		return n_def
	end

	# Create method with an empty block
	# the `mproperty` i.e the global property definition. The mclassdef to set where the method is declared and it's model `msignature` and ast `n_signature` signature
	private fun create_empty_method(v: ContractsVisitor, mproperty: MMethod, mclassdef: MClassDef, msignature: nullable MSignature, n_signature: ASignature): AMethPropdef
	do
		var n_def = create_abstract_method(v, mproperty, mclassdef, msignature, n_signature)
		n_def.mpropdef.is_abstract = false
		n_def.n_block = v.ast_builder.make_block
		return n_def
	end
end

redef class MMethodDef

	# Verification of the contract facet
	# Check if a contract facet already exists to use it again or if it is necessary to create it.
	private fun check_contract_facet(v: ContractsVisitor, n_signature: ASignature, classdef: MClassDef, mcontract: MContract, exist_contract: Bool)
	do
		var exist_contract_facet = mproperty.has_contract_facet
		if exist_contract_facet and exist_contract then return

		var contract_facet: AMethPropdef
		if not exist_contract_facet then
			# If has no contract facet in intro just create it
			if classdef != mproperty.intro_mclassdef then create_contract_facet(v, mproperty.intro_mclassdef, n_signature)
			# If has no contract facet just create it
			contract_facet = create_contract_facet(v, classdef, n_signature)
		else
			# Check if the contract facet already exist in this context (in this classdef)
			if classdef.mpropdefs_by_property.has_key(mproperty.mcontract_facet) then
				# get the define
				contract_facet = v.toolcontext.modelbuilder.mpropdef2node(classdef.mpropdefs_by_property[mproperty.mcontract_facet]).as(AMethPropdef)
			else
				# create a new contract facet definition
				contract_facet = create_contract_facet(v, classdef, n_signature)
				var block = v.ast_builder.make_block
				# super call to the contract facet
				var n_super_call = v.ast_builder.make_super_call(n_signature.make_parameter_read(v.ast_builder), null)
				# verification for add a return or not
				if contract_facet.mpropdef.msignature.return_mtype != null then
					block.add(v.ast_builder.make_return(n_super_call))
				else
					block.add(n_super_call)
				end
				contract_facet.n_block = block
			end
		end
		contract_facet.adapt_block_to_contract(v, mcontract, contract_facet)
		contract_facet.location = v.current_location
		contract_facet.do_all(v.toolcontext)
	end

	# Method to create a contract facet of the method
	private fun create_contract_facet(v: ContractsVisitor, classdef: MClassDef, n_signature: ASignature): AMethPropdef
	do
		var contract_facet = mproperty.build_contract_facet
		# Defines the contract phase is an init or not
		# it is necessary to use the contracts on constructor
		contract_facet.is_init = self.mproperty.is_init

		# check if the method has an `msignature` to copy it.
		var m_signature: nullable MSignature = null
		if mproperty.intro.msignature != null then m_signature = mproperty.intro.msignature.clone

		var n_contractdef = classdef.mclass.create_empty_method(v, contract_facet, classdef, m_signature, n_signature)
		# FIXME set the location because the callsite creation need the node location
		n_contractdef.location = v.current_location
		n_contractdef.validate

		var block = v.ast_builder.make_block
		var n_self = new ASelfExpr
		var args = n_contractdef.n_signature.make_parameter_read(v.ast_builder)
		var callsite = v.ast_builder.create_callsite(v.toolcontext.modelbuilder, n_contractdef, mproperty, true)
		var n_call = v.ast_builder.make_call(n_self, callsite, args)

		if m_signature.return_mtype == null then
			block.add(n_call)
		else
			block.add(v.ast_builder.make_return(n_call))
		end

		n_contractdef.n_block = block
		n_contractdef.do_all(v.toolcontext)
		return n_contractdef
	end

	# Entry point to build contract (define the contract facet and define the contract method verification)
	private fun construct_contract(v: ContractsVisitor, n_signature: ASignature, n_annotations: Array[AAnnotation], mcontract: MContract, exist_contract: Bool)
	do
		if not exist_contract and not is_intro then no_intro_contract(v, mcontract, n_annotations)
		v.define_signature(mcontract, n_signature, mproperty.intro.msignature)

		v.build_contract(n_annotations, mcontract, mclassdef)
		check_contract_facet(v, n_signature.clone, mclassdef, mcontract, exist_contract)
		has_contract = true
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

redef class MPropDef
	# flag to indicate is the `MPropDef` has a contract
	var has_contract = false
end

redef class APropdef
	redef fun check_callsite(v)
	do
		v.visited_propdef = self
	end
end

redef class AMethPropdef

	# Entry point to create a contract (verification of inheritance, or new contract).
	redef fun create_contracts(v)
	do
		v.ast_builder.check_mmodule(mpropdef.mclassdef.mmodule)
		v.current_location = self.location
		v.is_intro_contract = mpropdef.is_intro
		check_annotation(v)
		if not mpropdef.is_intro then check_redef(v)
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
			mpropdef.construct_contract(v, nsignature.clone, annotations_ensure, mpropdef.mproperty.build_ensure, exist_contract)
		end
	end

	# Verification if the method have an inherited contract to apply it.
	private fun check_redef(v: ContractsVisitor)
	do
		# Check if the method has an attached contract
		if not mpropdef.has_contract then
			if mpropdef.mproperty.intro.has_contract then
				mpropdef.has_contract = true
			end
		end
	end

	# Adapt the block to use the contracts
	private fun adapt_block_to_contract(v: ContractsVisitor, contract: MContract, n_mpropdef: AMethPropdef)
	do
		contract.adapt_block_to_contract(v, n_mpropdef)
		mpropdef.has_contract = true
		n_mpropdef.do_all(v.toolcontext)
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

redef class ASendExpr
	redef fun check_callsite(v)
	do
		var actual_callsite = callsite
		if actual_callsite != null then
			callsite = v.drive_method_contract(actual_callsite)
		end
	end
end

redef class ANewExpr
	redef fun check_callsite(v)
	do
		var actual_callsite = callsite
		if actual_callsite != null then
			callsite = v.drive_method_contract(actual_callsite)
		end
	end
end
