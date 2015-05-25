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
# It shoul not be used for compiling stuffs like computing VFT, where the listed
# entities could not be reachable depending on the modules really imported.
module model_collect

import model

redef class MModule

	# Collect mclassdefs introduced in `self` with `visibility >= to min_visibility`.
	fun collect_intro_mclassdefs(min_visibility: MVisibility): Set[MClassDef] do
		var res = new HashSet[MClassDef]
		for mclassdef in mclassdefs do
			if not mclassdef.is_intro then continue
			if mclassdef.mclass.visibility < min_visibility then continue
			res.add mclassdef
		end
		return res
	end

	# Collect mclassdefs redefined in `self` with `visibility >= to min_visibility`.
	fun collect_redef_mclassdefs(min_visibility: MVisibility): Set[MClassDef] do
		var res = new HashSet[MClassDef]
		for mclassdef in mclassdefs do
			if mclassdef.is_intro then continue
			if mclassdef.mclass.visibility < min_visibility then continue
			res.add mclassdef
		end
		return res
	end

	# Collect mclasses introduced in `self` with `visibility >= to min_visibility`.
	fun collect_intro_mclasses(min_visibility: MVisibility): Set[MClass] do
		var res = new HashSet[MClass]
		for mclass in intro_mclasses do
			if mclass.visibility < min_visibility then continue
			res.add mclass
		end
		return res
	end

	# Collect mclasses redefined in `self` with `visibility >= to min_visibility`.
	fun collect_redef_mclasses(min_visibility: MVisibility): Set[MClass] do
		var mclasses = new HashSet[MClass]
		for c in mclassdefs do
			if c.mclass.visibility < min_visibility then continue
			if not c.is_intro then mclasses.add(c.mclass)
		end
		return mclasses
	end
end

