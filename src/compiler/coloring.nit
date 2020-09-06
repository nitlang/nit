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

# Build a conflict graph from a POSet
class POSetConflictGraph[E]

	# Core is composed by:
	#  * elements that have mutiple direct parents
	#  * parents of elements that have multiple direct parents
	# REQUIRE: is_colored
	var core = new HashSet[E]

	# Border is composed by minimal elements of the core:
	#  * that have multiple direct parents
	#  * but whose subelements are all in single inheritance
	# REQUIRE: is_colored
	var border = new HashSet[E]

	# The crown is composed by the elements that are:
	#  * not part of the core nor the border
	#  * are in single inheritance
	# REQUIRE: is_colored
	var crown = new HashSet[E]

	# Conflict graph of the POSet
	# Elements X and Y are in conflict if either:
	#  * X and Y are the same element
	#  * Y is a subelement of X
	#  * X and Y have common sub elements
	# REQUIRE: is_colored
	var conflicts = new HashMap[E, Set[E]]

	# The associated poset
	var poset: POSet[E]

	# The linearisation order to visit elements in the poset
	var order: Array[E] is noinit

	init do
		extract_core
		extract_border
		extract_crown
		compute_conflicts
		order = poset.linearize(poset)
	end

	# Compute the set of elements forming the core of the poset hierarchy.
	private fun extract_core do
		core.clear
		for e in poset do
			if poset[e].direct_greaters.length > 1 then
				core.add_all(poset[e].greaters)
			end
		end
	end

	# Compute the set of elements composing the border of the core
	# Elements belonging to the `border` are removed from the `core`
	private fun extract_border do
		border.clear
		for e in core do
			if not is_border(e) then continue
			border.add(e)
		end
		for e in border do core.remove(e)
	end

	private fun is_border(e: E): Bool do
		for child in poset[e].direct_smallers do
			if core.has(child) then return false
		end
		return true
	end

	# Compute the set of elements belonging to the crown of the inheritance hierarchy.
	private fun extract_crown do
		crown.clear
		for e in poset do
			if not core.has(e) and not border.has(e) then crown.add(e)
		end
	end

	# Check for conflict in the core.
	# Start from border and tag every ancestors
	private fun compute_conflicts do
		conflicts.clear
		for e in border do add_conflicts(poset[e].greaters)
	end

	private fun add_conflict(e, o: E) do
		if not conflicts.has_key(e) then conflicts[e] = new HashSet[E]
		if not conflicts.has_key(o) then conflicts[o] = new HashSet[E]
		conflicts[e].add(o)
		conflicts[o].add(e)
	end

	private fun add_conflicts(es: Collection[E]) do
		for e1 in es do
			for e2 in es do add_conflict(e1, e2)
		end
	end

	# Used for debugging only
	fun pretty_print do
		#print "core: {core.join(" ")} ({core.length})"
		#print "border: {border.join(" ")} ({border.length})"
		#print "crown: {crown.join(" ")} ({crown.length})"
		print "conflicts:"
		for e, c in conflicts do print "  {e or else "NULL"}: {c.join(" ")}"
	end
end

redef class POSet[E]
	fun to_conflict_graph: POSetConflictGraph[E] do return new POSetConflictGraph[E](self)
end

