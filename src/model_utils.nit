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

# Model exploration and traversing facilities
module model_utils

import model

redef class MConcern

	# Boost a MConcern rank
	# see: `MConcernRankSorter`
	# Use a positive booster to push down a result in the list
	# A negative booster can be used to push up the result
	var booster_rank: Int writable = 0

	# Concern ranking used for ordering
	# see: `MConcernRankSorter`
	# Rank can be positive or negative
	fun concern_rank: Int is abstract
end

redef class MProject
	redef fun concern_rank is cached do
		var max = 0
		for mgroup in mgroups do
			var mmax = mgroup.concern_rank
			if mmax > max then max = mmax
		end
		return max + 1
	end
end

redef class MGroup
	fun in_nesting_intro_mclasses(min_visibility: MVisibility): Set[MClass] do
		var res = new HashSet[MClass]
		var lst = in_nesting.direct_smallers
		for mmodule in mmodules do res.add_all mmodule.filter_intro_mclasses(min_visibility)
		for mgrp in lst do res.add_all mgrp.in_nesting_intro_mclasses(min_visibility)
		return res
	end

	fun in_nesting_redef_mclasses(min_visibility: MVisibility): Set[MClass] do
		var res = new HashSet[MClass]
		var lst = in_nesting.direct_smallers
		for mmodule in mmodules do res.add_all mmodule.filter_redef_mclasses(min_visibility)
		for mgrp in lst do res.add_all mgrp.in_nesting_redef_mclasses(min_visibility)
		return res
	end

	fun in_nesting_intro_mclassdefs(min_visibility: MVisibility): Set[MClassDef] do
		var res = new HashSet[MClassDef]
		var lst = in_nesting.direct_smallers
		for mmodule in mmodules do res.add_all mmodule.intro_mclassdefs(min_visibility)
		for mgrp in lst do res.add_all mgrp.in_nesting_intro_mclassdefs(min_visibility)
		return res
	end

	fun in_nesting_redef_mclassdefs(min_visibility: MVisibility): Set[MClassDef] do
		var res = new HashSet[MClassDef]
		var lst = in_nesting.direct_smallers
		for mmodule in mmodules do res.add_all mmodule.redef_mclassdefs(min_visibility)
		for mgrp in lst do res.add_all mgrp.in_nesting_redef_mclassdefs(min_visibility)
		return res
	end

	# Collect nested modules
	fun collect_mmodules: Set[MModule] do
		var res = new HashSet[MModule]
		res.add_all mmodules
		for mgroup in in_nesting.direct_smallers do
			res.add_all mgroup.collect_mmodules
		end
		return res
	end

	redef fun concern_rank is cached do
		var max = 0
		for mmodule in collect_mmodules do
			var mmax = mmodule.concern_rank
			if mmax > max then max = mmax
		end
		return max + 1
	end
end

