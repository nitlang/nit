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

# This phase parses README files.
module doc_readme

import markdown::decorators
intrude import markdown::wikilinks
import doc_commands
import doc_down
import doc_intros_redefs

# Generate content of `ReadmePage`.
#
# This phase extracts the structure of a `ReadmePage` from the markdown content
# of the README file.
# It also resolves Wikilinks and commands.
class ReadmePhase
	super DocPhase

	redef fun apply do
		for page in doc.pages.values do page.build_content(self, doc)
	end

	# Display a warning about something wrong in the readme file.
	fun warning(location: nullable MDLocation, page: ReadmePage, message: String) do
		var loc = null
		if location != null then
			loc = location.to_location(page.mentity.mdoc.location.file)
		end
		ctx.warning(loc, "readme-warning", message)
	end
end

redef class DocPage
	# Build content of `ReadmePage` based on the content of the readme file.
	private fun build_content(v: ReadmePhase, doc: DocModel) do end
end

redef class ReadmePage
	redef fun build_content(v, doc) do
		if mentity.mdoc == null then
			v.warning(null, self, "Empty README for group `{mentity}`")
			return
		end
		var proc = new MarkdownProcessor
		proc.emitter = new ReadmeMdEmitter(proc, self, v)
		proc.emitter.decorator = new ReadmeDecorator
		var md = mentity.mdoc.content.join("\n")
		proc.process(md)
	end
end

# Markdown emitter used to produce the `ReadmeArticle`.
class ReadmeMdEmitter
	super MarkdownEmitter

	# Readme page being decorated.
	var page: ReadmePage

	# Phase used to access doc model and toolcontext.
	var phase: ReadmePhase

	init do open_article

	# Push the article template on top of the buffer stack.
	#
	# Subsequent markdown writting will be done in the article template.
	#
	# See `ReadmeArticle::md`.
	private fun push_article(article: ReadmeArticle) do
		buffer_stack.add article.md
	end

	private var context = new Array[DocComposite]

	# Creates a new ReadmeSection in `self.toc.page`.
	#
	# Called from `add_headline`.
	private fun open_section(lvl: Int, title: String) do
		var section = new ReadmeSection(title.escape_to_c, title, lvl, processor)
		if current_section == null then
			page.root.add_child(section)
		else
			current_section.add_child(section)
		end
		current_section = section
		context.add section
	end
	private var current_section: nullable ReadmeSection is noinit

	# Close the current section.
	#
	# Ensure `context.last isa ReadmeSection`.
	private fun close_section do
		assert context.last isa ReadmeSection
		context.pop
		if context.is_empty then
			current_section = null
		else
			current_section = context.last.as(ReadmeSection)
		end
	end

	# Add an article at current location.
	#
	# This closes the current article, inserts `article` then opens a new article.
	private fun add_article(article: DocArticle) do
		close_article
		if current_section == null then
			page.root.add_child(article)
		else
			current_section.add_child(article)
		end
		open_article
	end

	# Creates a new ReadmeArticle in `self.toc.page`.
	#
	# Called from `add_headline`.
	private fun open_article do
		var section: DocComposite = page.root
		if current_section != null then section = current_section.as(not null)
		var article = new ReadmeArticle("mdarticle-{section.children.length}", null, processor)
		section.add_child(article)
		context.add article
		push_article article
	end

	# Close the current article.
	#
	# Ensure `context.last isa ReadmeArticle`.
	fun close_article do
		assert context.last isa ReadmeArticle
		context.pop
		pop_buffer
	end
end

