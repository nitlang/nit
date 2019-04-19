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

module contracts

import astprinter
import astbuilder
import parse_annotations
import phase
import semantize
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
	fun do_contracts(toolcontext: ToolContext) do
		var contract_visitor = new ContractsVisitor(toolcontext)
		contract_visitor.enter_visit(self)
		var callsite_visitor = new CallSiteVisitor(toolcontext)
		callsite_visitor.enter_visit(self)
	end
end

# This visitor checks the `callsite` to see if the target `mpropdef` has a contract.
private class CallSiteVisitor
	super Visitor

	var toolcontext: ToolContext

	var visited_method: APropdef is noinit

	redef fun visit(node)
	do
		node.check_callsite(self)
		node.visit_all(self)
	end
end

# This visitor checks the `AMethPropdef` to check if the method has a contract annotation or the mpropdef is a redefinition with a inheritance contract
private class ContractsVisitor
	super Visitor

	var toolcontext: ToolContext

	var ast_builder: nullable ASTBuilder

	var visited_method: AMethPropdef is noinit

	# is `no_contract` annotation was found in the `visited_method`
	var find_no_contract = false

	var contract_location: Location is noinit

	redef fun visit(node)
	do
		node.create_contracts(self)
		node.visit_all(self)
	end
end

redef class ANode
	private fun create_contracts(v: ContractsVisitor)do end
	private fun check_callsite(v: CallSiteVisitor)do end
end

redef class AAnnotation

	# Returns the conditions of annotation parameters in the form of and expr
	private fun construct_condition(v: ContractsVisitor, ast_builder : ASTBuilder): AExpr
	do
		var first_arg = n_args.first
		n_args.remove_at(0)
		# Create the expected condition recursively with the annotation parameters
		var n_condition = self.construct_and_expr(v,n_args, first_arg)
		return n_condition
	end

	# Method that recursively traverses the argument list of the annotation
	private fun construct_and_expr(v: ContractsVisitor, args:  ANodes[AExpr], n_expr: AExpr): AExpr
	do
		if n_expr isa AEqExpr then
			# Checking the equal expr to remove the comparison between two boolean
			if n_expr.n_expr2 isa AFalseExpr then
				n_expr = v.ast_builder.make_not(n_expr.n_expr)
			else if n_expr.n_expr2 isa ATrueExpr then
				n_expr = n_expr.n_expr
			end
		end
		if args.is_empty then
			return n_expr
		else
			var first_arg = args.first
			args.remove_at(0)
			return v.ast_builder.make_and(n_expr, construct_and_expr(v, args,first_arg))
		end
	end
end

abstract class MContract
	super MMethod

	# Define the name of the contract
	fun contract_name: String is abstract

	# Method use to diplay warning when the contract is not present at the introduction
	private fun no_intro_contract(v: ContractsVisitor, a: AAnnotation)do end

	# Creating specific inheritance block contract
	private fun create_nblock(v: ContractsVisitor, n_condition: AExpr, args: Array[AExpr]): ABlockExpr is abstract

	# Method to adapt the `n_block` to the contract
	# Return the adapted `n_block`
	private fun adapt_block_to_contract(v: ContractsVisitor,conditiondef: MMethodDef, n_block: AExpr): ABlockExpr is abstract

	# Adapt the msignature specifically for the contract method
	private fun adapt_specific_msignature(m_signature: MSignature): MSignature
	do
		return m_signature.adapt_to_condition
	end

	# Adapt the nsignature specifically for the contract method
	private fun adapt_specific_nsignature(v: ContractsVisitor, n_signature: ASignature): ASignature
	do
		return n_signature.adapt_to_condition(v.visited_method,null)
	end

	# Adapt the msignature to the contract
	# If it is not null call the specific adapt msignature for the contract
	private fun adapt_msignature(v: ContractsVisitor): nullable MSignature
	do
		var msignature = v.visited_method.mpropdef.mproperty.intro.msignature
		if msignature != null then
			return adapt_specific_msignature(msignature)
		else
			return null
		end
	end

	# Adapt the nsignature to the contract
	# If it is not null call the specific adapt nsignature for the contract
	private fun adapt_nsignature(v: ContractsVisitor): ASignature
	do
		var nsignature = v.visited_method.n_signature
		if nsignature != null then
			return adapt_specific_nsignature(v,nsignature)
		else
			return new ASignature
		end
	end

	# Create a new empty contract
	private fun create_empty_contract(v: ContractsVisitor)
	do
		var n_contract_def = self.create_empty_method(v, self, v.visited_method.mpropdef.mproperty.intro.mclassdef, adapt_msignature(v), adapt_nsignature(v))
		# Set the flag to indicate that method have now a contract
		v.visited_method.mpropdef.mproperty.intro.has_contract = true
		n_contract_def.do_all(v.toolcontext)
	end

	init create(intro: MPropDef)
	do
		init(intro.mproperty.intro.mclassdef, "_{contract_name}_{intro.name}", intro.mproperty.intro.location, public_visibility)
	end
