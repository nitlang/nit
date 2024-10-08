# This file is part of NIT ( https://nitlanguage.org ).
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

# Search things from the Model
#
# ModelIndex allows you to index mentities then retrieve them by their `name`
# or `full_name`.
# It offers a set of `find_*` methods that can be used to match queries
# against entities name.
#
# Because each use is different, ModelIndex only provide base raw search services.
# All of them return IndexMatches that can be ordered and filtered by the client.
#
# ## Indexing mentities
#
# Before searching something from the ModelIndex, you have to index it.
# Use the `ModelIndex::index` method to do that:
#
# ~~~nitish
# var index = new ModelIndex
# for mentity in model.collect_mentities do
#	index.index(mentity)
# end
# ~~~
#
# ## Search mentities
#
# You can then run queries on the ModelIndex:
#
# ~~~nitish
# for res in index.find("Array").limit(10) do
#    print res
# end
# ~~~
#
# ## Examples
#
# Here some examples of how you can use the ModelIndex.
#
# ### Smart type prediction
#
# Use ModelIndex to implement a smart prediction system based on the typed prefix:
#
# ~~~nitish
# var index = new ModelIndex
# for mentity in model.collect_mentities do
#	# We don't really care about definitions
#	if mentity isa MClassDef or mentity isa MPropDef then continue
#	index.index(mentity)
# end
#
# var typed_prefix = "Arr"
# for res in index.find_by_name_prefix(typed_prefix).
#	uniq. # keep only the best ranked mentity
#	limit(5). # limit to ten results
#	sort(new VisibilityComparator, new NameComparator) do # order by visibility then name
#    print res
# end
# ~~~
#
# Will output something like:
#
# ~~~raw
# Array (1)
# ArraySet (2)
# ArrayMap (3)
# ArrayCmp (4)
# ArrayMapKeys (5)
# ~~~
#
# ### Method autocompletion
#
# Find methods from a class full_name:
#
# ~~~nitish
# var class_full_name = "core::Array"
# for res in index.find_by_full_name_prefix("{class_full_name}::").
#	uniq. # keep only the best ranked mentity
#	sort(new VisibilityComparator). # put private in the bottom of the list
#	limit(5). # limit to ten results
#	sort(new FullNameComparator) do # order by lexicographic order
#    print res
# end
# ~~~
#
# Will output something like:
#
# ~~~raw
# * (2)
# + (1)
# filled_with (5)
# from (3)
# with_items (4)
# ~~~
#
# ### Name typo detection and suggestion
#
# Detect unknown names and suggest corrections:
#
# ~~~nitish
# var name = "Zrray"
#
# if index.find_by_name_prefix(name).is_empty then
#	printn "`{name}` not found, did you mean: "
#	printn index.find_by_name_similarity(name).sort(new ScoreComparator).limit(2).join(" or ")
#	print "?"
# end
# ~~~
#
# Will output something like:
#
# ~~~raw
# `Zrray` not found, did you mean: Array (1) or array (1)?
# ~~~
module model_index

import model::model_collect

import trees::trie
import trees::bktree

