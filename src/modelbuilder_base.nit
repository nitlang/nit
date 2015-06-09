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

# Load nit source files and build the associated model
#
# FIXME better doc
#
# FIXME split this module into submodules
# FIXME add missing error checks
module modelbuilder_base

import model
import toolcontext
import parser

private import more_collections

###

redef class ToolContext

	# The modelbuilder 1-to-1 associated with the toolcontext
	fun modelbuilder: ModelBuilder do return modelbuilder_real.as(not null)

	private var modelbuilder_real: nullable ModelBuilder = null

end

# A model builder knows how to load nit source files and build the associated model
class ModelBuilder
	# The model where new modules, classes and properties are added
	var model: Model

	# The toolcontext used to control the interaction with the user (getting options and displaying messages)
	var toolcontext: ToolContext

	# Instantiate a modelbuilder for a model and a toolcontext
	# Important, the options of the toolcontext must be correctly set (parse_option already called)
	init
	do
		assert toolcontext.modelbuilder_real == null
		toolcontext.modelbuilder_real = self
	end

	# Return a class named `name` visible by the module `mmodule`.
	# Visibility in modules is correctly handled.
	# If no such a class exists, then null is returned.
	# If more than one class exists, then an error on `anode` is displayed and null is returned.
	# FIXME: add a way to handle class name conflict
	fun try_get_mclass_by_name(anode: ANode, mmodule: MModule, name: String): nullable MClass
	do
		var classes = model.get_mclasses_by_name(name)
		if classes == null then
			return null
		end

		var res: nullable MClass = null
		for mclass in classes do
			if not mmodule.in_importation <= mclass.intro_mmodule then continue
			if not mmodule.is_visible(mclass.intro_mmodule, mclass.visibility) then continue
			if res == null then
				res = mclass
			else
				error(anode, "Error: ambiguous class name `{name}`; conflict between `{mclass.full_name}` and `{res.full_name}`.")
				return null
			end
		end
		return res
	end

	# Like `try_get_mclass_by_name` but display an error message when the class is not found
	fun get_mclass_by_name(node: ANode, mmodule: MModule, name: String): nullable MClass
	do
		var mclass = try_get_mclass_by_name(node, mmodule, name)
		if mclass == null then
			error(node, "Type Error: missing primitive class `{name}'.")
		end
		return mclass
	end

	# Return a property named `name` on the type `mtype` visible in the module `mmodule`.
	# Visibility in modules is correctly handled.
	# Protected properties are returned (it is up to the caller to check and reject protected properties).
	# If no such a property exists, then null is returned.
	# If more than one property exists, then an error on `anode` is displayed and null is returned.
	# FIXME: add a way to handle property name conflict
	fun try_get_mproperty_by_name2(anode: ANode, mmodule: MModule, mtype: MType, name: String): nullable MProperty
	do
		var props = self.model.get_mproperties_by_name(name)
		if props == null then
			return null
		end

		var cache = self.try_get_mproperty_by_name2_cache[mmodule, mtype, name]
		if cache != null then return cache

		var res: nullable MProperty = null
		var ress: nullable Array[MProperty] = null
		for mprop in props do
			if not mtype.has_mproperty(mmodule, mprop) then continue
			if not mmodule.is_visible(mprop.intro_mclassdef.mmodule, mprop.visibility) then continue

			# new-factories are invisible outside of the class
			if mprop isa MMethod and mprop.is_new and (not mtype isa MClassType or mprop.intro_mclassdef.mclass != mtype.mclass) then
				continue
			end

			if res == null then
				res = mprop
				continue
			end

			# Two global properties?
			# First, special case for init, keep the most specific ones
			if res isa MMethod and mprop isa MMethod and res.is_init and mprop.is_init then
				var restype = res.intro_mclassdef.bound_mtype
				var mproptype = mprop.intro_mclassdef.bound_mtype
				if mproptype.is_subtype(mmodule, null, restype) then
					# found a most specific constructor, so keep it
					res = mprop
					continue
				end
			end

			# Ok, just keep all prop in the ress table
			if ress == null then
				ress = new Array[MProperty]
				ress.add(res)
			end
			ress.add(mprop)
		end

		# There is conflict?
		if ress != null and res isa MMethod and res.is_init then
			# special case forinit again
			var restype = res.intro_mclassdef.bound_mtype
			var ress2 = new Array[MProperty]
			for mprop in ress do
				var mproptype = mprop.intro_mclassdef.bound_mtype
				if not restype.is_subtype(mmodule, null, mproptype) then
					ress2.add(mprop)
				else if not mprop isa MMethod or not mprop.is_init then
					ress2.add(mprop)
				end
			end
			if ress2.is_empty then
				ress = null
			else
				ress = ress2
				ress.add(res)
			end
		end

		if ress != null then
			assert ress.length > 1
			var s = new Array[String]
			for mprop in ress do s.add mprop.full_name
			self.error(anode, "Error: ambiguous property name `{name}` for `{mtype}`; conflict between {s.join(" and ")}.")
		end

		self.try_get_mproperty_by_name2_cache[mmodule, mtype, name] = res
		return res
	end

	private var try_get_mproperty_by_name2_cache = new HashMap3[MModule, MType, String, nullable MProperty]


	# Alias for try_get_mproperty_by_name2(anode, mclassdef.mmodule, mclassdef.mtype, name)
	fun try_get_mproperty_by_name(anode: ANode, mclassdef: MClassDef, name: String): nullable MProperty
	do
		return try_get_mproperty_by_name2(anode, mclassdef.mmodule, mclassdef.bound_mtype, name)
	end

	# Helper function to display an error on a node.
	# Alias for `self.toolcontext.error(n.hot_location, text)`
	fun error(n: nullable ANode, text: String)
	do
		var l = null
		if n != null then l = n.hot_location
		self.toolcontext.error(l, text)
	end

	# Helper function to display a warning on a node.
	# Alias for: `self.toolcontext.warning(n.hot_location, text)`
	fun warning(n: nullable ANode, tag, text: String)
	do
		var l = null
		if n != null then l = n.hot_location
		self.toolcontext.warning(l, tag, text)
	end

	# Helper function to display an advice on a node.
	# Alias for: `self.toolcontext.advice(n.hot_location, text)`
	fun advice(n: nullable ANode, tag, text: String)
	do
		var l = null
		if n != null then l = n.hot_location
		self.toolcontext.advice(l, tag, text)
	end

	# Force to get the primitive method named `name` on the type `recv` or do a fatal error on `n`
	fun force_get_primitive_method(n: nullable ANode, name: String, recv: MClass, mmodule: MModule): MMethod
	do
		var res = mmodule.try_get_primitive_method(name, recv)
		if res == null then
			var l = null
			if n != null then l = n.hot_location
			self.toolcontext.fatal_error(l, "Fatal Error: `{recv}` must have a property named `{name}`.")
			abort
		end
		return res
	end

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
					error(ntype, "Type Error: formal type `{name}` cannot have formal parameters.")
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
					error(ntype, "Type Error: formal type `{name}` cannot have formal parameters.")
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
			if arity > mclass.arity then
				if arity == 0 then
					error(ntype, "Type Error: `{mclass.signature_to_s}` is a generic class.")
				else if mclass.arity == 0 then
					error(ntype, "Type Error: `{name}` is not a generic class.")
				else
					error(ntype, "Type Error: expected {mclass.arity} formal argument(s) for `{mclass.signature_to_s}`; got {arity}.")
				end
				return null
			end
			if mclass.arity == 0 then
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
				# Add missing formal argument (use the bound instead)
				var intro = mclass.try_intro
				if intro == null then return null # skip error
				for i in [mtypes.length..mclass.arity[ do
					var bound = intro.bound_mtype.arguments[i]
					mtypes.add(bound)
				end

				res = mclass.get_mtype(mtypes)
				if ntype.n_kwnullable != null then res = res.as_nullable
				ntype.mtype = res
				return res
			end
		end

		# If everything fail, then give up :(
		error(ntype, "Error: class `{name}` not found in module `{mmodule}`.")
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
			var ntypes = ntype.n_types
			for i in [0..ntypes.length[ do
				var intro = mclass.try_intro
				if intro == null then return null # skip error
				var bound = intro.bound_mtype.arguments[i]
				var nt = ntypes[i]
				var mt = resolve_mtype(mmodule, mclassdef, nt)
				if mt == null then return null # forward error
				var anchor
				if mclassdef != null then anchor = mclassdef.bound_mtype else anchor = null
				if not check_subtype(nt, mmodule, anchor, mt, bound) then
					error(nt, "Type Error: expected `{bound}`, got `{mt}`.")
					return null
				end
			end
		end
		ntype.checked_mtype = true
		return mtype
	end

	# Check that `sub` is a subtype of `sup`.
	# Do not display an error message.
	#
	# This method is used a an entry point for the modelize phase to test static subtypes.
	# Some refinements could redefine it to collect statictics.
	fun check_subtype(node: ANode, mmodule: MModule, anchor: nullable MClassType, sub, sup: MType): Bool
	do
		return sub.is_subtype(mmodule, anchor, sup)
	end

	# Check that `sub` and `sup` are equvalent types.
	# Do not display an error message.
	#
	# This method is used a an entry point for the modelize phase to test static equivalent types.
	# Some refinements could redefine it to collect statictics.
	fun check_sametype(node: ANode, mmodule: MModule, anchor: nullable MClassType, sub, sup: MType): Bool
	do
		return sub.is_subtype(mmodule, anchor, sup) and sup.is_subtype(mmodule, anchor, sub)
	end
end

redef class AType
	# The mtype associated to the node
	var mtype: nullable MType = null

	# Is the mtype a valid one?
	var checked_mtype: Bool = false
end

redef class AVisibility
	# The visibility level associated with the AST node class
	fun mvisibility: MVisibility is abstract
end
redef class AIntrudeVisibility
	redef fun mvisibility do return intrude_visibility
end
redef class APublicVisibility
	redef fun mvisibility do return public_visibility
end
redef class AProtectedVisibility
	redef fun mvisibility do return protected_visibility
end
redef class APrivateVisibility
	redef fun mvisibility do return private_visibility
end

redef class ADoc
	private var mdoc_cache: nullable MDoc

	# Convert `self` to a `MDoc`
	fun to_mdoc: MDoc
	do
		var res = mdoc_cache
		if res != null then return res
		res = new MDoc(location)
		for c in n_comment do
			var text = c.text
			if text.length < 2 then
				res.content.add ""
				continue
			end
			assert text.chars[0] == '#'
			if text.chars[1] == ' ' then
				text = text.substring_from(2) # eat starting `#` and space
			else
				text = text.substring_from(1) # eat atarting `#` only
			end
			if text.chars.last == '\n' then text = text.substring(0, text.length-1) # drop \n
			res.content.add(text)
		end
		mdoc_cache = res
		return res
	end
end
