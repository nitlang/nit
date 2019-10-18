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

intrude import astbuilder
import parse_annotations
import phase
import semantize
import mclassdef_collect
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
		#
		var contract_visitor = new ContractsVisitor(toolcontext, new ASTBuilder(mmodule.as(not null)), toolcontext.modelbuilder.identified_modules.first, self)
		contract_visitor.enter_visit(self)
		#
		var callsite_visitor = new CallSiteVisitor(toolcontext)
		callsite_visitor.enter_visit(self)
	end
end

# This visitor checks the `AMethPropdef` and the `AClassDef` to check if they have a contract annotation or it's a redefinition with a inheritance contract
private class ContractsVisitor
	super Visitor

	var toolcontext: ToolContext

	var ast_builder: ASTBuilder

	# The main module
	# It's strore to define if the contract need to be build depending on the selected policy `--no-contract` `--full-contract` or default
	var mainmodule: MModule

	# Actual visited module
	var visited_module: AModule

	# Actual visited class
	var visited_class: nullable AClassdef

	# Actual visited class
	var visited_method: nullable AMethPropdef

	# The `ASignature` of the actual build contract
	var n_signature: ASignature is noinit

	# The `MSignature` of the actual build contract
	var m_signature: MSignature is noinit

	# The `current_location` can corresponding of the annotation or method location.
	var current_location: Location is noinit

	# Is the contrat is an introduction or not?
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
	private fun build_contract(n_annotations: Array[AAnnotation], mcontract: MContract, mclassdef: MClassDef): MMethodDef
	do
		# Retrieving the expression provided in the annotation
		var n_conditions = new Array[AExpr]
		for n_annotation in n_annotations do n_conditions.add n_annotation.construct_condition(self)
		var m_contractdef: AMethPropdef
		if is_intro_contract then
			# Create new contract method
			m_contractdef = mcontract.create_intro_contract(self, n_conditions, mclassdef)
		else
			# Create a redef of contract to take in consideration the new condition
			m_contractdef = mcontract.create_subcontract(self, n_conditions, mclassdef)
		end
		var contract_propdef = m_contractdef.mpropdef
		# The contract has a null mpropdef, this should never happen
		assert contract_propdef != null
		return contract_propdef
	end

	# Verification if the construction of the contract is necessary.
	# Three cases are checked for `expect`:
	#
	# - Is the `--full-contract` option it's use?
	# - Is the method is in the main package
	# - Is the method is in a direct imported package.
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
	# - Is the `--full-contract` option it's use?
	# - Is the method is in the main package
	#
	fun check_usage_ensure(actual_mmodule: MModule): Bool
	do
		return toolcontext.opt_full_contract.value or mainmodule.mpackage == actual_mmodule.mpackage
	end

	# Verification if the construction of the contract is necessary.
	# Two cases are checked for `invariant`:
	#
	# - Is the `--full-contract` option it's use?
	# - Is the method is in the main package
	#
	fun check_usage_invariants(actual_mmodule: MModule): Bool
	do
		return toolcontext.opt_full_contract.value or mainmodule.mpackage == actual_mmodule.mpackage
	end

	# Inject the invariant method (`_invariant_`) verification in the Object class
	# By default the method is empty.
	# Note it is not abstract because the implementation of this method makes a super call to resolve multiple inheritance problem
	private fun inject_invariant_in_object
	do
		# Get the object class from the modelbuilder
		var object_class = toolcontext.modelbuilder.get_mclass_by_name(visited_module, mainmodule, "Object")
		# If the global_invariant already know just return
		if global_invariant != null then return
		# Try to get a global invariant if it's already defined in a previously visited module.
		var invariant_property = toolcontext.modelbuilder.try_get_mproperty_by_name(visited_module, object_class.intro, "_invariant_")
		if invariant_property != null then
			global_invariant = invariant_property.as(MInvariant)
			return
		end
		# Create a new invariant method
		var m_invariant = new MInvariant(object_class.intro, "_invariant_", object_class.intro.location, public_visibility)
		self.define_contract_signature(m_invariant, null, null)
		m_invariant.create_empty_contract(self, object_class.intro)
		global_invariant = m_invariant
	end

	# Return the invariant property (`Minvariant`)
	# If the `_invariant_` does not exist it's injected this with `inject_invariant_in_object`
	private fun get_global_invariant: MInvariant
	do
		if self.global_invariant == null then inject_invariant_in_object
		return global_invariant.as(not null)
	end

	# Inject the incontract attribut (`_in_contract_`) in the Sys class
	# This attribute allows to check if the contract need to be executed
	private fun inject_incontract_in_sys
	do
		# Get the sys class from the modelbuilder
		var sys_class = toolcontext.modelbuilder.get_mclass_by_name(visited_module, mainmodule, "Sys")
		# If the global_invariant already know just return
		if in_contract_attribute != null then return
		# Try to get a global in_contract if it's already defined in a previously visited module.
		var in_contract_property = toolcontext.modelbuilder.try_get_mproperty_by_name(visited_module, sys_class.intro, "__in_contract_")
		if in_contract_property != null then
			self.in_contract_attribute = in_contract_property.as(MAttribute)
			return
		end
		# Create a new invariant method
		var m_in_contract = new MAttribute(sys_class.intro, "__in_contract_", sys_class.intro.location, public_visibility)
		var m_in_contract_propdef = new MAttributeDef(sys_class.intro, m_in_contract, sys_class.intro.location)

		var bool_false = new AFalseExpr.make(mainmodule.bool_type)

		m_in_contract_propdef.static_mtype = mainmodule.bool_type
		var n_attribute = ast_builder.make_attribute("_in_contract_", mainmodule.bool_type, null, bool_false, null, m_in_contract_propdef)
		toolcontext.modelbuilder.mpropdef2npropdef[m_in_contract_propdef] = n_attribute

		var n_sys = toolcontext.modelbuilder.mclassdef2node(sys_class.intro)

		n_sys.n_propdefs.unsafe_add_all([n_attribute])

		n_attribute.location = sys_class.intro.location
		n_attribute.validate

		n_attribute.build_get_set(toolcontext.modelbuilder, sys_class.intro)

		in_contract_attribute = m_in_contract
	end

	# Return the in_contract attribut of sys (`_in_contract_`)
	# If the attribute `_in_contract_` does not exist it's injected this with `inject_incontract_in_sys`
	private fun get_incontract: MAttribute
	do
		if self.in_contract_attribute == null then inject_incontract_in_sys
		return in_contract_attribute.as(not null)
	end

	# Return an AIfExpr with the contract encapsulated by an if to check if it's already in a contract verification.
	#
	# exemple
	# ~~~nitish
	# class A
	# 	fun bar([...]) is except([...])
	#
	# 	fun _contract_bar([...])
	#	do
	#		if self.sys._in_contract_ then
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
		var n_self = new ASelfExpr

		var sys_property = toolcontext.modelbuilder.model.get_mproperties_by_name("sys").first.as(MMethod)
		var callsite_sys = ast_builder.create_callsite(toolcontext.modelbuilder, visited_method, sys_property, true)

		var incontract_attribute = get_incontract

		var callsite_get_incontract = ast_builder.create_callsite(toolcontext.modelbuilder, visited_method, incontract_attribute.getter.as(MMethod), false)
		var callsite_set_incontract = ast_builder.create_callsite(toolcontext.modelbuilder, visited_method, incontract_attribute.setter.as(MMethod), false)

		var n_condition = ast_builder.make_not(ast_builder.make_call(ast_builder.make_call(new ASelfExpr, callsite_sys, null), callsite_get_incontract, null))

		var n_if = ast_builder.make_if(n_condition, null)

		n_if.n_then.as(ABlockExpr).add(ast_builder.make_call(ast_builder.make_call(new ASelfExpr, callsite_sys, null), callsite_set_incontract, [new ATrueExpr.make(mainmodule.bool_type)]))
		n_if.n_then.as(ABlockExpr).add_all(call_to_contracts)
		n_if.n_then.as(ABlockExpr).add(ast_builder.make_call(ast_builder.make_call(new ASelfExpr, callsite_sys, null), callsite_set_incontract, [new AFalseExpr.make(mainmodule.bool_type)]))

		return n_if
	end
