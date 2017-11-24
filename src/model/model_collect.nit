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

# Collect things from a `ModelView`
#
# This module introduce several usefull methods to list and count things from a
# ModelView.
#
# First setup you view from a Model:
#
# ~~~nitih
# var view = new ModelView(model, mainmodule)
# ~~~
#
# Then ask question using the view:
#
# ~~~nitish
# print number of parents for `{my_class}`
# print my_class.collect_parents(view).count
# ~~~
#
# **Warning**
#
# `model_collect` offers a flattened view of the model without considering any
# main module.
# For this reason, `model_collect` lists all the definitions reachable from all
# modules.
#
# This is usefull for tools that need a global view of a model like `nitdoc`,
# `nitx`, `nitmetrics` or `nituml`.
# It should not be used for compiling stuffs like computing VFT, where the listed
# entities could not be reachable depending on the modules really imported.
module model_collect

import model_views

redef class MEntity

	# FIXME used to bypass RTA limitation on type resolution
	type MENTITY: SELF

	# Collect modifier keywords like `redef`, `private` etc
	fun collect_modifiers: Array[String] do return new Array[String]

	# Collect `self` linearization anchored on `mainmodule`
	fun collect_linearization(mainmodule: MModule): nullable Array[MEntity] do
		return null
	end

	# Collect `self` ancestors (direct and indirect)
	#
	# The concept of ancestor is abstract at this stage.
	fun collect_ancestors(view: ModelView): Set[MENTITY] do
		var done = new HashSet[MENTITY]
		var todo = new Array[MENTITY]

		todo.add_all collect_parents(view)
		while todo.not_empty do
			var mentity = todo.pop
			if mentity == self or done.has(mentity) then continue
			done.add mentity
			todo.add_all mentity.collect_parents(view)
		end
		return done
	end

	# Collect `self` parents (direct ancestors)
	#
	# The concept of parent is abstract at this stage.
	fun collect_parents(view: ModelView): Set[MENTITY] is abstract

	# Collect `self` children (direct descendants)
	#
	# The concept of child is abstract at this stage.
	fun collect_children(view: ModelView): Set[MENTITY] is abstract

	# Collect `self` descendants (direct and direct)
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

	# Build a poset representing `self` in it's own hierarchy
	#
	# The notion of hierarchy depends on the type of MEntity.
	#
	# Here a recap:
	# * `MPackage`: package dependencies
	# * `MGroup`: group dependencies
	# * `MModule`: modules imports
	# * `MClass`: class inheritance (all classdefs flattened)
	# * `MClassDef`: classdef inheritance
	# * `MProperty`: property definitions graph (all propdefs flattened)
	# * `MPropDef`: property definitions graph
	fun hierarchy_poset(view: ModelView): POSet[MENTITY] do
		var poset = new POSet[MENTITY]
		var parents_done = new HashSet[MENTITY]
		var parents = new Array[MENTITY]
		parents.add self
		while parents.not_empty do
			var mentity = parents.pop
			if parents_done.has(mentity) then continue
			parents_done.add mentity
			poset.add_node mentity
			for parent in mentity.collect_parents(view) do
				poset.add_edge(mentity, parent)
				parents.add parent
			end
		end
		var children_done = new HashSet[MEntity]
		var children = new Array[MEntity]
		children.add self
		while children.not_empty do
			var mentity = children.pop
			if children_done.has(mentity) then continue
			children_done.add mentity
			for child in mentity.collect_children(view) do
				poset.add_edge(child, mentity)
				children.add child
			end
		end
		return poset
	end
end

