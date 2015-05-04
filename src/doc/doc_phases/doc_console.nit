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

# Nitx related components
#
# This module is a place holder for `nitx` related services.
# No `doc_phase` can be found here, only components used by Nitx tool.
module doc_console

import semantize
import doc::console_templates

# Nitx handles console I/O.
#
# Using `prompt`, the command line can be turned on an interactive tool.
class Nitx

	# ToolContext used to access options.
	var ctx: ToolContext

	# DocModel that contains the informations to display.
	var doc: DocModel

	# Comparator used to sort MEntities.
	var sorter = new MEntityNameSorter

	# Displays the welcome message and start prompt.
	fun start do
		welcome
		prompt
	end

	# Displays the welcome message and the list of loaded modules.
	fun welcome do
		print "Welcome in the Nit Index."
		print ""
		print "Loaded modules:"
		var mmodules = doc.mmodules.to_a
		sorter.sort(mmodules)
		for m in mmodules do
			print "\t{m.name}"
		end
		print ""
		help
	end

	# Displays the list of available commands.
	fun help do
		print "\nCommands:"
		print "\tname\t\tlookup module, class and property with the corresponding 'name'"
		print "\tdoc: <name::space>\tdisplay the documentation page of 'namespace'"
		print "\tparam: <Type>\tlookup methods using the corresponding 'Type' as parameter"
		print "\t:h\t\tdisplay this help message"
		print "\t:q\t\tquit interactive mode"
		print ""
	end

	# Prompts the user for a command.
	fun prompt do
		printn ">> "
		do_query(sys.stdin.read_line)
		prompt
	end

	# Processes the query string and performs it.
	fun do_query(str: String) do
		var query = parse_query(str)
		var res = query.perform(self, doc)
		var page = query.make_results(self, res)
		print page.write_to_string
	end

	# Returns an `NitxQuery` from a raw query string.
	fun parse_query(str: String): NitxQuery do
		var query = new NitxQuery(str)
		if query isa NitxCommand then
			query.execute(self)
		end
		return query
	end
end

# A query performed on Nitx.
#
# Queries are responsible to collect matching results and render them as a
# DocPage.
#
# Used as a factory to concrete instances.
interface NitxQuery

	# Original query string.
	fun query_string: String is abstract

	# Query factory.
	#
	# Will return a concrete instance of NitxQuery.
	new(query_string: String) do
		if query_string == ":q" then
			return new NitxQuit
		else if query_string == ":h" then
			return new NitxHelp
		else if query_string.has_prefix("comment:") then
			return new CommentQuery(query_string)
		else if query_string.has_prefix("doc:") then
			return new DocQuery(query_string)
		else if query_string.has_prefix("param:") then
			return new ParamQuery(query_string)
		end
		return new CommentQuery("comment: {query_string}")
	end

	# Looks up the `doc` model and returns possible matches.
	fun perform(nitx: Nitx, doc: DocModel): Array[NitxMatch] is abstract

	# Pretty prints the results for the console.
	fun make_results(nitx: Nitx, results: Array[NitxMatch]): DocPage do
		var page = new DocPage("Results")
		page.root.add_child(new QueryResultArticle(self, results))
		return page
	end

	redef fun to_s do return query_string
end

# Something that matches a `NitxQuery`.
abstract class NitxMatch

	# Query matched by `self`.
	var query: NitxQuery

	# Pretty prints `self` for console.
	fun make_list_item: String is abstract
end

# A query that contains a meta command.
#
# In Nitx, commands are written such as `command: args...`.
abstract class MetaQuery
	super NitxQuery

	redef var query_string

	# Meta command used.
	var command: String is noinit

	# Arguments passed to the `command`.
	var args = new Array[String]

	init do
		# parse command
		var str = new FlatBuffer
		var i = 0
		while i < query_string.length do
			var c = query_string[i]
			i += 1
			if c == ':' then break
			str.add c
		end
		command = str.write_to_string
		# parse args
		args.add query_string.substring_from(i).trim
	end
end

# A match between a `NitxQuery` and a `MEntity`.
class MEntityMatch
	super NitxMatch

	# MEntity matched.
	var mentity: MEntity

	redef fun make_list_item do return mentity.cs_list_item
end

# A query to search a `MEntity` comment by its name or namespace.
class CommentQuery
	super MetaQuery

	redef fun perform(nitx, doc) do
		var name = args.first
		var res = new Array[NitxMatch]
		for mentity in doc.search_mentities(name) do
			res.add new MEntityMatch(self, mentity)
		end
		return res
	end

	redef fun make_results(nitx, results) do
		var len = results.length
		if len == 1 then
			var res = results.first.as(MEntityMatch)
			var mentity = res.mentity
			var page = new DocPage("Results")
			var article = new DefinitionArticle(mentity)
			article.cs_title = mentity.name
			article.cs_subtitle = mentity.cs_declaration
			page.root.add_child article
			return page
		else
			return super
		end
	end
