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

import modelbuilder

redef class MModule
	# Get the list of mclasses refined in 'self'.
	fun redef_mclasses: Set[MClass] do
		var mclasses = new HashSet[MClass]
		for c in mclassdefs do
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


# Sorters

# Sort mmodules by their name
class MModuleNameSorter
	super AbstractSorter[MModule]
	redef fun compare(a, b) do return a.name <=> b.name
	init do end
end

# Sort mclasses by their name
class MClassNameSorter
	super AbstractSorter[MClass]
	redef fun compare(a, b) do return a.name <=> b.name
	init do end
end

# Sort mclassdefs by their name
class MClassDefNameSorter
	super AbstractSorter[MClassDef]
	redef fun compare(a, b) do return a.mclass.name <=> b.mclass.name
	init do end
end

# Sort mproperties by their name
class MPropertyNameSorter
	super AbstractSorter[MProperty]
	redef fun compare(a, b) do return a.name <=> b.name
	init do end
end

# Sort mpropdefs by their name
class MPropDefNameSorter
	super AbstractSorter[MPropDef]
	redef fun compare(a, b) do return a.mproperty.name <=> b.mproperty.name
	init do end
end
