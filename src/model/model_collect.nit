# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
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

# Collect things from a `Model`.
#
# **Warning**
#
# `model_collect` offers a flattened view of the model without considering any
# main module.
# For this reason, `model_collect` lists all the definitions reachable from all
# modules
#
# This is usefull for tools that need a global view of a model like `nitdoc`,
# `nitx` or `nituml`.
# It should not be used for compiling stuffs like computing VFT, where the listed
# entities could not be reachable depending on the modules really imported.
module model_collect

import model_views

redef class MEntity

	# FIXME used to bypass RTA limitation on type resolution.
	type MENTITY: SELF

	# Collect modifier keywords like `redef`, `private` etc.
	fun collect_modifiers: Array[String] do
		return new Array[String]
	end

	# Collect `self` linearization anchored on `mainmodule`.
	fun collect_linearization(mainmodule: MModule): nullable Array[MEntity] do
		return null
	end

	# Collect `self` ancestors (direct and indirect).
	#
	# The concept of ancestor is abstract at this stage.
	fun collect_ancestors(view: ModelView): Set[MENTITY] do
		var done = new HashSet[MENTITY]
		var todo = new Array[MENTITY]

		todo.add_all collect_parents(view)
		while todo.not_empty do
			var mentity = todo.pop
			if mentity == self or done.has(mentity) then continue
			print "{mentity} == {self}"
			done.add mentity
			todo.add_all mentity.collect_parents(view)
		end
		return done
	end

	# Collect `self` parents (direct ancestors).
	#
	# The concept of parent is abstract at this stage.
	fun collect_parents(view: ModelView): Set[MENTITY] is abstract

	# Collect `self` children (direct descendants).
	#
	# The concept of child is abstract at this stage.
	fun collect_children(view: ModelView): Set[MENTITY] is abstract

	# Collect `self` descendants (direct and direct).
	#
	# The concept of descendant is abstract at this stage.
	fun collect_descendants(view: ModelView): Set[MENTITY] do
		var done = new HashSet[MENTITY]
		var todo = new Array[MENTITY]

		todo.add_all collect_children(view)
		while todo.not_empty do
			var mentity = todo.pop
			if mentity == self or done.has(mentity) then continue
			done.add mentity
			todo.add_all mentity.collect_children(view)
		end
		return done
	end

	# Build a poset representing `self` in it's own hierarchy.
	#
	# The notion of hierarchy depends on the type of MEntity.
	#
	# Here a recap:
	# * MPackage: package dependencies
	# * MGroup: group dependencies
	# * MModule: modules imports
	# * MClass: class inheritance (all classdefs flattened)
	# * MClassDef: classdef inheritance
	# * MProperty: property definitions graph (all propdefs flattened)
	# * MPropDef: property definitions graph
	fun hierarchy_poset(view: ModelView): POSet[MENTITY] do
		var done = new HashSet[MENTITY]
		var mentities = new Array[MENTITY]
		mentities.add self
		var poset = new POSet[MENTITY]
		while mentities.not_empty do
			var mentity = mentities.pop
			if done.has(mentity) then continue
			done.add mentity
			poset.add_node mentity
			for parent in mentity.collect_parents(view) do
				poset.add_edge(mentity, parent)
				mentities.add parent
			end
			for child in mentity.collect_children(view) do
				poset.add_edge(child, mentity)
				mentities.add child
			end
		end
		return poset
	end
end

redef class MPackage
	redef fun collect_modifiers do
		var res = super
		res.add "package"
		return res
	end

	# `MPackage` parents are its direct dependencies.
	redef fun collect_parents(view) do
		var res = new HashSet[MENTITY]
		for mgroup in mgroups do
			for parent in mgroup.collect_parents(view) do
				var mpackage = parent.mpackage
				if mpackage == self or not view.accept_mentity(mpackage) then continue
				res.add(mpackage)
			end
		end
		return res
	end

	# `MPackage` children are packages that directly depends on `self`.
	redef fun collect_children(view) do
		var res = new HashSet[MENTITY]
		for mpackage in view.mpackages do
			if mpackage.collect_parents(view).has(self) then res.add mpackage
		end
		return res
	end
end