redef class Model

	# Collect all MPackages in `self`
	fun collect_mpackages(view: ModelView): HashSet[MPackage] do
		var res = new HashSet[MPackage]
		for mpackage in mpackages do
			if not view.accept_mentity(mpackage) then continue
			res.add(mpackage)
		end
		return res
	end

	# Collect all MModules in `self`
	fun collect_mmodules(view: ModelView): HashSet[MModule] do
		var res = new HashSet[MModule]
		for mpackage in collect_mpackages(view) do
			res.add_all mpackage.collect_all_mmodules(view)
		end
		return res
	end

	# Collect all MClasses introduced in `self`
	fun collect_intro_mclasses(view: ModelView): HashSet[MClass] do
		var res = new HashSet[MClass]
		for mpackage in collect_mpackages(view) do
			res.add_all mpackage.collect_intro_mclasses(view)
		end
		return res
	end

	# Collect all MProperties introduced in `self`
	fun collect_intro_mproperties(view: ModelView): HashSet[MProperty] do
		var res = new HashSet[MProperty]
		for mpackage in collect_mpackages(view) do
			res.add_all mpackage.collect_intro_mproperties(view)
		end
		return res
	end
end

redef class MPackage

	redef fun collect_modifiers do return super + ["package"]

	# Collect all packages directly imported by `self`
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

	# Collect all packages that directly depends on `self`
	redef fun collect_children(view) do
		var res = new HashSet[MENTITY]
		for mpackage in view.mpackages do
			if mpackage.collect_parents(view).has(self) then res.add mpackage
		end
		return res
	end

	# Collect all groups contained in `self`
	fun collect_all_mgroups(view: ModelView): HashSet[MGroup] do
		var res = new HashSet[MGroup]
		for mgroup in mgroups do
			if not view.accept_mentity(mgroup) then continue
			res.add(mgroup)
		end
		return res
	end

	# Collect only groups contained in `self.root`
	fun collect_mgroups(view: ModelView): HashSet[MGroup] do
		var res = new HashSet[MGroup]
		var root = self.root
		if root == null then return res
		res.add_all root.collect_mgroups(view)
		return res
	end

	# Collect all modules contained in `self`
	fun collect_all_mmodules(view: ModelView): HashSet[MModule] do
		var res = new HashSet[MModule]
		for mgroup in collect_mgroups(view) do
			res.add_all mgroup.collect_mmodules(view)
		end
		return res
	end

	# Collect only modules contained in `self.root`
	fun collect_mmodules(view: ModelView): HashSet[MModule] do
		var res = new HashSet[MModule]
		var root = self.root
		if root == null then return res
		res.add_all root.collect_mmodules(view)
		return res
	end

	# Collect all classes introduced in `self`
	fun collect_intro_mclasses(view: ModelView): HashSet[MClass] do
		var res = new HashSet[MClass]
		for mgroup in mgroups do
			for mmodule in collect_all_mmodules(view) do
				res.add_all mmodule.collect_intro_mclasses(view)
			end
		end
		return res
	end

	# Collect all classes redefined or refined in `self`
	fun collect_redef_mclasses(view: ModelView): Set[MClass] do
		var res = new HashSet[MClass]
		for mgroup in mgroups do
			for mmodule in collect_all_mmodules(view) do
				res.add_all mmodule.collect_redef_mclasses(view)
			end
		end
		return res
	end

	# Collect all properties introduced in `self`
	fun collect_intro_mproperties(view: ModelView): HashSet[MProperty] do
		var res = new HashSet[MProperty]
		for mgroup in mgroups do
			for mmodule in collect_all_mmodules(view) do
				res.add_all mmodule.collect_intro_mproperties(view)
			end
		end
		return res
	end

	# Collect all properties redefined in `self`
	fun collect_redef_mproperties(view: ModelView): HashSet[MProperty] do
		var res = new HashSet[MProperty]
		for mgroup in mgroups do
			for mmodule in collect_all_mmodules(view) do
				res.add_all mmodule.collect_redef_mproperties(view)
			end
		end
		return res
	end

	# Collect all attributes introduced in `self`
	fun collect_intro_attributes(view: ModelView): Set[MAttribute] do
		var res = new HashSet[MAttribute]
		for mgroup in mgroups do
			for mmodule in collect_all_mmodules(view) do
				res.add_all mmodule.collect_intro_attributes(view)
			end
		end
		return res
	end

	# Collect all inits introduced in `self`
	fun collect_intro_inits(view: ModelView): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mgroup in mgroups do
			for mmodule in collect_all_mmodules(view) do
				res.add_all mmodule.collect_intro_inits(view)
			end
		end
		return res
	end

	# Collect all methods introduced in `self` excluding inits
	#
	# See `collect_intro_inits`.
	fun collect_intro_methods(view: ModelView): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mgroup in mgroups do
			for mmodule in collect_all_mmodules(view) do
				res.add_all mmodule.collect_intro_methods(view)
			end
		end
		return res
	end

	# Collect all virtual types introduced in `self`
	fun collect_intro_vts(view: ModelView): Set[MVirtualTypeProp] do
		var res = new HashSet[MVirtualTypeProp]
		for mgroup in mgroups do
			for mmodule in collect_all_mmodules(view) do
				res.add_all mmodule.collect_intro_vts(view)
			end
		end
		return res
	end
