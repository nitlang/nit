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

module coloring

import poset

#TODO doc

# Colorize elements from a POSet
#
# see:
#	Ducournau, R. (2011).
#	Coloring, a versatile technique for implementing object-oriented languages.
#	Software: Practice and Experience, 41(6), 627–659.
class POSetColorer[E: Object]
	# Resulting ids
	# REQUIRE: call to colorize
	var ids = new HashMap[E, Int]
	# Resulting colors
	# REQUIRE: call to colorize
	var colors = new HashMap[E, Int]
	# REQUIRE: call to colorize
	var core = new HashSet[E]
	# REQUIRE: call to colorize
	var border = new HashSet[E]
	# REQUIRE: call to colorize
	var crown = new HashSet[E]
	# Conflict graph of the POSet
	# REQUIRE: call to colorize
	var conflicts = new HashMap[E, Set[E]]
	var poset: POSet[E]

	init do end

	# Start coloring on given POSet
	fun colorize(poset: POSet[E]) do
		self.poset = poset
		allocate_ids
		tag_elements
		compute_conflicts
		compute_colors
	end

	private fun allocate_ids do
		ids.clear
		var elements = new HashSet[E].from(poset.to_a)
		for e in poset.linearize(elements) do
			ids[e] = ids.length
		end
	end

	# Sort elements as core, border of crown
	private fun tag_elements do
		extract_core
		extract_border
		extract_crown
	end

	# Compute the set of elements forming the core of the poset hierarchy.
	#
	# The core is composed by:
	#	* classes that have mutiple direct parents
	#	* parents of classes that have multiple direct parents
	private fun extract_core do
		core.clear
		for e in ids.keys do
			if poset[e].direct_greaters.length > 1 then core.add_all(poset[e].greaters)
		end
	end

	# Compute the set of elements composing the border of the core
	#
	# We are looking for minimal elements of the core:
	#	* that have multiple direct parents
	#	* but whose subelements are all in single inheritance
	#
	# Elements belonging to the `border` are removed from the `core`
	private fun extract_border do
		border.clear
		for e in core do
			if has_children_in_multiple_inheritance(e) then continue
			border.add(e)
			core.remove(e)
		end
	end

	# Compute the set of elements belonging to the crown of the inheritance hierarchy.
	#
	# The crown is composed by the elements that are not part of the core nor the border
	# and are in single inheritance.
	private fun extract_crown do
		crown.clear
		for e in ids.keys do
			if not core.has(e) and not border.has(e) then crown.add(e)
		end
	end

	private fun has_children_in_multiple_inheritance(e: E): Bool do
		for sub in poset[e].smallers do
			if sub == e then continue
			if poset[sub].direct_greaters.length > 1 then return true
		end
		return false
	end

	# Check for conflict in the core.
	#
	# Elements X and Y are in conflict if either:
	#  * X and Y are the same element
	#  * Y is a subelement of X
	#  * X and Y have common sub elements
	private fun compute_conflicts do
		conflicts.clear
		for e in core do
			add_conflict(e, e) # X = Y
			for o in core do
				if o == e then continue
				if poset[o] < e then add_conflict(e, o) # Y <: X
				for so in poset[o].smallers do
					if so == o then continue
					if poset[e].smallers.has(so) then add_conflict(e, o) # common sub elements
				end
			end
		end
	end

	private fun add_conflict(e, o: E) do
		if not conflicts.has_key(e) then conflicts[e] = new HashSet[E]
		if not conflicts.has_key(o) then conflicts[o] = new HashSet[E]
		conflicts[e].add(o)
		conflicts[o].add(e)
	end

	# Colorize core, border and crown in that order
	private fun compute_colors do
		colors.clear
		colorize_core
		colorize_set(border)
		colorize_set(crown)
	end

	# Core elements cannot have the same color than:
	#  * one of their parents
	#  * one of their conflicting elements
	private fun colorize_core do
		for e in poset.linearize(core) do
			var color = min_color(e)
			while not is_color_free(color, conflicts[e]) do
				color += 1
			end
			colors[e] = color
		end
	end

	# Other elements inherit color fron their direct parents
	private fun colorize_set(set: Set[E]) do
		for e in poset.linearize(set) do colors[e] = min_color(e)
	end

	# Get the next minimal color from direct parents
	private fun min_color(e: E): Int do
		var max_color = -1
		for p in poset[e].direct_greaters do
			if not colors.has_key(p) then continue
			var color = colors[p]
			if color > max_color then max_color = color
		end
		return max_color + 1
	end

	private fun is_color_free(color: Int, set: Collection[E]): Bool do
		for e in set do
			if colors.has_key(e) and colors[e] == color then return false
		end
		return true
	end

	# Used for debugging only
	fun pretty_print do
		print "ids:"
		for e, id in ids do print "  {e}: {id}"
		#print "core: {core.join(" ")} ({core.length})"
		#print "border: {border.join(" ")} ({border.length})"
		#print "crown: {crown.join(" ")} ({crown.length})"
		print "conflicts:"
		for e, c in conflicts do print "  {e}: {c.join(" ")}"
		print "colors:"
		for e, c in colors do print "  {e}: {c}"
	end
end

redef class POSet[E]
	private fun linearize(elements: Set[E]): Array[E] do
		var lin = elements.to_a
		sort(lin)
		return lin
	end
end

# Colorize a collection of buckets using a poset and a conflict graph
class POSetBucketsColorer[H: Object, E: Object]
	private var colors = new HashMap[E, Int]
	private var poset: POSet[H]
	private var conflicts: Map[H, Set[H]]

	init(poset: POSet[H], conflicts: Map[H, Set[H]]) do
		self.poset = poset
		self.conflicts = conflicts
	end

	# Colorize buckets using the POSet and conflict graph
	fun colorize(buckets: Map[H, Set[E]]): Map[E, Int] do
		colors.clear
		var holders = new HashSet[H].from(buckets.keys)
		for h in poset.linearize(holders) do
			var color = min_color(poset[h].direct_greaters, buckets)
			for bucket in buckets[h] do
				if colors.has_key(bucket) then continue
				while not is_color_free(color, h, buckets) do color += 1
				colors[bucket] = color
				color += 1
			end
		end
		return colors
	end

	# Get the next available color considering used colors by other buckets
	private fun min_color(others: Collection[H], buckets: Map[H, Set[E]]): Int do
		var min = -1
		for holder in others do
			var color = max_color(holder, buckets)
			if color > min then min = color
		end
		return min + 1
	end

	# Return the max color used by a class
	private fun max_color(holder: H, buckets: Map[H, Set[E]]): Int do
		var max = -1
		for bucket in buckets[holder] do
			if not colors.has_key(bucket) then continue
			var color = colors[bucket]
			if color > max then max = color
		end
		return max
	end

	# Check if the color is free for this holder
	private fun is_color_free(color: Int, holder: H, buckets: Map[H, Set[E]]): Bool do
		if not conflicts.has_key(holder) then return true
		for conflict in conflicts[holder] do
			for bucket in buckets[conflict] do
				if not colors.has_key(bucket) then continue
				if colors[bucket] == color then return false
			end
		end
		return true
	end
end

