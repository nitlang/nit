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

intrude import modelize_class
private import annotation

redef class ToolContext
	# Run `AClassdef::build_property` on the classdefs of each module
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
	# Registration of the npropdef associated to each mpropdef.
	#
	# Public clients need to use `mpropdef2node` to access stuff.
	private var mpropdef2npropdef = new HashMap[MPropDef, APropdef]

	# Associate a `npropdef` with its `mpropdef`
	#
	# Be careful, this method is unsafe, no checking is done when it's used.
	# The safe way to add method it's to use the `build_property`
	#
	# See `mpropdef2npropdef`
	fun unsafe_add_mpropdef2npropdef(mpropdef: MPropDef,npropdef: APropdef)
	do
		mpropdef2npropdef[mpropdef] = npropdef
	end

	# Retrieve the associated AST node of a mpropertydef.
	# This method is used to associate model entity with syntactic entities.
	#
	# If the property definition is not associated with a node, returns `null`.
	fun mpropdef2node(mpropdef: MPropDef): nullable ANode
	do
		var res
		res = mpropdef2npropdef.get_or_null(mpropdef)
		if res != null then
			# Run the phases on it
			toolcontext.run_phases_on_npropdef(res)
			return res
		end
		# Fall back to the class node if any.
		res = mclassdef2nclassdef.get_or_null(mpropdef.mclassdef)
		if res != null then return res
		return null
	end

	# Retrieve all the attributes nodes localy definied
	# FIXME think more about this method and how the separations separate/global and ast/model should be done.
	fun collect_attr_propdef(mclassdef: MClassDef): Array[AAttrPropdef]
	do
		var res = new Array[AAttrPropdef]
		var n = mclassdef2nclassdef.get_or_null(mclassdef)
		if n == null then return res
		for npropdef in n.n_propdefs do
			if npropdef isa AAttrPropdef then
				# Run the phases on it
				toolcontext.run_phases_on_npropdef(npropdef)
				res.add(npropdef)
			end
		end
		return res
	end

	# Build the properties of `nclassdef`.
	private fun build_properties(nclassdef: AClassdef)
	do
		# Force building recursively
		if nclassdef.build_properties_is_done then return
		nclassdef.build_properties_is_done = true
		var mclassdef = nclassdef.mclassdef
		if mclassdef == null then return # skip error
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
				if not npropdef isa ATypePropdef then continue
				# Check circularity
				var mpropdef = npropdef.mpropdef
				if mpropdef == null then continue
				if mpropdef.bound == null then continue
				if not check_virtual_types_circularity(npropdef, mpropdef.mproperty, mclassdef.bound_mtype, mclassdef.mmodule) then
					# Invalidate the bound
					mpropdef.is_broken = true
					mpropdef.bound = new MErrorType(mclassdef.mmodule.model)
				end
			end
			for npropdef in nclassdef2.n_propdefs do
				# Check ATypePropdef first since they may be required for the other properties
				if not npropdef isa ATypePropdef then continue
				npropdef.check_signature(self)
			end

			for npropdef in nclassdef2.n_propdefs do
				if npropdef isa ATypePropdef then continue
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
			var mprop = new MMethod(mclassdef, "init", nclassdef.location, mclassdef.mclass.visibility)
			mprop.is_root_init = true
			var mpropdef = new MMethodDef(mclassdef, mprop, nclassdef.location)
			var mparameters = new Array[MParameter]
			var msignature = new MSignature(mparameters, null)
			mpropdef.msignature = msignature
			mprop.is_init = true
			self.toolcontext.info("{mclassdef} gets a free empty constructor {mpropdef}{msignature}", 3)
			the_root_init_mmethod = mprop
		end

		# Is there already a constructor defined?
		var defined_init: nullable MMethodDef = null
		for mpropdef in mclassdef.mpropdefs do
			if not mpropdef isa MMethodDef then continue
			if not mpropdef.mproperty.is_init then continue
			if mpropdef.mproperty.is_root_init then
				assert defined_init == null
				defined_init = mpropdef
			else if mpropdef.mproperty.name == "autoinit" then
				# An explicit old-style init named "init", so return
				return
			end
		end

		if mclassdef.auto_init != null then
			return
		end

		if not nclassdef isa AStdClassdef then return

		# Collect undefined attributes
		var mparameters = new Array[MParameter]
		var initializers = new Array[MProperty]
		for npropdef in nclassdef.n_propdefs do
			if npropdef isa AMethPropdef then
				if not npropdef.is_autoinit then continue # Skip non tagged autoinit
				var mpropdef = npropdef.mpropdef
				if mpropdef == null then return # Skip broken method
				var sig = mpropdef.msignature
				if sig == null then continue # Skip broken method

				mparameters.add_all sig.mparameters
				initializers.add(mpropdef.mproperty)
				mpropdef.mproperty.is_autoinit = true
			end
			if npropdef isa AAttrPropdef then
				var mreadpropdef = npropdef.mreadpropdef
				if mreadpropdef == null then return # Skip broken attribute
				var msignature = mreadpropdef.msignature
				if msignature == null then return # Skip broken attribute
				if npropdef.noinit then continue # Skip noinit attribute
				var atlateinit = npropdef.get_single_annotation("lateinit", self)
				if atlateinit != null then
					# For lateinit attributes, call the reader to force
					# the lazy initialization of the attribute.
					initializers.add(mreadpropdef.mproperty)
					mreadpropdef.mproperty.is_autoinit = true
					continue
				end
				if npropdef.has_value and not npropdef.is_optional then continue
				var msetter = npropdef.mwritepropdef
				if msetter == null then
					# No setter, it is a readonly attribute, so just add it
					var paramname = mreadpropdef.mproperty.name
					var ret_type = msignature.return_mtype
					if ret_type == null then return
					var mparameter = new MParameter(paramname, ret_type, false)
					mparameters.add(mparameter)

					initializers.add(npropdef.mpropdef.mproperty)
					npropdef.mpropdef.mproperty.is_autoinit = true
				else
					# Add the setter to the list
					mparameters.add_all msetter.msignature.mparameters
					initializers.add(msetter.mproperty)
					msetter.mproperty.is_autoinit = true
				end
			end
		end

		var the_root_init_mmethod = self.the_root_init_mmethod
		if the_root_init_mmethod == null then return

		# Look for most-specific new-stype init definitions
		var spropdefs = new ArraySet[MMethodDef]
		for x in mclassdef.in_hierarchy.direct_greaters do
			var y = x.mclass.intro.auto_init
			if y == null then continue
			if y.is_broken or y.msignature == null then return
			spropdefs.add y
		end

		# Look at the autoinit class-annotation
		var autoinit = nclassdef.get_single_annotation("autoinit", self)
		var noautoinit = nclassdef.get_single_annotation("noautoinit", self)
		if autoinit != null then
			# Just throws the collected initializers
			mparameters.clear
			initializers.clear

			if noautoinit != null then
				error(autoinit, "Error: `autoinit` and `noautoinit` are incompatible.")
			end

			if autoinit.n_args.is_empty then
				error(autoinit, "Syntax Error: `autoinit` expects method identifiers, use `noautoinit` to clear all autoinits.")
			end

			# Get and check each argument
			for narg in autoinit.n_args do
				var id = narg.as_id
				if id == null then
					error(narg, "Syntax Error: `autoinit` expects method identifiers.")
					return
				end

				# Search the property.
				# To avoid bad surprises, try to get the setter first.
				var p = try_get_mproperty_by_name(narg, mclassdef, id + "=")
				if p == null then
					p = try_get_mproperty_by_name(narg, mclassdef, id)
				end
				if p == null then
					error(narg, "Error: unknown method `{id}`")
					return
				end
				if not p.is_autoinit then
					error(narg, "Error: `{p}` is not an autoinit method")
					return
				end

				# Register the initializer and the parameters
				initializers.add(p)
				var pd = p.intro
				if pd isa MMethodDef then
					# Get the signature resolved for the current receiver
					var sig = pd.msignature.resolve_for(mclassdef.mclass.mclass_type, mclassdef.bound_mtype, mclassdef.mmodule, false)
					mparameters.add_all(sig.mparameters)
				else
					# TODO attributes?
					abort
				end
			end
		else if spropdefs.not_empty then
			# Search for inherited manual autoinit
			var manual = null
			for s in spropdefs do
				if mpropdef2npropdef.has_key(s) then
					self.toolcontext.info("{mclassdef} inherits a manual autoinit {s}", 3)
					#mclassdef.autoinit = s
					#return
					manual = s
				end
			end

			# Search the longest-one and checks for conflict
			var longest = spropdefs.first
			if spropdefs.length > 1 then
				# part 1. find the longest list
				for spd in spropdefs do
					if spd.initializers.length > longest.initializers.length then longest = spd
					if spd != manual and manual != null then
						self.toolcontext.info("{mclassdef} conflict between manual autoinit {manual} and automatic autoinit {spd}.", 3)
					end
				end
				# conflict with manual autoinit?
				if longest != manual and manual != null then
					self.error(nclassdef, "Error: conflict between manual autoinit {manual} and automatic autoinit {longest}.")
				end
				# part 2. compare
				# Check for conflict in the order of initializers
				# Each initializer list must me a prefix of the longest list
				# If `noautoinit` is set, just ignore conflicts
				if noautoinit == null then for spd in spropdefs do
					var i = 0
					for p in spd.initializers do
						if p != longest.initializers[i] then
							var proposal = new ArraySet[MProperty]
							for spd2 in spropdefs do
								proposal.add_all spd2.initializers
							end
							proposal.add_all initializers
							self.error(nclassdef, "Error: cannot generate automatic init for class {mclassdef.mclass}. Conflict in the order in inherited initializers {spd}({spd.initializers.join(", ")}) and {longest}({longest.initializers.join(", ")}). Use `autoinit` to order initializers. eg `autoinit {proposal.join(", ")}`")
							# TODO: invalidate the initializer to avoid more errors
							return
						end
						i += 1
					end
				end
			end

			if noautoinit != null then
				# If there is local or inherited initializers, then complain.
				if initializers.is_empty and longest.initializers.is_empty then
					warning(noautoinit, "useless-noautoinit", "Warning: the list of autoinit is already empty.")
				end
				# Just clear initializers
				mparameters.clear
				initializers.clear
			else
				# Combine the inherited list to what is collected
				if longest.initializers.length > 0 then
					mparameters.prepend longest.msignature.mparameters
					initializers.prepend longest.initializers
				end
			end
		end

		# Create a specific new autoinit constructor
		do
			var mprop = new MMethod(mclassdef, "autoinit", nclassdef.location, public_visibility)
			mprop.is_init = true
			var mpropdef = new MMethodDef(mclassdef, mprop, nclassdef.location)
			mpropdef.initializers.add_all(initializers)
			var msignature = new MSignature(mparameters, null)
			mpropdef.msignature = msignature
			mclassdef.auto_init = mpropdef
			self.toolcontext.info("{mclassdef} gets a free auto constructor `{mpropdef}{msignature}`. {spropdefs}", 3)
			mclassdef.mclass.the_root_init_mmethod = the_root_init_mmethod
		end
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
		mtype = mtype.undecorate
		if mtype isa MClassType then
			vis_type = mtype.mclass.visibility
			mmodule_type = mtype.mclass.intro_mmodule
		else if mtype isa MVirtualType then
			vis_type = mtype.mproperty.visibility
			mmodule_type = mtype.mproperty.intro_mclassdef.mmodule
		else if mtype isa MParameterType then
			# nothing, always visible
		else if mtype isa MNullType then
			# nothing to do.
		else if mtype isa MBottomType then
			# nothing to do.
		else if mtype isa MErrorType then
			# nothing to do.
		else
			node.debug "Unexpected type {mtype}"
			abort
		end

		if vis_type != null then
			assert mmodule_type != null
			var vis_module_type = mmodule.visibility_for(mmodule_type) # the visibility of the original module
			if mproperty.visibility > vis_type then
				error(node, "Error: the {mproperty.visibility} property `{mproperty}` cannot contain the {vis_type} type `{mtype}`.")
				return
			else if mproperty.visibility > vis_module_type then
				error(node, "Error: the {mproperty.visibility} property `{mproperty}` cannot contain the type `{mtype}` from the {vis_module_type} module `{mmodule_type}`.")
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

	# Detect circularity errors for virtual types.
	fun check_virtual_types_circularity(node: ANode, mproperty: MVirtualTypeProp, recv: MType, mmodule: MModule): Bool
	do
		# Check circularity
		# Slow case: progress on each resolution until we visit all without getting a loop

		# The graph used to detect loops
		var mtype = mproperty.mvirtualtype
		var poset = new POSet[MType]

		# The work-list of types to resolve
		var todo = new List[MType]
		todo.add mtype

		while not todo.is_empty do
			# The visited type
			var t = todo.pop

			if not t.need_anchor then continue

			# Get the types derived of `t` (subtypes and bounds)
			var nexts
			if t isa MNullableType then
				nexts = [t.mtype]
			else if t isa MGenericType then
				nexts = t.arguments
			else if t isa MVirtualType then
				var vt = t.mproperty
				# Because `vt` is possibly unchecked, we have to do the bound-lookup manually
				var defs = vt.lookup_definitions(mmodule, recv)
				if defs.is_empty then return false
				nexts = new Array[MType]
				for d in defs do
					var next = defs.first.bound
					if next == null then return false
					nexts.add next
				end
			else if t isa MClassType then
				# Basic type, nothing to to
				continue
			else if t isa MParameterType then
				# Parameter types cannot depend on virtual types, so nothing to do
				continue
			else
				abort
			end

			# For each one
			for next in nexts do
				if poset.has_edge(next, t) then
					if mtype == next then
						error(node, "Error: circularity of virtual type definition: {next} <-> {t}.")
					else
						error(node, "Error: circularity of virtual type definition: {mtype} -> {next} <-> {t}.")
					end
					return false
				else
					poset.add_edge(t, next)
					todo.add next
				end
			end
		end
		return true
	end
