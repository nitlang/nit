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
module web_base

import model::model_views
import model::model_json
import doc_down
import popcorn
import popcorn::pop_config
import popcorn::pop_repos
import popcorn::pop_json

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
	var view: ModelView is lazy do
		var view = new ModelView(model)
		view.min_visibility = private_visibility
		view.include_fictive = true
		view.include_empty_doc = true
		view.include_attribute = true
		view.include_test = true
		return view
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
		return model.mentity_by_full_name(full_name.from_percent_encoding)
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

	# Write data as JSON and set the right content type header.
	fun raw_json(json: nullable String, status: nullable Int) do
		header["Content-Type"] = media_types["json"].as(not null)
		if json == null then
			send(null, status)
		else
			send(json, status)
		end
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

# Fullname representation that can be used to build decorated links
#
# * MPackage: `mpackage_name`
# * MGroup: `(mpackage_name::)mgroup_name`
class Namespace
	super Array[nullable NSEntity]
	super NSEntity
	serialize

	redef fun to_s do return self.join("")
	redef fun serialize_to(v) do to_a.serialize_to(v)
end

# Something that goes in a Namespace
#
# Can be either:
# * a `NSToken` for tokens like `::`, `>` and `$`
# * a `MSRef` for references to mentities
interface NSEntity
	super Serializable
end

# A reference to a MEntity that can be rendered as a link.
#
# We do not reuse `MEntityRef` ref since NSRef can be found in a ref and create
# an infinite loop.
class NSRef
	super NSEntity
	serialize

	# The mentity to link to/
	var mentity: MEntity

	redef fun core_serialize_to(v) do
		v.serialize_attribute("web_url", mentity.web_url)
		v.serialize_attribute("api_url", mentity.api_url)
		v.serialize_attribute("name", mentity.name)
	end
end

# A namespace token representation
#
# Used for namespace tokens like `::`, `>` and `$`
redef class String
	super NSEntity
end

redef class MEntity

	# URL to `self` within the web interface.
	fun web_url: String do return "/doc/" / full_name

	# URL to `self` within the JSON api.
	fun api_url: String do return "/api/entity/" / full_name

	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("namespace", namespace)
		v.serialize_attribute("web_url", web_url)
		v.serialize_attribute("api_url", api_url)
	end

	# Return `self.full_name` as an object that can be serialized to json.
	fun namespace: nullable Namespace do return null

	# Return a new NSRef to `self`.
	fun to_ns_ref: NSRef do return new NSRef(self)
end

redef class MEntityRef
	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("namespace", mentity.namespace)
		v.serialize_attribute("web_url", mentity.web_url)
		v.serialize_attribute("api_url", mentity.api_url)
		v.serialize_attribute("name", mentity.name)
		v.serialize_attribute("mdoc", mentity.mdoc_or_fallback)
		v.serialize_attribute("visibility", mentity.visibility.to_s)
		v.serialize_attribute("modifiers", mentity.collect_modifiers)
		var mentity = self.mentity
		if mentity isa MMethod then
			v.serialize_attribute("msignature", mentity.intro.msignature)
		else if mentity isa MMethodDef then
			v.serialize_attribute("msignature", mentity.msignature)
		else if mentity isa MVirtualTypeProp then
			v.serialize_attribute("bound", to_mentity_ref(mentity.intro.bound))
		else if mentity isa MVirtualTypeDef then
			v.serialize_attribute("bound", to_mentity_ref(mentity.bound))
		end
		v.serialize_attribute("location", mentity.location)
	end
end

redef class MDoc

	# Add doc down processing
	redef fun core_serialize_to(v) do
		v.serialize_attribute("html_synopsis", html_synopsis.write_to_string)
		v.serialize_attribute("html_documentation", html_documentation.write_to_string)
	end
end

redef class MPackage
	redef fun namespace do return new Namespace.from([to_ns_ref])
end

