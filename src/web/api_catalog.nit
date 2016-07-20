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

# Group all api handlers in one router.
class APICatalogRouter
	super APIRouter

	# Catalog to pass to handlers.
	var catalog: Catalog

	init do
		use("/highlighted", new APICatalogHighLighted(model, mainmodule, catalog))
		use("/required", new APICatalogMostRequired(model, mainmodule, catalog))
		use("/bytags", new APICatalogByTags(model, mainmodule, catalog))
		use("/contributors", new APICatalogContributors(model, mainmodule, catalog))
		use("/stats", new APICatalogStats(model, mainmodule, catalog))
	end
end

abstract class APICatalogHandler
	super APIHandler

	var catalog: Catalog

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
		obj["packages"] = model.mpackages.length
		obj["maintainers"] = catalog.maint2proj.length
		obj["contributors"] = catalog.contrib2proj.length
		obj["modules"] = catalog.mmodules.sum
		obj["classes"] = catalog.mclasses.sum
		obj["methods"] = catalog.mmethods.sum
		obj["loc"] = catalog.loc.sum
		res.json obj
	end
end

class APICatalogHighLighted
	super APICatalogHandler

	redef fun get(req, res) do res.json list_best(catalog.score)
end

class APICatalogMostRequired
	super APICatalogHandler

	redef fun get(req, res) do
		if catalog.deps.not_empty then
			var reqs = new Counter[MPackage]
			for p in model.mpackages do
				reqs[p] = catalog.deps[p].smallers.length - 1
			end
			res.json list_best(reqs)
			return
		end
		res.json new JsonArray
	end
end

class APICatalogByTags
	super APICatalogHandler

	redef fun get(req, res) do res.json list_by(catalog.tag2proj)
end

class APICatalogContributors
	super APICatalogHandler

	redef fun get(req, res) do
		var obj = new JsonObject
		obj["maintainers"] = new JsonArray.from(catalog.maint2proj.keys)
		obj["contributors"] = new JsonArray.from(catalog.contrib2proj.keys)
		res.json obj
	end
end

redef class Person
	super Jsonable

	redef fun to_json do
		var obj = new JsonObject
		obj["name"] = name
		obj["email"] = email
		obj["page"] = page
		obj["hash"] = (email or else "").md5.to_lower
		return obj.to_json
	end
end
