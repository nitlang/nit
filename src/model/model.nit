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

# Object model of the Nit language
#
# This module define the entities of the Nit meta-model like modules,
# classes, types and properties
#
# It also provide an API to build and query models.
#
# All model classes starts with the M letter (MModule, MClass, etc.)
#
# TODO: better doc
#
# TODO: liearization, closures, extern stuff
# FIXME: better handling of the types
module model

import poset
import location
import model_base
private import more_collections

redef class Model
	# All known classes
	var mclasses: Array[MClass] = new Array[MClass]

	# All known properties
	var mproperties: Array[MProperty] = new Array[MProperty]

	# Hierarchy of class definition.
	#
	# Each classdef is associated with its super-classdefs in regard to
	# its module of definition.
	var mclassdef_hierarchy: POSet[MClassDef] = new POSet[MClassDef]

	# Class-type hierarchy restricted to the introduction.
	#
	# The idea is that what is true on introduction is always true whatever
	# the module considered.
	# Therefore, this hierarchy is used for a fast positive subtype check.
	#
	# This poset will evolve in a monotonous way:
	# * Two non connected nodes will remain unconnected
	# * New nodes can appear with new edges
	private var intro_mtype_specialization_hierarchy: POSet[MClassType] = new POSet[MClassType]

	# Global overlapped class-type hierarchy.
	# The hierarchy when all modules are combined.
	# Therefore, this hierarchy is used for a fast negative subtype check.
	#
	# This poset will evolve in an anarchic way. Loops can even be created.
	#
	# FIXME decide what to do on loops
	private var full_mtype_specialization_hierarchy: POSet[MClassType] = new POSet[MClassType]

	# Collections of classes grouped by their short name
	private var mclasses_by_name: MultiHashMap[String, MClass] = new MultiHashMap[String, MClass]

	# Return all class named `name'.
	#
	# If such a class does not exist, null is returned
	# (instead of an empty array)
	#
	# Visibility or modules are not considered
	fun get_mclasses_by_name(name: String): nullable Array[MClass]
	do
		if mclasses_by_name.has_key(name) then
			return mclasses_by_name[name]
		else
			return null
		end
	end

	# Collections of properties grouped by their short name
	private var mproperties_by_name: MultiHashMap[String, MProperty] = new MultiHashMap[String, MProperty]

	# Return all properties named `name'.
	#
	# If such a property does not exist, null is returned
	# (instead of an empty array)
	#
	# Visibility or modules are not considered
	fun get_mproperties_by_name(name: String): nullable Array[MProperty]
	do
		if not mproperties_by_name.has_key(name) then
			return null
		else
			return mproperties_by_name[name]
		end
	end

	# The only null type
	var null_type: MNullType = new MNullType(self)
end

redef class MModule
	# All the classes introduced in the module
	var intro_mclasses: Array[MClass] = new Array[MClass]

	# All the class definitions of the module
	# (introduction and refinement)
	var mclassdefs: Array[MClassDef] = new Array[MClassDef]

	# Does the current module has a given class `mclass'?
	# Return true if the mmodule introduces, refines or imports a class.
	# Visibility is not considered.
	fun has_mclass(mclass: MClass): Bool
	do
		return self.in_importation <= mclass.intro_mmodule
	end

	# Full hierarchy of introduced ans imported classes.
	#
	# Create a new hierarchy got by flattening the classes for the module
	# and its imported modules.
	# Visibility is not considered.
	#
	# Note: this function is expensive and is usually used for the main
	# module of a program only. Do not use it to do you own subtype
	# functions.
	fun flatten_mclass_hierarchy: POSet[MClass]
	do
		var res = self.flatten_mclass_hierarchy_cache
		if res != null then return res
		res = new POSet[MClass]
		for m in self.in_importation.greaters do
			for cd in m.mclassdefs do
				var c = cd.mclass
				res.add_node(c)
				for s in cd.supertypes do
					res.add_edge(c, s.mclass)
				end
			end
		end
		self.flatten_mclass_hierarchy_cache = res
		return res
	end

	# Sort a given array of classes using the linerarization order of the module
	# The most general is first, the most specific is last
	fun linearize_mclasses(mclasses: Array[MClass])
	do
		self.flatten_mclass_hierarchy.sort(mclasses)
	end

	# Sort a given array of class definitions using the linerarization order of the module
	# the refinement link is stronger than the specialisation link
	# The most general is first, the most specific is last
	fun linearize_mclassdefs(mclassdefs: Array[MClassDef])
	do
		var sorter = new MClassDefSorter(self)
		sorter.sort(mclassdefs)
	end

	# Sort a given array of property definitions using the linerarization order of the module
	# the refinement link is stronger than the specialisation link
	# The most general is first, the most specific is last
	fun linearize_mpropdefs(mpropdefs: Array[MPropDef])
	do
		var sorter = new MPropDefSorter(self)
		sorter.sort(mpropdefs)
	end

	private var flatten_mclass_hierarchy_cache: nullable POSet[MClass] = null

	# The primitive type Object, the root of the class hierarchy
	fun object_type: MClassType
	do
		var res = self.object_type_cache
		if res != null then return res
		res = self.get_primitive_class("Object").mclass_type
		self.object_type_cache = res
		return res
	end

	private var object_type_cache: nullable MClassType

	# The primitive type Bool
	fun bool_type: MClassType
	do
		var res = self.bool_type_cache
		if res != null then return res
		res = self.get_primitive_class("Bool").mclass_type
		self.bool_type_cache = res
		return res
	end

	private var bool_type_cache: nullable MClassType

	# The primitive type Sys, the main type of the program, if any
	fun sys_type: nullable MClassType
	do
		var clas = self.model.get_mclasses_by_name("Sys")
		if clas == null then return null
		return get_primitive_class("Sys").mclass_type
	end

	# Force to get the primitive class named `name' or abort
	fun get_primitive_class(name: String): MClass
	do
		var cla = self.model.get_mclasses_by_name(name)
		if cla == null then
			if name == "Bool" then
				var c = new MClass(self, name, 0, enum_kind, public_visibility)
				var cladef = new MClassDef(self, c.mclass_type, new Location(null, 0,0,0,0), new Array[String])
				return c
			end
			print("Fatal Error: no primitive class {name}")
			exit(1)
		end
		assert cla.length == 1 else print cla.join(", ")
		return cla.first
	end

	# Try to get the primitive method named `name' on the type `recv'
	fun try_get_primitive_method(name: String, recv: MClass): nullable MMethod
	do
		var props = self.model.get_mproperties_by_name(name)
		if props == null then return null
		var res: nullable MMethod = null
		for mprop in props do
			assert mprop isa MMethod
			var intro = mprop.intro_mclassdef
			for mclassdef in recv.mclassdefs do
				if not self.in_importation.greaters.has(mclassdef.mmodule) then continue
				if not mclassdef.in_hierarchy.greaters.has(intro) then continue
				if res == null then
					res = mprop
				else if res != mprop then
					print("Fatal Error: ambigous property name '{name}'; conflict between {mprop.full_name} and {res.full_name}")
					abort
				end
			end
		end
		return res
	end