end

# This visitor checks the `callsite` to see if the target `mpropdef` has a contract.
private class CallSiteVisitor
	super Visitor

	var toolcontext: ToolContext

	# Actual visited method
	var visited_method: APropdef is noinit

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
		var visited_mpropdef = visited_method.mpropdef

		if contract_facet == null or visited_mpropdef == null then return callsite
		if visited_mpropdef isa MContract or visited_mpropdef isa MFacet then return callsite
		if mclass != null and invariant_facet != null and not mclass.check_invariant then return callsite

		# Do not drive contract in self if it's necessary `--no-self-contract`
		if toolcontext.opt_no_self_contract.value and visited_mpropdef.mclassdef.mclass == contract_facet.intro_mclassdef.mclass then return callsite

		var facet: MFacet
		# Check to drive the callsite on the right facet
		if visited_mpropdef.mclassdef.mclass != contract_facet.intro_mclassdef.mclass and invariant_facet != null then
			facet = invariant_facet
		else
			facet = contract_facet
		end

		var type_visitor = new TypeVisitor(toolcontext.modelbuilder, visited_mpropdef)
		var drived_callsite = type_visitor.build_callsite_by_property(visited_method, callsite.recv, facet, callsite.recv_is_self)
		# This never happen this check is here for debug
		assert drived_callsite != null
		return drived_callsite
	end
