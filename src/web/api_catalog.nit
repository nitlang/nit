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

module api_catalog

import api_model
import catalog::catalog_json

redef class NitwebConfig

	# Catalog to pass to handlers.
	var catalog: Catalog is noinit

	# Build the catalog
	#
	# This method should be called at nitweb startup.
	fun build_catalog do
		self.catalog = new Catalog(modelbuilder)
		self.catalog.build_catalog(model.mpackages)
	end
end

redef class APIRouter
	redef init do
		super
		use("/catalog/packages/", new APICatalogPackages(config))
		use("/catalog/stats", new APICatalogStats(config))

		use("/catalog/tags", new APICatalogTags(config))
		use("/catalog/tag/:tid", new APICatalogTag(config))

		use("/catalog/person/:pid", new APICatalogPerson(config))
		use("/catalog/person/:pid/maintaining", new APICatalogMaintaining(config))
		use("/catalog/person/:pid/contributing", new APICatalogContributing(config))
	end
end

abstract class APICatalogHandler
	super APIHandler

	# Sorter used to sort packages
	#
	# Sorting is based on mpackage score.
	var mpackages_sorter = new CatalogScoreSorter(config.catalog) is lazy
end

# Get all the packages from the catalog using pagination
#
# `GET /packages?p=1&n=10`: get the list of catalog by page
class APICatalogPackages
	super APICatalogHandler

	redef fun get(req, res) do
		var page = req.int_arg("p")
		var limit = req.int_arg("n")
		var mpackages = config.catalog.mpackages.values.to_a
		mpackages_sorter.sort(mpackages)
		var response = new JsonArray.from(mpackages)
		res.json paginate(response, response.length, page, limit)
	end
end

# Get the catalog statistics
#
# `GET /stats`: return the catalog statistics
class APICatalogStats
	super APICatalogHandler

	redef fun get(req, res) do
		res.json config.catalog.catalog_stats
	end
end

# Get all the tags from the catalog
#
# `GET /tags`: the list of tags associated with their number of packages
class APICatalogTags
	super APICatalogHandler

	# Sorter to sort tags alphabetically
	var tags_sorter = new CatalogTagsSorter

	redef fun get(req, res) do
		var obj = new JsonObject

		var tags = config.catalog.tag2proj.keys.to_a
		tags_sorter.sort(tags)

		for tag in tags do
			if not config.catalog.tag2proj.has_key(tag) then continue
			obj[tag] = config.catalog.tag2proj[tag].length
		end
		res.json obj
	end
end

# Get the packages related to a tag
#
# `GET /tag/:tid?p=1&n=10`: return a paginated list of packages
class APICatalogTag
	super APICatalogHandler

	redef fun get(req, res) do
		var page = req.int_arg("p")
		var limit = req.int_arg("n")
		var id = req.param("tid")
		if id == null then
			res.api_error(400, "Missing tag")
			return
		end
		id = id.from_percent_encoding
		if not config.catalog.tag2proj.has_key(id) then
			res.api_error(404, "Tag not found")
			return
		end
		var obj = new JsonObject
		obj["tag"] = id
		var mpackages = config.catalog.tag2proj[id]
		mpackages_sorter.sort(mpackages)
		var response = new JsonArray.from(mpackages)
		obj["packages"] = paginate(response, response.length, page, limit)
		res.json obj
	end
end

# Get a person existing in the catalog
#
# `GET /person/:pid`: get the person with `pid`
class APICatalogPerson
	super APICatalogHandler

	# Get the person with `:pid` or throw a 404 error
	fun get_person(req: HttpRequest, res: HttpResponse): nullable Person do
		var id = req.param("pid")
		if id == null then
			res.api_error(400, "Missing package full_name")
			return null
		end
		id = id.from_percent_encoding
		if not config.catalog.name2person.has_key(id) then
			res.api_error(404, "Person not found")
			return null
		end
		return config.catalog.name2person[id]
	end

	redef fun get(req, res) do
		var person = get_person(req, res)
		if person == null then return
		res.json person
	end
end

# Get the list of mpackages maintained by a person
#
# `GET /person/:pid/maintaining?p=1&n=10`: return a paginated list of packages
class APICatalogMaintaining
	super APICatalogPerson

	redef fun get(req, res) do
		var person = get_person(req, res)
		if person == null then return

		var page = req.int_arg("p")
		var limit = req.int_arg("n")
		var array = new Array[MPackage]
		if config.catalog.maint2proj.has_key(person) then
			array = config.catalog.maint2proj[person].to_a
		end
		mpackages_sorter.sort(array)
		var response = new JsonArray.from(array)
		res.json paginate(response, response.length, page, limit)
	end
end

