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
import model::model_index

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
			var mdoc = page.mentity.mdoc
			if mdoc != null then loc = location.to_location(mdoc.location.file)
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
		var mdoc = mentity.mdoc
		if mdoc == null then
			v.warning(null, self, "Empty README for group `{mentity}`")
			return
		end
		var proc = new ReadmeMdProcessor(self, v)
		proc.decorator = new ReadmeDecorator
		var md = mdoc.content.join("\n")
		proc.process(md)
	end
end

# Markdown emitter used to produce the `ReadmeArticle`.
class ReadmeMdProcessor
	super MarkdownProcessor

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
		var section = new ReadmeSection(title.escape_to_c, title, lvl, self)
		var current_section = self.current_section
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
		var current_section = self.current_section
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
		var article = new ReadmeArticle("mdarticle-{section.children.length}", null, self)
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

	# Find mentities matching `query`.
	fun find_mentities(query: String): Array[MEntity] do
		# search MEntities by full_name
		var mentity = phase.doc.mentity_by_full_name(query)
		if mentity != null then return [mentity]
		# search MEntities by name
		return phase.doc.mentities_by_name(query)
	end

	# Suggest mentities based on `query`.
	fun suggest_mentities(query: String): Array[MEntity] do
		return phase.doc.find(query, 3)
	end

	# Display a warning message with suggestions.
	fun warn(token: TokenWikiLink, message: String, suggest: nullable Array[MEntity]) do
		var msg = new Buffer
		msg.append message
		if suggest != null and suggest.not_empty then
			msg.append " (suggestions: "
			var i = 0
			for s in suggest do
				msg.append "`{s.full_name}`"
				if i < suggest.length - 1 then msg.append ", "
				i += 1
			end
			msg.append ")"
		end
		phase.warning(token.location, page, msg.write_to_string)
	end
end

# MarkdownDecorator used to decorated the Readme file with links between doc entities.
class ReadmeDecorator
	super MdDecorator

	# Parser used to process doc commands
	var parser = new DocCommandParser

	redef type PROCESSOR: ReadmeMdProcessor

	redef fun add_headline(v, block) do
		var txt = block.block.first_line.as(not null).value
		var lvl = block.depth
		if not v.context.is_empty then
			v.close_article
			while v.current_section != null do
				if v.current_section.as(not null).depth < lvl then break
				v.close_section
			end
		end
		v.open_section(lvl, txt)
		v.open_article
	end

	redef fun add_wikilink(v, token) do
		var link = token.link.as(not null).to_s
		var cmd = parser.parse(link)
		if cmd == null then
			# search MEntities by name
			var res = v.find_mentities(link.to_s)
			# no match, print warning and display wikilink as is
			if res.is_empty then
				v.warn(token, "Link to unknown entity `{link}`", v.suggest_mentities(link.to_s))
				super
			else
				add_mentity_link(v, res.first, token.name, token.comment)
			end
			return
		end
		cmd.render(v, token)
	end

	# Renders a link to a mentity.
	private fun add_mentity_link(v: PROCESSOR, mentity: MEntity, name, comment: nullable Text) do
		# TODO real link
		var link = mentity.full_name
		if name == null then name = mentity.name
		if comment == null then
			var mdoc = mentity.mdoc
			if mdoc != null then comment = mdoc.synopsis
		end
		add_link(v, link, name, comment)
	end
end

redef class DocCommand

	# Render the content of the doc command.
	fun render(v: ReadmeMdProcessor, token: TokenWikiLink) is abstract
end

redef class CommentCommand
	redef fun render(v, token) do
		var string = args.first
		var res = v.find_mentities(string)
		if res.is_empty then
			v.warn(token,
				"Try to include documentation of unknown entity `{string}`",
				v.suggest_mentities(string))
			return
		end
		v.add_article new DocumentationArticle("readme", "Readme", res.first)
	end
end

redef class ListCommand
	redef fun render(v, token) do
		var string = args.first
		var res = v.find_mentities(string)
		if res.is_empty then
			v.warn(token,
				"Try to include article of unknown entity `{string}`",
				v.suggest_mentities(string))
			return
		end
		if res.length > 1 then
			v.warn(token, "Conflicting article for `{args.first}`", res)
		end
		var mentity = res.first
		if mentity isa MModule then
			v.add_article new MEntitiesListArticle("Classes", null, mentity.mclassdefs)
		else if mentity isa MClass then
			var mprops = mentity.collect_intro_mproperties(v.phase.doc)
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
