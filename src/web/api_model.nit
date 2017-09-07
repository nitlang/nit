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

module api_model

import web_base
import highlight
import uml
import model::model_index

redef class APIRouter
	redef init do
		super
		use("/list", new APIList(config))
		use("/search", new APISearch(config))
		use("/random", new APIRandom(config))
		use("/entity/:id", new APIEntity(config))
		use("/entity/:id/doc", new APIEntityDoc(config))
		use("/code/:id", new APIEntityCode(config))
		use("/uml/:id", new APIEntityUML(config))
		use("/linearization/:id", new APIEntityLinearization(config))
		use("/defs/:id", new APIEntityDefs(config))
		use("/inheritance/:id", new APIEntityInheritance(config))
	end
end

# List all mentities.
#
# MEntities can be filtered on their kind using the `k` parameter.
# Allowed kinds are `package`, `group`, `module`, `class`, `classdef`, `property`, `propdef`.
#
# List size can be limited with the `n` parameter.
#
# Example: `GET /list?k=module?n=10`
class APIList
	super APIHandler

	# List mentities depending on the `k` kind parameter.
	fun list_mentities(req: HttpRequest): Array[MEntity] do
		var k = req.string_arg("k")
		var mentities = new Array[MEntity]
		if k == "package" then
			for mentity in config.view.mpackages do mentities.add mentity
		else if k == "group" then
			for mentity in config.view.mgroups do mentities.add mentity
		else if k == "module" then
			for mentity in config.view.mmodules do mentities.add mentity
		else if k == "class" then
			for mentity in config.view.mclasses do mentities.add mentity
		else if k == "classdef" then
			for mentity in config.view.mclassdefs do mentities.add mentity
		else if k == "property" then
			for mentity in config.view.mproperties do mentities.add mentity
		else if k == "propdef" then
			for mentity in config.view.mpropdefs do mentities.add mentity
		else
			for mentity in config.view.mentities do mentities.add mentity
		end
		return mentities
	end

	# Sort mentities by lexicographic order
	#
	# TODO choose order from request
	fun sort_mentities(req: HttpRequest, mentities: Array[MEntity]) : Array[MEntity] do
		var sorted = mentities.to_a
		var sorter = new MEntityNameSorter
		sorter.sort(sorted)
		return sorted
	end

	# Limit mentities depending on the `n` parameter.
	fun limit_mentities(req: HttpRequest, mentities: Array[MEntity]): Array[MEntity] do
		var n = req.int_arg("n")
		if n != null then
			return mentities.sub(0, n)
		end
		return mentities
	end

	redef fun get(req, res) do
		var mentities = list_mentities(req)
		mentities = sort_mentities(req, mentities)
		mentities = limit_mentities(req, mentities)
		res.json new JsonArray.from(mentities)
	end
end

# Search mentities from a query string.
#
# Example: `GET /search?q=Arr`
class APISearch
	super APIList

	redef fun get(req, res) do
		var q = req.string_arg("q")
		if q == null then
			res.json new JsonArray
			return
		end
		var n = req.int_arg("n")
		res.json new JsonArray.from(config.view.find(q, n))
	end
end

# Return a random list of MEntities.
#
# Example: `GET /random?n=10&k=module`
class APIRandom
	super APIList

	# Randomize mentities order.
	fun randomize_mentities(req: HttpRequest, mentities: Array[MEntity]): Array[MEntity] do
		var res = mentities.to_a
		res.shuffle
		return res
	end

	redef fun get(req, res) do
		var mentities = list_mentities(req)
		mentities = randomize_mentities(req, mentities)
		mentities = limit_mentities(req, mentities)
		res.json new JsonArray.from(mentities)
	end
end

# Return the JSON representation of a MEntity.
#
# Example: `GET /entity/core::Array`
class APIEntity
	super APIHandler

	redef fun get(req, res) do
		var mentity = mentity_from_uri(req, res)
		if mentity == null then return
		res.raw_json mentity.to_full_json
	end
end

