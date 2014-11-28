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
private import annotation

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
	var mpropdef2npropdef = new HashMap[MPropDef, APropdef]

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

		mclassdef.build_self_type(self, nclassdef)
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

	# the root init of the Object class
	# Is usually implicitly defined
	# Then explicit or implicit definitions of root-init are attached to it
	var the_root_init_mmethod: nullable MMethod

	# Introduce or inherit default constructor
	# This is the last part of `build_properties`.
	private fun process_default_constructors(nclassdef: AClassdef)
	do
		var mclassdef = nclassdef.mclassdef.as(not null)

		# Are we a refinement
		if not mclassdef.is_intro then return

		# Look for the init in Object, or create it
		if mclassdef.mclass.name == "Object" and the_root_init_mmethod == null then
			# Create the implicit root-init method
			var mprop = new MMethod(mclassdef, "init", mclassdef.mclass.visibility)
			mprop.is_root_init = true
			var mpropdef = new MMethodDef(mclassdef, mprop, nclassdef.location)
			var mparameters = new Array[MParameter]
			var msignature = new MSignature(mparameters, null)
			mpropdef.msignature = msignature
			mpropdef.new_msignature = msignature
			mprop.is_init = true
			nclassdef.mfree_init = mpropdef
			self.toolcontext.info("{mclassdef} gets a free empty constructor {mpropdef}{msignature}", 3)
			the_root_init_mmethod = mprop
			return
		end

		# Is the class forbid constructors?
		if not mclassdef.mclass.kind.need_init then return

		# Is there already a constructor defined?
		var defined_init: nullable MMethodDef = null
		for mpropdef in mclassdef.mpropdefs do
			if not mpropdef isa MMethodDef then continue
			if not mpropdef.mproperty.is_init then continue
			if mpropdef.mproperty.is_root_init then
				assert defined_init == null
				defined_init = mpropdef
			else if mpropdef.mproperty.name == "init" then
				# An explicit old-style init named "init", so return
				return
			end
		end

		if not nclassdef isa AStdClassdef then return

		# Collect undefined attributes
		var mparameters = new Array[MParameter]
		var initializers = new Array[MProperty]
		for npropdef in nclassdef.n_propdefs do
			if npropdef isa AMethPropdef then
				if npropdef.mpropdef == null then return # Skip broken attribute
				var at = npropdef.get_single_annotation("autoinit", self)
				if at == null then continue # Skip non tagged init

				var sig = npropdef.mpropdef.msignature
				if sig == null then continue # Skip broken method

				if not npropdef.mpropdef.is_intro then
					self.error(at, "Error: `autoinit` cannot be set on redefinitions")
					continue
				end

				for param in sig.mparameters do
					var ret_type = param.mtype
					var mparameter = new MParameter(param.name, ret_type, false)
					mparameters.add(mparameter)
				end
				initializers.add(npropdef.mpropdef.mproperty)
			end
			if npropdef isa AAttrPropdef then
				if npropdef.mpropdef == null then return # Skip broken attribute
				if npropdef.noinit then continue # Skip noinit attribute
				var atautoinit = npropdef.get_single_annotation("autoinit", self)
				if atautoinit != null then
					# For autoinit attributes, call the reader to force
					# the lazy initialization of the attribute.
					initializers.add(npropdef.mreadpropdef.mproperty)
					continue
				end
				if npropdef.has_value then continue
				var paramname = npropdef.mpropdef.mproperty.name.substring_from(1)
				var ret_type = npropdef.mpropdef.static_mtype
				if ret_type == null then return
				var mparameter = new MParameter(paramname, ret_type, false)
				mparameters.add(mparameter)
				var msetter = npropdef.mwritepropdef
				if msetter == null then
					# No setter, it is a old-style attribute, so just add it
					initializers.add(npropdef.mpropdef.mproperty)
				else
					# Add the setter to the list
					initializers.add(msetter.mproperty)
				end
			end
		end

		if the_root_init_mmethod == null then return

		# Look for most-specific new-stype init definitions
		var spropdefs = the_root_init_mmethod.lookup_super_definitions(mclassdef.mmodule, mclassdef.bound_mtype)
		if spropdefs.is_empty then
			toolcontext.fatal_error(nclassdef.location, "Fatal error: {mclassdef} does not specialize {the_root_init_mmethod.intro_mclassdef}. Possible duplication of the root class `Object`?")
		end

		# Search the longest-one and checks for conflict
		var longest = spropdefs.first
		if spropdefs.length > 1 then
			# Check for conflict in the order of initializers
			# Each initializer list must me a prefix of the longest list
			# part 1. find the longest list
			for spd in spropdefs do
				if spd.initializers.length > longest.initializers.length then longest = spd
			end
			# part 2. compare
			for spd in spropdefs do
				var i = 0
				for p in spd.initializers do
					if p != longest.initializers[i] then
						self.error(nclassdef, "Error: conflict for inherited inits {spd}({spd.initializers.join(", ")}) and {longest}({longest.initializers.join(", ")})")
						return
					end
					i += 1
				end
			end
		end

		# Can we just inherit?
		if spropdefs.length == 1 and mparameters.is_empty and defined_init == null then
			self.toolcontext.info("{mclassdef} inherits the basic constructor {longest}", 3)
			mclassdef.mclass.root_init = longest
			return
		end

		# Combine the inherited list to what is collected
		if longest.initializers.length > 0 then
			mparameters.prepend longest.new_msignature.mparameters
			initializers.prepend longest.initializers
		end

		# If we already have a basic init definition, then setup its initializers
		if defined_init != null then
			defined_init.initializers.add_all(initializers)
			var msignature = new MSignature(mparameters, null)
			defined_init.new_msignature = msignature
			self.toolcontext.info("{mclassdef} extends its basic constructor signature to {defined_init}{msignature}", 3)
			mclassdef.mclass.root_init = defined_init
			return
		end

		# Else create the local implicit basic init definition
		var mprop = the_root_init_mmethod.as(not null)
		var mpropdef = new MMethodDef(mclassdef, mprop, nclassdef.location)
		mpropdef.has_supercall = true
		mpropdef.initializers.add_all(initializers)
		var msignature = new MSignature(mparameters, null)
		mpropdef.new_msignature = msignature
		mpropdef.msignature = new MSignature(new Array[MParameter], null) # always an empty real signature
		nclassdef.mfree_init = mpropdef
		self.toolcontext.info("{mclassdef} gets a free constructor for attributes {mpropdef}{msignature}", 3)
		mclassdef.mclass.root_init = mpropdef
	end

	# Check the visibility of `mtype` as an element of the signature of `mpropdef`.
	fun check_visibility(node: ANode, mtype: MType, mpropdef: MPropDef)
	do
		var mmodule = mpropdef.mclassdef.mmodule
		var mproperty = mpropdef.mproperty

		# Extract visibility information of the main part of `mtype`
		# It is a case-by case
		var vis_type: nullable MVisibility = null # The own visibility of the type
		var mmodule_type: nullable MModule = null # The original module of the type
		mtype = mtype.as_notnullable
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
			for a in node.n_types do
				var t = a.mtype
				if t == null then continue # Error, thus skipped
				check_visibility(a, t, mpropdef)
			end
		else if mtype isa MGenericType then
			for t in mtype.arguments do check_visibility(node, t, mpropdef)
		end
	end
