# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Markdown blocks parsing
#
# Introduce the parsers for the different Markdown blocks such as headings, lists
# code blocks etc.
module markdown_block_parsing

import markdown_inline_parsing

# Markdown parser
#
# Used to create the AST representation of a Markdown document.
class MdParser

	# Inline parser used to parse block content
	private var inline_parser = new MdInlineParser is lazy

	# Block parsers factories
	private var block_parser_factories: Collection[MdBlockParserFactory] do
		var factories = new Array[MdBlockParserFactory]
		factories.add new MdBlockQuoteParserFactory
		factories.add new MdHeadingParserFactory
		factories.add new MdFencedCodeBlockParserFactory
		factories.add new MdHtmlBlockParserFactory
		factories.add new MdThematicBreakParserFactory
		factories.add new MdListBlockParserFactory
		factories.add new MdIndentedCodeBlockParserFactory
		return factories
	end

	# Active block parsers
	#
	# Used as a stack to parse nested blocks.
	private var active_block_parsers = new Array[MdBlockParser]

	# All active block parsers
	private var all_block_parsers = new HashSet[MdBlockParser]

	# Return the active block parser
	#
	# The last entry in the `active_block_parsers` stack.
	private fun active_block_parser: MdBlockParser do
		return active_block_parsers.last
	end

	# Activate a `block_parser`
	#
	# Add the `block_parser` on the top of the `active_block_parsers` stack.
	# Also register it in `all_block_parsers`.
	private fun activate_block_parser(block_parser: MdBlockParser) do
		active_block_parsers.add block_parser
		all_block_parsers.add block_parser
	end

	# Deactivate the `active_block_parser`
	private fun deactivate_block_parser do
		active_block_parsers.pop
	end

	# Deactivate and remove the `active_block_parser` from the `all_block_parsers` list
	private fun remove_active_block_parser do
		var old = active_block_parser
		deactivate_block_parser
		all_block_parsers.remove(old)
		old.block.unlink
	end

	# Post-processors applied after the parsing of a document
	var post_processors = new Array[MdPostProcessor] is writable

	# Currently parsed line
	private var line_string: String is noinit

	# Current index (offset) in input `line_string` (starts at 0)
	private var index = 0

	# Current column in input `line_string` (starts at 0)
	#
	# Tab causes column to go to next 4-space tab stop.
	private var column = 0

	# Is the current column within a tab character (partially consumed tab)
	private var column_is_in_tab: Bool is noinit

	# Current line in input string (starts at 1)
	private var line = 1

	# Index of the next non-space character starting from `index`
	private var next_non_space_index = 0

	# Next non-space column
	private var next_non_space_column = 0

	# Current indent in columns
	#
	# Either by spaces or tab stop of 4, starting from `column`.
	private var indent = 0

	# Is the current `line` blank starting from `index`?
	private var is_blank: Bool is noinit

	# Does a node end with a blank line?
	private var last_line_blank = new HashMap[MdNode, Bool]

	# Initialize parser state
	private fun initialize do
		active_block_parsers.clear
		all_block_parsers.clear
		index = 0
		column = 0
		column_is_in_tab = false
		line = 1
		next_non_space_index = 0
		next_non_space_column = 0
		indent = 0
		is_blank = false
		last_line_blank.clear
	end

	# Parse the `input` string as a MdDocument
	fun parse(input: String): MdDocument do
		initialize

		var document_block_parser = new MdDocumentBlockParser(1, 1, 0)
		activate_block_parser(document_block_parser)
		var line_start = 0
		var line_break = find_line_break(input, line_start)
		while line_break != -1 do
			var line_string = input.substring(line_start, line_break - line_start)
			incorporate_line(line_string)
			if line_break + 1 < input.length and
			   input.chars[line_break] == '\r' and
			   input.chars[line_break + 1] == '\n' then
				line_start = line_break + 2
			else
				line_start = line_break + 1
			end
			line_break = find_line_break(input, line_start)
			line += 1
			column = 0
		end

		# Finalize pending line
		if input.length > 0 and (line_start == 0 or line_start < input.length) then
			incorporate_line(input.substring(line_start, input.length - line_start))
		end
		finalize_blocks(active_block_parsers)

		# Walk through a block and its chiildren revursively
		# Parsing string content into inline content where appropriate.
		var all_block_parsers = all_block_parsers.to_a
		var i = all_block_parsers.length - 1
		while i >= 0 do
			var block_parser = all_block_parsers[i]
			block_parser.parse_inlines(inline_parser)
			i -= 1
		end
		var document = document_block_parser.block
		return document
	end

	# Post-process the `document`
	fun post_process(document: MdDocument) do
		for processor in post_processors do
			processor.post_process(self, document)
		end
	end

	# Analyze a line of text and update the document
	#
	# We parse Markdown text by calling this on each line of `input`.
	private fun incorporate_line(input: String) do
		line_string = input
		index = 0
		column = 0
		column_is_in_tab = false

		# For each containing block, try to parse the associated line start.
		var matches = 1
		for i in [1 .. active_block_parsers.length[ do
			var block_parser = active_block_parsers[i]
			find_next_non_space

			var result = block_parser.try_continue(self)
			if result isa MdBlockContinue then
				if result.is_finalize then
					block_parser.finalize(self)
					return
				else
					if result.new_index != -1 then
						set_new_index result.new_index
					else if result.new_column != -1 then
						set_new_column result.new_column
					end
				end
				matches += 1
			else
				break
			end
		end

		var unmatched_block_parsers = active_block_parsers.subarray(
			matches, active_block_parsers.length - matches)
		var last_matched_block_parser = active_block_parsers[matches - 1]
		var block_parser = last_matched_block_parser
		var all_closed = unmatched_block_parsers.is_empty

		# Unless last matched container is a code block, try new container starts,
		# adding children to the last matched container.
		var try_block_starts = block_parser.block isa MdParagraph or
			block_parser.block.is_container

		while try_block_starts do
			find_next_non_space

			# Optimize lookup
			if is_blank or (indent < 4 and line_string.chars[next_non_space_index].is_letter) then
				set_new_index next_non_space_index
				break
			end

			var block_start = find_block_start(block_parser)
			if block_start == null then
				set_new_index next_non_space_index
				break
			end

			if not all_closed then
				finalize_blocks(unmatched_block_parsers)
				all_closed = true
			end

			if block_start.new_index != -1 then
				set_new_index block_start.new_index
			else if block_start.new_column != -1 then
				set_new_column block_start.new_column
			end

			if block_start.replace_active_block_parser then
				remove_active_block_parser
			end

			for new_block_parser in block_start.block_parsers do
				add_child(new_block_parser)
				block_parser = new_block_parser
				try_block_starts = new_block_parser.block.is_container
			end
		end

		# What remains at the offset is a text line.
		# Add the text to the appropriate block.

		# First check for a lazy paragraph continuation
		if not all_closed and not is_blank and active_block_parser isa MdParagraphParser then
			add_line
		else
			# Finalize any blocks not matched
			if not all_closed then
				finalize_blocks(unmatched_block_parsers)
			end
			propagate_last_line_blank(block_parser, last_matched_block_parser)

			if not block_parser.block.is_container then
				add_line
			else if not is_blank then
				# Create a paragraph container for the line
				add_child(new MdParagraphParser(line, column + 1, block_parser.content_offset))
				add_line
			end
		end
	end

	# Find what kind of block starts at `index` in `input`
	private fun find_block_start(block_parser: MdBlockParser): nullable MdBlockStart do
		for block_parser_factory in block_parser_factories do
			var result = block_parser_factory.try_start(self, block_parser)
			if result != null then return result
		end
		return null
	end

	# Add a `block_parser` block's as child of the active block parser block
	private fun add_child(block_parser: MdBlockParser) do
		# Finalize non-parentable blocks
		while not active_block_parser.block.can_contain(block_parser.block) do
			active_block_parser.finalize(self)
		end
		# Append block block parser block to its parent
		active_block_parser.block.append_child(block_parser.block)
		activate_block_parser(block_parser)
	end

	# Add line content to the active block parser
	#
	# We assume it can accept lines.
	private fun add_line do
		var content = null
		if column_is_in_tab then
			# Out column is in a partially consumed tab.
			# Expand the remaining columns to the next tab stop to spaces.
			var after_tab = index + 1
			var rest = line_string.substring(after_tab, line_string.length - after_tab)
			var spaces = column.columns_to_next_tab_stop
			var buffer = new Buffer
			for i in [0 .. spaces[ do
				buffer.add ' '
			end
			buffer.append(rest)
			content = buffer.write_to_string
		else
			content = line_string.substring(index, line_string.length - index)
		end
		active_block_parser.add_line(content)
	end

	# Finalize blocks of previous line
	private fun finalize_blocks(block_parsers: Sequence[MdBlockParser]) do
		var i = block_parsers.length - 1
		while i >= 0 do
			var block_parser = block_parsers[i]
			block_parser.finalize(self)
			i -= 1
		end
	end

	# Advance the `index` position to the next character
	#
	# Also set the `column`.
	# If the next character is a tab, compute the new column accordingly.
	private fun advance do
		var c = line_string.chars[index]
		if c == '\t' then
			index += 1
			column += column.columns_to_next_tab_stop
		else
			index += 1
			column += 1
		end
	end

	# Move `index` to the next non-space character index in the `input` string
	#
	# Also set `next_non_space_index`, `next_non_space_column`, `is_blank` and `indent`.
	private fun find_next_non_space do
		var i = index
		var cols = column

		is_blank = true
		while i < line_string.length do
			var c = line_string.chars[i]
			if c == ' ' then
				i += 1
				cols += 1
				continue
			else if c == '\t' then
				i += 1
				cols += 4 - (cols % 4)
				continue
			end
			is_blank = false
			break
		end

		next_non_space_index = i
		next_non_space_column = cols
		indent = next_non_space_column - column
	end

	# Return the position of the next line break
	#
	# We consider `\r` and `\n`.
	private fun find_line_break(input: String, start_index: Int): Int do
		for i in [start_index .. input.length[ do
			var char = input.chars[i]
			if char == '\r' or char == '\n' then return i
		end
		return -1
	end

	# Set the parser `index` at `new_index`
	#
	# Also set `column` and `column_is_in_tab`.
	private fun set_new_index(new_index: Int) do
		if new_index >= next_non_space_index then
			# We can start from here, no need to calculate tab stops again
			index = next_non_space_index
			column = next_non_space_column
		end
		while index < new_index and index != line_string.length do
			advance
		end
		# If we're going to an index as opposed to a column, we're never within a tab
		column_is_in_tab = false
	end

	# Set the parser `column` at `new_column`
	#
	# Also set `index` and `column_is_in_tab`.
	private fun set_new_column(new_column: Int) do
		if new_column >= next_non_space_column then
			# We can start from here, no need to calculate tab stops again
			index = next_non_space_index
			column = next_non_space_column
		end
		while column < new_column and index != line_string.length do
			advance
		end
		if column > new_column then
			# Last character was a tab and we overshot our target
			index -= 1
			column = new_column
			column_is_in_tab = true
		else
			column_is_in_tab = false
		end
	end

	# Does `block` end with a blank line?
	private fun ends_with_blank_line(block: nullable MdNode): Bool do
		while block != null do
			if is_last_line_blank(block) then return true
			if block isa MdListBlock or block isa MdListItem then
				block = block.last_child
			else
				break
			end
		end
		return false
	end

	# Propagate a blank line to all block_parser blocl's parents
	private fun propagate_last_line_blank(block_parser: MdBlockParser, last_matched_block_parser: MdBlockParser) do
		var last_child = block_parser.block.last_child
		if is_blank and last_child != null then
			last_line_blank[last_child] = true
		end
		var block = block_parser.block

		# Block quotes lines are never blank as they start with `>`.
		# We don't count blanks in fenced code for purposes of thight/loose lists.
		# We also don't set `last_line_blank` on an empty list item.
		var last_line_blank = is_blank and
			not (block isa MdBlockQuote or
			     block isa MdFencedCodeBlock or
				 (block isa MdListItem and block.first_child == null and
										  block_parser != last_matched_block_parser))

		# Propagate `last_line_blank` up through parents
		var node: nullable MdNode = block_parser.block
		while node != null do
			self.last_line_blank[node] = last_line_blank
			node = node.parent
		end
	end

	# Is last line blank for `node`?
	private fun is_last_line_blank(node: MdNode): Bool do
		if not last_line_blank.has_key(node) then return false
		return last_line_blank[node]
	end
end

# Block parsing

# Parser for a specific block node
abstract class MdBlockParser

	# Kind of block under construction
	type BLOCK: MdBlock

	# MdBlock under construction
	fun block: BLOCK is abstract

	# Line Start
	var line_start: Int

	# Column start
	var column_start: Int

	# Location at start
	#
	# The location end it initialized at `-1` and will be set later in the
	# `finalize` method.
	var location: MdLocation is lazy do return new MdLocation(line_start, column_start, -1, -1)

	# Column where the content starts
	var content_offset: Int

	# Initialize the current `block`
	fun initialize(parser: MdParser) do end

	# Can `self` continue from the current `index` in `parser`?
	#
	# Return a new `MdBlockContinue` if `self` can continue parsing.
	# Return null otherwise.
	fun try_continue(state: MdParser): nullable MdBlockContinue is abstract

	# Add `line` to the current `block`
	fun add_line(line: String) do end

	# Finalize the current `block`
	#
	# Deactivate `self` from `parser` and call `close_block`.
	fun finalize(parser: MdParser) do
		if parser.active_block_parser == self then
			parser.deactivate_block_parser
		end
	end

	# Parse `block` lines
	fun parse_inlines(inline_parser: MdInlineParser) do end
end

# Result object for continuing parsing of a block
class MdBlockContinue

	# Index from which continue parsing
	var new_index: Int

	# Column from which continue parsing
	var new_column: Int

	# Is the block finalized?
	var is_finalize: Bool

	# Continue from index
	init at_index(new_index: Int) do
		init(new_index, -1, false)
	end

	# Continue from column
	init at_column(new_column: Int) do
		init(-1, new_column, false)
	end

	# Block is finished
	init finished do
		init(-1, -1, true)
	end
end

# Block parser factory for a block node for determining when a block starts
abstract class MdBlockParserFactory

	# Can the associated block parser can start at the current line in `parser`?
	#
	# Return a new `MdBlockStart` if the block parser can start.
	# Return null otherwise.
	fun try_start(parser: MdParser, matched_block_parser: MdBlockParser):
		nullable MdBlockStart is abstract
end

# Result object from starting parsing of a block
class MdBlockStart

	# Block parsers for this block start
	var block_parsers: Array[MdBlockParser]

	# Index where the parsing should start
	var new_index = -1

	# Column where the parsing should start
	var new_column = -1

	# Does the block starting with `self` terminate a previous block?
	var replace_active_block_parser = false

	# Start from `new_index`
	fun at_index(new_index: Int): MdBlockStart do
		self.new_index = new_index
		return self
	end

	# Start from `new_column`
	fun at_column(new_column: Int): MdBlockStart do
		self.new_column = new_column
		return self
	end

	# Start replacing the active block parser
	fun replacing_active_block_parser: MdBlockStart do
		self.replace_active_block_parser = true
		return self
	end
end

# Parser for the whole document
class MdDocumentBlockParser
	super MdBlockParser

	redef type BLOCK: MdDocument
	redef var block = new MdDocument(location) is lazy

	# Always continue at current indent
	redef fun try_continue(state) do return new MdBlockContinue.at_index(state.index)

	redef fun finalize(parser) do
	end

	# redef fun finalize(state) do
	redef fun parse_inlines(inline_parser) do
		var last_child = block.last_child
		if last_child != null then
			location.line_end = last_child.location.line_end
			location.column_end = last_child.location.column_end
		end
	end
end

# Headings parser
class MdHeadingParser
	super MdBlockParser

	redef type BLOCK: MdHeading

	redef var block = new MdHeading(location, level, is_setext, has_atx_trailing) is lazy

	redef var location = new MdLocation(line_start, column_start, line_end, column_end) is lazy

	# Line end
	var line_end: Int

	# Column end
	var column_end: Int

	# Heading level
	var level: Int

	# Heading content
	var content: String

	# Heading has ATX trailing
	var has_atx_trailing: Bool

	# Heading is setext format
	var is_setext: Bool

	# Never continue parsing as an heading is a one liner
	redef fun try_continue(state) do return null

	# Parse the heading content
	redef fun parse_inlines(inline_parser) do
		inline_parser.parse(content, content_offset, block)
	end
end

# Heading parser factory
class MdHeadingParserFactory
	super MdBlockParserFactory

	redef fun try_start(state, matched_block_parser) do
		if state.indent >= 4 then return null

		var next_non_space = state.next_non_space_index
		var line = state.line_string
		var paragraph = null
		if matched_block_parser isa MdParagraphParser then
			paragraph = matched_block_parser.content
		end

		var line_content = line.substring(next_non_space, line.length - next_non_space)
		var match = line_content.search(re_atx_heading)
		if match != null then
			# ATX heading
			var new_offset = next_non_space + match.subs.first.as(not null).length
			var level = match.subs.first.as(not null).to_s.trim.length
			# remove trailing ###s
			var after_leading = line.substring(new_offset, line.length - new_offset)
			var trailing = after_leading.search(re_atx_trailing)
			var has_trailing = trailing != null
			var trailing_length = if trailing != null then trailing.length else 0
			var content = after_leading.replace(re_atx_trailing, "")
			return (new MdBlockStart(
				[new MdHeadingParser(
					state.line,
					next_non_space + 1,
					new_offset + 1,
					state.line,
					new_offset + content.length + trailing_length,
					level,
					content,
					has_trailing, false)])
				).at_index(line.length)
		end

		if paragraph ==  null then return null

		match = line_content.search(re_setext_heading)
		if match == null then return null
		var level = 2
		if match.subs.first.as(not null).to_s.chars.first == '=' then level = 1
		var content = paragraph.to_s
		return (new MdBlockStart(
			[new MdHeadingParser(
				state.line - 1,
				next_non_space + 1,
				0,
				state.line,
				state.column + match.length,
				level,
				content,
				false, true)])
			).at_index(line.length).replacing_active_block_parser
	end
end

# Blockquotes parser
class MdBlockQuoteParser
	super MdBlockParser

	redef type BLOCK: MdBlockQuote
	redef var block = new MdBlockQuote(location) is lazy

	redef fun try_continue(state) do
		var next_non_space = state.next_non_space_index
		var indent = state.indent
		var line = state.line_string

		if indent >= 4 then return null
		if next_non_space >= line.length then return null
		if line.chars[next_non_space] != '>' then return null

		var new_column = state.column + state.indent + 1
		# optional following space or tab
		if state.line_string.is_space_or_tab(next_non_space + 1) then
			new_column += 1
		end
		return new MdBlockContinue.at_column(new_column)
	end

	redef fun parse_inlines(inline_parser) do
		var last_child = block.last_child
		if last_child != null then
			location.line_end = last_child.location.line_end
			location.column_end = last_child.location.column_end
		end
	end
end

# Blockquotes parser factory
class MdBlockQuoteParserFactory
	super MdBlockParserFactory

	redef fun try_start(state, matched_block_parser) do
		var next_non_space = state.next_non_space_index
		var indent = state.indent
		var line = state.line_string

		if indent >= 4 then return null
		if next_non_space >= line.length then return null
		if line.chars[next_non_space] != '>' then return null

		var new_column = state.column + state.indent + 1
		# optional following space or tab
		if state.line_string.is_space_or_tab(next_non_space + 1) then
			new_column += 1
		end
		return (new MdBlockStart(
			[new MdBlockQuoteParser(
				state.line,
				state.column + 1,
				new_column)])
			).at_column(new_column)
	end
end

# Indented code blocks parser
class MdIndentedCodeBlockParser
	super MdBlockParser

	redef type BLOCK: MdIndentedCodeBlock
	redef var block = new MdIndentedCodeBlock(location, use_tabs) is lazy

	# Indent is tab?
	var use_tabs: Bool

	# Block content
	var content = new Buffer

	redef fun try_continue(state) do
		if state.indent >= 4 then
			return new MdBlockContinue.at_column(state.column + 4)
		else if state.is_blank then
			return new MdBlockContinue.at_index(state.next_non_space_index)
		end
		return null
	end

	redef fun add_line(line) do
		if not content.is_empty then
			content.add('\n')
		end
		content.append(line)
	end

	redef fun finalize(parser) do
		super

		add_line(" ")
		var content = self.content.to_s
		var literal = content.replace_first(re_trailing_blank_lines, "\n")
		block.literal = literal

		var lines = literal.split("\n")
		location.line_end = location.line_start + lines.length - 2
		location.column_end = content_offset + lines[lines.length - 2].length + 4
	end
end

# Indented code blocks parser factory
class MdIndentedCodeBlockParserFactory
	super MdBlockParserFactory

	redef fun try_start(state, matched_block_parser) do
		if state.indent < 4 then return null
		if state.is_blank then return null
		if state.active_block_parser.block isa MdParagraph then return null

		var use_tabs = state.line_string.has_prefix("\t")
		return (new MdBlockStart(
			[new MdIndentedCodeBlockParser(
				state.line,
				state.column + 1,
				state.column,
				use_tabs)])
			).at_column(state.column + 4)
	end
end

# Fenced code blocks parser
class MdFencedCodeBlockParser
	super MdBlockParser

	redef type BLOCK: MdFencedCodeBlock
	redef var block = new MdFencedCodeBlock(location, fence_char, fence_length, fence_indent) is lazy

	# Fence character
	var fence_char: Char

	# Fence length
	var fence_length: Int

	# Fence indent
	var fence_indent: Int

	# Fence first line
	var first_line: nullable String = null

	# Fence other lines
	var other_lines = new Buffer

	redef fun try_continue(state) do
		var next_non_space = state.next_non_space_index
		var new_index = state.index
		var line = state.line_string

		if state.indent <= 3 and next_non_space < line.length and
		   line.chars[next_non_space] == fence_char then

			var match = line.substring(next_non_space, line.length - next_non_space).
				search(re_closing_fence)
			if match != null and match.subs[0].as(not null).length >= fence_length then
				# closing fence - we're at end of line, so we can finalize now
				return new MdBlockContinue.finished
			end
		end

		# skip optional spaces of fence indent
		var i = fence_indent
		while i > 0 and new_index < line.length and line.chars[new_index] == ' ' do
			new_index += 1
			i -= 1
		end

		return new MdBlockContinue.at_index(new_index)
	end

	redef fun add_line(line) do
		if first_line == null then
			first_line = line
		else
			other_lines.append(line)
			other_lines.add '\n'
		end
	end

	redef fun finalize(parser) do
		super

		# first line become info string
		var first_line = self.first_line
		if first_line != null then
			var info = first_line.trim.unescape_string
			if not info.is_empty then block.info = info
		end

		var content = other_lines.to_s
		block.literal =  content

		var lines = content.split("\n")
		location.line_end = location.line_start + lines.length
		location.column_end = content_offset + fence_indent + fence_length
	end
end

# Fenced code blocks parser factory
class MdFencedCodeBlockParserFactory
	super MdBlockQuoteParserFactory

	redef fun try_start(state, matched_block_parser) do
		var next_non_space = state.next_non_space_index
		var line = state.line_string

		if state.indent >= 4 then return null

		var match = line.substring(next_non_space, line.length - next_non_space).search(re_opening_fence)
		if match == null then return null

		var fence_length
		var fence_char
		var sub0 = match.subs[0]
		if sub0 != null then
			fence_length = sub0.length
			fence_char = sub0.to_s.chars.first
		else
			fence_length = match.subs[2].as(not null).length
			fence_char = match.subs[2].as(not null).to_s.chars.first
		end
		if fence_char == '`' and match.to_s.has("[^`]+`".to_re) then
			return null
		else if match.to_s.has("[^~]+~".to_re) then
			return null
		end
		return (new MdBlockStart(
			[new MdFencedCodeBlockParser(
				state.line,
				state.column + 1,
				state.column,
				fence_char,
				fence_length,
				state.indent)]
			)).at_index(next_non_space + fence_length)
	end
end

# List blocks parser
class MdListBlockParser
	super MdBlockParser

	redef type BLOCK: MdListBlock

	redef var block is lazy do
		if is_ordered then
			return new MdOrderedList(location, digit.as(not null), delim.as(not null))
		else
			return new MdUnorderedList(location, bullet.as(not null))
		end
	end

	# Is this list ordered
	var is_ordered: Bool

	# List bullet if unordered
	var bullet: nullable Char

	# List digit if ordered
	var digit: nullable Int

	# List delimiter if ordered
	var delim: nullable Char

	redef fun try_continue(state) do return new MdBlockContinue.at_index(state.index)

	redef fun finalize(parser) do
		super

		var item = block.first_child
		while item != null do
			# check for non-final list item ending with blank line
			if parser.ends_with_blank_line(item) and item.next != null then
				block.is_tight = false
				break
			end
			# recurse into children of list item to see if there are spaces between any of them
			var sub_item = item.first_child
			while sub_item != null do
				if parser.ends_with_blank_line(sub_item) and
				   (item.next != null or sub_item.next != null) then
					block.is_tight = false
					break
				end
				sub_item = sub_item.next
			end
			item = item.next
		end
	end

	redef fun parse_inlines(inline_parser) do
		var last_child = block.last_child
		if last_child != null then
			location.line_end = last_child.location.line_end
			location.column_end = last_child.location.column_end
		end
	end
end

# List blocks parser factory
class MdListBlockParserFactory
	super MdBlockQuoteParserFactory

	redef fun try_start(state, matched_block_parser) do
		if state.indent >= 4 and not matched_block_parser isa MdListBlockParser then return null

		var marker_index = state.next_non_space_index
		var marker_column = state.column + state.indent

		var in_paragraph = matched_block_parser isa MdParagraphParser and matched_block_parser.content != null
		var list_data = parse_list_marker(state, state.line_string, marker_index, marker_column, in_paragraph)
		if list_data == null then return null


		var new_column = list_data.content_column
		var list_item_parser = new MdListItemParser(
			state.line,
			state.column + 1,
			new_column,
			new_column - state.column)

		# prepend the list block if needed
		if not matched_block_parser isa MdListBlockParser or not lists_match(matched_block_parser.block, list_data) then
			var list_block_parser = new MdListBlockParser(state.line, state.column + 1, new_column - state.column, list_data.is_ordered, list_data.bullet, list_data.digit, list_data.delim)
			list_block_parser.block.is_tight = true

			return (new MdBlockStart([list_block_parser, list_item_parser: MdBlockParser])).at_column(new_column)
		end
		return (new MdBlockStart([list_item_parser])).at_column(new_column)
	end

	private fun parse_list_marker(state: MdParser, line: String, marker_index, marker_column: Int, in_paragraph: Bool): nullable MdListData do
		var rest = line.substring(marker_index, line.length - marker_index)
		var match = rest.search(re_list_marker)
		if match == null then return null

		var is_ordered
		var bullet = null
		var digit = null
		var delim = null

		var bullet_match = match.subs[0]
		if bullet_match != null then
			is_ordered = false
			bullet = bullet_match.to_s.chars[0]
		else
			is_ordered = true
			digit = match.subs[2].as(not null).to_s.to_i
			delim = match.subs[3].as(not null).to_s.chars[0]
		end

		var marker_length = match.length
		if match.to_s.has_suffix(" ") or match.to_s.has_suffix("\t") then
			marker_length -= 1
		end
		var index_after_marker = marker_index + marker_length

		# marker doesn't include tabs, so counting them as column directly is ok
		var column_after_marker = marker_column + marker_length
		# the column within the line where the content starts
		var content_column = column_after_marker

		# see at which column the content starts if there is content
		var has_content = false
		for i in [index_after_marker .. line.length[ do
			var c = line.chars[i]
			if c == '\t' then
				content_column += content_column.columns_to_next_tab_stop
			else if c == ' ' then
				content_column += 1
			else
				has_content = true
				break
			end
		end

		if in_paragraph then
			# if the list item is ordered, then start number must be 1 to interrupt a paragraph
			if is_ordered and digit != 1 then
				return null
			end
			# empty list item can not interrupt a paragraph
			if not has_content then
				return null
			end
		end

		if not has_content or (content_column - column_after_marker) > 4 then
			# if this line is blank or has a code block, default to 1 space after marker
			content_column = column_after_marker + 1
		end
		return new MdListData(is_ordered, bullet, digit, delim, content_column)
	end

	# Return true if the two list items are of the same type
	#
	# With the same delimiter and bullet character.
	# This is used in agglomerating list items into lists
	private fun lists_match(a: MdListBlock, b: MdListData): Bool do
		if a isa MdUnorderedList and not b.is_ordered then
			return a.bullet_marker == b.bullet
		else if a isa MdOrderedList and b.is_ordered then
			return a.delimiter == b.delim
		end
		return false
	end
end

# Parsed list data
private class MdListData

	var is_ordered: Bool

	var bullet: nullable Char

	var digit: nullable Int

	var delim: nullable Char

	# Column the content start at
	var content_column: Int
end

# List items parser
class MdListItemParser
	super MdBlockParser

	redef type BLOCK: MdListItem
	redef var block = new MdListItem(location) is lazy

	# List item content indend
	var content_indent: Int

	redef fun try_continue(state) do
		if state.is_blank then
			if block.first_child == null then
				# blank line after empty list item
				return null
			end
			return new MdBlockContinue.at_index(state.next_non_space_index)
		end
		if state.indent >= content_indent then
			return new MdBlockContinue.at_column(state.column + content_indent)
		end
		return null
	end

	redef fun parse_inlines(inline_parser) do
		var last_child = block.last_child
		if last_child != null then
			location.line_end = last_child.location.line_end
			location.column_end = last_child.location.column_end
		end
	end
end

# Thematic breaks parser
class MdThematicBreakParser
	super MdBlockParser

	redef type BLOCK: MdThematicBreak
	redef var block = new MdThematicBreak(location, pattern) is lazy

	# Thematic break pattern
	var pattern: String

	redef fun try_continue(state) do return null

	redef fun finalize(parser) do
		super

		location.line_end = line_start
		location.column_end = column_start + pattern.length - 1
	end
end

# Thematic breaks parser factory
class MdThematicBreakParserFactory
	super MdBlockQuoteParserFactory

	redef fun try_start(state, matched_block_parser) do
		if state.indent >= 4 then return null

		var next_non_space = state.next_non_space_index
		var line = state.line_string
		var tbreak  = line.substring(next_non_space, line.length - next_non_space).search(re_thematic_break)
		if tbreak != null then
			return (new MdBlockStart(
				[new MdThematicBreakParser(
					state.line,
					state.column + 1,
					next_non_space,
					tbreak.to_s)]
				)).at_index(line.length)
		end
		return null
	end
end

# Paragraphs parser
class MdParagraphParser
	super MdBlockParser

	redef type BLOCK: MdParagraph

	redef var block = new MdParagraph(location) is lazy

	# Paragraph content
	var content: nullable Buffer = new Buffer

	redef fun try_continue(state) do
		if state.is_blank then return null
		return new MdBlockContinue.at_index(state.index)
	end

	redef fun add_line(line) do
		var content = self.content
		if content == null then return
		if not content.is_empty then
			content.add('\n')
		end
		content.append(line)
	end

	redef fun finalize(parser) do
		super

		var inline_parser = parser.inline_parser
		var content = self.content
		if content == null then return

		var content_string = content.to_s
		var has_reference_defs = false

		var pos = inline_parser.parse_reference(content_string)
		# try parsing the beginning as link reference definitions
		while content_string.length > 3 and content_string.chars[0] == '[' and pos != 0 do
			content_string = content_string.substring(pos, content_string.length - pos)
			has_reference_defs = true
			pos = inline_parser.parse_reference(content_string)
		end

		if has_reference_defs and content_string.is_blank then
			block.unlink
			self.content = null
		else
			self.content = new Buffer.from_text(content_string)
		end
	end

	redef fun parse_inlines(inline_parser) do
		var content = self.content
		if content == null then return
		inline_parser.parse(content.to_s, content_offset, block)

		var last_child = block.last_child
		if last_child != null then
			location.line_end = last_child.location.line_end
			location.column_end = last_child.location.column_end
		end
	end
end

# Html blocks parser
class MdHtmlBlockParser
	super MdBlockParser

	redef type BLOCK: MdHtmlBlock
	redef var block = new MdHtmlBlock(location) is lazy

	# Closing tag pattern
	#
	# Or null if the block is not closed
	var closing_pattern: nullable Pattern

	# Is the current block finished?
	var finished = false

	# Block content
	var content = new Buffer

	redef fun try_continue(state) do
		if finished then return null

		# blank lin ends type 6 and 7 blocks
		if state.is_blank and closing_pattern == null then return null

		return new MdBlockContinue.at_index(state.index)
	end

	redef fun add_line(line) do
		if not content.is_empty then
			content.add('\n')
		end
		content.append(line)
		var closing_pattern = self.closing_pattern
		if closing_pattern != null and line.has(closing_pattern) then
			finished = true
		end
	end

	redef fun finalize(parser) do
		super

		var content = self.content.to_s
		block.literal = content

		var lines = content.split("\n")
		location.line_end = location.line_start + lines.length - 1
		location.column_end = lines.last.length
	end
end

# Html blocks parser factory
class MdHtmlBlockParserFactory
	super MdBlockParserFactory

	redef fun try_start(state, matched_block_parser) do
		var next_non_space = state.next_non_space_index
		var line = state.line_string

		if state.indent >= 4 or line.chars[next_non_space] != '<' then return null

		for block_type in [0..6] do
			# type 7 can not interrupt a paragraph
			if block_type == 6 and matched_block_parser.block isa MdParagraph then continue
			var opener = re_html_blocks[block_type].first
			var closer = re_html_blocks[block_type].last
			if line.substring(next_non_space, line.length - next_non_space).has(opener.as(not null)) then
				return (new MdBlockStart(
					[new MdHtmlBlockParser(
						state.line,
						state.column + 1,
						next_non_space,
						closer)])
					).at_index(state.index)
			end
		end
		return null
	end
end

# Post Processing

# Markdown post processor
#
# A Markdown AST visitor called after parsing from a MdParser
abstract class MdPostProcessor
	super MdVisitor

	# Document behing processed
	#
	# Availlable only during a call to `post_process`.
	var document: nullable MdDocument = null

	# Post process the `document` parsed by `parser`
	fun post_process(parser: MdParser, document: MdDocument) do
		self.document = document
		enter_visit(document)
		self.document = null
	end

	# Call `MdNode::post_process`
	redef fun visit(node) do node.post_process(self)
end

redef class MdNode

	# Accept the visit of a `MdPostProcessor`
	fun post_process(v: MdPostProcessor) do visit_all(v)
end

# Utils

redef class Sys
	# ATX headings matching
	private var re_atx_heading: Regex = "^(#\{1,6\})([ \t]+|$)".to_re

	# ATX trailings matching
	private var re_atx_trailing: Regex = "(^|[ \t]+)#+[ \t]*$".to_re

	# SeText headings matching
	private var re_setext_heading: Regex = "^(=+|-+)[ \t]*$".to_re

	# Blank lines matching
	var re_trailing_blank_lines: Regex = "(\n[ \t]*)+$".to_re

	# Opening fence matching
	var re_opening_fence: Regex = "^(`\{3,\})(.*)|^(~\{3,\})(.*)".to_re

	# Closing fence matching
	var re_closing_fence: Regex = "^(`\{3,\}|~\{3,\})( *$)".to_re

	# List marker matching
	var re_list_marker: Regex = "^([*+-])( |\t|$)|^([0-9]\{1,9\})([.)])( |\t|$)".to_re

	# Thematic break pattern
	var re_thematic_break: Regex = "^((\\*[ \t]*)\{3,\}|(_[ \t]*)\{3,\}|(-[ \t]*)\{3,\})[ \t]*$".to_re

	# HTML blocks patterns
	var re_html_blocks: Array[Array[nullable Regex]] do
		var blocks = new Array[Array[nullable Regex]]

		var re0_opening = "^<(script|pre|style)(\\s|>|$)".to_re
		re0_opening.ignore_case = true
		var re0_closing = "</(script|pre|style)>".to_re
		re0_closing.ignore_case = true
		blocks.add([re0_opening, re0_closing])

		blocks.add([
			"^<!--".to_re,
			"-->".to_re
		])

		blocks.add([
			"^<[?]".to_re,
			"\\?>".to_re
		])

		blocks.add([
			"^<![A-Z]".to_re,
			">".to_re
		])

		blocks.add([
			"^<!\\[CDATA\\[".to_re,
			"\\]\\]>".to_re
		])

		var re5_opening = "^</?(address|article|aside|base|basefont|blockquote|body|caption|center|col|colgroup|dd|details|dialog|dir|div|dl|dt|fieldset|figcaption|figure|footer|form|frame|frameset|h1|h2|h3|h4|h5|h6|head|header|hr|html|iframe|legend|li|link|main|menu|menuitem|meta|nav|noframes|ol|optgroup|option|p|param|section|source|summary|table|tbody|td|tfoot|th|thead|title|tr|track|ul)(\\s|[/]?[>]|$)".to_re
		re5_opening.ignore_case = true
		blocks.add([re5_opening, null])

		var p_tagname = "[A-Za-z][A-Za-z0-9-]*"
		var p_attribute_name = "[a-zA-Z_:][a-zA-Z0-9:._-]*"
		var p_uquoted_value = "[^\"'=<>`\\x00-\\x20]+"
		var p_squoted_value = "'[^']*'"
		var p_dquoted_value = "\"[^\"]*\""
		var p_attribute_value = "({p_uquoted_value}|{p_squoted_value}|{p_dquoted_value})"
		var p_attribute_value_spec = "(\\s*=\\s*{p_attribute_value})"
		var p_attribute = "(\\s{p_attribute_name}{p_attribute_value_spec}?)"
		var p_opentag = "<{p_tagname}{p_attribute}*\\s*/?>"
		var p_closetag = "</{p_tagname}\\s*[>]"
		var re6_opening = "^({p_opentag}|{p_closetag})\\s*$".to_re
		re6_opening.ignore_case = true
		blocks.add([re6_opening, null])

		return blocks
	end
end

redef class Int

	# Tab stop is 4
	private fun columns_to_next_tab_stop: Int do return 4 - (self % 4)
end

redef class String

	# Is this string blank?
	#
	# i.e. contains only spacing characters.
	private fun is_blank: Bool do
		for i in [0 .. length[ do
			var c = chars[i]
			if c == ' ' or c == '\t' or c == '\n' or c == '\r' then
				continue
			else
				return false
			end
		end
		return true
	end

	# Is the character at `index` a space or a tab
	#
	# Return false if `index > self.length`.
	private fun is_space_or_tab(index: Int): Bool do
		if index >= length then return false
		var c = chars[index]
		return c == ' ' or c == '\t'
	end
end
