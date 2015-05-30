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
import doc_extract
import doc_poset
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
		print "\nCommands:\n"
		print "\tname\t\t\tlookup module, class and property with the corresponding 'name'"
		print "\tdoc: <name::space>\tdisplay the documentation page of 'namespace'"
		print "\nType lookup:"
		print "\tparam: <Type>\t\tlookup methods using the corresponding 'Type' as parameter"
		print "\treturn: <Type>\t\tlookup methods returning the corresponding 'Type'"
		print "\tnew: <Type>\t\tlookup methods creating new instances of 'Type'"
		print "\tcall: <name>\t\tlookup methods calling 'name'"
		print "\nHierarchy lookup:"
		print "\tparents: <Class>\tlist direct parents of 'Class'"
		print "\tancestors: <Class>\tlist all ancestors of 'Class'"
		print "\tchildren: <Class>\tlist direct children of 'Class'"
		print "\tdescendants: <Class>\tlist all descendants of 'Class'"
		print "\nCode lookup:"
		print "\tcode: <name>\t\tdisplay the source code associated to the 'name' entity"
		print "\n"
		print "\t:h\t\t\tdisplay this help message"
		print "\t:q\t\t\tquit interactive mode"
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
		var query = new NitxQuery(str)
		if query isa NitxCommand then
			query.execute(self)
			return
		end
		var res = query.perform(self, doc)
		var page = query.make_results(self, res)
		print page.write_to_string
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
		else if query_string.has_prefix("return:") then
			return new ReturnQuery(query_string)
		else if query_string.has_prefix("new:") then
			return new NewQuery(query_string)
		else if query_string.has_prefix("call:") then
			return new CallQuery(query_string)
		else if query_string.has_prefix("code:") then
			return new CodeQuery(query_string)
		else if query_string.has_prefix("parents:") then
			return new ParentsQuery(query_string)
		else if query_string.has_prefix("ancestors:") then
			return new AncestorsQuery(query_string)
		else if query_string.has_prefix("children:") then
			return new ChildrenQuery(query_string)
		else if query_string.has_prefix("descendants:") then
			return new DescendantsQuery(query_string)
		end
		return new CommentQuery("comment: {query_string}")
	end

	# Looks up the `doc` model and returns possible matches.
	fun perform(nitx: Nitx, doc: DocModel): Array[NitxMatch] is abstract

	# Pretty prints the results for the console.
	fun make_results(nitx: Nitx, results: Array[NitxMatch]): DocPage do
		var page = new DocPage("results", "Results")
		page.root.add_child(new QueryResultArticle("results.article", "Results", self, results))
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
		for mentity in doc.mentities_by_name(name) do
			res.add new MEntityMatch(self, mentity)
		end
		return res
	end

	redef fun make_results(nitx, results) do
		var len = results.length
		if len == 1 then
			var res = results.first.as(MEntityMatch)
			var mentity = res.mentity
			var page = new DocPage("results", "Results")
			var article = new DefinitionArticle("results.article", "Results", mentity)
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

# A query to search signatures using a specific `MType` as return.
class ReturnQuery
	super MetaQuery

	redef fun perform(nitx, doc) do
		var res = new Array[NitxMatch]
		var mtype_name = args.first
		for mproperty in doc.mproperties do
			if not mproperty isa MMethod then continue
			var msignature = mproperty.intro.msignature
			if msignature != null then
				var mreturn = msignature.return_mtype
				if mreturn != null and mreturn.name == mtype_name then
					res.add new MEntityMatch(self, mproperty)
				end
			end
		end
		return res
	end
end

# A query to search methods creating new instances of a specific `MType`.
class NewQuery
	super MetaQuery

	redef fun perform(nitx, doc) do
		var res = new Array[NitxMatch]
		var mtype_name = args.first
		for mpropdef in doc.mpropdefs do
			var visitor = new TypeInitVisitor(mtype_name)
			var npropdef = nitx.ctx.modelbuilder.mpropdef2node(mpropdef)
			if npropdef == null then continue
			visitor.enter_visit(npropdef)
			for i in visitor.inits do
				res.add new MEntityMatch(self, mpropdef)
			end
		end
		return res
	end
end

