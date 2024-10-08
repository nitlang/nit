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

# Commands to retrieve Catalog related data
module commands_catalog

import commands_model
import catalog

# A DocCommand based on a Catalog
abstract class CmdCatalog
	super DocCommand

	autoinit(model, catalog, filter)

	# Catalog to query at
	var catalog: Catalog
end

# A CmdSearch command using a Catalog
class CmdCatalogSearch
	super CmdCatalog
	super CmdSearch

	autoinit(model, catalog, filter, query, limit, page, count, max)

	redef fun init_results do
		if results != null then return new CmdSuccess

		var res = super
		if not res isa CmdSuccess then return res

		var query = self.query
		if query == null then return new ErrorNoQuery
		sorter = null

		var filter = self.filter
		var index = model.index

		# lookup by name prefix
		var matches = index.find_by_name_prefix(query, filter).uniq.
			sort(lname_sorter, name_sorter, kind_sorter)
		matches = matches.rerank.sort(vis_sorter, score_sorter)

		# lookup by tags
		var malus = matches.length
		if catalog.tag2proj.has_key(query) then
			for mpackage in catalog.tag2proj[query] do
				if filter != null and not filter.accept_mentity(mpackage) then continue
				matches.add new IndexMatch(mpackage, malus)
				malus += 1
			end
			matches = matches.uniq.rerank.sort(vis_sorter, score_sorter)
		end

		# lookup by full_name prefix
		malus = matches.length
		var full_matches = new IndexMatches
		for match in index.find_by_full_name_prefix(query, filter).
			sort(lfname_sorter, fname_sorter) do
			match.score += 1
			full_matches.add match
		end
		matches = matches.uniq

		# lookup by similarity
		malus = matches.length
		var sim_matches = new IndexMatches
		for match in index.find_by_similarity(query, filter).sort(score_sorter, kind_sorter, lname_sorter, name_sorter) do
			if match.score > query.length then break
			match.score += 1
			sim_matches.add match
		end
		matches.add_all sim_matches
		matches = matches.uniq
		results = matches.rerank.sort(vis_sorter, score_sorter).mentities
		return res
	end

	private var score_sorter = new ScoreComparator
	private var vis_sorter = new VisibilityComparator
	private var name_sorter = new NameComparator
	private var lname_sorter = new NameLengthComparator
	private var fname_sorter = new FullNameComparator
	private var lfname_sorter = new FullNameLengthComparator
	private var kind_sorter = new MEntityComparator
end

# Retrieve the catalog metadata for a MPackage
class CmdMetadata
	super CmdEntity

	# MPackage metadata retrieved
	var metadata: nullable MPackageMetadata = null is optional, writable

	redef fun init_command do
		if metadata != null then return new CmdSuccess

		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)

		if mentity isa MPackage then
			metadata = mentity.metadata
		else
			return new WarningNoMetadata(mentity)
		end
		return res
	end
end

# No metadata for `mentity`
class WarningNoMetadata
	super CmdWarning

	# MEntity provided
	var mentity: MEntity

	redef fun to_s do return "No metadata for `{mentity.full_name}`"
end

# Retrieve the packages in the catalog
class CmdCatalogPackages
	super CmdCatalog
	super CmdEntities

	autoinit(model, catalog, filter, limit, page, count, max)

	redef var sorter = new CatalogScoreSorter(catalog) is lazy

	redef fun init_results do
		if results != null then return new CmdSuccess

		var res = super
		if not res isa CmdSuccess then return res

		results = catalog.mpackages.values.to_a
		return res
	end
end

# Retrieve the catalog stats
class CmdCatalogStats
	super CmdCatalog

	# Retrieved catalog statistics
	var stats: nullable CatalogStats = null is optional, writable

	redef fun init_command do
		super
		self.stats = catalog.catalog_stats
		return new CmdSuccess
	end
end

