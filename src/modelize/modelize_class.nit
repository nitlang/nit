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
	# Visit the AST and create the `MClass` objects
	private fun build_a_mclass(nmodule: AModule, nclassdef: AClassdef)
	do
		var mmodule = nmodule.mmodule.as(not null)

		var name: String
		var nkind: nullable AClasskind
		var mkind: MClassKind
		var nvisibility: nullable AVisibility
		var mvisibility: nullable MVisibility
		var arity = 0
		var names = new Array[String]
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
			# Collect formal parameter names
			for i in [0..arity[ do
				var nfd = nclassdef.n_formaldefs[i]
				var ptname = nfd.n_id.text
				if names.has(ptname) then
					error(nfd, "Error: A formal parameter type `{ptname}' already exists")
					return
				end
				for c in ptname.chars do if c >= 'a' and c<= 'z' then
					warning(nfd, "formal-type-name", "Warning: lowercase in the formal parameter type {ptname}")
					break
				end
				names.add(ptname)
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
			if nclassdef isa AStdClassdef and nclassdef.n_kwredef != null then
				error(nclassdef, "Redef error: No imported class {name} to refine.")
				return
			end
			mclass = new MClass(mmodule, name, names, mkind, mvisibility)
			#print "new class {mclass}"
		else if nclassdef isa AStdClassdef and nmodule.mclass2nclassdef.has_key(mclass) then
			error(nclassdef, "Error: A class {name} is already defined at line {nmodule.mclass2nclassdef[mclass].location.line_start}.")
			return
		else if nclassdef isa AStdClassdef and nclassdef.n_kwredef == null then
			error(nclassdef, "Redef error: {name} is an imported class. Add the redef keyword to refine it.")
			return
		else if arity != 0 and mclass.arity != arity then
			error(nclassdef, "Redef error: Formal parameter arity missmatch; got {arity}, expected {mclass.arity}.")
			return
		else if nkind != null and mkind != concrete_kind and mclass.kind != mkind then
			error(nkind, "Error: refinement changed the kind from a {mclass.kind} to a {mkind}")
		else if nvisibility != null and mvisibility != public_visibility and mclass.visibility != mvisibility then
			error(nvisibility, "Error: refinement changed the visibility from a {mclass.visibility} to a {mvisibility}")
		end
		nclassdef.mclass = mclass
		if not nmodule.mclass2nclassdef.has_key(mclass) then
			nmodule.mclass2nclassdef[mclass] = nclassdef
			nclassdef.all_defs = [nclassdef]
		else
			nmodule.mclass2nclassdef[mclass].all_defs.add(nclassdef)
		end
	end

	# Visit the AST and create the `MClassDef` objects
	private fun build_a_mclassdef(nmodule: AModule, nclassdef: AClassdef)
	do
		var mmodule = nmodule.mmodule.as(not null)
		var objectclass = try_get_mclass_by_name(nmodule, mmodule, "Object")
		var mclass = nclassdef.mclass
		if mclass == null then return # Skip error

		# In case of non-standard AClassdef, try to attach to an already existing mclassdef
		var other_nclassdef = nmodule.mclass2nclassdef[mclass]
		if other_nclassdef != nclassdef then
			assert not nclassdef isa AStdClassdef
			nclassdef.mclassdef = other_nclassdef.mclassdef
			return
		end

		var bounds = new Array[MType]
		if nclassdef isa AStdClassdef and mclass.arity > 0 then
			# Revolve bound for formal parameters
			for i in [0..mclass.arity[ do
				if nclassdef.n_formaldefs.is_empty then
					# Inherit the bound
					var bound = mclass.intro.bound_mtype.arguments[i]
					bounds.add(bound)
					continue
				end

				var nfd = nclassdef.n_formaldefs[i]
				var pname = mclass.mparameters[i].name
				if nfd.n_id.text != pname then
					error(nfd.n_id, "Error: Formal parameter type #{i} `{nfd.n_id.text}` must be named `{pname}' as in the original definition in module `{mclass.intro.mmodule}`.")
				end
				var nfdt = nfd.n_type
				if nfdt != null then
					var bound = resolve_mtype_unchecked(mmodule, null, nfdt, false)
					if bound == null then return # Forward error
					if bound.need_anchor then
						# No F-bounds!
						error(nfd, "Error: Formal parameter type `{pname}' bounded with a formal parameter type")
					else
						bounds.add(bound)
						nfd.bound = bound
					end
					if bound isa MClassType and bound.mclass.kind == enum_kind then
						warning(nfdt, "useless-bound", "Warning: Useless formal parameter type since `{bound}` cannnot have subclasses.")
					end
				else if mclass.mclassdefs.is_empty then
					# No bound, then implicitely bound by nullable Object
					var bound = objectclass.mclass_type.as_nullable
					bounds.add(bound)
					nfd.bound = bound
				else
					# Inherit the bound
					var bound = mclass.intro.bound_mtype.arguments[i]
					bounds.add(bound)
					nfd.bound = bound
				end
			end
		end

		var bound_mtype = mclass.get_mtype(bounds)
		var mclassdef = new MClassDef(mmodule, bound_mtype, nclassdef.location)
		nclassdef.mclassdef = mclassdef
		self.mclassdef2nclassdef[mclassdef] = nclassdef

		if nclassdef isa AStdClassdef then
			var ndoc = nclassdef.n_doc
			if ndoc != null then
				var mdoc = ndoc.to_mdoc
				mclassdef.mdoc = mdoc
				mdoc.original_mentity = mclassdef
			else if mclassdef.is_intro and mclass.visibility >= public_visibility then
				advice(nclassdef, "missing-doc", "Documentation warning: Undocumented public class `{mclass}`")
			end
		end

		if mclassdef.is_intro then
			self.toolcontext.info("{mclassdef} introduces new {mclass.kind} {mclass.full_name}", 3)
		else
			self.toolcontext.info("{mclassdef} refine {mclass.kind} {mclass.full_name}", 3)
		end
	end

	# Visit the AST and set the super-types of the `MClassDef` objects
	private fun collect_a_mclassdef_inheritance(nmodule: AModule, nclassdef: AClassdef)
	do
		var mmodule = nmodule.mmodule.as(not null)
		var objectclass = try_get_mclass_by_name(nmodule, mmodule, "Object")
		var pointerclass = try_get_mclass_by_name(nmodule, mmodule, "Pointer")
		var mclass = nclassdef.mclass.as(not null)
		var mclassdef = nclassdef.mclassdef.as(not null)

		# Do we need to specify Object as a super class?
		var specobject = true

		# Do we need to specify Pointer as a super class? (is only valid
		# if `nclassdef` is an extern class)
		var specpointer = true

		var supertypes = new Array[MClassType]
		if nclassdef isa AStdClassdef then
			for nsc in nclassdef.n_superclasses do
				specobject = false
				var ntype = nsc.n_type
				var mtype = resolve_mtype_unchecked(mmodule, mclassdef, ntype, false)
				if mtype == null then continue # Skip because of error
				if not mtype isa MClassType then
					error(ntype, "Error: supertypes cannot be a formal type")
					return
				end
				if not mclass.kind.can_specialize(mtype.mclass.kind) then
					error(ntype, "Error: {mclass.kind} {mclass} cannot specialize {mtype.mclass.kind} {mtype.mclass}")
				end
				supertypes.add mtype
				#print "new super : {mclass} < {mtype}"
				if mtype.mclass.kind == extern_kind then specpointer = false
			end
		end

		if mclassdef.is_intro and objectclass != null then
			if mclass.kind == extern_kind and mclass.name != "Pointer" then
				# it is an extern class, but not a Pointer
				if specpointer then supertypes.add pointerclass.mclass_type
			else if specobject and mclass.name != "Object" then
				# it is a standard class without super class (but is not Object)
				supertypes.add objectclass.mclass_type
			end
		end

		mclassdef.set_supertypes(supertypes)
		if not supertypes.is_empty then self.toolcontext.info("{mclassdef} new super-types: {supertypes.join(", ")}", 3)
	end

	# Check the validity of the specialization heirarchy
	private fun check_supertypes(nmodule: AModule, nclassdef: AClassdef)
	do
		var mmodule = nmodule.mmodule.as(not null)
		var mclass = nclassdef.mclass.as(not null)
		var mclassdef = nclassdef.mclassdef.as(not null)

		for s in mclassdef.supertypes do
			if s.is_subtype(mmodule, mclassdef.bound_mtype, mclassdef.bound_mtype) then
				error(nclassdef, "Error: Inheritance loop for class {mclass} with type {s}")
			end
		end
	end

	# Build the classes of the module `nmodule`.
	# REQUIRE: classes of imported modules are already build. (let `phase` do the job)
	private fun build_classes(nmodule: AModule)
	do
		var errcount = toolcontext.error_count
		# Force building recursively
		if nmodule.build_classes_is_done then return
		nmodule.build_classes_is_done = true
		var mmodule = nmodule.mmodule.as(not null)
		for imp in mmodule.in_importation.direct_greaters do

			if not mmodule2nmodule.has_key(imp) then continue
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
		for mclassdef in mmodule.mclassdefs do
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
				var mclassdef = nclassdef.mclassdef
				# check bound of formal parameter
				for nfd in  nclassdef.n_formaldefs do
					var nfdt = nfd.n_type
					if nfdt != null and nfdt.mtype != null then
						var bound = resolve_mtype(mmodule, mclassdef, nfdt)
						if bound == null then return # Forward error
					end
				end
				# check declared super types
				for nsc in nclassdef.n_superclasses do
					var ntype = nsc.n_type
					if ntype.mtype != null then
						var mtype = resolve_mtype(mmodule, mclassdef, ntype)
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
					# Skip the warning on generated code
					if ntype.location.file != null and not ntype.location.file.filename.is_empty then
						warning(ntype, "useless-superclass", "Warning: superfluous super-class {mtype} in class {mclassdef.mclass}.")
					end
				else if not seen_parents.has_key(sc) then
					seen_parents[sc] = ntype
				else
					warning(ntype, "useless-superclass", "Warning: duplicated super-class {mtype} in class {mclassdef.mclass}.")
				end
			end
		end
	end

	# Register the nclassdef associated to each mclassdef
	# FIXME: why not refine the `MClassDef` class with a nullable attribute?
	var mclassdef2nclassdef = new HashMap[MClassDef, AClassdef]

	# Return the static type associated to the node `ntype`.
	# `mmodule` and `mclassdef` is the context where the call is made (used to understand formal types)
	# In case of problem, an error is displayed on `ntype` and null is returned.
	# FIXME: the name "resolve_mtype" is awful
	fun resolve_mtype_unchecked(mmodule: MModule, mclassdef: nullable MClassDef, ntype: AType, with_virtual: Bool): nullable MType
	do
		var name = ntype.n_id.text
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
		if mclassdef != null then
			for p in mclassdef.mclass.mparameters do
				if p.name != name then continue

				if not ntype.n_types.is_empty then
					error(ntype, "Type error: formal type {name} cannot have formal parameters.")
				end

				res = p
				if ntype.n_kwnullable != null then res = res.as_nullable
				ntype.mtype = res
				return res
			end
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
					var mt = resolve_mtype_unchecked(mmodule, mclassdef, nt, with_virtual)
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

	# Return the static type associated to the node `ntype`.
	# `mmodule` and `mclassdef` is the context where the call is made (used to understand formal types)
	# In case of problem, an error is displayed on `ntype` and null is returned.
	# FIXME: the name "resolve_mtype" is awful
	fun resolve_mtype(mmodule: MModule, mclassdef: nullable MClassDef, ntype: AType): nullable MType
	do
		var mtype = ntype.mtype
		if mtype == null then mtype = resolve_mtype_unchecked(mmodule, mclassdef, ntype, true)
		if mtype == null then return null # Forward error

		if ntype.checked_mtype then return mtype
		if mtype isa MGenericType then
			var mclass = mtype.mclass
			for i in [0..mclass.arity[ do
				var bound = mclass.intro.bound_mtype.arguments[i]
				var nt = ntype.n_types[i]
				var mt = resolve_mtype(mmodule, mclassdef, nt)
				if mt == null then return null # forward error
				var anchor
				if mclassdef != null then anchor = mclassdef.bound_mtype else anchor = null
				if not mt.is_subtype(mmodule, anchor, bound) then
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
	# What is the AClassdef associated to a `MClass`?
	# Used to check multiple definition of a class.
	var mclass2nclassdef: Map[MClass, AClassdef] = new HashMap[MClass, AClassdef]
end

redef class AClassdef
	# The associated MClass once build by a `ModelBuilder`
	var mclass: nullable MClass
	# The associated MClassDef once build by a `ModelBuilder`
	var mclassdef: nullable MClassDef
	# All (self and other) definitions for the same mclassdef
	var all_defs: nullable Array[AClassdef]
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

redef class AFormaldef
	# The associated parameter type
	var mtype: nullable MParameterType = null

	# The associated bound
	var bound: nullable MType = null
end

redef class AType
	# The mtype associated to the node
	var mtype: nullable MType = null

	# Is the mtype a valid one?
	var checked_mtype: Bool = false
end
