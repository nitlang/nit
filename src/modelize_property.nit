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

# Analysis and verification of property definitions to instantiate model element
module modelize_property

import modelize_class

redef class ToolContext
	var modelize_property_phase: Phase = new ModelizePropertyPhase(self, [modelize_class_phase])
end

private class ModelizePropertyPhase
	super Phase
	redef fun process_nmodule(nmodule)
	do
		for nclassdef in nmodule.n_classdefs do
			if nclassdef.all_defs == null then continue # skip non principal classdef
			toolcontext.modelbuilder.build_properties(nclassdef)
		end
	end
end

redef class ModelBuilder
	# Register the npropdef associated to each mpropdef
	# FIXME: why not refine the `MPropDef` class with a nullable attribute?
	var mpropdef2npropdef: HashMap[MPropDef, APropdef] = new HashMap[MPropDef, APropdef]

	# Build the properties of `nclassdef`.
	# REQUIRE: all superclasses are built.
	private fun build_properties(nclassdef: AClassdef)
	do
		# Force building recursively
		if nclassdef.build_properties_is_done then return
		nclassdef.build_properties_is_done = true
		var mclassdef = nclassdef.mclassdef.as(not null)
		if mclassdef.in_hierarchy == null then return # Skip error
		for superclassdef in mclassdef.in_hierarchy.direct_greaters do
			if not mclassdef2nclassdef.has_key(superclassdef) then continue
			build_properties(mclassdef2nclassdef[superclassdef])
		end

		for nclassdef2 in nclassdef.all_defs do
			for npropdef in nclassdef2.n_propdefs do
				npropdef.build_property(self, mclassdef)
			end
			for npropdef in nclassdef2.n_propdefs do
				npropdef.build_signature(self)
			end
			for npropdef in nclassdef2.n_propdefs do
				npropdef.check_signature(self)
			end
		end
		process_default_constructors(nclassdef)
	end

	# Introduce or inherit default constructor
	# This is the last part of `build_properties`.
	private fun process_default_constructors(nclassdef: AClassdef)
	do
		var mclassdef = nclassdef.mclassdef.as(not null)

		# Are we a refinement
		if not mclassdef.is_intro then return

		# Is the class forbid constructors?
		if not mclassdef.mclass.kind.need_init then return

		# Is there already a constructor defined?
		for mpropdef in mclassdef.mpropdefs do
			if not mpropdef isa MMethodDef then continue
			if mpropdef.mproperty.is_init then return
		end

		if not nclassdef isa AStdClassdef then return

		var mmodule = mclassdef.mmodule
		# Do we inherit for a constructor?
		var combine = new Array[MMethod]
		var inhc: nullable MClass = null
		for st in mclassdef.supertypes do
			var c = st.mclass
			if not c.kind.need_init then continue
			st = st.anchor_to(mmodule, mclassdef.bound_mtype)
			var candidate = self.try_get_mproperty_by_name2(nclassdef, mmodule, st, "init").as(nullable MMethod)
			if candidate != null then
				if candidate.intro.msignature != null then
					if candidate.intro.msignature.arity == 0 then
						combine.add(candidate)
						continue
					end
				end
			end
			var inhc2 = c.inherit_init_from
			if inhc2 == null then inhc2 = c
			if inhc2 == inhc then continue
			if inhc != null then
				self.error(nclassdef, "Error: Cannot provide a defaut constructor: conflict for {inhc} and {c}")
			else
				inhc = inhc2
			end
		end

		# Collect undefined attributes
		var mparameters = new Array[MParameter]
		var anode: nullable ANode = null
		for npropdef in nclassdef.n_propdefs do
			if npropdef isa AAttrPropdef and npropdef.n_expr == null then
				if npropdef.mpropdef == null then return # Skip broken attribute
				var paramname = npropdef.mpropdef.mproperty.name.substring_from(1)
				var ret_type = npropdef.mpropdef.static_mtype
				if ret_type == null then return
				var mparameter = new MParameter(paramname, ret_type, false)
				mparameters.add(mparameter)
				if anode == null then anode = npropdef
			end
		end
		if anode == null then anode = nclassdef

		if combine.is_empty and inhc != null then
			if not mparameters.is_empty then
				self.error(anode,"Error: {mclassdef} cannot inherit constructors from {inhc} because there is attributes without initial values: {mparameters.join(", ")}")
				return
			end

			# TODO: actively inherit the consturctor
			self.toolcontext.info("{mclassdef} inherits all constructors from {inhc}", 3)
			mclassdef.mclass.inherit_init_from = inhc
			return
		end

		if not combine.is_empty and inhc != null then
			self.error(nclassdef, "Error: Cannot provide a defaut constructor: conflict for {combine.join(", ")} and {inhc}")
			return
		end

		if not combine.is_empty then
			if mparameters.is_empty and combine.length == 1 then
				# No need to create a local init, the inherited one is enough
				inhc = combine.first.intro_mclassdef.mclass
				mclassdef.mclass.inherit_init_from = inhc
				self.toolcontext.info("{mclassdef} inherits all constructors from {inhc}", 3)
				return
			end
			nclassdef.super_inits = combine
		end

		var mprop = new MMethod(mclassdef, "init", mclassdef.mclass.visibility)
		var mpropdef = new MMethodDef(mclassdef, mprop, nclassdef.location)
		var msignature = new MSignature(mparameters, null)
		mpropdef.msignature = msignature
		mprop.is_init = true
		nclassdef.mfree_init = mpropdef
		self.toolcontext.info("{mclassdef} gets a free constructor for attributes {mpropdef}{msignature}", 3)
	end

	# Check the visibility of `mtype` as an element of the signature of `mpropdef`.
	fun check_visibility(node: ANode, mtype: MType, mpropdef: MPropDef)
	do
		var mmodule = mpropdef.mclassdef.mmodule
		var mproperty = mpropdef.mproperty

		# Extract visibility information of the main part of `mtype`
		# It is a case-by case
		var vis_type: nullable MVisibility = null # The own visibility of the type
		var mmodule_type: nullable MModule = null # The origial module of the type
		if mtype isa MNullableType then mtype = mtype.mtype
		if mtype isa MClassType then
			vis_type = mtype.mclass.visibility
			mmodule_type = mtype.mclass.intro.mmodule
		else if mtype isa MVirtualType then
			vis_type = mtype.mproperty.visibility
			mmodule_type = mtype.mproperty.intro_mclassdef.mmodule
		else if mtype isa MParameterType then
			# nothing, always visible
		else
			node.debug "Unexpected type {mtype}"
			abort
		end

		if vis_type != null then
			assert mmodule_type != null
			var vis_module_type = mmodule.visibility_for(mmodule_type) # the visibility of the original module
			if mproperty.visibility > vis_type then
				error(node, "Error: The {mproperty.visibility} property `{mproperty}` cannot contain the {vis_type} type `{mtype}`")
				return
			else if mproperty.visibility > vis_module_type then
				error(node, "Error: The {mproperty.visibility} property `{mproperty}` cannot contain the type `{mtype}` from the {vis_module_type} module `{mmodule_type}`")
				return
			end
		end

		# No error, try to go deeper in generic types
		if node isa AType then
			for a in node.n_types do check_visibility(a, a.mtype.as(not null), mpropdef)
		else if mtype isa MGenericType then
			for t in mtype.arguments do check_visibility(node, t, mpropdef)
		end
	end
