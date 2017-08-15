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

import web_base
import catalog

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
		use("/catalog/highlighted", new APICatalogHighLighted(config))
		use("/catalog/required", new APICatalogMostRequired(config))
		use("/catalog/bytags", new APICatalogByTags(config))
		use("/catalog/contributors", new APICatalogContributors(config))
		use("/catalog/stats", new APICatalogStats(config))
	end
end

abstract class APICatalogHandler
	super APIHandler

	# List the 10 best packages from `cpt`
	fun list_best(cpt: Counter[MPackage]): JsonArray do
		var res = new JsonArray
		var best = cpt.sort
		for i in [1..10] do
			if i > best.length then break
			res.add best[best.length-i]
		end
		return res
	end

	# List packages by group.
	fun list_by(map: MultiHashMap[Object, MPackage]): JsonObject do
		var res = new JsonObject
		var keys = map.keys.to_a
		alpha_comparator.sort(keys)
		for k in keys do
			var projs = map[k].to_a
			alpha_comparator.sort(projs)
			res[k.to_s.html_escape] = new JsonArray.from(projs)
		end
		return res
	end
end

class APICatalogStats
	super APICatalogHandler

	redef fun get(req, res) do
		var obj = new JsonObject
		obj["packages"] = config.model.mpackages.length
		obj["maintainers"] = config.catalog.maint2proj.length
		obj["contributors"] = config.catalog.contrib2proj.length
		obj["modules"] = config.catalog.mmodules.sum
		obj["classes"] = config.catalog.mclasses.sum
		obj["methods"] = config.catalog.mmethods.sum
		obj["loc"] = config.catalog.loc.sum
		res.json obj
	end
end

class APICatalogHighLighted
	super APICatalogHandler

	redef fun get(req, res) do res.json list_best(config.catalog.score)
end

class APICatalogMostRequired
	super APICatalogHandler

	redef fun get(req, res) do
		if config.catalog.deps.not_empty then
			var reqs = new Counter[MPackage]
			for p in config.model.mpackages do
				reqs[p] = config.catalog.deps[p].smallers.length - 1
			end
			res.json list_best(reqs)
			return
		end
		res.json new JsonArray
	end
end

class APICatalogByTags
	super APICatalogHandler

	redef fun get(req, res) do res.json list_by(config.catalog.tag2proj)
end

class APICatalogContributors
	super APICatalogHandler

	redef fun get(req, res) do
		var obj = new JsonObject
		obj["maintainers"] = new JsonArray.from(config.catalog.maint2proj.keys)
		obj["contributors"] = new JsonArray.from(config.catalog.contrib2proj.keys)
		res.json obj
	end
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

redef class MPackageMetadata
	serialize

	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("license", license)
		v.serialize_attribute("maintainers", maintainers)
		v.serialize_attribute("contributors", contributors)
		v.serialize_attribute("tags", tags)
		v.serialize_attribute("tryit", tryit)
		v.serialize_attribute("apk", apk)
		v.serialize_attribute("homepage", homepage)
		v.serialize_attribute("browse", browse)
		v.serialize_attribute("git", git)
		v.serialize_attribute("issues", issues)
		v.serialize_attribute("first_date", first_date)
		v.serialize_attribute("last_date", last_date)
	end
end

# Catalog statistics
redef class CatalogStats
	serialize

	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("packages", packages)
		v.serialize_attribute("maintainers", maintainers)
		v.serialize_attribute("contributors", contributors)
		v.serialize_attribute("tags", tags)
		v.serialize_attribute("modules", modules)
		v.serialize_attribute("classes", classes)
		v.serialize_attribute("methods", methods)
		v.serialize_attribute("loc", loc)
	end
end

# MPackage statistics for the catalog
redef class MPackageStats
	serialize

	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("mmodules", mmodules)
		v.serialize_attribute("mclasses", mclasses)
		v.serialize_attribute("mmethods", mmethods)
		v.serialize_attribute("loc", loc)
		v.serialize_attribute("errors", errors)
		v.serialize_attribute("warnings", warnings)
		v.serialize_attribute("warnings_per_kloc", warnings_per_kloc)
		v.serialize_attribute("documentation_score", documentation_score)
		v.serialize_attribute("commits", commits)
		v.serialize_attribute("score", score)
	end
end

redef class Person
	serialize

	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("name", name)
		v.serialize_attribute("email", email)
		v.serialize_attribute("gravatar", gravatar)
	end
end