redef class Model

	# Keep a direct link to mentities by full name to speed up `mentity_from_uri`
	var mentities_by_full_name: HashMap[String, MEntity] is lazy do
		var mentities_by_full_name = new HashMap[String, MEntity]
		for mentity in collect_mentities do
			mentities_by_full_name[mentity.full_name] = mentity
		end
		return mentities_by_full_name
	end

	# ModelIndex used to perform searches
	var index: ModelIndex is lazy, writable do
		var index = new ModelIndex
		for mentity in collect_mentities do
			if mentity isa MClassDef or mentity isa MPropDef then continue
			index.index mentity
		end
		return index
	end

	redef fun mentities_by_name(name, filter) do
		var res = new Array[MEntity]
		if not index.names.has_key(name) then return res
		for mentity in index.names[name] do
			if filter == null or filter.accept_mentity(mentity) then res.add mentity
		end
		return res
	end

	redef fun mentity_by_full_name(full_name, filter) do
		if mentities_by_full_name.has_key(full_name) then
			var mentity = mentities_by_full_name[full_name]
			if filter == null or filter.accept_mentity(mentity) then return mentity
		end
		return null
	end

	private var score_sorter = new ScoreComparator
	private var vis_sorter = new VisibilityComparator
	private var kind_sorter = new MEntityComparator
	private var name_sorter = new NameComparator
	private var lname_sorter = new NameLengthComparator
	private var fname_sorter = new FullNameComparator
	private var lfname_sorter = new FullNameLengthComparator

	# Search mentities based on a `query` string
	#
	# Lookup the index for anything matching `query` and return `limit` results.
	#
	# The algorithm used is the following:
	# 1- lookup by name prefix
	# 2- lookup by full_name prefix
	# 3- loopup by levenshtein distance
	#
	# At each step if the `limit` is reached, the algorithm stops and returns the results.
	fun find(query: String, limit: nullable Int, filter: nullable ModelFilter): Array[MEntity] do
		# Find, lookup by name prefix
		var matches = index.find_by_name_prefix(query, filter).uniq.
			sort(lname_sorter, name_sorter, kind_sorter)
		if limit != null and matches.length >= limit then
			return matches.limit(limit).rerank.sort(vis_sorter, score_sorter).mentities
		end
		matches = matches.rerank.sort(vis_sorter, score_sorter)

		# If limit not reached, lookup by full_name prefix
		var malus = matches.length
		var full_matches = new IndexMatches
		for match in index.find_by_full_name_prefix(query, filter).
			sort(kind_sorter, lfname_sorter, fname_sorter) do
			match.score += malus
			full_matches.add match
		end
		matches = matches.uniq
		if limit != null and matches.length + full_matches.length >= limit then
			matches.add_all full_matches
			matches = matches.uniq.limit(limit).rerank.sort(vis_sorter, score_sorter)
			return matches.mentities
		end

		# If limit not reached, lookup by similarity
		malus = matches.length
		var sim_matches = new IndexMatches
		for match in index.find_by_similarity(query, filter).sort(score_sorter, kind_sorter, lname_sorter, name_sorter) do
			match.score += malus
			sim_matches.add match
		end
		matches.add_all sim_matches
		matches = matches.uniq
		if limit != null then matches = matches.limit(limit)
		return matches.rerank.sort(vis_sorter, score_sorter).mentities
	end
end

