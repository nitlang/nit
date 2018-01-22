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

# A parser that create DocCommand from a string
#
# Used by both Nitx and the Markdown doc commands.
module commands_parser

import commands::commands_model
import commands::commands_graph
import commands::commands_usage
import commands::commands_catalog

# Parse string commands to create DocQueries
class CommandParser

	# ModelView used to retrieve mentities
	var view: ModelView

	# ModelBuilder used to retrieve AST nodes
	var modelbuilder: ModelBuilder

	# Catalog used for catalog commands
	var catalog: nullable Catalog

	# List of allowed command names for this parser
	var allowed_commands: Array[String] = [
	"doc", "code", "lin", "uml", "graph", "search",
	"parents", "ancestors", "children", "descendants",
	"param", "return", "new", "call", "defs", "list", "random",
	"catalog", "stats", "tags", "tag", "person", "contrib", "maintain"] is writable

	# List of commands usage and documentation
	var commands_usage: Map[String, String] do
		var usage = new ArrayMap[String, String]
		usage["search: <string>"] = "list entities matching `string`"
		usage["doc: <name>"] = "display the documentation for `name`"
		usage["defs: <name>"] = "list all definitions for `name`"
		usage["code: <name>"] = "display the code for `name`"
		usage["lin: <name>"] = "display the linearization for `name`"
		usage["uml: <name>"] = "display the UML diagram for `name`"
		usage["graph: <name>"] = "display the inheritance graph for `name`"
		usage["parents: <name>"] = "list the direct parents of `name`"
		usage["ancestors: <name>"] = "list all ancestors of `name`"
		usage["children: <name>"] = "list direct children of `name`"
		usage["descendants: <name>"] = "list all descendants of `name`"
		usage["param: <type>"] = "list all methods accepting `type` as parameter"
		usage["return: <type>"] = "list all methods returning `type`"
		usage["new: <class>"] = "list all methods initializing `class`"
		usage["call: <property>"] = "list all methods calling `property`"
		usage["list: <kind>"] = "list all entities of `kind` from the model"
		usage["random: <kind>"] = "list random entities of `kind` from the model"
		usage["catalog:"] = "list packages from catalog"
		usage["stats:"] = "display catalog statistics"
		usage["tags:"] = "list all tabs from catalog"
		usage["tag: <tag>"] = "list all packages with `tag`"
		usage["maintain: <person>"] = "list all packages maintained by `person`"
		usage["contrib: <person>"] = "list all packages contributed by `person`"
		return usage
	end

	# Parse `string` as a DocCommand
	#
	# Returns `null` if the string cannot be parsed.
	# See `error` for the error messages produced by both the parser and the commands.
	fun parse(string: String): nullable DocCommand do
		var pos = 0
		var tmp = new FlatBuffer
		error = null

		# Parse command name
		pos = string.read_until(tmp, pos, ':')
		var name = tmp.write_to_string.trim

		# Check allowed commands
		if name.is_empty then
			error = new CmdParserError("empty command name", 0)
			return null
		end
		if not allowed_commands.has(name) then
			error = new CmdParserError("unknown command name", 0)
			return null
		end

		# Parse the argument
		tmp.clear
		pos = string.read_until(tmp, pos + 1, '|')
		var arg = tmp.write_to_string.trim

		# Parse command options
		var opts = new HashMap[String, String]
		while pos < string.length do
			# Parse option name
			tmp.clear
			pos = string.read_until(tmp, pos + 1, ':', ',')
			var oname = tmp.write_to_string.trim
			var oval = ""
			if oname.is_empty then break
			# Parse option value
			if pos < string.length and string[pos] == ':' then
				tmp.clear
				pos = string.read_until(tmp, pos + 1, ',')
				oval = tmp.write_to_string.trim
			end
			opts[oname] = oval
		end

		# Build the command
		var command = new_command(name)
		if command == null then
			error = new CmdParserError("Unknown command name")
			return null
		end

		# Initialize command from string options
		var status = command.parser_init(arg, opts)
		if not status isa CmdSuccess then error = status

		return command
	end

	# Init a new DocCommand from its `name`
	#
	# You must redefine this method to add new custom commands.
	fun new_command(name: String): nullable DocCommand do
		# CmdEntity
		if name == "doc" then return new CmdComment(view)
		if name == "code" then return new CmdEntityCode(view, modelbuilder)
		if name == "lin" then return new CmdLinearization(view)
		if name == "defs" then return new CmdFeatures(view)
		if name == "parents" then return new CmdParents(view)
		if name == "ancestors" then return new CmdAncestors(view)
		if name == "children" then return new CmdChildren(view)
		if name == "descendants" then return new CmdDescendants(view)
		if name == "param" then return new CmdParam(view)
		if name == "return" then return new CmdReturn(view)
		if name == "new" then return new CmdNew(view, modelbuilder)
		if name == "call" then return new CmdCall(view, modelbuilder)
		# CmdGraph
		if name == "uml" then return new CmdUML(view)
		if name == "graph" then return new CmdInheritanceGraph(view)
		# CmdModel
		if name == "list" then return new CmdModelEntities(view)
		if name == "random" then return new CmdRandomEntities(view)
		# CmdCatalog
		var catalog = self.catalog
		if catalog != null then
			if name == "catalog" then return new CmdCatalogPackages(view, catalog)
			if name == "stats" then return new CmdCatalogStats(view, catalog)
			if name == "tags" then return new CmdCatalogTags(view, catalog)
			if name == "tag" then return new CmdCatalogTag(view, catalog)
			if name == "person" then return new CmdCatalogPerson(view, catalog)
			if name == "contrib" then return new CmdCatalogContributing(view, catalog)
			if name == "maintain" then return new CmdCatalogMaintaining(view, catalog)
			if name == "search" then return new CmdCatalogSearch(view, catalog)
		else
			if name == "search" then return new CmdSearch(view)
		end
		return null
	end

	# Error or warning from last call to `parse`
	var error: nullable CmdMessage = null
