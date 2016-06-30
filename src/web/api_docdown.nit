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

# Nitdoc specific Markdown format handling for Nitweb
module api_docdown

import api_graph
intrude import doc_down
intrude import markdown::wikilinks
import doc_commands

# Docdown handler accept docdown as POST data and render it as HTML
class APIDocdown
	super APIHandler

	# Modelbuilder used by the commands
	var modelbuilder: ModelBuilder

	# Specific Markdown processor to use within Nitweb
	var md_processor: MarkdownProcessor is lazy do
		var proc = new MarkdownProcessor
		proc.emitter.decorator = new NitwebDecorator(view, modelbuilder)
		return proc
	end

	redef fun post(req, res) do
		res.html md_processor.process(req.body)
	end
end

# Specific Markdown decorator for Nitweb
#
# We reuse all the implementation of the NitdocDecorator and add the wikilinks handling.
class NitwebDecorator
	super NitdocDecorator

	# View used by wikilink commands to find model entities
	var view: ModelView

	# Modelbuilder used to access code
	var modelbuilder: ModelBuilder

	redef fun add_wikilink(v, token) do
		var link = token.link
		if link == null then return
		var cmd = new DocCommand(link.write_to_string)
		cmd.render(v, token, view)
	end
end

# Same as `InlineDecorator` but with wikilink commands handling
class NitwebInlineDecorator
	super InlineDecorator

	# View used by wikilink commands to find model entities
	var view: ModelView

	# Modelbuilder used to access code
	var modelbuilder: ModelBuilder

	redef fun add_wikilink(v, token) do
		var link = token.link
		if link == null then return
		var cmd = new DocCommand(link.write_to_string)
		cmd.render(v, token, view)
	end
end

redef interface DocCommand

	# Emit the HTML related to the execution of this doc command
	fun render(v: MarkdownEmitter, token: TokenWikiLink, model: ModelView) do
		write_error(v, "Not yet implemented command `{token.link or else "null"}`")
	end

	# Find the MEntity ` with `full_name`.
	fun find_mentity(model: ModelView, full_name: nullable String): nullable MEntity do
		if full_name == null then return null
		return model.mentity_by_full_name(full_name.from_percent_encoding)
	end

	# Write a warning in the output
	fun write_warning(v: MarkdownEmitter, text: String) do
		v.emit_text "<p class='text-warning'>Warning: {text}</p>"
	end

	# Write an error in the output
	fun write_error(v: MarkdownEmitter, text: String) do
		v.emit_text "<p class='text-danger'>Error: {text}</p>"
	end

	# Write a link to a mentity in the output
	fun write_mentity_link(v: MarkdownEmitter, mentity: MEntity) do
		var link = mentity.web_url
		var name = mentity.name
		var mdoc = mentity.mdoc_or_fallback
		var comment = null
		if mdoc != null then comment = mdoc.synopsis
		v.decorator.add_link(v, link, name, comment)
	end
end

redef class UnknownCommand
	redef fun render(v, token, model) do
		var link = token.link
		if link == null then
			write_error(v, "Empty command")
			return
		end
		var full_name = link.write_to_string
		var mentity = find_mentity(model, full_name)
		if mentity == null then
			write_error(v, "Unknown command `{link}`")
			return
		end
		write_mentity_link(v, mentity)
	end
end

redef class ArticleCommand
	redef fun render(v, token, model) do
		if args.is_empty then
			write_error(v, "Expected one arg: the MEntity name")
			return
		end
		var name = args.first
		var mentity = find_mentity(model, name)
		if mentity == null then
			write_error(v, "No MEntity found for name `{name}`")
			return
		end
		var mdoc = mentity.mdoc_or_fallback
		if mdoc == null then
			write_warning(v, "No MDoc for mentity `{name}`")
			return
		end
		v.add "<h3>"
		write_mentity_link(v, mentity)
		v.add " - "
		v.emit_text mdoc.synopsis
		v.add "</h3>"
		v.add v.processor.process(mdoc.comment).write_to_string
	end
end

redef class CommentCommand
	redef fun render(v, token, model) do
		if args.is_empty then
			write_error(v, "Expected one arg: the MEntity name")
			return
		end
		var name = args.first
		var mentity = find_mentity(model, name)
		if mentity == null then
			write_error(v, "No MEntity found for name `{name}`")
			return
		end
		var mdoc = mentity.mdoc_or_fallback
		if mdoc == null then
			write_warning(v, "No MDoc for mentity `{name}`")
			return
		end
		v.add v.processor.process(mdoc.comment).write_to_string
	end
end

redef class ListCommand
	redef fun render(v, token, model) do
		if args.is_empty then
			write_error(v, "Expected one arg: the MEntity name")
			return
		end
		var name = args.first
		var mentity = find_mentity(model, name)
		if mentity isa MPackage then
			write_list(v, mentity.mgroups)
		else if mentity isa MGroup then
			var res = new Array[MEntity]
			res.add_all mentity.in_nesting.smallers
			res.add_all mentity.mmodules
			write_list(v, res)
		else if mentity isa MModule then
			write_list(v, mentity.mclassdefs)
		else if mentity isa MClass then
			write_list(v, mentity.collect_intro_mproperties(model))
		else if mentity isa MClassDef then
			write_list(v, mentity.mpropdefs)
		else if mentity isa MProperty then
			write_list(v, mentity.mpropdefs)
		else
			write_error(v, "No list found for name `{name}`")
		end
	end

	# Write a mentity list in the output
	fun write_list(v: MarkdownEmitter, mentities: Collection[MEntity]) do
		v.add "<ul>"
		for mentity in mentities do
			var mdoc = mentity.mdoc_or_fallback
			v.add "<li>"
			write_mentity_link(v, mentity)
			if mdoc != null then
				v.add " - "
				v.emit_text mdoc.synopsis
			end
			v.add "</li>"
		end
		v.add "</ul>"
	end
end

redef class CodeCommand
	redef fun render(v, token, model) do
		if args.is_empty then
			write_error(v, "Expected one arg: the MEntity name")
			return
		end
		var name = args.first
		var mentity = find_mentity(model, name)
		if mentity == null then
			write_error(v, "No MEntity found for name `{name}`")
			return
		end
		if mentity isa MClass then mentity = mentity.intro
		if mentity isa MProperty then mentity = mentity.intro
		var source = render_source(mentity, v.decorator.as(NitwebDecorator).modelbuilder)
		if source == null then
			write_error(v, "No source for MEntity `{name}`")
			return
		end
		v.add "<pre>"
		v.add source
		v.add "</pre>"
	end

	# Highlight `mentity` source code.
	private fun render_source(mentity: MEntity, modelbuilder: ModelBuilder): nullable HTMLTag do
		var node = modelbuilder.mentity2node(mentity)
		if node == null then return null
		var hl = new HighlightVisitor
		hl.enter_visit node
		return hl.html
	end
end

redef class GraphCommand
	redef fun render(v, token, model) do
		if args.is_empty then
			write_error(v, "Expected one arg: the MEntity name")
			return
		end
		var name = args.first
		var mentity = find_mentity(model, name)
		if mentity == null then
			write_error(v, "No MEntity found for name `{name}`")
			return
		end
		var g = new InheritanceGraph(mentity, model)
		v.add g.draw(3, 3).to_svg
	end
end
