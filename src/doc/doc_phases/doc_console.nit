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
import doc_commands
import doc_poset
import doc::console_templates
import model::model_index

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

	# Parser used to process doc commands
	var parser: DocCommandParser is lazy do
		var parser = new DocCommandParser
		parser.allowed_commands = ["doc", "comment", "list", "param", "return",
			"new", "call", "code"]
		return parser
	end

	# Processes the query string and performs it.
	fun do_query(str: String) do
		if str == ":q" then
			exit 0
		else if str == ":h" then
			help
			return
		end
		var query = parser.parse(str)
		if query == null then
			query = new CommentCommand(str)
			query.arg = str
		end
		var res = query.perform(self, doc)
		var suggest = null
		if res.is_empty then
			suggest = query.suggest(self, doc)
		end
		var page = query.make_results(self, res, suggest)
		print page.write_to_string
	end
end

redef class DocCommand

	# Looks up the `doc` model and returns possible matches.
	fun perform(nitx: Nitx, doc: DocModel): Array[NitxMatch] is abstract

	# Looks up the `doc` model and returns possible suggestions.
	fun suggest(nitx: Nitx, doc: DocModel): nullable Array[MEntity] do
		return find_suggestions(doc, arg)
	end

	# Pretty prints the results for the console.
	fun make_results(nitx: Nitx, results: Array[NitxMatch], suggest: nullable Array[MEntity]): DocPage do
		var page = new DocPage("results", "Results")
		page.root.add_child(new QueryResultArticle("results", "Results", self, results, suggest))
		return page
	end

	# Lookup mentities based on a `query` string.
	#
	# 1- lookup by first name (returns always one value)
	# 2- lookup by name (can return conflicts)
	fun find_mentities(doc: DocModel, query: String): Array[MEntityMatch] do
		var res = new Array[MEntityMatch]

		# First lookup by full_name
		var mentity = doc.mentity_by_full_name(query)
		if mentity != null then
			res.add new MEntityMatch(self, mentity)
			return res
		end

		# If no results, lookup by name
		for m in doc.mentities_by_name(query) do
			res.add new MEntityMatch(self, m)
		end

		return res
	end

	# Suggest some mentities based on a `query` string.
	fun find_suggestions(doc: DocModel, query: String): Array[MEntity] do
		return doc.find(query, 3)
	end
end

# Something that matches a `DocCommand`.
abstract class NitxMatch

	# Query matched by `self`.
	var query: DocCommand

	# Pretty prints `self` for console.
	fun make_list_item: String is abstract
end

# A match between a `DocCommand` and a `MEntity`.
class MEntityMatch
	super NitxMatch

	# MEntity matched.
	var mentity: MEntity

	redef fun make_list_item do return mentity.cs_list_item
end

redef class CommentCommand
	redef fun perform(nitx, doc) do return find_mentities(doc, arg)

	redef fun make_results(nitx, results, suggest) do
		var len = results.length
		if len == 1 then
			var res = results.first.as(MEntityMatch)
			var mentity = res.mentity
			var page = new DocPage("resultats", "Results")
			var article = new DefinitionArticle("results", "Results", mentity)
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
redef class ParamCommand
	redef fun perform(nitx, doc) do
		var res = new Array[NitxMatch]
		var mtype_name = arg
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
redef class ReturnCommand
	redef fun perform(nitx, doc) do
		var res = new Array[NitxMatch]
		var mtype_name = arg
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
redef class NewCommand
	redef fun perform(nitx, doc) do
		var res = new Array[NitxMatch]
		var mtype_name = arg
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
redef class CallCommand
	redef fun perform(nitx, doc) do
		var res = new Array[NitxMatch]
		var mprop_name = arg
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
	super DocCommand

	redef fun make_results(nitx, results, suggest) do
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
redef class CodeCommand
	# FIXME refactor this!
	redef fun perform(nitx, doc) do
		var res = new Array[NitxMatch]
		var name = arg
		# if name is an existing sourcefile, opens it
		if name.file_exists then
			var fr = new FileReader.open(name)
			var content = fr.read_all
			fr.close
			res.add new CodeMatch(self, name, content)
			return res
		end
		# else, lookup the model by name
		for match in find_mentities(doc, name) do
			if match.mentity isa MClass then continue
			if match.mentity isa MProperty then continue
			res.add new CodeMatch(self, match.mentity.cs_location, match.mentity.cs_source_code)
		end
		return res
	end

	redef fun make_results(nitx, results, suggest) do
		var page = new DocPage("results", "Code Results")
		for res in results do
			page.add new CodeQueryArticle("results", "Results", self, res.as(CodeMatch))
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
		calls.add node.callsite.as(not null).mproperty
	end
end

# display

# A `DocArticle` that displays query results.
private class QueryResultArticle
	super DocArticle

	# Query linked to the results to display.
	var query: DocCommand

	# Results to display.
	var results: Array[NitxMatch]

	# Optional suggestion when no matches where found
	var suggest: nullable Array[MEntity] = null is optional

	redef fun render_title do
		var len = results.length
		if len == 0 then
			addn "No result found for '{query.string}'..."
			var suggest = self.suggest
			if suggest != null and suggest.not_empty then
				add "\nDid you mean "
				var i = 0
				for s in suggest do
					add "`{s.full_name}`"
					if i == suggest.length - 2 then add ", "
					if i == suggest.length - 1 then add " or "
					i += 1
				end
				add "?"
			end
		else
			add "# {len} result(s) for '{query.string}'".green.bold
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
	var query: DocCommand

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
			else if c.code_point < 32 then
				b.append("\\{c.code_point.to_base(8)}")
			else
				b.add(c)
			end
		end
		return b.to_s
	end
end