end

# An error produced by the CmdParser
class CmdParserError
	super CmdError

	# Error message
	var message: String

	# Column related to the error
	var column: nullable Int

	redef fun to_s do return message
end

redef class DocCommand

	# Initialize the command from the CommandParser data
	fun parser_init(arg: String, options: Map[String, String]): CmdMessage do
		return init_command
	end
end

redef class CmdEntity
	redef fun parser_init(mentity_name, options) do
		self.mentity_name = mentity_name
		return super
	end
end

redef class CmdList
	redef fun parser_init(mentity_name, options) do
		if options.has_key("limit") and options["limit"].is_int then limit = options["limit"].to_i
		return super
	end
end

# Model commands

redef class CmdComment
	redef fun parser_init(mentity_name, options) do
		full_doc = not options.has_key("only-synopsis")
		fallback = not options.has_key("no-fallback")
		if options.has_key("format") then format = options["format"]
		return super
	end
end

redef class CmdCode
	redef fun parser_init(mentity_name, options) do
		if options.has_key("format") then format = options["format"]
		return super
	end
end

redef class CmdSearch
	redef fun parser_init(mentity_name, options) do
		query = mentity_name
		if options.has_key("page") and options["page"].is_int then page = options["page"].to_i
		return super
	end
end

redef class CmdAncestors
	redef fun parser_init(mentity_name, options) do
		if options.has_key("parents") and options["parents"] == "false" then parents = false
		return super
	end
end

redef class CmdDescendants
	redef fun parser_init(mentity_name, options) do
		if options.has_key("children") and options["children"] == "false" then children = false
		return super
	end
end

redef class CmdModelEntities
	redef fun parser_init(kind, options) do
		self.kind = kind
		return super
	end
end

redef class CmdGraph
	redef fun parser_init(mentity_name, options) do
		if options.has_key("format") then format = options["format"]
		return super
	end
end

redef class CmdInheritanceGraph
	redef fun parser_init(mentity_name, options) do
		if options.has_key("pdepth") and options["pdepth"].is_int then
			pdepth = options["pdepth"].to_i
		end
		if options.has_key("cdepth") and options["cdepth"].is_int then
			cdepth = options["cdepth"].to_i
		end
		return super
	end
end

# Catalog commands

redef class CmdCatalogTag
	redef fun parser_init(mentity_name, options) do
		tag = mentity_name
		return super
	end
end

redef class CmdCatalogPerson
	redef fun parser_init(mentity_name, options) do
		person_name = mentity_name
		return super
	end
end

# Utils

redef class Text
	# Read `self` as raw text until `nend` and append it to the `out` buffer.
	private fun read_until(out: FlatBuffer, start: Int, nend: Char...): Int do
		var pos = start
		while pos < length do
			var c = self[pos]
			var end_reached = false
			for n in nend do
				if c == n then
					end_reached = true
					break
				end
			end
			if end_reached then break
			out.add c
			pos += 1
		end
		return pos
	end
end
