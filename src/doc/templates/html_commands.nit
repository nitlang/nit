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

# Render commands results as HTML
module html_commands

import commands_catalog
import commands_docdown
import commands_graph
import commands_ini
import commands_main
import commands_parser
import commands_usage

import templates::html_model
intrude import markdown::wikilinks

redef class DocCommand

	# Render results as a HTML string
	fun to_html: Writable do return "<p class='text-danger'>Not yet implemented</p>"
end

redef class CmdMessage

	# Render the message as a HTML string
	fun to_html: Writable is abstract
end

redef class CmdError
	redef fun to_html do return "<p class='text-danger'>Error: {to_s}</p>"
end

redef class CmdWarning
	redef fun to_html do return "<p class='text-warning'>Warning: {to_s}</p>"
end

# Model commands

redef class CmdEntity
	redef fun to_html do
		var mentity = self.mentity
		if mentity == null then return ""
		return mentity.html_link.write_to_string
	end
end

redef class CmdEntities
	redef fun to_html do
		var mentities = self.results
		if mentities == null then return ""

		var tpl = new Template
		tpl.add "<ul>"
		for mentity in mentities do
			var mdoc = mentity.mdoc_or_fallback
			tpl.add "<li>"
			tpl.add mentity.html_link
			if mdoc != null then
				tpl.add " - "
				tpl.add mdoc.html_synopsis
			end
			tpl.add "</li>"
		end
		tpl.add "</ul>"
		return tpl.write_to_string
	end
end

redef class CmdComment
	redef fun to_html do
		var mentity = self.mentity
		if mentity == null then return ""

		var mdoc = self.mdoc
		var tpl = new Template
		tpl.add "<h3>"
		# FIXME comments left here until I figure out what to do about the presentation options
		# if not opts.has_key("no-link") then
			tpl.add mentity.html_link
		# end
		if mdoc != null then
			# if not opts.has_key("no-link") and not opts.has_key("no-synopsis") then
				tpl.add " - "
			# end
			# if not opts.has_key("no-synopsis") then
				tpl.add mdoc.html_synopsis
			# end
		end
		tpl.add "</h3>"
		if mdoc != null then
			# if not opts.has_key("no-comment") then
				tpl.add mdoc.html_comment
			# end
		end
		return tpl.write_to_string
	end

	redef fun render_comment do
		var mdoc = self.mdoc
		if mdoc == null then return null

		if format == "html" then
			if full_doc then return mdoc.html_documentation
			return mdoc.html_synopsis
		end
		return super
	end
end

redef class CmdEntityLink
	redef fun to_html do
		var mentity = self.mentity
		if mentity == null then return ""
		return mentity.html_link(text, title).write_to_string
	end
end

redef class CmdCode
	redef fun to_html do
		var node = self.node
		if node == null then return ""

		var code = render_code(node)
		return "<pre>{code.write_to_string}</pre>"
	end

	redef fun render_code(node) do
		if format == "html" then
			var hl = new CmdHtmlightVisitor
			hl.show_infobox = false
			hl.highlight_node node
			return hl.html
		end
		return super
	end
end

# Custom HtmlightVisitor for commands
#
# We create a new subclass so its behavior can be refined in clients without
# breaking the main implementation.
class CmdHtmlightVisitor
	super HtmlightVisitor

	redef fun hrefto(mentity) do
		if mentity isa MClassDef then return mentity.mclass.html_url
		if mentity isa MPropDef then return mentity.mproperty.html_url
		return mentity.html_url
	end
end

redef class CmdAncestors
	redef fun to_html do return super # FIXME lin
end

redef class CmdParents
	redef fun to_html do return super # FIXME lin
end

redef class CmdChildren
	redef fun to_html do return super # FIXME lin
end

redef class CmdDescendants
	redef fun to_html do return super # FIXME lin
end

redef class CmdFeatures
	redef fun to_html do return super # FIXME lin
end

redef class CmdLinearization
	redef fun to_html do return super # FIXME lin
end

# Usage commands

redef class CmdNew
	redef fun to_html do return super # FIXME lin
end

redef class CmdCall
	redef fun to_html do return super # FIXME lin
end

redef class CmdReturn
	redef fun to_html do return super # FIXME lin
end

redef class CmdParam
	redef fun to_html do return super # FIXME lin
end

# Graph commands

redef class CmdGraph
	redef fun to_html do
		var output = render
		if output == null then return ""
		return output.write_to_string
	end
end

# Ini commands

redef class CmdIniDescription
	redef fun to_html do
		var desc = self.desc
		if desc == null then return ""

		return "<p>{desc}</p>"
	end
end

redef class CmdIniGitUrl
	redef fun to_html do
		var url = self.url
		if url == null then return ""

		return "<a href=\"{url}\">{url}</a>"
	end
end

redef class CmdIniCloneCommand
	redef fun to_html do
		var command = self.command
		if command == null then return ""

		return "<pre>{command}</pre>"
	end
