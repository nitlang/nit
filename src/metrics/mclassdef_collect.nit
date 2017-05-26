# This file is part of NIT ( http://www.nitlanguage.org ).
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
# This module redef Mclassdef to add new collect methods.

module mclassdef_collect

# We usualy need specific phases
# NOTE: `frontend` is sufficent in most case (it is often too much)
import frontend
import model_views
import model_collect

redef class MClassDef
	# Collect all mproperties introduced in 'self' with `visibility >= min_visibility`.
	fun collect_intro_mproperties(view: ModelView): Set[MProperty] do
		var set = new HashSet[MProperty]
			for mprop in self.intro_mproperties do
				if not view.accept_mentity(mprop) then continue
				set.add(mprop)
			end
		return set
	end

	# Collect mmethods introduced in 'self' with `visibility >= min_visibility`.
	fun collect_intro_mmethods(view: ModelView): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_intro_mproperties(view) do
			if not view.accept_mentity(mproperty) then continue
			if mproperty isa MMethod then res.add(mproperty)
		end
		return res
	end

	# Collect mmethods redefined in 'self' with `visibility >= min_visibility`.
	fun collect_redef_mmethods(view: ModelView): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_redef_mproperties(view) do
			if not view.accept_mentity(mproperty) then continue
			if mproperty isa MMethod then res.add(mproperty)
		end
		return res
	end

	# Collect mattributes redefined in 'self' with `visibility >= min_visibility`.
	fun collect_redef_mattributes(view: ModelView): Set[MAttribute] do
		var res = new HashSet[MAttribute]
		for mproperty in collect_redef_mproperties(view) do
			if not view.accept_mentity(mproperty) then continue
			if mproperty isa MAttribute then res.add(mproperty)
		end
		return res
	end

	# Collect mattributes introduced in 'self' with `visibility >= min_visibility`.
	fun collect_intro_mattributes(view: ModelView): Set[MAttribute] do
		var res = new HashSet[MAttribute]
		for mproperty in collect_intro_mproperties(view) do
			if not view.accept_mentity(mproperty) then continue
			if mproperty isa MAttribute then res.add(mproperty)
		end
		return res
	end

	# Collect all mproperties redefined in 'self' with `visibility >= min_visibility`.
	fun collect_redef_mproperties(view: ModelView): Set[MProperty] do
		var set = new HashSet[MProperty]
		for mpropdef in self.mpropdefs do
			if not view.accept_mentity(mpropdef) then continue
			if mpropdef.mproperty.intro_mclassdef.mclass == self then continue
				set.add(mpropdef.mproperty)
			end
		return set
	end

	# Collect mmethods inherited by 'self' if accepted by `view`.
	fun collect_inherited_mmethods(view: ModelView): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_inherited_mproperties(view) do
			if not view.accept_mentity(mproperty) then continue
			if mproperty isa MMethod then res.add(mproperty)
		end
		return res
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

	# Collect mattributes inherited by 'self' with `visibility >= min_visibility`.
	fun collect_inherited_mattributes(view: ModelView): Set[MAttribute] do
		var res = new HashSet[MAttribute]
		for mproperty in collect_inherited_mproperties(view) do
			if not view.accept_mentity(mproperty) then continue
			if mproperty isa MAttribute then res.add(mproperty)
		end
		return res
	end

	fun collect_all_methods(view: ModelView): Set[MMethod] do
		var set = new HashSet[MMethod]
		set.add_all collect_intro_mmethods(view)
		set.add_all collect_redef_mmethods(view)
		set.add_all collect_inherited_mmethods(view)
		return set
	end

	fun collect_all_mattributes(view: ModelView): Set[MAttribute] do
		var set = new HashSet[MAttribute]
		set.add_all collect_redef_mattributes(view)
		set.add_all collect_intro_mattributes(view)
		set.add_all collect_inherited_mattributes(view)
		return set
	end

	fun collect_intro_and_redef_methods(view: ModelView): Set[MMethod] do
		var set = new HashSet[MMethod]
		set.add_all collect_intro_mmethods(view)
		set.add_all collect_redef_mmethods(view)
		return set
	end

	fun collect_intro_and_redef_mattributes(view: ModelView): Set[MAttribute] do
		var set = new HashSet[MAttribute]
		set.add_all collect_redef_mattributes(view)
		set.add_all collect_intro_mattributes(view)
		return set
	end

	fun collect_intro_and_redef_mproperties(view: ModelView): Set[MProperty] do
		var set = new HashSet[MProperty]
		set.add_all collect_redef_mproperties(view)
		set.add_all collect_intro_mproperties(view)
		return set
	end

	fun collect_intro_and_redef_mpropdefs(view: ModelView): Set[MPropDef] do
		var set = new HashSet[MPropDef]
		set.add_all collect_intro_mpropdefs(view)
		set.add_all collect_redef_mpropdefs(view)
		return set
	end
end