end

private class MClassDefSorter
	super AbstractSorter[MClassDef]
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
	super AbstractSorter[MPropDef]
	var mmodule: MModule
	redef fun compare(pa, pb)
	do
		var a = pa.mclassdef
		var b = pb.mclassdef
		var ca = a.mclass
		var cb = b.mclass
		if ca != cb then return mmodule.flatten_mclass_hierarchy.compare(ca, cb)
		return mmodule.model.mclassdef_hierarchy.compare(a, b)
	end
end

# A named class
#
# MClass are global to the model; it means that a MClass is not bound to a
# specific `MModule`.
#
# This characteristic helps the reasoning about classes in a program since a
# single MClass object always denote the same class.
# However, because a MClass is global, it does not really have properties nor
# belong to a hierarchy since the property and the
# hierarchy of a class depends of a module.
class MClass
	# The module that introduce the class
	# While classes are not bound to a specific module,
	# the introducing module is used for naming an visibility
	var intro_mmodule: MModule

	# The short name of the class
	# In Nit, the name of a class cannot evolve in refinements
	var name: String

	# The canonical name of the class
	# Example: "owner::module::MyClass"
	fun full_name: String
	do
		return "{self.intro_mmodule.full_name}::{name}"
	end

	# The number of generic formal parameters
	# 0 if the class is not generic
	var arity: Int

	# The kind of the class (interface, abstract class, etc.)
	# In Nit, the kind of a class cannot evolve in refinements
	var kind: MClassKind

	# The visibility of the class
	# In Nit, the visibility of a class cannot evolve in refinements
	var visibility: MVisibility

	init(intro_mmodule: MModule, name: String, arity: Int, kind: MClassKind, visibility: MVisibility)
	do
		self.intro_mmodule = intro_mmodule
		self.name = name
		self.arity = arity
		self.kind = kind
		self.visibility = visibility
		intro_mmodule.intro_mclasses.add(self)
		var model = intro_mmodule.model
		model.mclasses_by_name.add_one(name, self)
		model.mclasses.add(self)

		# Create the formal parameter types
		if arity > 0 then
			var mparametertypes = new Array[MParameterType]
			for i in [0..arity[ do
				var mparametertype = new MParameterType(self, i)
				mparametertypes.add(mparametertype)
			end
			var mclass_type = new MGenericType(self, mparametertypes)
			self.mclass_type = mclass_type
			self.get_mtype_cache.add(mclass_type)
		else
			self.mclass_type = new MClassType(self)
		end
	end

	# All class definitions (introduction and refinements)
	var mclassdefs: Array[MClassDef] = new Array[MClassDef]

	# Alias for `name'
	redef fun to_s do return self.name

	# The definition that introduced the class
	# Warning: the introduction is the first `MClassDef' object associated
	# to self.  If self is just created without having any associated
	# definition, this method will abort
	fun intro: MClassDef
	do
		assert has_a_first_definition: not mclassdefs.is_empty
		return mclassdefs.first
	end

	# Return the class `self' in the class hierarchy of the module `mmodule'.
	#
	# SEE: MModule::flatten_mclass_hierarchy
	# REQUIRE: mmodule.has_mclass(self)
	fun in_hierarchy(mmodule: MModule): POSetElement[MClass]
	do
		return mmodule.flatten_mclass_hierarchy[self]
	end

	# The principal static type of the class.
	#
	# For non-generic class, mclass_type is the only MClassType based
	# on self.
	#
	# For a generic class, the arguments are the formal parameters.
	# i.e.: for the class `Array[E:Object]', the mtype is Array[E].
	# If you want `Array[Object]' the see `MClassDef::bound_mtype'
	#
	# For generic classes, the mclass_type is also the way to get a formal
	# generic parameter type.
	#
	# To get other types based on a generic class, see `get_mtype'.
	#
	# ENSURE: mclass_type.mclass == self
	var mclass_type: MClassType

	# Return a generic type based on the class
	# Is the class is not generic, then the result is `mclass_type'
	#
	# REQUIRE: type_arguments.length == self.arity
	fun get_mtype(mtype_arguments: Array[MType]): MClassType
	do
		assert mtype_arguments.length == self.arity
		if self.arity == 0 then return self.mclass_type
		for t in self.get_mtype_cache do
			if t.arguments == mtype_arguments then
				return t
			end
		end
		var res = new MGenericType(self, mtype_arguments)
		self.get_mtype_cache.add res
		return res
	end

	private var get_mtype_cache: Array[MGenericType] = new Array[MGenericType]
end


# A definition (an introduction or a refinement) of a class in a module
#
# A MClassDef is associated with an explicit (or almost) definition of a
# class. Unlike MClass, a MClassDef is a local definition that belong to
# a specific module
class MClassDef
	# The module where the definition is
	var mmodule: MModule

	# The associated MClass
	var mclass: MClass

	# The bounded type associated to the mclassdef
	#
	# For a non-generic class, `bound_mtype' and `mclass.mclass_type'
	# are the same type.
	#
	# Example:
	# For the classdef Array[E: Object], the bound_mtype is Array[Object].
	# If you want Array[E], then see `mclass.mclass_type'
	#
	# ENSURE: bound_mtype.mclass = self.mclass
	var bound_mtype: MClassType

	# Name of each formal generic parameter (in order of declaration)
	var parameter_names: Array[String]

	# The origin of the definition
	var location: Location

	# Internal name combining the module and the class
	# Example: "mymodule#MyClass"
	redef var to_s: String

	init(mmodule: MModule, bound_mtype: MClassType, location: Location, parameter_names: Array[String])
	do
		assert bound_mtype.mclass.arity == parameter_names.length
		self.bound_mtype = bound_mtype
		self.mmodule = mmodule
		self.mclass = bound_mtype.mclass
		self.location = location
		mmodule.mclassdefs.add(self)
		mclass.mclassdefs.add(self)
		self.parameter_names = parameter_names
		self.to_s = "{mmodule}#{mclass}"
	end

	# All declared super-types
	# FIXME: quite ugly but not better idea yet
	var supertypes: Array[MClassType] = new Array[MClassType]

	# Register some super-types for the class (ie "super SomeType")
	#
	# The hierarchy must not already be set
	# REQUIRE: self.in_hierarchy == null
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
	# REQUIRE: self.in_hierarchy == null
	# ENSURE: self.in_hierarchy != null
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

	# The view of the class definition in `mclassdef_hierarchy'
	var in_hierarchy: nullable POSetElement[MClassDef] = null

	# Is the definition the one that introduced `mclass`?
	fun is_intro: Bool do return mclass.intro == self

	# All properties introduced by the classdef
	var intro_mproperties: Array[MProperty] = new Array[MProperty]

	# All property definitions in the class (introductions and redefinitions)
	var mpropdefs: Array[MPropDef] = new Array[MPropDef]
end

# A global static type
#
# MType are global to the model; it means that a MType is not bound to a
# specific `MModule`.
# This characteristic helps the reasoning about static types in a program
# since a single MType object always denote the same type.
#
# However, because a MType is global, it does not really have properties
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
# MType are not directly usable to get properties. See the `anchor_to' method
# and the `MClassType' class.
#
# FIXME: the order of the parameters is not the best. We mus pick on from:
#  * foo(mmodule, anchor, othertype)
#  * foo(othertype, anchor, mmodule)
#  * foo(anchor, mmodule, othertype)
#  * foo(othertype, mmodule, anchor)
abstract class MType

	# The model of the type
	fun model: Model is abstract

	# Return true if `self' is an subtype of `sup'.
	# The typing is done using the standard typing policy of Nit.
	#
	# REQUIRE: anchor == null implies not self.need_anchor and not sup.need_anchor
	# REQUIRE: anchor != null implies self.can_resolve_for(anchor, null, mmodule) and sup.can_resolve_for(anchor, null, mmodule)
	fun is_subtype(mmodule: MModule, anchor: nullable MClassType, sup: MType): Bool
	do
		var sub = self
		if sub == sup then return true
		if anchor == null then
			assert not sub.need_anchor
			assert not sup.need_anchor
		else
			assert sub.can_resolve_for(anchor, null, mmodule)
			assert sup.can_resolve_for(anchor, null, mmodule)
		end

		# First, resolve the formal types to a common version in the receiver
		# The trick here is that fixed formal type will be associed to the bound
		# And unfixed formal types will be associed to a canonical formal type.
		if sub isa MParameterType or sub isa MVirtualType then
			assert anchor != null
			sub = sub.resolve_for(anchor.mclass.mclass_type, anchor, mmodule, false)
		end
		if sup isa MParameterType or sup isa MVirtualType then
			assert anchor != null
			sup = sup.resolve_for(anchor.mclass.mclass_type, anchor, mmodule, false)
		end

		# Does `sup` accept null or not?
		# Discard the nullable marker if it exists
		var sup_accept_null = false
		if sup isa MNullableType then
			sup_accept_null = true
			sup = sup.mtype
		else if sup isa MNullType then
			sup_accept_null = true
		end

		# Can `sub` provide null or not?
		# Thus we can match with `sup_accept_null`
		# Also discard the nullable marker if it exists
		if sub isa MNullableType then
			if not sup_accept_null then return false
			sub = sub.mtype
		else if sub isa MNullType then
			return sup_accept_null
		end
		# Now the case of direct null and nullable is over.

		# A unfixed formal type can only accept itself
		if sup isa MParameterType or sup isa MVirtualType then
			return sub == sup
		end

		# If `sub` is a formal type, then it is accepted if its bound is accepted
		if sub isa MParameterType or sub isa MVirtualType then
			assert anchor != null
			sub = sub.anchor_to(mmodule, anchor)

			# Manage the second layer of null/nullable
			if sub isa MNullableType then
				if not sup_accept_null then return false
				sub = sub.mtype
			else if sub isa MNullType then
				return sup_accept_null
			end
		end

		assert sub isa MClassType # It is the only remaining type

		if sup isa MNullType then
			# `sup` accepts only null
			return false
		end

		assert sup isa MClassType # It is the only remaining type

		# Now both are MClassType, we need to dig

		if sub == sup then return true

		if anchor == null then anchor = sub # UGLY: any anchor will work
		var resolved_sub = sub.anchor_to(mmodule, anchor)
		var res = resolved_sub.collect_mclasses(mmodule).has(sup.mclass)
		if res == false then return false
		if not sup isa MGenericType then return true
		var sub2 = sub.supertype_to(mmodule, anchor, sup.mclass)
		assert sub2.mclass == sup.mclass
		for i in [0..sup.mclass.arity[ do
			var sub_arg = sub2.arguments[i]
			var sup_arg = sup.arguments[i]
			res = sub_arg.is_subtype(mmodule, anchor, sup_arg)
			if res == false then return false
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
	#     class G[T: A]
	#       type U: X
	#     end
	#     class H
	#       super G[C]
	#       redef type U: Y
	#     end
	# Map[T,U]  anchor_to  H  #->  Map[C,Y]
	#
	# Explanation of the example:
	# In H, T is set to C, because "H super G[C]", and U is bound to Y,
        # because "redef type U: Y". Therefore, Map[T, U] is bound to
	# Map[C, Y]
	#
	# ENSURE: not self.need_anchor implies return == self
	# ENSURE: not return.need_anchor
	fun anchor_to(mmodule: MModule, anchor: MClassType): MType
	do
		if not need_anchor then return self
		assert not anchor.need_anchor
		# Just resolve to the anchor and clear all the virtual types
		var res = self.resolve_for(anchor, null, mmodule, true)
		assert not res.need_anchor
		return res
	end

	# Does `self' contain a virtual type or a formal generic parameter type?
	# In order to remove those types, you usually want to use `anchor_to'.
	fun need_anchor: Bool do return true

	# Return the supertype when adapted to a class.
	#
	# In Nit, for each super-class of a type, there is a equivalent super-type.
	#
	# Example:
	#     class G[T, U]
	#     class H[V] super G[V, Bool]
	# H[Int]  supertype_to  G  #->  G[Int, Bool]
	#
	# REQUIRE: `super_mclass' is a super-class of `self'
	# REQUIRE: self.need_anchor implies anchor != null and self.can_resolve_for(anchor, null, mmodule)
	# ENSURE: return.mclass = mclass
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

	# Replace formals generic types in self with resolved values in `mtype'
	# If `cleanup_virtual' is true, then virtual types are also replaced
	# with their bounds
	#
	# This function returns self if `need_anchor' is false.
	#
	# ## Example 1
	#
	#     class G[E]
	#     class H[F] super G[F]
	#     class X[Z]
	#
	#   Array[E].resolve_for(H[Int])  #->  Array[Int]
	#   Array[E].resolve_for(G[Z], X[Int]) #->  Array[Z]
	#
	# Explanation of the example:
	#  * Array[E].need_anchor is true because there is a formal generic
	#    parameter type E
	#  * E makes sense for H[Int] because E is a formal parameter of G
	#    and H specialize G
	#  * Since "H[F] super G[F]", E is in fact F for H
	#  * More specifically, in H[Int], E is Int
	#  * So, in H[Int], Array[E] is Array[Int]
	#
	# This function is mainly used to inherit a signature.
	# Because, unlike `anchor_to', we do not want a full resolution of
	# a type but only an adapted version of it.
	#
	# ## Example 2
	#
        #     class A[E]
	#         foo(e:E):E
	#     end
	#     class B super A[Int] end
	#
	# The signature on foo is (e: E): E
	# If we resolve the signature for B, we get (e:Int):Int
	#
	# ## Example 3
	#
	#     class A[E]
	#         fun foo(e:E) is abstract
	#     end
	#     class B[F]
	#         var a: A[Array[F]]
	#         fun bar do a.foo(x) # <- x is here
	#     end
	#
	# The first question is: is foo available on `a`?
	#
	# The static type of a is `A[Array[F]]`, that is an open type.
	# in order to find a method `foo`, whe must look at a resolved type.
	#
	#   A[Array[F]].anchor_to(B[nullable Object])  #->  A[Array[nullable Object]]
	#
	# the method `foo` exists in `A[Array[nullable Object]]`, therefore `foo` exists for `a`.
	#
	# The next question is: what is the accepted types for `x'?
	#
	# the signature of `foo` is `foo(e:E)`, thus we must resolve the type E
	#
	#   E.resolve_for(A[Array[F]],B[nullable Object])  #->  Array[F]
	#
	# The resolution can be done because `E` make sense for the class A (see `can_resolve_for`)
	#
	# TODO: Explain the cleanup_virtual
	#
	# FIXME: the parameter `cleanup_virtual' is just a bad idea, but having
	# two function instead of one seems also to be a bad idea.
	#
	# REQUIRE: can_resolve_for(mtype, anchor, mmodule)
	# ENSURE: not self.need_anchor implies return == self
	fun resolve_for(mtype: MType, anchor: nullable MClassType, mmodule: MModule, cleanup_virtual: Bool): MType is abstract

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
	#   E.can_resolve_for(A[Int])  #->  true, E make sense in A
	#   E.can_resolve_for(B[Int])  #->  false, E does not make sense in B
	#   B[E].can_resolve_for(A[F], B[Object])  #->  true,
	#     B[E] is a red hearing only the E is important,
	#     E make sense in A
	#
	# REQUIRE: anchor != null implies not anchor.need_anchor
	# REQUIRE: mtype.need_anchor implies anchor != null and mtype.can_resolve_for(anchor, null, mmodule)
	# ENSURE: not self.need_anchor implies return == true
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

	private var as_nullable_cache: nullable MType = null


	# The deph of the type seen as a tree.
	#
	# A -> 1
	# G[A] -> 2
	# H[A, B] -> 2
	# H[G[A], B] -> 3
	#
	# Formal types have a depth of 1.
	fun depth: Int
	do
		return 1
	end

	# The length of the type seen as a tree.
	#
	# A -> 1
	# G[A] -> 2
	# H[A, B] -> 3
	# H[G[A], B] -> 4
	#
	# Formal types have a length of 1.
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
	# REQUIRE: not self.need_anchor
	fun collect_mclassdefs(mmodule: MModule): Set[MClassDef] is abstract

	# Compute all the super-classes.
	# This function is used mainly internally.
	#
	# REQUIRE: not self.need_anchor
	fun collect_mclasses(mmodule: MModule): Set[MClass] is abstract

	# Compute all the declared super-types.
	# Super-types are returned as declared in the classdefs (verbatim).
	# This function is used mainly internally.
	#
	# REQUIRE: not self.need_anchor
	fun collect_mtypes(mmodule: MModule): Set[MClassType] is abstract

	# Is the property in self for a given module
	# This method does not filter visibility or whatever
	#
	# REQUIRE: not self.need_anchor
	fun has_mproperty(mmodule: MModule, mproperty: MProperty): Bool
	do
		assert not self.need_anchor
		return self.collect_mclassdefs(mmodule).has(mproperty.intro_mclassdef)
	end
end

# A type based on a class.
#
# MClassType have properties (see `has_property').
class MClassType
	super MType

	# The associated class
	var mclass: MClass

	redef fun model do return self.mclass.intro_mmodule.model

	private init(mclass: MClass)
	do
		self.mclass = mclass
	end

	# The formal arguments of the type
	# ENSURE: return.length == self.mclass.arity
	var arguments: Array[MType] = new Array[MType]

	redef fun to_s do return mclass.to_s

	redef fun need_anchor do return false

	redef fun anchor_to(mmodule: MModule, anchor: MClassType): MClassType
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
		assert not self.need_anchor
		var cache = self.collect_mclasses_cache
		if not cache.has_key(mmodule) then
			self.collect_things(mmodule)
		end
		return cache[mmodule]
	end

	redef fun collect_mtypes(mmodule)
	do
		assert not self.need_anchor
		var cache = self.collect_mtypes_cache
		if not cache.has_key(mmodule) then
			self.collect_things(mmodule)
		end
		return cache[mmodule]
	end

	# common implementation for `collect_mclassdefs', `collect_mclasses', and `collect_mtypes'.
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

	private var collect_mclassdefs_cache: HashMap[MModule, Set[MClassDef]] = new HashMap[MModule, Set[MClassDef]]
	private var collect_mclasses_cache: HashMap[MModule, Set[MClass]] = new HashMap[MModule, Set[MClass]]
	private var collect_mtypes_cache: HashMap[MModule, Set[MClassType]] = new HashMap[MModule, Set[MClassType]]

end

# A type based on a generic class.
# A generic type a just a class with additional formal generic arguments.
class MGenericType
	super MClassType

	private init(mclass: MClass, arguments: Array[MType])
	do
		super(mclass)
		assert self.mclass.arity == arguments.length
		self.arguments = arguments

		self.need_anchor = false
		for t in arguments do
			if t.need_anchor then
				self.need_anchor = true
				break
			end
		end

		self.to_s = "{mclass}[{arguments.join(", ")}]"
	end

	# Recursively print the type of the arguments within brackets.
	# Example: "Map[String, List[Int]]"
	redef var to_s: String

	redef var need_anchor: Bool

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

# A virtual formal type.
class MVirtualType
	super MType

	# The property associated with the type.
	# Its the definitions of this property that determine the bound or the virtual type.
	var mproperty: MProperty

	redef fun model do return self.mproperty.intro_mclassdef.mmodule.model

	# Lookup the bound for a given resolved_receiver
	# The result may be a other virtual type (or a parameter type)
	#
	# The result is returned exactly as declared in the "type" property (verbatim).
	#
	# In case of conflict, the method aborts.
	fun lookup_bound(mmodule: MModule, resolved_receiver: MType): MType
	do
		assert not resolved_receiver.need_anchor
		var props = self.mproperty.lookup_definitions(mmodule, resolved_receiver)
		if props.is_empty then
			abort
		else if props.length == 1 then
			return props.first.as(MVirtualTypeDef).bound.as(not null)
		end
		var types = new ArraySet[MType]
		for p in props do
			types.add(p.as(MVirtualTypeDef).bound.as(not null))
		end
		if types.length == 1 then
			return types.first
		end
		abort
	end

	redef fun resolve_for(mtype, anchor, mmodule, cleanup_virtual)
	do
		assert can_resolve_for(mtype, anchor, mmodule)
		# self is a virtual type declared (or inherited) in mtype
		# The point of the function it to get the bound of the virtual type that make sense for mtype
		# But because mtype is maybe a virtual/formal type, we need to get a real receiver first
		#print "{class_name}: {self}/{mtype}/{anchor}?"
		var resolved_reciever
		if mtype.need_anchor then
			assert anchor != null
			resolved_reciever = mtype.resolve_for(anchor, null, mmodule, true)
		else
			resolved_reciever = mtype
		end
		# Now, we can get the bound
		var verbatim_bound = lookup_bound(mmodule, resolved_reciever)
		# The bound is exactly as declared in the "type" property, so we must resolve it again
		var res = verbatim_bound.resolve_for(mtype, anchor, mmodule, cleanup_virtual)
		#print "{class_name}: {self}/{mtype}/{anchor} -> {self}/{resolved_reciever}/{anchor} -> {verbatim_bound}/{mtype}/{anchor} -> {res}"

		# What to return here? There is a bunch a special cases:
		# If 'cleanup_virtual' we must return the resolved type, since we cannot return self
		if cleanup_virtual then return res
		# If the reciever is a intern class, then the virtual type cannot be redefined since there is no possible subclass. self is just fixed. so simply return the resolution
		if resolved_reciever isa MNullableType then resolved_reciever = resolved_reciever.mtype
		if resolved_reciever.as(MClassType).mclass.kind == enum_kind then return res
		# If the resolved type isa MVirtualType, it means that self was bound to it, and cannot be unbound. self is just fixed. so return the resolution.
		if res isa MVirtualType then return res
		# It the resolved type isa intern class, then there is no possible valid redefinition is any potentiel subclass. self is just fixed. so simply return the resolution
		if res isa MClassType and res.mclass.kind == enum_kind then return res
		# TODO: Add 'fixed' virtual type in the specification.
		# TODO: What if bound to a MParameterType?
		# Note that Nullable types can always be redefined by the non nullable version, so there is no specific case on it.

		# If anything apply, then `self' cannot be resolved, so return self
		return self
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

	init(mproperty: MProperty)
	do
		self.mproperty = mproperty
	end
end

# The type associated the a formal parameter generic type of a class
#
# Each parameter type is associated to a specific class.
# It's mean that all refinements of a same class "share" the parameter type,
# but that a generic subclass has its on parameter types.
#
# However, in the sense of the meta-model, the a parameter type of a class is
# a valid types in a subclass. The "in the sense of the meta-model" is
# important because, in the Nit language, the programmer cannot refers
# directly to the parameter types of the super-classes.
#
# Example:
#     class A[E]
#         fun e: E is abstract
#     end
#     class B[F]
#         super A[Array[F]]
#     end
# In the class definition B[F], `F' is a valid type but `E' is not.
# However, `self.e' is a valid method call, and the signature of `e' is
# declared `e: E'.
#
# Note that parameter types are shared among class refinements.
# Therefore parameter only have an internal name (see `to_s' for details).
# TODO: Add a 'name_for' to get better messages.
class MParameterType
	super MType

	# The generic class where the parameter belong
	var mclass: MClass

	redef fun model do return self.mclass.intro_mmodule.model

	# The position of the parameter (0 for the first parameter)
	# FIXME: is `position' a better name?
	var rank: Int

	# Internal name of the parameter type
	# Names of parameter types changes in each class definition
	# Therefore, this method return an internal name.
	# Example: return "G#1" for the second parameter of the class G
	# FIXME: add a way to get the real name in a classdef
	redef fun to_s do return "{mclass}#{rank}"

	# Resolve the bound for a given resolved_receiver
	# The result may be a other virtual type (or a parameter type)
	fun lookup_bound(mmodule: MModule, resolved_receiver: MType): MType
	do
		assert not resolved_receiver.need_anchor
		var goalclass = self.mclass
		var supertypes = resolved_receiver.collect_mtypes(mmodule)
		for t in supertypes do
			if t.mclass == goalclass then
				# Yeah! c specialize goalclass with a "super `t'". So the question is what is the argument of f
				# FIXME: Here, we stop on the first goal. Should we check others and detect inconsistencies?
				var res = t.arguments[self.rank]
				return res
			end
		end
		abort
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
		# FIXME: What happend here is far from clear. Thus this part must be validated and clarified
		var resolved_receiver
		if mtype.need_anchor then
			assert anchor != null
			resolved_receiver = mtype.resolve_for(anchor.mclass.mclass_type, anchor, mmodule, true)
		else
			resolved_receiver = mtype
		end
		if resolved_receiver isa MNullableType then resolved_receiver = resolved_receiver.mtype
		if resolved_receiver isa MParameterType then
			assert resolved_receiver.mclass == anchor.mclass
			resolved_receiver = anchor.arguments[resolved_receiver.rank]
			if resolved_receiver isa MNullableType then resolved_receiver = resolved_receiver.mtype
		end
		assert resolved_receiver isa MClassType

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

	init(mclass: MClass, rank: Int)
	do
		self.mclass = mclass
		self.rank = rank
	end
end

# A type prefixed with "nullable"
class MNullableType
	super MType

	# The base type of the nullable type
	var mtype: MType

	redef fun model do return self.mtype.model

	init(mtype: MType)
	do
		self.mtype = mtype
		self.to_s = "nullable {mtype}"
	end

	redef var to_s: String

	redef fun need_anchor do return mtype.need_anchor
	redef fun as_nullable do return self
	redef fun resolve_for(mtype, anchor, mmodule, cleanup_virtual)
	do
		var res = self.mtype.resolve_for(mtype, anchor, mmodule, cleanup_virtual)
		return res.as_nullable
	end

	redef fun can_resolve_for(mtype, anchor, mmodule)
	do
		return self.mtype.can_resolve_for(mtype, anchor, mmodule)
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

# The type of the only value null
#
# The is only one null type per model, see `MModel::null_type'.
class MNullType
	super MType
	redef var model: Model
	protected init(model: Model)
	do
		self.model = model
	end
	redef fun to_s do return "null"
	redef fun as_nullable do return self
	redef fun need_anchor do return false
	redef fun resolve_for(mtype, anchor, mmodule, cleanup_virtual) do return self
	redef fun can_resolve_for(mtype, anchor, mmodule) do return true

	redef fun collect_mclassdefs(mmodule) do return new HashSet[MClassDef]

	redef fun collect_mclasses(mmodule) do return new HashSet[MClass]

	redef fun collect_mtypes(mmodule) do return new HashSet[MClassType]
end

# A signature of a method (or a closure)
class MSignature
	super MType

	# The each parameter (in order)
	var mparameters: Array[MParameter]

	var mclosures = new Array[MParameter]

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
		for p in mclosures do
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
		for p in mclosures do
			res += p.mtype.length
		end
		return res
	end

	# REQUIRE: 1 <= mparameters.count p -> p.is_vararg
	init(mparameters: Array[MParameter], return_mtype: nullable MType)
	do
		var vararg_rank = -1
		for i in [0..mparameters.length[ do
			var parameter = mparameters[i]
			if parameter.is_vararg then
				assert vararg_rank == -1
				vararg_rank = i
			end
		end
		self.mparameters = mparameters
		self.return_mtype = return_mtype
		self.vararg_rank = vararg_rank
	end

	# The rank of the ellipsis (...) for vararg (starting from 0).
	# value is -1 if there is no vararg.
	# Example: for "(a: Int, b: Bool..., c: Char)" #-> vararg_rank=1
	var vararg_rank: Int

	# The number or parameters
	fun arity: Int do return mparameters.length

	redef fun to_s
	do
		var b = new Buffer
		if not mparameters.is_empty then
			b.append("(")
			for i in [0..mparameters.length[ do
				var mparameter = mparameters[i]
				if i > 0 then b.append(", ")
				b.append(mparameter.name)
				b.append(": ")
				b.append(mparameter.mtype.to_s)
				if mparameter.is_vararg then
					b.append("...")
				end
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
		for p in self.mclosures do
			res.mclosures.add(p.resolve_for(mtype, anchor, mmodule, cleanup_virtual))
		end
		return res
	end
end

# A parameter in a signature
class MParameter
	# The name of the parameter
	var name: String

	# The static type of the parameter
	var mtype: MType

	# Is the parameter a vararg?
	var is_vararg: Bool

	fun resolve_for(mtype: MType, anchor: nullable MClassType, mmodule: MModule, cleanup_virtual: Bool): MParameter
	do
		if not self.mtype.need_anchor then return self
		var newtype = self.mtype.resolve_for(mtype, anchor, mmodule, cleanup_virtual)
		var res = new MParameter(self.name, newtype, self.is_vararg)
		return res
	end
end

# A service (global property) that generalize method, attribute, etc.
#
# MProperty are global to the model; it means that a MProperty is not bound
# to a specific `MModule` nor a specific `MClass`.
#
# A MProperty gather definitions (see `mpropdefs') ; one for the introduction
# and the other in subclasses and in refinements.
#
# A MProperty is used to denotes services in polymorphic way (ie. independent
# of any dynamic type).
# For instance, a call site "x.foo" is associated to a MProperty.
abstract class MProperty
	# The associated MPropDef subclass.
	# The two specialization hierarchy are symmetric.
	type MPROPDEF: MPropDef

	# The classdef that introduce the property
	# While a property is not bound to a specific module, or class,
	# the introducing mclassdef is used for naming and visibility
	var intro_mclassdef: MClassDef

	# The (short) name of the property
	var name: String

	# The canonical name of the property
	# Example: "owner::my_module::MyClass::my_method"
	fun full_name: String
	do
		return "{self.intro_mclassdef.mmodule.full_name}::{self.intro_mclassdef.mclass.name}::{name}"
	end

	# The visibility of the property
	var visibility: MVisibility

	init(intro_mclassdef: MClassDef, name: String, visibility: MVisibility)
	do
		self.intro_mclassdef = intro_mclassdef
		self.name = name
		self.visibility = visibility
		intro_mclassdef.intro_mproperties.add(self)
		var model = intro_mclassdef.mmodule.model
		model.mproperties_by_name.add_one(name, self)
		model.mproperties.add(self)
	end

	# All definitions of the property.
	# The first is the introduction,
	# The other are redefinitions (in refinements and in subclasses)
	var mpropdefs: Array[MPROPDEF] = new Array[MPROPDEF]

	# The definition that introduced the property
	# Warning: the introduction is the first `MPropDef' object
	# associated to self. If self is just created without having any
	# associated definition, this method will abort
	fun intro: MPROPDEF do return mpropdefs.first

	# Alias for `name'
	redef fun to_s do return name

	# Return the most specific property definitions defined or inherited by a type.
	# The selection knows that refinement is stronger than specialization;
	# however, in case of conflict more than one property are returned.
	# If mtype does not know mproperty then an empty array is returned.
	#
	# If you want the really most specific property, then look at `lookup_first_definition`
	fun lookup_definitions(mmodule: MModule, mtype: MType): Array[MPROPDEF]
	do
		assert not mtype.need_anchor
		if mtype isa MNullableType then mtype = mtype.mtype

		var cache = self.lookup_definitions_cache[mmodule, mtype]
		if cache != null then return cache

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
			self.lookup_definitions_cache[mmodule, mtype] = candidates
			return candidates
		end

		# Second, filter the most specific ones
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
					if cd2.mmodule.in_importation <= cd1.mmodule then
						# cd2 refines cd1; therefore we skip pd1
						keep = false
						break
					end
				else if cd2.bound_mtype.is_subtype(mmodule, null, cd1.bound_mtype) then
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
			print "All lost! {candidates.join(", ")}"
			# FIXME: should be abort!
		end
		self.lookup_definitions_cache[mmodule, mtype] = res
		return res
	end

	private var lookup_definitions_cache: HashMap2[MModule, MType, Array[MPROPDEF]] = new HashMap2[MModule, MType, Array[MPROPDEF]]

	# Return the most specific property definitions inherited by a type.
	# The selection knows that refinement is stronger than specialization;
	# however, in case of conflict more than one property are returned.
	# If mtype does not know mproperty then an empty array is returned.
	#
	# If you want the really most specific property, then look at `lookup_next_definition`
	#
	# FIXME: Move to MPropDef?
	fun lookup_super_definitions(mmodule: MModule, mtype: MType): Array[MPropDef]
	do
		assert not mtype.need_anchor
		if mtype isa MNullableType then mtype = mtype.mtype

		# First, select all candidates
		var candidates = new Array[MPropDef]
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
		var res = new Array[MPropDef]
		for pd1 in candidates do
			var cd1 = pd1.mclassdef
			var c1 = cd1.mclass
			var keep = true
			for pd2 in candidates do
				if pd2 == pd1 then continue # do not compare with self!
				var cd2 = pd2.mclassdef
				var c2 = cd2.mclass
				if c2.mclass_type == c1.mclass_type then
					if cd2.mmodule.in_importation <= cd1.mmodule then
						# cd2 refines cd1; therefore we skip pd1
						keep = false
						break
					end
				else if cd2.bound_mtype.is_subtype(mmodule, null, cd1.bound_mtype) then
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
			print "All lost! {candidates.join(", ")}"
			# FIXME: should be abort!
		end
		return res
	end

	# Return the most specific definition in the linearization of `mtype`.
	#
	# If you want to know the next properties in the linearization,
	# look at `MPropDef::lookup_next_definition`.
	#
	# FIXME: the linearisation is still unspecified
	#
	# REQUIRE: not mtype.need_anchor
	# REQUIRE: mtype.has_mproperty(mmodule, self)
	fun lookup_first_definition(mmodule: MModule, mtype: MType): MPROPDEF
	do
		return lookup_all_definitions(mmodule, mtype).first
	end

	# Return all definitions in a linearisation order
	# Most speficic first, most general last
	fun lookup_all_definitions(mmodule: MModule, mtype: MType): Array[MPROPDEF]
	do
		assert not mtype.need_anchor
		if mtype isa MNullableType then mtype = mtype.mtype

		var cache = self.lookup_all_definitions_cache[mmodule, mtype]
		if cache != null then return cache

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

	private var lookup_all_definitions_cache: HashMap2[MModule, MType, Array[MPROPDEF]] = new HashMap2[MModule, MType, Array[MPROPDEF]]
end

# A global method
class MMethod
	super MProperty

	redef type MPROPDEF: MMethodDef

	init(intro_mclassdef: MClassDef, name: String, visibility: MVisibility)
	do
		super
	end

	# Is the property a constructor?
	# Warning, this property can be inherited by subclasses with or without being a constructor
	# therefore, you should use `is_init_for' the verify if the property is a legal constructor for a given class
	var is_init: Bool writable = false

	# The the property a 'new' contructor?
	var is_new: Bool writable = false

	# Is the property a legal constructor for a given class?
	# As usual, visibility is not considered.
	# FIXME not implemented
	fun is_init_for(mclass: MClass): Bool
	do
		return self.is_init
	end
end

# A global attribute
class MAttribute
	super MProperty

	redef type MPROPDEF: MAttributeDef

	init(intro_mclassdef: MClassDef, name: String, visibility: MVisibility)
	do
		super
	end
end

# A global virtual type
class MVirtualTypeProp
	super MProperty

	redef type MPROPDEF: MVirtualTypeDef

	init(intro_mclassdef: MClassDef, name: String, visibility: MVisibility)
	do
		super
	end

	# The formal type associated to the virtual type property
	var mvirtualtype: MVirtualType = new MVirtualType(self)
end

# A definition of a property (local property)
#
# Unlike MProperty, a MPropDef is a local definition that belong to a
# specific class definition (which belong to a specific module)
abstract class MPropDef

	# The associated MProperty subclass.
	# the two specialization hierarchy are symmetric
	type MPROPERTY: MProperty

	# Self class
	type MPROPDEF: MPropDef

	# The origin of the definition
	var location: Location

	# The class definition where the property definition is
	var mclassdef: MClassDef

	# The associated global property
	var mproperty: MPROPERTY

	init(mclassdef: MClassDef, mproperty: MPROPERTY, location: Location)
	do
		self.mclassdef = mclassdef
		self.mproperty = mproperty
		self.location = location
		mclassdef.mpropdefs.add(self)
		mproperty.mpropdefs.add(self)
		self.to_s = "{mclassdef}#{mproperty}"
	end

	# Internal name combining the module, the class and the property
	# Example: "mymodule#MyClass#mymethod"
	redef var to_s: String

	# Is self the definition that introduce the property?
	fun is_intro: Bool do return mproperty.intro == self

	# Return the next definition in linearization of `mtype`.
	#
	# This method is used to determine what method is called by a super.
	#
	# REQUIRE: not mtype.need_anchor
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
end

# A local definition of a method
class MMethodDef
	super MPropDef

	redef type MPROPERTY: MMethod
	redef type MPROPDEF: MMethodDef

	init(mclassdef: MClassDef, mproperty: MPROPERTY, location: Location)
	do
		super
	end

	# The signature attached to the property definition
	var msignature: nullable MSignature writable = null

	# The the method definition abstract?
	var is_abstract: Bool writable = false
end

# A local definition of an attribute
class MAttributeDef
	super MPropDef

	redef type MPROPERTY: MAttribute
	redef type MPROPDEF: MAttributeDef

	init(mclassdef: MClassDef, mproperty: MPROPERTY, location: Location)
	do
		super
	end

	# The static type of the attribute
	var static_mtype: nullable MType writable = null
end

# A local definition of a virtual type
class MVirtualTypeDef
	super MPropDef

	redef type MPROPERTY: MVirtualTypeProp
	redef type MPROPDEF: MVirtualTypeDef

	init(mclassdef: MClassDef, mproperty: MPROPERTY, location: Location)
	do
		super
	end

	# The bound of the virtual type
	var bound: nullable MType writable = null
end

# A kind of class.
#
#  * abstract_kind
#  * concrete_kind
#  * interface_kind
#  * enum_kind
#  * extern_kind
#
# Note this class is basically an enum.
# FIXME: use a real enum once user-defined enums are available
class MClassKind
	redef var to_s: String

	# Is a constructor required?
	var need_init: Bool
	private init(s: String, need_init: Bool)
	do
		self.to_s = s
		self.need_init = need_init
	end
end

fun abstract_kind: MClassKind do return once new MClassKind("abstract class", true)
fun concrete_kind: MClassKind do return once new MClassKind("class", true)
fun interface_kind: MClassKind do return once new MClassKind("interface", false)
fun enum_kind: MClassKind do return once new MClassKind("enum", false)
fun extern_kind: MClassKind do return once new MClassKind("extern", false)
