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

import model_views

redef class MEntity

	# Collect modifier keywords like `redef`, `private` etc.
	fun collect_modifiers: Array[String] do
		return new Array[String]
	end
end

redef class MPackage
	redef fun collect_modifiers do
		var res = super
		res.add "package"
		return res
	end
end

redef class MGroup
	redef fun collect_modifiers do
		var res = super
		res.add "group"
		return res
	end
end

redef class MModule

	redef fun collect_modifiers do
		var res = super
		res.add "module"
		return res
	end

	# Collect all transitive imports.
	fun collect_ancestors(view: ModelView): Set[MModule] do
		var res = new HashSet[MModule]
		for mentity in in_importation.greaters do
			if mentity == self then continue
			if not view.accept_mentity(mentity) then continue
			res.add mentity
		end
		return res
	end

	# Collect direct imports.
	fun collect_parents(view: ModelView): Set[MModule] do
		var res = new HashSet[MModule]
		for mentity in in_importation.direct_greaters do
			if mentity == self then continue
			if not view.accept_mentity(mentity) then continue
			res.add mentity
		end
		return res
	end

	# Collect direct children (modules that directly import `self`).
	fun collect_children(view: ModelView): Set[MModule] do
		var res = new HashSet[MModule]
		for mentity in in_importation.direct_smallers do
			if mentity == self then continue
			if not view.accept_mentity(mentity) then continue
			res.add mentity
		end
		return res
	end

	# Collect all transitive children.
	fun collect_descendants(view: ModelView): Set[MModule] do
		var res = new HashSet[MModule]
		for mentity in in_importation.smallers do
			if mentity == self then continue
			if not view.accept_mentity(mentity) then continue
			res.add mentity
		end
		return res
	end

	# Build the importation poset for `self`
	fun importation_poset(view: ModelView): POSet[MModule] do
		var mmodules = new HashSet[MModule]
		mmodules.add self
		mmodules.add_all collect_ancestors(view)
		mmodules.add_all collect_parents(view)
		mmodules.add_all collect_children(view)
		mmodules.add_all collect_descendants(view)
		return view.mmodules_poset(mmodules)
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

	# Collect direct parents of `self` with `visibility >= to min_visibility`.
	fun collect_parents(view: ModelView): Set[MClass] do
		var res = new HashSet[MClass]
		for mclassdef in mclassdefs do
			for mclasstype in mclassdef.supertypes do
				var mclass = mclasstype.mclass
				if not view.accept_mentity(mclass) then continue
				res.add(mclass)
			end
		end
		return res
	end

	# Collect all ancestors of `self` with `visibility >= to min_visibility`.
	fun collect_ancestors(view: ModelView): Set[MClass] do
		var res = new HashSet[MClass]
		for mclassdef in self.mclassdefs do
			for super_mclassdef in mclassdef.in_hierarchy.greaters do
				if super_mclassdef == mclassdef then continue  # skip self
				var mclass = super_mclassdef.mclass
				if not view.accept_mentity(mclass) then continue
				res.add(mclass)
			end
		end
		return res
	end

	# Collect direct children of `self` with `visibility >= to min_visibility`.
	fun collect_children(view: ModelView): Set[MClass] do
		var res = new HashSet[MClass]
		for mclassdef in self.mclassdefs do
			for sub_mclassdef in mclassdef.in_hierarchy.direct_smallers do
				if sub_mclassdef == mclassdef then continue  # skip self
				var mclass = sub_mclassdef.mclass
				if not view.accept_mentity(mclass) then continue
				res.add(mclass)
			end
		end
		return res
	end

	# Collect all descendants of `self` with `visibility >= to min_visibility`.
	fun collect_descendants(view: ModelView): Set[MClass] do
		var res = new HashSet[MClass]
		for mclassdef in self.mclassdefs do
			for sub_mclassdef in mclassdef.in_hierarchy.smallers do
				if sub_mclassdef == mclassdef then continue  # skip self
				var mclass = sub_mclassdef.mclass
				if not view.accept_mentity(mclass) then continue
				res.add(mclass)
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
end