end

redef class CmdIniIssuesUrl
	redef fun to_html do
		var url = self.url
		if url == null then return ""

		return "<a href=\"{url}\">{url}</a>"
	end
end

redef class CmdIniMaintainer
	redef fun to_html do
		var name = self.maintainer
		if name == null then return ""

		return "<b>{name.html_escape}</b>"
	end
end

redef class CmdIniContributors
	redef fun to_html do
		var names = self.contributors
		if names == null or names.is_empty then return ""

		var tpl = new Template
		tpl.add "<ul>"
		for name in names do
			tpl.add "<li><b>{name.html_escape}</b></li>"
		end
		tpl.add "</ul>"
		return tpl.write_to_string
	end
end

redef class CmdIniLicense
	redef fun to_html do
		var license = self.license
		if license == null then return ""

		return "<a href=\"https://opensource.org/licenses/{license}\">{license}</a>"
	end
end

redef class CmdEntityFile
	redef fun to_html do
		var file = self.file
		if file == null then return ""

		return "<a href=\"{file_url or else ""}\">{file.basename}</a>"
	end
end

redef class CmdEntityFileContent
	redef fun to_html do
		var content = self.content
		if content == null then return ""

		return "<pre>{content}</pre>"
	end
end

# Main commands

redef class CmdMains
	redef fun to_html do return super # FIXME lin
end

redef class CmdMainCompile
	redef fun to_html do
		var command = self.command
		if command == null then return ""

		return "<pre>{command}</pre>"
	end
end

redef class CmdManSynopsis
	redef fun to_html do
		var synopsis = self.synopsis
		if synopsis == null then return ""

		return "<pre>{synopsis}</pre>"
	end
end

redef class CmdManOptions
	redef fun to_html do
		var options = self.options
		if options == null or options.is_empty then return ""

		var tpl = new Template
		tpl.addn "<pre>"
		tpl.addn "<table width='100%'>"
		for opt, desc in options do
			tpl.addn "<tr>"
			tpl.addn "<th valign='top' width='30%'>{opt}</th>"
			tpl.addn "<td width='70%'>{desc}</td>"
			tpl.addn "</tr>"
		end
		tpl.addn "</table>"
		tpl.addn "</pre>"

		return tpl.write_to_string
	end
end

redef class CmdTesting
	redef fun to_html do
		var command = self.command
		if command == null then return ""

		return "<pre>{command}</pre>"
	end
end

# MDoc

# Custom Markdown processor able to process doc commands
class CmdDecorator
	super NitdocDecorator

	redef type PROCESSOR: CmdMarkdownProcessor

	# Model used by wikilink commands to find entities
	var model: Model

	# Filter to apply if any
	var filter: nullable ModelFilter

	redef fun add_span_code(v, buffer, from, to) do
		var text = new FlatBuffer
		buffer.read(text, from, to)
		var name = text.write_to_string
		name = name.replace("nullable ", "")
		var mentity = try_find_mentity(name)
		if mentity == null then
			super
		else
			v.add "<code>"
			v.emit_text mentity.html_link.write_to_string
			v.add "</code>"
		end
	end

	private fun try_find_mentity(text: String): nullable MEntity do
		var mentity = model.mentity_by_full_name(text, filter)
		if mentity != null then return mentity

		var mentities = model.mentities_by_name(text, filter)
		if mentities.is_empty then
			return null
		else if mentities.length > 1 then
			# TODO smart resolve conflicts
		end
		return mentities.first
	end

	redef fun add_wikilink(v, token) do
		v.render_wikilink(token, model)
	end
end

# Same as `InlineDecorator` but with wikilink commands handling
class CmdInlineDecorator
	super InlineDecorator

	redef type PROCESSOR: CmdMarkdownProcessor

	# Model used by wikilink commands to find entities
	var model: Model

	redef fun add_wikilink(v, token) do
		v.render_wikilink(token, model)
	end
end

# Custom MarkdownEmitter for commands
class CmdMarkdownProcessor
	super MarkdownProcessor

	# Parser used to process doc commands
	var parser: CommandParser

	# Render a wikilink
	fun render_wikilink(token: TokenWikiLink, model: Model) do
		var link = token.link
		if link == null then return
		var name = token.name
		if name != null then link = "{name} | {link}"

		var command = parser.parse(link.write_to_string)
		var error = parser.error

		if error isa CmdError then
			emit_text error.to_html.write_to_string
			return
		end
		if error isa CmdWarning then
			emit_text error.to_html.write_to_string
		end
		add command.as(not null).to_html
	end
end

redef class Text
	# Read `self` between `nstart` and `nend` (excluded) and writte chars to `out`.
	private fun read(out: FlatBuffer, nstart, nend: Int): Int do
		var pos = nstart
		while pos < length and pos < nend do
			out.add self[pos]
			pos += 1
		end
		if pos == length then return -1
		return pos
	end
end
