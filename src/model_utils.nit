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

import toolcontext
import exprbuilder

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
			for c in m.mclassdefs do mclasses.add(c.mclass)
		end
		return mclasses
	end
end

redef class MClass

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

	# Get the list of methods inherited by 'self'.
	fun inherited_methods: Set[MMethod] do
		var res = new HashSet[MMethod]
		for s in ancestors do
			for m in s.intro_methods do
				if not self.intro_methods.has(m) and not self.redef_methods.has(m) then res.add(m)
			end
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
