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

# Classes, types and properties
#
# All three concepts are defined in this same module because these are strongly connected:
# * types are based on classes
# * classes contains properties
# * some properties are types (virtual types)
#
# TODO: liearization, extern stuff
# FIXME: better handling of the types
module model

import mmodule
import mdoc
import ordered_tree
private import more_collections

redef class MEntity
	# The visibility of the MEntity.
	#
	# MPackages, MGroups and MModules are always public.
	# The visibility of `MClass` and `MProperty` is defined by the keyword used.
	# `MClassDef` and `MPropDef` return the visibility of `MClass` and `MProperty`.
	fun visibility: MVisibility do return public_visibility
end

redef class Model
	# All known classes
	var mclasses = new Array[MClass]

	# All known properties
	var mproperties = new Array[MProperty]

	# Hierarchy of class definition.
	#
	# Each classdef is associated with its super-classdefs in regard to
	# its module of definition.
	#
	# ~~~
	# var m = new ModelDiamond
	# assert     m.mclassdef_hierarchy.has_edge(m.mclassdef_b, m.mclassdef_a)
	# assert not m.mclassdef_hierarchy.has_edge(m.mclassdef_a, m.mclassdef_b)
	# assert not m.mclassdef_hierarchy.has_edge(m.mclassdef_b, m.mclassdef_c)
	# ~~~
	var mclassdef_hierarchy = new POSet[MClassDef]

	# Class-type hierarchy restricted to the introduction.
	#
	# The idea is that what is true on introduction is always true whatever
	# the module considered.
	# Therefore, this hierarchy is used for a fast positive subtype check.
	#
	# This poset will evolve in a monotonous way:
	# * Two non connected nodes will remain unconnected
	# * New nodes can appear with new edges
	private var intro_mtype_specialization_hierarchy = new POSet[MClassType]

	# Global overlapped class-type hierarchy.
	# The hierarchy when all modules are combined.
	# Therefore, this hierarchy is used for a fast negative subtype check.
	#
	# This poset will evolve in an anarchic way. Loops can even be created.
	#
	# FIXME decide what to do on loops
	private var full_mtype_specialization_hierarchy = new POSet[MClassType]

	# Collections of classes grouped by their short name
	private var mclasses_by_name = new MultiHashMap[String, MClass]

	# Return all classes named `name`.
	#
	# If such a class does not exist, null is returned
	# (instead of an empty array)
	#
	# Visibility or modules are not considered
	#
	# ~~~
	# var m = new ModelStandalone
	# assert m.get_mclasses_by_name("Object") == [m.mclass_o]
	# assert m.get_mclasses_by_name("Fail") == null
	# ~~~
	fun get_mclasses_by_name(name: String): nullable Array[MClass]
	do
		return mclasses_by_name.get_or_null(name)
	end

	# Collections of properties grouped by their short name
	private var mproperties_by_name = new MultiHashMap[String, MProperty]

	# Return all properties named `name`.
	#
	# If such a property does not exist, null is returned
	# (instead of an empty array)
	#
	# Visibility or modules are not considered
	fun get_mproperties_by_name(name: String): nullable Array[MProperty]
	do
		return mproperties_by_name.get_or_null(name)
	end

	# The only null type
	var null_type = new MNullType(self)

	# The only bottom type
	var bottom_type: MBottomType = null_type.as_notnull

	# Build an ordered tree with from `concerns`
	fun concerns_tree(mconcerns: Collection[MConcern]): ConcernsTree do
		var seen = new HashSet[MConcern]
		var res = new ConcernsTree

		var todo = new Array[MConcern]
		todo.add_all mconcerns

		while not todo.is_empty do
			var c = todo.pop
			if seen.has(c) then continue
			var pc = c.parent_concern
			if pc == null then
				res.add(null, c)
			else
				res.add(pc, c)
				todo.add(pc)
			end
			seen.add(c)
		end

		return res
	end
end

# An OrderedTree bound to MEntity.
#
# We introduce a new class so it can be easily refined by tools working
# with a Model.
class MEntityTree
	super OrderedTree[MEntity]
end

# A MEntityTree borned to MConcern.
#
# TODO remove when nitdoc is fully merged with model_collect
class ConcernsTree
	super OrderedTree[MConcern]
end

redef class MGroup
	redef var is_test is lazy do
		var parent = self.parent
		if parent != null and parent.is_test then return true
		return name == "tests"
	end
end

redef class MModule
	# All the classes introduced in the module
	var intro_mclasses = new Array[MClass]

	# All the class definitions of the module
	# (introduction and refinement)
	var mclassdefs = new Array[MClassDef]

	private var mclassdef_sorter: MClassDefSorter is lazy do
		return new MClassDefSorter(self)
	end

	private var mpropdef_sorter: MPropDefSorter is lazy do
		return new MPropDefSorter(self)
	end

	# Does the current module has a given class `mclass`?
	# Return true if the mmodule introduces, refines or imports a class.
	# Visibility is not considered.
	fun has_mclass(mclass: MClass): Bool
	do
		return self.in_importation <= mclass.intro_mmodule
	end

	# Full hierarchy of introduced and imported classes.
	#
	# Create a new hierarchy got by flattening the classes for the module
	# and its imported modules.
	# Visibility is not considered.
	#
	# Note: this function is expensive and is usually used for the main
	# module of a program only. Do not use it to do your own subtype
	# functions.
	fun flatten_mclass_hierarchy: POSet[MClass]
	do
		var res = self.flatten_mclass_hierarchy_cache
		if res != null then return res
                self.flatten_mclass_hierarchy_cache = new POSet[MClass]
		for m in self.in_importation.greaters do
			for cd in m.mclassdefs do
                                unsafe_update_hierarchy_cache(cd)
			end
		end
		return self.flatten_mclass_hierarchy_cache.as(not null)
	end

        # Adds another class definition in the modue.
        # Updates the class hierarchy cache.
        fun add_mclassdef(mclassdef: MClassDef)
        do
                self.mclassdefs.add(mclassdef)
                if self.flatten_mclass_hierarchy_cache != null then
                        unsafe_update_hierarchy_cache(mclassdef)
                end
        end

        # Adds a class definition inside `flatten_mclass_hierarchy_cache` without
        # null check. The caller must have initialized the cache.
        protected fun unsafe_update_hierarchy_cache(mclassdef: MClassDef)
        do
                var hierarchy = self.flatten_mclass_hierarchy_cache.as(not null)
                # Update the cache
                var c = mclassdef.mclass
                hierarchy.add_node(c)
                for s in mclassdef.supertypes do
                        hierarchy.add_edge(c, s.mclass)
                end
        end

	# Sort a given array of classes using the linearization order of the module
	# The most general is first, the most specific is last
	fun linearize_mclasses(mclasses: Array[MClass])
	do
		self.flatten_mclass_hierarchy.sort(mclasses)
	end

	# Sort a given array of class definitions using the linearization order of the module
	# the refinement link is stronger than the specialisation link
	# The most general is first, the most specific is last
	fun linearize_mclassdefs(mclassdefs: Array[MClassDef])
	do
		mclassdef_sorter.sort(mclassdefs)
	end

	# Sort a given array of property definitions using the linearization order of the module
	# the refinement link is stronger than the specialisation link
	# The most general is first, the most specific is last
	fun linearize_mpropdefs(mpropdefs: Array[MPropDef])
	do
		mpropdef_sorter.sort(mpropdefs)
	end

	private var flatten_mclass_hierarchy_cache: nullable POSet[MClass] = null

	# The primitive type `Object`, the root of the class hierarchy
	var object_type: MClassType = self.get_primitive_class("Object").mclass_type is lazy

	# The type `Pointer`, super class to all extern classes
	var pointer_type: MClassType = self.get_primitive_class("Pointer").mclass_type is lazy

	# The primitive type `Bool`
	var bool_type: MClassType = self.get_primitive_class("Bool").mclass_type is lazy

	# The primitive type `Int`
	var int_type: MClassType = self.get_primitive_class("Int").mclass_type is lazy

	# The primitive type `Byte`
	var byte_type: MClassType = self.get_primitive_class("Byte").mclass_type is lazy

	# The primitive type `Int8`
	var int8_type: MClassType = self.get_primitive_class("Int8").mclass_type is lazy

	# The primitive type `Int16`
	var int16_type: MClassType = self.get_primitive_class("Int16").mclass_type is lazy

	# The primitive type `UInt16`
	var uint16_type: MClassType = self.get_primitive_class("UInt16").mclass_type is lazy

	# The primitive type `Int32`
	var int32_type: MClassType = self.get_primitive_class("Int32").mclass_type is lazy

	# The primitive type `UInt32`
	var uint32_type: MClassType = self.get_primitive_class("UInt32").mclass_type is lazy

	# The primitive type `Char`
	var char_type: MClassType = self.get_primitive_class("Char").mclass_type is lazy

	# The primitive type `Float`
	var float_type: MClassType = self.get_primitive_class("Float").mclass_type is lazy

	# The primitive type `String`
	var string_type: MClassType = self.get_primitive_class("String").mclass_type is lazy

	# The primitive type `CString`
	var c_string_type: MClassType = self.get_primitive_class("CString").mclass_type is lazy

	# A primitive type of `Array`
	fun array_type(elt_type: MType): MClassType do return array_class.get_mtype([elt_type])

	# The primitive class `Array`
	var array_class: MClass = self.get_primitive_class("Array") is lazy

	# A primitive type of `NativeArray`
	fun native_array_type(elt_type: MType): MClassType do return native_array_class.get_mtype([elt_type])

	# The primitive class `NativeArray`
	var native_array_class: MClass = self.get_primitive_class("NativeArray") is lazy

	# The primitive type `Sys`, the main type of the program, if any
	fun sys_type: nullable MClassType
	do
		var clas = self.model.get_mclasses_by_name("Sys")
		if clas == null then return null
		return get_primitive_class("Sys").mclass_type
	end

	# The primitive type `Finalizable`
	# Used to tag classes that need to be finalized.
	fun finalizable_type: nullable MClassType
	do
		var clas = self.model.get_mclasses_by_name("Finalizable")
		if clas == null then return null
		return get_primitive_class("Finalizable").mclass_type
	end

	# Force to get the primitive class named `name` or abort
	fun get_primitive_class(name: String): MClass
	do
		var cla = self.model.get_mclasses_by_name(name)
		# Filter classes by introducing module
		if cla != null then cla = [for c in cla do if self.in_importation <= c.intro_mmodule then c]
		if cla == null or cla.is_empty then
			if name == "Bool" and self.model.get_mclasses_by_name("Object") != null then
				# Bool is injected because it is needed by engine to code the result
				# of the implicit casts.
				var loc = model.no_location
				var c = new MClass(self, name, loc, null, enum_kind, public_visibility)
				var cladef = new MClassDef(self, c.mclass_type, loc)
				cladef.set_supertypes([object_type])
				cladef.add_in_hierarchy
				return c
			end
			print_error("Fatal Error: no primitive class {name} in {self}")
			exit(1)
			abort
		end
		if cla.length != 1 then
			var msg = "Fatal Error: more than one primitive class {name} in {self}:"
			for c in cla do msg += " {c.full_name}"
			print_error msg
			#exit(1)
		end
		return cla.first
	end

	# Try to get the primitive method named `name` on the type `recv`
	fun try_get_primitive_method(name: String, recv: MClass): nullable MMethod
	do
		var props = self.model.get_mproperties_by_name(name)
		if props == null then return null
		var res: nullable MMethod = null
		var recvtype = recv.intro.bound_mtype
		for mprop in props do
			assert mprop isa MMethod
			if not recvtype.has_mproperty(self, mprop) then continue
			if res == null then
				res = mprop
			else if res != mprop then
				print_error("Fatal Error: ambigous property name '{name}'; conflict between {mprop.full_name} and {res.full_name}")
				abort
			end
		end
		return res
	end