redef class MGroup
	redef fun collect_modifiers do
		var res = super
		res.add "group"
		return res
	end

	# `MGroup` parents are its direct dependencies.
	redef fun collect_parents(view) do
		var res = new HashSet[MENTITY]
		for mmodule in mmodules do
			for parent in mmodule.collect_parents(view) do
				var mgroup = parent.mgroup
				if mgroup == null or mgroup == self then continue
				if not view.accept_mentity(mgroup) then continue
				res.add(mgroup)
			end
		end
		return res
	end

	# `MGroup` children are mgroups that directly depends on `self`.
	redef fun collect_children(view) do
		var res = new HashSet[MENTITY]
		for mgroup in view.mgroups do
			if mgroup == self or not view.accept_mentity(mgroup) then continue
			if mgroup.collect_parents(view).has(self) then res.add mgroup
		end
		return res
	end
end

redef class MModule

	redef fun collect_modifiers do
		var res = super
		res.add "module"
		return res
	end

	# `MModule` ancestors are all its transitive imports.
	redef fun collect_ancestors(view) do
		var res = new HashSet[MENTITY]
		for mentity in in_importation.greaters do
			if mentity == self then continue
			if not view.accept_mentity(mentity) then continue
			res.add mentity
		end
		return res
	end

	# `MModule` parents are all its direct imports.
	redef fun collect_parents(view) do
		var res = new HashSet[MENTITY]
		for mentity in in_importation.direct_greaters do
			if mentity == self then continue
			if not view.accept_mentity(mentity) then continue
			res.add mentity
		end
		return res
	end

	# `MModule` children are modules that directly import `self`.
	redef fun collect_children(view) do
		var res = new HashSet[MENTITY]
		for mentity in in_importation.direct_smallers do
			if mentity == self then continue
			if not view.accept_mentity(mentity) then continue
			res.add mentity
		end
		return res
	end

	# `MModule` children are modules that transitively import `self`.
	redef fun collect_descendants(view) do
		var res = new HashSet[MENTITY]
		for mentity in in_importation.smallers do
			if mentity == self then continue
			if not view.accept_mentity(mentity) then continue
			res.add mentity
		end
		return res
	end

	# Collect mclassdefs introduced in `self` with `visibility >= to min_visibility`.
	fun collect_intro_mclassdefs(view: ModelView): Set[MClassDef] do
		var res = new HashSet[MClassDef]
		for mclassdef in mclassdefs do
			if not mclassdef.is_intro then continue
			if not view.accept_mentity(mclassdef) then continue
			res.add mclassdef
		end
		return res
	end

	# Collect mclassdefs redefined in `self` with `visibility >= to min_visibility`.
	fun collect_redef_mclassdefs(view: ModelView): Set[MClassDef] do
		var res = new HashSet[MClassDef]
		for mclassdef in mclassdefs do
			if mclassdef.is_intro then continue
			if not view.accept_mentity(mclassdef) then continue
			res.add mclassdef
		end
		return res
	end

	# Collect mclasses introduced in `self` with `visibility >= to min_visibility`.
	fun collect_intro_mclasses(view: ModelView): Set[MClass] do
		var res = new HashSet[MClass]
		for mclass in intro_mclasses do
			if not view.accept_mentity(mclass) then continue
			res.add mclass
		end
		return res
	end

	# Collect mclasses redefined in `self` with `visibility >= to min_visibility`.
	fun collect_redef_mclasses(view: ModelView): Set[MClass] do
		var mclasses = new HashSet[MClass]
		for mclassdef in mclassdefs do
			if not view.accept_mentity(mclassdef) then continue
			if not mclassdef.is_intro then mclasses.add(mclassdef.mclass)
		end
		return mclasses
	end
end