end

redef class MPropDef
	# Does the MPropDef contains a call to super or a call of a super-constructor?
	# Subsequent phases of the frontend (esp. typing) set it if required
	var has_supercall: Bool = false is writable
end

redef class AClassdef
	var build_properties_is_done = false

	# The free init (implicitely constructed by the class if required)
	var mfree_init: nullable MMethodDef = null
end

redef class MClass
	# The base init of the class.
	# Used to get the common new_msignature and initializers
	#
	# TODO: Where to put this information is not clear because unlike other
	# informations, the initialisers are stable in a same class.
	var root_init: nullable MMethodDef = null
end

redef class MClassDef
	# What is the `APropdef` associated to a `MProperty`?
	# Used to check multiple definition of a property.
	var mprop2npropdef: Map[MProperty, APropdef] = new HashMap[MProperty, APropdef]

	# Build the virtual type `SELF` only for introduction `MClassDef`
	fun build_self_type(modelbuilder: ModelBuilder, nclassdef: AClassdef)
	do
		if not is_intro then return

		var name = "SELF"
		var mprop = modelbuilder.try_get_mproperty_by_name(nclassdef, self, name)

		# If SELF type is declared nowherer?
		if mprop == null then return

		# SELF is not a virtual type? it is weird but we ignore it
		if not mprop isa MVirtualTypeProp then return

		# Is this the intro of SELF in the library?
		var intro = mprop.intro
		var intro_mclassdef = intro.mclassdef
		if intro_mclassdef == self then
			var nintro = modelbuilder.mpropdef2npropdef[intro]

			# SELF must be declared in Object, otherwise this will create conflicts
			if intro_mclassdef.mclass.name != "Object" then
				modelbuilder.error(nintro, "Error: the virtual type SELF must be declared in Object.")
			end

			# SELF must be public
			if mprop.visibility != public_visibility then
				modelbuilder.error(nintro, "Error: the virtual type SELF must be public.")
			end

			# SELF must not be fixed
			if intro.is_fixed then
				modelbuilder.error(nintro, "Error: the virtual type SELF cannot be fixed.")
			end

			return
		end

		# This class introduction inherits a SELF
		# We insert an artificial property to update it
		var mpropdef = new MVirtualTypeDef(self, mprop, self.location)
		mpropdef.bound = mclass.mclass_type
	end