redef class MModule

	# The list of intro mclassdef in the module.
	# with visibility >= to min_visibility
	fun intro_mclassdefs(min_visibility: MVisibility): Set[MClassDef] do
		var res = new HashSet[MClassDef]
		for mclassdef in mclassdefs do
			if not mclassdef.is_intro then continue
			if mclassdef.mclass.visibility < min_visibility then continue
			res.add mclassdef
		end
		return res
	end

	# The list of redef mclassdef in the module.
	# with visibility >= to min_visibility
	fun redef_mclassdefs(min_visibility: MVisibility): Set[MClassDef] do
		var res = new HashSet[MClassDef]
		for mclassdef in mclassdefs do
			if mclassdef.is_intro then continue
			if mclassdef.mclass.visibility < min_visibility then continue
			res.add mclassdef
		end
		return res
	end

	# The list of intro mclass in the module.
	# with visibility >= to min_visibility
	fun filter_intro_mclasses(min_visibility: MVisibility): Set[MClass] do
		var res = new HashSet[MClass]
		for mclass in intro_mclasses do
			if mclass.visibility < min_visibility then continue
			res.add mclass
		end
		return res
	end

	# Get the list of mclasses refined in 'self'.
	fun redef_mclasses: Set[MClass] do
		var mclasses = new HashSet[MClass]
		for c in mclassdefs do
			if not c.is_intro then mclasses.add(c.mclass)
		end
		return mclasses
	end

	# Get the list of mclasses refined in 'self'.
	fun filter_redef_mclasses(min_visibility: MVisibility): Set[MClass] do
		var mclasses = new HashSet[MClass]
		for c in mclassdefs do
			if c.mclass.visibility < min_visibility then continue
			if not c.is_intro then mclasses.add(c.mclass)
		end
		return mclasses
	end

	# Get the list of all mclasses imported by 'self'.
	fun imported_mclasses: Set[MClass] do
		var mclasses = new HashSet[MClass]
		for m in in_importation.greaters do
			if m == self then continue
			for c in m.mclassdefs do mclasses.add(c.mclass)
		end
		return mclasses
	end

	fun in_nesting_intro_mclasses(min_visibility: MVisibility): Set[MClass] do
		var res = new HashSet[MClass]
		for mmodule in in_nesting.greaters do
			for mclass in mmodule.filter_intro_mclasses(min_visibility) do
				if mclass.visibility < min_visibility then continue
				res.add mclass
			end
		end
		return res
	end

	fun in_nesting_redef_mclasses(min_visibility: MVisibility): Set[MClass] do
		var res = new HashSet[MClass]
		for mmodule in self.in_nesting.greaters do
			for mclass in mmodule.filter_redef_mclasses(min_visibility) do
				if mclass.visibility < min_visibility then continue
				res.add mclass
			end
		end
		return res
	end

	fun in_nesting_intro_mclassdefs(min_visibility: MVisibility): Set[MClassDef] do
		var res = new HashSet[MClassDef]
		for mmodule in in_nesting.greaters do
			res.add_all mmodule.intro_mclassdefs(min_visibility)
		end
		return res
	end

	fun in_nesting_redef_mclassdefs(min_visibility: MVisibility): Set[MClassDef] do
		var res = new HashSet[MClassDef]
		for mmodule in self.in_nesting.greaters do
			res.add_all mmodule.redef_mclassdefs(min_visibility)
		end
		return res
	end

	redef fun concern_rank is cached do
		var max = 0
		for p in in_importation.direct_greaters do
			var pmax = p.concern_rank
			if pmax > max then max = pmax
		end
		return max + 1
	end
end

