# This file is part of NIT ( https://nitlanguage.org ).
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

# Collect things from the model.
#
# This module introduce several usefull methods to list and count things from a
# Model.
#
# ~~~nitish
# print number of parents for `{my_class}`
# print my_class.collect_parents.count
# ~~~
#
# Collect methods can also be used with a ModelFilter:
# ~~~nitish
# var filter = new ModelFilter(min_visibility = private_visibility)
# print my_class.collect_parents(filter).count
# ~~~
#
# **Warning**
#
# `model_collect` offers a flattened filter of the model without considering any
# main module.
# For this reason, `model_collect` lists all the definitions reachable from all
# modules.
#
# This is usefull for tools that need a global filter of a model like `nitdoc`,
# `nitx`, `nitmetrics` or `nituml`.
# It should not be used for compiling stuffs like computing VFT, where the listed
# entities could not be reachable depending on the modules really imported.
module model_collect

import model_filters

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
	fun collect_ancestors(mainmodule: MModule, filter: nullable ModelFilter): Set[MENTITY] do
		var done = new HashSet[MENTITY]
		var todo = new Array[MENTITY]

		todo.add_all collect_parents(mainmodule, filter)
		while todo.not_empty do
			var mentity = todo.pop
			if mentity == self or done.has(mentity) then continue
			done.add mentity
			todo.add_all mentity.collect_parents(mainmodule, filter)
		end
		return done
	end

	# Collect `self` parents (direct ancestors)
	#
	# The concept of parent is abstract at this stage.
	fun collect_parents(mainmodule: MModule, filter: nullable ModelFilter): Set[MENTITY] is abstract

	# Collect `self` children (direct descendants)
	#
	# The concept of child is abstract at this stage.
	fun collect_children(mainmodule: MModule, filter: nullable ModelFilter): Set[MENTITY] is abstract

	# Collect `self` descendants (direct and direct)
	#
	# The concept of descendant is abstract at this stage.
	fun collect_descendants(mainmodule: MModule, filter: nullable ModelFilter): Set[MENTITY] do
		var done = new HashSet[MENTITY]
		var todo = new Array[MENTITY]

		todo.add_all collect_children(mainmodule, filter)
		while todo.not_empty do
			var mentity = todo.pop
			if mentity == self or done.has(mentity) then continue
			done.add mentity
			todo.add_all mentity.collect_children(mainmodule, filter)
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
	fun hierarchy_poset(mainmodule: MModule, filter: nullable ModelFilter): POSet[MENTITY] do
		var poset = new POSet[MENTITY]
		var parents_done = new HashSet[MENTITY]
		var parents = new Array[MENTITY]
		parents.add self
		while parents.not_empty do
			var mentity = parents.pop
			if parents_done.has(mentity) then continue
			parents_done.add mentity
			poset.add_node mentity
			for parent in mentity.collect_parents(mainmodule, filter) do
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
			for child in mentity.collect_children(mainmodule, filter) do
				poset.add_edge(child, mentity)
				children.add child
			end
		end
		return poset
	end
end