redef class MGroup
	redef fun namespace do
		var p = parent
		if p == null then
			return new Namespace.from([to_ns_ref, ">": nullable NSEntity])
		end
		return new Namespace.from([p.namespace, to_ns_ref, ">": nullable NSEntity])
	end
end

redef class MModule
	redef fun namespace do
		var mgroup = self.mgroup
		if mgroup == null then
			return new Namespace.from([to_ns_ref])
		end
		return new Namespace.from([mgroup.mpackage.to_ns_ref, "::", to_ns_ref: nullable NSEntity])
	end

	private fun ns_for(visibility: MVisibility): nullable Namespace do
		if visibility <= private_visibility then return namespace
		var mgroup = self.mgroup
		if mgroup == null then return namespace
		return mgroup.mpackage.namespace
	end
end

redef class MClass
	redef fun namespace do
		return new Namespace.from([intro_mmodule.ns_for(visibility), "::", to_ns_ref: nullable NSEntity])
	end
end

redef class MClassDef
	redef fun namespace do
		if is_intro then
			return new Namespace.from([mmodule.ns_for(mclass.visibility), "$", to_ns_ref: nullable NSEntity])
		else if mclass.intro_mmodule.mpackage != mmodule.mpackage then
			return new Namespace.from([mmodule.namespace, "$", mclass.namespace: nullable NSEntity])
		else if mclass.visibility > private_visibility then
			return new Namespace.from([mmodule.namespace, "$", mclass.to_ns_ref: nullable NSEntity])
		end
		return new Namespace.from([mmodule.full_name, "$::", mclass.intro_mmodule.to_ns_ref: nullable NSEntity])
	end

	redef fun web_url do return "{mclass.web_url}/lin#{full_name}"
end

redef class MProperty
	redef fun namespace do
		if intro_mclassdef.is_intro then
			return new Namespace.from([intro_mclassdef.mmodule.ns_for(visibility), "::", intro_mclassdef.mclass.to_ns_ref, "::", to_ns_ref: nullable NSEntity])
		else
			return new Namespace.from([intro_mclassdef.mmodule.namespace, "::", intro_mclassdef.mclass.to_ns_ref, "::", to_ns_ref: nullable NSEntity])
		end
	end
end

redef class MPropDef
	redef fun namespace do
		var res = new Namespace
		res.add mclassdef.namespace
		res.add "$"

		if mclassdef.mclass == mproperty.intro_mclassdef.mclass then
			res.add to_ns_ref
		else
			if mclassdef.mmodule.mpackage != mproperty.intro_mclassdef.mmodule.mpackage then
				res.add mproperty.intro_mclassdef.mmodule.ns_for(mproperty.visibility)
				res.add "::"
			else if mproperty.visibility <= private_visibility then
				if mclassdef.mmodule.namespace_for(mclassdef.mclass.visibility) != mproperty.intro_mclassdef.mmodule.mpackage then
					res.add "::"
					res.add mproperty.intro_mclassdef.mmodule.to_ns_ref
					res.add "::"
				end
			end
			if mclassdef.mclass != mproperty.intro_mclassdef.mclass then
				res.add mproperty.intro_mclassdef.to_ns_ref
				res.add "::"
			end
			res.add to_ns_ref
		end
		return res
	end

	redef fun web_url do return "{mproperty.web_url}/lin#{full_name}"
end

redef class MClassType
	redef var web_url = mclass.web_url is lazy
end

redef class MNullableType
	redef var web_url = mtype.web_url is lazy
end

redef class MParameterType
	redef var web_url = mclass.web_url is lazy
end

redef class MVirtualType
	redef var web_url = mproperty.web_url is lazy
end

redef class POSetElement[E]
	super Serializable

	redef fun serialize_to(v) do
		assert self isa POSetElement[MEntity]
		v.serialize_attribute("greaters", to_mentity_refs(greaters))
		v.serialize_attribute("direct_greaters", to_mentity_refs(direct_greaters))
		v.serialize_attribute("direct_smallers", to_mentity_refs(direct_smallers))
		v.serialize_attribute("smallers", to_mentity_refs(smallers))
	end
end