redef class MClass

	# Get the public owner of 'self'.
	fun public_owner: MModule do
		var public_owner = self.intro_mmodule.public_owner
		if public_owner == null then
			return self.intro_mmodule
		else
			return public_owner
		end
	end

	# Get direct parents of 'self'.
	fun parents: Set[MClass] do
		var ret = new HashSet[MClass]
		for mclassdef in mclassdefs do
			for mclasstype in mclassdef.supertypes do
				ret.add(mclasstype.mclass)
			end
		end
		return ret
	end

	# Get all ancestors of 'self'.
	fun ancestors: Set[MClass] do
		var lst = new HashSet[MClass]
		for mclassdef in self.mclassdefs do
			for super_mclassdef in mclassdef.in_hierarchy.greaters do
				if super_mclassdef == mclassdef then continue  # skip self
				lst.add(super_mclassdef.mclass)
			end
		end
		return lst
	end

	# Get direct children of 'self'.
	fun children: Set[MClass] do
		var lst = new HashSet[MClass]
		for mclassdef in self.mclassdefs do
			for sub_mclassdef in mclassdef.in_hierarchy.direct_smallers do
				if sub_mclassdef == mclassdef then continue  # skip self
				lst.add(sub_mclassdef.mclass)
			end
		end
		return lst
	end

	# Get all children of 'self'.
	fun descendants: Set[MClass] do
		var lst = new HashSet[MClass]
		for mclassdef in self.mclassdefs do
			for sub_mclassdef in mclassdef.in_hierarchy.smallers do
				if sub_mclassdef == mclassdef then continue  # skip self
				lst.add(sub_mclassdef.mclass)
			end
		end
		return lst
	end

	# Get the list of constructors available for 'self'.
	fun constructors: Set[MMethod] do
		var res = new HashSet[MMethod]
		for mclassdef in mclassdefs do
			for mpropdef in mclassdef.mpropdefs do
				if mpropdef isa MMethodDef then
					if mpropdef.mproperty.is_init then res.add(mpropdef.mproperty)
				end
			end
		end
		return res
	end

	# Get the list of methods introduced in 'self'.
	fun intro_methods: Set[MMethod] do
		var res = new HashSet[MMethod]
		for mclassdef in mclassdefs do
			for mpropdef in mclassdef.mpropdefs do
				if mpropdef isa MMethodDef then
					if mpropdef.is_intro and not mpropdef.mproperty.is_init then res.add(mpropdef.mproperty)
				end
			end
		end
		return res
	end

	# the set of properties introduced in 'self'.
	fun intro_mproperties(min_visibility: MVisibility): Set[MProperty] do
		var set = new HashSet[MProperty]
		for mclassdef in mclassdefs do
			for mprop in mclassdef.intro_mproperties do
				if mprop.visibility < min_visibility then continue
				set.add(mprop)
			end
		end
		return set
	end

	fun intro_mpropdefs(min_visibility: MVisibility): Set[MPropDef] do
		var set = new HashSet[MPropDef]
		for mclassdef in mclassdefs do
			for mpropdef in mclassdef.mpropdefs do
				if not mpropdef.is_intro then continue
				if mpropdef.mproperty.visibility < min_visibility then continue
				set.add(mpropdef)
			end
		end
		return set
	end

	# the set of locally refined properties in 'self'.
	fun redef_mproperties(min_visibility: MVisibility): Set[MProperty] do
		var set = new HashSet[MProperty]
		for mclassdef in mclassdefs do
			for mpropdef in mclassdef.mpropdefs do
				if mpropdef.mproperty.visibility < min_visibility then continue
				if mpropdef.mproperty.intro_mclassdef.mclass != self then set.add(mpropdef.mproperty)
			end
		end
		return set
	end

	fun redef_mpropdefs(min_visibility: MVisibility): Set[MPropDef] do
		var set = new HashSet[MPropDef]
		for mclassdef in mclassdefs do
			for mpropdef in mclassdef.mpropdefs do
				if mpropdef.is_intro then continue
				if mpropdef.mproperty.visibility < min_visibility then continue
				set.add(mpropdef)
			end
		end
		return set
	end

	# the set of methods inherited by 'self'.
	fun inherited_mproperties(mainmodule: MModule, min_visibility: MVisibility): Set[MProperty] do
		var set = new HashSet[MProperty]
		for parent in in_hierarchy(mainmodule).direct_greaters do
			set.add_all(parent.intro_mproperties(min_visibility))
			set.add_all(parent.inherited_mproperties(mainmodule, min_visibility))
		end
		return set
	end

	# the set of introduced and redefined mproperties
	fun local_mproperties(min_visibility: MVisibility): Set[MProperty] do
		var set = new HashSet[MProperty]
		set.add_all(intro_mproperties(min_visibility))
		set.add_all(redef_mproperties(min_visibility))
		return set
	end

	# the set of all accessible mproperties for this class
	fun all_mproperties(mainmodule: MModule, min_visibility: MVisibility): Set[MProperty] do
		var set = new HashSet[MProperty]
		set.add_all(local_mproperties(min_visibility))
		set.add_all(inherited_mproperties(mainmodule, min_visibility))
		return set
	end

	# the set of all accessible mattributes for this class
	fun all_mattributes(mainmodule: MModule, min_visibility: MVisibility): Set[MAttribute] do
		var set = new HashSet[MAttribute]
		for mprop in all_mproperties(mainmodule, min_visibility) do
			if mprop isa MAttribute then set.add(mprop)
		end
		return set
	end

	# Get the list of locally refined methods in 'self'.
	fun redef_methods: Set[MMethod] do
		var res = new HashSet[MMethod]
		for mclassdef in mclassdefs do
			for mpropdef in mclassdef.mpropdefs do
				if mpropdef isa MMethodDef then
					if not mpropdef.is_intro and not mpropdef.mproperty.is_init then res.add(mpropdef.mproperty)
				end
			end
		end
		return res
	end

	fun inherited_methods: Set[MMethod] do
		var res = new HashSet[MMethod]
		for s in ancestors do
			for m in s.intro_methods do
				if not self.intro_methods.has(m) and not self.redef_methods.has(m) then res.add(m)
			end
		end
		return res
	end

	# Get the list of all virtual types available in 'self'.
	fun virtual_types: Set[MVirtualTypeProp] do
		var res = new HashSet[MVirtualTypeProp]
		for mclassdef in mclassdefs do
			for mpropdef in mclassdef.mpropdefs do
				if mpropdef isa MVirtualTypeDef then
					res.add(mpropdef.mproperty)
				end
			end
		end
		for ancestor in ancestors do
			for mclassdef in ancestor.mclassdefs do
				for mpropdef in mclassdef.mpropdefs do
					if mpropdef isa MVirtualTypeDef then
						res.add(mpropdef.mproperty)
					end
				end
			end
		end
		return res
	end

	# Get the list of all parameter types in 'self'.
	fun parameter_types: Map[String, MType] do
		var res = new HashMap[String, MType]
		for i in [0..intro.parameter_names.length[ do
			res[intro.parameter_names[i]] = intro.bound_mtype.arguments[i]
		end
		return res
	end

	fun is_class: Bool do
		return self.kind == concrete_kind or self.kind == abstract_kind
	end

	fun is_interface: Bool do
		return self.kind == interface_kind
	end

	fun is_enum: Bool do
		return self.kind == enum_kind
	end

	fun is_abstract: Bool do
		return self.kind == abstract_kind
	end
end

redef class MAttribute
	# Is this attribute nullable for sure?
	#
	# This mean that its introduction is declarred with a nullable static type
	# since attributes are invariant this will work on most cases
	# attributes with static type anchored with a virtual type are not "nullable for-sure"
	# because this type can be redefined in subclasses
	fun is_nullable: Bool do return intro.static_mtype isa MNullableType
end

redef class MClassDef
	# modifiers are keywords like redef, private etc.
	fun modifiers: Array[String] do
		var res = new Array[String]
		if not is_intro then
			res.add "redef"
		else
			res.add mclass.visibility.to_s
		end
		res.add mclass.kind.to_s
		return res
	end

	fun collect_mpropdefs(min_visibility: MVisibility): Set[MPropDef] do
		var res = new HashSet[MPropDef]
		for mpropdef in mpropdefs do
			if mpropdef.mproperty.visibility < min_visibility then continue
			res.add mpropdef
		end
		return res
	end

	fun collect_intro_mpropdefs(min_visibility: MVisibility): Set[MPropDef] do
		var res = new HashSet[MPropDef]
		for mpropdef in mpropdefs do
			if not mpropdef.is_intro then continue
			if mpropdef.mproperty.visibility < min_visibility then continue
			res.add mpropdef
		end
		return res
	end

	fun collect_redef_mpropdefs(min_visibility: MVisibility): Set[MPropDef] do
		var res = new HashSet[MPropDef]
		for mpropdef in mpropdefs do
			if mpropdef.is_intro then continue
			if mpropdef.mproperty.visibility < min_visibility then continue
			res.add mpropdef
		end
		return res
	end
end

redef class MPropDef
	# modifiers are keywords like redef, private etc.
	fun modifiers: Array[String] do
		var res = new Array[String]
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
		end
		return res
	end
end

# Sorters

# Sort mentities by their name
class MEntityNameSorter
	super AbstractSorter[MEntity]
	redef fun compare(a, b) do return a.name <=> b.name
	init do end
end

# Sort MConcerns based on the module importation hierarchy ranking
# see also: `MConcern::concern_rank` and `MConcern::booster_rank`
#
# Comparison is made with the formula:
#
#     a.concern_rank + a.booster_rank <=> b.concern_rank + b.booster_ran
#
# If both `a` and `b` have the same ranking,
# ordering is based on lexicographic comparison of `a.name` and `b.name`
class MConcernRankSorter
	super AbstractSorter[MConcern]

	init do end

	redef fun compare(a, b) do
		if a.concern_rank == b.concern_rank then
			return a.name <=> b.name
		end
		return a.concern_rank + a.booster_rank <=> b.concern_rank + b.booster_rank
	end
end