end

private class MClassDefSorter
	super Comparator
	redef type COMPARED: MClassDef
	var mmodule: MModule
	redef fun compare(a, b)
	do
		var ca = a.mclass
		var cb = b.mclass
		if ca != cb then return mmodule.flatten_mclass_hierarchy.compare(ca, cb)
		return mmodule.model.mclassdef_hierarchy.compare(a, b)
	end
end

private class MPropDefSorter
	super Comparator
	redef type COMPARED: MPropDef
	var mmodule: MModule

	redef fun compare(pa, pb)
	do
		var a = pa.mclassdef
		var b = pb.mclassdef
		return mmodule.mclassdef_sorter.compare(a, b)
	end
end

# A named class
#
# `MClass`es are global to the model; it means that a `MClass` is not bound
# to a specific `MModule`.
#
# This characteristic helps the reasoning about classes in a program since a
# single `MClass` object always denote the same class.
#
# The drawback is that classes (`MClass`) contain almost nothing by themselves.
# These do not really have properties nor belong to a hierarchy since the property and the
# hierarchy of a class depends of the refinement in the modules.
#
# Most services on classes require the precision of a module, and no one can asks what are
# the super-classes of a class nor what are properties of a class without precising what is
# the module considered.
#
# For instance, during the typing of a source-file, the module considered is the module of the file.
# eg. the question *is the method `foo` exists in the class `Bar`?* must be reformulated into
# *is the method `foo` exists in the class `Bar` in the current module?*
#
# During some global analysis, the module considered may be the main module of the program.
class MClass
	super MEntity

	# The module that introduce the class
	#
	# While classes are not bound to a specific module,
	# the introducing module is used for naming and visibility.
	var intro_mmodule: MModule

	# The short name of the class
	# In Nit, the name of a class cannot evolve in refinements
	redef var name

	redef var location

	# The canonical name of the class
	#
	# It is the name of the class prefixed by the full_name of the `intro_mmodule`
	# Example: `"owner::module::MyClass"`
	redef var full_name is lazy do
		return "{self.intro_mmodule.namespace_for(visibility)}::{name}"
	end

	redef var c_name is lazy do
		return "{intro_mmodule.c_namespace_for(visibility)}__{name.to_cmangle}"
	end

	# The number of generic formal parameters
	# 0 if the class is not generic
	var arity: Int is noinit

	# Each generic formal parameters in order.
	# is empty if the class is not generic
	var mparameters = new Array[MParameterType]

	# A string version of the signature a generic class.
	#
	# eg. `Map[K: nullable Object, V: nullable Object]`
	#
	# If the class in non generic the name is just given.
	#
	# eg. `Object`
	fun signature_to_s: String
	do
		if arity == 0 then return name
		var res = new FlatBuffer
		res.append name
		res.append "["
		for i in [0..arity[ do
			if i > 0 then res.append ", "
			res.append mparameters[i].name
			res.append ": "
			res.append intro.bound_mtype.arguments[i].to_s
		end
		res.append "]"
		return res.to_s
	end

	# Initialize `mparameters` from their names.
	protected fun setup_parameter_names(parameter_names: nullable Array[String]) is
		autoinit
	do
		if parameter_names == null then
			self.arity = 0
		else
			self.arity = parameter_names.length
		end

		# Create the formal parameter types
		if arity > 0 then
			assert parameter_names != null
			var mparametertypes = new Array[MParameterType]
			for i in [0..arity[ do
				var mparametertype = new MParameterType(self, i, parameter_names[i])
				mparametertypes.add(mparametertype)
			end
			self.mparameters = mparametertypes
			var mclass_type = new MGenericType(self, mparametertypes)
			self.mclass_type = mclass_type
			self.get_mtype_cache[mparametertypes] = mclass_type
		else
			self.mclass_type = new MClassType(self)
		end
	end

	# The kind of the class (interface, abstract class, etc.)
	#
	# In Nit, the kind of a class cannot evolve in refinements.
	var kind: MClassKind

	# The visibility of the class
	#
	# In Nit, the visibility of a class cannot evolve in refinements.
	redef var visibility

	init
	do
		intro_mmodule.intro_mclasses.add(self)
		var model = intro_mmodule.model
		model.mclasses_by_name.add_one(name, self)
		model.mclasses.add(self)
	end

	redef fun model do return intro_mmodule.model

	# All class definitions (introduction and refinements)
	var mclassdefs = new Array[MClassDef]

	# Alias for `name`
	redef fun to_s do return self.name

	# The definition that introduces the class.
	#
	# Warning: such a definition may not exist in the early life of the object.
	# In this case, the method will abort.
	#
	# Use `try_intro` instead.
	var intro: MClassDef is noinit

	# The definition that introduces the class or `null` if not yet known.
	#
	# SEE: `intro`
	fun try_intro: nullable MClassDef do
		if isset _intro then return _intro else return null
	end

	# Return the class `self` in the class hierarchy of the module `mmodule`.
	#
	# SEE: `MModule::flatten_mclass_hierarchy`
	# REQUIRE: `mmodule.has_mclass(self)`
	fun in_hierarchy(mmodule: MModule): POSetElement[MClass]
	do
		return mmodule.flatten_mclass_hierarchy[self]
	end

	# The principal static type of the class.
	#
	# For non-generic class, `mclass_type` is the only `MClassType` based
	# on self.
	#
	# For a generic class, the arguments are the formal parameters.
	# i.e.: for the class `Array[E:Object]`, the `mclass_type` is `Array[E]`.
	# If you want `Array[Object]`, see `MClassDef::bound_mtype`.
	#
	# For generic classes, the mclass_type is also the way to get a formal
	# generic parameter type.
	#
	# To get other types based on a generic class, see `get_mtype`.
	#
	# ENSURE: `mclass_type.mclass == self`
	var mclass_type: MClassType is noinit

	# Return a generic type based on the class
	# Is the class is not generic, then the result is `mclass_type`
	#
	# REQUIRE: `mtype_arguments.length == self.arity`
	fun get_mtype(mtype_arguments: Array[MType]): MClassType
	do
		assert mtype_arguments.length == self.arity
		if self.arity == 0 then return self.mclass_type
		var res = get_mtype_cache.get_or_null(mtype_arguments)
		if res != null then return res
		res = new MGenericType(self, mtype_arguments)
		self.get_mtype_cache[mtype_arguments.to_a] = res
		return res
	end

	private var get_mtype_cache = new HashMap[Array[MType], MGenericType]

	# Is there a `new` factory to allow the pseudo instantiation?
	var has_new_factory = false is writable

	# Is `self` a standard or abstract class kind?
	var is_class: Bool is lazy do return kind == concrete_kind or kind == abstract_kind

	# Is `self` an interface kind?
	var is_interface: Bool is lazy do return kind == interface_kind

	# Is `self` an enum kind?
	var is_enum: Bool is lazy do return kind == enum_kind

	# Is `self` and abstract class?
	var is_abstract: Bool is lazy do return kind == abstract_kind

	redef var is_test is lazy do return intro.is_test

	redef fun mdoc_or_fallback
	do
		# Don’t use `intro.mdoc_or_fallback` because it would create an infinite
		# recursion.
		return intro.mdoc
	end
end


# A definition (an introduction or a refinement) of a class in a module
#
# A `MClassDef` is associated with an explicit (or almost) definition of a
# class. Unlike `MClass`, a `MClassDef` is a local definition that belong to
# a specific class and a specific module, and contains declarations like super-classes
# or properties.
#
# It is the class definitions that are the backbone of most things in the model:
# ClassDefs are defined with regard with other classdefs.
# Refinement and specialization are combined to produce a big poset called the `Model::mclassdef_hierarchy`.
#
# Moreover, the extension and the intention of types is defined by looking at the MClassDefs.
class MClassDef
	super MEntity

	# The module where the definition is
	var mmodule: MModule

	# The associated `MClass`
	var mclass: MClass is noinit

	# The bounded type associated to the mclassdef
	#
	# For a non-generic class, `bound_mtype` and `mclass.mclass_type`
	# are the same type.
	#
	# Example:
	# For the classdef Array[E: Object], the bound_mtype is Array[Object].
	# If you want Array[E], then see `mclass.mclass_type`
	#
	# ENSURE: `bound_mtype.mclass == self.mclass`
	var bound_mtype: MClassType

	redef var location

	redef fun visibility do return mclass.visibility

	# Internal name combining the module and the class
	# Example: "mymodule$MyClass"
	redef var to_s is noinit

	init
	do
		self.mclass = bound_mtype.mclass
		mmodule.add_mclassdef(self)
		mclass.mclassdefs.add(self)
		if mclass.intro_mmodule == mmodule then
			assert not isset mclass._intro
			mclass.intro = self
		end
		self.to_s = "{mmodule}${mclass}"
	end

	# Actually the name of the `mclass`
	redef fun name do return mclass.name

	# The module and class name separated by a '$'.
	#
	# The short-name of the class is used for introduction.
	# Example: "my_module$MyClass"
	#
	# The full-name of the class is used for refinement.
	# Example: "my_module$intro_module::MyClass"
	redef var full_name is lazy do
		if is_intro then
			# public gives 'p$A'
			# private gives 'p::m$A'
			return "{mmodule.namespace_for(mclass.visibility)}${mclass.name}"
		else if mclass.intro_mmodule.mpackage != mmodule.mpackage then
			# public gives 'q::n$p::A'
			# private gives 'q::n$p::m::A'
			return "{mmodule.full_name}${mclass.full_name}"
		else if mclass.visibility > private_visibility then
			# public gives 'p::n$A'
			return "{mmodule.full_name}${mclass.name}"
		else
			# private gives 'p::n$::m::A' (redundant p is omitted)
			return "{mmodule.full_name}$::{mclass.intro_mmodule.name}::{mclass.name}"
		end
	end

	redef var c_name is lazy do
		if is_intro then
			return "{mmodule.c_namespace_for(mclass.visibility)}___{mclass.c_name}"
		else if mclass.intro_mmodule.mpackage == mmodule.mpackage and mclass.visibility > private_visibility then
			return "{mmodule.c_name}___{mclass.name.to_cmangle}"
		else
			return "{mmodule.c_name}___{mclass.c_name}"
		end
	end

	redef fun model do return mmodule.model

	# All declared super-types
	# FIXME: quite ugly but not better idea yet
	var supertypes = new Array[MClassType]

	# Register some super-types for the class (ie "super SomeType")
	#
	# The hierarchy must not already be set
	# REQUIRE: `self.in_hierarchy == null`
	fun set_supertypes(supertypes: Array[MClassType])
	do
		assert unique_invocation: self.in_hierarchy == null
		var mmodule = self.mmodule
		var model = mmodule.model
		var mtype = self.bound_mtype

		for supertype in supertypes do
			self.supertypes.add(supertype)

			# Register in full_type_specialization_hierarchy
			model.full_mtype_specialization_hierarchy.add_edge(mtype, supertype)
			# Register in intro_type_specialization_hierarchy
			if mclass.intro_mmodule == mmodule and supertype.mclass.intro_mmodule == mmodule then
				model.intro_mtype_specialization_hierarchy.add_edge(mtype, supertype)
			end
		end

	end

	# Collect the super-types (set by set_supertypes) to build the hierarchy
	#
	# This function can only invoked once by class
	# REQUIRE: `self.in_hierarchy == null`
	# ENSURE: `self.in_hierarchy != null`
	fun add_in_hierarchy
	do
		assert unique_invocation: self.in_hierarchy == null
		var model = mmodule.model
		var res = model.mclassdef_hierarchy.add_node(self)
		self.in_hierarchy = res
		var mtype = self.bound_mtype

		# Here we need to connect the mclassdef to its pairs in the mclassdef_hierarchy
		# The simpliest way is to attach it to collect_mclassdefs
		for mclassdef in mtype.collect_mclassdefs(mmodule) do
			res.poset.add_edge(self, mclassdef)
		end
	end

	# The view of the class definition in `mclassdef_hierarchy`
	var in_hierarchy: nullable POSetElement[MClassDef] = null

	# Is the definition the one that introduced `mclass`?
	fun is_intro: Bool do return isset mclass._intro and mclass.intro == self

	# All properties introduced by the classdef
	var intro_mproperties = new Array[MProperty]

	# All property introductions and redefinitions in `self` (not inheritance).
	var mpropdefs = new Array[MPropDef]

	# The special default_init constructor
	var default_init: nullable MMethodDef = null is writable

	# All property introductions and redefinitions (not inheritance) in `self` by its associated property.
	var mpropdefs_by_property = new HashMap[MProperty, MPropDef]

	# Return the direct parent mtype of `self`
	# Exemple
	# ~~~nitish
	# module 1
	#
	#	class A
	#	class B
	#		super A
	#
	# module 2
	#
	#	redef class A
	#	class C
	#		super B
	#
	# mclassdef_C.get_direct_supermtype == [B]
	# ~~~~
	fun get_direct_supermtype: Collection[MClassType]
	do
		# Get the potentiel direct parents
		var parents = in_hierarchy.direct_greaters
		# Stock the potentiel direct parents
		var res = supertypes
		for parent in parents do
			# remove all super parents of the potentiel direct parents
			res.remove_all(parent.supertypes)
			# if the length of the potentiel direct parent equal 1 break
			if res.length == 1 then break
		end
		return res
	end

	redef fun mdoc_or_fallback do return mdoc or else mclass.mdoc_or_fallback
end

# A global static type
#
# MType are global to the model; it means that a `MType` is not bound to a
# specific `MModule`.
# This characteristic helps the reasoning about static types in a program
# since a single `MType` object always denote the same type.
#
# However, because a `MType` is global, it does not really have properties
# nor have subtypes to a hierarchy since the property and the class hierarchy
# depends of a module.
# Moreover, virtual types an formal generic parameter types also depends on
# a receiver to have sense.
#
# Therefore, most method of the types require a module and an anchor.
# The module is used to know what are the classes and the specialization
# links.
# The anchor is used to know what is the bound of the virtual types and formal
# generic parameter types.
#
# MType are not directly usable to get properties. See the `anchor_to` method
# and the `MClassType` class.
#
# FIXME: the order of the parameters is not the best. We mus pick on from:
#  * foo(mmodule, anchor, othertype)
#  * foo(othertype, anchor, mmodule)
#  * foo(anchor, mmodule, othertype)
#  * foo(othertype, mmodule, anchor)
abstract class MType
	super MEntity

	redef fun name do return to_s

	# Return true if `self` is an subtype of `sup`.
	# The typing is done using the standard typing policy of Nit.
	#
	# REQUIRE: `anchor == null implies not self.need_anchor and not sup.need_anchor`
	# REQUIRE: `anchor != null implies self.can_resolve_for(anchor, null, mmodule) and sup.can_resolve_for(anchor, null, mmodule)`
	fun is_subtype(mmodule: MModule, anchor: nullable MClassType, sup: MType): Bool
	do
		var sub = self
		if sub == sup then return true

		#print "1.is {sub} a {sup}? ===="

		if anchor == null then
			assert not sub.need_anchor
			assert not sup.need_anchor
		else
			# First, resolve the formal types to the simplest equivalent forms in the receiver
			assert sub.can_resolve_for(anchor, null, mmodule)
			sub = sub.lookup_fixed(mmodule, anchor)
			assert sup.can_resolve_for(anchor, null, mmodule)
			sup = sup.lookup_fixed(mmodule, anchor)
		end

		# Does `sup` accept null or not?
		# Discard the nullable marker if it exists
		var sup_accept_null = false
		if sup isa MNullableType then
			sup_accept_null = true
			sup = sup.mtype
		else if sup isa MNotNullType then
			sup = sup.mtype
		else if sup isa MNullType then
			sup_accept_null = true
		end

		# Can `sub` provide null or not?
		# Thus we can match with `sup_accept_null`
		# Also discard the nullable marker if it exists
		var sub_reject_null = false
		if sub isa MNullableType then
			if not sup_accept_null then return false
			sub = sub.mtype
		else if sub isa MNotNullType then
			sub_reject_null = true
			sub = sub.mtype
		else if sub isa MNullType then
			return sup_accept_null
		end
		# Now the case of direct null and nullable is over.

		# If `sub` is a formal type, then it is accepted if its bound is accepted
		while sub isa MFormalType do
			#print "3.is {sub} a {sup}?"

			# A unfixed formal type can only accept itself
			if sub == sup then return true

			assert anchor != null
			sub = sub.lookup_bound(mmodule, anchor)
			if sub_reject_null then sub = sub.as_notnull

			#print "3.is {sub} a {sup}?"

			# Manage the second layer of null/nullable
			if sub isa MNullableType then
				if not sup_accept_null and not sub_reject_null then return false
				sub = sub.mtype
			else if sub isa MNotNullType then
				sub_reject_null = true
				sub = sub.mtype
			else if sub isa MNullType then
				return sup_accept_null
			end
		end
		#print "4.is {sub} a {sup}? <- no more resolution"

		if sub isa MBottomType or sub isa MErrorType then
			return true
		end

		assert sub isa MClassType else print_error "{sub} <? {sup}" # It is the only remaining type

		# Handle sup-type when the sub-type is class-based (other cases must have be identified before).
		if sup isa MFormalType or sup isa MNullType or sup isa MBottomType or sup isa MErrorType then
			# These types are not super-types of Class-based types.
			return false
		end

		assert sup isa MClassType else print_error "got {sup} {sub.inspect}" # It is the only remaining type

		# Now both are MClassType, we need to dig

		if sub == sup then return true

		if anchor == null then anchor = sub # UGLY: any anchor will work
		var resolved_sub = sub.anchor_to(mmodule, anchor)
		var res = resolved_sub.collect_mclasses(mmodule).has(sup.mclass)
		if not res then return false
		if not sup isa MGenericType then return true
		var sub2 = sub.supertype_to(mmodule, anchor, sup.mclass)
		assert sub2.mclass == sup.mclass
		for i in [0..sup.mclass.arity[ do
			var sub_arg = sub2.arguments[i]
			var sup_arg = sup.arguments[i]
			res = sub_arg.is_subtype(mmodule, anchor, sup_arg)
			if not res then return false
		end
		return true
	end

	# The base class type on which self is based
	#
	# This base type is used to get property (an internally to perform
	# unsafe type comparison).
	#
	# Beware: some types (like null) are not based on a class thus this
	# method will crash
	#
	# Basically, this function transform the virtual types and parameter
	# types to their bounds.
	#
	# Example
	#
	#     class A end
	#     class B super A end
	#     class X end
	#     class Y super X end
	#     class G[T: A]
	#       type U: X
	#     end
	#     class H
	#       super G[B]
	#       redef type U: Y
	#     end
	#
	# Map[T,U]  anchor_to  H  #->  Map[B,Y]
	#
	# Explanation of the example:
	# In H, T is set to B, because "H super G[B]", and U is bound to Y,
	# because "redef type U: Y". Therefore, Map[T, U] is bound to
	# Map[B, Y]
	#
	# REQUIRE: `self.need_anchor implies anchor != null`
	# ENSURE: `not self.need_anchor implies result == self`
	# ENSURE: `not result.need_anchor`
	fun anchor_to(mmodule: MModule, anchor: nullable MClassType): MType
	do
		if not need_anchor then return self
		assert anchor != null and not anchor.need_anchor
		# Just resolve to the anchor and clear all the virtual types
		var res = self.resolve_for(anchor, null, mmodule, true)
		assert not res.need_anchor
		return res
	end

	# Does `self` contain a virtual type or a formal generic parameter type?
	# In order to remove those types, you usually want to use `anchor_to`.
	fun need_anchor: Bool do return true

	# Return the supertype when adapted to a class.
	#
	# In Nit, for each super-class of a type, there is a equivalent super-type.
	#
	# Example:
	#
	# ~~~nitish
	#     class G[T, U] end
	#     class H[V] super G[V, Bool] end
	#
	# H[Int]  supertype_to  G  #->  G[Int, Bool]
	# ~~~
	#
	# REQUIRE: `super_mclass` is a super-class of `self`
	# REQUIRE: `self.need_anchor implies anchor != null and self.can_resolve_for(anchor, null, mmodule)`
	# ENSURE: `result.mclass = super_mclass`
	fun supertype_to(mmodule: MModule, anchor: nullable MClassType, super_mclass: MClass): MClassType
	do
		if super_mclass.arity == 0 then return super_mclass.mclass_type
		if self isa MClassType and self.mclass == super_mclass then return self
		var resolved_self
		if self.need_anchor then
			assert anchor != null
			resolved_self = self.anchor_to(mmodule, anchor)
		else
			resolved_self = self
		end
		var supertypes = resolved_self.collect_mtypes(mmodule)
		for supertype in supertypes do
			if supertype.mclass == super_mclass then
				# FIXME: Here, we stop on the first goal. Should we check others and detect inconsistencies?
				return supertype.resolve_for(self, anchor, mmodule, false)
			end
		end
		abort
	end

	# Replace formals generic types in self with resolved values in `mtype`
	# If `cleanup_virtual` is true, then virtual types are also replaced
	# with their bounds.
	#
	# This function returns self if `need_anchor` is false.
	#
	# ## Example 1
	#
	# ~~~
	# class G[E] end
	# class H[F] super G[F] end
	# class X[Z] end
	# ~~~
	#
	#  * Array[E].resolve_for(H[Int])  #->  Array[Int]
	#  * Array[E].resolve_for(G[Z], X[Int]) #->  Array[Z]
	#
	# Explanation of the example:
	#  * Array[E].need_anchor is true because there is a formal generic parameter type E
	#  * E makes sense for H[Int] because E is a formal parameter of G and H specialize G
	#  * Since "H[F] super G[F]", E is in fact F for H
	#  * More specifically, in H[Int], E is Int
	#  * So, in H[Int], Array[E] is Array[Int]
	#
	# This function is mainly used to inherit a signature.
	# Because, unlike `anchor_to`, we do not want a full resolution of
	# a type but only an adapted version of it.
	#
	# ## Example 2
	#
	# ~~~
	# class A[E]
	#     fun foo(e:E):E is abstract
	# end
	# class B super A[Int] end
	# ~~~
	#
	# The signature on foo is (e: E): E
	# If we resolve the signature for B, we get (e:Int):Int
	#
	# ## Example 3
	#
	# ~~~nitish
	# class A[E]
	#     fun foo(e:E):E is abstract
	# end
	# class C[F]
	#     var a: A[Array[F]]
	#     fun bar do a.foo(x) # <- x is here
	# end
	# ~~~
	#
	# The first question is: is foo available on `a`?
	#
	# The static type of a is `A[Array[F]]`, that is an open type.
	# in order to find a method `foo`, whe must look at a resolved type.
	#
	#   A[Array[F]].anchor_to(C[nullable Object])  #->  A[Array[nullable Object]]
	#
	# the method `foo` exists in `A[Array[nullable Object]]`, therefore `foo` exists for `a`.
	#
	# The next question is: what is the accepted types for `x`?
	#
	# the signature of `foo` is `foo(e:E)`, thus we must resolve the type E
	#
	#   E.resolve_for(A[Array[F]],C[nullable Object])  #->  Array[F]
	#
	# The resolution can be done because `E` make sense for the class A (see `can_resolve_for`)
	#
	# FIXME: the parameter `cleanup_virtual` is just a bad idea, but having
	# two function instead of one seems also to be a bad idea.
	#
	# REQUIRE: `can_resolve_for(mtype, anchor, mmodule)`
	# ENSURE: `not self.need_anchor implies result == self`
	fun resolve_for(mtype: MType, anchor: nullable MClassType, mmodule: MModule, cleanup_virtual: Bool): MType is abstract

	# Resolve formal type to its verbatim bound.
	# If the type is not formal, just return self
	#
	# The result is returned exactly as declared in the "type" property (verbatim).
	# So it could be another formal type.
	#
	# In case of conflicts or inconsistencies in the model, the method returns a `MErrorType`.
	fun lookup_bound(mmodule: MModule, resolved_receiver: MType): MType do return self

	# Resolve the formal type to its simplest equivalent form.
	#
	# Formal types are either free or fixed.
	# When it is fixed, it means that it is equivalent with a simpler type.
	# When a formal type is free, it means that it is only equivalent with itself.
	# This method return the most simple equivalent type of `self`.
	#
	# This method is mainly used for subtype test in order to sanely compare fixed.
	#
	# By default, return self.
	# See the redefinitions for specific behavior in each kind of type.
	#
	# In case of conflicts or inconsistencies in the model, the method returns a `MErrorType`.
	fun lookup_fixed(mmodule: MModule, resolved_receiver: MType): MType do return self

	# Is the type a `MErrorType` or contains an `MErrorType`?
	#
	# `MErrorType` are used in result with conflict or inconsistencies.
	#
	# See `is_legal_in` to check conformity with generic bounds.
	fun is_ok: Bool do return true

	# Is the type legal in a given `mmodule` (with an optional `anchor`)?
	#
	# A type is valid if:
	#
	# * it does not contain a `MErrorType` (see `is_ok`).
	# * its generic formal arguments are within their bounds.
	fun is_legal_in(mmodule: MModule, anchor: nullable MClassType): Bool do return is_ok

	# Can the type be resolved?
	#
	# In order to resolve open types, the formal types must make sence.
	#
	# ## Example
	#
	#     class A[E]
	#     end
	#     class B[F]
	#     end
	#
	# ~~~nitish
	# E.can_resolve_for(A[Int])  #->  true, E make sense in A
	#
	# E.can_resolve_for(B[Int])  #->  false, E does not make sense in B
	#
	# B[E].can_resolve_for(A[F], B[Object])  #->  true,
	# # B[E] is a red hearing only the E is important,
	# # E make sense in A
	# ~~~
	#
	# REQUIRE: `anchor != null implies not anchor.need_anchor`
	# REQUIRE: `mtype.need_anchor implies anchor != null and mtype.can_resolve_for(anchor, null, mmodule)`
	# ENSURE: `not self.need_anchor implies result == true`
	fun can_resolve_for(mtype: MType, anchor: nullable MClassType, mmodule: MModule): Bool is abstract

	# Return the nullable version of the type
	# If the type is already nullable then self is returned
	fun as_nullable: MType
	do
		var res = self.as_nullable_cache
		if res != null then return res
		res = new MNullableType(self)
		self.as_nullable_cache = res
		return res
	end

	# Remove the base type of a decorated (proxy) type.
	# Is the type is not decorated, then self is returned.
	#
	# Most of the time it is used to return the not nullable version of a nullable type.
	# In this case, this just remove the `nullable` notation, but the result can still contains null.
	# For instance if `self isa MNullType` or self is a formal type bounded by a nullable type.
	# If you really want to exclude the `null` value, then use `as_notnull`
	fun undecorate: MType
	do
		return self
	end

	# Returns the not null version of the type.
	# That is `self` minus the `null` value.
	#
	# For most types, this return `self`.
	# For formal types, this returns a special `MNotNullType`
	fun as_notnull: MType do return self

	private var as_nullable_cache: nullable MType = null


	# The depth of the type seen as a tree.
	#
	# * A -> 1
	# * G[A] -> 2
	# * H[A, B] -> 2
	# * H[G[A], B] -> 3
	#
	# Formal types have a depth of 1.
	# Only `MClassType` and `MFormalType` nodes are counted.
	fun depth: Int
	do
		return 1
	end

	# The length of the type seen as a tree.
	#
	# * A -> 1
	# * G[A] -> 2
	# * H[A, B] -> 3
	# * H[G[A], B] -> 4
	#
	# Formal types have a length of 1.
	# Only `MClassType` and `MFormalType` nodes are counted.
	fun length: Int
	do
		return 1
	end

	# Compute all the classdefs inherited/imported.
	# The returned set contains:
	#  * the class definitions from `mmodule` and its imported modules
	#  * the class definitions of this type and its super-types
	#
	# This function is used mainly internally.
	#
	# REQUIRE: `not self.need_anchor`
	fun collect_mclassdefs(mmodule: MModule): Set[MClassDef] is abstract

	# Compute all the super-classes.
	# This function is used mainly internally.
	#
	# REQUIRE: `not self.need_anchor`
	fun collect_mclasses(mmodule: MModule): Set[MClass] is abstract

	# Compute all the declared super-types.
	# Super-types are returned as declared in the classdefs (verbatim).
	# This function is used mainly internally.
	#
	# REQUIRE: `not self.need_anchor`
	fun collect_mtypes(mmodule: MModule): Set[MClassType] is abstract

	# Is the property in self for a given module
	# This method does not filter visibility or whatever
	#
	# REQUIRE: `not self.need_anchor`
	fun has_mproperty(mmodule: MModule, mproperty: MProperty): Bool
	do
		assert not self.need_anchor
		return self.collect_mclassdefs(mmodule).has(mproperty.intro_mclassdef)
	end
end

# A type based on a class.
#
# `MClassType` have properties (see `has_mproperty`).
class MClassType
	super MType

	# The associated class
	var mclass: MClass

	redef fun model do return self.mclass.intro_mmodule.model

	redef fun location do return mclass.location

	# TODO: private init because strongly bounded to its mclass. see `mclass.mclass_type`

	# The formal arguments of the type
	# ENSURE: `result.length == self.mclass.arity`
	var arguments = new Array[MType]

	redef fun to_s do return mclass.to_s

	redef fun full_name do return mclass.full_name

	redef fun c_name do return mclass.c_name

	redef fun need_anchor do return false

	redef fun anchor_to(mmodule, anchor): MClassType
	do
		return super.as(MClassType)
	end

	redef fun resolve_for(mtype: MType, anchor: nullable MClassType, mmodule: MModule, cleanup_virtual: Bool): MClassType do return self

	redef fun can_resolve_for(mtype, anchor, mmodule) do return true

	redef fun collect_mclassdefs(mmodule)
	do
		assert not self.need_anchor
		var cache = self.collect_mclassdefs_cache
		if not cache.has_key(mmodule) then
			self.collect_things(mmodule)
		end
		return cache[mmodule]
	end

	redef fun collect_mclasses(mmodule)
	do
		if collect_mclasses_last_module == mmodule then return collect_mclasses_last_module_cache
		assert not self.need_anchor
		var cache = self.collect_mclasses_cache
		if not cache.has_key(mmodule) then
			self.collect_things(mmodule)
		end
		var res = cache[mmodule]
		collect_mclasses_last_module = mmodule
		collect_mclasses_last_module_cache = res
		return res
	end

	private var collect_mclasses_last_module: nullable MModule = null
	private var collect_mclasses_last_module_cache: Set[MClass] is noinit

	redef fun collect_mtypes(mmodule)
	do
		assert not self.need_anchor
		var cache = self.collect_mtypes_cache
		if not cache.has_key(mmodule) then
			self.collect_things(mmodule)
		end
		return cache[mmodule]
	end

	# common implementation for `collect_mclassdefs`, `collect_mclasses`, and `collect_mtypes`.
	private fun collect_things(mmodule: MModule)
	do
		var res = new HashSet[MClassDef]
		var seen = new HashSet[MClass]
		var types = new HashSet[MClassType]
		seen.add(self.mclass)
		var todo = [self.mclass]
		while not todo.is_empty do
			var mclass = todo.pop
			#print "process {mclass}"
			for mclassdef in mclass.mclassdefs do
				if not mmodule.in_importation <= mclassdef.mmodule then continue
				#print "  process {mclassdef}"
				res.add(mclassdef)
				for supertype in mclassdef.supertypes do
					types.add(supertype)
					var superclass = supertype.mclass
					if seen.has(superclass) then continue
					#print "    add {superclass}"
					seen.add(superclass)
					todo.add(superclass)
				end
			end
		end
		collect_mclassdefs_cache[mmodule] = res
		collect_mclasses_cache[mmodule] = seen
		collect_mtypes_cache[mmodule] = types
	end

	private var collect_mclassdefs_cache = new HashMap[MModule, Set[MClassDef]]
	private var collect_mclasses_cache = new HashMap[MModule, Set[MClass]]
	private var collect_mtypes_cache = new HashMap[MModule, Set[MClassType]]

	redef fun mdoc_or_fallback do return mclass.mdoc_or_fallback
end

# A type based on a generic class.
# A generic type a just a class with additional formal generic arguments.
class MGenericType
	super MClassType

	redef var arguments

	# TODO: private init because strongly bounded to its mclass. see `mclass.get_mtype`

	init
	do
		assert self.mclass.arity == arguments.length

		self.need_anchor = false
		for t in arguments do
			if t.need_anchor then
				self.need_anchor = true
				break
			end
		end

		self.to_s = "{mclass}[{arguments.join(", ")}]"
	end

	# The short-name of the class, then the full-name of each type arguments within brackets.
	# Example: `"Map[String, List[Int]]"`
	redef var to_s is noinit

	# The full-name of the class, then the full-name of each type arguments within brackets.
	# Example: `"core::Map[core::String, core::List[core::Int]]"`
	redef var full_name is lazy do
		var args = new Array[String]
		for t in arguments do
			args.add t.full_name
		end
		return "{mclass.full_name}[{args.join(", ")}]"
	end

	redef var c_name is lazy do
		var res = mclass.c_name
		# Note: because the arity is known, a prefix notation is enough
		for t in arguments do
			res += "__"
			res += t.c_name
		end
		return res.to_s
	end

	redef var need_anchor is noinit

	redef fun resolve_for(mtype, anchor, mmodule, cleanup_virtual)
	do
		if not need_anchor then return self
		assert can_resolve_for(mtype, anchor, mmodule)
		var types = new Array[MType]
		for t in arguments do
			types.add(t.resolve_for(mtype, anchor, mmodule, cleanup_virtual))
		end
		return mclass.get_mtype(types)
	end

	redef fun can_resolve_for(mtype, anchor, mmodule)
	do
		if not need_anchor then return true
		for t in arguments do
			if not t.can_resolve_for(mtype, anchor, mmodule) then return false
		end
		return true
	end

	redef fun is_ok
	do
		for t in arguments do if not t.is_ok then return false
		return super
	end

	redef fun is_legal_in(mmodule, anchor)
	do
		var mtype
		if need_anchor then
			assert anchor != null
			mtype = anchor_to(mmodule, anchor)
		else
			mtype = self
		end
		if not mtype.is_ok then return false
		return mtype.is_subtype(mmodule, null, mtype.mclass.intro.bound_mtype)
	end

	redef fun depth
	do
		var dmax = 0
		for a in self.arguments do
			var d = a.depth
			if d > dmax then dmax = d
		end
		return dmax + 1
	end

	redef fun length
	do
		var res = 1
		for a in self.arguments do
			res += a.length
		end
		return res
	end
end

# A formal type (either virtual of parametric).
#
# The main issue with formal types is that they offer very little information on their own
# and need a context (anchor and mmodule) to be useful.
abstract class MFormalType
	super MType

	redef var as_notnull = new MNotNullType(self) is lazy
end

# A virtual formal type.
class MVirtualType
	super MFormalType

	# The property associated with the type.
	# Its the definitions of this property that determine the bound or the virtual type.
	var mproperty: MVirtualTypeProp

	redef fun location do return mproperty.location

	redef fun model do return self.mproperty.intro_mclassdef.mmodule.model

	redef fun lookup_bound(mmodule, resolved_receiver)
	do
		# There is two possible invalid cases: the vt does not exists in resolved_receiver or the bound is broken
		if not resolved_receiver.has_mproperty(mmodule, mproperty) then return new MErrorType(model)
		return lookup_single_definition(mmodule, resolved_receiver).bound or else new MErrorType(model)
	end

	private fun lookup_single_definition(mmodule: MModule, resolved_receiver: MType): MVirtualTypeDef
	do
		assert not resolved_receiver.need_anchor
		var props = self.mproperty.lookup_definitions(mmodule, resolved_receiver)
		if props.is_empty then
			abort
		else if props.length == 1 then
			return props.first
		end
		var types = new ArraySet[MType]
		var res  = props.first
		for p in props do
			types.add(p.bound.as(not null))
			if not res.is_fixed then res = p
		end
		if types.length == 1 then
			return res
		end
		abort
	end

	# A VT is fixed when:
	# * the VT is (re-)defined with the annotation `is fixed`
	# * the receiver is an enum class since there is no subtype that can
	#   redefine this virtual type
	redef fun lookup_fixed(mmodule: MModule, resolved_receiver: MType): MType
	do
		assert not resolved_receiver.need_anchor
		resolved_receiver = resolved_receiver.undecorate
		assert resolved_receiver isa MClassType # It is the only remaining type

		var prop = lookup_single_definition(mmodule, resolved_receiver)
		var res = prop.bound
		if res == null then return new MErrorType(model)

		# Recursively lookup the fixed result
		res = res.lookup_fixed(mmodule, resolved_receiver)

		# For a fixed VT, return the resolved bound
		if prop.is_fixed then return res

		# For a enum receiver return the bound
		if resolved_receiver.mclass.kind == enum_kind then return res

		return self
	end

	redef fun resolve_for(mtype, anchor, mmodule, cleanup_virtual)
	do
		if not cleanup_virtual then return self
		assert can_resolve_for(mtype, anchor, mmodule)

		if mproperty.is_selftype then return mtype

		# self is a virtual type declared (or inherited) in mtype
		# The point of the function it to get the bound of the virtual type that make sense for mtype
		# But because mtype is maybe a virtual/formal type, we need to get a real receiver first
		#print "{class_name}: {self}/{mtype}/{anchor}?"
		var resolved_receiver
		if mtype.need_anchor then
			assert anchor != null
			resolved_receiver = mtype.resolve_for(anchor, null, mmodule, true)
		else
			resolved_receiver = mtype
		end
		# Now, we can get the bound
		var verbatim_bound = lookup_bound(mmodule, resolved_receiver)
		# The bound is exactly as declared in the "type" property, so we must resolve it again
		var res = verbatim_bound.resolve_for(mtype, anchor, mmodule, cleanup_virtual)

		return res
	end

	redef fun can_resolve_for(mtype, anchor, mmodule)
	do
		if mtype.need_anchor then
			assert anchor != null
			mtype = mtype.anchor_to(mmodule, anchor)
		end
		return mtype.has_mproperty(mmodule, mproperty)
	end

	redef fun to_s do return self.mproperty.to_s

	redef fun full_name do return self.mproperty.full_name

	redef fun c_name do return self.mproperty.c_name

	redef fun mdoc_or_fallback do return mproperty.mdoc_or_fallback
end

# The type associated to a formal parameter generic type of a class
#
# Each parameter type is associated to a specific class.
# It means that all refinements of a same class "share" the parameter type,
# but that a generic subclass has its own parameter types.
#
# However, in the sense of the meta-model, a parameter type of a class is
# a valid type in a subclass. The "in the sense of the meta-model" is
# important because, in the Nit language, the programmer cannot refers
# directly to the parameter types of the super-classes.
#
# Example:
#
#     class A[E]
#         fun e: E is abstract
#     end
#     class B[F]
#         super A[Array[F]]
#     end
#
# In the class definition B[F], `F` is a valid type but `E` is not.
# However, `self.e` is a valid method call, and the signature of `e` is
# declared `e: E`.
#
# Note that parameter types are shared among class refinements.
# Therefore parameter only have an internal name (see `to_s` for details).
class MParameterType
	super MFormalType

	# The generic class where the parameter belong
	var mclass: MClass

	redef fun model do return self.mclass.intro_mmodule.model

	redef fun location do return mclass.location

	# The position of the parameter (0 for the first parameter)
	# FIXME: is `position` a better name?
	var rank: Int

	redef var name

	redef fun to_s do return name

	redef var full_name is lazy do return "{mclass.full_name}::{name}"

	redef var c_name is lazy do return mclass.c_name + "__" + "#{name}".to_cmangle

	redef fun lookup_bound(mmodule: MModule, resolved_receiver: MType): MType
	do
		assert not resolved_receiver.need_anchor
		resolved_receiver = resolved_receiver.undecorate
		assert resolved_receiver isa MClassType # It is the only remaining type
		var goalclass = self.mclass
		if resolved_receiver.mclass == goalclass then
			return resolved_receiver.arguments[self.rank]
		end
		var supertypes = resolved_receiver.collect_mtypes(mmodule)
		for t in supertypes do
			if t.mclass == goalclass then
				# Yeah! c specialize goalclass with a "super `t'". So the question is what is the argument of f
				# FIXME: Here, we stop on the first goal. Should we check others and detect inconsistencies?
				var res = t.arguments[self.rank]
				return res
			end
		end
		# Cannot found `self` in `resolved_receiver`
		return new MErrorType(model)
	end

	# A PT is fixed when:
	# * The `resolved_receiver` is a subclass of `self.mclass`,
	#   so it is necessarily fixed in a `super` clause, either with a normal type
	#   or with another PT.
	#   See `resolve_for` for examples about related issues.
	redef fun lookup_fixed(mmodule: MModule, resolved_receiver: MType): MType
	do
		assert not resolved_receiver.need_anchor
		resolved_receiver = resolved_receiver.undecorate
		assert resolved_receiver isa MClassType # It is the only remaining type
		var res = self.resolve_for(resolved_receiver.mclass.mclass_type, resolved_receiver, mmodule, false)
		return res
	end

	redef fun resolve_for(mtype, anchor, mmodule, cleanup_virtual)
	do
		assert can_resolve_for(mtype, anchor, mmodule)
		#print "{class_name}: {self}/{mtype}/{anchor}?"

		if mtype isa MGenericType and mtype.mclass == self.mclass then
			return mtype.arguments[self.rank]
		end

		# self is a parameter type of mtype (or of a super-class of mtype)
		# The point of the function it to get the bound of the virtual type that make sense for mtype
		# But because mtype is maybe a virtual/formal type, we need to get a real receiver first
		# FIXME: What happens here is far from clear. Thus this part must be validated and clarified
		var resolved_receiver
		if mtype.need_anchor then
			assert anchor != null
			resolved_receiver = mtype.resolve_for(anchor.mclass.mclass_type, anchor, mmodule, true)
		else
			resolved_receiver = mtype
		end
		if resolved_receiver isa MNullableType then resolved_receiver = resolved_receiver.mtype
		if resolved_receiver isa MParameterType then
			assert anchor != null
			assert resolved_receiver.mclass == anchor.mclass
			resolved_receiver = anchor.arguments[resolved_receiver.rank]
			if resolved_receiver isa MNullableType then resolved_receiver = resolved_receiver.mtype
		end
		assert resolved_receiver isa MClassType # It is the only remaining type

		# Eh! The parameter is in the current class.
		# So we return the corresponding argument, no mater what!
		if resolved_receiver.mclass == self.mclass then
			var res = resolved_receiver.arguments[self.rank]
			#print "{class_name}: {self}/{mtype}/{anchor} -> direct {res}"
			return res
		end

		if resolved_receiver.need_anchor then
			assert anchor != null
			resolved_receiver = resolved_receiver.resolve_for(anchor, null, mmodule, false)
		end
		# Now, we can get the bound
		var verbatim_bound = lookup_bound(mmodule, resolved_receiver)
		# The bound is exactly as declared in the "type" property, so we must resolve it again
		var res = verbatim_bound.resolve_for(mtype, anchor, mmodule, cleanup_virtual)

		#print "{class_name}: {self}/{mtype}/{anchor} -> indirect {res}"

		return res
	end

	redef fun can_resolve_for(mtype, anchor, mmodule)
	do
		if mtype.need_anchor then
			assert anchor != null
			mtype = mtype.anchor_to(mmodule, anchor)
		end
		return mtype.collect_mclassdefs(mmodule).has(mclass.intro)
	end
end

# A type that decorates another type.
#
# The point of this class is to provide a common implementation of sevices that just forward to the original type.
# Specific decorator are expected to redefine (or to extend) the default implementation as this suit them.
abstract class MProxyType
	super MType
	# The base type
	var mtype: MType

	redef fun location do return mtype.location

	redef fun model do return self.mtype.model
	redef fun need_anchor do return mtype.need_anchor
	redef fun as_nullable do return mtype.as_nullable
	redef fun as_notnull do return mtype.as_notnull
	redef fun undecorate do return mtype.undecorate
	redef fun resolve_for(mtype, anchor, mmodule, cleanup_virtual)
	do
		var res = self.mtype.resolve_for(mtype, anchor, mmodule, cleanup_virtual)
		return res
	end

	redef fun can_resolve_for(mtype, anchor, mmodule)
	do
		return self.mtype.can_resolve_for(mtype, anchor, mmodule)
	end

	redef fun is_ok do return mtype.is_ok

	redef fun is_legal_in(mmodule, anchor) do return mtype.is_legal_in(mmodule, anchor)

	redef fun lookup_fixed(mmodule, resolved_receiver)
	do
		var t = mtype.lookup_fixed(mmodule, resolved_receiver)
		return t
	end

	redef fun depth do return self.mtype.depth

	redef fun length do return self.mtype.length

	redef fun collect_mclassdefs(mmodule)
	do
		assert not self.need_anchor
		return self.mtype.collect_mclassdefs(mmodule)
	end

	redef fun collect_mclasses(mmodule)
	do
		assert not self.need_anchor
		return self.mtype.collect_mclasses(mmodule)
	end

	redef fun collect_mtypes(mmodule)
	do
		assert not self.need_anchor
		return self.mtype.collect_mtypes(mmodule)
	end
end

# A type prefixed with "nullable"
class MNullableType
	super MProxyType

	init
	do
		self.to_s = "nullable {mtype}"
	end

	redef var to_s is noinit

	redef var full_name is lazy do return "nullable {mtype.full_name}"

	redef var c_name is lazy do return "nullable__{mtype.c_name}"

	redef fun as_nullable do return self
	redef fun resolve_for(mtype, anchor, mmodule, cleanup_virtual)
	do
		var res = super
		return res.as_nullable
	end

	# Efficiently returns `mtype.lookup_fixed(mmodule, resolved_receiver).as_nullable`
	redef fun lookup_fixed(mmodule, resolved_receiver)
	do
		var t = super
		if t == mtype then return self
		return t.as_nullable
	end

	redef fun mdoc_or_fallback do return mtype.mdoc_or_fallback
end

# A non-null version of a formal type.
#
# When a formal type in bounded to a nullable type, this is the type of the not null version of it.
class MNotNullType
	super MProxyType

	redef fun to_s do return "not null {mtype}"
	redef var full_name is lazy do return "not null {mtype.full_name}"
	redef var c_name is lazy do return "notnull__{mtype.c_name}"

	redef fun as_notnull do return self

	redef fun resolve_for(mtype, anchor, mmodule, cleanup_virtual)
	do
		var res = super
		return res.as_notnull
	end

	# Efficiently returns `mtype.lookup_fixed(mmodule, resolved_receiver).as_notnull`
	redef fun lookup_fixed(mmodule, resolved_receiver)
	do
		var t = super
		if t == mtype then return self
		return t.as_notnull
	end
end

# The type of the only value null
#
# The is only one null type per model, see `MModel::null_type`.
class MNullType
	super MType
	redef var model
	redef fun to_s do return "null"
	redef fun full_name do return "null"
	redef fun c_name do return "null"
	redef fun as_nullable do return self

	redef var as_notnull: MBottomType = new MBottomType(model) is lazy
	redef fun need_anchor do return false
	redef fun resolve_for(mtype, anchor, mmodule, cleanup_virtual) do return self
	redef fun can_resolve_for(mtype, anchor, mmodule) do return true

	redef fun collect_mclassdefs(mmodule) do return new HashSet[MClassDef]

	redef fun collect_mclasses(mmodule) do return new HashSet[MClass]

	redef fun collect_mtypes(mmodule) do return new HashSet[MClassType]
end

# The special universal most specific type.
#
# This type is intended to be only used internally for type computation or analysis and should not be exposed to the user.
# The bottom type can de used to denote things that are dead (no instance).
#
# Semantically it is the singleton `null.as_notnull`.
# Is also means that `self.as_nullable == null`.
class MBottomType
	super MType
	redef var model
	redef fun to_s do return "bottom"
	redef fun full_name do return "bottom"
	redef fun c_name do return "bottom"
	redef fun as_nullable do return model.null_type
	redef fun as_notnull do return self
	redef fun need_anchor do return false
	redef fun resolve_for(mtype, anchor, mmodule, cleanup_virtual) do return self
	redef fun can_resolve_for(mtype, anchor, mmodule) do return true

	redef fun collect_mclassdefs(mmodule) do return new HashSet[MClassDef]

	redef fun collect_mclasses(mmodule) do return new HashSet[MClass]

	redef fun collect_mtypes(mmodule) do return new HashSet[MClassType]
end

# A special type used as a silent error marker when building types.
#
# This type is intended to be only used internally for type operation and should not be exposed to the user.
# The error type can de used to denote things that are conflicting or inconsistent.
#
# Some methods on types can return a `MErrorType` to denote a broken or a conflicting result.
# Use `is_ok` to check if a type is (or contains) a `MErrorType` .
class MErrorType
	super MType
	redef var model
	redef fun to_s do return "error"
	redef fun full_name do return "error"
	redef fun c_name do return "error"
	redef fun need_anchor do return false
	redef fun resolve_for(mtype, anchor, mmodule, cleanup_virtual) do return self
	redef fun can_resolve_for(mtype, anchor, mmodule) do return true
	redef fun is_ok do return false

	redef fun collect_mclassdefs(mmodule) do return new HashSet[MClassDef]

	redef fun collect_mclasses(mmodule) do return new HashSet[MClass]

	redef fun collect_mtypes(mmodule) do return new HashSet[MClassType]
end

# A signature of a method
class MSignature
	super MType

	# The each parameter (in order)
	var mparameters: Array[MParameter]

	# Returns a parameter named `name`, if any.
	fun mparameter_by_name(name: String): nullable MParameter
	do
		for p in mparameters do
			if p.name == name then return p
		end
		return null
	end

	# The return type (null for a procedure)
	var return_mtype: nullable MType

	redef fun depth
	do
		var dmax = 0
		var t = self.return_mtype
		if t != null then dmax = t.depth
		for p in mparameters do
			var d = p.mtype.depth
			if d > dmax then dmax = d
		end
		return dmax + 1
	end

	redef fun length
	do
		var res = 1
		var t = self.return_mtype
		if t != null then res += t.length
		for p in mparameters do
			res += p.mtype.length
		end
		return res
	end

	# REQUIRE: 1 <= mparameters.count p -> p.is_vararg
	init
	do
		var vararg_rank = -1
		for i in [0..mparameters.length[ do
			var parameter = mparameters[i]
			if parameter.is_vararg then
				if vararg_rank >= 0 then
					# If there is more than one vararg,
					# consider that additional arguments cannot be mapped.
					vararg_rank = -1
					break
				end
				vararg_rank = i
			end
		end
		self.vararg_rank = vararg_rank
	end

	# The rank of the main ellipsis (`...`) for vararg (starting from 0).
	# value is -1 if there is no vararg.
	# Example: for "(a: Int, b: Bool..., c: Char)" #-> vararg_rank=1
	#
	# From a model POV, a signature can contain more than one vararg parameter,
	# the `vararg_rank` just indicates the one that will receive the additional arguments.
	# However, currently, if there is more that one vararg parameter, no one will be the main one,
	# and additional arguments will be refused.
	var vararg_rank: Int is noinit

	# The number of parameters
	fun arity: Int do return mparameters.length

	redef fun to_s
	do
		var b = new FlatBuffer
		if not mparameters.is_empty then
			b.append("(")
			var last_mtype = null
			for i in [0..mparameters.length[ do
				var mparameter = mparameters[i]

				# Group types that are common to contiguous parameters
				if mparameter.mtype != last_mtype and last_mtype != null then
					b.append(": ")
					b.append(last_mtype.to_s)
				end

				if i > 0 then b.append(", ")
				b.append(mparameter.name)

				if mparameter.is_vararg then
					b.append(": ")
					b.append(mparameter.mtype.to_s)
					b.append("...")
					last_mtype = null
				else
					last_mtype = mparameter.mtype
				end
			end

			if last_mtype != null then
				b.append(": ")
				b.append(last_mtype.to_s)
			end

			b.append(")")
		end
		var ret = self.return_mtype
		if ret != null then
			b.append(": ")
			b.append(ret.to_s)
		end
		return b.to_s
	end

	redef fun resolve_for(mtype: MType, anchor: nullable MClassType, mmodule: MModule, cleanup_virtual: Bool): MSignature
	do
		var params = new Array[MParameter]
		for p in self.mparameters do
			params.add(p.resolve_for(mtype, anchor, mmodule, cleanup_virtual))
		end
		var ret = self.return_mtype
		if ret != null then
			ret = ret.resolve_for(mtype, anchor, mmodule, cleanup_virtual)
		end
		var res = new MSignature(params, ret)
		return res
	end
end

# A parameter in a signature
class MParameter
	super MEntity

	# The name of the parameter
	redef var name

	# The static type of the parameter
	var mtype: MType

	# Is the parameter a vararg?
	var is_vararg: Bool

	redef fun to_s
	do
		if is_vararg then
			return "{name}: {mtype}..."
		else
			return "{name}: {mtype}"
		end
	end

	# Returns a new parameter with the `mtype` resolved.
	# See `MType::resolve_for` for details.
	fun resolve_for(mtype: MType, anchor: nullable MClassType, mmodule: MModule, cleanup_virtual: Bool): MParameter
	do
		if not self.mtype.need_anchor then return self
		var newtype = self.mtype.resolve_for(mtype, anchor, mmodule, cleanup_virtual)
		var res = new MParameter(self.name, newtype, self.is_vararg)
		return res
	end

	redef fun model do return mtype.model
end

# A service (global property) that generalize method, attribute, etc.
#
# `MProperty` are global to the model; it means that a `MProperty` is not bound
# to a specific `MModule` nor a specific `MClass`.
#
# A MProperty gather definitions (see `mpropdefs`) ; one for the introduction
# and the other in subclasses and in refinements.
#
# A `MProperty` is used to denotes services in polymorphic way (ie. independent
# of any dynamic type).
# For instance, a call site "x.foo" is associated to a `MProperty`.
abstract class MProperty
	super MEntity

	# The associated MPropDef subclass.
	# The two specialization hierarchy are symmetric.
	type MPROPDEF: MPropDef

	# The classdef that introduce the property
	# While a property is not bound to a specific module, or class,
	# the introducing mclassdef is used for naming and visibility
	var intro_mclassdef: MClassDef

	# The (short) name of the property
	redef var name

	redef var location

	redef fun mdoc_or_fallback
	do
		# Don’t use `intro.mdoc_or_fallback` because it would create an infinite
		# recursion.
		return intro.mdoc
	end

	# The canonical name of the property.
	#
	# It is currently the short-`name` prefixed by the short-name of the class and the full-name of the module.
	# Example: "my_package::my_module::MyClass::my_method"
	#
	# The full-name of the module is needed because two distinct modules of the same package can
	# still refine the same class and introduce homonym properties.
	#
	# For public properties not introduced by refinement, the module name is not used.
	#
	# Example: `my_package::MyClass::My_method`
	redef var full_name is lazy do
		if intro_mclassdef.is_intro then
			return "{intro_mclassdef.mmodule.namespace_for(visibility)}::{intro_mclassdef.mclass.name}::{name}"
		else
			return "{intro_mclassdef.mmodule.full_name}::{intro_mclassdef.mclass.name}::{name}"
		end
	end

	redef var c_name is lazy do
		# FIXME use `namespace_for`
		return "{intro_mclassdef.mmodule.c_name}__{intro_mclassdef.mclass.name.to_cmangle}__{name.to_cmangle}"
	end

	# The visibility of the property
	redef var visibility

	# Is the property usable as an initializer?
	var is_autoinit = false is writable

	init
	do
		intro_mclassdef.intro_mproperties.add(self)
		var model = intro_mclassdef.mmodule.model
		model.mproperties_by_name.add_one(name, self)
		model.mproperties.add(self)
	end

	# All definitions of the property.
	# The first is the introduction,
	# The other are redefinitions (in refinements and in subclasses)
	var mpropdefs = new Array[MPROPDEF]

	# The definition that introduces the property.
	#
	# Warning: such a definition may not exist in the early life of the object.
	# In this case, the method will abort.
	var intro: MPROPDEF is noinit

	redef fun model do return intro.model

	# Alias for `name`
	redef fun to_s do return name

	# Return the most specific property definitions defined or inherited by a type.
	# The selection knows that refinement is stronger than specialization;
	# however, in case of conflict more than one property are returned.
	# If mtype does not know mproperty then an empty array is returned.
	#
	# If you want the really most specific property, then look at `lookup_first_definition`
	#
	# REQUIRE: `not mtype.need_anchor` to simplify the API (no `anchor` parameter)
	# ENSURE: `not mtype.has_mproperty(mmodule, self) == result.is_empty`
	fun lookup_definitions(mmodule: MModule, mtype: MType): Array[MPROPDEF]
	do
		assert not mtype.need_anchor
		mtype = mtype.undecorate

		var cache = self.lookup_definitions_cache[mmodule, mtype]
		if cache != null then return cache

		#print "select prop {mproperty} for {mtype} in {self}"
		# First, select all candidates
		var candidates = new Array[MPROPDEF]

		# Here we have two strategies: iterate propdefs or iterate classdefs.
		var mpropdefs = self.mpropdefs
		if mpropdefs.length <= 1 or mpropdefs.length < mtype.collect_mclassdefs(mmodule).length then
			# Iterate on all definitions of `self`, keep only those inherited by `mtype` in `mmodule`
			for mpropdef in mpropdefs do
				# If the definition is not imported by the module, then skip
				if not mmodule.in_importation <= mpropdef.mclassdef.mmodule then continue
				# If the definition is not inherited by the type, then skip
				if not mtype.is_subtype(mmodule, null, mpropdef.mclassdef.bound_mtype) then continue
				# Else, we keep it
				candidates.add(mpropdef)
			end
		else
			# Iterate on all super-classdefs of `mtype`, keep only the definitions of `self`, if any.
			for mclassdef in mtype.collect_mclassdefs(mmodule) do
				var p = mclassdef.mpropdefs_by_property.get_or_null(self)
				if p != null then candidates.add p
			end
		end

		# Fast track for only one candidate
		if candidates.length <= 1 then
			self.lookup_definitions_cache[mmodule, mtype] = candidates
			return candidates
		end

		# Second, filter the most specific ones
		return select_most_specific(mmodule, candidates)
	end

	private var lookup_definitions_cache = new HashMap2[MModule, MType, Array[MPROPDEF]]

	# Return the most specific property definitions inherited by a type.
	# The selection knows that refinement is stronger than specialization;
	# however, in case of conflict more than one property are returned.
	# If mtype does not know mproperty then an empty array is returned.
	#
	# If you want the really most specific property, then look at `lookup_next_definition`
	#
	# REQUIRE: `not mtype.need_anchor` to simplify the API (no `anchor` parameter)
	# ENSURE: `not mtype.has_mproperty(mmodule, self) implies result.is_empty`
	fun lookup_super_definitions(mmodule: MModule, mtype: MType): Array[MPROPDEF]
	do
		assert not mtype.need_anchor
		mtype = mtype.undecorate

		# First, select all candidates
		var candidates = new Array[MPROPDEF]
		for mpropdef in self.mpropdefs do
			# If the definition is not imported by the module, then skip
			if not mmodule.in_importation <= mpropdef.mclassdef.mmodule then continue
			# If the definition is not inherited by the type, then skip
			if not mtype.is_subtype(mmodule, null, mpropdef.mclassdef.bound_mtype) then continue
			# If the definition is defined by the type, then skip (we want the super, so e skip the current)
			if mtype == mpropdef.mclassdef.bound_mtype and mmodule == mpropdef.mclassdef.mmodule then continue
			# Else, we keep it
			candidates.add(mpropdef)
		end
		# Fast track for only one candidate
		if candidates.length <= 1 then return candidates

		# Second, filter the most specific ones
		return select_most_specific(mmodule, candidates)
	end

	# Return an array containing olny the most specific property definitions
	# This is an helper function for `lookup_definitions` and `lookup_super_definitions`
	private fun select_most_specific(mmodule: MModule, candidates: Array[MPROPDEF]): Array[MPROPDEF]
	do
		var res = new Array[MPROPDEF]
		for pd1 in candidates do
			var cd1 = pd1.mclassdef
			var c1 = cd1.mclass
			var keep = true
			for pd2 in candidates do
				if pd2 == pd1 then continue # do not compare with self!
				var cd2 = pd2.mclassdef
				var c2 = cd2.mclass
				if c2.mclass_type == c1.mclass_type then
					if cd2.mmodule.in_importation < cd1.mmodule then
						# cd2 refines cd1; therefore we skip pd1
						keep = false
						break
					end
				else if cd2.bound_mtype.is_subtype(mmodule, null, cd1.bound_mtype) and cd2.bound_mtype != cd1.bound_mtype then
					# cd2 < cd1; therefore we skip pd1
					keep = false
					break
				end
			end
			if keep then
				res.add(pd1)
			end
		end
		if res.is_empty then
			print_error "All lost! {candidates.join(", ")}"
			# FIXME: should be abort!
		end
		return res
	end

	# Return the most specific definition in the linearization of `mtype`.
	#
	# If you want to know the next properties in the linearization,
	# look at `MPropDef::lookup_next_definition`.
	#
	# FIXME: the linearization is still unspecified
	#
	# REQUIRE: `not mtype.need_anchor` to simplify the API (no `anchor` parameter)
	# REQUIRE: `mtype.has_mproperty(mmodule, self)`
	fun lookup_first_definition(mmodule: MModule, mtype: MType): MPROPDEF
	do
		return lookup_all_definitions(mmodule, mtype).first
	end

	# Return all definitions in a linearization order
	# Most specific first, most general last
	#
	# REQUIRE: `not mtype.need_anchor` to simplify the API (no `anchor` parameter)
	# REQUIRE: `mtype.has_mproperty(mmodule, self)`
	fun lookup_all_definitions(mmodule: MModule, mtype: MType): Array[MPROPDEF]
	do
		mtype = mtype.undecorate

		var cache = self.lookup_all_definitions_cache[mmodule, mtype]
		if cache != null then return cache

		assert not mtype.need_anchor
		assert mtype.has_mproperty(mmodule, self)

		#print "select prop {mproperty} for {mtype} in {self}"
		# First, select all candidates
		var candidates = new Array[MPROPDEF]
		for mpropdef in self.mpropdefs do
			# If the definition is not imported by the module, then skip
			if not mmodule.in_importation <= mpropdef.mclassdef.mmodule then continue
			# If the definition is not inherited by the type, then skip
			if not mtype.is_subtype(mmodule, null, mpropdef.mclassdef.bound_mtype) then continue
			# Else, we keep it
			candidates.add(mpropdef)
		end
		# Fast track for only one candidate
		if candidates.length <= 1 then
			self.lookup_all_definitions_cache[mmodule, mtype] = candidates
			return candidates
		end

		mmodule.linearize_mpropdefs(candidates)
		candidates = candidates.reversed
		self.lookup_all_definitions_cache[mmodule, mtype] = candidates
		return candidates
	end

	private var lookup_all_definitions_cache = new HashMap2[MModule, MType, Array[MPROPDEF]]

	redef var is_test is lazy do return intro.is_test

	# Does self have the `before` annotation?
	var is_before: Bool is lazy do return intro.is_before

	# Does self have the `before_all` annotation?
	var is_before_all: Bool is lazy do return intro.is_before_all

	# Does self have the `after` annotation?
	var is_after: Bool is lazy do return intro.is_after

	# Does self have the `after_all` annotation?
	var is_after_all: Bool is lazy do return intro.is_after_all
end

# A global method
class MMethod
	super MProperty

	redef type MPROPDEF: MMethodDef

	# Is the property defined at the top_level of the module?
	# Currently such a property are stored in `Object`
	var is_toplevel: Bool = false is writable

	# Is the property a constructor?
	# Warning, this property can be inherited by subclasses with or without being a constructor
	# therefore, you should use `is_init_for` the verify if the property is a legal constructor for a given class
	var is_init: Bool = false is writable

	# The constructor is a (the) root init with empty signature but a set of initializers
	var is_root_init: Bool = false is writable

	# Is the property a 'new' constructor?
	var is_new: Bool = false is writable

	# Is the property a legal constructor for a given class?
	# As usual, visibility is not considered.
	# FIXME not implemented
	fun is_init_for(mclass: MClass): Bool
	do
		return self.is_init
	end

	# A specific method that is safe to call on null.
	# Currently, only `==`, `!=` and `is_same_instance` are safe
	fun is_null_safe: Bool do return name == "==" or name == "!=" or name == "is_same_instance"

	# Is this method a getter (auto or not)?
	#
	# See `getter_for`.
	fun is_getter: Bool do return getter_for != null

	# The attribute this getter is for
	#
	# Return `null` is this method is not a getter.
	var getter_for: nullable MAttribute = null is writable

	# Is this method a setter (auto or not)?
	#
	# See `setter_for`.
	fun is_setter: Bool do return setter_for != null

	# The attribute this setter is for
	#
	# Return `null` is this method is not a setter.
	var setter_for: nullable MAttribute = null is writable

	# Is this method a getter or a setter?
	fun is_accessor: Bool do return is_getter or is_setter
end

# A global attribute
class MAttribute
	super MProperty

	redef type MPROPDEF: MAttributeDef

	# Does this attribute have a getter (auto or not)?
	#
	# See `getter`.
	fun has_getter: Bool do return getter != null

	# The getter of this attribute (if any)
	var getter: nullable MProperty = null is writable

	# Does this attribute have a setter (auto or not)?
	#
	# See `setter`.
	fun has_setter: Bool do return setter != null

	# The setter of this attribute (if any)
	var setter: nullable MProperty = null is writable
end

# A global virtual type
class MVirtualTypeProp
	super MProperty

	redef type MPROPDEF: MVirtualTypeDef

	# The formal type associated to the virtual type property
	var mvirtualtype = new MVirtualType(self)

	# Is `self` the special virtual type `SELF`?
	var is_selftype: Bool is lazy do return name == "SELF"
end

# A definition of a property (local property)
#
# Unlike `MProperty`, a `MPropDef` is a local definition that belong to a
# specific class definition (which belong to a specific module)
abstract class MPropDef
	super MEntity

	# The associated `MProperty` subclass.
	# the two specialization hierarchy are symmetric
	type MPROPERTY: MProperty

	# Self class
	type MPROPDEF: MPropDef

	# The class definition where the property definition is
	var mclassdef: MClassDef

	# The associated global property
	var mproperty: MPROPERTY

	redef var location

	redef fun visibility do return mproperty.visibility

	init
	do
		mclassdef.mpropdefs.add(self)
		mproperty.mpropdefs.add(self)
		mclassdef.mpropdefs_by_property[mproperty] = self
		if mproperty.intro_mclassdef == mclassdef then
			assert not isset mproperty._intro
			mproperty.intro = self
		end
		self.to_s = "{mclassdef}${mproperty}"
	end

	# Actually the name of the `mproperty`
	redef fun name do return mproperty.name

	# The full-name of mpropdefs combine the information about the `classdef` and the `mproperty`.
	#
	# Therefore the combination of identifiers is awful,
	# the worst case being
	#
	#  * a property "p::m::A::x"
	#  * redefined in a refinement of a class "q::n::B"
	#  * in a module "r::o"
	#  * so "r::o$q::n::B$p::m::A::x"
	#
	# Fortunately, the full-name is simplified when entities are repeated.
	# For the previous case, the simplest form is "p$A$x".
	redef var full_name is lazy do
		var res = new FlatBuffer

		# The first part is the mclassdef. Worst case is "r::o$q::n::B"
		res.append mclassdef.full_name

		res.append "$"

		if mclassdef.mclass == mproperty.intro_mclassdef.mclass then
			# intro are unambiguous in a class
			res.append name
		else
			# Just try to simplify each part
			if mclassdef.mmodule.mpackage != mproperty.intro_mclassdef.mmodule.mpackage then
				# precise "p::m" only if "p" != "r"
				res.append mproperty.intro_mclassdef.mmodule.namespace_for(mproperty.visibility)
				res.append "::"
			else if mproperty.visibility <= private_visibility then
				# Same package ("p"=="q"), but private visibility,
				# does the module part ("::m") need to be displayed
				if mclassdef.mmodule.namespace_for(mclassdef.mclass.visibility) != mproperty.intro_mclassdef.mmodule.mpackage then
					res.append "::"
					res.append mproperty.intro_mclassdef.mmodule.name
					res.append "::"
				end
			end
			# precise "B" because it is not the same class than "A"
			res.append mproperty.intro_mclassdef.name
			res.append "::"
			# Always use the property name "x"
			res.append mproperty.name
		end
		return res.to_s
	end

	redef var c_name is lazy do
		var res = new FlatBuffer
		res.append mclassdef.c_name
		res.append "___"
		if mclassdef.mclass == mproperty.intro_mclassdef.mclass then
			res.append name.to_cmangle
		else
			if mclassdef.mmodule != mproperty.intro_mclassdef.mmodule then
				res.append mproperty.intro_mclassdef.mmodule.c_name
				res.append "__"
			end
			res.append mproperty.intro_mclassdef.name.to_cmangle
			res.append "__"
			res.append mproperty.name.to_cmangle
		end
		return res.to_s
	end

	redef fun model do return mclassdef.model

	# Internal name combining the module, the class and the property
	# Example: "mymodule$MyClass$mymethod"
	redef var to_s is noinit

	# Is self the definition that introduce the property?
	fun is_intro: Bool do return isset mproperty._intro and mproperty.intro == self

	# Return the next definition in linearization of `mtype`.
	#
	# This method is used to determine what method is called by a super.
	#
	# REQUIRE: `not mtype.need_anchor`
	fun lookup_next_definition(mmodule: MModule, mtype: MType): MPROPDEF
	do
		assert not mtype.need_anchor

		var mpropdefs = self.mproperty.lookup_all_definitions(mmodule, mtype)
		var i = mpropdefs.iterator
		while i.is_ok and i.item != self do i.next
		assert has_property: i.is_ok
		i.next
		assert has_next_property: i.is_ok
		return i.item
	end

	redef fun mdoc_or_fallback do return mdoc or else mproperty.mdoc_or_fallback

	# Does self have the `before` annotation?
	var is_before = false is writable

	# Does self have the `before_all` annotation?
	var is_before_all = false is writable

	# Does self have the `after` annotation?
	var is_after = false is writable

	# Does self have the `after_all` annotation?
	var is_after_all = false is writable
end

# A local definition of a method
class MMethodDef
	super MPropDef

	redef type MPROPERTY: MMethod
	redef type MPROPDEF: MMethodDef

	# The signature attached to the property definition
	var msignature: nullable MSignature = null is writable

	# List of initialisers to call in root-inits
	#
	# They could be setters or attributes
	var initializers = new Array[MProperty]

	# Does the method take the responsibility to call `init`?
	#
	# If the method is used as an initializer, then
	# using this information prevents to call `init` twice.
	var is_calling_init = false is writable

	# Does the method is a old_style_init?
	#
	var is_old_style_init = false is writable

	# Is the method definition abstract?
	var is_abstract: Bool = false is writable

	# Is the method definition intern?
	var is_intern = false is writable

	# Is the method definition extern?
	var is_extern = false is writable

	# An optional constant value returned in functions.
	#
	# Only some specific primitife value are accepted by engines.
	# Is used when there is no better implementation available.
	#
	# Currently used only for the implementation of the `--define`
	# command-line option.
	# SEE: module `mixin`.
	var constant_value: nullable Object = null is writable
end

# A local definition of an attribute
class MAttributeDef
	super MPropDef

	redef type MPROPERTY: MAttribute
	redef type MPROPDEF: MAttributeDef

	# The static type of the attribute
	var static_mtype: nullable MType = null is writable
end

# A local definition of a virtual type
class MVirtualTypeDef
	super MPropDef

	redef type MPROPERTY: MVirtualTypeProp
	redef type MPROPDEF: MVirtualTypeDef

	# The bound of the virtual type
	var bound: nullable MType = null is writable

	# Is the bound fixed?
	var is_fixed = false is writable
end

# A kind of class.
#
#  * `abstract_kind`
#  * `concrete_kind`
#  * `interface_kind`
#  * `enum_kind`
#  * `extern_kind`
#
# Note this class is basically an enum.
# FIXME: use a real enum once user-defined enums are available
class MClassKind
	redef var to_s

	# Can a class of kind `self` define a membership predicate?
	var can_customize_isa: Bool

	# Can a class of kind `self` define a constructor?
	var can_init: Bool

	# Is a constructor required?
	var need_init: Bool

	# TODO: private init because enumeration.

	# Can a class of kind `self` specializes a class of kind `other`?
	fun can_specialize(other: MClassKind): Bool
	do
		if other == interface_kind then
			# everybody can specialize interfaces
			return true
		else if self == interface_kind or self == enum_kind then
			# no other case for interfaces and enums
			return false
		else if self == subset_kind then
			# A subset may specialize anything, except another subset.
			# TODO: Allow sub-subsets once we can handle them.
			return other != subset_kind
		else if self == extern_kind then
			# only compatible with themselves
			return self == other
		else
			# assert self == abstract_kind or self == concrete_kind
			return other == abstract_kind or other == concrete_kind
		end
	end
end

# The class kind `abstract`
fun abstract_kind: MClassKind do return once new MClassKind("abstract class", false, true, true)
# The class kind `concrete`
fun concrete_kind: MClassKind do return once new MClassKind("class", false, true, true)
# The class kind `interface`
fun interface_kind: MClassKind do return once new MClassKind("interface", false, true, false)
# The class kind `enum`
fun enum_kind: MClassKind do return once new MClassKind("enum", false, true, false)
# The class kind `extern`
fun extern_kind: MClassKind do return once new MClassKind("extern class", false, true, false)
# The class kind `subset`
fun subset_kind: MClassKind do return once new MClassKind("subset", true, false, false)

# A standalone pre-constructed model used to test various model-related methods.
#
# When instantiated, a standalone model is already filled with entities that are exposed as attributes.
class ModelStandalone
	super Model

	redef var location = new Location.opaque_file("ModelStandalone")

	# The first module
	var mmodule0 = new MModule(self, null, "module0", location)

	# The root Object class
	var mclass_o = new MClass(mmodule0, "Object", location, null, interface_kind, public_visibility)

	# The introduction of `mclass_o`
	var mclassdef_o = new MClassDef(mmodule0, mclass_o.mclass_type, location)
end

# A standalone model with the common class diamond-hierarchy ABCD
class ModelDiamond
	super ModelStandalone

	# A, a simple subclass of Object
	var mclass_a = new MClass(mmodule0, "A", location, null, concrete_kind, public_visibility)

	# The introduction of `mclass_a`
	var mclassdef_a: MClassDef do
		var res = new MClassDef(mmodule0, mclass_a.mclass_type, location)
		res.set_supertypes([mclass_o.mclass_type])
		res.add_in_hierarchy
		return res
	end

	# B, a subclass of A (`mclass_a`)
	var mclass_b = new MClass(mmodule0, "B", location, null, concrete_kind, public_visibility)

	# The introduction of `mclass_b`
	var mclassdef_b: MClassDef do
		var res = new MClassDef(mmodule0, mclass_b.mclass_type, location)
		res.set_supertypes([mclass_a.mclass_type])
		res.add_in_hierarchy
		return res
	end

	# C, another subclass of A (`mclass_a`)
	var mclass_c = new MClass(mmodule0, "C", location, null, concrete_kind, public_visibility)

	# The introduction of `mclass_c`
	var mclassdef_c: MClassDef do
		var res = new MClassDef(mmodule0, mclass_c.mclass_type, location)
		res.set_supertypes([mclass_a.mclass_type])
		res.add_in_hierarchy
		return res
	end

	# D, a multiple subclass of B (`mclass_b`) and C (`mclass_c`)
	var mclass_d = new MClass(mmodule0, "D", location, null, concrete_kind, public_visibility)

	# The introduction of `mclass_d`
	var mclassdef_d: MClassDef do
		var res = new MClassDef(mmodule0, mclass_d.mclass_type, location)
		res.set_supertypes([mclass_b.mclass_type, mclass_c.mclass_type])
		res.add_in_hierarchy
		return res
	end
end