end

redef class MGroup

	redef fun collect_modifiers do return super + ["group"]

	# Collect all groups directly import by `self`
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

	# Collect all group that directly import `self`
	redef fun collect_children(view) do
		var res = new HashSet[MENTITY]
		for mgroup in view.mgroups do
			if mgroup == self or not view.accept_mentity(mgroup) then continue
			if mgroup.collect_parents(view).has(self) then res.add mgroup
		end
		return res
	end

	# Collect all groups contained in `self`
	fun collect_mgroups(view: ModelView): HashSet[MENTITY] do
		var res = new HashSet[MENTITY]
		for mgroup in in_nesting.direct_smallers do
			if not view.accept_mentity(mgroup) then continue
			res.add(mgroup)
		end
		return res
	end

	# Collect all modules contained in `self`
	fun collect_mmodules(view: ModelView): HashSet[MModule] do
		var res = new HashSet[MModule]
		for mmodule in mmodules do
			if not view.accept_mentity(mmodule) then continue
			res.add(mmodule)
		end
		return res
	end
end

redef class MModule

	redef fun collect_modifiers do return super + ["module"]

	# Collect all modules directly imported by `self`
	redef fun collect_parents(view) do
		var res = new HashSet[MENTITY]
		for mentity in in_importation.direct_greaters do
			if mentity == self then continue
			if not view.accept_mentity(mentity) then continue
			res.add mentity
		end
		return res
	end

	# Collect all modules that directly import `self`
	redef fun collect_children(view) do
		var res = new HashSet[MENTITY]
		for mentity in in_importation.direct_smallers do
			if mentity == self then continue
			if not view.accept_mentity(mentity) then continue
			res.add mentity
		end
		return res
	end

	# Collect all module descendants of `self` (direct and transitive imports)
	redef fun collect_descendants(view) do
		var res = new HashSet[MENTITY]
		for mentity in in_importation.smallers do
			if mentity == self then continue
			if not view.accept_mentity(mentity) then continue
			res.add mentity
		end
		return res
	end

	# Collect all class definitions introduced in `self`
	fun collect_intro_mclassdefs(view: ModelView): Set[MClassDef] do
		var res = new HashSet[MClassDef]
		for mclassdef in mclassdefs do
			if not mclassdef.is_intro then continue
			if not view.accept_mentity(mclassdef) then continue
			res.add mclassdef
		end
		return res
	end

	# Collect all class definitions refined in `self`
	fun collect_redef_mclassdefs(view: ModelView): Set[MClassDef] do
		var res = new HashSet[MClassDef]
		for mclassdef in mclassdefs do
			if mclassdef.is_intro then continue
			if not view.accept_mentity(mclassdef) then continue
			res.add mclassdef
		end
		return res
	end

	# Collect all class definitions introduced and refined in `self`
	fun collect_local_mclassdefs(view: ModelView): Set[MClassDef] do
		var res = new HashSet[MClassDef]
		res.add_all collect_intro_mclassdefs(view)
		res.add_all collect_redef_mclassdefs(view)
		return res
	end

	# Collect all classes introduced in `self`
	fun collect_intro_mclasses(view: ModelView): Set[MClass] do
		var res = new HashSet[MClass]
		for mclass in intro_mclasses do
			if not view.accept_mentity(mclass) then continue
			res.add mclass
		end
		return res
	end

	# Collect all classes refined in `self`
	fun collect_redef_mclasses(view: ModelView): Set[MClass] do
		var mclasses = new HashSet[MClass]
		for mclassdef in mclassdefs do
			if not view.accept_mentity(mclassdef.mclass) then continue
			if not mclassdef.is_intro then mclasses.add(mclassdef.mclass)
		end
		return mclasses
	end

	# Collect all classes introduced and refined in `self`
	fun collect_local_mclasses(view: ModelView): Set[MClass] do
		var res = new HashSet[MClass]
		res.add_all collect_intro_mclasses(view)
		res.add_all collect_redef_mclasses(view)
		return res
	end

	# Collect all classes imported from `self` parents
	fun collect_imported_mclasses(view: ModelView): Set[MClass] do
		var res = new HashSet[MClass]
		for parent in collect_parents(view) do
			res.add_all parent.collect_intro_mclasses(view)
			res.add_all parent.collect_redef_mclasses(view)
			res.add_all parent.collect_imported_mclasses(view)
		end
		return res
	end

	# Collect all properties introduced in `self`
	fun collect_intro_mproperties(view: ModelView): Set[MProperty] do
		var res = new HashSet[MProperty]
		for mclass in collect_intro_mclasses(view) do
			res.add_all mclass.collect_intro_mproperties(view)
		end
		return res
	end

	# Collect properties redefined in `self`
	fun collect_redef_mproperties(view: ModelView): Set[MProperty] do
		var res = new HashSet[MProperty]
		for mclassdef in mclassdefs do
			for mpropdef in mclassdef.collect_redef_mpropdefs(view) do
				res.add mpropdef.mproperty
			end
		end
		return res
	end

	# Collect attributes introduced in `self`
	fun collect_intro_attributes(view: ModelView): Set[MAttribute] do
		var res = new HashSet[MAttribute]
		for mproperty in collect_intro_mproperties(view) do
			if mproperty isa MAttribute then res.add(mproperty)
		end
		return res
	end

	# Collect all inits introduced in `self`
	fun collect_intro_inits(view: ModelView): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_intro_mproperties(view) do
			if mproperty isa MMethod and mproperty.is_init then res.add(mproperty)
		end
		return res
	end

	# Collect methods introduced in `self` (without inits)
	fun collect_intro_methods(view: ModelView): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_intro_mproperties(view) do
			if mproperty isa MMethod and not mproperty.is_init then res.add(mproperty)
		end
		return res
	end

	# Collect virtual types introduced in `self`
	fun collect_intro_vts(view: ModelView): Set[MVirtualTypeProp] do
		var res = new HashSet[MVirtualTypeProp]
		for mproperty in collect_intro_mproperties(view) do
			if mproperty isa MVirtualTypeProp then res.add(mproperty)
		end
		return res
	end