# ModelIndex indexes mentities by their name and full name
#
# It provides methods to find mentities based on a prefix or string similarity.
#
# ~~~nitish
# # Build index
# var index = new ModelIndex
# for mentity in model.collect_mentities do
#	if mentity isa MClassDef or mentity isa MPropDef then continue
#	index.index(mentity)
# end
#
# for e in index.find("Foo").uniq.sort(new ScoreComparator).limit(10) do
#	print " * {e.score}: {e.mentity.name} ({e.mentity.full_name})"
# end
# ~~~
class ModelIndex

	# List of all indexed mentities.
	#
	# Faster than traversing the tries.
	var mentities = new Array[MEntity]

	# Map of all mentities indexed by their `name`
	var names = new HashMap[String, Array[MEntity]]

	# Prefix tree for mentities `name`
	#
	# Because multiple mentities can share the same `name`, we use a Trie of
	# arrays of mentities.
	#
	# As for now, we do not index class and property definitions.
	# TODO add an option.
	var name_prefixes = new Trie[Array[MEntity]]

	# Distance tree for mentities `name`
	var name_distances = new BKTree

	# Map of all mentities indexed by their `full_name`
	var full_names = new HashMap[String, MEntity]

	# Prefix tree for mentities `full_name`
	#
	# Even if two mentities cannot share the same `full_name`, we use a Trie of
	# arrays of mentities to be consistent with `name_prefixes`.
	var full_name_prefixes = new Trie[Array[MEntity]]

	# Distance tree for mentities `full_name`
	var full_name_distances = new BKTree

	# Index `mentity` by it's `MEntity::name`
	#
	# See `name_prefixes`.
	private fun index_by_name(mentity: MEntity) do
		var name = mentity.name

		# Index name
		if not names.has_key(name) then
			names[name] = new Array[MEntity]
		end
		names[name].add mentity

		# Index prefix
		if not name_prefixes.has_key(name) then
			name_prefixes[name] = new Array[MEntity]
		end
		name_prefixes[name].add mentity

		# Index distance
		name_distances.add(name)
	end

	# Index `mentity` by its `MEntity::full_name`
	private fun index_by_full_name(mentity: MEntity) do
		var name = mentity.full_name

		# Index full name
		full_names[name] = mentity

		# Index prefix
		if not full_name_prefixes.has_key(name) then
			full_name_prefixes[name] = new Array[MEntity]
		end
		full_name_prefixes[name].add mentity

		# Index distance
		full_name_distances.add(name)
	end

	# Index `mentity` so it can be retrieved by a find query
	#
	# MEntities are indexed by both name and full_name.
	fun index(mentity: MEntity) do
		mentities.add mentity
		index_by_name mentity
		index_by_full_name mentity
	end

	# Translate Trie results to `SearchResult`
	#
	# This method is used internally to translate each mentity returned by a prefix
	# match in a Trie into a SearchResult that can be ranked by score.
	#
	# Results from the Trie are returned in a breadth first manner so we get the
	# matches ordered by prefix.
	# We preserve that order by giving an incremental score to the `array` items.
	private fun score_results_incremental(array: Array[Array[MEntity]], filter: nullable ModelFilter): IndexMatches do
		var results = new IndexMatches
		var score = 1
		for mentities in array do
			for mentity in mentities do
				if filter != null and not filter.accept_mentity(mentity) then continue
				results.add new IndexMatch(mentity, score)
			end
			score += 1
		end
		return results
	end

	# Find all mentities where `MEntity::name` matches the `prefix`
	fun find_by_name_prefix(prefix: String, filter: nullable ModelFilter): IndexMatches do
		return score_results_incremental(name_prefixes.find_by_prefix(prefix), filter)
	end

	# Find all mentities where `MEntity::full_name` matches the `prefix`
	fun find_by_full_name_prefix(prefix: String, filter: nullable ModelFilter): IndexMatches do
		return score_results_incremental(full_name_prefixes.find_by_prefix(prefix), filter)
	end

	# Rank all mentities by the distance between `MEntity::name` and `name`
	#
	# Use the Levenshtein algorithm on all the indexed mentities `name`.
	# Warning: may not scale to large indexes.
	fun find_by_name_similarity(name: String, filter: nullable ModelFilter): IndexMatches do
		var results = new IndexMatches
		for match in name_distances.search(name) do
			var dist = match.distance
			var mname = match.key
			if not names.has_key(mname) then continue
			for mentity in names[mname] do
				if mentity isa MClassDef or mentity isa MPropDef then continue
				if filter != null and not filter.accept_mentity(mentity) then continue
				results.add new IndexMatch(mentity, dist)
			end
		end
		return results
	end

	# Rank all mentities by the distance between `MEntity::full_name` and `full_name`
	#
	# Use the Levenshtein algorithm on all the indexed mentities `full_name`.
	# Warning: may not scale to large indexes.
	fun find_by_full_name_similarity(name: String, filter: nullable ModelFilter): IndexMatches do
		var results = new IndexMatches
		for match in full_name_distances.search(name) do
			var dist = match.distance
			var mname = match.key
			if not full_names.has_key(mname) then continue
			var mentity = full_names[mname]
			if mentity isa MClassDef or mentity isa MPropDef then continue
			if filter != null and not filter.accept_mentity(mentity) then continue
			results.add new IndexMatch(mentity, dist)
		end
		return results
	end

	# Rank all mentities by the distance between `name` and both the mentity name and full name
	fun find_by_similarity(name: String, filter: nullable ModelFilter): IndexMatches do
		var results = new IndexMatches
		results.add_all find_by_full_name_similarity(name, filter)
		results.add_all find_by_name_similarity(name, filter)
		return results
	end

	# Find mentities by name trying first by prefix then by similarity
	fun find_by_name(name: String, filter: nullable ModelFilter): IndexMatches do
		var results = find_by_name_prefix(name, filter)
		results.add_all find_by_name_similarity(name, filter)
		return results
	end

	# Find mentities by full name trying firt by prefix then by similarity
	fun find_by_full_name(name: String, filter: nullable ModelFilter): IndexMatches do
		var results = find_by_full_name_prefix(name)
		results.add_all find_by_full_name_similarity(name, filter)
		return results
	end

	# Find all mentities that matches `name`
	#
	# 1. try by name prefix
	# 2. add full name prefix matches
	# 3. try similarity by name
	# 4. try similarity by full_name
	fun find(name: String, filter: nullable ModelFilter): IndexMatches do
		var results = find_by_name_prefix(name, filter)
		results.add_all find_by_full_name_prefix(name, filter)
		results.add_all find_by_similarity(name, filter)
		return results
	end