end

class MEnsure
	super MContract

	redef fun contract_name
	do
		return "ensures"
	end

	redef fun adapt_specific_msignature(m_signature: MSignature): MSignature
	do
		return m_signature.adapt_to_ensurecondition
	end

	redef fun adapt_specific_nsignature(v: ContractsVisitor, n_signature: ASignature): ASignature
	do
		return n_signature.adapt_to_ensurecondition(v.visited_method)
	end

	redef fun create_nblock(v: ContractsVisitor, n_condition: AExpr, args: Array[AExpr]): ABlockExpr
	do
		var tid = new TId.init_tk(v.contract_location)
		tid.text = "{contract_name}"
		# Creating the assert expression with the new condition
		var assert_block = v.ast_builder.make_assert(tid,n_condition,null)
		# Creating the super call to the contract
		var super_call = v.ast_builder.make_super_call(args,null)
		# Define contract block
		var n_block = v.ast_builder.make_block
		# Adding the expressions to the block
		n_block.add super_call
		n_block.add assert_block
		return n_block
	end

	redef fun adapt_block_to_contract(v: ContractsVisitor, conditiondef: MMethodDef, n_block: AExpr): ABlockExpr
	do
		var callsite = v.visited_method.create_callsite(v, conditiondef)
		var n_self = new ASelfExpr
		# FIXME: I use this method to not call typing
		n_self.set_mtype(conditiondef.mclassdef.bound_mtype)
		# argument to call the contract method
		var args = v.visited_method.n_signature.make_parameter_read(v.ast_builder.as(not null))
		var ret_type = v.visited_method.mpropdef.mproperty.intro.msignature.return_mtype
		# FIXME: I define the variable result here because it must be identical between the two parts. This is maybe not use if the method don't have a return
		var result_var = new Variable("result")
		# Actual visited block
		var actual_block = n_block
		var new_block = v.ast_builder.make_block
		if ret_type != null then
			var return_expr = actual_block.as(ABlockExpr).n_expr.last
			# Creating a new variable to keep the old return of the method
			var assign_result = v.ast_builder.make_var_assign(result_var, return_expr.as(AReturnExpr).n_expr.as(not null))
			# Expr to read the result variable
			var read_result = v.ast_builder.make_var_read(result_var, ret_type)
			# Remove the actual retur"
			actual_block.as(ABlockExpr).n_expr.pop
			# Set the return type
			result_var.declared_type = ret_type
			# Adding the reading expr of result variable to the block
			actual_block.add(assign_result)
			# Adding the read return to argument
			args.add(read_result)
		end

		# Add the actual block to the new
		if actual_block isa ABlockExpr then
			new_block.n_expr.add_all(actual_block.n_expr)
		else
			new_block.add(actual_block)
		end
		# build the call to the contract method
		var n_callcontract = v.ast_builder.make_call(n_self,callsite,args)
		new_block.add n_callcontract

		# Creation of the new instruction block with the call to expect condition
		if ret_type != null then
			var read_result = v.ast_builder.make_var_read(result_var, ret_type)
			# Definition of the new return
			var return_expr = v.ast_builder.make_return(read_result)
			new_block.add return_expr
		end
		return new_block
	end
end