# Retrieve the catalog tags list
class CmdCatalogTags
	super CmdCatalog

	# Sorter to sort tags alphabetically
	var tags_sorter = new CatalogTagsSorter is optional, writable

	# Count of packages by tag
	var packages_count_by_tags: nullable ArrayMap[String, Int] = null is optional, writable

	redef fun init_command do
		super
		var tags_to_projects = new ArrayMap[String, Int]
		var tags = catalog.tag2proj.keys.to_a
		tags_sorter.sort(tags)
		for tag in tags do
			if not catalog.tag2proj.has_key(tag) then continue
			tags_to_projects[tag] = catalog.tag2proj[tag].length
		end
		packages_count_by_tags = tags_to_projects
		return new CmdSuccess
	end
end

# Retrieve the packages for a tag
class CmdCatalogTag
	super CmdCatalogPackages

	autoinit(model, catalog, filter, tag, limit, page, count, max)

	# The tag to retrieve
	var tag: nullable String = null is optional, writable

	redef fun init_command do
		var tag = self.tag
		if tag == null then return new ErrorNoTag

		if not catalog.tag2proj.has_key(tag) then return new ErrorTagNotFound(tag)
		return super
	end

	redef fun init_results do
		if results != null then return new CmdSuccess

		var res = super
		if not res isa CmdSuccess then return res

		results = catalog.tag2proj[tag].to_a
		return res
	end
end

# No tag name provided
class ErrorNoTag
	super CmdError

	redef fun to_s do return "No tag name provided"
end

# No tag with this name in the catalog
class ErrorTagNotFound
	super CmdError

	# The tag that was not found
	var tag: String

	redef fun to_s do return "No tag found for `{tag}`"
end

# Retrieve a person from the catalog
class CmdCatalogPerson
	super CmdCatalog

	# Person to retrieve
	#
	# You can also pass a `person_name`.
	var person: nullable Person = null is optional, writable

	# Name of the person to retrieve
	#
	# You can also pass a `person` instance.
	var person_name: nullable String = null is optional, writable

	# Initialize the `person` result
	fun init_person: CmdMessage do
		var person = self.person
		if person != null then
			person_name = person.name
			return new CmdSuccess
		end

		var name = self.person_name
		if name == null then return new ErrorNoPerson
		if not catalog.name2person.has_key(name) then return new ErrorPersonNotFound(name)
		self.person = catalog.name2person[name]
		return new CmdSuccess
	end

	redef fun init_command do
		init_person
		return super
	end
end

# No person instance or name provided
class ErrorNoPerson
	super CmdError

	redef fun to_s do return "No person provided"
end

# No person found with this name
class ErrorPersonNotFound
	super CmdError

	# Name of the person that was not found
	var name: String

	redef fun to_s do return "No person found for `{name}`"
end

# Retrieve the packages maintained by a person
class CmdCatalogMaintaining
	super CmdCatalogPerson
	super CmdCatalogPackages

	autoinit(model, catalog, filter, person, person_name, limit, page, count, max)

	redef fun init_command do return super

	redef fun init_results do
		if results != null then return new CmdSuccess
		var res = super
		if not res isa CmdSuccess then return res
		var person = self.person.as(not null)

		if not catalog.maint2proj.has_key(person) then return res
		results = catalog.maint2proj[person]
		return res
	end
end

# Retrieve the packages contributed by a person
class CmdCatalogContributing
	super CmdCatalogPerson
	super CmdCatalogPackages

	autoinit(model, catalog, filter, person, person_name, limit, page, count, max)

	# Include maintained packages?
	#
	# Default is `false`.
	var maintaining = false is optional, writable

	# FIXME linearization
	redef fun init_command do return super

	redef fun init_results do
		if results != null then return new CmdSuccess

		var res = super
		if not res isa CmdSuccess then return res
		var person = self.person.as(not null)

		if not catalog.contrib2proj.has_key(person) then return res

		var maint2proj = null
		if catalog.maint2proj.has_key(person) then
			maint2proj = catalog.maint2proj[person]
		end

		var results = new Array[MPackage]
		for mpackage in catalog.contrib2proj[person] do
			if not maintaining and maint2proj != null and maint2proj.has(mpackage) then continue
			results.add mpackage
		end
		self.results = results
		return res
	end
end