end

# An array of IndexMatch instances returned by the ModelIndex
#
# Index matches can be sorted, filtered and truncated.
#
# Thanks to the fluent interface, the index matches can be manipulated in chain
# from a model index query:
#
# ~~~nitish
# var res = index.find("Foo").
#   uniq.
#	sort(new ScoreComparator, new MEntityComparator).
#	limit(10).
#	sort(new VisibilityComparator)
# ~~~
class IndexMatches
	super Array[IndexMatch]

	# Create a new ModelMatches from an array of matches
	#
	# Elements are copied.
	init from_matches(matches: Array[IndexMatch]) do self.add_all matches

	# Sort the matches with `comparator` (or a list of comparators)
	#
	# Return a new IndexMatches instance with the sorted results.
	#
	# When more than one comparator is given, the comparators are applied in a
	# pipeline where the `n`th comparator is applied only if the `n-1`th comparator
	# returned 0.
	fun sort(comparator: ScoreComparator...): IndexMatches do
		var res = to_a
		if comparator.length == 1 then
			comparator.first.sort res
		else
			var comparators = new MatchComparators(comparator)
			comparators.sort res
		end
		return new IndexMatches.from_matches(res)
	end

	# Limit the matches with `limit`
	#
	# Return a new IndexMatches instance with only the `limit` first matches.
	fun limit(limit: Int): IndexMatches do
		var res = new Array[IndexMatch]
		for match in self do
			if res.length >= limit then break
			res.add match
		end
		return new IndexMatches.from_matches(res)
	end

	# Remove doublons from the matches
	#
	# Preverse the lowest score of all the matches for a MEntity.
	fun uniq: IndexMatches do
		var scores = new HashMap[MEntity, IndexMatch]
		var res = new Array[IndexMatch]
		for match in self do
			var mentity = match.mentity
			if scores.has_key(mentity) then
				var older = scores[mentity]
				if match.score < older.score then older.score = match.score
			else
				scores[mentity] = match
				res.add match
			end
		end
		return new IndexMatches.from_matches(res)
	end

	# Reset score of each matches to follow `self` order
	#
	# Usefull when you need to apply one sorter over another.
	fun rerank: IndexMatches do
		var res = new IndexMatches
		for match in self do
			res.add match
			match.score = res.length
		end
		return res
	end

	# Aggregate the mentities for all the matches
	#
	# Preserve the match order.
	fun mentities: Array[MEntity] do
		var res = new Array[MEntity]
		for match in self do res.add match.mentity
		return res
	end