end

# A query to search signatures using a specific `MType` as parameter.
class ParamQuery
	super MetaQuery

	redef fun perform(nitx, doc) do
		var res = new Array[NitxMatch]
		var mtype_name = args.first
		for mproperty in doc.mproperties do
			if not mproperty isa MMethod then continue
			var msignature = mproperty.intro.msignature
			if msignature != null then
				for mparam in msignature.mparameters do
					if mparam.mtype.name == mtype_name then
						res.add new MEntityMatch(self, mproperty)
					end
				end
			end
		end
		return res
	end
end

# A query to search a Nitdoc documentation page by its name.
class DocQuery
	super MetaQuery

	redef fun perform(nitx, doc) do
		var res = new Array[NitxMatch]
		var name = args.first
		for page in doc.pages do
			if name == "*" then # FIXME dev only
				res.add new PageMatch(self, page)
			else if page.title == name then
				res.add new PageMatch(self, page)
			else if page isa MEntityPage and page.mentity.cs_namespace == name then
				res.add new PageMatch(self, page)
			end
		end
		return res
	end

	redef fun make_results(nitx, results) do
		var len = results.length
		# FIXME how to render the pager for one worded namespaces like "standard"?
		if len == 1 then
			var page = results.first.as(PageMatch).page
			var pager = new Pager
			pager.add page.write_to_string
			pager.render
			return page
		else
			return super
		end
	end
end

# A match between a `DocPage` and a `MEntity`.
class PageMatch
	super NitxMatch

	# `DocPage` matched.
	var page: DocPage

	redef fun make_list_item do
		var page = self.page
		if page isa MEntityPage then
			return page.mentity.cs_list_item
		end
		return " * {page.title}"
	end
end

# A query that contains a nitx command.
#
# These commands are prefixed with `:` and are used to control the execution of
# `nitx` like displaying the help or quiting.
interface NitxCommand
	super NitxQuery

	# Executes the command.
	fun execute(nitx: Nitx) is abstract
end

# Exits nitx.
class NitxQuit
	super NitxCommand

	redef fun execute(nitx) do exit 0
end

# Displays the help message.
class NitxHelp
	super NitxCommand

	redef fun execute(nitx) do nitx.help
end

## exploration

redef class DocModel

	# Lists all MEntities in the model.
	private var mentities: Collection[MEntity] is lazy do
		var res = new HashSet[MEntity]
		res.add_all mprojects
		res.add_all mgroups
		res.add_all mmodules
		res.add_all mclasses
		res.add_all mclassdefs
		res.add_all mproperties
		res.add_all mpropdefs
		return res
	end

	# Search MEntities that match `name` by their name or namespace.
	private fun search_mentities(name: String): Array[MEntity] do
		var res = new Array[MEntity]
		for mentity in mentities do
			if mentity.name != name and mentity.cs_namespace != name then continue
			res.add mentity
		end
		return res
	end
end

# display

# A `DocArticle` that displays query results.
private class QueryResultArticle
	super DocArticle

	# Query linked to the results to display.
	var query: NitxQuery

	# Results to display.
	var results: Array[NitxMatch]

	redef fun render_title do
		var len = results.length
		if len == 0 then
			add "No result found for '{query.query_string}'..."
		else
			add "# {len} result(s) for '{query.query_string}'".green.bold
		end
	end

	redef fun render_body do
		addn ""
		for result in results do
			addn ""
			addn result.make_list_item
		end
	end
end

# A Pager is used to display data into a unix `less` container.
private class Pager

	# Content to display.
	var content = new FlatBuffer

	# Adds text to the pager.
	fun add(text: String) do
		content.append(escape(text))
	end

	fun render do sys.system("echo \"{content}\" | less -r")

	fun escape(str: String): String
	do
		var b = new FlatBuffer
		for c in str.chars do
			if c == '\n' then
				b.append("\\n")
			else if c == '\0' then
				b.append("\\0")
			else if c == '"' then
				b.append("\\\"")
			else if c == '\\' then
				b.append("\\\\")
			else if c == '`' then
				b.append("'")
			else if c.ascii < 32 then
				b.append("\\{c.ascii.to_base(8, false)}")
			else
				b.add(c)
			end
		end
		return b.to_s
	end
end
