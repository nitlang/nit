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
import model::model_collect

# Display the tree of all loaded mentities.
class TreeAction
	super NitAction

	# Model to explore and render.
	var model: Model

	# View to render.
	var view = new HtmlHomePage(model) is lazy

	redef fun answer(request, url) do return render_view(view)
end

# Display the list of mentities matching `namespace`.
class SearchAction
	super NitAction

	# Model to explore and render.
	var model: Model

	# TODO handle more than full namespaces.
	redef fun answer(request, url) do
		var namespace = request.param("namespace")
		if namespace == null or namespace.is_empty then
			return render_error(400, "Missing :namespace.")
		end
		var mentities = model.collect_by_namespace(namespace)
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
	super NitAction

	# Model to explore and render.
	var model: Model

	# Modelbuilder used to access sources.
	var modelbuilder: ModelBuilder

	# TODO handle more than full namespaces.
	redef fun answer(request, url) do
		var namespace = request.param("namespace")
		if namespace == null or namespace.is_empty then
			return render_error(400, "Missing :namespace.")
		end
		var mentities = model.collect_by_namespace(namespace)
		if mentities.is_empty then
			return render_error(404, "No mentity matching this namespace.")
		end
		var view = new HtmlSourcePage(modelbuilder, mentities.first)
		return render_view(view)
	end
end

# Display the doc of a MEntity.
class DocAction
	super NitAction

	# Model to explore and render.
	var model: Model

	# Modelbuilder used to access sources.
	var modelbuilder: ModelBuilder

	# TODO handle more than full namespaces.
	redef fun answer(request, url) do
		var namespace = request.param("namespace")
		if namespace == null or namespace.is_empty then
			return render_error(400, "Missing :namespace.")
		end
		var mentities = model.collect_by_namespace(namespace)
		if mentities.is_empty then
			return render_error(404, "No mentity matching this namespace.")
		end
		var view = new HtmlDocPage(modelbuilder, mentities.first)
		return render_view(view)
	end
end

# Return a random list of MEntities.
class RandomAction
	super NitAction

	# Model to explore and render.
	var model: Model

	# TODO handle more than full namespaces.
	redef fun answer(request, url) do
		var n = request.int_arg("n") or else 10
		var k = request.string_arg("k") or else "modules"
		var mentities: Array[MEntity]
		if k == "modules" then
			mentities = model.mmodules.to_a
		else if k == "classdefs" then
			mentities = new Array[MClassDef]
			for mclass in model.mclasses do
				mentities.add_all(mclass.mclassdefs)
			end
		else
			mentities = new Array[MPropDef]
			for mprop in model.mproperties do
				mentities.add_all(mprop.mpropdefs)
			end
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