# Colorize elements from a POSet
# Two elements from a POSet cannot have the same color if they share common subelements
#
# Example:
#
# ~~~raw
#       A
#     / | \
#    /  |  \
#   B   C   D
#   |  /|   |
#   | / |   |
#   |/  |   |
#   E   F   G
#   |
#   H
# ~~~
#
# Conflicts:
#
# * A: {B, C, D, E, F, G, H}
# * B: {A, C, E, H}
# * C: {A, E, H, F}
# * D: {A, G}
# * E: {A, B, C, H}
# * F: {A, C}
# * G: {A, D}
# * H: {A, B, C, E}
#
# Possible colors:
#
# * A: 0
# * B: 1
# * C: 2
# * D: 1
# * E: 3
# * F: 3
# * G: 2
# * H: 4
#
# SEE: Ducournau, R. (2011).
# Coloring, a versatile technique for implementing object-oriented languages.
# Software: Practice and Experience, 41(6), 627–659.
class POSetColorer[E: Object]

	# Is the poset already colored?
	var is_colored = false

	# Resulting ids
	#
	# All ids are strictly positive (`>= 1`).
	#
	# REQUIRE: is_colored
	fun ids: Map[E, Int]
	is
		expect(is_colored)
	do
		return ids_cache
	end
	private var ids_cache = new HashMap[E, Int]

	# Resulting colors
	# REQUIRE: is_colored
	fun colors: Map[E, Int]
	is
		expect(is_colored)
	do
		return colors_cache
	end
	private var colors_cache = new HashMap[E, Int]

	# REQUIRE: is_colored
	fun poset: POSet[E]
	is
		expect(is_colored)
	do
		return poset_cache
	end
	private var poset_cache: POSet[E] is noinit

	# REQUIRE: is_colored
	fun conflicts: Map[E, Set[E]]
	is
		expect(is_colored)
	do
		return conflicts_cache
	end
	private var conflicts_cache: Map[E, Set[E]] is noinit

	private var graph: POSetConflictGraph[E] is noinit

	# Start coloring on given POSet
	fun colorize(poset: POSet[E]) do
		poset_cache = poset
		graph = new POSetConflictGraph[E](poset)
		allocate_ids
		compute_colors
		conflicts_cache = graph.conflicts
		is_colored = true
	end

	private fun allocate_ids do
		ids_cache.clear
		var elements = new HashSet[E].from(poset_cache.to_a)
		for e in poset_cache.linearize(elements) do
			ids_cache[e] = ids_cache.length + 1
		end
	end

	# Colorize core, border and crown in that order
	private fun compute_colors do
		colors_cache.clear
		colorize_core
		colorize_set(graph.border)
		colorize_set(graph.crown)
	end

	# Core elements cannot have the same color than:
	#  * one of their parents
	#  * one of their conflicting elements
	private fun colorize_core do
		for e in poset_cache.linearize(graph.core) do
			var color = min_color(e)
			var conflicts = graph.conflicts[e]
			while not is_color_free(color, conflicts) do
				color += 1
			end
			colors_cache[e] = color
		end
	end

	# Other elements inherit color fron their direct parents
	private fun colorize_set(set: Set[E]) do
		for e in poset_cache.linearize(set) do colors_cache[e] = min_color(e)
	end

	# Get the next minimal color from direct parents
	private fun min_color(e: E): Int do
		var max_color = -1
		for p in poset_cache[e].direct_greaters do
			if not colors_cache.has_key(p) then continue
			var color = colors_cache[p]
			if color > max_color then max_color = color
		end
		return max_color + 1
	end

	private fun is_color_free(color: Int, set: Collection[E]): Bool do
		for e in set do
			if colors_cache.has_key(e) and colors_cache[e] == color then return false
		end
		return true
	end

	# Used for debugging only
	fun pretty_print do
		print "ids:"
		for e, id in ids do print "  {e}: {id}"
		print "colors:"
		for e, c in colors do print "  {e}: {c}"
	end
end