end

redef class APropdef
	# The associated main model entity
	type MPROPDEF: MPropDef

	# The associated propdef once build by a `ModelBuilder`
	var mpropdef: nullable MPROPDEF is writable

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
				modelbuilder.advice(nvisibility, "useless-visibility", "Warning: private is superfluous since the only legal visibility for properties in a private class is private.")
			end
			mvisibility = private_visibility
		end
		return mvisibility
	end

	private fun set_doc(mpropdef: MPropDef, modelbuilder: ModelBuilder)
	do
		var ndoc = self.n_doc
		if ndoc != null then
			var mdoc = ndoc.to_mdoc
			mpropdef.mdoc = mdoc
			mdoc.original_mentity = mpropdef
		else if mpropdef.is_intro and mpropdef.mproperty.visibility >= protected_visibility then
			modelbuilder.advice(self, "missing-doc", "Documentation warning: Undocumented property `{mpropdef.mproperty}`")
		end

		var at_deprecated = get_single_annotation("deprecated", modelbuilder)
		if at_deprecated != null then
			if not mpropdef.is_intro then
				modelbuilder.error(self, "Error: method redefinition cannot be deprecated.")
			else
				var info = new MDeprecationInfo
				ndoc = at_deprecated.n_doc
				if ndoc != null then info.mdoc = ndoc.to_mdoc
				mpropdef.mproperty.deprecation = info
			end
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
			if self.ret_type == null then return false # Skip error
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


	# Can self be used as a root init?
	private fun look_like_a_root_init(modelbuilder: ModelBuilder, mclassdef: MClassDef): Bool
	do
		# Need the `init` keyword
		if n_kwinit == null then return false
		# Need to by anonymous
		if self.n_methid != null then return false
		# No annotation on itself
		if get_single_annotation("old_style_init", modelbuilder) != null then return false
		# Nor on its module
		var amod = self.parent.parent.as(AModule)
		var amoddecl = amod.n_moduledecl
		if amoddecl != null then
			var old = amoddecl.get_single_annotation("old_style_init", modelbuilder)
			if old != null then return false
		end
		# No parameters
		if self.n_signature.n_params.length > 0 then
			modelbuilder.advice(self, "old-init", "Warning: init with signature in {mclassdef}")
			return false
		end
		# Cannot be private or something
		if not self.n_visibility isa APublicVisibility then
			modelbuilder.advice(self, "old-init", "Warning: non-public init in {mclassdef}")
			return false
		end

		return true
	end

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
				name = "new"
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

		var look_like_a_root_init = look_like_a_root_init(modelbuilder, mclassdef)
		var mprop: nullable MMethod = null
		if not is_init or n_kwredef != null then mprop = modelbuilder.try_get_mproperty_by_name(name_node, mclassdef, name).as(nullable MMethod)
		if mprop == null and look_like_a_root_init then
			mprop = modelbuilder.the_root_init_mmethod
			var nb = n_block
			if nb isa ABlockExpr and nb.n_expr.is_empty and n_doc == null then
				modelbuilder.advice(self, "useless-init", "Warning: useless empty init in {mclassdef}")
			end
		end
		if mprop == null then
			var mvisibility = new_property_visibility(modelbuilder, mclassdef, self.n_visibility)
			mprop = new MMethod(mclassdef, name, mvisibility)
			if look_like_a_root_init and modelbuilder.the_root_init_mmethod == null then
				modelbuilder.the_root_init_mmethod = mprop
				mprop.is_root_init = true
			end
			mprop.is_init = is_init
			mprop.is_new = n_kwnew != null
			if parent isa ATopClassdef then mprop.is_toplevel = true
			if not self.check_redef_keyword(modelbuilder, mclassdef, n_kwredef, false, mprop) then return
		else
			if not mprop.is_root_init and not self.check_redef_keyword(modelbuilder, mclassdef, n_kwredef, not self isa AMainMethPropdef, mprop) then return
			check_redef_property_visibility(modelbuilder, self.n_visibility, mprop)
		end
		mclassdef.mprop2npropdef[mprop] = self

		var mpropdef = new MMethodDef(mclassdef, mprop, self.location)

		set_doc(mpropdef, modelbuilder)

		self.mpropdef = mpropdef
		modelbuilder.mpropdef2npropdef[mpropdef] = self
		if mpropdef.is_intro then
			modelbuilder.toolcontext.info("{mpropdef} introduces new method {mprop.full_name}", 4)
		else
			modelbuilder.toolcontext.info("{mpropdef} redefines method {mprop.full_name}", 4)
		end
	end

	redef fun build_signature(modelbuilder)
	do
		var mpropdef = self.mpropdef
		if mpropdef == null then return # Error thus skiped
		var mclassdef = mpropdef.mclassdef
		var mmodule = mclassdef.mmodule
		var nsig = self.n_signature

		if mpropdef.mproperty.is_root_init and not mclassdef.is_intro then
			var root_init = mclassdef.mclass.root_init
			if root_init != null then
				# Inherit the initializers by refinement
				mpropdef.new_msignature = root_init.new_msignature
				assert mpropdef.initializers.is_empty
				mpropdef.initializers.add_all root_init.initializers
			end
		end

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
		else if mpropdef.mproperty.is_init and not mpropdef.mproperty.is_new then
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

		# In `new`-factories, the return type is by default the classtype.
		if ret_type == null and mpropdef.mproperty.is_new then ret_type = mclassdef.mclass.mclass_type

		msignature = new MSignature(mparameters, ret_type)
		mpropdef.msignature = msignature
		mpropdef.is_abstract = self.get_single_annotation("abstract", modelbuilder) != null
		mpropdef.is_intern = self.get_single_annotation("intern", modelbuilder) != null
		mpropdef.is_extern = self.n_extern_code_block != null or self.get_single_annotation("extern", modelbuilder) != null
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

	# Is the node tagged `noinit`?
	var noinit = false

	# Is the node tagged lazy?
	var is_lazy = false

	# Has the node a default value?
	# Could be through `n_expr` or `n_block`
	var has_value = false

	# The guard associated to a lazy attribute.
	# Because some engines does not have a working `isset`,
	# this additional attribute is used to guard the lazy initialization.
	# TODO: to remove once isset is correctly implemented
	var mlazypropdef: nullable MAttributeDef

	# The associated getter (read accessor) if any
	var mreadpropdef: nullable MMethodDef is writable
	# The associated setter (write accessor) if any
	var mwritepropdef: nullable MMethodDef is writable

	redef fun build_property(modelbuilder, mclassdef)
	do
		var mclass = mclassdef.mclass

		var name: String
		name = self.n_id2.text

		if mclass.kind == interface_kind or mclassdef.mclass.kind == enum_kind then
			modelbuilder.error(self, "Error: Attempt to define attribute {name} in the interface {mclass}.")
		else if mclass.kind == enum_kind then
			modelbuilder.error(self, "Error: Attempt to define attribute {name} in the enum class {mclass}.")
		else if mclass.kind == extern_kind then
			modelbuilder.error(self, "Error: Attempt to define attribute {name} in the extern class {mclass}.")
		end

		# New attribute style
		var nid2 = self.n_id2
		var mprop = new MAttribute(mclassdef, "_" + name, private_visibility)
		var mpropdef = new MAttributeDef(mclassdef, mprop, self.location)
		self.mpropdef = mpropdef
		modelbuilder.mpropdef2npropdef[mpropdef] = self

		var readname = name
		var mreadprop = modelbuilder.try_get_mproperty_by_name(nid2, mclassdef, readname).as(nullable MMethod)
		if mreadprop == null then
			var mvisibility = new_property_visibility(modelbuilder, mclassdef, self.n_visibility)
			mreadprop = new MMethod(mclassdef, readname, mvisibility)
			if not self.check_redef_keyword(modelbuilder, mclassdef, n_kwredef, false, mreadprop) then return
			mreadprop.deprecation = mprop.deprecation
		else
			if not self.check_redef_keyword(modelbuilder, mclassdef, n_kwredef, true, mreadprop) then return
			check_redef_property_visibility(modelbuilder, self.n_visibility, mreadprop)
		end
		mclassdef.mprop2npropdef[mreadprop] = self

		var mreadpropdef = new MMethodDef(mclassdef, mreadprop, self.location)
		self.mreadpropdef = mreadpropdef
		modelbuilder.mpropdef2npropdef[mreadpropdef] = self
		set_doc(mreadpropdef, modelbuilder)
		mpropdef.mdoc = mreadpropdef.mdoc

		has_value = n_expr != null or n_block != null

		var atnoinit = self.get_single_annotation("noinit", modelbuilder)
		if atnoinit != null then
			noinit = true
			if has_value then
				modelbuilder.error(atnoinit, "Error: `noinit` attributes cannot have an initial value")
				return
			end
		end

		var atlazy = self.get_single_annotation("lazy", modelbuilder)
		var atautoinit = self.get_single_annotation("autoinit", modelbuilder)
		if atlazy != null or atautoinit != null then
			if atlazy != null and atautoinit != null then
				modelbuilder.error(atlazy, "Error: lazy incompatible with autoinit")
				return
			end
			if not has_value then
				if atlazy != null then
					modelbuilder.error(atlazy, "Error: a lazy attribute needs a value")
				else if atautoinit != null then
					modelbuilder.error(atautoinit, "Error: a autoinit attribute needs a value")
				end
				return
			end
			is_lazy = true
			var mlazyprop = new MAttribute(mclassdef, "lazy _" + name, none_visibility)
			var mlazypropdef = new MAttributeDef(mclassdef, mlazyprop, self.location)
			self.mlazypropdef = mlazypropdef
		end

		var atreadonly = self.get_single_annotation("readonly", modelbuilder)
		if atreadonly != null then
			if not has_value then
				modelbuilder.error(atreadonly, "Error: a readonly attribute needs a value")
			end
			# No setter, so just leave
			return
		end

		var writename = name + "="
		var atwritable = self.get_single_annotation("writable", modelbuilder)
		if atwritable != null then
			if not atwritable.n_args.is_empty then
				writename = atwritable.arg_as_id(modelbuilder) or else writename
			end
		end
		var mwriteprop = modelbuilder.try_get_mproperty_by_name(nid2, mclassdef, writename).as(nullable MMethod)
		var nwkwredef: nullable Token = null
		if atwritable != null then nwkwredef = atwritable.n_kwredef
		if mwriteprop == null then
			var mvisibility
			if atwritable != null then
				mvisibility = new_property_visibility(modelbuilder, mclassdef, atwritable.n_visibility)
			else
				mvisibility = private_visibility
			end
			mwriteprop = new MMethod(mclassdef, writename, mvisibility)
			if not self.check_redef_keyword(modelbuilder, mclassdef, nwkwredef, false, mwriteprop) then return
			mwriteprop.deprecation = mprop.deprecation
		else
			if not self.check_redef_keyword(modelbuilder, mclassdef, nwkwredef or else n_kwredef, true, mwriteprop) then return
			if atwritable != null then
				check_redef_property_visibility(modelbuilder, atwritable.n_visibility, mwriteprop)
			end
		end
		mclassdef.mprop2npropdef[mwriteprop] = self

		var mwritepropdef = new MMethodDef(mclassdef, mwriteprop, self.location)
		self.mwritepropdef = mwritepropdef
		modelbuilder.mpropdef2npropdef[mwritepropdef] = self
		mwritepropdef.mdoc = mpropdef.mdoc
	end

	redef fun build_signature(modelbuilder)
	do
		var mpropdef = self.mpropdef
		if mpropdef == null then return # Error thus skipped
		var mclassdef = mpropdef.mclassdef
		var mmodule = mclassdef.mmodule
		var mtype: nullable MType = null

		var mreadpropdef = self.mreadpropdef

		var ntype = self.n_type
		if ntype != null then
			mtype = modelbuilder.resolve_mtype(mmodule, mclassdef, ntype)
			if mtype == null then return
		end

		var inherited_type: nullable MType = null
		# Inherit the type from the getter (usually an abstract getter)
		if mreadpropdef != null and not mreadpropdef.is_intro then
			var msignature = mreadpropdef.mproperty.intro.msignature
			if msignature == null then return # Error, thus skipped
			inherited_type = msignature.return_mtype
			if mtype == null then mtype = inherited_type
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

				if mtype == null then return
			end
		else if ntype != null and inherited_type == mtype then
			if nexpr isa ANewExpr then
				var xmtype = modelbuilder.resolve_mtype(mmodule, mclassdef, nexpr.n_type)
				if xmtype == mtype then
					modelbuilder.advice(ntype, "useless-type", "Warning: useless type definition")
				end
			end
		end

		if mtype == null then
			modelbuilder.error(self, "Error: Untyped attribute {mpropdef}")
			return
		end

		mpropdef.static_mtype = mtype

		if mreadpropdef != null then
			var msignature = new MSignature(new Array[MParameter], mtype)
			mreadpropdef.msignature = msignature
		end

		var mwritepropdef = self.mwritepropdef
		if mwritepropdef != null then
			var name: String
			name = n_id2.text
			var mparameter = new MParameter(name, mtype, false)
			var msignature = new MSignature([mparameter], null)
			mwritepropdef.msignature = msignature
		end

		var mlazypropdef = self.mlazypropdef
		if mlazypropdef != null then
			mlazypropdef.static_mtype = modelbuilder.model.get_mclasses_by_name("Bool").first.mclass_type
		end
	end

	redef fun check_signature(modelbuilder)
	do
		var mpropdef = self.mpropdef
		if mpropdef == null then return # Error thus skipped
		var ntype = self.n_type
		var mtype = self.mpropdef.static_mtype
		if mtype == null then return # Error thus skipped

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
					if not myt.is_subtype(mmodule, mclassdef.bound_mtype, prt) or
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
				modelbuilder.warning(n_id, "bad-type-name", "Warning: lowercase in the virtual type {name}")
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
		set_doc(mpropdef, modelbuilder)

		var atfixed = get_single_annotation("fixed", modelbuilder)
		if atfixed != null then
			mpropdef.is_fixed = true
		end
	end

	redef fun build_signature(modelbuilder)
	do
		var mpropdef = self.mpropdef
		if mpropdef == null then return # Error thus skipped
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
		if mpropdef == null then return # Error thus skipped

		var bound = self.mpropdef.bound
		if bound == null then return # Error thus skipped

		modelbuilder.check_visibility(n_type, bound, mpropdef)

		var mclassdef = mpropdef.mclassdef
		var mmodule = mclassdef.mmodule
		var anchor = mclassdef.bound_mtype

		# Check circularity
		if bound isa MVirtualType then
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

		# Check redefinitions
		bound = mpropdef.bound.as(not null)
		for p in mpropdef.mproperty.lookup_super_definitions(mmodule, anchor) do
			var supbound = p.bound.as(not null)
			if p.is_fixed then
				modelbuilder.error(self, "Redef Error: Virtual type {mpropdef.mproperty} is fixed in super-class {p.mclassdef.mclass}")
				break
			end
			if p.mclassdef.mclass == mclassdef.mclass then
				# Still a warning to pass existing bad code
				modelbuilder.warning(n_type, "refine-type", "Redef Error: a virtual type cannot be refined.")
				break
			end
			if not bound.is_subtype(mmodule, anchor, supbound) then
				modelbuilder.error(n_type, "Redef Error: Wrong bound type. Found {bound}, expected a subtype of {supbound}, as in {p}.")
				break
			end
		end
	end
end