end

redef class ANode
	private fun check_contracts(v: ContractsVisitor) do end
	private fun check_callsite(v: CallSiteVisitor) do end
end

redef class AAnnotation

	# Returns the conditions of annotation parameters in the form of and expr
	# exemple:
	# the contract ensure(true, i == 10, f >= 1.0)
	# return this condition (true and i == 10 and f >= 1.0)
	private fun construct_condition(v : ContractsVisitor): AExpr
	do
		var n_condition = n_args.first
		n_args.remove_at(0)
		for n_arg in n_args do n_condition = v.ast_builder.make_and(n_condition, n_arg)
		n_condition.location = self.location
		return n_condition
	end
end

# The root of all contracts
#
# The objective of this class is to provide the set
# of services must be implemented or provided by a contract
abstract class MContract
	super MMethod

	# Define the name of the contract
	fun contract_name: String is abstract

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

	# Create a new empty contract
	private fun create_empty_contract(v: ContractsVisitor, mclassdef: MClassDef)
	do
		var n_contract_def = intro_mclassdef.mclass.create_empty_method(v, self, mclassdef, v.m_signature, v.n_signature.clone)
		n_contract_def.do_all(v.toolcontext)
	end

	# Create the initial contract (intro)
	# All contracts have the same implementation for the introduction.
	#
	# exemple
	# ~~~nitish
	# fun contrat([...])
	# do
	#	assert contract_condition
	# end
	# ~~~
	#
	private fun create_intro_contract(v: ContractsVisitor, n_conditions: Array[AExpr], mclassdef: MClassDef): AMethPropdef
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
		return make_contract(v, n_block, mclassdef)
	end

	# Create a contract with old (super) and the new conditions
	private fun create_subcontract(v: ContractsVisitor, n_conditions: Array[AExpr], mclassdef: MClassDef): AMethPropdef
	do
		var args = v.n_signature.make_parameter_read(v.ast_builder)
		var n_block = v.ast_builder.make_block
		n_block = self.create_nblock(v, n_conditions, args)
		return make_contract(v, n_block, mclassdef)
	end

	# Build a method with a specific block `n_block` in a specified `mclassdef`
	private fun make_contract(v: ContractsVisitor, n_block: AExpr, mclassdef: MClassDef): AMethPropdef
	do
		var n_contractdef = intro_mclassdef.mclass.create_empty_method(v, self, mclassdef, v.m_signature, v.n_signature.clone)
		n_contractdef.n_block = n_block
		# Define the location of the new method for corresponding of the annotation location
		n_contractdef.location = v.current_location
		n_contractdef.do_all(v.toolcontext)
		return n_contractdef
	end
end

