# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Base classes for TOC generation
module gen_order_base

import model

# Give a weight to a mentity
abstract class MEntityWeighter

	# Already weighted entities.
	private var seen = new HashSet[MEntity]

	# Compute the weight of the concerns.
	#
	# The weight is calculated differently by all subclasses.
	fun weight_mentity(mentity: MEntity) do
		if seen.has(mentity) then return
		if mentity isa MPackage then
			weight_mpackage(mentity)
		else if mentity isa MGroup then
			weight_mgroup(mentity)
		else if mentity isa MModule then
			weight_mmodule(mentity)
		else if mentity isa MClass then
			weight_mclass(mentity)
		else if mentity isa MClassDef then
			weight_mclassdef(mentity)
		else if mentity isa MProperty then
			weight_mproperty(mentity)
		else if mentity isa MPropDef then
			weight_mpropdef(mentity)
		end
		seen.add mentity
	end

	# Weight a MPackage
	protected fun weight_mpackage(mpackage: MPackage) do end

	# Weight a MGroup
	protected fun weight_mgroup(mgroup: MGroup) do
		var mmodule = mgroup.default_mmodule
		if mmodule == null then
			mgroup.weight = 0.0
		else
			weight_mmodule(mmodule)
			mgroup.weight = mmodule.weight
		end
	end

	# Weight a MModule
	protected fun weight_mmodule(mmodule: MModule) do end

	# Weight a MClass
	protected fun weight_mclass(mclass: MClass) do end

	# Weight a MClassDef
	protected fun weight_mclassdef(mclassdef: MClassDef) do end

	# Weight a MProperty
	protected fun weight_mproperty(mprop: MProperty) do end

	# Weight a MPropdef
	protected fun weight_mpropdef(mpropdef: MPropDef) do end
end

# MEntities have a weith wich is used to order them.
redef class MEntity

	# The weight is an abstract representation of the importance of the MEntity
	# in terms of documentation.
	#
	# The weight can be calculated using different approaches.
	var weight = 0.0 is writable
end

# Sort MEntities by weight.
class MEntityWeightComparator
	super Comparator

	redef type COMPARED: MEntity

	redef fun compare(a, b) do return b.weight <=> a.weight
end