end

redef class MClass

	redef fun collect_modifiers do return intro.collect_modifiers

	redef fun collect_linearization(mainmodule) do
		var mclassdefs = self.mclassdefs.to_a
		mainmodule.linearize_mclassdefs(mclassdefs)
		return mclassdefs
	end

	# Collect all direct parents of `self`
	#
	# This method uses a flattened hierarchy containing all the mclassdefs.
	redef fun collect_parents(view) do
		var res = new HashSet[MENTITY]
		for mclass in in_hierarchy(view.mainmodule).direct_greaters do
			if mclass == self or not view.accept_mentity(mclass) then continue
			res.add mclass
		end
		return res
	end

	# Collect all direct children of `self`
	#
	# This method uses a flattened hierarchy containing all the mclassdefs.
	redef fun collect_children(view) do
		var res = new HashSet[MENTITY]
		for mclass in in_hierarchy(view.mainmodule).direct_smallers do
			if mclass == self or not view.accept_mentity(mclass) then continue
			res.add mclass
		end
		return res
	end

	# Collect all class definitions of `self`
	fun collect_mclassdefs(view: ModelView): Set[MClassDef] do
		var res = new HashSet[MClassDef]
		for mclassdef in mclassdefs do
			if not view.accept_mentity(mclassdef) then continue
			res.add mclassdef
		end
		return res
	end

	# Collect all property definitions that are introductions in `self`
	fun collect_intro_mpropdefs(view: ModelView): Set[MPropDef] do
		var set = new HashSet[MPropDef]
		for mclassdef in mclassdefs do
			for mpropdef in mclassdef.mpropdefs do
				if not mpropdef.is_intro then continue
				if not view.accept_mentity(mpropdef) then continue
				set.add(mpropdef)
			end
		end
		return set
	end

	# Collect all properties introduced in `self`
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

	# Collect all propierty definitions that are redefinition in `self`
	fun collect_redef_mpropdefs(view: ModelView): Set[MPropDef] do
		var set = new HashSet[MPropDef]
		for mclassdef in mclassdefs do
			for mpropdef in mclassdef.mpropdefs do
				if mpropdef.is_intro then continue
				if not view.accept_mentity(mpropdef) then continue
				set.add(mpropdef)
			end
		end
		return set
	end

	# Collect all properties redefined in `self`
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

	# Collect all properties introduced and redefined in `self`
	fun collect_local_mproperties(view: ModelView): Set[MProperty] do
		var set = new HashSet[MProperty]
		set.add_all collect_intro_mproperties(view)
		set.add_all collect_redef_mproperties(view)
		return set
	end

	# Collect all properties inehrited by `self`
	fun collect_inherited_mproperties(view: ModelView): Set[MProperty] do
		var set = new HashSet[MProperty]
		for parent in collect_parents(view) do
			set.add_all(parent.collect_intro_mproperties(view))
			set.add_all(parent.collect_inherited_mproperties(view))
		end
		return set
	end

	# Collect all properties accessible by `self`
	#
	# This include introduced, redefined, inherited properties.
	fun collect_accessible_mproperties(view: ModelView): Set[MProperty] do
		var set = new HashSet[MProperty]
		set.add_all(collect_intro_mproperties(view))
		set.add_all(collect_redef_mproperties(view))
		set.add_all(collect_inherited_mproperties(view))
		return set
	end

	# Collect all methods introduced in `self`
	fun collect_intro_mmethods(view: ModelView): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_intro_mproperties(view) do
			if mproperty isa MMethod then res.add(mproperty)
		end
		return res
	end

	# Collect all methods redefined in `self`
	fun collect_redef_mmethods(view: ModelView): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_redef_mproperties(view) do
			if mproperty isa MMethod then res.add(mproperty)
		end
		return res
	end

	# Collect all methods introduced and redefined in `self`
	fun collect_local_mmethods(view: ModelView): Set[MMethod] do
		var set = new HashSet[MMethod]
		set.add_all collect_intro_mmethods(view)
		set.add_all collect_redef_mmethods(view)
		return set
	end

	# Collect all methods inherited by `self`
	fun collect_inherited_mmethods(view: ModelView): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_inherited_mproperties(view) do
			if mproperty isa MMethod then res.add(mproperty)
		end
		return res
	end

	# Collect all methods accessible by `self`
	#
	# This include introduced, redefined, inherited methods.
	fun collect_accessible_mmethods(view: ModelView): Set[MMethod] do
		var set = new HashSet[MMethod]
		set.add_all(collect_intro_mmethods(view))
		set.add_all(collect_redef_mmethods(view))
		set.add_all(collect_inherited_mmethods(view))
		return set
	end

	# Collect all attributes introduced in `self`
	fun collect_intro_mattributes(view: ModelView): Set[MAttribute] do
		var res = new HashSet[MAttribute]
		for mproperty in collect_intro_mproperties(view) do
			if mproperty isa MAttribute then res.add(mproperty)
		end
		return res
	end

	# Collect all attributes redefined in `self`
	fun collect_redef_mattributes(view: ModelView): Set[MAttribute] do
		var res = new HashSet[MAttribute]
		for mproperty in collect_redef_mproperties(view) do
			if mproperty isa MAttribute then res.add(mproperty)
		end
		return res
	end

	# Collect all attributes introduced and redefined in `self`
	fun collect_local_mattributes(view: ModelView): Set[MAttribute] do
		var set = new HashSet[MAttribute]
		set.add_all collect_intro_mattributes(view)
		set.add_all collect_redef_mattributes(view)
		return set
	end

	# Collect all attributes inherited by `self`
	fun collect_inherited_mattributes(view: ModelView): Set[MAttribute] do
		var res = new HashSet[MAttribute]
		for mproperty in collect_inherited_mproperties(view) do
			if mproperty isa MAttribute then res.add(mproperty)
		end
		return res
	end

	# Collect all attributes accessible by `self`
	#
	# This include introduced, redefined, inherited mattributes.
	fun collect_accessible_mattributes(view: ModelView): Set[MAttribute] do
		var set = new HashSet[MAttribute]
		set.add_all(collect_intro_mattributes(view))
		set.add_all(collect_redef_mattributes(view))
		set.add_all(collect_inherited_mattributes(view))
		return set
	end

	# Collect all init methods introduced in `self`
	fun collect_intro_inits(view: ModelView): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_intro_mmethods(view) do
			if mproperty.is_init then res.add(mproperty)
		end
		return res
	end

	# Collect all init methods redefined in `self`
	fun collect_redef_inits(view: ModelView): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_redef_mmethods(view) do
			if mproperty.is_init then res.add(mproperty)
		end
		return res
	end

	# Collect all init methods introduced and redefined in `self`
	fun collect_local_inits(view: ModelView): Set[MMethod] do
		var set = new HashSet[MMethod]
		set.add_all collect_intro_inits(view)
		set.add_all collect_redef_inits(view)
		return set
	end

	# Collect all init methods inherited by `self`
	fun collect_inherited_inits(view: ModelView): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_inherited_mmethods(view) do
			if mproperty.is_init then res.add(mproperty)
		end
		return res
	end

	# Collect all init methods accessible by `self`
	#
	# This include introduced, redefined, inherited inits.
	fun collect_accessible_inits(view: ModelView): Set[MMethod] do
		var set = new HashSet[MMethod]
		set.add_all(collect_intro_inits(view))
		set.add_all(collect_redef_inits(view))
		set.add_all(collect_inherited_inits(view))
		return set
	end

	# Collect all virtual types introduced in `self`
	fun collect_intro_vts(view: ModelView): Set[MVirtualTypeProp] do
		var res = new HashSet[MVirtualTypeProp]
		for mproperty in collect_intro_mproperties(view) do
			if mproperty isa MVirtualTypeProp then res.add(mproperty)
		end
		return res
	end

	# Collect all virtual types redefined in `self`
	fun collect_redef_vts(view: ModelView): Set[MVirtualTypeProp] do
		var res = new HashSet[MVirtualTypeProp]
		for mproperty in collect_intro_mproperties(view) do
			if mproperty isa MVirtualTypeProp then res.add(mproperty)
		end
		return res
	end

	# Collect all virtual types introduced or redefined in `self`
	fun collect_local_vts(view: ModelView): Set[MVirtualTypeProp] do
		var set = new HashSet[MVirtualTypeProp]
		set.add_all collect_intro_vts(view)
		set.add_all collect_redef_vts(view)
		return set
	end

	# Collect all virtual types inherited by `self`
	fun collect_inherited_vts(view: ModelView): Set[MVirtualTypeProp] do
		var res = new HashSet[MVirtualTypeProp]
		for mproperty in collect_inherited_mproperties(view) do
			if mproperty isa MVirtualTypeProp then res.add(mproperty)
		end
		return res
	end

	# Collect all virtual types accessible by `self`
	#
	# This include introduced, redefined, inherited virtual types.
	fun collect_accessible_vts(view: ModelView): Set[MVirtualTypeProp] do
		var set = new HashSet[MVirtualTypeProp]
		for mproperty in collect_accessible_mproperties(view) do
			if mproperty isa MVirtualTypeProp then set.add mproperty
		end
		return set
	end
