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
	# Run `AModule::build_classes` on each module
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

			# Check for conflicting class full-names in the project
			if mmodule.mgroup != null and mvisibility >= protected_visibility then
				var mclasses = model.get_mclasses_by_name(name)
				if mclasses != null then for other in mclasses do
					if other.intro_mmodule.mgroup != null and other.intro_mmodule.mgroup.mproject == mmodule.mgroup.mproject then
						# Skip classes that are buggy
						if other.try_intro == null then continue
						error(nclassdef, "Error: A class named `{other.full_name}` is already defined in module `{other.intro_mmodule}` at {other.intro.location}.")
						break
					end
				end
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
					if objectclass == null then
						error(nfd, "Error: Formal parameter type `{pname}' unbounded but no Object class exist.")
						return
					end
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
		var mmodule = nmodule.mmodule
		if mmodule == null then return
		var objectclass = try_get_mclass_by_name(nmodule, mmodule, "Object")
		var pointerclass = try_get_mclass_by_name(nmodule, mmodule, "Pointer")
		var mclass = nclassdef.mclass
		if mclass == null then return
		var mclassdef = nclassdef.mclassdef
		if mclassdef == null then return

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
		var mmodule = nmodule.mmodule
		if mmodule == null then return
		var mclass = nclassdef.mclass
		if mclass == null then return
		var mclassdef = nclassdef.mclassdef
		if mclassdef == null then return

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
		var mmodule = nmodule.mmodule
		if mmodule == null then return
		for imp in mmodule.in_importation.direct_greaters do
			var nimp = mmodule2node(imp)
			if nimp != null then build_classes(nimp)
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
			var mclassdef = nclassdef.mclassdef
			if mclassdef == null then continue
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
			var mclassdef = nclassdef.mclassdef
			if mclassdef == null then continue

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

	# Registration of the nclassdef associated to each mclassdef
	private var mclassdef2nclassdef = new HashMap[MClassDef, AClassdef]
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
