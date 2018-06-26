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

# Initialize commands from HTTP requests
#
# FIXME: this module is pretty tied up to the nitwed routes.
# To be more generic, param names should be extracted as variables.
module commands_http

import commands_catalog
import commands_graph
import commands_ini
import commands_main
import commands_usage

import nitcorn::vararg_routes

redef class DocCommand
	# Init the command from an HTTPRequest
	fun http_init(req: HttpRequest): CmdMessage do
		var filter = cmd_filter
		var opt_vis = req.visibility_arg("min-visibility")
		if opt_vis != null then filter.min_visibility = opt_vis
		var opt_fictive = req.bool_arg("no-fictive")
		if opt_fictive != null then filter.accept_fictive = not opt_fictive
		var opt_test = req.bool_arg("no-test")
		if opt_test != null then filter.accept_test = not opt_test
		var opt_redef = req.bool_arg("no-redef")
		if opt_redef != null then filter.accept_redef = not opt_redef
		var opt_extern = req.bool_arg("no-extern")
		if opt_extern != null then filter.accept_extern = not opt_extern
		var opt_example = req.bool_arg("no-example")
		if opt_example != null then filter.accept_example = not opt_example
		var opt_attr = req.bool_arg("no-attribute")
		if opt_attr != null then filter.accept_attribute = not opt_attr
		var opt_doc = req.bool_arg("no-empty-doc")
		if opt_doc != null then filter.accept_empty_doc = not opt_doc
		var opt_inh = req.mentity_arg(model, "inherit")
		if opt_inh != null then filter.accept_inherited = opt_inh
		var opt_match = req.string_arg("match")
		if opt_match != null then filter.accept_full_name = opt_match
		self.filter = filter
		return init_command
	end
end

redef class CmdEntity
	redef fun http_init(req) do
		var name = req.param("id")
		if name != null then name = name.from_percent_encoding
		self.mentity_name = name

		return super
	end
end

redef class CmdList
	redef fun http_init(req) do
		var opt_limit = req.int_arg("l")
		if opt_limit != null then limit = opt_limit
		var opt_page = req.int_arg("p")
		if opt_page != null then page = opt_page
		return super
	end
end

# Error Handling

# Message handling

redef class CmdMessage
	# HTTP code to return for this message
	var http_status_code = 200
end

redef class CmdError
	redef var http_status_code = 400
end

redef class CmdWarning
	redef var http_status_code = 404
end

redef class ErrorMEntityNoName
	redef var http_status_code = 400
end

redef class ErrorMEntityNotFound
	redef var http_status_code = 404
end

redef class ErrorMEntityConflict
	redef var http_status_code = 300
end

# CmdModel

redef class CmdComment
	redef fun http_init(req) do
		var opt_full_doc = req.bool_arg("full_doc")
		if opt_full_doc != null then full_doc = opt_full_doc
		var opt_fallback = req.bool_arg("fallback")
		if opt_fallback != null then fallback = opt_fallback
		var opt_format = req.string_arg("format")
		if opt_format != null then format = opt_format
		return super
	end
end

redef class CmdEntityLink
	redef fun http_init(req) do
		var opt_text = req.string_arg("text")
		if opt_text != null then text = opt_text
		var opt_title = req.string_arg("title")
		if opt_title != null then title = opt_title
		return super
	end
end

redef class CmdAncestors
	redef fun http_init(req) do
		var opt_parents = req.bool_arg("parents")
		if opt_parents != null then parents = opt_parents
		return super
	end
end

redef class CmdDescendants
	redef fun http_init(req) do
		var opt_children = req.bool_arg("children")
		if opt_children != null then children = opt_children
		return super
	end
end

redef class CmdEntityList
	# FIXME avoid linearization conflict
	redef fun http_init(req) do return super
end

redef class CmdSearch
	redef fun http_init(req) do
		query = req.string_arg("q")
		return super
	end
end

redef class CmdModelEntities
	redef fun http_init(req) do
		var opt_kind = req.string_arg("kind")
		if opt_kind != null then kind = opt_kind
		return super
	end
end

redef class CmdCode
	redef fun http_init(req) do
		var opt_format = req.string_arg("format")
		if opt_format != null then format = opt_format
		return super
	end
end

redef class CmdEntityCode
	# FIXME avoid linearization conflict
	redef fun http_init(req) do
		var name = req.param("id")
		if name != null then name = name.from_percent_encoding
		mentity_name = name

		var opt_format = req.string_arg("format")
		if opt_format != null then format = opt_format
		return init_command
	end
end

# CmdGraph

redef class CmdGraph
	redef fun http_init(req) do
		var opt_format = req.string_arg("format")
		if opt_format != null then format = opt_format
		return super
	end
end

redef class CmdInheritanceGraph
	redef fun http_init(req) do
		var opt_pdepth = req.int_arg("pdepth")
		if opt_pdepth != null then pdepth = opt_pdepth
		var opt_cdepth = req.int_arg("cdepth")
		if opt_cdepth != null then cdepth = opt_cdepth
		return super
	end
end

# CmdCatalog

redef class CmdCatalogTag
	redef fun http_init(req) do
		var tag = req.param("tid")
		if tag != null then tag = tag.from_percent_encoding
		self.tag = tag
		return super
	end
end

redef class CmdCatalogPerson
	redef fun http_init(req) do
		var name = req.param("pid")
		if name != null then name = name.from_percent_encoding
		self.person_name = name
		return super
	end
end

# Util

redef class HttpRequest

	# Map String visiblity name to MVisibility object
	var allowed_visibility: HashMap[String, MVisibility] is lazy do
		var res = new HashMap[String, MVisibility]
		res["public"] = public_visibility
		res["protected"] = protected_visibility
		res["private"] = private_visibility
		return res
	end

	# Get arg as a MVisibility
	#
	# Return `null` if no option with that `key` or if the value is not in
	# `allowed_visibility`.
	fun visibility_arg(key: String): nullable MVisibility do
		var value = string_arg(key)
		if value == null then return null
		if not allowed_visibility.keys.has(key) then return null
		return allowed_visibility[value]
	end

	# Get arg as a MEntity
	#
	# Lookup first by `MEntity::full_name` then by `MEntity::name`.
	# Return `null` if the mentity name does not exist or return a conflict.
	private fun mentity_arg(model: Model, key: String): nullable MEntity do
		var value = string_arg(key)
		if value == null or value.is_empty then return null

		var mentity = model.mentity_by_full_name(value)
		if mentity != null then return mentity

		var mentities = model.mentities_by_name(value)
		if mentities.is_empty or mentities.length > 1 then return null
		return mentities.first
	end
end
