# This file is part of NIT ( https://nitlanguage.org ).
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

module term

import commands::commands_parser
import templates::term_model
import templates::md_commands

redef class CommandParser

	fun execute(query: String, no_color: nullable Bool) do
		var cmd = self.parse(query)
		var error = self.error

		# Translate links to doc commands
		if cmd isa CmdEntityLink then
			cmd = new CmdComment(model, mentity_name = query)
			var opts = new CmdOptions
			var status = cmd.parser_init(query, opts)
			if not status isa CmdSuccess then error = status
		end

		if error isa CmdError or error isa CmdWarning then
			error.print_message(no_color)
			print ""
		end
		if cmd == null then return
		cmd.execute(no_color)
	end
end

redef class DocCommand
	fun execute(no_color: nullable Bool) is abstract
end

redef class CmdMessage
	fun print_message(no_color: nullable Bool) do print to_s
end

redef class CmdError
	redef fun print_message(no_color) do
		var res = "Error: {to_s}"
		if no_color == null or not no_color then res = res.bold.red
		print res
	end
end

redef class CmdWarning
	redef fun print_message(no_color) do
		var res = "Warning: {to_s}"
		if no_color == null or not no_color then res = res.bold.yellow
		print res
	end
end

# Model queries

redef class ErrorMEntityNotFound
	redef fun print_message(no_color) do
		if no_color == null or not no_color then
			print "No result found for `{mentity_name.blue}`...".bold
		else
			print "No result found for `{mentity_name}`..."
		end
		print ""
		if suggestions.not_empty then
			print "Did you mean?"
			print ""
			for s in suggestions do
				print s.cs_list_item(no_color)
				print ""
			end
		end
	end
end

redef class ErrorMEntityConflict
	redef fun print_message(no_color) do
		if no_color == null or not no_color then
			print "Multiple results found for `{mentity_name.blue}`...".bold
		else
			print "Multiple results found for `{mentity_name}`..."
		end
		print ""
		if conflicts.not_empty then
			print "Did you mean?"
			print ""
			for s in conflicts do
				print s.cs_list_item(no_color)
				print ""
			end
		end
	end
end

redef class CmdList
	fun print_list(list_title: nullable String, list_items: nullable Array[MEntity], no_color: nullable Bool) do
		if list_title != null then
			if no_color == null or not no_color then
				print list_title.bold
			else
				print list_title
			end
			print ""
		end
		if list_items != null and list_items.not_empty then
			for mentity in list_items do
				print mentity.cs_list_item(no_color)
				print ""
			end
		else
			print "None."
		end
	end
end

redef class CmdComment
	redef fun execute(no_color) do
		var mentity = self.mentity
		if mentity == null then return

		var full_name = mentity.cs_full_name(no_color)
		if no_color == null or not no_color then
			print "Documentation for `{full_name}`:".bold
		else
			print "Documentation for `{full_name}`:"
		end
		print ""
		print " {mentity.cs_icon(no_color)} {mentity.cs_full_name(no_color)}"
		print "   {mentity.cs_declaration(no_color)}"
		print "   {mentity.cs_location(no_color)}"
		print ""
		var mdoc = self.mdoc
		if mdoc == null then return
		if full_doc then
			print mdoc.cs_comment(no_color, 3)
		else
			print "   {mdoc.cs_short_comment(no_color)}\n"
		end
	end
end

redef class CmdAncestors
	redef fun execute(no_color) do
		var full_name = mentity.as(not null).cs_full_name(no_color)
		print_list("Ancestors for `{full_name}`:", results, no_color)
	end
end

redef class CmdParents
	redef fun execute(no_color) do
		var full_name = mentity.as(not null).cs_full_name(no_color)
		print_list("Parents for `{full_name}`:", results, no_color)
	end
end

redef class CmdChildren
	redef fun execute(no_color) do
		var full_name = mentity.as(not null).cs_full_name(no_color)
		print_list("Children for `{full_name}`:", results, no_color)
	end
end

redef class CmdDescendants
	redef fun execute(no_color) do
		var full_name = mentity.as(not null).cs_full_name(no_color)
		print_list("Descendants for `{full_name}`:", results, no_color)
	end
end