# Return the full MDoc of a MEntity.
#
# Example: `GET /entity/core::Array/doc`
class APIEntityDoc
	super APIHandler

	redef fun get(req, res) do
		var mentity = mentity_from_uri(req, res)
		if mentity == null then return

		var obj = new JsonObject
		var mdoc = mentity.mdoc_or_fallback
		if mdoc != null then
			obj["documentation"] = mdoc.html_documentation.write_to_string
			obj["location"] = mdoc.location
		end
		res.json obj
	end
end

# List ancestors, parents, child and descendants of MEntity
#
# Example: `GET /entity/core::Array/inheritance`
class APIEntityInheritance
	super APIHandler

	redef fun get(req, res) do
		var mentity = mentity_from_uri(req, res)
		if mentity == null then return
		res.json mentity.hierarchy_poset(config.view)[mentity]
	end
end

# Linearize super definitions of a MClassDef or a MPropDef if any.
#
# Example: `GET /entity/core::Array/linearization`
class APIEntityLinearization
	super APIHandler

	redef fun get(req, res) do
		var mentity = mentity_from_uri(req, res)
		if mentity == null then return
		var lin = mentity.collect_linearization(config.mainmodule)
		if lin == null then
			res.api_error(404, "No linearization for mentity `{mentity.full_name}`")
			return
		end
		var mentities = new JsonArray
		for e in lin do mentities.add e
		res.json mentities
	end
end

# List definitions of a MEntity.
#
# Example: `GET /defs/core::Array`
class APIEntityDefs
	super APIList

	redef fun get(req, res) do
		var mentity = mentity_from_uri(req, res)
		if mentity == null then return
		var mentities: Array[MEntity]
		if mentity isa MPackage then
			mentities = mentity.mgroups.to_a
		else if mentity isa MGroup then
			mentities = new Array[MEntity]
			mentities.add_all mentity.in_nesting.direct_smallers
			mentities.add_all mentity.mmodules
		else if mentity isa MModule then
			mentities = mentity.mclassdefs
		else if mentity isa MClass then
			mentities = mentity.mclassdefs
		else if mentity isa MClassDef then
			mentities = mentity.mpropdefs
		else if mentity isa MProperty then
			mentities = mentity.mpropdefs
		else
			res.api_error(404, "No definition list for mentity `{mentity.full_name}`")
			return
		end
		mentities = sort_mentities(req, mentities)
		mentities = limit_mentities(req, mentities)
		res.json new JsonArray.from(mentities)
	end
end

abstract class SVGHandler
	super APIHandler

	# Render a `dot` string as a svg image.
	fun render_dot(dot: Text): String do
		var proc = new ProcessDuplex("dot", "-Tsvg")
		var svg = proc.write_and_read(dot)
		proc.close
		proc.wait
		return svg
	end
end

# Return a UML representation of MEntity.
#
# Example: `GET /entity/core::Array/uml`
class APIEntityUML
	super SVGHandler

	redef fun get(req, res) do
		var mentity = mentity_from_uri(req, res)
		if mentity == null then return
		var dot
		if mentity isa MClassDef then mentity = mentity.mclass
		if mentity isa MClass then
			var uml = new UMLModel(config.view, config.mainmodule)
			dot = uml.generate_class_uml.write_to_string
		else if mentity isa MModule then
			var uml = new UMLModel(config.view, mentity)
			dot = uml.generate_package_uml.write_to_string
		else
			res.api_error(404, "No UML for mentity `{mentity.full_name}`")
			return
		end
		res.send render_dot(dot)
	end
end

# Return the source code of MEntity.
#
# Example: `GET /entity/core::Array/code`
class APIEntityCode
	super APIHandler

	redef fun get(req, res) do
		var mentity = mentity_from_uri(req, res)
		if mentity == null then return
		var source = render_source(mentity)
		if source == null then
			res.api_error(404, "No code for mentity `{mentity.full_name}`")
			return
		end
		res.send source
	end

	# Highlight `mentity` source code.
	private fun render_source(mentity: MEntity): nullable HTMLTag do
		var node = config.modelbuilder.mentity2node(mentity)
		if node == null then return null
		var hl = new HighlightVisitor
		hl.enter_visit node
		return hl.html
	end
end