class MExpect
	super MContract

	redef fun contract_name
	do
		return "expects"
	end

	redef fun no_intro_contract(v: ContractsVisitor, a: AAnnotation)
	do
		v.toolcontext.warning(a.location,"","Useless contract: No contract defined at the introduction (in {v.visited_method.mpropdef.mproperty.intro.location})")
	end

	redef fun create_nblock(v: ContractsVisitor, n_condition: AExpr, args: Array[AExpr]): ABlockExpr
	do
		# Creating the if expression with the new condition
		var if_block = v.ast_builder.make_if(n_condition, n_condition.mtype)
		# Creating and adding return expr to the then case
		if_block.n_then = v.ast_builder.make_return(null)
		# Creating the super call to the contract and adding this to else case
		if_block.n_else = v.ast_builder.make_super_call(args,null)
		var n_block = v.ast_builder.make_block
		n_block.add if_block
		return n_block
	end

	redef fun adapt_block_to_contract(v: ContractsVisitor, conditiondef: MMethodDef, n_block: AExpr): ABlockExpr
	do
		var callsite = v.visited_method.create_callsite(v, conditiondef)
		var n_self = new ASelfExpr
		# FIXME: I use this method to not call typing
		n_self.set_mtype(conditiondef.mclassdef.bound_mtype)
		var args = v.visited_method.n_signature.make_parameter_read(v.ast_builder.as(not null))
		var n_callexpect = v.ast_builder.make_call(n_self,callsite,args)
		# Creation of the new instruction block with the call to expect condition
		var block = new ABlockExpr
		block.n_expr.push n_callexpect
		if n_block isa ABlockExpr then
			block.n_expr.add_all(n_block.n_expr)
		else
			block.n_expr.push(n_block)
		end
		return block
	end
end

redef class MMethod

	# The contract face of the method
	# it's representing the method with contract
	# This method call the contract and the method
	var mcontract: nullable MMethod = null

	# The expected contract method
	var mexpect: nullable MExpect = null

	# The ensure contract method
	var mensure: nullable MEnsure = null

	# Check if the MMethod has no ensure contract
	# if this is the case returns false and built it
	# else return true
	private fun check_exist_ensure(mpropdef: MPropDef): Bool
	do
		if self.mensure == null then
			mensure = new MEnsure.create(mpropdef)
			return false
		else
			return true
		end
	end

	# Check if the MMethod has no expect contract
	# if this is the case returns false and built it
	# else return true
	private fun check_exist_expect(mpropdef: MPropDef): Bool
	do
		if self.mexpect == null then
			mexpect = new MExpect.create(mpropdef)
			return false
		else
			return true
		end
	end

	# This method create an abstract method representation with this MMethodDef an this AMethoddef
	private fun create_abstract_method(v: ContractsVisitor, mproperty: MMethod, mclassdef: MClassDef, msignature: nullable MSignature, n_signature: ASignature): AMethPropdef
	do
		var n_methdef = v.visited_method
		# new methoddef definition
		var m_def = new MMethodDef(mclassdef, mproperty, n_methdef.location)
		# check the signature if exist, it's copied
		m_def.msignature = msignature.copy
		# set the abstract flag
		m_def.is_abstract = true
		# Build the new node method
		var n_def = v.ast_builder.make_method(null,null,m_def,n_signature,null,null,null,null)
		# Define the location of the new method for corresponding of the actual method
		n_def.location = n_methdef.location
		# Association new npropdef to mpropdef
		v.toolcontext.modelbuilder.add_mpropdef2npropdef(m_def,n_def)
		return n_def
	end

	private fun create_empty_method(v: ContractsVisitor, mproperty: MMethod, mclassdef: MClassDef, msignature: nullable MSignature, n_signature: ASignature): AMethPropdef
	do
		var n_def = create_abstract_method(v, mproperty, mclassdef, msignature, n_signature)
		n_def.mpropdef.is_abstract = false
		n_def.n_block = v.ast_builder.make_block
		return n_def
	end

	private fun create_contract_face(v: ContractsVisitor): AMethPropdef
	do
		var n_methdef = v.visited_method

		var m_signature: nullable MSignature = null
		if n_methdef.mpropdef.mproperty.intro.msignature != null then m_signature = n_methdef.mpropdef.mproperty.intro.msignature.copy

		var n_signature: ASignature
		if n_methdef.n_signature != null then n_signature = n_methdef.n_signature.copy(n_methdef) else n_signature = new ASignature

		var n_contractdef = create_empty_method(v, mcontract.as(not null), n_methdef.mpropdef.mclassdef, m_signature, n_signature)
		var block = v.ast_builder.make_block
		var n_self = new ASelfExpr
		# FIXME: I use this method to not call typing
		n_self.set_mtype(v.visited_method.mpropdef.mclassdef.bound_mtype)
		var args = n_contractdef.n_signature.make_parameter_read(v.ast_builder.as(not null))
		var n_call = v.ast_builder.make_call(n_self, v.visited_method.create_callsite(v, v.visited_method.mpropdef.as(not null)), args)

		if m_signature.return_mtype == null then
			block.add(n_call)
		else
			block.add(v.ast_builder.make_return(n_call))
		end

		n_contractdef.n_block = block
		n_contractdef.location = v.visited_method.location
		n_contractdef.do_all(v.toolcontext)
		return n_contractdef
	end

	# Check if the MMethod has an contract face
	# If the method has no contract face she create it
	private fun check_exist_contract_facet(mpropdef: MPropDef): Bool
	do
		if self.mcontract == null then
			mcontract = new MMethod(mpropdef.mclassdef, "_contract_{mpropdef.name}", mpropdef.location, public_visibility)
			return false
		end
		return true
	end