# A expect (precondition) contract representation
# This method check if the requirements of the called method is true.
class MExpect
	super MContract

	# Define the name of the contract
	redef fun contract_name: String do return "expect"

	# Display warning if no contract is defined at introduction `expect`,
	# because if no contract is defined at the introduction the added
	# contracts will not cause any error even if they are not satisfied.
	#
	# exemple
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

	redef fun create_nblock(v: ContractsVisitor, n_conditions: Array[AExpr], args: Array[AExpr]): ABlockExpr
	do
		var n_block = v.ast_builder.make_block
		for n_condition in n_conditions do
			# Creating the if expression with the new condition
			var if_block = v.ast_builder.make_if(n_condition, n_condition.mtype)
			# Creating and adding return expr to the then case
			if_block.n_then = v.ast_builder.make_return(null)
			if_block.location = n_condition.location
			n_block.add if_block
		end
		# Creating the super call if all `if` has no returned
		n_block.add v.ast_builder.make_super_call(args,null)
		return n_block
	end

	redef fun adapt_method_to_contract(v: ContractsVisitor, n_mpropdef: AMethPropdef, called_method: MMethod)
	do
		var callsite = v.ast_builder.create_callsite(v.toolcontext.modelbuilder, n_mpropdef, self, true)
		var n_self = new ASelfExpr
		var args = n_mpropdef.n_signature.make_parameter_read(v.ast_builder)
		var n_callexpect = v.ast_builder.make_call(n_self,callsite,args)
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

# The root of all contracts where the call is after the execution of the original method (`invariant` and `ensure`).
abstract class BottomMContract
	super MContract

	redef fun create_nblock(v: ContractsVisitor, n_conditions: Array[AExpr], args: Array[AExpr]): ABlockExpr
	do
		# Define contract block
		var n_block = v.ast_builder.make_block
		# Creating the super call to the contract
		var super_call = v.ast_builder.make_super_call(args,null)
		# Adding the expressions to the block
		n_block.add super_call
		for n_condition in n_conditions do
			var tid = new TId.init_tk(n_condition.location)
			tid.text = "{n_condition.location.text}"
			# Creating the assert expression with the new condition
			var n_assert = v.ast_builder.make_assert(tid,n_condition,null)
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

# A ensure (postcondition) representation
# This method check if the called method respects the expectations of the caller.
class MEnsure
	super BottomMContract

	# Define the name of the contract
	redef fun contract_name: String do return "ensure"

	redef fun adapt_specific_msignature(m_signature: MSignature): MSignature
	do
		return m_signature.adapt_to_ensurecondition
	end

	redef fun adapt_specific_nsignature(n_signature: ASignature): ASignature
	do
		return n_signature.adapt_to_ensurecondition
	end

	redef fun adapt_method_to_contract(v: ContractsVisitor, n_mpropdef: AMethPropdef, called_method: MMethod)
	do
		var callsite = v.ast_builder.create_callsite(v.toolcontext.modelbuilder, n_mpropdef, self, true)
		var n_self = new ASelfExpr
		# argument to call the contract method
		var args = n_mpropdef.n_signature.make_parameter_read(v.ast_builder)
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
			var n_callcontract = v.ast_builder.make_call(n_self,callsite,args)
			actual_block.add_all([v.encapsulated_contract_call(n_mpropdef, [n_callcontract]), return_expr])
		else
			# build the call to the contract method
			var n_callcontract = v.ast_builder.make_call(n_self,callsite,args)
			actual_block.add v.encapsulated_contract_call(n_mpropdef, [n_callcontract])
		end
	end
end

# A invariant contract representation
# This method check if the Object is in a valid state.
class MInvariant
	super BottomMContract

	redef fun no_intro_contract(v: ContractsVisitor, a: Array[AAnnotation])
	do
		v.toolcontext.warning(a.first.location,"useless_contract","Useless contract: No contract defined at the introduction of the method")
	end

	# Define the name of the contract
	redef fun contract_name: String do return "invariant"

	redef fun adapt_method_to_contract(v: ContractsVisitor, n_mpropdef: AMethPropdef, called_method: MMethod)
	do
		var callsite = v.ast_builder.create_callsite(v.toolcontext.modelbuilder, n_mpropdef, self, true)
		var n_self = new ASelfExpr
		# build the call to the contract method
		var n_call = v.ast_builder.make_call(n_self, callsite, null)
		var actual_block = n_mpropdef.n_block
		# never happen. If it's the case the problem is in the contract facet building
		assert actual_block isa ABlockExpr

		var new_block = v.ast_builder.make_block

		if v.toolcontext.opt_in_out_invariant.value and not called_method.is_init then new_block.add n_call

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

# A facet contract representation
# This class is created to keep the information of which method is a contract facet
class MFacet
	super MMethod
end