# Colorize elements `E` introduced by holders `H` in a `POSet`.
#
# Two elements cannot have the same color if they are introduced or inherited by a same holder.
class POSetGroupColorer[H: Object, E: Object]

	# The associated conflict graph containing the poset.
	#
	# The conflict graph is used instead of the original poset so that the conflict graph can be reused
	# in different coloration based on the same poset.
	var graph: POSetConflictGraph[H]

	# The elements to color.
	#
	# For each holder, the collection of introduced elements is given.
	#
	# A single element must not be introduced in more than one holder.
	var buckets: Map[H, Collection[E]]

	# The associated poset.
	#
	# alias for `graph.poset`
	fun poset: POSet[H] do return graph.poset

	# The resulting coloring
	#
	# Each element from buckets is associated to its own color
	var colors: Map[E, Int] is lazy do
		for h in graph.poset do
			used_colors[h] = new HashSet[Int]
		end
		compute_colors
		return colors_cache
	end

	# Resulting colors
	private var colors_cache = new HashMap[E, Int]

	# Set of known used colors
	private var used_colors = new HashMap[H, HashSet[Int]]

	# Build table layout of elements `E` for the holder `h`.
	#
	# `null` is used to fill places without elements (holes).
	fun build_layout(h: H): Array[nullable E]
	do
		var table = new Array[nullable E]
		for s in poset[h].greaters do
			var bucket = buckets.get_or_null(s)
			if bucket == null then continue
			for e in bucket do
				var color = colors[e]
				if table.length <= color then
					for i in [table.length .. color[ do
						table[i] = null
					end
				else
					assert table[color] == null else print "in {h}, for {color}: {table[color] or else ""} vs {e}"
				end
				table[color] = e
			end
		end
		return table
	end

	# Colorize core, border and crown in that order
	private fun compute_colors do
		colors_cache.clear
		colorize_core
		colorize_set(graph.border)
		colorize_set(graph.crown)
	end

	# Core elements cannot have the same color than:
	#  * one of their parents
	#  * one of their conflicting elements
	private fun colorize_core do
		for h in graph.order do
			if not graph.core.has(h) then continue

			var color = inherit_color(h)
			var mincolor = color
			var bucket = buckets.get_or_null(h)
			if bucket == null then continue
			var conflicts = graph.conflicts[h]
			var parents = poset[h].greaters
			for e in bucket do
				color = next_free_color(color, parents)
				color = next_free_color(color, conflicts)
				colors_cache[e] = color
				used_colors[h].add color
				#print "{h}: color[{color}] <- {e}"
				if mincolor == color then mincolor += 1
				color += 1
			end
			min_colors[h] = mincolor
		end
	end

	# Other elements inherit color from their direct parents
	private fun colorize_set(set: Set[H]) do
		for h in graph.order do
			if not set.has(h) then continue

			var color = inherit_color(h)
			var mincolor = color
			var bucket = buckets.get_or_null(h)
			if bucket == null then continue
			var parents = poset[h].greaters
			for e in bucket do
				color = next_free_color(color, parents)
				colors_cache[e] = color
				used_colors[h].add color
				#print "{h}: color[{color}] <- {e} (set)"
				if mincolor == color then mincolor += 1
				color += 1
			end
			min_colors[h] = mincolor
		end
	end

	# Get the first available free color.
	private fun inherit_color(h: H): Int
	do
		var res = 0
		for p in poset[h].direct_greaters do
			var m = min_colors[p]
			if m > res then res = m
		end
		min_colors[h] = res
		return res
	end

	# The first available color for each holder.
	#
	# Is used by children to start their coloring.
	#
	# Is updated at the end of a coloring step.
	private var min_colors = new HashMap[H, Int]

	private fun next_free_color(color: Int, set: Collection[H]): Int do
		loop
			for h in set do
				if used_colors[h].has(color) then
					#print "\tin {h}, {color} is used"
					color += 1
					continue label
				end
			end
			break
		end label
		return color
	end

	# Used for debugging only
	fun pretty_print do
		print "colors:"
		for e, c in colors do print "  {e}: {c}"
	end
end

# Colorize a collection of buckets
# Two elements cannot have the same color if they both appear in the same bucket
# No coloring order is garantied
#
# Example:
#
# * buckets[A] = {x1, x2}
# * buckets[B] = {x1, x3, x4}
# * buckets[C] = {x2, x3}
#
# Conflicts:
#
# * x1: {x2, x3, x4}
# * x2: {x1, x3}
# * x3: {x1, x2, x4}
# * x4: {x1, x3}
#
# Possible colors:
#
# * x1: 0, x2: 1, x3: 2, x4: 1
class BucketsColorer[H: Object, E: Object]
	private var colors = new HashMap[E, Int]
	private var conflicts = new HashMap[E, Set[E]]

	# Start bucket coloring
	fun colorize(buckets: Map[H, Set[E]]): Map[E, Int] do
		compute_conflicts(buckets)
		var min_color = 0
		for holder, hbuckets in buckets do
			for bucket in hbuckets do
				if colors.has_key(bucket) then continue
				var color = min_color
				while not is_color_free(bucket, color) do
					color += 1
				end
				colors[bucket] = color
				color = min_color
			end
		end
		return colors
	end

	private fun is_color_free(bucket: E, color: Int): Bool do
		if conflicts.has_key(bucket) then
			for other in conflicts[bucket] do
				if colors.has_key(other) and colors[other] == color then return false
			end
		end
		return true
	end

	private fun compute_conflicts(buckets: Map[H, Set[E]]) do
		conflicts.clear
		for holder, hbuckets in buckets do
			for bucket in hbuckets do
				if not conflicts.has_key(bucket) then conflicts[bucket] = new HashSet[E]
				for obucket in hbuckets do
					if obucket == bucket then continue
					if not conflicts.has_key(obucket) then conflicts[obucket] = new HashSet[E]
					conflicts[bucket].add(obucket)
					conflicts[obucket].add(bucket)
				end
			end
		end
	end
end

# Colorize a collection of buckets using a poset and a conflict graph
# Two elements cannot have the same color if they both appear in the same bucket
# The use of a POSet hierarchy optimize the coloring
# Buckets elements are colored using linearization order starting
class POSetBucketsColorer[H: Object, E: Object]
	private var colors = new HashMap[E, Int]
	private var poset: POSet[H]
	private var conflicts: Map[H, Set[H]]

	# Colorize buckets using the POSet and conflict graph
	fun colorize(buckets: Map[H, Set[E]]): Map[E, Int] do
		colors.clear
		for h in poset.linearize(buckets.keys) do
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