end

# An MEntity matched from a ModelIndex
#
# Each match has a `score`. The score should be seen as the distance of
# the match from the query. In other words, the lowest is the score, the more
# relevant is the match.
class IndexMatch
	super Comparable

	redef type OTHER: IndexMatch

	# MEntity matches
	var mentity: MEntity

	# Score allocated by the search method
	#
	# A lowest score means a more relevant match.
	#
	# Scores values are arbitrary, the meaning of `10` vs `2000` really depends
	# on the search method producing the match and the comparators used to sort
	# the matches.
	# The only universal rule is: low score = relevance.
	var score: Int is writable

	# By default matches are compared only on their score
	redef fun <=>(o) do return score <=> o.score

	redef fun to_s do return "{mentity} ({score})"
end

# Compare two matches by their score
#
# Since the score can be seen as a distance, we want the lowest score first.
class ScoreComparator
	super Comparator

	redef type COMPARED: IndexMatch

	redef fun compare(o1, o2) do return o1.score <=> o2.score
end

# A pipeline of comparators executed in inclusion order
#
# This class is used internally to agregate the behaviors of multiple comparators.
# Use `IndexMatches::sort(comparator...)` instead.
private class MatchComparators
	super ScoreComparator

	# Comparator to use in the array order
	var comparators: Array[ScoreComparator]

	# Compare with each comparator
	#
	# Return the compare value of the first one to return anything else than 0.
	redef fun compare(o1, o2) do
		for comparator in comparators do
			var c = comparator.compare(o1, o2)
			if c != 0 then return c
		end
		return 0
	end
end

# Compare two matches by their MEntity kind
#
# Usefull to order the mentities by kind in this order:
# packages, groups, modules and classes, properties.
class MEntityComparator
	super ScoreComparator

	# See `MEntity::compare_mentity`
	redef fun compare(o1, o2) do
		return o1.mentity.mentity_kind_rank <=> o2.mentity.mentity_kind_rank
	end
end

# Compare two matches by their MEntity visibility
#
# We reverse the original order so private is at the end of the list.
class VisibilityComparator
	super ScoreComparator

	redef fun compare(o1, o2) do return o2.mentity.visibility <=> o1.mentity.visibility
end

# Compare two matches by their name in lexicographic order
#
# Generally, for a same score, we want to put A before Z.
class NameComparator
	super ScoreComparator

	redef fun compare(o1, o2) do return o1.mentity.name <=> o2.mentity.name
end

# Compare two matches by their name length
class NameLengthComparator
	super ScoreComparator

	redef fun compare(o1, o2) do return o1.mentity.name.length <=> o2.mentity.name.length
end

# Compare two matches by their full_name in lexicographic order
#
# Generally, for a same score, we want to put A before Z.
class FullNameComparator
	super ScoreComparator

	redef fun compare(o1, o2) do return o1.mentity.full_name <=> o2.mentity.full_name
end

# Compare two matches by their full name length
class FullNameLengthComparator
	super ScoreComparator

	redef fun compare(o1, o2) do return o1.mentity.full_name.length <=> o2.mentity.full_name.length
end

redef class MEntity

	# Compare MEntity class kind
	#
	# Unknown kind have a virtually high score.
	private fun mentity_kind_rank: Int do return 10
end

redef class MPackage
	redef fun mentity_kind_rank do return 1
end

redef class MGroup
	redef fun mentity_kind_rank do return 2
end

redef class MModule
	redef fun mentity_kind_rank do return 3
end

redef class MClass
	redef fun mentity_kind_rank do return 4
end

redef class MClassDef
	redef fun mentity_kind_rank do return 5
end

redef class MProperty
	redef fun mentity_kind_rank do return 6
end

redef class MPropDef
	redef fun mentity_kind_rank do return 7
end