redef class MClass

	# The invariant contract method
	# This method check all invariants class
	var minvariant: nullable MInvariant = null


	# Build invariant if is not exist and return it
	private fun build_invariant(v: ContractsVisitor): MInvariant
	do
		var m_invariant = self.minvariant
		if m_invariant != null then return m_invariant
		# get a invariant property from the `ContractsVisitor`
		m_invariant = v.get_global_invariant
		self.minvariant = m_invariant
		return m_invariant
	end

	# Check if the MClass has no invariant contract
	private fun check_invariant: Bool
	do
		return self.minvariant != null
	end

	# This method create an abstract method representation with this MMethodDef an this AMethoddef
	private fun create_abstract_method(v: ContractsVisitor, mproperty: MMethod, mclassdef: MClassDef, msignature: MSignature, n_signature: ASignature): AMethPropdef
	do
		# new methoddef definition
		var m_def = new MMethodDef(mclassdef, mproperty, v.current_location)
		# set the signature
		m_def.msignature = msignature.clone
		# set the abstract flag
		m_def.is_abstract = true
		# Build the new node method
		var n_def = v.ast_builder.make_method(null,null,m_def, n_signature)
		# Define the location of the new method for corresponding of the actual method
		n_def.location = v.current_location
		# Association new npropdef to mpropdef
		v.toolcontext.modelbuilder.unsafe_add_mpropdef2npropdef(m_def,n_def)
		return n_def
	end

	# Create method with an empty block
	# the `mproperty` i.e the global property definition. The mclassdef to set where the method is declared and it's model `msignature`
	private fun create_empty_method(v: ContractsVisitor, mproperty: MMethod, mclassdef: MClassDef, msignature: MSignature, n_signature: ASignature): AMethPropdef
	do
		var n_def = create_abstract_method(v, mproperty, mclassdef, msignature, n_signature)
		n_def.mpropdef.is_abstract = false
		n_def.n_block = v.ast_builder.make_block
		return n_def
	end
end