end

redef class MClass
	# The class whose self inherit all the constructors.
	# FIXME: this is needed to implement the crazy constructor mixin thing of the of old compiler. We need to think what to do with since this cannot stay in the modelbuilder
	var inherit_init_from: nullable MClass = null
end

redef class MPropDef
	# Does the MPropDef contains a call to super or a call of a super-constructor?
	# Subsequent phases of the frontend (esp. typing) set it if required
	var has_supercall: Bool writable = false
end

redef class AClassdef
	var build_properties_is_done: Bool = false
	# The list of super-constructor to call at the start of the free constructor
	# FIXME: this is needed to implement the crazy constructor thing of the of old compiler. We need to think what to do with since this cannot stay in the modelbuilder
	var super_inits: nullable Collection[MMethod] = null

	# The free init (implicitely constructed by the class if required)
	var mfree_init: nullable MMethodDef = null
end

redef class MClassDef
	# What is the `APropdef` associated to a `MProperty`?
	# Used to check multiple definition of a property.
	var mprop2npropdef: Map[MProperty, APropdef] = new HashMap[MProperty, APropdef]
end

redef class Prod
	# Join the text of all tokens
	# Used to get the 'real name' of method definitions.
	fun collect_text: String
	do
		var v = new TextCollectorVisitor
		v.enter_visit(self)
		assert v.text != ""
		return v.text
	end
end

private class TextCollectorVisitor
	super Visitor
	var text: String = ""
	redef fun visit(n)
	do
		if n isa Token then text += n.text
		n.visit_all(self)
	end
end