redef class Model

	# Collect all MPackages in `self`
	fun collect_mpackages(filter: nullable ModelFilter): HashSet[MPackage] do
		var res = new HashSet[MPackage]
		for mpackage in mpackages do
			if filter == null or filter.accept_mentity(mpackage) then res.add(mpackage)
		end
		return res
	end

	# Collect all MGroups in `self`
	fun collect_mgroups(filter: nullable ModelFilter): HashSet[MGroup] do
		var res = new HashSet[MGroup]
		for mpackage in collect_mpackages(filter) do
			res.add_all mpackage.collect_all_mgroups(filter)
		end
		return res
	end

	# Collect all MModules in `self`
	fun collect_mmodules(filter: nullable ModelFilter): HashSet[MModule] do
		var res = new HashSet[MModule]
		for mpackage in collect_mpackages(filter) do
			res.add_all mpackage.collect_all_mmodules(filter)
		end
		return res
	end

	# Collect all MClasses in `self`
	fun collect_mclasses(filter: nullable ModelFilter): HashSet[MClass] do
		var res = new HashSet[MClass]
		for mclass in mclasses do
			if filter == null or filter.accept_mentity(mclass) then res.add mclass
		end
		return res
	end

	# Collect all MClasses introduced in `self`
	fun collect_intro_mclasses(filter: nullable ModelFilter): HashSet[MClass] do
		var res = new HashSet[MClass]
		for mpackage in collect_mpackages(filter) do
			res.add_all mpackage.collect_intro_mclasses(filter)
		end
		return res
	end

	# Collect all MClassDefs in `self`
	fun collect_mclassdefs(filter: nullable ModelFilter): HashSet[MClassDef] do
		var res = new HashSet[MClassDef]
		for mclass in collect_mclasses(filter) do
			res.add_all mclass.collect_mclassdefs(filter)
		end
		return res
	end

	# Collect all MProperties introduced in `self`
	fun collect_intro_mproperties(filter: nullable ModelFilter): HashSet[MProperty] do
		var res = new HashSet[MProperty]
		for mpackage in collect_mpackages(filter) do
			res.add_all mpackage.collect_intro_mproperties(filter)
		end
		return res
	end

	# Collect all MProperties in `self`
	fun collect_mproperties(filter: nullable ModelFilter): HashSet[MProperty] do
		var res = new HashSet[MProperty]
		for mproperty in mproperties do
			if filter == null or filter.accept_mentity(mproperty) then res.add mproperty
		end
		return res
	end

	# Collect all MPropDefs in `self`
	fun collect_mpropdefs(filter: nullable ModelFilter): HashSet[MPropDef] do
		var res = new HashSet[MPropDef]
		for mproperty in collect_mproperties(filter) do
			for mpropdef in mproperty.mpropdefs do
				if filter == null or filter.accept_mentity(mpropdef) then res.add mpropdef
			end
		end
		return res
	end

	# Collect all MEntities in `self`
	fun collect_mentities(filter: nullable ModelFilter): HashSet[MEntity] do
		var res = new HashSet[MEntity]
		res.add_all collect_mpackages(filter)
		res.add_all collect_mgroups(filter)
		res.add_all collect_mmodules(filter)
		res.add_all collect_mclasses(filter)
		res.add_all collect_mclassdefs(filter)
		res.add_all collect_mproperties(filter)
		res.add_all collect_mpropdefs(filter)
		return res
	end

	# Searches the MEntity that matches `full_name`.
	fun mentity_by_full_name(full_name: String, filter: nullable ModelFilter): nullable MEntity do
		for mentity in collect_mentities(filter) do
			if filter != null and not filter.accept_mentity(mentity) then continue
			if mentity.full_name == full_name then return mentity
		end
		return null
	end

	# Searches the MEntities that matches `full_name`.
	fun mentities_by_name(name: String, filter: nullable ModelFilter): Array[MEntity] do
		var res = new Array[MEntity]
		for mentity in collect_mentities(filter) do
			if filter != null and not filter.accept_mentity(mentity) then continue
			if mentity.name == name then res.add mentity
		end
		return res
	end
end

