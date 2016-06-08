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

# Specific nitcorn Action that uses a Model
class ModelHandler
	super Handler

	# Model to use.
	var model: Model

	# MModule used to flatten model.
	var mainmodule: MModule

	# Find the MEntity ` with `full_name`.
	fun find_mentity(model: ModelView, full_name: nullable String): nullable MEntity do
		if full_name == null then return null
		return model.mentity_by_full_name(full_name.from_percent_encoding)
	end

	# Init the model view from the `req` uri parameters.
	fun init_model_view(req: HttpRequest): ModelView do
		var view = new ModelView(model)
		var show_private = req.bool_arg("private") or else false
		if not show_private then view.min_visibility = protected_visibility

		view.include_fictive = req.bool_arg("fictive") or else false
		view.include_empty_doc = req.bool_arg("empty-doc") or else true
		view.include_test_suite = req.bool_arg("test-suite") or else false
		view.include_attribute = req.bool_arg("attributes") or else true

		return view
	end
end

# Specific handler for nitweb API.
abstract class APIHandler
	super ModelHandler

	# The JSON API does not filter anything by default.
	#
	# So we can cache the model view.
	var view: ModelView is lazy do
		var view = new ModelView(model)
		view.min_visibility = private_visibility
		view.include_fictive = true
		view.include_empty_doc = true
		view.include_attribute = true
		view.include_test_suite = true
		return view
	end

	# Try to load the mentity from uri with `/:id`.
	#
	# Send 400 if `:id` is null.
	# Send 404 if no entity is found.
	# Return null in both cases.
	fun mentity_from_uri(req: HttpRequest, res: HttpResponse): nullable MEntity do
		var id = req.param("id")
		if id == null then
			res.error 400
			return null
		end
		var mentity = find_mentity(view, id)
		if mentity == null then
			res.error 404
		end
		return mentity
	end
end

# A NitView is rendered by an action.
interface NitView
	# Renders this view and returns something that can be written to a HTTP response.
	fun render: Writable is abstract
end

redef class HttpResponse
	# Render a NitView as response.
	fun send_view(view: NitView, status: nullable Int) do send(view.render, status)
end

redef class MEntity

	# URL to `self` within the web interface.
	fun web_url: String is abstract

	# URL to `self` within the JSON api.
	fun api_url: String do return "/api/entity/" / full_name

	redef fun json do
		var obj = super
		obj["web_url"] = web_url
		obj["api_url"] = api_url
		return obj
	end

	# Get the full json repesentation of `self` with MEntityRefs resolved.
	fun api_json(handler: ModelHandler): JsonObject do return json
end

redef class MEntityRef
	redef fun json do
		var obj = super
		obj["web_url"] = mentity.web_url
		obj["api_url"] = mentity.api_url
		obj["name"] = mentity.name
		obj["mdoc"] = mentity.mdoc_or_fallback
		obj["visibility"] = mentity.visibility
		obj["location"] = mentity.location
		var modifiers = new JsonArray
		for modifier in mentity.collect_modifiers do
			modifiers.add modifier
		end
		obj["modifiers"] = modifiers
		return obj
	end
end

redef class MDoc

	# Add doc down processing
	redef fun json do
		var obj = super
		obj["synopsis"] = synopsis
		obj["documentation"] = documentation
		obj["comment"] = comment
		obj["html_synopsis"] = html_synopsis.write_to_string
		obj["html_documentation"] = html_documentation.write_to_string
		obj["html_comment"] = html_comment.write_to_string
		return obj
	end
end

redef class MPackage
	redef var web_url = "/package/{full_name}" is lazy
end

redef class MGroup
	redef var web_url = "/group/{full_name}" is lazy
end

redef class MModule
	redef var web_url = "/module/{full_name}" is lazy

	redef fun api_json(handler) do
		var obj = super
		obj["intro_mclassdefs"] = to_mentity_refs(collect_intro_mclassdefs(private_view))
		obj["redef_mclassdefs"] = to_mentity_refs(collect_redef_mclassdefs(private_view))
		obj["imports"] = to_mentity_refs(in_importation.direct_greaters)
		return obj
	end
end

redef class MClass
	redef var web_url = "/class/{full_name}" is lazy

	redef fun api_json(handler) do
		var obj = super
		obj["all_mproperties"] = to_mentity_refs(collect_accessible_mproperties(private_view))
		obj["intro_mproperties"] = to_mentity_refs(collect_intro_mproperties(private_view))
		obj["redef_mproperties"] = to_mentity_refs(collect_redef_mproperties(private_view))
		obj["parents"] = to_mentity_refs(collect_parents(private_view))
		return obj
	end
end

redef class MClassDef
	redef var web_url = "/classdef/{full_name}" is lazy

	redef fun json do
		var obj = super
		obj["intro"] = to_mentity_ref(mclass.intro)
		obj["mpackage"] = to_mentity_ref(mmodule.mpackage)
		return obj
	end

	redef fun api_json(handler) do
		var obj = super
		obj["intro_mpropdefs"] = to_mentity_refs(collect_intro_mpropdefs(private_view))
		obj["redef_mpropdefs"] = to_mentity_refs(collect_redef_mpropdefs(private_view))
		return obj
	end
end

redef class MProperty
	redef var web_url = "/property/{full_name}" is lazy

	redef fun json do
		var obj = super
		obj["intro_mclass"] = to_mentity_ref(intro_mclassdef.mclass)
		obj["mpackage"] = to_mentity_ref(intro_mclassdef.mmodule.mpackage)
		return obj
	end
end

redef class MPropDef
	redef var web_url = "/propdef/{full_name}" is lazy

	redef fun json do
		var obj = super
		obj["intro"] = to_mentity_ref(mproperty.intro)
		obj["intro_mclassdef"] = to_mentity_ref(mproperty.intro.mclassdef)
		obj["mmodule"] = to_mentity_ref(mclassdef.mmodule)
		obj["mgroup"] = to_mentity_ref(mclassdef.mmodule.mgroup)
		obj["mpackage"] = to_mentity_ref(mclassdef.mmodule.mpackage)
		return obj
	end
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