redef class MMethod

	# The contract facet of the method
	# it's representing the method with contract
	# This method call the contract and the method
	var mcontract_facet: nullable MFacet = null

	# The contract facet of the method wit invariant
	# it's representing the method with contract
	# This method call the mcontract_facet
	var minvariant_facet: nullable MFacet = null

	# The expected contract method
	var mexpect: nullable MExpect = null

	# The ensure contract method
	var mensure: nullable MEnsure = null

	# Build ensure if is not exist and return it
	private fun build_ensure: MEnsure
	do
		var m_mensure = self.mensure
		# build a new `MEnsure` contract
		if m_mensure == null then m_mensure = new MEnsure(intro_mclassdef, "_ensure_{name}", intro_mclassdef.location, public_visibility)
		self.mensure = m_mensure
		return m_mensure
	end

	# Check if the MMethod has no ensure contract
	private fun check_ensure: Bool
	do
		return self.mensure != null
	end

	# Build expect if is not exist and return it
	private fun build_expect: MExpect
	do
		var m_mexpect = self.mexpect
		# build a new `MExpect` contract
		if m_mexpect == null then m_mexpect = new MExpect(intro_mclassdef, "_expect_{name}", intro_mclassdef.location, public_visibility)
		self.mexpect = m_mexpect
		return m_mexpect
	end

	# Check if the MMethod has no expect contract
	private fun check_expect: Bool
	do
		return self.mexpect != null
	end

	# If the method has no contract facet she create it
	private fun build_contract_facet: MFacet
	do
		var m_mcontract_facet = self.mcontract_facet
		# build a new `MFacet` contract
		if m_mcontract_facet == null then m_mcontract_facet = new MFacet(intro_mclassdef, "_contract_{name}", intro_mclassdef.location, public_visibility)
		self.mcontract_facet = m_mcontract_facet
		return m_mcontract_facet
	end

	# Check if the MMethod has an contract facet
	private fun check_contract_facet: Bool
	do
		return self.mcontract_facet != null
	end

	# Build invariant_facet if is not exist and return it
	private fun build_invariant_facet: MFacet
	do
		var m_minvariant_facet = self.minvariant_facet
		# build a new `MFacet` contract
		if m_minvariant_facet == null then m_minvariant_facet = new MFacet(intro_mclassdef, "_contract_inv_{name}", intro_mclassdef.location, public_visibility)
		self.minvariant_facet = m_minvariant_facet
		return m_minvariant_facet
	end

	# Check if the MMethod has an invariant facet
	private fun check_invariant_facet: Bool
	do
		return self.minvariant_facet != null
	end

	# Define contract facet for MMethod in the given mclassdef.
	# If a contract is given adapt the contract facet.
	private fun define_contract_facet(v: ContractsVisitor, msignature: MSignature, n_signature: ASignature, classdef: MClassDef, exist_contract: Bool, mcontract: nullable MContract)
	do
		var exist_contract_facet = check_contract_facet
		# Do nothing the contract and the contract facet already exist
		if exist_contract_facet and exist_contract then return

		var intro_classdef = intro_mclassdef

		var contract_facet = build_contract_facet

		var n_contract_facet: AMethPropdef
		if not exist_contract_facet then
			# If has no contract facet in intro just create it
			if classdef != intro_mclassdef then
				create_facet(v, intro_mclassdef, msignature, n_signature.clone, contract_facet, self)
			end
			n_contract_facet = create_facet(v, classdef, msignature, n_signature, contract_facet, self)
		else
			# Check if the contract facet already exist in this context (in this classdef)
			if classdef.mpropdefs_by_property.has_key(contract_facet) then
				# get the definition
				n_contract_facet = v.toolcontext.modelbuilder.mpropdef2node(classdef.mpropdefs_by_property[contract_facet]).as(AMethPropdef)
			else
				# create a new contract facet definition
				n_contract_facet = create_facet(v, classdef, msignature, n_signature, contract_facet, self)
				var block = v.ast_builder.make_block
				# super call to the contract facet
				var args = v.n_signature.make_parameter_read(v.ast_builder)
				var n_super_call = v.ast_builder.make_super_call(args)
				# verification for add a return or not
				if msignature.return_mtype != null then
					block.add(v.ast_builder.make_return(n_super_call))
				else
					block.add(n_super_call)
				end
				n_contract_facet.n_block = block
			end
		end
		if mcontract != null then mcontract.adapt_method_to_contract(v, n_contract_facet, self)

		n_contract_facet.location = v.current_location
		n_contract_facet.do_all(v.toolcontext)
	end

	# Define invariant facet for the MMethod in the given mclassdef.
	# This method also define the contract facet.
	private fun define_invariant_facet(v: ContractsVisitor, msignature: MSignature, n_signature: ASignature, classdef: MClassDef, exist_contract: Bool, mcontract: MContract)
	do
		# Make a contract facet if it's not exist
		define_contract_facet(v, msignature, n_signature.clone, classdef, false)
		# Do nothing the invariant facet already exist
		if check_invariant_facet then return
		# Make invariant mproperty facet
		var invariant_facet = build_invariant_facet

		# Check if the MMethod has a invariant facet in the intro_mclassdef
		if classdef != intro_mclassdef then
			create_facet(v, intro_mclassdef, msignature, n_signature.clone, invariant_facet, self.mcontract_facet.as(not null))
		end

		# Create an ast definition for the invariant facet
		var n_invariant_facet = create_facet(v, classdef, msignature, n_signature, invariant_facet, self.mcontract_facet.as(not null))
		mcontract.adapt_method_to_contract(v, n_invariant_facet, self)
		n_invariant_facet.location = v.current_location
		n_invariant_facet.do_all(v.toolcontext)
	end

	# Method to create a facet of the method
	private fun create_facet(v: ContractsVisitor, classdef: MClassDef, msignature: MSignature, n_signature: ASignature, facet: MFacet, called: MMethod): AMethPropdef
	do
		# Defines the contract facet is an init or not
		# it is necessary to use the contracts with constructor
		facet.is_init = is_init
		var n_contractdef = classdef.mclass.create_empty_method(v, facet, classdef, msignature, n_signature)
		# FIXME set the location because the callsite creation need the node location
		n_contractdef.location = v.current_location
		n_contractdef.validate

		var block = v.ast_builder.make_block
		var n_self = new ASelfExpr

		var args: Array[AVarExpr]
		args = n_signature.make_parameter_read(v.ast_builder)

		var callsite = v.ast_builder.create_callsite(v.toolcontext.modelbuilder, n_contractdef, called, true)
		var n_call = v.ast_builder.make_call(n_self, callsite, args)

		if msignature.return_mtype == null then
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
		v.define_contract_signature(mcontract, n_signature, mproperty.intro.msignature)
		if not exist_contract and not is_intro then no_intro_contract(v, mcontract, n_annotations)
		var conditiondef = v.build_contract(n_annotations, mcontract, mclassdef)
		mproperty.define_contract_facet(v, mproperty.intro.msignature.as(not null), n_signature.clone, mclassdef, exist_contract, mcontract)
	end

	# Create a contract on the introduction classdef of the property.
	# Display an warning message if necessary
	private fun no_intro_contract(v: ContractsVisitor, mcontract: MContract, n_annotations: Array[AAnnotation])
	do
		mcontract.create_empty_contract(v, mcontract.intro_mclassdef)
		mcontract.no_intro_contract(v, n_annotations)
	end

	# Apply the `no_contract` annotation to the contract
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
			mclassdef.mclass.create_empty_method(v, mensure, mclassdef, mensure.intro.msignature.as(not null), n_signature.adapt_to_ensurecondition)
		end
		if mexpect != null then
			# Add an empty expect method to replace the actual definition
			mclassdef.mclass.create_empty_method(v, mexpect, mclassdef, mexpect.intro.msignature.as(not null), n_signature.adapt_to_condition)
		end
	end