redef class APropdef
	# The associated main model entity
	type MPROPDEF: MPropDef

	# The associated propdef once build by a `ModelBuilder`
	var mpropdef: nullable MPROPDEF writable

	private fun build_property(modelbuilder: ModelBuilder, mclassdef: MClassDef) is abstract
	private fun build_signature(modelbuilder: ModelBuilder) is abstract
	private fun check_signature(modelbuilder: ModelBuilder) is abstract
	private fun new_property_visibility(modelbuilder: ModelBuilder, mclassdef: MClassDef, nvisibility: nullable AVisibility): MVisibility
	do
		var mvisibility = public_visibility
		if nvisibility != null then
			mvisibility = nvisibility.mvisibility
			if mvisibility == intrude_visibility then
				modelbuilder.error(nvisibility, "Error: intrude is not a legal visibility for properties.")
				mvisibility = public_visibility
			end
		end
		if mclassdef.mclass.visibility == private_visibility then
			if mvisibility == protected_visibility then
				assert nvisibility != null
				modelbuilder.error(nvisibility, "Error: The only legal visibility for properties in a private class is private.")
			else if mvisibility == private_visibility then
				assert nvisibility != null
				# Not yet
				# modelbuilder.warning(nvisibility, "Warning: private is unrequired since the only legal visibility for properties in a private class is private.")
			end
			mvisibility = private_visibility
		end
		return mvisibility
	end

	private fun set_doc(mpropdef: MPropDef)
	do
		var ndoc = self.n_doc
		if ndoc != null then
			var mdoc = ndoc.to_mdoc
			mpropdef.mdoc = mdoc
			mdoc.original_mentity = mpropdef
		end
	end

	private fun check_redef_property_visibility(modelbuilder: ModelBuilder, nvisibility: nullable AVisibility, mprop: MProperty)
	do
		if nvisibility == null then return
		var mvisibility = nvisibility.mvisibility
		if mvisibility != mprop.visibility and mvisibility != public_visibility then
				modelbuilder.error(nvisibility, "Error: redefinition changed the visibility from a {mprop.visibility} to a {mvisibility}")
		end
	end

	private fun check_redef_keyword(modelbuilder: ModelBuilder, mclassdef: MClassDef, kwredef: nullable Token, need_redef: Bool, mprop: MProperty): Bool
	do
		if mclassdef.mprop2npropdef.has_key(mprop) then
			modelbuilder.error(self, "Error: A property {mprop} is already defined in class {mclassdef.mclass} at line {mclassdef.mprop2npropdef[mprop].location.line_start}.")
			return false
		end
		if mprop isa MMethod and mprop.is_toplevel != (parent isa ATopClassdef) then
			if mprop.is_toplevel then
				modelbuilder.error(self, "Error: {mprop} is a top level method.")
			else
				modelbuilder.error(self, "Error: {mprop} is not a top level method.")
			end
			return false

		end
		if kwredef == null then
			if need_redef then
				modelbuilder.error(self, "Redef error: {mclassdef.mclass}::{mprop.name} is an inherited property. To redefine it, add the redef keyword.")
				return false
			end
		else
			if not need_redef then
				modelbuilder.error(self, "Error: No property {mclassdef.mclass}::{mprop.name} is inherited. Remove the redef keyword to define a new property.")
				return false
			end
		end
		return true
	end

end

