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
module toc_gen_base

import model

# Give a weight to a concern
abstract class ConcernsWeighter

	# Already weighted entities.
	private var seen = new HashSet[MConcern]

	# Compute the weight of the concerns.
	#
	# The weight is calculated differently by all subclasses.
	fun weight_concern(mconcern: MConcern) do
		if seen.has(mconcern) then return
		if mconcern isa MPackage then
			weight_mpackage(mconcern)
		else if mconcern isa MGroup then
			weight_mgroup(mconcern)
		else if mconcern isa MModule then
			weight_mmodule(mconcern)
		else if mconcern isa MClass then
			weight_mclass(mconcern)
		else if mconcern isa MClassDef then
			weight_mclassdef(mconcern)
		else if mconcern isa MProperty then
			weight_mproperty(mconcern)
		else if mconcern isa MPropDef then
			weight_mpropdef(mconcern)
		end
		seen.add mconcern
	end

	# Weight a MPackage
	protected fun weight_mpackage(mpackage: MPackage) do end

	# Weight a MGroup
	protected fun weight_mgroup(mgroup: MGroup) do end

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

redef class ConcernsTree

	# Init `self` from a list of concerns.
	init from(concerns: Collection[MConcern]) do
		for concern in concerns do
			add_concern(concern)
		end
	end

	# Add a concern to the tree and all needed parents.
	fun add_concern(concern: MConcern) do
		var hierarchy = new Array[MConcern]
		var parent: nullable MConcern = concern
		while parent != null do
			hierarchy.add parent
			parent = parent.parent_concern
		end
		var prev = null
		for c in hierarchy.reversed do
			add(prev, c)
			prev = c
		end
	end

	# Already added concerns.
	private var seen = new HashSet[MConcern]

	# Do not add entry twice.
	redef fun add(p, e) do
		if seen.has(e) then return
		seen.add e
		super(p, e)
	end
end

# TODO Should be moved to doc_concerns?

# Introduce `weigth` concern in `Model`

# Concerns have a weith wich is used to order them.
redef class MConcern

	# The weight is an abstract representation of the importance of the concern
	# in terms of documentation.
	#
	# The weight can be calculated using different approaches.
	var weight = 0.0 is writable
end

# Make MClassdef and MPropdef compatible with ConcernsTree
# TODO should be moved to concerns_tree.

redef class MClassDef
	super MConcern

	redef var parent_concern is lazy do return mmodule
end

redef class MPropDef
	super MConcern

	redef var parent_concern is lazy do return mclassdef
end

# Comparator used to sort concerns by weight.
class MConcernComparator
	super Comparator

	redef type COMPARED: MConcern

	redef fun compare(a, b) do return a.weight <=> b.weight
end
