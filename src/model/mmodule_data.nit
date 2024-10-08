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

# Define and retrieve data in modules
# This module help analysis and tool to store piece of data in `MModule` then
# retrieve them through the importation relation.
module mmodule_data

import mmodule

# A map-like structure to associate `E` to` MModule`
# The advantage of this class is the various `lookup_*` method that
# allow to retrieve values trough the importation relation.
class MModuleData[E: Object]
	# The model associated with the data
	# Used to execute correclty mmodule-related operation
	var model: Model

	# is a value locally defined in `mmodule`
	fun has_mmodule(mmodule: MModule): Bool
	do
		return defs.has_key(mmodule)
	end

	# The value locally defined in `mmodule`.
	# Return null if no value locally defined.
	fun [](mmodule: MModule): nullable E
	do
		return defs.get_or_null(mmodule)
	end

	# Set the value locally defined in `mmodule`.
	# Gining `null` just undefine the value
	fun []=(mmodule: MModule, value: nullable E)
	do
		if value == null then
			defs.keys.remove(mmodule)
		else
			defs[mmodule] = value
		end
	end

	private var defs = new HashMap[MModule, E]

	# Return all the super modules that defines a value
	# `min_visibility` is used to filter modules by their visibility in `mmodule`.
	fun lookup_all_modules(mmodule: MModule, min_visibility: MVisibility): Sequence[MModule]
	do
		var res = new Array[MModule]
		for m in mmodule.in_importation.greaters do
			if mmodule.visibility_for(m) < min_visibility then continue
			if self.defs.has_key(m) then res.add(m)
		end
		return res
	end

	# Return all the values defined in `mmodule` and its imported modules.
	# `min_visibility` is used to filter modules by their visibility in `mmodule`.
	# This method could be usefull to check possible static conflicts.
	fun lookup_all_values(mmodule: MModule, min_visibility: MVisibility): Sequence[E]
	do
		var mmodules = lookup_all_modules(mmodule, min_visibility)
		mmodules = model.mmodule_importation_hierarchy.linearize(mmodules)
		var res = new Array[E]
		for m in mmodules do res.add defs[m]
		return res
	end

	# Return the most specific values defined in `mmodule` and its imported modules.
	# `min_visibility_` is used to filter modules by their visibility in `mmodule`.
	# Unlike `lookup_all_values`, redefined values are hidden,
	# However, in case of conflit, all conflicting definitions are returned
	fun lookup_values(mmodule: MModule, min_visibility: MVisibility): Sequence[E]
	do
		var mmodules = lookup_all_modules(mmodule, min_visibility)
		mmodules = model.mmodule_importation_hierarchy.select_smallest(mmodules)
		var res = new Array[E]
		for m in mmodules do res.add defs[m]
		return res
	end

	# Return the most specific values defined in `mmodule` and its imported modules.
	# Unlike `lookup_values`, only the most specific value, according to importation, is returned.
	fun lookup_first_value(mmodule: MModule, min_visibility: MVisibility): nullable E
	do
		var mmodules = lookup_all_modules(mmodule, min_visibility)
		if mmodules.is_empty then return null
		mmodules = model.mmodule_importation_hierarchy.linearize(mmodules)
		return defs[mmodules.last]
	end
end

# A `MModuleData` where multiples values could be set on a single module
# a-la `MultiHashMap`
class MModuleMultiData[E]
	super MModuleData[Array[E]]

	# Instead of `null` return an empty array usable
	redef fun [](mmodule)
	do
		var res = super
		if res == null then
			res = new Array[E]
			defs[mmodule] = res
		end
		return res
	end

	# like `lookup_all_values` but return a big concatenated sequence (instead of a sequence of array)
	fun lookup_joined_values(mmodule: MModule, min_visibility: MVisibility): Sequence[E]
	do
		var mmodules = lookup_all_modules(mmodule, min_visibility)
		mmodules = model.mmodule_importation_hierarchy.linearize(mmodules)
		var res = new Array[E]
		for m in mmodules do res.add_all defs[m]
		return res
	end
end