redef class CmdLinearization
	redef fun execute(no_color) do
		var full_name = mentity.as(not null).cs_full_name(no_color)
		print_list("Linearization for `{full_name}`:", results, no_color)
	end
end

redef class CmdSearch
	redef fun execute(no_color) do
		print_list("Search results for `{query.as(not null)}`:", results, no_color)
	end
end

redef class CmdModelEntities
	redef fun execute(no_color) do
		var kind = self.kind
		if no_color != null and not no_color then kind = kind.blue
		print_list("MEntities for kind `{kind}`:", results, no_color)
	end
end

redef class CmdFeatures
	redef fun execute(no_color) do
		var full_name = mentity.as(not null).cs_full_name(no_color)
		print_list("Features for `{full_name}`:", results, no_color)
	end
end

redef class CmdEntityCode

	redef var format = "ansi" is optional

	redef fun execute(no_color) do
		var mentity = self.mentity
		if mentity == null then return

		var title = "Code for `{mentity.cs_full_name(no_color)}`:"
		if no_color == null or not no_color then
			print title.bold
		else
			print title
		end
		var node = self.node
		if (no_color == null or not no_color) and node != null then
			var ansi = render_code(node)
			print "~~~"
			print ansi.write_to_string
			print "~~~"
		else
			printn mentity.cs_source_code
		end
	end
end

redef class CmdGraph
	redef fun execute(no_color) do
		format = "dot"
		var dot = self.render
		if dot == null then return
		var f = new ProcessWriter("dot", "-Txlib")
		f.write dot.write_to_string
		f.close
		f.wait
	end
end

# CmdUsage

redef class CmdCall
	redef fun execute(no_color) do
		var full_name = mentity.as(not null).cs_full_name(no_color)
		print_list("Methods calling `{full_name}`:", results, no_color)
	end
end

redef class CmdNew
	redef fun execute(no_color) do
		var full_name = mentity.as(not null).cs_full_name(no_color)
		print_list("Methods intializing `{full_name}`:", results, no_color)
	end
end

redef class CmdReturn
	redef fun execute(no_color) do
		var full_name = mentity.as(not null).cs_full_name(no_color)
		print_list("Methods returning `{full_name}`:", results, no_color)
	end
end

redef class CmdParam
	redef fun execute(no_color) do
		var full_name = mentity.as(not null).cs_full_name(no_color)
		print_list("Methods accepting `{full_name}` as parameter:", results, no_color)
	end
end

# CmdCatalog

redef class CmdCatalogPackages
	redef fun execute(no_color) do
		print_list("Packages from catalog:", results, no_color)
	end
end

redef class CmdCatalogStats
	redef fun execute(no_color) do
		if no_color == null or not no_color then
			print "Catalog statistics:".bold
		else
			print "Catalog statistics:"
		end

		var stats = self.stats.as(not null)
		print " * {stats.packages} packages"
		print " * {stats.modules} modules"
		print " * {stats.methods} methods"
		print " * {stats.classes} classes"
		print " * {stats.loc} lines of code"
		print " * {stats.contributors} contributors"
		print " * {stats.maintainers} maintainers"
		print " * {stats.tags} tags"
	end
end

redef class CmdCatalogTags
	redef fun execute(no_color) do
		if no_color == null or not no_color then
			print "Tags from catalog:".bold
		else
			print "Tags from catalog:"
		end

		print ""
		var counts = self.packages_count_by_tags.as(not null)
		for tag, count in counts do
			if no_color == null or not no_color then
				print " * {tag.blue.bold}: {count} packages"
			else
				print " * {tag}: {count} packages"
			end
		end
	end
end

redef class CmdCatalogTag
	redef fun execute(no_color) do
		var tag = self.tag.as(not null)
		if no_color == null or not no_color then tag = tag.blue.bold
		print_list("Packages tagged with `{tag}`:", results, no_color)
	end
end

redef class CmdCatalogMaintaining
	redef fun execute(no_color) do
		var name = self.person_name.as(not null)
		if no_color == null or not no_color then name = name.blue.bold
		print_list("Packages maintained by `{name}`:", results, no_color)
	end
end

redef class CmdCatalogContributing
	redef fun execute(no_color) do
		var name = self.person_name.as(not null)
		if no_color == null or not no_color then name = name.blue.bold
		print_list("Packages contributed by `{name}`:", results, no_color)
	end