end

redef class MClassDef
	# check if the class inherits an invariant contract
	private fun check_inherited_invariant: Bool
	do
		var super_classes = self.in_hierarchy.direct_greaters
		for super_class in super_classes do
			if super_class.mclass.check_invariant then return true
		end
		return false
	end
end

redef class APropdef
	redef fun check_callsite(v)
	do
		v.visited_method = self
	end
end

redef class AClassdef

	# Entry point to create a contract (verification of inheritance, or new contract)
	redef fun check_contracts(v)
	do
		v.ast_builder.check_mmodule(mclassdef.mmodule)
		v.current_location = location
		v.visited_class = self
		# It's always false to solve the problem of multiple inheritance an empty invariant method is systematically added in object.
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
			v.toolcontext.error(location, "The new contract definition is not correct when using `no_contract`. Remove the `invariant` definition or the` no_contract`")
			return
		end

		if not annotation_no_contract.is_empty then
			var minvariant = mclass.minvariant
			if minvariant == null then
				v.toolcontext.warning(location, "useless_nocontract", "Useless `no_contract`, no invariant was declared for `{mclass.name}`. Remove the `no_contract`")
			else
				# Add an empty invariant method to replace the actual definition
				mclass.create_empty_method(v, minvariant, mclassdef.as(not null), minvariant.intro.msignature.as(not null), new ASignature)
			end
		end

		if not annotation_invariants.is_empty then
			# Check if the contract is necessary
			if not v.check_usage_invariants(mclassdef.mmodule) then return

			var minvariant = mclass.build_invariant(v)
			v.define_contract_signature(minvariant, null, null)
			v.build_contract(annotation_invariants, minvariant, mclassdef.as(not null))
			add_invariant_in_super_def(v)
		end
	end

	# Verification if the class has an inherited contract to apply it.
	private fun check_redef(v: ContractsVisitor)
	do
		var is_inherited_contract = mclassdef.check_inherited_invariant
		# Check if the method has an attached contract (Inherited)
		if is_inherited_contract then mclass.minvariant = v.global_invariant
	end

	# Create all contract facet for each inherited property definition of the class
	# Redefine properties will be processed later
	private fun add_invariant_in_super_def(v: ContractsVisitor)
	do
		var mpropertys = mclassdef.collect_all_methods(v.mainmodule, new ModelFilter)
		for mproperty in mpropertys do
			if not mproperty isa MFacet and not mproperty isa MContract and mproperty.minvariant_facet == null then
				# check if the actual definition have this property definition. if it's the case do nothing the visit of the method will do the job
				if mclassdef.mpropdefs_by_property.has_key(mproperty) then continue
				var intro_propdef = mproperty.intro
				if intro_propdef.is_intern then continue
				# Get the n_intro to use the signature as a contract facet signature
				var n_intro = v.toolcontext.modelbuilder.mpropdef2node(intro_propdef)
				if n_intro isa AMethPropdef then
					var nsignature = n_intro.n_signature or else new ASignature
					# Define the contract facet (add contract facet in the actual mclass definition and in intro if intro mclassdef != actual mclassdef)
					mproperty.define_invariant_facet(v, intro_propdef.msignature.as(not null).clone, nsignature.clone, mclassdef.as(not null), false, mclass.minvariant.as(not null))
				end
			end
		end
	end