# A query to search methods calling a specific `MProperty`.
class CallQuery
	super MetaQuery

	redef fun perform(nitx, doc) do
		var res = new Array[NitxMatch]
		var mprop_name = args.first
		for mpropdef in doc.mpropdefs do
			var visitor = new MPropertyCallVisitor
			var npropdef = nitx.ctx.modelbuilder.mpropdef2node(mpropdef)
			if npropdef == null then continue
			visitor.enter_visit(npropdef)
			for mprop in visitor.calls do
				if mprop.name != mprop_name then continue
				res.add new MEntityMatch(self, mpropdef)
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
		for page in doc.pages.values do
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

# Search in class or module hierarchy of a `MEntity`.
#
# It actually searches for pages about the mentity and extracts the
# pre-calculated hierarchies by the `doc_post` phase.
abstract class HierarchiesQuery
	super DocQuery

	redef fun make_results(nitx, results) do
		var page = new DocPage("hierarchy", "Hierarchy")
		for result in results do
			if not result isa PageMatch then continue
			var rpage = result.page
			if not rpage isa MClassPage then continue
			page.root.add_child build_article(rpage)
		end
		return page
	end

	# Build an article containing the hierarchy list depending on subclasses.
	private fun build_article(page: MClassPage): DocArticle is abstract
end

# List all parents of a `MClass`.
class AncestorsQuery
	super HierarchiesQuery

	redef fun build_article(page) do
		return new MEntitiesListArticle(
			"ancerstors",
			"Ancestors for {page.mentity.name}",
			page.ancestors.to_a)
	end
end

# List direct parents of a `MClass`.
class ParentsQuery
	super HierarchiesQuery

	redef fun build_article(page) do
		return new MEntitiesListArticle(
			"parents",
			"Parents for {page.mentity.name}",
			page.parents.to_a)
	end
end

# List direct children of a `MClass`.
class ChildrenQuery
	super HierarchiesQuery

	redef fun build_article(page) do
		return new MEntitiesListArticle(
			"children",
			"Children for {page.mentity.name}",
			page.children.to_a)
	end
end

# List all descendants of a `MClass`.
class DescendantsQuery
	super HierarchiesQuery

	redef fun build_article(page) do
		return new MEntitiesListArticle(
			"descendants",
			"Descendants for {page.mentity.name}",
			page.children.to_a)
	end
end

# A query to search source code from a file name.
class CodeQuery
	super MetaQuery

	# FIXME refactor this!
	redef fun perform(nitx, doc) do
		var res = new Array[NitxMatch]
		var name = args.first
		# if name is an existing sourcefile, opens it
		if name.file_exists then
			var fr = new FileReader.open(name)
			var content = fr.read_all
			fr.close
			res.add new CodeMatch(self, name, content)
			return res
		end
		# else, lookup the model by name
		for mentity in doc.mentities_by_name(name) do
			if mentity isa MClass then continue
			if mentity isa MProperty then continue
			res.add new CodeMatch(self, mentity.cs_location, mentity.cs_source_code)
		end
		return res
	end

	redef fun make_results(nitx, results) do
		var page = new DocPage("results", "Code Results")
		for res in results do
			page.add new CodeQueryArticle("results.article", "Results", self, res.as(CodeMatch))
		end
		return page
	end
end

# A match between a piece of code and a string.
class CodeMatch
	super NitxMatch

	# Location of the code match.
	var location: String

	# Piece of code matched.
	var content: String

	redef fun make_list_item do return "* {location}"
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

# Visitor looking for initialized `MType` (new T).
#
# See `NewQuery`.
private class TypeInitVisitor
	super Visitor

	# `MType` name to look for.
	var mtype_name: String

	var inits = new HashSet[MType]
	redef fun visit(node)
	do
		node.visit_all(self)
		# look for init
		if not node isa ANewExpr then return
		var mtype = node.n_type.mtype
		if mtype != null and mtype.name == mtype_name then inits.add(mtype)
	end
end

# Visitor looking for calls to a `MProperty` (new T).
#
# See `CallQuery`.
private class MPropertyCallVisitor
	super Visitor

	var calls = new HashSet[MProperty]
	redef fun visit(node)
	do
		node.visit_all(self)
		if not node isa ASendExpr then return
		calls.add node.callsite.mproperty
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

# An article that displays a piece of code.
private class CodeQueryArticle
	super DocArticle

	# The query linked to the result to display.
	var query: NitxQuery

	# The result to display.
	var result: CodeMatch

	redef fun render_body do
		addn ""
		addn "in {result.location}".gray.bold
		addn ""
		add result.content
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
