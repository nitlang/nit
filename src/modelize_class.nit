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

# Analysis and verification of class definitions to instantiate model element
module modelize_class

import modelbuilder

redef class ToolContext
	var modelize_class_phase: Phase = new ModelizeClassPhase(self, null)
end

private class ModelizeClassPhase
	super Phase

	redef fun process_nmodule(nmodule)
	do
		toolcontext.modelbuilder.build_classes(nmodule)
	end
end

redef class ModelBuilder
	# Visit the AST and create the MClass objects
	private fun build_a_mclass(nmodule: AModule, nclassdef: AClassdef)
	do
		var mmodule = nmodule.mmodule.as(not null)

		var name: String
		var nkind: nullable AClasskind
		var mkind: MClassKind
		var nvisibility: nullable AVisibility
		var mvisibility: nullable MVisibility
		var arity = 0
		if nclassdef isa AStdClassdef then
			name = nclassdef.n_id.text
			nkind = nclassdef.n_classkind
			mkind = nkind.mkind
			nvisibility = nclassdef.n_visibility
			mvisibility = nvisibility.mvisibility
			arity = nclassdef.n_formaldefs.length
			if mvisibility == protected_visibility then
				error(nvisibility, "Error: only properties can be protected.")
				return
			else if mvisibility == intrude_visibility then
				error(nvisibility, "Error: intrude is not a legal visibility for classes.")
				return
			end
		else if nclassdef isa ATopClassdef then
			name = "Object"
			nkind = null
			mkind = interface_kind
			nvisibility = null
			mvisibility = public_visibility
		else if nclassdef isa AMainClassdef then
			name = "Sys"
			nkind = null
			mkind = concrete_kind
			nvisibility = null
			mvisibility = public_visibility
		else
			abort
		end

		var mclass = try_get_mclass_by_name(nclassdef, mmodule, name)
		if mclass == null then
			mclass = new MClass(mmodule, name, arity, mkind, mvisibility)
			#print "new class {mclass}"
		else if nclassdef isa AStdClassdef and nmodule.mclass2nclassdef.has_key(mclass) then
			error(nclassdef, "Error: A class {name} is already defined at line {nmodule.mclass2nclassdef[mclass].location.line_start}.")
			return
		else if nclassdef isa AStdClassdef and nclassdef.n_kwredef == null then
			error(nclassdef, "Redef error: {name} is an imported class. Add the redef keyword to refine it.")
			return
		else if mclass.arity != arity then
			error(nclassdef, "Redef error: Formal parameter arity missmatch; got {arity}, expected {mclass.arity}.")
			return
		else if nkind != null and mkind != concrete_kind and mclass.kind != mkind then
			error(nkind, "Error: refinement changed the kind from a {mclass.kind} to a {mkind}")
		else if nvisibility != null and mvisibility != public_visibility and mclass.visibility != mvisibility then
			error(nvisibility, "Error: refinement changed the visibility from a {mclass.visibility} to a {mvisibility}")
		end
		nclassdef.mclass = mclass
		nmodule.mclass2nclassdef[mclass] = nclassdef
	end

	# Visit the AST and create the MClassDef objects
	private fun build_a_mclassdef(nmodule: AModule, nclassdef: AClassdef)
	do
		var mmodule = nmodule.mmodule.as(not null)
		var objectclass = try_get_mclass_by_name(nmodule, mmodule, "Object")
		var mclass = nclassdef.mclass
		if mclass == null then return # Skip error
		#var mclassdef = nclassdef.mclassdef.as(not null)

		var names = new Array[String]
		var bounds = new Array[MType]
		if nclassdef isa AStdClassdef and mclass.arity > 0 then
			# Collect formal parameter names
			for i in [0..mclass.arity[ do
				var nfd = nclassdef.n_formaldefs[i]
				var ptname = nfd.n_id.text
				if names.has(ptname) then
					error(nfd, "Error: A formal parameter type `{ptname}' already exists")
					return
				end
				names.add(ptname)
			end

			# Revolve bound for formal parameter names
			for i in [0..mclass.arity[ do
				var nfd = nclassdef.n_formaldefs[i]
				var nfdt = nfd.n_type
				if nfdt != null then
					var bound = resolve_mtype_unchecked(nclassdef, nfdt, false)
					if bound == null then return # Forward error
					if bound.need_anchor then
						# No F-bounds!
						error(nfd, "Error: Formal parameter type `{names[i]}' bounded with a formal parameter type")
					else
						bounds.add(bound)
					end
				else if mclass.mclassdefs.is_empty then
					# No bound, then implicitely bound by nullable Object
					bounds.add(objectclass.mclass_type.as_nullable)
				else
					# Inherit the bound
					bounds.add(mclass.intro.bound_mtype.arguments[i])
				end
			end
		end

		var bound_mtype = mclass.get_mtype(bounds)
		var mclassdef = new MClassDef(mmodule, bound_mtype, nclassdef.location, names)
		nclassdef.mclassdef = mclassdef
		self.mclassdef2nclassdef[mclassdef] = nclassdef

		if mclassdef.is_intro then
			self.toolcontext.info("{mclassdef} introduces new {mclass.kind} {mclass.full_name}", 3)
		else
			self.toolcontext.info("{mclassdef} refine {mclass.kind} {mclass.full_name}", 3)
		end
	end

	# Visit the AST and set the super-types of the MClassdef objects
	private fun collect_a_mclassdef_inheritance(nmodule: AModule, nclassdef: AClassdef)
	do
		var mmodule = nmodule.mmodule.as(not null)
		var objectclass = try_get_mclass_by_name(nmodule, mmodule, "Object")
		var mclass = nclassdef.mclass.as(not null)
		var mclassdef = nclassdef.mclassdef.as(not null)

		var specobject = true
		var supertypes = new Array[MClassType]
		if nclassdef isa AStdClassdef then
			for nsc in nclassdef.n_superclasses do
				specobject = false
				var ntype = nsc.n_type
				var mtype = resolve_mtype_unchecked(nclassdef, ntype, false)
				if mtype == null then continue # Skip because of error
				if not mtype isa MClassType then
					error(ntype, "Error: supertypes cannot be a formal type")
					return
				end
				supertypes.add mtype
				#print "new super : {mclass} < {mtype}"
			end
		end
		if specobject and mclass.name != "Object" and objectclass != null and mclassdef.is_intro then
			supertypes.add objectclass.mclass_type
		end

		mclassdef.set_supertypes(supertypes)
		if not supertypes.is_empty then self.toolcontext.info("{mclassdef} new super-types: {supertypes.join(", ")}", 3)
	end

	# Check the validity of the specialization heirarchy
	private fun check_supertypes(nmodule: AModule, nclassdef: AClassdef)
	do
		var mmodule = nmodule.mmodule.as(not null)
		var objectclass = try_get_mclass_by_name(nmodule, mmodule, "Object")
		var mclass = nclassdef.mclass.as(not null)
		var mclassdef = nclassdef.mclassdef.as(not null)

		for s in mclassdef.supertypes do
			if s.is_subtype(mmodule, mclassdef.bound_mtype, mclassdef.bound_mtype) then
				error(nclassdef, "Error: Inheritance loop for class {mclass} with type {s}")
			end
		end
	end

	# Build the classes of the module `nmodule'.
	# REQUIRE: classes of imported modules are already build. (let `phase' do the job)
	private fun build_classes(nmodule: AModule)
	do
		var errcount = toolcontext.error_count
		# Force building recursively
		if nmodule.build_classes_is_done then return
		nmodule.build_classes_is_done = true
		var mmodule = nmodule.mmodule.as(not null)
		for imp in mmodule.in_importation.direct_greaters do

			build_classes(mmodule2nmodule[imp])
		end

		if errcount != toolcontext.error_count then return

		# Create all classes
		for nclassdef in nmodule.n_classdefs do
			self.build_a_mclass(nmodule, nclassdef)
		end

		if errcount != toolcontext.error_count then return

		# Create all classdefs
		for nclassdef in nmodule.n_classdefs do
			self.build_a_mclassdef(nmodule, nclassdef)
		end

		if errcount != toolcontext.error_count then return

		# Create inheritance on all classdefs
		for nclassdef in nmodule.n_classdefs do
			self.collect_a_mclassdef_inheritance(nmodule, nclassdef)
		end

		if errcount != toolcontext.error_count then return

		# Create the mclassdef hierarchy
		for nclassdef in nmodule.n_classdefs do
			var mclassdef = nclassdef.mclassdef.as(not null)
			mclassdef.add_in_hierarchy
		end

		if errcount != toolcontext.error_count then return

		# Check inheritance
		for nclassdef in nmodule.n_classdefs do
			self.check_supertypes(nmodule, nclassdef)
		end

		if errcount != toolcontext.error_count then return

		# Check unchecked ntypes
		for nclassdef in nmodule.n_classdefs do
			if nclassdef isa AStdClassdef then
				# check bound of formal parameter
				for nfd in  nclassdef.n_formaldefs do
					var nfdt = nfd.n_type
					if nfdt != null and nfdt.mtype != null then
						var bound = resolve_mtype(nclassdef, nfdt)
						if bound == null then return # Forward error
					end
				end
				# check declared super types
				for nsc in nclassdef.n_superclasses do
					var ntype = nsc.n_type
					if ntype.mtype != null then
						var mtype = resolve_mtype(nclassdef, ntype)
						if mtype == null then return # Forward error
					end
				end
			end
		end

		if errcount != toolcontext.error_count then return

		# Check clash of ancestors
		for nclassdef in nmodule.n_classdefs do
			var mclassdef = nclassdef.mclassdef.as(not null)
			var superclasses = new HashMap[MClass, MClassType]
			for scd in mclassdef.in_hierarchy.greaters do
				for st in scd.supertypes do
					if not superclasses.has_key(st.mclass) then
						superclasses[st.mclass] = st
					else if superclasses[st.mclass] != st then
						var st1 = superclasses[st.mclass].resolve_for(mclassdef.mclass.mclass_type, mclassdef.bound_mtype, mmodule, false)
						var st2 = st.resolve_for(mclassdef.mclass.mclass_type, mclassdef.bound_mtype, mmodule, false)
						if st1 != st2 then
							error(nclassdef, "Error: Incompatibles ancestors for {mclassdef.mclass}: {st1}, {st2}")
						end
					end
				end
			end
		end

		if errcount != toolcontext.error_count then return

		# TODO: Check that the super-class is not intrusive

		# Check that the superclasses are not already known (by transitivity)
		for nclassdef in nmodule.n_classdefs do
			if not nclassdef isa AStdClassdef then continue
			var mclassdef = nclassdef.mclassdef.as(not null)

			# Get the direct superclasses
			# Since we are a mclassdef, just look at the mclassdef hierarchy
			var parents = new Array[MClass]
			for sup in mclassdef.in_hierarchy.direct_greaters do
				parents.add(sup.mclass)
			end

			# Used to track duplicates of superclasses
			var seen_parents = new ArrayMap[MClass, AType]

			# The Object class
			var objectclass = try_get_mclass_by_name(nmodule, mmodule, "Object")

			# Check each declared superclass to see if it belong to the direct superclass
			for nsc in nclassdef.n_superclasses do
				var ntype = nsc.n_type
				var mtype = ntype.mtype
				if mtype == null then continue
				assert mtype isa MClassType
				var sc = mtype.mclass
				if not parents.has(sc) or sc == objectclass then
					warning(ntype, "Warning: superfluous super-class {mtype} in class {mclassdef.mclass}.")
				else if not seen_parents.has_key(sc) then
					seen_parents[sc] = ntype
				else
					warning(ntype, "Warning: duplicated super-class {mtype} in class {mclassdef.mclass}.")
				end
			end
		end
	end

	# Register the nclassdef associated to each mclassdef
	# FIXME: why not refine the MClassDef class with a nullable attribute?
	var mclassdef2nclassdef: HashMap[MClassDef, AClassdef] = new HashMap[MClassDef, AClassdef]

	# Return the static type associated to the node `ntype'.
	# `classdef' is the context where the call is made (used to understand formal types)
	# The mmodule used as context is `nclassdef.mmodule'
	# In case of problem, an error is displayed on `ntype' and null is returned.
	# FIXME: the name "resolve_mtype" is awful
	fun resolve_mtype_unchecked(nclassdef: AClassdef, ntype: AType, with_virtual: Bool): nullable MType
	do
		var name = ntype.n_id.text
		var mclassdef = nclassdef.mclassdef
		var mmodule = nclassdef.parent.as(AModule).mmodule.as(not null)
		var res: MType

		# Check virtual type
		if mclassdef != null and with_virtual then
			var prop = try_get_mproperty_by_name(ntype, mclassdef, name).as(nullable MVirtualTypeProp)
			if prop != null then
				if not ntype.n_types.is_empty then
					error(ntype, "Type error: formal type {name} cannot have formal parameters.")
				end
				res = prop.mvirtualtype
				if ntype.n_kwnullable != null then res = res.as_nullable
				ntype.mtype = res
				return res
			end
		end

		# Check parameter type
		if mclassdef != null and mclassdef.parameter_names.has(name) then
			if not ntype.n_types.is_empty then
				error(ntype, "Type error: formal type {name} cannot have formal parameters.")
			end
			for i in [0..mclassdef.parameter_names.length[ do
				if mclassdef.parameter_names[i] == name then
					res = mclassdef.mclass.mclass_type.arguments[i]
					if ntype.n_kwnullable != null then res = res.as_nullable
					ntype.mtype = res
					return res
				end
			end
			abort
		end

		# Check class
		var mclass = try_get_mclass_by_name(ntype, mmodule, name)
		if mclass != null then
			var arity = ntype.n_types.length
			if arity != mclass.arity then
				if arity == 0 then
					error(ntype, "Type error: '{name}' is a generic class.")
				else if mclass.arity == 0 then
					error(ntype, "Type error: '{name}' is not a generic class.")
				else
					error(ntype, "Type error: '{name}' has {mclass.arity} parameters ({arity} are provided).")
				end
				return null
			end
			if arity == 0 then
				res = mclass.mclass_type
				if ntype.n_kwnullable != null then res = res.as_nullable
				ntype.mtype = res
				return res
			else
				var mtypes = new Array[MType]
				for nt in ntype.n_types do
					var mt = resolve_mtype_unchecked(nclassdef, nt, with_virtual)
					if mt == null then return null # Forward error
					mtypes.add(mt)
				end
				res = mclass.get_mtype(mtypes)
				if ntype.n_kwnullable != null then res = res.as_nullable
				ntype.mtype = res
				return res
			end
		end

		# If everything fail, then give up :(
		error(ntype, "Type error: class {name} not found in module {mmodule}.")
		return null
	end

	# Return the static type associated to the node `ntype'.
	# `classdef' is the context where the call is made (used to understand formal types)
	# The mmodule used as context is `nclassdef.mmodule'
	# In case of problem, an error is displayed on `ntype' and null is returned.
	# FIXME: the name "resolve_mtype" is awful
	fun resolve_mtype(nclassdef: AClassdef, ntype: AType): nullable MType
	do
		var mtype = ntype.mtype
		if mtype == null then mtype = resolve_mtype_unchecked(nclassdef, ntype, true)
		if mtype == null then return null # Forward error

		if ntype.checked_mtype then return mtype
		if mtype isa MGenericType then
			var mmodule = nclassdef.parent.as(AModule).mmodule.as(not null)
			var mclassdef = nclassdef.mclassdef
			var mclass = mtype.mclass
			for i in [0..mclass.arity[ do
				var bound = mclass.intro.bound_mtype.arguments[i]
				var nt = ntype.n_types[i]
				var mt = resolve_mtype(nclassdef, nt)
				if mt == null then return null # forward error
				if not mt.is_subtype(mmodule, mclassdef.bound_mtype, bound) then
					error(nt, "Type error: expected {bound}, got {mt}")
					return null
				end
			end
		end
		ntype.checked_mtype = true
		return mtype
	end

end

redef class AModule
	# Flag that indicate if the class building is already completed
	var build_classes_is_done: Bool = false
	# What is the AClassdef associated to a MClass?
	# Used to check multiple definition of a class.
	var mclass2nclassdef: Map[MClass, AClassdef] = new HashMap[MClass, AClassdef]
end

redef class AClassdef
	# The associated MClass once build by a `ModelBuilder'
	var mclass: nullable MClass
	# The associated MClassDef once build by a `ModelBuilder'
	var mclassdef: nullable MClassDef
end

redef class AClasskind
	# The class kind associated with the AST node class
	private fun mkind: MClassKind is abstract
end
redef class AConcreteClasskind
	redef fun mkind do return concrete_kind
end
redef class AAbstractClasskind
	redef fun mkind do return abstract_kind
end
redef class AInterfaceClasskind
	redef fun mkind do return interface_kind
end
redef class AEnumClasskind
	redef fun mkind do return enum_kind
end
redef class AExternClasskind
	redef fun mkind do return extern_kind
end

redef class AType
	# The mtype associated to the node
	var mtype: nullable MType = null

	# Is the mtype a valid one?
	var checked_mtype: Bool = false
end