redef class MClass

	redef fun collect_modifiers do return intro.collect_modifiers

	redef fun collect_linearization(mainmodule) do
		var mclassdefs = self.mclassdefs.to_a
		mainmodule.linearize_mclassdefs(mclassdefs)
		return mclassdefs
	end

	# `MClass` parents are the direct parents of `self`.
	#
	# This method uses a flattened hierarchy containing all the mclassdefs.
	redef fun collect_parents(view) do
		var res = new HashSet[MENTITY]
		for mclassdef in mclassdefs do
			for parent in mclassdef.collect_parents(view) do
				var mclass = parent.mclass
				if mclass == self or not view.accept_mentity(parent) then continue
				res.add mclass
			end
		end
		return res
	end

	# Collect all ancestors of `self` with `visibility >= to min_visibility`.
	redef fun collect_ancestors(view) do
		var res = new HashSet[MENTITY]
		for mclassdef in mclassdefs do
			for parent in mclassdef.collect_parents(view) do
				if not view.accept_mentity(parent) then continue
				res.add parent.mclass
			end
		end
		return res
	end

	# `MClass` parents are the direct parents of `self`.
	#
	# This method uses a flattened hierarchy containing all the mclassdefs.
	redef fun collect_children(view) do
		var res = new HashSet[MENTITY]
		for mclassdef in mclassdefs do
			for child in mclassdef.collect_children(view) do
				var mclass = child.mclass
				if mclass == self or not view.accept_mentity(child) then continue
				res.add mclass
			end
		end
		return res
	end

	# Collect all mproperties introduced in 'self' with `visibility >= min_visibility`.
	fun collect_intro_mproperties(view: ModelView): Set[MProperty] do
		var set = new HashSet[MProperty]
		for mclassdef in mclassdefs do
			for mprop in mclassdef.intro_mproperties do
				if not view.accept_mentity(mprop) then continue
				set.add(mprop)
			end
		end
		return set
	end

	# Collect all mproperties redefined in 'self' with `visibility >= min_visibility`.
	fun collect_redef_mproperties(view: ModelView): Set[MProperty] do
		var set = new HashSet[MProperty]
		for mclassdef in mclassdefs do
			for mpropdef in mclassdef.mpropdefs do
				if mpropdef.mproperty.intro_mclassdef.mclass == self then continue
				if not view.accept_mentity(mpropdef) then continue
				set.add(mpropdef.mproperty)
			end
		end
		return set
	end

	# Collect mproperties introduced and redefined in 'self' with `visibility >= min_visibility`.
	fun collect_local_mproperties(view: ModelView): Set[MProperty] do
		var set = new HashSet[MProperty]
		set.add_all collect_intro_mproperties(view)
		set.add_all collect_redef_mproperties(view)
		return set
	end

	# Collect all mproperties inehrited by 'self' with `visibility >= min_visibility`.
	fun collect_inherited_mproperties(view: ModelView): Set[MProperty] do
		var set = new HashSet[MProperty]
		for parent in collect_parents(view) do
			set.add_all(parent.collect_intro_mproperties(view))
			set.add_all(parent.collect_inherited_mproperties(view))
		end
		return set
	end

	# Collect all mproperties accessible by 'self' with `visibility >= min_visibility`.
	#
	# This include introduced, redefined, inherited mproperties.
	fun collect_accessible_mproperties(view: ModelView): Set[MProperty] do
		var set = new HashSet[MProperty]
		set.add_all(collect_intro_mproperties(view))
		set.add_all(collect_redef_mproperties(view))
		set.add_all(collect_inherited_mproperties(view))
		return set
	end

	# Collect mmethods introduced in 'self' with `visibility >= min_visibility`.
	fun collect_intro_mmethods(view: ModelView): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_intro_mproperties(view) do
			if mproperty isa MMethod then res.add(mproperty)
		end
		return res
	end

	# Collect mmethods redefined in 'self' with `visibility >= min_visibility`.
	fun collect_redef_mmethods(view: ModelView): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_redef_mproperties(view) do
			if mproperty isa MMethod then res.add(mproperty)
		end
		return res
	end

	# Collect mmethods introduced and redefined in 'self' with `visibility >= min_visibility`.
	fun collect_local_mmethods(view: ModelView): Set[MMethod] do
		var set = new HashSet[MMethod]
		set.add_all collect_intro_mmethods(view)
		set.add_all collect_redef_mmethods(view)
		return set
	end

	# Collect mmethods inherited by 'self' if accepted by `view`.
	fun collect_inherited_mmethods(view: ModelView): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_inherited_mproperties(view) do
			if mproperty isa MMethod then res.add(mproperty)
		end
		return res
	end

	# Collect mattributes introduced in 'self' with `visibility >= min_visibility`.
	fun collect_intro_mattributes(view: ModelView): Set[MAttribute] do
		var res = new HashSet[MAttribute]
		for mproperty in collect_intro_mproperties(view) do
			if mproperty isa MAttribute then res.add(mproperty)
		end
		return res
	end

	# Collect mattributes redefined in 'self' with `visibility >= min_visibility`.
	fun collect_redef_mattributes(view: ModelView): Set[MAttribute] do
		var res = new HashSet[MAttribute]
		for mproperty in collect_redef_mproperties(view) do
			if mproperty isa MAttribute then res.add(mproperty)
		end
		return res
	end

	# Collect mattributes introduced and redefined in 'self' with `visibility >= min_visibility`.
	fun collect_local_mattributes(view: ModelView): Set[MAttribute] do
		var set = new HashSet[MAttribute]
		set.add_all collect_intro_mattributes(view)
		set.add_all collect_redef_mattributes(view)
		return set
	end

	# Collect mattributes inherited by 'self' with `visibility >= min_visibility`.
	fun collect_inherited_mattributes(view: ModelView): Set[MAttribute] do
		var res = new HashSet[MAttribute]
		for mproperty in collect_inherited_mproperties(view) do
			if mproperty isa MAttribute then res.add(mproperty)
		end
		return res
	end

	# Collect all mattributes accessible by 'self' with `visibility >= min_visibility`.
	#
	# This include introduced, redefined, inherited mattributes.
	fun collect_accessible_mattributes(view: ModelView): Set[MAttribute] do
		var set = new HashSet[MAttribute]
		set.add_all(collect_intro_mattributes(view))
		set.add_all(collect_redef_mattributes(view))
		set.add_all(collect_inherited_mattributes(view))
		return set
	end

	# Collect init mmethods introduced in 'self' if accepted by `view`.
	fun collect_intro_inits(view: ModelView): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_intro_mmethods(view) do
			if mproperty.is_init then res.add(mproperty)
		end
		return res
	end

	# Collect init mmethods redefined in 'self' if accepted by `view`.
	fun collect_redef_inits(view: ModelView): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_redef_mmethods(view) do
			if mproperty.is_init then res.add(mproperty)
		end
		return res
	end

	# Collect init mmethods introduced and redefined in 'self' if accepted by `view`.
	fun collect_local_inits(view: ModelView): Set[MMethod] do
		var set = new HashSet[MMethod]
		set.add_all collect_intro_inits(view)
		set.add_all collect_redef_inits(view)
		return set
	end

	# Collect init mmethods inherited by 'self'  if accepted by `view`.
	fun collect_inherited_inits(view: ModelView): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_inherited_mmethods(view) do
			if mproperty.is_init then res.add(mproperty)
		end
		return res
	end

	# Collect all init mmethods accessible by 'self'  if accepted by `view`.
	#
	# This include introduced, redefined, inherited inits.
	fun collect_accessible_inits(view: ModelView): Set[MMethod] do
		var set = new HashSet[MMethod]
		set.add_all(collect_intro_inits(view))
		set.add_all(collect_redef_inits(view))
		set.add_all(collect_inherited_inits(view))
		return set
	end
