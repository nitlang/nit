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

# Doc down related queries
module commands_docdown

import commands::commands_parser
import commands::commands_html
import commands::commands_md

intrude import doc_down
intrude import markdown::wikilinks

# Retrieve the MDoc summary
#
# List all MarkdownHeading found and their ids.
class CmdSummary
	super CmdComment

	# Markdown processor used to parse the headlines
	var markdown_processor: nullable MarkdownProcessor = null is optional, writable

	# Resulting summary
	#
	# Associates each headline to its id.
	var summary: nullable ArrayMap[String, HeadLine] = null is optional, writable

	redef fun init_command do
		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)

		var markdown_processor = self.markdown_processor
		if markdown_processor == null then
			markdown_processor = new MarkdownProcessor
			self.markdown_processor = markdown_processor
		end

		var mdoc = self.mdoc
		if mdoc == null then
			mdoc = if fallback then mentity.mdoc_or_fallback else mentity.mdoc
			self.mdoc = mdoc
		end
		if mdoc == null then return new WarningNoMDoc(mentity)

		markdown_processor.process(mdoc.md_documentation.write_to_string)

		var summary = new ArrayMap[String, HeadLine]
		summary.add_all markdown_processor.decorator.headlines
		self.summary = summary
		return res
	end
end

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