# MarkdownDecorator used to decorated the Readme file with links between doc entities.
class ReadmeDecorator
	super MdDecorator

	redef type EMITTER: ReadmeMdEmitter

	redef fun add_headline(v, block) do
		var txt = block.block.first_line.value
		var lvl = block.depth
		if not v.context.is_empty then
			v.close_article
			while v.current_section != null do
				if v.current_section.depth < lvl then break
				v.close_section
			end
		end
		v.open_section(lvl, txt)
		v.open_article
	end

	redef fun add_wikilink(v, token) do
		var link = token.link.to_s
		var cmd = new DocCommand(link)
		if cmd isa UnknownCommand then
			# search MEntities by name
			var res = v.phase.doc.mentities_by_name(link.to_s)
			# no match, print warning and display wikilink as is
			if res.is_empty then
				v.phase.warning(token.location, v.page, "Link to unknown entity `{link}`")
				super
			else
				add_mentity_link(v, res.first, token.name, token.comment)
			end
			return
		end
		cmd.render(v, token)
	end

	# Renders a link to a mentity.
	private fun add_mentity_link(v: EMITTER, mentity: MEntity, name, comment: nullable Text) do
		# TODO real link
		var link = mentity.full_name
		if name == null then name = mentity.name
		if comment == null and mentity.mdoc != null then
			comment = mentity.mdoc.synopsis
		end
		add_link(v, link, name, comment)
	end
end

redef interface DocCommand

	# Render the content of the doc command.
	fun render(v: ReadmeMdEmitter, token: TokenWikiLink) is abstract

	# Search `doc` model for mentities match `string`.
	fun search_model(doc: DocModel, string: String): Array[MEntity] do
		var res
		if string.has("::") then
			res = doc.mentities_by_namespace(string).to_a
		else
			res = doc.mentities_by_name(string).to_a
		end
		return res
	end
end

redef class ArticleCommand
	redef fun render(v, token) do
		var string = args.first
		var res = search_model(v.phase.doc, string)
		res = filter_results(res)
		if res.is_empty then
			v.phase.warning(
				token.location, v.page,
				"Try to include documentation of unknown entity `{args.first}`")
			return
		end
		if res.length > 1 then
			v.phase.warning(token.location, v.page, "conflicting article for `{args.first}` (choices : {res.join(", ")})")
		end
		v.add_article new DocumentationArticle("readme", "Readme", res.first)
	end

	private fun filter_results(res: Array[MEntity]): Array[MEntity] do
		var out = new Array[MEntity]
		for e in res do
			if e isa MProject then continue
			if e isa MGroup then continue
			out.add e
		end
		return out
	end
end

redef class ListCommand
	redef fun render(v, token) do
		var string = args.first
		var res = search_model(v.phase.doc, string)
		if res.is_empty then
			v.phase.warning(token.location, v.page, "include article for unknown entity `{args.first}`")
			return
		end
		if res.length > 1 then
			v.phase.warning(token.location, v.page, "conflicting article for `{args.first}` (choices : {res.join(", ")})")
		end
		var mentity = res.first
		if mentity isa MModule then
			v.add_article new MEntitiesListArticle("Classes", null, mentity.mclassdefs)
		else if mentity isa MClass then
			var mprops = mentity.collect_intro_mproperties(public_visibility)
			v.add_article new MEntitiesListArticle("Methods", null, mprops.to_a)
		else if mentity isa MClassDef then
			v.add_article new MEntitiesListArticle("Methods", null, mentity.mpropdefs)
		end
	end
end


# A section found in a README.
#
# Produced by markdown headlines like `## Section 1.1`.
class ReadmeSection
	super DocSection

	# The depth is based on the markdown headline depth.
	redef var depth

	# Markdown processor used to process the section title.
	var markdown_processor: MarkdownProcessor

	redef var is_hidden = false
end

# An article found in a README file.
#
# Basically, everything found in a README that is not a headline.
class ReadmeArticle
	super DocArticle

	# Markdown processor used to process the article content.
	var markdown_processor: MarkdownProcessor

	# Markdown content of this article extracted from the README file.
	var md = new FlatBuffer

	redef fun is_hidden do return super and md.trim.is_empty
end

# Documentation Article to introduce from the directive `doc: Something`.
#
# TODO merge with DefinitionArticle once the html is simplified
class DocumentationArticle
	super MEntityArticle

	redef var is_hidden = false
end

redef class MDLocation
	# Translate a Markdown location in Nit location.
	private fun to_location(file: nullable SourceFile): Location do
		return new Location(file, line_start, line_end, column_start, column_end)
	end
end