redef class ASignature
	# Is the model builder has correctly visited the signature
	var is_visited = false
	# Names of parameters from the AST
	# REQUIRE: is_visited
	var param_names = new Array[String]
	# Types of parameters from the AST
	# REQUIRE: is_visited
	var param_types = new Array[MType]
	# Rank of the vararg (of -1 if none)
	# REQUIRE: is_visited
	var vararg_rank: Int = -1
	# Return type
	var ret_type: nullable MType = null

	# Visit and fill information about a signature
	private fun visit_signature(modelbuilder: ModelBuilder, mclassdef: MClassDef): Bool
	do
		var mmodule = mclassdef.mmodule
		var param_names = self.param_names
		var param_types = self.param_types
		for np in self.n_params do
			param_names.add(np.n_id.text)
			var ntype = np.n_type
			if ntype != null then
				var mtype = modelbuilder.resolve_mtype(mmodule, mclassdef, ntype)
				if mtype == null then return false # Skip error
				for i in [0..param_names.length-param_types.length[ do
					param_types.add(mtype)
				end
				if np.n_dotdotdot != null then
					if self.vararg_rank != -1 then
						modelbuilder.error(np, "Error: {param_names[self.vararg_rank]} is already a vararg")
						return false
					else
						self.vararg_rank = param_names.length - 1
					end
				end
			end
		end
		var ntype = self.n_type
		if ntype != null then
			self.ret_type = modelbuilder.resolve_mtype(mmodule, mclassdef, ntype)
			if self.ret_type == null then return false # Skip errir
		end

		self.is_visited = true
		return true
	end

	# Build a visited signature
	fun build_signature(modelbuilder: ModelBuilder): nullable MSignature
	do
		if param_names.length != param_types.length then
			# Some parameters are typed, other parameters are not typed.
			modelbuilder.error(self.n_params[param_types.length], "Error: Untyped parameter `{param_names[param_types.length]}'.")
			return null
		end

		var mparameters = new Array[MParameter]
		for i in [0..param_names.length[ do
			var mparameter = new MParameter(param_names[i], param_types[i], i == vararg_rank)
			self.n_params[i].mparameter = mparameter
			mparameters.add(mparameter)
		end

		var msignature = new MSignature(mparameters, ret_type)
		return msignature
	end
end

redef class AParam
	# The associated mparameter if any
	var mparameter: nullable MParameter = null
end

redef class AMethPropdef
	redef type MPROPDEF: MMethodDef

	redef fun build_property(modelbuilder, mclassdef)
	do
		var n_kwinit = n_kwinit
		var n_kwnew = n_kwnew
		var is_init = n_kwinit != null or n_kwnew != null
		var name: String
		var amethodid = self.n_methid
		var name_node: ANode
		if amethodid == null then
			if not is_init then
				name = "main"
				name_node = self
			else if n_kwinit != null then
				name = "init"
				name_node = n_kwinit
			else if n_kwnew != null then
				name = "init"
				name_node = n_kwnew
			else
				abort
			end
		else if amethodid isa AIdMethid then
			name = amethodid.n_id.text
			name_node = amethodid
		else
			# operator, bracket or assign
			name = amethodid.collect_text
			name_node = amethodid

			if name == "-" and self.n_signature.n_params.length == 0 then
				name = "unary -"
			end
		end

		var mprop: nullable MMethod = null
		if not is_init or n_kwredef != null then mprop = modelbuilder.try_get_mproperty_by_name(name_node, mclassdef, name).as(nullable MMethod)
		if mprop == null then
			var mvisibility = new_property_visibility(modelbuilder, mclassdef, self.n_visibility)
			mprop = new MMethod(mclassdef, name, mvisibility)
			mprop.is_init = is_init
			mprop.is_new = n_kwnew != null
			if parent isa ATopClassdef then mprop.is_toplevel = true
			if not self.check_redef_keyword(modelbuilder, mclassdef, n_kwredef, false, mprop) then return
		else
			if not self.check_redef_keyword(modelbuilder, mclassdef, n_kwredef, not self isa AMainMethPropdef, mprop) then return
			check_redef_property_visibility(modelbuilder, self.n_visibility, mprop)
		end
		mclassdef.mprop2npropdef[mprop] = self

		var mpropdef = new MMethodDef(mclassdef, mprop, self.location)

		set_doc(mpropdef)

		self.mpropdef = mpropdef
		modelbuilder.mpropdef2npropdef[mpropdef] = self
		if mpropdef.is_intro then
			modelbuilder.toolcontext.info("{mpropdef} introduces new method {mprop.full_name}", 3)
		else
			modelbuilder.toolcontext.info("{mpropdef} redefines method {mprop.full_name}", 3)
		end
	end

	redef fun build_signature(modelbuilder)
	do
		var mpropdef = self.mpropdef
		if mpropdef == null then return # Error thus skiped
		var mclassdef = mpropdef.mclassdef
		var mmodule = mclassdef.mmodule
		var nsig = self.n_signature

		# Retrieve info from the signature AST
		var param_names = new Array[String] # Names of parameters from the AST
		var param_types = new Array[MType] # Types of parameters from the AST
		var vararg_rank = -1
		var ret_type: nullable MType = null # Return type from the AST
		if nsig != null then
			if not nsig.visit_signature(modelbuilder, mclassdef) then return
			param_names = nsig.param_names
			param_types = nsig.param_types
			vararg_rank = nsig.vararg_rank
			ret_type = nsig.ret_type
		end

		# Look for some signature to inherit
		# FIXME: do not inherit from the intro, but from the most specific
		var msignature: nullable MSignature = null
		if not mpropdef.is_intro then
			msignature = mpropdef.mproperty.intro.msignature
			if msignature == null then return # Skip error

			# Check inherited signature arity
			if param_names.length != msignature.arity then
				var node: ANode
				if nsig != null then node = nsig else node = self
				modelbuilder.error(node, "Redef error: {mpropdef} redefines {mpropdef.mproperty.intro} with {param_names.length} parameter(s), {msignature.arity} expected. Signature is {mpropdef}{msignature}")
				return
			end
		else if mpropdef.mproperty.is_init then
			# FIXME UGLY: inherit signature from a super-constructor
			for msupertype in mclassdef.supertypes do
				msupertype = msupertype.anchor_to(mmodule, mclassdef.bound_mtype)
				var candidate = modelbuilder.try_get_mproperty_by_name2(self, mmodule, msupertype, mpropdef.mproperty.name)
				if candidate != null then
					if msignature == null then
						msignature = candidate.intro.as(MMethodDef).msignature
					end
				end
			end
		end


		# Inherit the signature
		if msignature != null and param_names.length != param_types.length and param_names.length == msignature.arity and param_types.length == 0 then
			# Parameters are untyped, thus inherit them
			param_types = new Array[MType]
			for mparameter in msignature.mparameters do
				param_types.add(mparameter.mtype)
			end
			vararg_rank = msignature.vararg_rank
		end
		if msignature != null and ret_type == null then
			ret_type = msignature.return_mtype
		end

		if param_names.length != param_types.length then
			# Some parameters are typed, other parameters are not typed.
			modelbuilder.error(nsig.n_params[param_types.length], "Error: Untyped parameter `{param_names[param_types.length]}'.")
			return
		end

		var mparameters = new Array[MParameter]
		for i in [0..param_names.length[ do
			var mparameter = new MParameter(param_names[i], param_types[i], i == vararg_rank)
			if nsig != null then nsig.n_params[i].mparameter = mparameter
			mparameters.add(mparameter)
		end

		msignature = new MSignature(mparameters, ret_type)
		mpropdef.msignature = msignature
		mpropdef.is_abstract = self isa ADeferredMethPropdef
		mpropdef.is_intern = self isa AInternMethPropdef
		mpropdef.is_extern = self isa AExternPropdef
	end

	redef fun check_signature(modelbuilder)
	do
		var mpropdef = self.mpropdef
		if mpropdef == null then return # Error thus skiped
		var mclassdef = mpropdef.mclassdef
		var mmodule = mclassdef.mmodule
		var nsig = self.n_signature
		var mysignature = self.mpropdef.msignature
		if mysignature == null then return # Error thus skiped

		# Lookup for signature in the precursor
		# FIXME all precursors should be considered
		if not mpropdef.is_intro then
			var msignature = mpropdef.mproperty.intro.msignature
			if msignature == null then return

			var precursor_ret_type = msignature.return_mtype
			var ret_type = mysignature.return_mtype
			if ret_type != null and precursor_ret_type == null then
				modelbuilder.error(nsig.n_type.as(not null), "Redef Error: {mpropdef.mproperty} is a procedure, not a function.")
				return
			end

			if mysignature.arity > 0 then
				# Check parameters types
				for i in [0..mysignature.arity[ do
					var myt = mysignature.mparameters[i].mtype
					var prt = msignature.mparameters[i].mtype
					if not myt.is_subtype(mmodule, mclassdef.bound_mtype, prt) or
							not prt.is_subtype(mmodule, mclassdef.bound_mtype, myt) then
						modelbuilder.error(nsig.n_params[i], "Redef Error: Wrong type for parameter `{mysignature.mparameters[i].name}'. found {myt}, expected {prt} as in {mpropdef.mproperty.intro}.")
					end
				end
			end
			if precursor_ret_type != null then
				if ret_type == null then
					# Inherit the return type
					ret_type = precursor_ret_type
				else if not ret_type.is_subtype(mmodule, mclassdef.bound_mtype, precursor_ret_type) then
					modelbuilder.error(nsig.n_type.as(not null), "Redef Error: Wrong return type. found {ret_type}, expected {precursor_ret_type} as in {mpropdef.mproperty.intro}.")
				end
			end
		end

		if mysignature.arity > 0 then
			# Check parameters visibility
			for i in [0..mysignature.arity[ do
				var nt = nsig.n_params[i].n_type
				if nt != null then modelbuilder.check_visibility(nt, nt.mtype.as(not null), mpropdef)
			end
			var nt = nsig.n_type
			if nt != null then modelbuilder.check_visibility(nt, nt.mtype.as(not null), mpropdef)
		end
	end
end

redef class AAttrPropdef
	redef type MPROPDEF: MAttributeDef

	# The associated getter (read accessor) if any
	var mreadpropdef: nullable MMethodDef writable
	# The associated setter (write accessor) if any
	var mwritepropdef: nullable MMethodDef writable
	redef fun build_property(modelbuilder, mclassdef)
	do
		var mclass = mclassdef.mclass

		var name: String
		if self.n_id != null then
			name = self.n_id.text
		else
			name = self.n_id2.text
		end

		if mclass.kind == interface_kind or mclassdef.mclass.kind == enum_kind then
			modelbuilder.error(self, "Error: Attempt to define attribute {name} in the interface {mclass}.")
		else if mclass.kind == enum_kind then
			modelbuilder.error(self, "Error: Attempt to define attribute {name} in the enum class {mclass}.")
		else if mclass.kind == extern_kind then
			modelbuilder.error(self, "Error: Attempt to define attribute {name} in the extern class {mclass}.")
		end

		var nid = self.n_id
		if nid != null then
			# Old attribute style
			var mprop = modelbuilder.try_get_mproperty_by_name(nid, mclassdef, name)
			if mprop == null then
				var mvisibility = new_property_visibility(modelbuilder, mclassdef, self.n_visibility)
				mprop = new MAttribute(mclassdef, name, mvisibility)
				if not self.check_redef_keyword(modelbuilder, mclassdef, self.n_kwredef, false, mprop) then return
			else
				assert mprop isa MAttribute
				check_redef_property_visibility(modelbuilder, self.n_visibility, mprop)
				if not self.check_redef_keyword(modelbuilder, mclassdef, self.n_kwredef, true, mprop) then return
			end
			mclassdef.mprop2npropdef[mprop] = self

			var mpropdef = new MAttributeDef(mclassdef, mprop, self.location)
			self.mpropdef = mpropdef
			modelbuilder.mpropdef2npropdef[mpropdef] = self
			set_doc(mpropdef)

			var nreadable = self.n_readable
			if nreadable != null then modelbuilder.error(nreadable, "Error: old-style getter no more supported")
			var nwritable = self.n_writable
			if nwritable != null then modelbuilder.error(nwritable, "Error: old-style setter no more supported")
		else
			# New attribute style
			var nid2 = self.n_id2.as(not null)
			var mprop = new MAttribute(mclassdef, "@" + name, none_visibility)
			var mpropdef = new MAttributeDef(mclassdef, mprop, self.location)
			self.mpropdef = mpropdef
			modelbuilder.mpropdef2npropdef[mpropdef] = self
			set_doc(mpropdef)

			var readname = name
			var mreadprop = modelbuilder.try_get_mproperty_by_name(nid2, mclassdef, readname).as(nullable MMethod)
			if mreadprop == null then
				var mvisibility = new_property_visibility(modelbuilder, mclassdef, self.n_visibility)
				mreadprop = new MMethod(mclassdef, readname, mvisibility)
				if not self.check_redef_keyword(modelbuilder, mclassdef, n_kwredef, false, mreadprop) then return
			else
				if not self.check_redef_keyword(modelbuilder, mclassdef, n_kwredef, true, mreadprop) then return
				check_redef_property_visibility(modelbuilder, self.n_visibility, mreadprop)
			end
			mclassdef.mprop2npropdef[mreadprop] = self

			var mreadpropdef = new MMethodDef(mclassdef, mreadprop, self.location)
			self.mreadpropdef = mreadpropdef
			modelbuilder.mpropdef2npropdef[mreadpropdef] = self
			mreadpropdef.mdoc = mpropdef.mdoc

			var writename = name + "="
			var nwritable = self.n_writable
			var mwriteprop = modelbuilder.try_get_mproperty_by_name(nid2, mclassdef, writename).as(nullable MMethod)
			var nwkwredef: nullable Token = null
			if nwritable != null then nwkwredef = nwritable.n_kwredef
			if mwriteprop == null then
				var mvisibility
				if nwritable != null then
					mvisibility = new_property_visibility(modelbuilder, mclassdef, nwritable.n_visibility)
				else
					mvisibility = private_visibility
				end
				mwriteprop = new MMethod(mclassdef, writename, mvisibility)
				if not self.check_redef_keyword(modelbuilder, mclassdef, nwkwredef, false, mwriteprop) then return
			else
				if not self.check_redef_keyword(modelbuilder, mclassdef, nwkwredef, true, mwriteprop) then return
				if nwritable != null then
					check_redef_property_visibility(modelbuilder, nwritable.n_visibility, mwriteprop)
				end
			end
			mclassdef.mprop2npropdef[mwriteprop] = self

			var mwritepropdef = new MMethodDef(mclassdef, mwriteprop, self.location)
			self.mwritepropdef = mwritepropdef
			modelbuilder.mpropdef2npropdef[mwritepropdef] = self
			mwritepropdef.mdoc = mpropdef.mdoc
		end
	end

	redef fun build_signature(modelbuilder)
	do
		var mpropdef = self.mpropdef
		if mpropdef == null then return # Error thus skiped
		var mclassdef = mpropdef.mclassdef
		var mmodule = mclassdef.mmodule
		var mtype: nullable MType = null

		var ntype = self.n_type
		if ntype != null then
			mtype = modelbuilder.resolve_mtype(mmodule, mclassdef, ntype)
			if mtype == null then return
		end

		var nexpr = self.n_expr
		if mtype == null then
			if nexpr != null then
				if nexpr isa ANewExpr then
					mtype = modelbuilder.resolve_mtype(mmodule, mclassdef, nexpr.n_type)
				else if nexpr isa AIntExpr then
					var cla = modelbuilder.try_get_mclass_by_name(nexpr, mmodule, "Int")
					if cla != null then mtype = cla.mclass_type
				else if nexpr isa AFloatExpr then
					var cla = modelbuilder.try_get_mclass_by_name(nexpr, mmodule, "Float")
					if cla != null then mtype = cla.mclass_type
				else if nexpr isa ACharExpr then
					var cla = modelbuilder.try_get_mclass_by_name(nexpr, mmodule, "Char")
					if cla != null then mtype = cla.mclass_type
				else if nexpr isa ABoolExpr then
					var cla = modelbuilder.try_get_mclass_by_name(nexpr, mmodule, "Bool")
					if cla != null then mtype = cla.mclass_type
				else if nexpr isa ASuperstringExpr then
					var cla = modelbuilder.try_get_mclass_by_name(nexpr, mmodule, "String")
					if cla != null then mtype = cla.mclass_type
				else if nexpr isa AStringFormExpr then
					var cla = modelbuilder.try_get_mclass_by_name(nexpr, mmodule, "String")
					if cla != null then mtype = cla.mclass_type
				else
					modelbuilder.error(self, "Error: Untyped attribute {mpropdef}. Implicit typing allowed only for literals and new.")
				end

			else
				modelbuilder.error(self, "Error: Untyped attribute {mpropdef}")
			end
		else
			assert ntype != null
			if nexpr isa ANewExpr then
				var xmtype = modelbuilder.resolve_mtype(mmodule, mclassdef, nexpr.n_type)
				if xmtype == mtype and modelbuilder.toolcontext.opt_warn.value >= 2 then
					modelbuilder.warning(ntype, "Warning: useless type definition")
				end
			end
		end

		if mtype == null then return

		mpropdef.static_mtype = mtype

		var mreadpropdef = self.mreadpropdef
		if mreadpropdef != null then
			var msignature = new MSignature(new Array[MParameter], mtype)
			mreadpropdef.msignature = msignature
		end

		var msritepropdef = self.mwritepropdef
		if mwritepropdef != null then
			var name: String
			if n_id != null then
				name = n_id.text.substring_from(1)
			else
				name = n_id2.text
			end
			var mparameter = new MParameter(name, mtype, false)
			var msignature = new MSignature([mparameter], null)
			mwritepropdef.msignature = msignature
		end
	end

	redef fun check_signature(modelbuilder)
	do
		var mpropdef = self.mpropdef
		if mpropdef == null then return # Error thus skiped
		var mclassdef = mpropdef.mclassdef
		var mmodule = mclassdef.mmodule
		var ntype = self.n_type
		var mtype = self.mpropdef.static_mtype
		if mtype == null then return # Error thus skiped

		# Lookup for signature in the precursor
		# FIXME all precursors should be considered
		if not mpropdef.is_intro then
			var precursor_type = mpropdef.mproperty.intro.static_mtype
			if precursor_type == null then return

			if mtype != precursor_type then
				modelbuilder.error(ntype.as(not null), "Redef Error: Wrong static type. found {mtype}, expected {precursor_type}.")
				return
			end
		end

		# Check getter and setter
		var meth = self.mreadpropdef
		if meth != null then
			self.check_method_signature(modelbuilder, meth)
			var node: nullable ANode = ntype
			if node == null then node = self
			modelbuilder.check_visibility(node, mtype, meth)
		end
		meth = self.mwritepropdef
		if meth != null then
			self.check_method_signature(modelbuilder, meth)
			var node: nullable ANode = ntype
			if node == null then node = self
			modelbuilder.check_visibility(node, mtype, meth)
		end
	end

	private fun check_method_signature(modelbuilder: ModelBuilder, mpropdef: MMethodDef)
	do
		var mclassdef = mpropdef.mclassdef
		var mmodule = mclassdef.mmodule
		var nsig = self.n_type
		var mysignature = mpropdef.msignature
		if mysignature == null then return # Error thus skiped

		# Lookup for signature in the precursor
		# FIXME all precursors should be considered
		if not mpropdef.is_intro then
			var msignature = mpropdef.mproperty.intro.msignature
			if msignature == null then return

			if mysignature.arity != msignature.arity then
				var node: ANode
				if nsig != null then node = nsig else node = self
				modelbuilder.error(node, "Redef Error: {mysignature.arity} parameters found, {msignature.arity} expected. Signature is {mpropdef}{msignature}")
				return
			end
			var precursor_ret_type = msignature.return_mtype
			var ret_type = mysignature.return_mtype
			if ret_type != null and precursor_ret_type == null then
				var node: ANode
				if nsig != null then node = nsig else node = self
				modelbuilder.error(node, "Redef Error: {mpropdef.mproperty} is a procedure, not a function.")
				return
			end

			if mysignature.arity > 0 then
				# Check parameters types
				for i in [0..mysignature.arity[ do
					var myt = mysignature.mparameters[i].mtype
					var prt = msignature.mparameters[i].mtype
					if not myt.is_subtype(mmodule, mclassdef.bound_mtype, prt) and
							not prt.is_subtype(mmodule, mclassdef.bound_mtype, myt) then
						var node: ANode
						if nsig != null then node = nsig else node = self
						modelbuilder.error(node, "Redef Error: Wrong type for parameter `{mysignature.mparameters[i].name}'. found {myt}, expected {prt}.")
					end
				end
			end
			if precursor_ret_type != null then
				if ret_type == null then
					# Inherit the return type
					ret_type = precursor_ret_type
				else if not ret_type.is_subtype(mmodule, mclassdef.bound_mtype, precursor_ret_type) then
					var node: ANode
					if nsig != null then node = nsig else node = self
					modelbuilder.error(node, "Redef Error: Wrong return type. found {ret_type}, expected {precursor_ret_type}.")
				end
			end
		end
	end
end

redef class ATypePropdef
	redef type MPROPDEF: MVirtualTypeDef

	redef fun build_property(modelbuilder, mclassdef)
	do
		var name = self.n_id.text
		var mprop = modelbuilder.try_get_mproperty_by_name(self.n_id, mclassdef, name)
		if mprop == null then
			var mvisibility = new_property_visibility(modelbuilder, mclassdef, self.n_visibility)
			mprop = new MVirtualTypeProp(mclassdef, name, mvisibility)
			for c in name.chars do if c >= 'a' and c<= 'z' then
				modelbuilder.warning(n_id, "Warning: lowercase in the virtual type {name}")
				break
			end
			if not self.check_redef_keyword(modelbuilder, mclassdef, self.n_kwredef, false, mprop) then return
		else
			if not self.check_redef_keyword(modelbuilder, mclassdef, self.n_kwredef, true, mprop) then return
			assert mprop isa MVirtualTypeProp
			check_redef_property_visibility(modelbuilder, self.n_visibility, mprop)
		end
		mclassdef.mprop2npropdef[mprop] = self

		var mpropdef = new MVirtualTypeDef(mclassdef, mprop, self.location)
		self.mpropdef = mpropdef
		modelbuilder.mpropdef2npropdef[mpropdef] = self
		set_doc(mpropdef)
	end

	redef fun build_signature(modelbuilder)
	do
		var mpropdef = self.mpropdef
		if mpropdef == null then return # Error thus skiped
		var mclassdef = mpropdef.mclassdef
		var mmodule = mclassdef.mmodule
		var mtype: nullable MType = null

		var ntype = self.n_type
		mtype = modelbuilder.resolve_mtype(mmodule, mclassdef, ntype)
		if mtype == null then return

		mpropdef.bound = mtype
		# print "{mpropdef}: {mtype}"
	end

	redef fun check_signature(modelbuilder)
	do
		var mpropdef = self.mpropdef
		if mpropdef == null then return # Error thus skiped

		var bound = self.mpropdef.bound
		if bound == null then return # Error thus skiped

		modelbuilder.check_visibility(n_type.as(not null), bound, mpropdef)

		# Fast case: the bound is not a formal type
		if not bound isa MVirtualType then return

		var mclassdef = mpropdef.mclassdef
		var mmodule = mclassdef.mmodule
		var anchor = mclassdef.bound_mtype

		# Slow case: progress on each resolution until: (i) we loop, or (ii) we found a non formal type
		var seen = [self.mpropdef.mproperty.mvirtualtype]
		loop
			if seen.has(bound) then
				seen.add(bound)
				modelbuilder.error(self, "Error: circularity of virtual type definition: {seen.join(" -> ")}")
				return
			end
			seen.add(bound)
			var next = bound.lookup_bound(mmodule, anchor)
			if not next isa MVirtualType then break
			bound = next
		end
	end
end
