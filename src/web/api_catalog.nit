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
		var catalog = new Catalog(modelbuilder)
		for mpackage in model.mpackages do
			catalog.deps.add_node(mpackage)
			for mgroup in mpackage.mgroups do
				for mmodule in mgroup.mmodules do
					for imported in mmodule.in_importation.direct_greaters do
						var ip = imported.mpackage
						if ip == null or ip == mpackage then continue
						catalog.deps.add_edge(mpackage, ip)
					end
				end
			end
			catalog.git_info(mpackage)
			catalog.package_page(mpackage)
		end
		self.catalog = catalog
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

redef class Person
	super Jsonable

	redef fun core_serialize_to(v) do
		v.serialize_attribute("name", name)
		v.serialize_attribute("email", email)
		v.serialize_attribute("page", page)
		v.serialize_attribute("hash", (email or else "").md5.to_lower)
	end
end