end

redef class MClassDef

	redef fun collect_linearization(mainmodule) do
		var mclassdefs = new Array[MClassDef]
		for mclassdef in in_hierarchy.as(not null).greaters do
			if mclassdef.mclass == self.mclass then mclassdefs.add mclassdef
		end
		mainmodule.linearize_mclassdefs(mclassdefs)
		return mclassdefs
	end

	# `MClassDef` ancestors are its direct and transitive super classes.
	redef fun collect_ancestors(view) do
		var res = new HashSet[MENTITY]
		var hierarchy = self.in_hierarchy
		if hierarchy == null then return res
		for parent in hierarchy.greaters do
			if parent == self or not view.accept_mentity(parent) then continue
			res.add parent
		end
		return res
	end

	# `MClassDef` parents are its direct super classes.
	redef fun collect_parents(view) do
		var res = new HashSet[MENTITY]
		var hierarchy = self.in_hierarchy
		if hierarchy == null then return res
		for parent in hierarchy.direct_greaters do
			if parent == self or not view.accept_mentity(parent) then continue
			res.add parent
		end
		return res
	end

	# `MClassDef` children are its direct subclasses.
	redef fun collect_children(view) do
		var res = new HashSet[MENTITY]
		var hierarchy = self.in_hierarchy
		if hierarchy == null then return res
		for child in hierarchy.direct_smallers do
			if child == self or not view.accept_mentity(child) then continue
			res.add child
		end
		return res
	end

	# Collect mpropdefs in 'self' with `visibility >= min_visibility`.
	fun collect_mpropdefs(view: ModelView): Set[MPropDef] do
		var res = new HashSet[MPropDef]
		for mpropdef in mpropdefs do
			if not view.accept_mentity(mpropdef) then continue
			res.add mpropdef
		end
		return res
	end

	# Collect mpropdefs introduced in 'self' with `visibility >= min_visibility`.
	fun collect_intro_mpropdefs(view: ModelView): Set[MPropDef] do
		var res = new HashSet[MPropDef]
		for mpropdef in mpropdefs do
			if not mpropdef.is_intro then continue
			if not view.accept_mentity(mpropdef) then continue
			res.add mpropdef
		end
		return res
	end

	# Collect mpropdefs redefined in 'self' with `visibility >= min_visibility`.
	fun collect_redef_mpropdefs(view: ModelView): Set[MPropDef] do
		var res = new HashSet[MPropDef]
		for mpropdef in mpropdefs do
			if mpropdef.is_intro then continue
			if not view.accept_mentity(mpropdef) then continue
			res.add mpropdef
		end
		return res
	end

	redef fun collect_modifiers do
		var res = super
		if not is_intro then
			res.add "redef"
		else
			res.add mclass.visibility.to_s
		end
		res.add mclass.kind.to_s
		return res
	end