redef class MClass

	# Collect direct parents of `self` with `visibility >= to min_visibility`.
	fun collect_parents(min_visibility: MVisibility): Set[MClass] do
		var res = new HashSet[MClass]
		for mclassdef in mclassdefs do
			for mclasstype in mclassdef.supertypes do
				var mclass = mclasstype.mclass
				if mclass.visibility < min_visibility then continue
				res.add(mclass)
			end
		end
		return res
	end

	# Collect all ancestors of `self` with `visibility >= to min_visibility`.
	fun collect_ancestors(min_visibility: MVisibility): Set[MClass] do
		var res = new HashSet[MClass]
		for mclassdef in self.mclassdefs do
			for super_mclassdef in mclassdef.in_hierarchy.greaters do
				if super_mclassdef == mclassdef then continue  # skip self
				var mclass = super_mclassdef.mclass
				if mclass.visibility < min_visibility then continue
				res.add(mclass)
			end
		end
		return res
	end

	# Collect direct children of `self` with `visibility >= to min_visibility`.
	fun collect_children(min_visibility: MVisibility): Set[MClass] do
		var res = new HashSet[MClass]
		for mclassdef in self.mclassdefs do
			for sub_mclassdef in mclassdef.in_hierarchy.direct_smallers do
				if sub_mclassdef == mclassdef then continue  # skip self
				var mclass = sub_mclassdef.mclass
				if mclass.visibility < min_visibility then continue
				res.add(mclass)
			end
		end
		return res
	end

	# Collect all descendants of `self` with `visibility >= to min_visibility`.
	fun descendants(min_visibility: MVisibility): Set[MClass] do
		var res = new HashSet[MClass]
		for mclassdef in self.mclassdefs do
			for sub_mclassdef in mclassdef.in_hierarchy.smallers do
				if sub_mclassdef == mclassdef then continue  # skip self
				var mclass = sub_mclassdef.mclass
				if mclass.visibility < min_visibility then continue
				res.add(mclass)
			end
		end
		return res
	end

	# Collect all mproperties introduced in 'self' with `visibility >= min_visibility`.
	fun collect_intro_mproperties(min_visibility: MVisibility): Set[MProperty] do
		var set = new HashSet[MProperty]
		for mclassdef in mclassdefs do
			for mprop in mclassdef.intro_mproperties do
				if mprop.visibility < min_visibility then continue
				set.add(mprop)
			end
		end
		return set
	end

	# Collect all mproperties redefined in 'self' with `visibility >= min_visibility`.
	fun collect_redef_mproperties(min_visibility: MVisibility): Set[MProperty] do
		var set = new HashSet[MProperty]
		for mclassdef in mclassdefs do
			for mpropdef in mclassdef.mpropdefs do
				if mpropdef.mproperty.visibility < min_visibility then continue
				if mpropdef.mproperty.intro_mclassdef.mclass != self then set.add(mpropdef.mproperty)
			end
		end
		return set
	end

	# Collect mproperties introduced and redefined in 'self' with `visibility >= min_visibility`.
	fun collect_local_mproperties(min_visibility: MVisibility): Set[MProperty] do
		var set = new HashSet[MProperty]
		set.add_all collect_intro_mproperties(min_visibility)
		set.add_all collect_redef_mproperties(min_visibility)
		return set
	end

	# Collect all mproperties inehrited by 'self' with `visibility >= min_visibility`.
	fun collect_inherited_mproperties(min_visibility: MVisibility): Set[MProperty] do
		var set = new HashSet[MProperty]
		for parent in collect_parents(min_visibility) do
			set.add_all(parent.collect_intro_mproperties(min_visibility))
			set.add_all(parent.collect_inherited_mproperties(min_visibility))
		end
		return set
	end

	# Collect all mproperties accessible by 'self' with `visibility >= min_visibility`.
	#
	# This include introduced, redefined, inherited mproperties.
	fun collect_accessible_mproperties(min_visibility: MVisibility): Set[MProperty] do
		var set = new HashSet[MProperty]
		set.add_all(collect_intro_mproperties(min_visibility))
		set.add_all(collect_redef_mproperties(min_visibility))
		set.add_all(collect_inherited_mproperties(min_visibility))
		return set
	end

	# Collect mmethods introduced in 'self' with `visibility >= min_visibility`.
	fun collect_intro_mmethods(min_visibility: MVisibility): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_intro_mproperties(min_visibility) do
			if mproperty isa MMethod then res.add(mproperty)
		end
		return res
	end

	# Collect mmethods redefined in 'self' with `visibility >= min_visibility`.
	fun collect_redef_mmethods(min_visibility: MVisibility): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_redef_mproperties(min_visibility) do
			if mproperty isa MMethod then res.add(mproperty)
		end
		return res
	end

	# Collect mmethods introduced and redefined in 'self' with `visibility >= min_visibility`.
	fun collect_local_mmethods(min_visibility: MVisibility): Set[MMethod] do
		var set = new HashSet[MMethod]
		set.add_all collect_intro_mmethods(min_visibility)
		set.add_all collect_redef_mmethods(min_visibility)
		return set
	end

	# Collect mattributes introduced in 'self' with `visibility >= min_visibility`.
	fun collect_intro_mattributes(min_visibility: MVisibility): Set[MAttribute] do
		var res = new HashSet[MAttribute]
		for mproperty in collect_intro_mproperties(min_visibility) do
			if mproperty isa MAttribute then res.add(mproperty)
		end
		return res
	end

	# Collect mattributes redefined in 'self' with `visibility >= min_visibility`.
	fun collect_redef_mattributes(min_visibility: MVisibility): Set[MAttribute] do
		var res = new HashSet[MAttribute]
		for mproperty in collect_redef_mproperties(min_visibility) do
			if mproperty isa MAttribute then res.add(mproperty)
		end
		return res
	end

	# Collect mattributes introduced and redefined in 'self' with `visibility >= min_visibility`.
	fun collect_local_mattributes(min_visibility: MVisibility): Set[MAttribute] do
		var set = new HashSet[MAttribute]
		set.add_all collect_intro_mattributes(min_visibility)
		set.add_all collect_redef_mattributes(min_visibility)
		return set
	end

	# Collect mattributes inherited by 'self' with `visibility >= min_visibility`.
	fun collect_inherited_mattributes(min_visibility: MVisibility): Set[MAttribute] do
		var res = new HashSet[MAttribute]
		for mproperty in collect_inherited_mproperties(min_visibility) do
			if mproperty isa MAttribute then res.add(mproperty)
		end
		return res
	end

	# Collect all mattributes accessible by 'self' with `visibility >= min_visibility`.
	#
	# This include introduced, redefined, inherited mattributes.
	fun collect_accessible_mattributes(min_visibility: MVisibility): Set[MAttribute] do
		var set = new HashSet[MAttribute]
		set.add_all(collect_intro_mattributes(min_visibility))
		set.add_all(collect_redef_mattributes(min_visibility))
		set.add_all(collect_inherited_mattributes(min_visibility))
		return set
	end
end

redef class MClassDef
	# Collect mpropdefs in 'self' with `visibility >= min_visibility`.
	fun collect_mpropdefs(min_visibility: MVisibility): Set[MPropDef] do
		var res = new HashSet[MPropDef]
		for mpropdef in mpropdefs do
			if mpropdef.mproperty.visibility < min_visibility then continue
			res.add mpropdef
		end
		return res
	end

	# Collect mpropdefs introduced in 'self' with `visibility >= min_visibility`.
	fun collect_intro_mpropdefs(min_visibility: MVisibility): Set[MPropDef] do
		var res = new HashSet[MPropDef]
		for mpropdef in mpropdefs do
			if not mpropdef.is_intro then continue
			if mpropdef.mproperty.visibility < min_visibility then continue
			res.add mpropdef
		end
		return res
	end

	# Collect mpropdefs redefined in 'self' with `visibility >= min_visibility`.
	fun collect_redef_mpropdefs(min_visibility: MVisibility): Set[MPropDef] do
		var res = new HashSet[MPropDef]
		for mpropdef in mpropdefs do
			if mpropdef.is_intro then continue
			if mpropdef.mproperty.visibility < min_visibility then continue
			res.add mpropdef
		end
		return res
	end

	# Collect modifiers like redef, private etc.
	fun collect_modifiers: Array[String] do
		var res = new Array[String]
		if not is_intro then
			res.add "redef"
		else
			res.add mclass.visibility.to_s
		end
		res.add mclass.kind.to_s
		return res
	end
end

redef class MPropDef
	# Collect modifiers like redef, private, abstract, intern, fun etc.
	fun collect_modifiers: Array[String] do
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