end

redef class AAttrPropdef

	# Entry point to create all contracts.
	redef fun check_contracts(v)
	do
		v.ast_builder.check_mmodule(v.visited_module.mmodule.as(not null))
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
			v.toolcontext.error(location, "The new contract definition is not correct when using `no_contract`. Remove the contract definition or the` no_contract`")
			return
		end

		if mwritepropdef == null and (not annotation_expect.is_empty or not annotation_ensure.is_empty) then
			# The contract is not applicable on no writable attribute
			v.toolcontext.error(location, "Not applicable contract on not writable attribute")
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
		var propdef = mreadpropdef or else mwritepropdef

		if propdef != null and propdef.mclassdef.mclass.check_invariant then
			var minvariant = propdef.mclassdef.mclass.minvariant
			assert minvariant != null
			if mreadpropdef != null then mreadpropdef.mproperty.define_invariant_facet(v, mreadpropdef.msignature.as(not null), new ASignature, propdef.mclassdef, false, minvariant)
			if mwritepropdef != null then mwritepropdef.mproperty.define_invariant_facet(v, mwritepropdef.msignature.as(not null), new ASignature.make_from_msignature(mwritepropdef.msignature.as(not null)), propdef.mclassdef, false, minvariant)
		end
	end

	# Create a ASignature for the set method of the attribut
	private fun create_set_nsignature: ASignature
	do
		var param_list = new Array[AParam]
		var n_id = new TId.init_tk(self.location)
		var new_param = new AParam.init_aparam(n_id,null,null,null)
		new_param.variable = new Variable(mpropdef.name)
		new_param.variable.declared_type = self.mtype
		param_list.add new_param
		var n_signature = new ASignature.init_asignature(null, param_list, null, null)
		n_signature.location = self.location
		return n_signature
	end

	private fun build_get_set(modelbuilder: ModelBuilder, mclassdef: MClassDef)
	do
		build_read_property(modelbuilder, mclassdef)
		build_write_property(modelbuilder, mclassdef, true)
		build_read_signature
		build_write_signature
	end
end

redef class AMethPropdef

	# Execute all method verification scope flow and typing.
	# It also execute an ast validation to define all parents and all locations
	private fun do_all(toolcontext: ToolContext)
	do
		self.validate
		# FIXME: The `do_` usage it is maybe to much (verification...). Solution: Cut the `do_` methods into simpler parts
		self.do_scope(toolcontext)
		self.do_flow(toolcontext)
		self.do_typing(toolcontext.modelbuilder, true)
	end

	# Entry point to create a contract (verification of inheritance, or new contract).
	redef fun check_contracts(v)
	do
		v.ast_builder.check_mmodule(mpropdef.mclassdef.mmodule)
		v.current_location = self.location
		v.is_intro_contract = mpropdef.is_intro
		v.visited_method = self
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
			v.toolcontext.error(location, "The new contract definition is not correct when using `no_contract`. Remove the contract definition or the `no_contract`")
			return
		end

		var nsignature = n_signature or else new ASignature

		if not annotation_no_contract.is_empty then
			mpropdef.no_contract_apply(v, n_signature.as(not null))
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
			mpropdef.construct_contract(v, nsignature.clone, annotation_ensure, mpropdef.mproperty.build_ensure, exist_contract)
		end
	end

	# Check if the class has an invariant.
	private fun check_invariant(v: ContractsVisitor)
	do
		if mpropdef != null and mpropdef.mclassdef.mclass.check_invariant then
			var minvariant = mpropdef.mclassdef.mclass.minvariant
			assert minvariant != null
			var nsignature = n_signature or else new ASignature
			mpropdef.mproperty.define_invariant_facet(v, mpropdef.msignature.as(not null), nsignature.clone, mpropdef.mclassdef, false, minvariant)
		end
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
			var n_id = new TId
			n_id.text = "result"
			var new_param = new AParam
			new_param.n_id = n_id
			new_param.variable = new Variable(n_id.text)
			new_param.variable.declared_type = ret_type
			nsignature.n_params.add new_param
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