end

redef class MClassDef

	redef fun collect_modifiers do
		var res = super
		if not is_intro then
			res.add "redef"
		else
			if mclass.visibility != public_visibility then
				res.add mclass.visibility.to_s
			end
		end
		res.add mclass.kind.to_s
		return res
	end

	redef fun collect_linearization(mainmodule) do
		var mclassdefs = new Array[MClassDef]
		for mclassdef in in_hierarchy.as(not null).greaters do
			if mclassdef.mclass == self.mclass then mclassdefs.add mclassdef
		end
		mainmodule.linearize_mclassdefs(mclassdefs)
		return mclassdefs
	end

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

	# Collect all property definitions in `self`
	fun collect_mpropdefs(view: ModelView): Set[MPropDef] do
		var res = new HashSet[MPropDef]
		for mpropdef in mpropdefs do
			if not view.accept_mentity(mpropdef) then continue
			res.add mpropdef
		end
		return res
	end

	# Collect all attribute definitions in `self`
	fun collect_mattributedefs(view: ModelView): Set[MAttributeDef] do
		var res = new HashSet[MAttributeDef]
		for mpropdef in collect_mpropdefs(view) do
			if not mpropdef isa MAttributeDef then continue
			res.add mpropdef
		end
		return res
	end

	# Collect all methods definitions in `self`
	fun collect_mmethoddefs(view: ModelView): Set[MMethodDef] do
		var res = new HashSet[MMethodDef]
		for mpropdef in collect_mpropdefs(view) do
			if not mpropdef isa MMethodDef then continue
			res.add mpropdef
		end
		return res
	end

	# Collect all virtual types definitions in `self`
	fun collect_mtypedefs(view: ModelView): Set[MVirtualTypeDef] do
		var res = new HashSet[MVirtualTypeDef]
		for mpropdef in collect_mpropdefs(view) do
			if not mpropdef isa MVirtualTypeDef then continue
			res.add mpropdef
		end
		return res
	end

	# Collect all property definitions that are introduction in `self`
	fun collect_intro_mpropdefs(view: ModelView): Set[MPropDef] do
		var res = new HashSet[MPropDef]
		for mpropdef in mpropdefs do
			if not mpropdef.is_intro then continue
			if not view.accept_mentity(mpropdef) then continue
			res.add mpropdef
		end
		return res
	end

	# Collect all property definitions that are redefinition in `self`
	fun collect_redef_mpropdefs(view: ModelView): Set[MPropDef] do
		var res = new HashSet[MPropDef]
		for mpropdef in mpropdefs do
			if mpropdef.is_intro then continue
			if not view.accept_mentity(mpropdef) then continue
			res.add mpropdef
		end
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

	# Collect all property definitions of `self`
	fun collect_mpropdefs(view: ModelView): Set[MPropDef] do
		var res = new HashSet[MPropDef]
		for mpropdef in mpropdefs do
			if not view.accept_mentity(mpropdef) then continue
			res.add mpropdef
		end
		return res
	end

	# Collect all direct super definitions of `self`
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

	# Collection all definitions that have `self` as a direct super definition
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
			if mproperty.visibility != public_visibility then
				res.add mproperty.visibility.to_s
			end
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

	# Collect only the next definition of `self`
	redef fun collect_parents(view) do
		var res = new HashSet[MENTITY]
		var mpropdef = self
		while not mpropdef.is_intro do
			mpropdef = mpropdef.lookup_next_definition(mclassdef.mmodule, mclassdef.bound_mtype)
			res.add mpropdef
		end
		return res
	end

	# Collect all children definitions that directly depend on `self`
	redef fun collect_children(view) do
		var res = new HashSet[MENTITY]
		for mpropdef in mproperty.collect_mpropdefs(view) do
			if mpropdef.collect_parents(view).has(self) then res.add mpropdef
		end
		return res
	end
end
