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

# Nitcorn actions used by the nitweb server.
module web_actions

import web_views

# Display the tree of all loaded mentities.
class TreeAction
	super ModelAction

	redef fun answer(request, url) do
		var model = init_model_view(request)
		var view = new HtmlHomePage(model.model)
		return render_view(view)
	end
end

# Display the list of mentities matching `namespace`.
class SearchAction
	super ModelAction

	# TODO handle more than full namespaces.
	redef fun answer(request, url) do
		var namespace = request.param("namespace")
		if namespace == null or namespace.is_empty then
			return render_error(400, "Missing :namespace.")
		end
		var model = init_model_view(request)
		var mentities = model.mentities_by_namespace(namespace)
		if request.is_json_asked then
			var json = new JsonArray
			for mentity in mentities do
				json.add mentity.to_json
			end
			return render_json(json)
		end
		var view = new HtmlResultPage(namespace, mentities)
		return render_view(view)
	end
end

# Display a MEntity source code.
class CodeAction
	super ModelAction

	# Modelbuilder used to access sources.
	var modelbuilder: ModelBuilder

	# TODO handle more than full namespaces.
	redef fun answer(request, url) do
		var namespace = request.param("namespace")
		if namespace == null or namespace.is_empty then
			return render_error(400, "Missing :namespace.")
		end
		var model = init_model_view(request)
		var mentities = model.mentities_by_namespace(namespace)
		if mentities.is_empty then
			return render_error(404, "No mentity matching this namespace.")
		end
		var view = new HtmlSourcePage(modelbuilder, mentities.first)
		return render_view(view)
	end
end

# Display the doc of a MEntity.
class DocAction
	super ModelAction

	# Modelbuilder used to access sources.
	var modelbuilder: ModelBuilder

	# TODO handle more than full namespaces.
	redef fun answer(request, url) do
		var namespace = request.param("namespace")
		if namespace == null or namespace.is_empty then
			return render_error(400, "Missing :namespace.")
		end
		var model = init_model_view(request)
		var mentities = model.mentities_by_namespace(namespace)
		if mentities.is_empty then
			return render_error(404, "No mentity matching this namespace.")
		end
		var view = new HtmlDocPage(modelbuilder, mentities.first)
		return render_view(view)
	end
end

# Return a random list of MEntities.
class RandomAction
	super ModelAction

	# TODO handle more than full namespaces.
	redef fun answer(request, url) do
		var n = request.int_arg("n") or else 10
		var k = request.string_arg("k") or else "modules"
		var model = init_model_view(request)
		var mentities: Array[MEntity]
		if k == "modules" then
			mentities = model.mmodules.to_a
		else if k == "classdefs" then
			mentities = model.mclassdefs.to_a
		else
			mentities = model.mpropdefs.to_a
		end
		mentities.shuffle
		mentities = mentities.sub(0, n)
		if request.is_json_asked then
			var json = new JsonArray
			for mentity in mentities do
				json.add mentity.to_json
			end
			return render_json(json)
		end
		var view = new HtmlResultPage("random", mentities)
		return render_view(view)
	end
end

redef class MEntity

	# Return `self` as a JsonObject.
	fun to_json: JsonObject do
		var obj = new JsonObject
		obj["name"] = html_name
		obj["namespace"] = html_raw_namespace
		var mdoc = self.mdoc
		if mdoc != null then
			obj["synopsis"] = mdoc.content.first.html_escape
			obj["mdoc"] = mdoc.content.join("\n").html_escape
		end
		return obj
	end
end