end

redef class MPropDef
	# Does the MPropDef contains a call to super or a call of a super-constructor?
	# Subsequent phases of the frontend (esp. typing) set it if required
	var has_supercall: Bool = false is writable
end

redef class AClassdef
	# Marker used in `ModelBuilder::build_properties`
	private var build_properties_is_done = false
end

redef class MClass
	# The base init of the class.
	#
	# TODO: merge with `root_init` and `ModelBuilder::the_root_init_mmethod` if possible
	var the_root_init_mmethod: nullable MMethod = null
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
				modelbuilder.error(nintro, "Error: the virtual type `SELF` must be declared in `Object`.")
			end

			# SELF must be public
			if mprop.visibility != public_visibility then
				modelbuilder.error(nintro, "Error: the virtual type `SELF` must be public.")
			end

			# SELF must not be fixed
			if intro.is_fixed then
				modelbuilder.error(nintro, "Error: the virtual type `SELF` cannot be fixed.")
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

	private fun build_property(modelbuilder: ModelBuilder, mclassdef: MClassDef) do end
	private fun build_signature(modelbuilder: ModelBuilder) do end
	private fun check_signature(modelbuilder: ModelBuilder) do end
	private fun new_property_visibility(modelbuilder: ModelBuilder, mclassdef: MClassDef, nvisibility: nullable AVisibility): MVisibility
	do
		var mvisibility = public_visibility
		if nvisibility != null then
			mvisibility = nvisibility.mvisibility
			if mvisibility == intrude_visibility then
				modelbuilder.error(nvisibility, "Error: `intrude` is not a legal visibility for properties.")
				mvisibility = public_visibility
			end
		end
		if mclassdef.mclass.visibility == private_visibility then
			if mvisibility == protected_visibility then
				assert nvisibility != null
				modelbuilder.error(nvisibility, "Error: `private` is the only legal visibility for properties in a private class.")
			else if mvisibility == private_visibility then
				assert nvisibility != null
				modelbuilder.advice(nvisibility, "useless-visibility", "Warning: `private` is superfluous since the only legal visibility for properties in a private class is private.")
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
		else if mpropdef.is_intro and mpropdef.mproperty.visibility >= protected_visibility and mpropdef.name != "new" then
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
				modelbuilder.error(nvisibility, "Error: redefinition changed the visibility from `{mprop.visibility}` to `{mvisibility}`.")
		end
	end

	private fun check_redef_keyword(modelbuilder: ModelBuilder, mclassdef: MClassDef, kwredef: nullable Token, need_redef: Bool, mprop: MProperty): Bool
	do
		if mclassdef.mprop2npropdef.has_key(mprop) then
			modelbuilder.error(self, "Error: a property `{mprop}` is already defined in class `{mclassdef.mclass}` at line {mclassdef.mprop2npropdef[mprop].location.line_start}.")
			return false
		end
		if mprop isa MMethod and mprop.is_root_init then return true
		if kwredef == null then
			if need_redef then
				modelbuilder.error(self, "Redef Error: `{mclassdef.mclass}::{mprop.name}` is an inherited property. To redefine it, add the `redef` keyword.")
				return false
			end

			# Check for full-name conflicts in the package.
			# A public property should have a unique qualified name `package::class::prop`.
			if mprop.intro_mclassdef.mmodule.mgroup != null and mprop.visibility >= protected_visibility then
				var others = modelbuilder.model.get_mproperties_by_name(mprop.name)
				if others != null then for other in others do
					if other != mprop and other.intro_mclassdef.mmodule.mgroup != null and other.intro_mclassdef.mmodule.mgroup.mpackage == mprop.intro_mclassdef.mmodule.mgroup.mpackage and other.intro_mclassdef.mclass.name == mprop.intro_mclassdef.mclass.name and other.visibility >= protected_visibility then
						modelbuilder.advice(self, "full-name-conflict", "Warning: A property named `{other.full_name}` is already defined in module `{other.intro_mclassdef.mmodule}` for the class `{other.intro_mclassdef.mclass.name}`.")
						break
					end
				end
			end
		else
			if not need_redef then
				modelbuilder.error(self, "Error: no property `{mclassdef.mclass}::{mprop.name}` is inherited. Remove the `redef` keyword to define a new property.")
				return false
			end
		end
		return true
	end

	# Checks for useless type in redef signatures.
	private fun check_repeated_types(modelbuilder: ModelBuilder) do end
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
		var param_names = self.param_names
		var param_types = self.param_types
		for np in self.n_params do
			param_names.add(np.n_id.text)
			var ntype = np.n_type
			if ntype != null then
				var mtype = modelbuilder.resolve_mtype_unchecked(mclassdef, ntype, true)
				if mtype == null then return false # Skip error
				for i in [0..param_names.length-param_types.length[ do
					param_types.add(mtype)
				end
				if np.n_dotdotdot != null then
					if self.vararg_rank != -1 then
						modelbuilder.error(np, "Error: `{param_names[self.vararg_rank]}` is already a vararg")
						return false
					else
						self.vararg_rank = param_names.length - 1
					end
				end
			end
		end
		var ntype = self.n_type
		if ntype != null then
			self.ret_type = modelbuilder.resolve_mtype_unchecked(mclassdef, ntype, true)
			if self.ret_type == null then return false # Skip error
		end

		self.is_visited = true
		return true
	end

	private fun check_signature(modelbuilder: ModelBuilder, mclassdef: MClassDef): Bool
	do
		var res = true
		for np in self.n_params do
			var ntype = np.n_type
			if ntype != null then
				if modelbuilder.resolve_mtype(mclassdef, ntype) == null then
					res = false
				end
			end
		end
		var ntype = self.n_type
		if ntype != null then
			if modelbuilder.resolve_mtype(mclassdef, ntype) == null then
				res = false
			end
		end
		if not res then is_broken = true
		return res
	end
end

redef class AParam
	# The associated mparameter if any
	var mparameter: nullable MParameter = null
end

redef class AMethPropdef
	redef type MPROPDEF: MMethodDef

	# Is the method annotated `autoinit`?
	var is_autoinit = false

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
		var is_new = n_kwnew != null
		var is_init = n_kwinit != null or is_new
		var name: String
		var amethodid = self.n_methid
		var name_node: ANode
		if amethodid == null then
			if n_kwinit != null then
				name = "init"
				name_node = n_kwinit
				if self.n_signature.n_params.not_empty or get_single_annotation("old_style_init", modelbuilder) != null then
					name = "autoinit"
				end
			else if n_kwnew != null then
				name = "new"
				name_node = n_kwnew
			else
				name = "main"
				name_node = self
			end
		else if amethodid isa AIdMethid then
			name = amethodid.n_id.text
			name_node = amethodid
		else
			# operator, bracket or assign
			name = amethodid.collect_text
			name_node = amethodid

			var arity = self.n_signature.n_params.length
			if name == "+" and arity == 0 then
				name = "unary +"
			else if name == "-" and arity == 0 then
				name = "unary -"
			else if name == "~" and arity == 0 then
				name = "unary ~"
			else
				if amethodid.is_binary and arity != 1 then
					modelbuilder.error(self.n_signature, "Syntax Error: binary operator `{name}` requires exactly one parameter; got {arity}.")
				else if amethodid.min_arity > arity then
					modelbuilder.error(self.n_signature, "Syntax Error: `{name}` requires at least {amethodid.min_arity} parameter(s); got {arity}.")
				end
			end
		end

		var look_like_a_root_init = look_like_a_root_init(modelbuilder, mclassdef)
		var mprop: nullable MMethod = null
		if not is_init or n_kwredef != null or look_like_a_root_init then mprop = modelbuilder.try_get_mproperty_by_name(name_node, mclassdef, name).as(nullable MMethod)
		if mprop == null and look_like_a_root_init then
			mprop = modelbuilder.the_root_init_mmethod
			var nb = n_block
			if nb isa ABlockExpr and nb.n_expr.is_empty and n_doc == null then
				modelbuilder.advice(self, "useless-init", "Warning: useless empty init in {mclassdef}")
			end
		end
		if mprop == null then
			var mvisibility = new_property_visibility(modelbuilder, mclassdef, self.n_visibility)
			mprop = new MMethod(mclassdef, name, self.location, mvisibility)
			if look_like_a_root_init and modelbuilder.the_root_init_mmethod == null then
				modelbuilder.the_root_init_mmethod = mprop
				mprop.is_root_init = true
			end
			mprop.is_init = is_init
			mprop.is_new = is_new
			if is_new then mclassdef.mclass.has_new_factory = true
			if name == "sys" then mprop.is_toplevel = true # special case for sys allowed in `new` factories
			if not self.check_redef_keyword(modelbuilder, mclassdef, n_kwredef, false, mprop) then
				mprop.is_broken = true
				return
			end
		else
			if mprop.is_broken then return
			if not self.check_redef_keyword(modelbuilder, mclassdef, n_kwredef, not self isa AMainMethPropdef, mprop) then return
			check_redef_property_visibility(modelbuilder, self.n_visibility, mprop)
		end

		# Check name conflicts in the local class for constructors.
		if is_init then
			for p, n in mclassdef.mprop2npropdef do
				if p != mprop and p isa MMethod and p.name == name then
					if not check_redef_keyword(modelbuilder, mclassdef, n_kwredef, false, p) then
						mprop.is_broken = true
						return
					end
					break
				end
			end
		end

		mclassdef.mprop2npropdef[mprop] = self

		var mpropdef = new MMethodDef(mclassdef, mprop, self.location)
		if mprop.name == "autoinit" and mclassdef.is_intro then
			assert mclassdef.auto_init == null
			mclassdef.auto_init = mpropdef
			if mpropdef.is_intro then
				mpropdef.initializers.add mprop
				mpropdef.is_calling_init = true
			end
		end

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
		var mproperty = mpropdef.mproperty
		var mclassdef = mpropdef.mclassdef
		var mmodule = mclassdef.mmodule
		var nsig = self.n_signature

		var accept_special_last_parameter = self.n_methid == null or self.n_methid.accept_special_last_parameter
		var return_is_mandatory = self.n_methid != null and self.n_methid.return_is_mandatory

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
			msignature = mproperty.intro.msignature
			if msignature == null then return # Skip error

			# The local signature is adapted to use the local formal types, if any.
			msignature = msignature.resolve_for(mclassdef.mclass.mclass_type, mclassdef.bound_mtype, mmodule, false)

			# Check inherited signature arity
			if param_names.length != msignature.arity then
				var node: ANode
				if nsig != null then node = nsig else node = self
				modelbuilder.error(node, "Redef Error: expected {msignature.arity} parameter(s) for `{mproperty.name}{msignature}`; got {param_names.length}. See introduction at `{mproperty.full_name}`.")
				return
			end
		else if mproperty.is_init and not mproperty.is_new then
			# FIXME UGLY: inherit signature from a super-constructor
			for msupertype in mclassdef.supertypes do
				msupertype = msupertype.anchor_to(mmodule, mclassdef.bound_mtype)
				var candidate = modelbuilder.try_get_mproperty_by_name2(self, mmodule, msupertype, mproperty.name)
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
			modelbuilder.error(nsig.n_params[param_types.length], "Error: untyped parameter `{param_names[param_types.length]}'.")
			return
		end

		var mparameters = new Array[MParameter]
		for i in [0..param_names.length[ do
			var mparameter = new MParameter(param_names[i], param_types[i], i == vararg_rank)
			if nsig != null then nsig.n_params[i].mparameter = mparameter
			mparameters.add(mparameter)
		end

		# In `new`-factories, the return type is by default the classtype.
		if ret_type == null and mproperty.is_new then ret_type = mclassdef.mclass.mclass_type

		# Special checks for operator methods
		if not accept_special_last_parameter and mparameters.not_empty and mparameters.last.is_vararg then
			modelbuilder.error(self.n_signature.n_params.last, "Error: illegal variadic parameter `{mparameters.last}` for `{mproperty.name}`.")
		end
		if ret_type == null and return_is_mandatory then
			modelbuilder.error(self.n_methid, "Error: mandatory return type for `{mproperty.name}`.")
		end

		msignature = new MSignature(mparameters, ret_type)
		mpropdef.msignature = msignature
		mpropdef.is_abstract = self.get_single_annotation("abstract", modelbuilder) != null
		mpropdef.is_intern = self.get_single_annotation("intern", modelbuilder) != null
		mpropdef.is_extern = self.n_extern_code_block != null or self.get_single_annotation("extern", modelbuilder) != null

		# Check annotations
		var at = self.get_single_annotation("lazy", modelbuilder)
		if at != null then modelbuilder.error(at, "Syntax Error: `lazy` must be used on attributes.")

		var atautoinit = self.get_single_annotation("autoinit", modelbuilder)
		if atautoinit != null then
			if not mpropdef.is_intro then
				modelbuilder.error(atautoinit, "Error: `autoinit` cannot be set on redefinitions.")
			else if not mclassdef.is_intro then
				modelbuilder.error(atautoinit, "Error: `autoinit` cannot be used in class refinements.")
			else
				self.is_autoinit = true
			end
		end
	end

	redef fun check_signature(modelbuilder)
	do
		var mpropdef = self.mpropdef
		if mpropdef == null then return # Error thus skiped
		var mclassdef = mpropdef.mclassdef
		var mmodule = mclassdef.mmodule
		var nsig = self.n_signature
		var mysignature = mpropdef.msignature
		if mysignature == null then return # Error thus skiped

		# Check
		if nsig != null then
			if not nsig.check_signature(modelbuilder, mclassdef) then
				mpropdef.msignature = null # invalidate
				mpropdef.is_broken = true
				return # Forward error
			end
		end

		# Lookup for signature in the precursor
		# FIXME all precursors should be considered
		if not mpropdef.is_intro then
			var msignature = mpropdef.mproperty.intro.msignature
			if msignature == null then return

			var precursor_ret_type = msignature.return_mtype
			var ret_type = mysignature.return_mtype
			if ret_type != null and precursor_ret_type == null then
				modelbuilder.error(nsig.n_type, "Redef Error: `{mpropdef.mproperty}` is a procedure, not a function.")
				mpropdef.msignature = null
				mpropdef.is_broken = true
				return
			end

			if mysignature.arity > 0 then
				# Check parameters types
				for i in [0..mysignature.arity[ do
					var myt = mysignature.mparameters[i].mtype
					var prt = msignature.mparameters[i].mtype
					var node = nsig.n_params[i]
					if not modelbuilder.check_sametype(node, mmodule, mclassdef.bound_mtype, myt, prt) then
						modelbuilder.error(node, "Redef Error: expected `{prt}` for parameter `{mysignature.mparameters[i].name}'; got `{myt}`.")
						mpropdef.msignature = null
						mpropdef.is_broken = true
					end
				end
			end
			if precursor_ret_type != null then
				var node: nullable ANode = null
				if nsig != null then node = nsig.n_type
				if node == null then node = self
				if ret_type == null then
					# Inherit the return type
					ret_type = precursor_ret_type
				else if not modelbuilder.check_subtype(node, mmodule, mclassdef.bound_mtype, ret_type, precursor_ret_type) then
					modelbuilder.error(node, "Redef Error: expected `{precursor_ret_type}` for return type; got `{ret_type}`.")
					mpropdef.msignature = null
					mpropdef.is_broken = true
				end
			end
		end

		if nsig != null then
			# Check parameters visibility
			for i in [0..mysignature.arity[ do
				var nt = nsig.n_params[i].n_type
				if nt != null then modelbuilder.check_visibility(nt, nt.mtype.as(not null), mpropdef)
			end
			var nt = nsig.n_type
			if nt != null then modelbuilder.check_visibility(nt, nt.mtype.as(not null), mpropdef)
		end
		check_repeated_types(modelbuilder)
	end

	# For parameters, type is always useless in a redef.
	# For return type, type is useless if not covariant with introduction.
	redef fun check_repeated_types(modelbuilder) do
		var mpropdef = self.mpropdef
		if mpropdef == null then return
		if mpropdef.is_intro or n_signature == null then return
		# check params
		for param in n_signature.n_params do
			if param.n_type != null then
				modelbuilder.advice(param.n_type, "useless-signature", "Warning: useless type repetition on parameter `{param.n_id.text}` for redefined method `{mpropdef.name}`")
			end
		end
		# get intro
		var intro = mpropdef.mproperty.intro
		var n_intro = modelbuilder.mpropdef2npropdef.get_or_null(intro)
		if n_intro == null or not n_intro isa AMethPropdef then return
		# check return type
		var ret_type = n_signature.ret_type
		if ret_type != null and ret_type == n_intro.n_signature.ret_type then
			modelbuilder.advice(n_signature.n_type, "useless-signature", "Warning: useless return type repetition for redefined method `{mpropdef.name}`")
		end
	end
end

redef class AMethid
	# Is a return required?
	#
	# * True for operators and brackets.
	# * False for id and assignment.
	fun return_is_mandatory: Bool do return true

	# Can the last parameter be special like a vararg?
	#
	# * False for operators: the last one is in fact the only one.
	# * False for assignments: it is the right part of the assignment.
	# * True for ids and brackets.
	fun accept_special_last_parameter: Bool do return false

	# The minimum required number of parameters.
	#
	# * 1 for binary operators
	# * 1 for brackets
	# * 1 for assignments
	# * 2 for bracket assignments
	# * 0 for ids
	fun min_arity: Int do return 1

	# Is the `self` a binary operator?
	fun is_binary: Bool do return true
end

redef class AIdMethid
	redef fun return_is_mandatory do return false
	redef fun accept_special_last_parameter do return true
	redef fun min_arity do return 0
	redef fun is_binary do return false
end

redef class ABraMethid
	redef fun accept_special_last_parameter do return true
	redef fun is_binary do return false
end

redef class ABraassignMethid
	redef fun return_is_mandatory do return false
	redef fun min_arity do return 2
	redef fun is_binary do return false
end

redef class AAssignMethid
	redef fun return_is_mandatory do return false
	redef fun is_binary do return false
end

redef class AAttrPropdef
	redef type MPROPDEF: MAttributeDef

	# The static type of the property (declared, inferred or inherited)
	# This attribute is also used to check if the property was analyzed and is valid.
	var mtype: nullable MType

	# Is the node tagged `noinit`?
	var noinit = false

	# Is the node tagged lazy?
	var is_lazy = false

	# Is the node tagged optional?
	var is_optional = false

	# Does the node have a default value?
	# Could be through `n_expr`, `n_block` or `is_lazy`
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
		var nid2 = n_id2
		var name = nid2.text

		var atabstract = self.get_single_annotation("abstract", modelbuilder)
		if atabstract == null then
			if not mclass.kind.need_init then
				modelbuilder.error(self, "Error: attempt to define attribute `{name}` in the {mclass.kind} `{mclass}`.")
			end

			var mprop = new MAttribute(mclassdef, "_" + name, self.location, private_visibility)
			var mpropdef = new MAttributeDef(mclassdef, mprop, self.location)
			self.mpropdef = mpropdef
			modelbuilder.mpropdef2npropdef[mpropdef] = self
		end

		var readname = name
		var mreadprop = modelbuilder.try_get_mproperty_by_name(nid2, mclassdef, readname).as(nullable MMethod)
		if mreadprop == null then
			var mvisibility = new_property_visibility(modelbuilder, mclassdef, self.n_visibility)
			mreadprop = new MMethod(mclassdef, readname, self.location, mvisibility)
			if not self.check_redef_keyword(modelbuilder, mclassdef, n_kwredef, false, mreadprop) then
				mreadprop.is_broken = true
				return
			end
		else
			if mreadprop.is_broken then return
			if not self.check_redef_keyword(modelbuilder, mclassdef, n_kwredef, true, mreadprop) then return
			check_redef_property_visibility(modelbuilder, self.n_visibility, mreadprop)
		end
		mclassdef.mprop2npropdef[mreadprop] = self

		var attr_mpropdef = mpropdef
		if attr_mpropdef != null then
			mreadprop.getter_for = attr_mpropdef.mproperty
			attr_mpropdef.mproperty.getter = mreadprop
		end

		var mreadpropdef = new MMethodDef(mclassdef, mreadprop, self.location)
		self.mreadpropdef = mreadpropdef
		modelbuilder.mpropdef2npropdef[mreadpropdef] = self
		set_doc(mreadpropdef, modelbuilder)
		if mpropdef != null then mpropdef.mdoc = mreadpropdef.mdoc
		if atabstract != null then mreadpropdef.is_abstract = true

		has_value = n_expr != null or n_block != null

		if atabstract != null and has_value then
			modelbuilder.error(atabstract, "Error: `abstract` attributes cannot have an initial value.")
			return
		end

		var atnoinit = self.get_single_annotation("noinit", modelbuilder)
		if atnoinit == null then atnoinit = self.get_single_annotation("noautoinit", modelbuilder)
		if atnoinit != null then
			noinit = true
			if has_value then
				modelbuilder.error(atnoinit, "Error: `noautoinit` attributes cannot have an initial value.")
				return
			end
			if atabstract != null then
				modelbuilder.warning(atnoinit, "useless-noautoinit", "Warning: superfluous `noautoinit` on abstract attribute.")
			end
		end

		var atlazy = self.get_single_annotation("lazy", modelbuilder)
		var atlateinit = self.get_single_annotation("lateinit", modelbuilder)
		if atlazy != null or atlateinit != null then
			if atlazy != null and atlateinit != null then
				modelbuilder.error(atlazy, "Error: `lazy` incompatible with `lateinit`.")
				return
			end
			if not has_value then
				if atlazy != null then
					modelbuilder.error(atlazy, "Error: `lazy` attributes need a value.")
				else if atlateinit != null then
					modelbuilder.error(atlateinit, "Error: `lateinit` attributes need a value.")
				end
				has_value = true
				return
			end
			is_lazy = true
			var mlazyprop = new MAttribute(mclassdef, "lazy _" + name, self.location, none_visibility)
			mlazyprop.is_fictive = true
			var mlazypropdef = new MAttributeDef(mclassdef, mlazyprop, self.location)
			mlazypropdef.is_fictive = true
			self.mlazypropdef = mlazypropdef
		end

		var atoptional = self.get_single_annotation("optional", modelbuilder)
		if atoptional != null then
			if not has_value then
				modelbuilder.error(atoptional, "Error: `optional` attributes need a default value.")
			end
			is_optional = true
		end

		var atreadonly = self.get_single_annotation("readonly", modelbuilder)
		if atreadonly != null then
			if not has_value then
				modelbuilder.error(atreadonly, "Error: `readonly` attributes need a value.")
			end
			# No setter, so just leave
			return
		end

		if not mclassdef.is_intro and not has_value and not noinit then
			modelbuilder.advice(self, "attr-in-refinement", "Warning: attributes in refinement need a value or `noautoinit`.")
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
				mvisibility = mreadprop.visibility
				# By default, use protected visibility at most
				if mvisibility > protected_visibility then mvisibility = protected_visibility
			end
			mwriteprop = new MMethod(mclassdef, writename, self.location, mvisibility)
			if not self.check_redef_keyword(modelbuilder, mclassdef, nwkwredef, false, mwriteprop) then
				mwriteprop.is_broken = true
				return
			end
			mwriteprop.deprecation = mreadprop.deprecation
		else
			if mwriteprop.is_broken then return
			if not self.check_redef_keyword(modelbuilder, mclassdef, nwkwredef or else n_kwredef, true, mwriteprop) then return
			if atwritable != null then
				check_redef_property_visibility(modelbuilder, atwritable.n_visibility, mwriteprop)
			end
		end
		mclassdef.mprop2npropdef[mwriteprop] = self

		if attr_mpropdef != null then
			mwriteprop.setter_for = attr_mpropdef.mproperty
			attr_mpropdef.mproperty.setter = mwriteprop
		end

		var mwritepropdef = new MMethodDef(mclassdef, mwriteprop, self.location)
		self.mwritepropdef = mwritepropdef
		modelbuilder.mpropdef2npropdef[mwritepropdef] = self
		mwritepropdef.mdoc = mreadpropdef.mdoc
		if atabstract != null then mwritepropdef.is_abstract = true

		var atautoinit = self.get_single_annotation("autoinit", modelbuilder)
		if atautoinit != null then
			if has_value then
				modelbuilder.error(atautoinit, "Error: `autoinit` attributes cannot have an initial value.")
			else if not mwritepropdef.is_intro then
				modelbuilder.error(atautoinit, "Error: `autoinit` attributes cannot be set on redefinitions.")
			else if not mclassdef.is_intro then
				modelbuilder.error(atautoinit, "Error: `autoinit` attributes cannot be used in class refinements.")
			else if atabstract == null then
				modelbuilder.warning(atautoinit, "useless-autoinit", "Warning: superfluous `autoinit` on attribute.")
			end
		else if atabstract != null then
			# By default, abstract attribute are not autoinit
			noinit = true
		end
	end

	redef fun build_signature(modelbuilder)
	do
		var mreadpropdef = self.mreadpropdef
		var mpropdef = self.mpropdef
		if mreadpropdef == null then return # Error thus skipped
		var mclassdef = mreadpropdef.mclassdef
		var mmodule = mclassdef.mmodule
		var mtype: nullable MType = null


		var ntype = self.n_type
		if ntype != null then
			mtype = modelbuilder.resolve_mtype_unchecked(mclassdef, ntype, true)
			if mtype == null then return
		end

		var inherited_type: nullable MType = null
		# Inherit the type from the getter (usually an abstract getter)
		if not mreadpropdef.is_intro then
			var msignature = mreadpropdef.mproperty.intro.msignature
			if msignature == null then return # Error, thus skipped
			inherited_type = msignature.return_mtype
			if inherited_type != null then
				# The inherited type is adapted to use the local formal types, if any.
				inherited_type = inherited_type.resolve_for(mclassdef.mclass.mclass_type, mclassdef.bound_mtype, mmodule, false)
				if mtype == null then mtype = inherited_type
			end
		end

		var nexpr = self.n_expr
		if mtype == null then
			if nexpr != null then
				mtype = infer_static_type(modelbuilder, nexpr, mclassdef, mmodule, mreadpropdef)
				if mtype == null then return
			end
		else if ntype != null and inherited_type == mtype then
			if nexpr isa ANewExpr then
				var xmtype = modelbuilder.resolve_mtype_unchecked(mclassdef, nexpr.n_type, true)
				if xmtype == mtype then
					modelbuilder.advice(ntype, "useless-type", "Warning: useless type definition")
				end
			end
		end

		if mtype == null then
			modelbuilder.error(self, "Error: untyped attribute `{mreadpropdef}`.")
			return
		end

		self.mtype = mtype

		if mpropdef != null then
			mpropdef.static_mtype = mtype
		end

		do
			var msignature = new MSignature(new Array[MParameter], mtype)
			mreadpropdef.msignature = msignature
		end

		var mwritepropdef = self.mwritepropdef
		if mwritepropdef != null then
			var mwritetype = mtype
			if is_optional then
				mwritetype = mwritetype.as_nullable
			end
			var name: String
			name = n_id2.text
			var mparameter = new MParameter(name, mwritetype, false)
			var msignature = new MSignature([mparameter], null)
			mwritepropdef.msignature = msignature
		end

		var mlazypropdef = self.mlazypropdef
		if mlazypropdef != null then
			mlazypropdef.static_mtype = mmodule.bool_type
		end
		check_repeated_types(modelbuilder)
	end

	# Detect the static type from the value assigned to the attribute `self`
	#
	# Return the static type if it can be safely inferred.
	private fun infer_static_type(modelbuilder: ModelBuilder, nexpr: AExpr,
		mclassdef: MClassDef, mmodule: MModule, mreadpropdef: MPropDef): nullable MType
	do
		var mtype = null
		if nexpr isa ANewExpr then
			mtype = modelbuilder.resolve_mtype_unchecked(mclassdef, nexpr.n_type, true)
		else if nexpr isa AAsCastExpr then
			mtype = modelbuilder.resolve_mtype_unchecked(mclassdef, nexpr.n_type, true)
		else if nexpr isa AIntegerExpr then
			var cla: nullable MClass = null
			if nexpr.value isa Int then
				cla = modelbuilder.try_get_mclass_by_name(nexpr, mmodule, "Int")
			else if nexpr.value isa Byte then
				cla = modelbuilder.try_get_mclass_by_name(nexpr, mmodule, "Byte")
			else if nexpr.value isa Int8 then
				cla = modelbuilder.try_get_mclass_by_name(nexpr, mmodule, "Int8")
			else if nexpr.value isa Int16 then
				cla = modelbuilder.try_get_mclass_by_name(nexpr, mmodule, "Int16")
			else if nexpr.value isa UInt16 then
				cla = modelbuilder.try_get_mclass_by_name(nexpr, mmodule, "UInt16")
			else if nexpr.value isa Int32 then
				cla = modelbuilder.try_get_mclass_by_name(nexpr, mmodule, "Int32")
			else if nexpr.value isa UInt32 then
				cla = modelbuilder.try_get_mclass_by_name(nexpr, mmodule, "UInt32")
			else
				# Should not happen, and should be updated as new types are added
				abort
			end
			if cla != null then mtype = cla.mclass_type
		else if nexpr isa AFloatExpr then
			var cla = modelbuilder.try_get_mclass_by_name(nexpr, mmodule, "Float")
			if cla != null then mtype = cla.mclass_type
		else if nexpr isa ACharExpr then
			var cla: nullable MClass
			if nexpr.is_code_point then
				cla = modelbuilder.try_get_mclass_by_name(nexpr, mmodule, "Int")
			else
				cla = modelbuilder.try_get_mclass_by_name(nexpr, mmodule, "Char")
			end
			if cla != null then mtype = cla.mclass_type
		else if nexpr isa ABoolExpr then
			var cla = modelbuilder.try_get_mclass_by_name(nexpr, mmodule, "Bool")
			if cla != null then mtype = cla.mclass_type
		else if nexpr isa ASuperstringExpr then
			var cla = modelbuilder.try_get_mclass_by_name(nexpr, mmodule, "String")
			if cla != null then mtype = cla.mclass_type
		else if nexpr isa AStringFormExpr then
			var cla: nullable MClass
			if nexpr.is_bytestring then
				cla = modelbuilder.try_get_mclass_by_name(nexpr, mmodule, "Bytes")
			else if nexpr.is_re then
				cla = modelbuilder.try_get_mclass_by_name(nexpr, mmodule, "Regex")
			else if nexpr.is_string then
				cla = modelbuilder.try_get_mclass_by_name(nexpr, mmodule, "String")
			else
				abort
			end
			if cla != null then mtype = cla.mclass_type
		else if nexpr isa AArrayExpr and nexpr.n_type == null and nexpr.n_exprs.not_empty then
			# Non-empty arrays without an explicit type

			var item_mtypes = new Set[MType]
			var fails = false
			for node in nexpr.n_exprs do
				var item_mtype = infer_static_type(modelbuilder, node, mclassdef, mmodule, mreadpropdef)
				if item_mtype == null then
					fails = true
				else
					item_mtypes.add item_mtype
				end
			end

			if fails then return null # Failed to infer some types

			if item_mtypes.length > 1 then
				modelbuilder.error(self, "Type Error: ambiguous array type {item_mtypes.join(" ")}")
			end

			mtype = mmodule.array_type(item_mtypes.first)
		else if nexpr isa AUminusExpr and (nexpr.n_expr isa AIntegerExpr or nexpr.n_expr isa AFloatExpr) then
			# The Int and Float unary - is defined in `kernel`, so this may
			# result in an invalid behavior when using a custom kernel.
			# A workaround is to declare the attribute static type.
			# This is still very useful, especially to novice programmers.
			mtype = infer_static_type(modelbuilder, nexpr.n_expr, mclassdef, mmodule, mreadpropdef)
		else if nexpr isa AOnceExpr then
			mtype = infer_static_type(modelbuilder, nexpr.n_expr, mclassdef, mmodule, mreadpropdef)
		else
			modelbuilder.error(self, "Error: untyped attribute `{mreadpropdef}`. Implicit typing allowed only for literals and new.")
		end
		return mtype
	end

	redef fun check_signature(modelbuilder)
	do
		var mpropdef = self.mpropdef
		if mpropdef == null then return # Error thus skipped
		var ntype = self.n_type
		var mtype = self.mtype
		if mtype == null then return # Error thus skipped

		var mclassdef = mpropdef.mclassdef
		var mmodule = mclassdef.mmodule

		# Check types
		if ntype != null then
			if modelbuilder.resolve_mtype(mclassdef, ntype) == null then return
		end
		var nexpr = n_expr
		if nexpr isa ANewExpr then
			if modelbuilder.resolve_mtype(mclassdef, nexpr.n_type) == null then return
		end

		# Lookup for signature in the precursor
		# FIXME all precursors should be considered
		if not mpropdef.is_intro then
			var precursor_type = mpropdef.mproperty.intro.static_mtype
			if precursor_type == null then return

			if mtype != precursor_type then
				modelbuilder.error(ntype.as(not null), "Redef Error: expected `{precursor_type}` type as a bound; got `{mtype}`.")
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
				modelbuilder.error(node, "Redef Error: expected {msignature.arity} parameter(s) for `{mpropdef.mproperty.name}{msignature}`; got {mysignature.arity}. See introduction at `{mpropdef.mproperty.full_name}`.")
				return
			end
			var precursor_ret_type = msignature.return_mtype
			var ret_type = mysignature.return_mtype
			if ret_type != null and precursor_ret_type == null then
				var node: ANode
				if nsig != null then node = nsig else node = self
				modelbuilder.error(node, "Redef Error: `{mpropdef.mproperty}` is a procedure, not a function.")
				return
			end

			if mysignature.arity > 0 then
				# Check parameters types
				for i in [0..mysignature.arity[ do
					var myt = mysignature.mparameters[i].mtype
					var prt = msignature.mparameters[i].mtype
					var node: ANode
					if nsig != null then node = nsig else node = self
					if not modelbuilder.check_sametype(node, mmodule, mclassdef.bound_mtype, myt, prt) then
						modelbuilder.error(node, "Redef Error: expected `{prt}` type for parameter `{mysignature.mparameters[i].name}'; got `{myt}`.")
					end
				end
			end
			if precursor_ret_type != null then
				var node: ANode
				if nsig != null then node = nsig else node = self
				if ret_type == null then
					# Inherit the return type
					ret_type = precursor_ret_type
				else if not modelbuilder.check_subtype(node, mmodule, mclassdef.bound_mtype, ret_type, precursor_ret_type) then
					modelbuilder.error(node, "Redef Error: expected `{precursor_ret_type}` return type; got `{ret_type}`.")
				end
			end
		end
	end

	# Type is useless if the attribute type is the same thant the intro.
	redef fun check_repeated_types(modelbuilder) do
		var mreadpropdef = self.mreadpropdef
		if mreadpropdef == null then return
		if mreadpropdef.is_intro or n_type == null then return
		# get intro
		var intro = mreadpropdef.mproperty.intro
		var n_intro = modelbuilder.mpropdef2npropdef.get_or_null(intro)
		if n_intro == null then return
		# get intro type
		var ntype = null
		if n_intro isa AMethPropdef then
			ntype = n_intro.n_signature.ret_type
		else if n_intro isa AAttrPropdef and n_intro.n_type != null then
			ntype = n_intro.n_type.mtype
		end
		# check
		if ntype == null or ntype != n_type.mtype or mpropdef == null then return
		modelbuilder.advice(n_type, "useless-signature", "Warning: useless type repetition on redefined attribute `{mpropdef.name}`")
	end
end

redef class ATypePropdef
	redef type MPROPDEF: MVirtualTypeDef

	redef fun build_property(modelbuilder, mclassdef)
	do
		var name = self.n_qid.n_id.text
		var mprop = modelbuilder.try_get_mproperty_by_name(self.n_qid, mclassdef, name)
		if mprop == null then
			var mvisibility = new_property_visibility(modelbuilder, mclassdef, self.n_visibility)
			mprop = new MVirtualTypeProp(mclassdef, name, self.location, mvisibility)
			for c in name.chars do if c >= 'a' and c<= 'z' then
				modelbuilder.warning(n_qid, "bad-type-name", "Warning: lowercase in the virtual type `{name}`.")
				break
			end
		else
			if mprop.is_broken then return
			assert mprop isa MVirtualTypeProp
			check_redef_property_visibility(modelbuilder, self.n_visibility, mprop)
		end

		var mpropdef = new MVirtualTypeDef(mclassdef, mprop, self.location)
		self.mpropdef = mpropdef
		if mpropdef.is_intro then
			modelbuilder.toolcontext.info("{mpropdef} introduces new type {mprop.full_name}", 4)
		else
			modelbuilder.toolcontext.info("{mpropdef} redefines type {mprop.full_name}", 4)
		end
		if not self.check_redef_keyword(modelbuilder, mclassdef, self.n_kwredef, not mpropdef.is_intro, mprop) then
			mpropdef.is_broken =true
		end
		mclassdef.mprop2npropdef[mprop] = self
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
		var mtype: nullable MType = null

		var ntype = self.n_type
		mtype = modelbuilder.resolve_mtype_unchecked(mclassdef, ntype, true)
		if mtype == null then return

		mpropdef.bound = mtype
		# print "{mpropdef}: {mtype}"
	end

	redef fun check_signature(modelbuilder)
	do
		var mpropdef = self.mpropdef
		if mpropdef == null then return # Error thus skipped

		var bound = mpropdef.bound
		if bound == null then return # Error thus skipped

		modelbuilder.check_visibility(n_type, bound, mpropdef)

		var mclassdef = mpropdef.mclassdef
		var mmodule = mclassdef.mmodule
		var anchor = mclassdef.bound_mtype

		var ntype = self.n_type
		if modelbuilder.resolve_mtype(mclassdef, ntype) == null then
			mpropdef.bound = null
			return
		end

		# Check redefinitions
		for p in mpropdef.mproperty.lookup_super_definitions(mmodule, anchor) do
			var supbound = p.bound
			if supbound == null or supbound isa MBottomType or p.is_broken then break # broken super bound, skip error
			if p.is_fixed then
				modelbuilder.error(self, "Redef Error: virtual type `{mpropdef.mproperty}` is fixed in super-class `{p.mclassdef.mclass}`.")
				break
			end
			if p.mclassdef.mclass == mclassdef.mclass then
				modelbuilder.error(n_type, "Redef Error: a virtual type cannot be refined.")
				break
			end
			if not modelbuilder.check_subtype(n_type, mmodule, anchor, bound, supbound) then
				modelbuilder.error(n_type, "Redef Error: expected `{supbound}` bound type; got `{bound}`.")
				break
			end
		end
	end
end
