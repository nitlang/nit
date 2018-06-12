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

import commands_catalog
import commands_graph
import commands_ini
import commands_main
import commands_usage

# Parse string commands to create DocQueries
class CommandParser

	# Model used to retrieve mentities
	var model: Model

	# Main module for linearization
	var mainmodule: MModule

	# ModelBuilder used to retrieve AST nodes
	var modelbuilder: ModelBuilder

	# Catalog used for catalog commands
	var catalog: nullable Catalog

	# Filter to apply on model if any
	var filter: nullable ModelFilter

	# List of allowed command names for this parser
	var allowed_commands: Array[String] = [
	"link", "doc", "code", "lin", "uml", "graph", "search",
	"parents", "ancestors", "children", "descendants",
	"param", "return", "new", "call", "defs", "list", "random",
	"ini-desc", "ini-git", "ini-issues", "ini-maintainer", "ini-contributors", "ini-license",
	"license-file", "contrib-file", "license-content", "contrib-content", "git-clone",
	"mains", "main-compile", "main-run", "main-opts", "testing",
	"catalog", "stats", "tags", "tag", "person", "contrib", "maintain"] is writable

	# List of commands usage and documentation
	var commands_usage: Map[String, String] do
		var usage = new ArrayMap[String, String]
		usage["search: <string>"] = "list entities matching `string`"
		usage["link: <name>"] = "display the link to `name`"
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
		# Ini commands
		usage["ini-desc: <package>"] = "display the description from the `package` ini file"
		usage["ini-git: <package>"] = "display the git url from the `package` ini file"
		usage["ini-issues: <package>"] = "display the issues url from the `package` ini file"
		usage["ini-license: <package>"] = "display the license from the `package` ini file"
		usage["ini-maintainer: <package>"] = "display the maintainer from the `package` ini file"
		usage["ini-contributors: <package>"] = "display the contributors from the `package` ini file"
		usage["license-file: <package>"] = "display the license file for the `package`"
		usage["license-content: <package>"] = "display the license file content for the `package`"
		usage["contrib-file: <package>"] = "display the contrib file for the `package`"
		usage["contrib-content: <package>"] = "display the contrib file content for the `package`"
		usage["git-clone: <package>"] = "display the git clone command for the `package`"
		# Main
		usage["mains: <name>"] = "display the list of main methods for `name`"
		usage["main-compile: <name>"] = "display the nitc command to compile `name`"
		usage["main-run: <name>"] = "display the command to run `name`"
		usage["main-opts: <name>"] = "display the command options for `name`"
		usage["testing: <name>"] = "display the nitunit command to test `name`"
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
		pos = string.read_until(tmp, pos, ':', '|')
		var name = tmp.write_to_string.trim

		# Check allowed commands
		if name.is_empty then
			error = new CmdParserError("Empty command name", 0)
			return null
		end
		# If the command name contains two consecutive colons or there is no colon in the name,
		# we certainly have a wiki link to a mentity
		var is_short_link = false
		if (pos < string.length - 2 and string[pos] == ':' and string[pos + 1] == ':') or
		   pos == string.length then
			is_short_link = true
		else if pos < string.length - 1 and string[pos] == '|' then
			is_short_link = true
			pos -= 1
		else if not allowed_commands.has(name) then
			error = new CmdParserError("Unknown command name `{name}`", 0)
			return null
		end

		# Parse the argument
		tmp.clear
		pos = string.read_until(tmp, pos + 1, '|')
		var arg = tmp.write_to_string.trim
		if is_short_link and not arg.is_empty then
			arg = "{name}:{arg}"
		else if is_short_link then
			arg = name
		end

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
		var command
		if is_short_link then
			command = new CmdEntityLink(model, filter)
		else
			command = new_command(name)
		end
		if command == null then
			error = new CmdParserError("Unknown command name `{name}`", 0)
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
		if name == "link" then return new CmdEntityLink(model, filter)
		if name == "doc" then return new CmdComment(model, filter)
		if name == "code" then return new CmdEntityCode(model, modelbuilder, filter)
		if name == "lin" then return new CmdLinearization(model, mainmodule, filter)
		if name == "defs" then return new CmdFeatures(model, filter)
		if name == "parents" then return new CmdParents(model, mainmodule, filter)
		if name == "ancestors" then return new CmdAncestors(model, mainmodule, filter)
		if name == "children" then return new CmdChildren(model, mainmodule, filter)
		if name == "descendants" then return new CmdDescendants(model, mainmodule, filter)
		if name == "param" then return new CmdParam(model, filter)
		if name == "return" then return new CmdReturn(model, filter)
		if name == "new" then return new CmdNew(model, modelbuilder, filter)
		if name == "call" then return new CmdCall(model, modelbuilder, filter)
		# CmdGraph
		if name == "uml" then return new CmdUML(model, mainmodule, filter)
		if name == "graph" then return new CmdInheritanceGraph(model, mainmodule, filter)
		# CmdModel
		if name == "list" then return new CmdModelEntities(model, filter)
		if name == "random" then return new CmdRandomEntities(model, filter)
		# Ini
		if name == "ini-desc" then return new CmdIniDescription(model, filter)
		if name == "ini-git" then return new CmdIniGitUrl(model, filter)
		if name == "ini-issues" then return new CmdIniIssuesUrl(model, filter)
		if name == "ini-license" then return new CmdIniLicense(model, filter)
		if name == "ini-maintainer" then return new CmdIniMaintainer(model, filter)
		if name == "ini-contributors" then return new CmdIniContributors(model, filter)
		if name == "license-file" then return new CmdLicenseFile(model, filter)
		if name == "license-content" then return new CmdLicenseFileContent(model, filter)
		if name == "contrib-file" then return new CmdContribFile(model, filter)
		if name == "contrib-content" then return new CmdContribFileContent(model, filter)
		if name == "git-clone" then return new CmdIniCloneCommand(model, filter)
		# CmdMain
		if name == "mains" then return new CmdMains(model, filter)
		if name == "main-compile" then return new CmdMainCompile(model, filter)
		if name == "main-run" then return new CmdManSynopsis(model, filter)
		if name == "main-opts" then return new CmdManOptions(model, filter)
		if name == "testing" then return new CmdTesting(model, filter)
		# CmdCatalog
		var catalog = self.catalog
		if catalog != null then
			if name == "catalog" then return new CmdCatalogPackages(model, catalog, filter)
			if name == "stats" then return new CmdCatalogStats(model, catalog, filter)
			if name == "tags" then return new CmdCatalogTags(model, catalog, filter)
			if name == "tag" then return new CmdCatalogTag(model, catalog, filter)
			if name == "person" then return new CmdCatalogPerson(model, catalog, filter)
			if name == "contrib" then return new CmdCatalogContributing(model, catalog, filter)
			if name == "maintain" then return new CmdCatalogMaintaining(model, catalog, filter)
			if name == "search" then return new CmdCatalogSearch(model, catalog, filter)
		else
			if name == "search" then return new CmdSearch(model, filter)
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

redef class CmdEntityLink
	redef fun parser_init(mentity_name, options) do
		if options.has_key("text") then text = options["text"]
		if options.has_key("title") then title = options["title"]
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
