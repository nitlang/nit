# This file is part of NIT ( https://nitlanguage.org ).
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
# NOTE: `frontend` is sufficent in most cases (it is often too much)
import frontend
import model_collect

redef class MClassDef
	# Collect all mproperties introduced in 'self' with `visibility >= min_visibility`.
	fun collect_intro_mproperties(filter: ModelFilter): Set[MProperty] do
		var set = new HashSet[MProperty]
			for mprop in self.intro_mproperties do
				if not filter.accept_mentity(mprop) then continue
				set.add(mprop)
			end
		return set
	end

	# Collect mmethods introduced in 'self' with `visibility >= min_visibility`.
	fun collect_intro_mmethods(filter: ModelFilter): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_intro_mproperties(filter) do
			if not filter.accept_mentity(mproperty) then continue
			if mproperty isa MMethod then res.add(mproperty)
		end
		return res
	end

	# Collect mmethods redefined in 'self' with `visibility >= min_visibility`.
	fun collect_redef_mmethods(filter: ModelFilter): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_redef_mproperties(filter) do
			if not filter.accept_mentity(mproperty) then continue
			if mproperty isa MMethod then res.add(mproperty)
		end
		return res
	end

	# Collect mattributes redefined in 'self' with `visibility >= min_visibility`.
	fun collect_redef_mattributes(filter: ModelFilter): Set[MAttribute] do
		var res = new HashSet[MAttribute]
		for mproperty in collect_redef_mproperties(filter) do
			if not filter.accept_mentity(mproperty) then continue
			if mproperty isa MAttribute then res.add(mproperty)
		end
		return res
	end

	# Collect mattributes introduced in 'self' with `visibility >= min_visibility`.
	fun collect_intro_mattributes(filter: ModelFilter): Set[MAttribute] do
		var res = new HashSet[MAttribute]
		for mproperty in collect_intro_mproperties(filter) do
			if not filter.accept_mentity(mproperty) then continue
			if mproperty isa MAttribute then res.add(mproperty)
		end
		return res
	end

	# Collect all mproperties redefined in 'self' with `visibility >= min_visibility`.
	fun collect_redef_mproperties(filter: ModelFilter): Set[MProperty] do
		var set = new HashSet[MProperty]
		for mpropdef in self.mpropdefs do
			if not filter.accept_mentity(mpropdef) then continue
			if mpropdef.mproperty.intro_mclassdef.mclass == self then continue
				set.add(mpropdef.mproperty)
			end
		return set
	end

	# Collect mmethods inherited by 'self' if accepted by `filter`.
	fun collect_inherited_mmethods(mainmodule: MModule, filter: ModelFilter): Set[MMethod] do
		var res = new HashSet[MMethod]
		for mproperty in collect_inherited_mproperties(mainmodule, filter) do
			if not filter.accept_mentity(mproperty) then continue
			if mproperty isa MMethod then res.add(mproperty)
		end
		return res
	end

	# Collect mproperties introduced and redefined in 'self' with `visibility >= min_visibility`.
	fun collect_local_mproperties(filter: ModelFilter): Set[MProperty] do
		var set = new HashSet[MProperty]
		set.add_all collect_intro_mproperties(filter)
		set.add_all collect_redef_mproperties(filter)
		return set
	end

	# Collect all mproperties inehrited by 'self' with `visibility >= min_visibility`.
	fun collect_inherited_mproperties(mainmodule: MModule, filter: ModelFilter): Set[MProperty] do
		var set = new HashSet[MProperty]
		for parent in collect_parents(mainmodule, filter) do
			set.add_all(parent.collect_intro_mproperties(filter))
			set.add_all(parent.collect_inherited_mproperties(mainmodule, filter))
		end
		return set
	end

	# Collect mattributes inherited by 'self' with `visibility >= min_visibility`.
	fun collect_inherited_mattributes(mainmodule: MModule, filter: ModelFilter): Set[MAttribute] do
		var res = new HashSet[MAttribute]
		for mproperty in collect_inherited_mproperties(mainmodule, filter) do
			if not filter.accept_mentity(mproperty) then continue
			if mproperty isa MAttribute then res.add(mproperty)
		end
		return res
	end

	# Collect all mmethod inehrited,intro and redef
	fun collect_all_methods(mainmodule: MModule, filter: ModelFilter): Set[MMethod] do
		var set = new HashSet[MMethod]
		set.add_all collect_intro_mmethods(filter)
		set.add_all collect_redef_mmethods(filter)
		set.add_all collect_inherited_mmethods(mainmodule, filter)
		return set
	end

	# Collect all mattributs inehrited,intro and redef
	fun collect_all_mattributes(mainmodule: MModule, filter: ModelFilter): Set[MAttribute] do
		var set = new HashSet[MAttribute]
		set.add_all collect_redef_mattributes(filter)
		set.add_all collect_intro_mattributes(filter)
		set.add_all collect_inherited_mattributes(mainmodule, filter)
		return set
	end

	# Collect intro and redef mmethods
	fun collect_intro_and_redef_methods(filter: ModelFilter): Set[MMethod] do
		var set = new HashSet[MMethod]
		set.add_all collect_intro_mmethods(filter)
		set.add_all collect_redef_mmethods(filter)
		return set
	end

	# Collect intro and redef mattributs
	fun collect_intro_and_redef_mattributes(filter: ModelFilter): Set[MAttribute] do
		var set = new HashSet[MAttribute]
		set.add_all collect_redef_mattributes(filter)
		set.add_all collect_intro_mattributes(filter)
		return set
	end

	# Collect intro and redef mpropdefs
	fun collect_intro_and_redef_mpropdefs(filter: ModelFilter): Set[MPropDef] do
		var set = new HashSet[MPropDef]
		set.add_all collect_intro_mpropdefs(filter)
		set.add_all collect_redef_mpropdefs(filter)
		return set
	end

	# Collect intro abstract mmethodDef
	fun collect_abstract_methods(filter: ModelFilter): Set[MMethodDef] do
		var set = new HashSet[MMethodDef]
		var mpropdefs = collect_intro_mpropdefs(filter)
		for mpropdef in mpropdefs do
			if mpropdef isa MMethodDef then
				if mpropdef.is_abstract then set.add(mpropdef)
			end
		end
		return set
	end

	# Collect not defined properties
	fun collect_not_define_properties(filter: ModelFilter):Set[MMethodDef] do
		var set = new HashSet[MMethodDef]
		for mpropdef in collect_abstract_methods(filter) do
			var redef_count = 0
			for mprop in mpropdef.mproperty.mpropdefs do
				if mprop.is_abstract then continue
				redef_count += 1
			end
			if redef_count == 0 then set.add(mpropdef)
		end
		return set
	end
end