end

redef class MMethodDef
	# flag to indicate the call of a contract in the method
	var has_contract = false
end

redef class APropdef
	redef fun check_callsite(v)
	do
		v.visited_method = self
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
		self.do_typing(toolcontext.modelbuilder)
	end

	# Entry point to create all contracts.
	redef fun create_contracts(v)
	do
		if v.ast_builder == null then v.ast_builder = new ASTBuilder(mpropdef.mclassdef.mmodule)
		v.ast_builder.check_mmodule(mpropdef.mclassdef.mmodule)

		v.visited_method = self
		v.contract_location = self.location

		if n_annotations != null then
			for n_annotation in n_annotations.n_items do
				check_annotation(v,n_annotation)
			end
		end

		if not mpropdef.is_intro and not v.find_no_contract then
			self.check_redef(v)
		end
		# reset the flag
		v.find_no_contract = false
	end

	# Verification of the annotation to know if it is a contract annotation.
	# If this is the case, we built the appropriate contract.
	private fun check_annotation(v: ContractsVisitor, n_annotation: AAnnotation)
	do
		if n_annotation.name == "expects" then
			var exist_contract = mpropdef.mproperty.check_exist_expect(mpropdef.as(not null))
			build_contract(v, n_annotation, mpropdef.mproperty.mexpect.as(not null), exist_contract)
		else if n_annotation.name == "ensures" then
			var exist_contract = mpropdef.mproperty.check_exist_ensure(mpropdef.as(not null))
			build_contract(v, n_annotation, mpropdef.mproperty.mensure.as(not null), exist_contract)
		else if n_annotation.name == "no_contract" then
			# no_contract found set the flag to true
			v.find_no_contract = true
		end
	end

	# Verification if the method have an inherited contract to apply it.
	private fun check_redef(v: ContractsVisitor)
	do
		# Check if the method has an attached contract
		if not mpropdef.has_contract then
			if mpropdef.mproperty.mexpect != null or mpropdef.mproperty.mensure != null then
				mpropdef.has_contract = true
			end
		end
	end

	# Verification of the contract face
	private fun check_contract_face(v: ContractsVisitor, mcontract: MContract, m_contractdef: MMethodDef, exist_contract: Bool)
	do
		var exist_contract_face = mpropdef.mproperty.check_exist_contract_facet(mpropdef.as(not null))

		if exist_contract_face and exist_contract then return

		var contract_face: AMethPropdef
		if not exist_contract_face then
			contract_face = mpropdef.mproperty.create_contract_face(v)

			adapt_block_to_contract(v, m_contractdef, mcontract, contract_face)
		else
			var contract_face_def = mpropdef.mproperty.mcontract.lookup_first_definition(mpropdef.mclassdef.mmodule, mpropdef.mclassdef.bound_mtype)
			contract_face = v.toolcontext.modelbuilder.mpropdef2node(contract_face_def).as(AMethPropdef)
			if contract_face.mpropdef.mclassdef != mpropdef.mclassdef then
				contract_face = mpropdef.mproperty.create_contract_face(v)
				contract_face.n_block = contract_face.n_block.clone
			end
		end
		adapt_block_to_contract(v, m_contractdef, mcontract, contract_face)
		contract_face.do_all(v.toolcontext)
	end

	# Define the new contract take in consideration that an old contract exist or not
	private fun define_contract(v: ContractsVisitor, a: AAnnotation, mcontract: MContract): MMethodDef
	do
		v.contract_location = a.location
		# Copy the signature to adapt it to the contract
		var msignature = mcontract.adapt_msignature(v)
		var nsignature = mcontract.adapt_nsignature(v)
		# Retrieving the expression provided in the annotation
		var n_condition = a.construct_condition(v, v.ast_builder.as(not null))
		var m_contractdef: MMethodDef
		if mpropdef.is_intro then
			# Create new contract method
			m_contractdef = create_intro_contract(v, mcontract, n_condition)
		else
			# Create a redef of contract to take in consideration the new condition
			m_contractdef = create_subcontract(v, mcontract, n_condition)
		end
		return m_contractdef
	end

	# Method use to build contract (creation: of the contract face, contract verification method)
	private fun build_contract(v: ContractsVisitor, n_annotation: AAnnotation, mcontract: MContract, exist_contract: Bool)
	do
		if not exist_contract and not mpropdef.is_intro then
			mcontract.no_intro_contract(v, n_annotation)
			mcontract.create_empty_contract(v)
		end
		var conditiondef = define_contract(v, n_annotation, mcontract)
		check_contract_face(v, mcontract, conditiondef, exist_contract)
	end

	# Adapt the block to use the contracts
	private fun adapt_block_to_contract(v: ContractsVisitor, mmethdef: nullable MMethodDef, contract: MContract, n_mpropdef: AMethPropdef)
	do
		if mmethdef != null then
			n_mpropdef.n_block = contract.adapt_block_to_contract(v, mmethdef, n_mpropdef.n_block.as(not null))
			mpropdef.has_contract = true
			n_mpropdef.do_all(v.toolcontext)
		end
	end

	private fun create_contract(v: ContractsVisitor, mcontract: MContract, n_block: AExpr, nsignature: ASignature): MMethodDef
	do
		var msignature: nullable MSignature = null
		if mpropdef.mproperty.intro.msignature != null then msignature = mcontract.adapt_msignature(v)

		var n_contractdef = mpropdef.mproperty.create_empty_method(v, mcontract, mpropdef.mclassdef, msignature, nsignature)
		n_contractdef.n_block = n_block
		# Define the location of the new method for corresponding of the annotation location
		n_contractdef.location = v.contract_location
		n_contractdef.do_all(v.toolcontext)
		return n_contractdef.mpropdef.as(not null)
	end

	# Create the initial contract (intro)
	private fun create_intro_contract(v: ContractsVisitor, mcontract: MContract, n_condition: AExpr): MMethodDef
	do
		var n_block = v.ast_builder.make_block
		# Create a new tid to set the name of the assert for more explicit error
		var tid = new TId.init_tk(mcontract.location)
		tid.text = "{mcontract.contract_name}"
		n_block.add v.ast_builder.make_assert(tid,n_condition,null)
		return create_contract(v, mcontract, n_block, mcontract.adapt_nsignature(v))
	end

	# Create a contract with old (super) and the new conditions
	private fun create_subcontract(v: ContractsVisitor, mcontract: MContract, ncondition: AExpr): MMethodDef
	do
		var nsignature = mcontract.adapt_nsignature(v)
		var args = nsignature.make_parameter_read(v.ast_builder.as(not null))
		return create_contract(v, mcontract, mcontract.create_nblock(v, ncondition, args), nsignature)
	end

	# Create a specific callsite to the MMethodDef
	private fun create_callsite(v: ContractsVisitor, methdef: MMethodDef): CallSite
	do
		var type_visitor = new TypeVisitor(v.toolcontext.modelbuilder, mpropdef.as(not null))
		var callsite = type_visitor.build_callsite_by_propdef(self, methdef.mclassdef.bound_mtype, methdef, true)
		assert callsite != null
		return callsite
	end