redef class MPackage

	redef fun collect_modifiers do return super + ["package"]

	# Collect all packages directly imported by `self`
	redef fun collect_parents(mainmodule, filter) do
		var res = new HashSet[MENTITY]
		for mgroup in mgroups do
			for parent in mgroup.collect_parents(mainmodule, filter) do
				var mpackage = parent.mpackage
				if mpackage == self then continue
				if filter == null or filter.accept_mentity(mpackage) then res.add(mpackage)
			end
		end
		return res
	end

	# Collect all packages that directly depends on `self`
	redef fun collect_children(mainmodule, filter) do
		var res = new HashSet[MENTITY]
		for mpackage in model.collect_mpackages(filter) do
			if mpackage.collect_parents(mainmodule, filter).has(self) then res.add mpackage
		end
		return res
	end

	# Collect all groups contained in `self`
	fun collect_all_mgroups(filter: nullable ModelFilter): HashSet[MGroup] do
		var res = new HashSet[MGroup]
		for mgroup in mgroups do
			if filter == null or filter.accept_mentity(mgroup) then res.add(mgroup)
		end
		return res
	end

	# Collect only groups contained in `self.root`
	fun collect_mgroups(filter: nullable ModelFilter): HashSet[MGroup] do
		var res = new HashSet[MGroup]
		var root = self.root
		if root == null then return res
		res.add_all root.collect_mgroups(filter)
		return res
	end

	# Collect all modules contained in `self`
	fun collect_all_mmodules(filter: nullable ModelFilter): HashSet[MModule] do
		var res = new HashSet[MModule]
		for mgroup in collect_all_mgroups(filter) do
			res.add_all mgroup.collect_mmodules(filter)
		end
		return res
	end

	# Collect only modules contained in `self.root`
	fun collect_mmodules(filter: nullable ModelFilter): HashSet[MModule] do
		var res = new HashSet[MModule]
		var root = self.root
		if root == null then return res
		res.add_all root.collect_mmodules(filter)
		return res
	end

	# Collect all classes introduced in `self`
	fun collect_intro_mclasses(filter: nullable ModelFilter): HashSet[MClass] do
		var res = new HashSet[MClass]
		for mgroup in mgroups do
			for mmodule in collect_all_mmodules(filter) do
				res.add_all mmodule.collect_intro_mclasses(filter)
			end
		end
		return res
	end

	# Collect all classes redefined or refined in `self`
	fun collect_redef_mclasses(filter: nullable ModelFilter): Set[MClass] do
		var res = new HashSet[MClass]
		for mgroup in mgroups do
			for mmodule in collect_all_mmodules(filter) do
				res.add_all mmodule.collect_redef_mclasses(filter)
			end
		end
		return res
	end

	# Collect all properties introduced in `self`
	fun collect_intro_mproperties(filter: nullable ModelFilter): HashSet[MProperty] do
		var res = new HashSet[MProperty]
		for mgroup in mgroups do
			for mmodule in collect_all_mmodules(filter) do
				res.add_all mmodule.collect_intro_mproperties(filter)
			end
		end
		return res
	end

	# Collect all properties redefined in `self`
	fun collect_redef_mproperties(filter: nullable ModelFilter): HashSet[MProperty] do
		var res = new HashSet[MProperty]
		for mgroup in mgroups do
			for mmodule in collect_all_mmodules(filter) do
				res.add_all mmodule.collect_redef_mproperties(filter)
			end
		end
		return res
	end

	# Collect all attributes introduced in `self`
	fun collect_intro_attributes(filter: nullable ModelFilter): Set[MAttribute] do
		var res = new HashSet[MAttribute]
		for mgroup in mgroups do
			for mmodule in collect_all_mmodules(filter) do
				res.add_all mmodule.collect_intro_attributes(filter)
			end
		end
		return res
	end

	# Collect all inits introduced in `self`
	fun collect_intro_inits(filter: nullable ModelFilter): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mgroup in mgroups do
			for mmodule in collect_all_mmodules(filter) do
				res.add_all mmodule.collect_intro_inits(filter)
			end
		end
		return res
	end

	# Collect all methods introduced in `self` excluding inits
	#
	# See `collect_intro_inits`.
	fun collect_intro_methods(filter: nullable ModelFilter): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mgroup in mgroups do
			for mmodule in collect_all_mmodules(filter) do
				res.add_all mmodule.collect_intro_methods(filter)
			end
		end
		return res
	end

	# Collect all virtual types introduced in `self`
	fun collect_intro_vts(filter: nullable ModelFilter): Set[MVirtualTypeProp] do
		var res = new HashSet[MVirtualTypeProp]
		for mgroup in mgroups do
			for mmodule in collect_all_mmodules(filter) do
				res.add_all mmodule.collect_intro_vts(filter)
			end
		end
		return res
	end
end

redef class MGroup

	redef fun collect_modifiers do return super + ["group"]

	# Collect all groups directly import by `self`
	redef fun collect_parents(mainmodule, filter) do
		var res = new HashSet[MENTITY]
		for mmodule in mmodules do
			for parent in mmodule.collect_parents(mainmodule, filter) do
				var mgroup = parent.mgroup
				if mgroup == null or mgroup == self then continue
				if filter == null or filter.accept_mentity(mgroup) then res.add(mgroup)
			end
		end
		return res
	end

	# Collect all group that directly import `self`
	redef fun collect_children(mainmodule, filter) do
		var res = new HashSet[MENTITY]
		for mgroup in model.collect_mgroups(filter) do
			if mgroup == self then continue
			if filter != null and not filter.accept_mentity(mgroup) then continue
			if mgroup.collect_parents(mainmodule, filter).has(self) then res.add mgroup
		end
		return res
	end

	# Collect all groups contained in `self`
	fun collect_mgroups(filter: nullable ModelFilter): HashSet[MENTITY] do
		var res = new HashSet[MENTITY]
		for mgroup in in_nesting.direct_smallers do
			if filter == null or filter.accept_mentity(mgroup) then res.add(mgroup)
		end
		return res
	end

	# Collect all modules contained in `self`
	fun collect_all_mmodules(filter: nullable ModelFilter): HashSet[MModule] do
		var res = new HashSet[MModule]
		for mgroup in collect_mgroups(filter) do
			res.add_all mgroup.collect_all_mmodules(filter)
		end
		return res
	end

	# Collect all modules contained in `self`
	fun collect_mmodules(filter: nullable ModelFilter): HashSet[MModule] do
		var res = new HashSet[MModule]
		for mmodule in mmodules do
			if filter == null or filter.accept_mentity(mmodule) then res.add(mmodule)
		end
		return res
	end
