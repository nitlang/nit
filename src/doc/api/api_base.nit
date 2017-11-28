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

# Base classes used by `nitweb`.
module api_base

import popcorn
import popcorn::pop_config
import popcorn::pop_repos
import popcorn::pop_json

import commands::commands_http
import commands::commands_json
import commands::commands_html

# Nitweb config file.
class NitwebConfig
	super AppConfig

	redef fun default_db_name do return "nitweb"

	# Model to use.
	var model: Model

	# MModule used to flatten model.
	var mainmodule: MModule

	# Modelbuilder used to access sources.
	var modelbuilder: ModelBuilder

	# The JSON API does not filter anything by default.
	#
	# So we can cache the model view.
	var view: ModelView

	# Catalog to pass to handlers.
	var catalog: Catalog is noinit

	# Build the catalog
	#
	# This method should be called at nitweb startup.
	# TODO move to nitweb
	fun build_catalog do
		var catalog = new Catalog(modelbuilder)
		# Compute the poset
		for p in view.mpackages do
			var g = p.root
			assert g != null
			modelbuilder.scan_group(g)

			catalog.deps.add_node(p)
			for gg in p.mgroups do for m in gg.mmodules do
				for im in m.in_importation.direct_greaters do
					var ip = im.mpackage
					if ip == null or ip == p then continue
					catalog.deps.add_edge(p, ip)
				end
			end
		end
		# Build the catalog
		for mpackage in view.mpackages do
			catalog.package_page(mpackage)
			catalog.git_info(mpackage)
			catalog.mpackage_stats(mpackage)
		end
		self.catalog = catalog
	end
end

# Specific handler for the nitweb API.
abstract class APIHandler
	super Handler

	# App config.
	var config: NitwebConfig

	# Find the MEntity ` with `full_name`.
	fun find_mentity(model: ModelView, full_name: nullable String): nullable MEntity do
		if full_name == null then return null
		var mentity = model.mentity_by_full_name(full_name.from_percent_encoding)
		if mentity == null then return null
		if config.view.accept_mentity(mentity) then return mentity
		return null
	end

	# Try to load the mentity from uri with `/:id`.
	#
	# Send 400 if `:id` is null.
	# Send 404 if no entity is found.
	# Return null in both cases.
	fun mentity_from_uri(req: HttpRequest, res: HttpResponse): nullable MEntity do
		var id = req.param("id")
		if id == null then
			res.api_error(400, "Expected mentity full name")
			return null
		end
		var mentity = find_mentity(config.view, id)
		if mentity == null then
			res.api_error(404, "MEntity `{id}` not found")
		end
		return mentity
	end

	# Paginate a json array
	#
	# Returns only a subset of `results` depending on the current `page` and the
	# number of elements to return set by `limit`.
	#
	# Transforms the json array into an object:
	# ~~~json
	# {
	#	"page": 2,
	#	"limit": 10,
	#	"results: [ ... ],
	#	"max": 5,
	#	"total": 49
	# }
	# ~~~
	fun paginate(results: JsonArray, count: Int, page, limit: nullable Int): JsonObject do
		if page == null or page <= 0 then page = 1
		if limit == null or limit <= 0 then limit = 20

		var max = count / limit
		if max == 0 then
			page = 1
			max = 1
		else if page > max then
			page = max
		end

		var lstart = (page - 1) * limit
		var lend = limit
		if lstart + lend > count then lend = count - lstart

		var res = new JsonObject
		res["page"] = page
		res["limit"] = limit
		res["results"] = new JsonArray.from(results.subarray(lstart, lend))
		res["max"] = max
		res["total"] = count
		return res
	end
end

# A Rooter dedicated to APIHandlers.
class APIRouter
	super Router

	# App config
	var config: NitwebConfig
end

redef class HttpResponse

	# Return an HTTP error response with `status`
	#
	# Like the rest of the API, errors are formated as JSON:
	# ~~~json
	# { "status": 404, "message": "Not found" }
	# ~~~
	fun api_error(status: Int, message: String) do
		json(new APIError(status, message), status)
	end

	# Return `serializable` as a json string
	#
	# Uses `req` to define serialization options.
	fun api_json(req: HttpRequest, serializable: nullable Serializable, status: nullable Int, plain, pretty: nullable Bool) do
		json(serializable, status, plain, req.bool_arg("pretty"))
	end
end

# An error returned by the API.
#
# Can be serialized to json.
class APIError
	serialize

	# Reponse status
	var status: Int

	# Response error message
	var message: String
end

redef class MEntity

	# URL to `self` within the web interface.
	fun web_url: String do return "/doc/" / full_name

	# URL to `self` within the JSON api.
	fun api_url: String do return "/api/entity/" / full_name

	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("web_url", web_url)
		v.serialize_attribute("api_url", api_url)
	end
end

redef class MEntityRef
	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("web_url", mentity.web_url)
		v.serialize_attribute("api_url", mentity.api_url)
	end
end

redef class MClassDef
	redef fun web_url do return "{mclass.web_url}/lin#{full_name}"
end

redef class MPropDef
	redef fun web_url do return "{mproperty.web_url}/lin#{full_name}"
end

redef class MType
	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("web_url", web_url)
		v.serialize_attribute("api_url", api_url)
	end
end

redef class MClassType
	redef var web_url = mclass.web_url is lazy
	redef var api_url = mclass.api_url is lazy
end

redef class MNullableType
	redef var web_url = mtype.web_url is lazy
	redef var api_url = mtype.api_url is lazy
end

redef class MParameterType
	redef var web_url = mclass.web_url is lazy
	redef var api_url = mclass.api_url is lazy
end

redef class MVirtualType
	redef var web_url = mproperty.web_url is lazy
	redef var api_url = mproperty.api_url is lazy
end