end

# CmdIni

redef class CmdIni
	# Print ini data
	fun print_ini(title: String, data: nullable String, no_color: nullable Bool) do
		if data == null then return
		if no_color == null or not no_color then
			print title.bold
		else
			print title
		end
		print ""
		print data
	end
end

redef class CmdIniDescription
	redef fun execute(no_color) do
		var title = "Description from ini file:"
		print_ini(title, desc, no_color)
	end
end

redef class CmdIniGitUrl
	redef fun execute(no_color) do
		var title = "Git URL from ini file:"
		print_ini(title, url, no_color)
	end
end

redef class CmdIniCloneCommand
	redef fun execute(no_color) do
		var title = "Git clone command from ini file:"
		print_ini(title, command, no_color)
	end
end

redef class CmdIniIssuesUrl
	redef fun execute(no_color) do
		var title = "Issues URL from ini file:"
		print_ini(title, url, no_color)
	end
end

redef class CmdIniMaintainer
	redef fun execute(no_color) do
		var title = "Maintainer from ini file:"
		print_ini(title, maintainer, no_color)
	end
end

redef class CmdIniContributors
	redef fun execute(no_color) do
		var contributors = self.contributors
		if contributors == null then return
		var title = "Contributors list from ini file:"
		if no_color == null or not no_color then
			print title.bold
		else
			print title
		end
		print ""
		for contributor in contributors do
			print " * {contributor}"
		end
	end
end

redef class CmdIniLicense
	redef fun execute(no_color) do
		var title = "License from ini file:"
		print_ini(title, license, no_color)
	end
end

redef class CmdEntityFile

	# Print file
	fun print_file(title: String, no_color: nullable Bool) do
		var file = self.file
		if file == null then return
		title = "{title} `{file}`:"
		if no_color == null or not no_color then
			print title.bold
		else
			print title
		end
		print ""
		print file.to_path.read_all
		print ""
	end
end

redef class CmdLicenseFile
	redef fun execute(no_color) do
		print_file("License from", no_color)
	end
end

redef class CmdContribFile
	redef fun execute(no_color) do
		print_file("Contributing rules from", no_color)
	end
end

# CmdMain

redef class CmdMains
	redef fun execute(no_color) do
		var mentity = self.mentity.as(not null).full_name
		if no_color == null or not no_color then mentity = mentity.blue.bold
		print_list("Mains in `{mentity}`:", results, no_color)
	end
end

redef class CmdMainCompile
	redef fun execute(no_color) do
		var mentity = self.mentity.as(not null).full_name
		if no_color == null or not no_color then mentity = mentity.blue.bold
		var title = "Compiling `{mentity}`:"

		if no_color == null or not no_color then
			print title.bold
		else
			print title
		end

		print ""
		var command = self.command
		if command != null then print command
	end
end

redef class CmdTesting
	redef fun execute(no_color) do
		var mentity = self.mentity.as(not null).full_name
		if no_color == null or not no_color then mentity = mentity.blue.bold
		var title = "Testing `{mentity}`:"

		if no_color == null or not no_color then
			print title.bold
		else
			print title
		end

		print ""
		var command = self.command
		if command != null then print command
	end
end

redef class CmdManSynopsis
	redef fun execute(no_color) do
		var mentity = self.mentity.as(not null).full_name
		if no_color == null or not no_color then mentity = mentity.blue.bold
		var title = "Synopsis for `{mentity}`:"

		if no_color == null or not no_color then
			print title.bold
		else
			print title
		end

		print ""
		var synopsis = self.synopsis
		if synopsis != null then print synopsis
	end
end

redef class CmdManOptions
	redef fun execute(no_color) do
		var mentity = self.mentity.as(not null).full_name
		if no_color == null or not no_color then mentity = mentity.blue.bold
		var title = "Options for `{mentity}`:"

		if no_color == null or not no_color then
			print title.bold
		else
			print title
		end

		print ""
		var options = self.options.as(not null)
		for opt, desc in options do
			if no_color == null or not no_color then
				print " * {opt.blue.bold}: {desc}"
			else
				print " * {opt}: {desc}"
			end
		end
	end
end