end

redef class MModule

	redef fun collect_modifiers do return super + ["module"]

	# Collect all modules directly imported by `self`
	redef fun collect_ancestors(mainmodule, filter) do
		var res = new HashSet[MENTITY]
		for mentity in in_importation.greaters do
			if mentity == self then continue
			if filter == null or filter.accept_mentity(mentity) then res.add mentity
		end
		return res
	end

	# Collect all modules directly imported by `self`
	redef fun collect_parents(mainmodule, filter) do
		var res = new HashSet[MENTITY]
		for mentity in in_importation.direct_greaters do
			if mentity == self then continue
			if filter == null or filter.accept_mentity(mentity) then res.add mentity
		end
		return res
	end

	# Collect all modules that directly import `self`
	redef fun collect_children(mainmodule, filter) do
		var res = new HashSet[MENTITY]
		for mentity in in_importation.direct_smallers do
			if mentity == self then continue
			if filter == null or filter.accept_mentity(mentity) then res.add mentity
		end
		return res
	end

	# Collect all module descendants of `self` (direct and transitive imports)
	redef fun collect_descendants(mainmodule, filter) do
		var res = new HashSet[MENTITY]
		for mentity in in_importation.smallers do
			if mentity == self then continue
			if filter == null or filter.accept_mentity(mentity) then res.add mentity
		end
		return res
	end

	# Collect all class definitions introduced in `self`
	fun collect_intro_mclassdefs(filter: nullable ModelFilter): Set[MClassDef] do
		var res = new HashSet[MClassDef]
		for mclassdef in mclassdefs do
			if not mclassdef.is_intro then continue
			if filter == null or filter.accept_mentity(mclassdef) then res.add mclassdef
		end
		return res
	end

	# Collect all class definitions refined in `self`
	fun collect_redef_mclassdefs(filter: nullable ModelFilter): Set[MClassDef] do
		var res = new HashSet[MClassDef]
		for mclassdef in mclassdefs do
			if mclassdef.is_intro then continue
			if filter == null or filter.accept_mentity(mclassdef) then res.add mclassdef
		end
		return res
	end

	# Collect all class definitions introduced and refined in `self`
	fun collect_local_mclassdefs(filter: nullable ModelFilter): Set[MClassDef] do
		var res = new HashSet[MClassDef]
		res.add_all collect_intro_mclassdefs(filter)
		res.add_all collect_redef_mclassdefs(filter)
		return res
	end

	# Collect all classes introduced in `self`
	fun collect_intro_mclasses(filter: nullable ModelFilter): Set[MClass] do
		var res = new HashSet[MClass]
		for mclass in intro_mclasses do
			if filter == null or filter.accept_mentity(mclass) then res.add mclass
		end
		return res
	end

	# Collect all classes refined in `self`
	fun collect_redef_mclasses(filter: nullable ModelFilter): Set[MClass] do
		var mclasses = new HashSet[MClass]
		for mclassdef in mclassdefs do
			if filter != null and not filter.accept_mentity(mclassdef.mclass) then continue
			if not mclassdef.is_intro then mclasses.add(mclassdef.mclass)
		end
		return mclasses
	end

	# Collect all classes introduced and refined in `self`
	fun collect_local_mclasses(filter: nullable ModelFilter): Set[MClass] do
		var res = new HashSet[MClass]
		res.add_all collect_intro_mclasses(filter)
		res.add_all collect_redef_mclasses(filter)
		return res
	end

	# Collect all classes imported from `self` parents
	fun collect_imported_mclasses(mainmodule: MModule, filter: nullable ModelFilter): Set[MClass] do
		var res = new HashSet[MClass]
		for parent in collect_parents(mainmodule, filter) do
			res.add_all parent.collect_intro_mclasses(filter)
			res.add_all parent.collect_redef_mclasses(filter)
			res.add_all parent.collect_imported_mclasses(mainmodule, filter)
		end
		return res
	end

	# Collect all properties introduced in `self`
	fun collect_intro_mproperties(filter: nullable ModelFilter): Set[MProperty] do
		var res = new HashSet[MProperty]
		for mclass in collect_intro_mclasses(filter) do
			res.add_all mclass.collect_intro_mproperties(filter)
		end
		return res
	end

	# Collect properties redefined in `self`
	fun collect_redef_mproperties(filter: nullable ModelFilter): Set[MProperty] do
		var res = new HashSet[MProperty]
		for mclassdef in mclassdefs do
			for mpropdef in mclassdef.collect_redef_mpropdefs(filter) do
				res.add mpropdef.mproperty
			end
		end
		return res
	end

	# Collect attributes introduced in `self`
	fun collect_intro_attributes(filter: nullable ModelFilter): Set[MAttribute] do
		var res = new HashSet[MAttribute]
		for mproperty in collect_intro_mproperties(filter) do
			if mproperty isa MAttribute then res.add(mproperty)
		end
		return res
	end

	# Collect all inits introduced in `self`
	fun collect_intro_inits(filter: nullable ModelFilter): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_intro_mproperties(filter) do
			if mproperty isa MMethod and mproperty.is_init then res.add(mproperty)
		end
		return res
	end

	# Collect methods introduced in `self` (without inits)
	fun collect_intro_methods(filter: nullable ModelFilter): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_intro_mproperties(filter) do
			if mproperty isa MMethod and not mproperty.is_init then res.add(mproperty)
		end
		return res
	end

	# Collect virtual types introduced in `self`
	fun collect_intro_vts(filter: nullable ModelFilter): Set[MVirtualTypeProp] do
		var res = new HashSet[MVirtualTypeProp]
		for mproperty in collect_intro_mproperties(filter) do
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

	# Collect all ancestors of `self`
	redef fun collect_ancestors(mainmodule, filter) do
		var res = new HashSet[MENTITY]
		if not mainmodule.flatten_mclass_hierarchy.has(self) then return res
		for mclass in in_hierarchy(mainmodule).greaters do
			if mclass == self then continue
			if filter == null or filter.accept_mentity(mclass) then res.add mclass
		end
		return res
	end

	# Collect all direct parents of `self`
	redef fun collect_parents(mainmodule, filter) do
		var res = new HashSet[MENTITY]
		if not mainmodule.flatten_mclass_hierarchy.has(self) then return res
		for mclass in in_hierarchy(mainmodule).direct_greaters do
			if mclass == self then continue
			if filter == null or filter.accept_mentity(mclass) then res.add mclass
		end
		return res
	end

	# Collect all direct children of `self`
	redef fun collect_children(mainmodule, filter) do
		var res = new HashSet[MENTITY]
		if not mainmodule.flatten_mclass_hierarchy.has(self) then return res
		for mclass in in_hierarchy(mainmodule).direct_smallers do
			if mclass == self then continue
			if filter == null or filter.accept_mentity(mclass) then res.add mclass
		end
		return res
	end

	# Collect all descendants of `self`
	redef fun collect_descendants(mainmodule, filter) do
		var res = new HashSet[MENTITY]
		if not mainmodule.flatten_mclass_hierarchy.has(self) then return res
		for mclass in in_hierarchy(mainmodule).smallers do
			if mclass == self then continue
			if filter == null or filter.accept_mentity(mclass) then res.add mclass
		end
		return res
	end

	# Collect all class definitions of `self`
	fun collect_mclassdefs(filter: nullable ModelFilter): Set[MClassDef] do
		var res = new HashSet[MClassDef]
		for mclassdef in mclassdefs do
			if filter == null or filter.accept_mentity(mclassdef) then res.add mclassdef
		end
		return res
	end

	# Collect all property definitions that are introductions in `self`
	fun collect_intro_mpropdefs(filter: nullable ModelFilter): Set[MPropDef] do
		var set = new HashSet[MPropDef]
		for mclassdef in mclassdefs do
			for mpropdef in mclassdef.mpropdefs do
				if not mpropdef.is_intro then continue
				if filter == null or filter.accept_mentity(mpropdef) then set.add(mpropdef)
			end
		end
		return set
	end

	# Collect all properties introduced in `self`
	fun collect_intro_mproperties(filter: nullable ModelFilter): Set[MProperty] do
		var set = new HashSet[MProperty]
		for mclassdef in mclassdefs do
			for mprop in mclassdef.intro_mproperties do
				if filter == null or filter.accept_mentity(mprop) then set.add(mprop)
			end
		end
		return set
	end

	# Collect all propierty definitions that are redefinition in `self`
	fun collect_redef_mpropdefs(filter: nullable ModelFilter): Set[MPropDef] do
		var set = new HashSet[MPropDef]
		for mclassdef in mclassdefs do
			for mpropdef in mclassdef.mpropdefs do
				if mpropdef.is_intro then continue
				if filter == null or filter.accept_mentity(mpropdef) then set.add(mpropdef)
			end
		end
		return set
	end

	# Collect all properties redefined in `self`
	fun collect_redef_mproperties(filter: nullable ModelFilter): Set[MProperty] do
		var set = new HashSet[MProperty]
		for mclassdef in mclassdefs do
			for mpropdef in mclassdef.mpropdefs do
				if mpropdef.mproperty.intro_mclassdef.mclass == self then continue
				if filter == null or filter.accept_mentity(mpropdef) then
					set.add(mpropdef.mproperty)
				end
			end
		end
		return set
	end

	# Collect all properties introduced and redefined in `self`
	fun collect_local_mproperties(filter: nullable ModelFilter): Set[MProperty] do
		var set = new HashSet[MProperty]
		set.add_all collect_intro_mproperties(filter)
		set.add_all collect_redef_mproperties(filter)
		return set
	end

	# Collect all properties inehrited by `self`
	fun collect_inherited_mproperties(mainmodule: MModule, filter: nullable ModelFilter): Set[MProperty] do
		var set = new HashSet[MProperty]
		for parent in collect_parents(mainmodule, filter) do
			set.add_all(parent.collect_intro_mproperties(filter))
			set.add_all(parent.collect_inherited_mproperties(mainmodule, filter))
		end
		return set
	end

	# Collect all properties accessible by `self`
	#
	# This include introduced, redefined, inherited properties.
	fun collect_accessible_mproperties(mainmodule: MModule, filter: nullable ModelFilter): Set[MProperty] do
		var set = new HashSet[MProperty]
		set.add_all(collect_intro_mproperties(filter))
		set.add_all(collect_redef_mproperties(filter))
		set.add_all(collect_inherited_mproperties(mainmodule, filter))
		return set
	end

	# Collect all methods introduced in `self`
	fun collect_intro_mmethods(filter: nullable ModelFilter): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_intro_mproperties(filter) do
			if mproperty isa MMethod then res.add(mproperty)
		end
		return res
	end

	# Collect all methods redefined in `self`
	fun collect_redef_mmethods(filter: nullable ModelFilter): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_redef_mproperties(filter) do
			if mproperty isa MMethod then res.add(mproperty)
		end
		return res
	end

	# Collect all methods introduced and redefined in `self`
	fun collect_local_mmethods(filter: nullable ModelFilter): Set[MMethod] do
		var set = new HashSet[MMethod]
		set.add_all collect_intro_mmethods(filter)
		set.add_all collect_redef_mmethods(filter)
		return set
	end

	# Collect all methods inherited by `self`
	fun collect_inherited_mmethods(mainmodule: MModule, filter: nullable ModelFilter): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_inherited_mproperties(mainmodule, filter) do
			if mproperty isa MMethod then res.add(mproperty)
		end
		return res
	end

	# Collect all methods accessible by `self`
	#
	# This include introduced, redefined, inherited methods.
	fun collect_accessible_mmethods(mainmodule: MModule, filter: nullable ModelFilter): Set[MMethod] do
		var set = new HashSet[MMethod]
		set.add_all(collect_intro_mmethods(filter))
		set.add_all(collect_redef_mmethods(filter))
		set.add_all(collect_inherited_mmethods(mainmodule, filter))
		return set
	end

	# Collect all attributes introduced in `self`
	fun collect_intro_mattributes(filter: nullable ModelFilter): Set[MAttribute] do
		var res = new HashSet[MAttribute]
		for mproperty in collect_intro_mproperties(filter) do
			if mproperty isa MAttribute then res.add(mproperty)
		end
		return res
	end

	# Collect all attributes redefined in `self`
	fun collect_redef_mattributes(filter: nullable ModelFilter): Set[MAttribute] do
		var res = new HashSet[MAttribute]
		for mproperty in collect_redef_mproperties(filter) do
			if mproperty isa MAttribute then res.add(mproperty)
		end
		return res
	end

	# Collect all attributes introduced and redefined in `self`
	fun collect_local_mattributes(filter: nullable ModelFilter): Set[MAttribute] do
		var set = new HashSet[MAttribute]
		set.add_all collect_intro_mattributes(filter)
		set.add_all collect_redef_mattributes(filter)
		return set
	end

	# Collect all attributes inherited by `self`
	fun collect_inherited_mattributes(mainmodule: MModule, filter: nullable ModelFilter): Set[MAttribute] do
		var res = new HashSet[MAttribute]
		for mproperty in collect_inherited_mproperties(mainmodule, filter) do
			if mproperty isa MAttribute then res.add(mproperty)
		end
		return res
	end

	# Collect all attributes accessible by `self`
	#
	# This include introduced, redefined, inherited mattributes.
	fun collect_accessible_mattributes(mainmodule: MModule, filter: nullable ModelFilter): Set[MAttribute] do
		var set = new HashSet[MAttribute]
		set.add_all(collect_intro_mattributes(filter))
		set.add_all(collect_redef_mattributes(filter))
		set.add_all(collect_inherited_mattributes(mainmodule, filter))
		return set
	end

	# Collect all init methods introduced in `self`
	fun collect_intro_inits(filter: nullable ModelFilter): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_intro_mmethods(filter) do
			if mproperty.is_init then res.add(mproperty)
		end
		return res
	end

	# Collect all init methods redefined in `self`
	fun collect_redef_inits(filter: nullable ModelFilter): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_redef_mmethods(filter) do
			if mproperty.is_init then res.add(mproperty)
		end
		return res
	end

	# Collect all init methods introduced and redefined in `self`
	fun collect_local_inits(filter: nullable ModelFilter): Set[MMethod] do
		var set = new HashSet[MMethod]
		set.add_all collect_intro_inits(filter)
		set.add_all collect_redef_inits(filter)
		return set
	end

	# Collect all init methods inherited by `self`
	fun collect_inherited_inits(mainmodule: MModule, filter: nullable ModelFilter): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_inherited_mmethods(mainmodule, filter) do
			if mproperty.is_init then res.add(mproperty)
		end
		return res
	end

	# Collect all init methods accessible by `self`
	#
	# This include introduced, redefined, inherited inits.
	fun collect_accessible_inits(mainmodule: MModule, filter: nullable ModelFilter): Set[MMethod] do
		var set = new HashSet[MMethod]
		set.add_all(collect_intro_inits(filter))
		set.add_all(collect_redef_inits(filter))
		set.add_all(collect_inherited_inits(mainmodule, filter))
		return set
	end

	# Collect all virtual types introduced in `self`
	fun collect_intro_vts(filter: nullable ModelFilter): Set[MVirtualTypeProp] do
		var res = new HashSet[MVirtualTypeProp]
		for mproperty in collect_intro_mproperties(filter) do
			if mproperty isa MVirtualTypeProp then res.add(mproperty)
		end
		return res
	end

	# Collect all virtual types redefined in `self`
	fun collect_redef_vts(filter: nullable ModelFilter): Set[MVirtualTypeProp] do
		var res = new HashSet[MVirtualTypeProp]
		for mproperty in collect_intro_mproperties(filter) do
			if mproperty isa MVirtualTypeProp then res.add(mproperty)
		end
		return res
	end

	# Collect all virtual types introduced or redefined in `self`
	fun collect_local_vts(filter: nullable ModelFilter): Set[MVirtualTypeProp] do
		var set = new HashSet[MVirtualTypeProp]
		set.add_all collect_intro_vts(filter)
		set.add_all collect_redef_vts(filter)
		return set
	end

	# Collect all virtual types inherited by `self`
	fun collect_inherited_vts(mainmodule: MModule, filter: nullable ModelFilter): Set[MVirtualTypeProp] do
		var res = new HashSet[MVirtualTypeProp]
		for mproperty in collect_inherited_mproperties(mainmodule, filter) do
			if mproperty isa MVirtualTypeProp then res.add(mproperty)
		end
		return res
	end

	# Collect all virtual types accessible by `self`
	#
	# This include introduced, redefined, inherited virtual types.
	fun collect_accessible_vts(mainmodule: MModule, filter: nullable ModelFilter): Set[MVirtualTypeProp] do
		var set = new HashSet[MVirtualTypeProp]
		for mproperty in collect_accessible_mproperties(mainmodule, filter) do
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

	redef fun collect_parents(mainmodule, filter) do
		var res = new HashSet[MENTITY]
		var hierarchy = self.in_hierarchy
		if hierarchy == null then return res
		for parent in hierarchy.direct_greaters do
			if parent == self then continue
			if filter == null or filter.accept_mentity(parent) then res.add parent
		end
		return res
	end

	redef fun collect_children(mainmodule, filter) do
		var res = new HashSet[MENTITY]
		var hierarchy = self.in_hierarchy
		if hierarchy == null then return res
		for child in hierarchy.direct_smallers do
			if child == self then continue
			if filter == null or filter.accept_mentity(child) then res.add child
		end
		return res
	end

	# Collect all property definitions in `self`
	fun collect_mpropdefs(filter: nullable ModelFilter): Set[MPropDef] do
		var res = new HashSet[MPropDef]
		for mpropdef in mpropdefs do
			if filter == null or filter.accept_mentity(mpropdef) then res.add mpropdef
		end
		return res
	end

	# Collect all attribute definitions in `self`
	fun collect_mattributedefs(filter: nullable ModelFilter): Set[MAttributeDef] do
		var res = new HashSet[MAttributeDef]
		for mpropdef in collect_mpropdefs(filter) do
			if not mpropdef isa MAttributeDef then continue
			res.add mpropdef
		end
		return res
	end

	# Collect all methods definitions in `self`
	fun collect_mmethoddefs(filter: nullable ModelFilter): Set[MMethodDef] do
		var res = new HashSet[MMethodDef]
		for mpropdef in collect_mpropdefs(filter) do
			if not mpropdef isa MMethodDef then continue
			res.add mpropdef
		end
		return res
	end

	# Collect all virtual types definitions in `self`
	fun collect_mtypedefs(filter: nullable ModelFilter): Set[MVirtualTypeDef] do
		var res = new HashSet[MVirtualTypeDef]
		for mpropdef in collect_mpropdefs(filter) do
			if not mpropdef isa MVirtualTypeDef then continue
			res.add mpropdef
		end
		return res
	end

	# Collect all property definitions that are introduction in `self`
	fun collect_intro_mpropdefs(filter: nullable ModelFilter): Set[MPropDef] do
		var res = new HashSet[MPropDef]
		for mpropdef in mpropdefs do
			if not mpropdef.is_intro then continue
			if filter == null or filter.accept_mentity(mpropdef) then res.add mpropdef
		end
		return res
	end

	# Collect all property definitions that are redefinition in `self`
	fun collect_redef_mpropdefs(filter: nullable ModelFilter): Set[MPropDef] do
		var res = new HashSet[MPropDef]
		for mpropdef in mpropdefs do
			if mpropdef.is_intro then continue
			if filter == null or filter.accept_mentity(mpropdef) then res.add mpropdef
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
	fun collect_mpropdefs(filter: nullable ModelFilter): Set[MPropDef] do
		var res = new HashSet[MPropDef]
		for mpropdef in mpropdefs do
			if filter == null or filter.accept_mentity(mpropdef) then res.add mpropdef
		end
		return res
	end

	# Collect all direct super definitions of `self`
	redef fun collect_parents(mainmodule, filter) do
		var res = new HashSet[MENTITY]
		for mpropdef in mpropdefs do
			for parent in mpropdef.collect_parents(mainmodule, filter) do
				var mprop = parent.mproperty
				if filter == null or filter.accept_mentity(mprop) then res.add mprop
			end
		end
		return res
	end

	# Collection all definitions that have `self` as a direct super definition
	redef fun collect_children(mainmodule, filter) do
		var res = new HashSet[MENTITY]
		for mpropdef in mpropdefs do
			for child in mpropdef.collect_parents(mainmodule, filter) do
				var mprop = child.mproperty
				if filter == null or filter.accept_mentity(mprop) then res.add mprop
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
	redef fun collect_parents(mainmodule, filter) do
		var res = new HashSet[MENTITY]
		var mpropdef = self
		while not mpropdef.is_intro do
			mpropdef = mpropdef.lookup_next_definition(mclassdef.mmodule, mclassdef.bound_mtype)
			res.add mpropdef
		end
		return res
	end

	# Collect all children definitions that directly depend on `self`
	redef fun collect_children(mainmodule, filter) do
		var res = new HashSet[MENTITY]
		for mpropdef in mproperty.collect_mpropdefs(filter) do
			if mpropdef.collect_parents(mainmodule, filter).has(self) then res.add mpropdef
		end
		return res
	end
end