end

redef class MProperty
	redef fun collect_modifiers do return intro.collect_modifiers

	redef fun collect_linearization(mainmodule) do
		var mpropdefs = self.mpropdefs.to_a
		mainmodule.linearize_mpropdefs(mpropdefs)
		return mpropdefs
	end

	# Collect mpropdefs in 'self' with `visibility >= min_visibility`.
	fun collect_mpropdefs(view: ModelView): Set[MPropDef] do
		var res = new HashSet[MPropDef]
		for mpropdef in mpropdefs do
			if not view.accept_mentity(mpropdef) then continue
			res.add mpropdef
		end
		return res
	end

	# `MProperty` parents are all direct super definition of `self`.
	#
	# This method uses a flattened hierarchy containing all the mpropdefs.
	redef fun collect_parents(view) do
		var res = new HashSet[MENTITY]
		for mpropdef in mpropdefs do
			for parent in mpropdef.collect_parents(view) do
				if not view.accept_mentity(parent) then continue
				res.add parent.mproperty
			end
		end
		return res
	end

	# `MProperty` parents are all direct sub definition of `self`.
	#
	# This method uses a flattened hierarchy containing all the mpropdefs.
	redef fun collect_children(view) do
		var res = new HashSet[MENTITY]
		for mpropdef in mpropdefs do
			for child in mpropdef.collect_parents(view) do
				if not view.accept_mentity(child) then continue
				res.add child.mproperty
			end
		end
		return res
	end
end

redef class MPropDef
	redef fun collect_modifiers do
		var res = super
		if not is_intro then
			res.add "redef"
		else
			res.add mproperty.visibility.to_s
		end
		var mprop = self
		if mprop isa MVirtualTypeDef then
			res.add "type"
		else if mprop isa MMethodDef then
			if mprop.is_abstract then
				res.add "abstract"
			else if mprop.is_intern then
				res.add "intern"
			end
			if mprop.mproperty.is_init then
				res.add "init"
			else
				res.add "fun"
			end
		else if mprop isa MAttributeDef then
			res.add "var"
		end
		return res
	end

	redef fun collect_linearization(mainmodule) do
		var mpropdefs = new Array[MPropDef]
		var mentity = self
		while not mentity.is_intro do
			mpropdefs.add mentity
			mentity = mentity.lookup_next_definition(mainmodule, mentity.mclassdef.bound_mtype)
		end
		mpropdefs.add mentity
		mainmodule.linearize_mpropdefs(mpropdefs)
		return mpropdefs
	end

	# `MPropDef` parents include only the next definition of `self`.
	redef fun collect_parents(view) do
		var res = new HashSet[MENTITY]
		var mpropdef = self
		while not mpropdef.is_intro do
			mpropdef = mpropdef.lookup_next_definition(mclassdef.mmodule, mclassdef.bound_mtype)
			res.add mpropdef
		end
		return res
	end

	# `MPropdef` children are definitions that directly depends on `self`.
	redef fun collect_children(view) do
		var res = new HashSet[MENTITY]
		for mpropdef in mproperty.collect_mpropdefs(view) do
			if mpropdef.collect_parents(view).has(self) then res.add mpropdef
		end
		return res
	end
end