# Get the list of mpackages contributed by a person
#
# `GET /person/:pid/contributing?p=1&n=10`: return a paginated list of packages
class APICatalogContributing
	super APICatalogPerson

	redef fun get(req, res) do
		var person = get_person(req, res)
		if person == null then return

		var page = req.int_arg("p")
		var limit = req.int_arg("n")
		var array = new Array[MPackage]
		if config.catalog.contrib2proj.has_key(person) then
			array = config.catalog.contrib2proj[person].to_a
		end
		mpackages_sorter.sort(array)
		var response = new JsonArray.from(array)
		res.json paginate(response, response.length, page, limit)
	end
end

redef class APIEntity
	redef fun get(req, res) do
		var mentity = mentity_from_uri(req, res)
		if mentity == null then return

		# Special case for packages (catalog view)
		if mentity isa MPackage then
			res.raw_json mentity.to_full_catalog_json(plain=true, config.mainmodule, config.catalog)
		else
			res.raw_json mentity.to_full_json(config.mainmodule)
		end
	end
end

redef class APISearch
	super APICatalogHandler

	redef fun search(query, limit) do
		var index = config.view.index

		# lookup by name prefix
		var matches = index.find_by_name_prefix(query).uniq.
			sort(lname_sorter, name_sorter, kind_sorter)
		matches = matches.rerank.sort(vis_sorter, score_sorter)

		# lookup by tags
		var malus = matches.length
		if config.catalog.tag2proj.has_key(query) then
			for mpackage in config.catalog.tag2proj[query] do
				matches.add new IndexMatch(mpackage, malus)
				malus += 1
			end
			matches = matches.uniq.rerank.sort(vis_sorter, score_sorter)
		end

		# lookup by full_name prefix
		malus = matches.length
		var full_matches = new IndexMatches
		for match in index.find_by_full_name_prefix(query).
			sort(lfname_sorter, fname_sorter) do
			match.score += 1
			full_matches.add match
		end
		matches = matches.uniq

		# lookup by similarity
		malus = matches.length
		var sim_matches = new IndexMatches
		for match in index.find_by_similarity(query).sort(score_sorter, lname_sorter, name_sorter) do
			if match.score > query.length then break
			match.score += 1
			sim_matches.add match
		end
		matches.add_all sim_matches
		matches = matches.uniq
		return matches.rerank.sort(vis_sorter, score_sorter).mentities
	end

	private var score_sorter = new ScoreComparator
	private var vis_sorter = new VisibilityComparator
	private var name_sorter = new NameComparator
	private var lname_sorter = new NameLengthComparator
	private var fname_sorter = new FullNameComparator
	private var lfname_sorter = new FullNameLengthComparator
	private var kind_sorter = new MEntityComparator
end

redef class Catalog

	# Build the catalog from `mpackages`
	fun build_catalog(mpackages: Array[MPackage]) do
		# Compute the poset
		for p in mpackages do
			var g = p.root
			assert g != null
			modelbuilder.scan_group(g)

			deps.add_node(p)
			for gg in p.mgroups do for m in gg.mmodules do
				for im in m.in_importation.direct_greaters do
					var ip = im.mpackage
					if ip == null or ip == p then continue
					deps.add_edge(p, ip)
				end
			end
		end
		# Build the catalog
		for mpackage in mpackages do
			package_page(mpackage)
			git_info(mpackage)
			mpackage_stats(mpackage)
		end
	end
end

redef class MPackage
	# Serialize the full catalog version of `self` to JSON
	#
	# See: `FullCatalogSerializer`
	fun to_full_catalog_json(mainmodule: MModule, catalog: Catalog, plain, pretty: nullable Bool): String do
		var stream = new StringWriter
		var serializer = new FullCatalogSerializer(stream, mainmodule, catalog)
		serializer.plain_json = plain or else false
		serializer.pretty_json = pretty or else false
		serializer.serialize self
		stream.close
		return stream.to_s
	end

	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("metadata", metadata)
		if v isa FullCatalogSerializer then
			v.serialize_attribute("stats", v.catalog.mpackages_stats[self])

			var parents = v.catalog.deps[self].direct_greaters.to_a
			v.serialize_attribute("dependencies", v.deps_to_json(parents))
			var children = v.catalog.deps[self].direct_smallers.to_a
			v.serialize_attribute("clients", v.deps_to_json(children))
		end
	end
end

# CatalogSerializer decorate the Package JSON with full catalog metadata
#
# See MEntity::to_full_catalog_json.
class FullCatalogSerializer
	super FullJsonSerializer

	# Catalog used to decorate the MPackages
	var catalog: Catalog

	private fun deps_to_json(mpackages: Array[MPackage]): JsonArray do
		var res = new JsonArray
		for mpackage in mpackages do
			res.add dep_to_json(mpackage)
		end
		return res
	end

	private fun dep_to_json(mpackage: MPackage): JsonObject do
		var obj = new JsonObject
		obj["name"] = mpackage.name
		var mdoc = mpackage.mdoc_or_fallback
		if mdoc != null then
			obj["synopsis"] = mdoc.synopsis.write_to_string
		end
		return obj
	end
end