end

redef class ASelfExpr
	# Defined the self type
	fun set_mtype(mtype: nullable MType)
	do
		self.mtype = mtype
	end
end

redef class MSignature
	# Adapt signature for a expect condition
	# Removed the return type is it not necessary
	private fun adapt_to_condition(return_mtype: nullable MType): MSignature do
		var adapt_msignature = self.copy
		adapt_msignature.set_return(return_mtype)
		return adapt_msignature
	end

	# Adapt signature for a ensure condition
	#
	# Create new parameter with the return type
	private fun adapt_to_ensurecondition: MSignature do
		var rtype = return_mtype
		var msignature = adapt_to_condition
		if rtype != null then
			msignature.mparameters.add(new MParameter("result", rtype, false))
		end
		return msignature
	end

	# Return a partial copy of self
	private fun copy: MSignature
	do
		return new MSignature(mparameters.to_a, return_mtype)
	end

	private fun set_return(return_mtype: nullable MType)
	do
		self.return_mtype = return_mtype
	end
end

redef class ASignature
	# Create an array of AExpr representing the call of every parameters
	private fun make_parameter_read(ast_builder: ASTBuilder): Array[AExpr]
	do
		var args = new Array[AExpr]
		for n_param in self.n_params do
			var mtype = n_param.variable.declared_type
			if n_param.variable != null and mtype != null then
				args.push ast_builder.make_var_read(n_param.variable.as(not null),mtype)
			end
		end
		return args
	end

	# Return a copy of self adapted for the expect condition
	# npropdef it is use to define the parent of the parameters
	private fun adapt_to_condition(npropdef: AMethPropdef, return_type: nullable AType): ASignature do
		var adapt_nsignature = self.copy(npropdef)
		adapt_nsignature.n_type = return_type
		return adapt_nsignature
	end

	# Return a copy of self adapted for postcondition on npropdef
	private fun adapt_to_ensurecondition(npropdef: AMethPropdef): ASignature do
		var nsignature = adapt_to_condition(npropdef,null)
		var return_type = npropdef.mpropdef.msignature.return_mtype
		if return_type != null then
			var n_id = new TId.init_tk(npropdef.location)
			n_id.text = "result"
			var new_param = new AParam
			new_param.n_id = n_id
			new_param.variable = new Variable(n_id.text)
			new_param.variable.declared_type = return_type
			nsignature.n_params.add new_param
		end
		return nsignature
	end

	# Return a partial copy of self
	private fun copy(npropdef: AMethPropdef): ASignature
	do
		var nparams = new ANodes[AParam](npropdef)
		for nparam in self.n_params do
			var n_id = new TId.init_tk(nparam.n_id.location)
			var new_param = new AParam.init_aparam(n_id,null,null,null)
			new_param.variable = nparam.variable
			nparams.add new_param
		end
		# FIXME: the n_type is not copied it's just duplicated
		return new ASignature.init_asignature(null, nparams, null, self.n_type)
	end
end

redef class ASendExpr

	redef fun check_callsite(v)
	do
		if callsite != null then
			if callsite.mpropdef.has_contract and not callsite.recv.need_anchor then
				if callsite.recv.has_mproperty(v.visited_method.mpropdef.mclassdef.mmodule, callsite.mproperty.mcontract.as(not null)) then
					var type_visitor = new TypeVisitor(v.toolcontext.modelbuilder, v.visited_method.mpropdef.as(not null))
					self.callsite = type_visitor.build_callsite_by_property(self, callsite.recv,  callsite.mproperty.mcontract.as(not null), callsite.recv_is_self)
				end
			end
		end
	end
end