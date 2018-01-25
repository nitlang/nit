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

# Markdown parsing.
module markdown

import template

# Parse a markdown string and split it in blocks.
#
# Blocks are then outputed by an `MarkdownEmitter`.
#
# Usage:
#
#    var proc = new MarkdownProcessor
#    var html = proc.process("**Hello World!**")
#    assert html == "<p><strong>Hello World!</strong></p>\n"
#
# SEE: `String::md_to_html` for a shortcut.
class MarkdownProcessor

	# Work in extended mode (default).
	#
	# Behavior changes when using extended mode:
	#
	# * Lists and code blocks end a paragraph
	#
	#   In normal markdown the following:
	#
	# ~~~md
	# This is a paragraph
	# * and this is not a list
	# ~~~
	#
	#   Will produce:
	#
	# ~~~html
	# <p>This is a paragraph
	# * and this is not a list</p>
	# ~~~
	#
	#   When using extended mode this changes to:
	#
	# ~~~html
	# <p>This is a paragraph</p>
	# <ul>
	# <li>and this is not a list</li>
	# </ul>
	# ~~~
	#
	# * Fences code blocks
	#
	#   If you don't want to indent your all your code with 4 spaces,
	#   you can wrap your code in ``` ``` ``` or `~~~`.
	#
	#   Here's an example:
	#
	# ~~~md
	# fun test do
	#    print "Hello World!"
	# end
	# ~~~
	#
	# * Code blocks meta
	#
	#   If you want to use syntax highlighting tools, most of them need to know what kind
	#   of language they are highlighting.
	#   You can add an optional language identifier after the fence declaration to output
	#   it in the HTML render.
	#
	# ```nit
	# import markdown
	#
	# print "# Hello World!".md_to_html
	# ```
	#
	#   Becomes
	#
	# ~~~html
	# <pre class="nit"><code>import markdown
	#
	# print "Hello World!".md_to_html
	# </code></pre>
	# ~~~
	#
	# * Underscores (Emphasis)
	#
	#   Underscores in the middle of a word like:
	#
	# ~~~md
	# Con_cat_this
	# ~~~
	#
	#   normally produces this:
	#
	# ~~~html
	# <p>Con<em>cat</em>this</p>
	# ~~~
	#
	#   With extended mode they don't result in emphasis.
	#
	# ~~~html
	# <p>Con_cat_this</p>
	# ~~~
	#
	# * Strikethrough
	#
	#   Like in [GFM](https://help.github.com/articles/github-flavored-markdown),
	#   strikethrought span is marked with `~~`.
	#
	# ~~~md
	# ~~Mistaken text.~~
	# ~~~
	#
	#   becomes
	#
	# ~~~html
	# <del>Mistaken text.</del>
	# ~~~
	var ext_mode = true

	# Disable attaching MDLocation to Tokens
	#
	# Locations are useful for some tools but they may
	# cause an important time and space overhead.
	#
	# Default = `false`
	var no_location = false is writable

	# Process the mardown `input` string and return the processed output.
	fun process(input: String): Writable do
		# init processor
		link_refs.clear
		last_link_ref = null
		current_line = null
		current_block = null
		# parse markdown
		var parent = read_lines(input)
		parent.remove_surrounding_empty_lines
		recurse(parent, false)
		# output processed text
		decorator.headlines.clear
		return emit(parent.kind)
	end

	# Split `input` string into `MDLines` and create a parent `MDBlock` with it.
	private fun read_lines(input: String): MDBlock do
		var block = new MDBlock(new MDLocation(1, 1, 1, 1))
		var value = new FlatBuffer
		var i = 0

		var line_pos = 0
		var col_pos = 0

		while i < input.length do
			value.clear
			var pos = 0
			var eol = false
			while not eol and i < input.length do
				col_pos += 1
				var c = input[i]
				if c == '\n' then
					eol = true
				else if c == '\r' then
				else if c == '\t' then
					var np = pos + (4 - (pos & 3))
					while pos < np do
						value.add ' '
						pos += 1
					end
				else
					pos += 1
					value.add c
				end
				i += 1
			end
			line_pos += 1

			var loc = new MDLocation(line_pos, 1, line_pos, col_pos)
			var line = new MDLine(loc, value.write_to_string)
			var is_link_ref = check_link_ref(line)
			# Skip link refs
			if not is_link_ref then block.add_line line
			col_pos = 0
		end
		return block
	end

	# Check if line is a block link definition.
	# Return `true` if line contains a valid link ref and save it into `link_refs`.
	private fun check_link_ref(line: MDLine): Bool do
		var md = line.value
		var is_link_ref = false
		var id = new FlatBuffer
		var link = new FlatBuffer
		var comment = new FlatBuffer
		var pos = -1
		if not line.is_empty and line.leading < 4 and line.value[line.leading] == '[' then
			pos = line.leading + 1
			pos = md.read_until(id, pos, ']')
			if not id.is_empty and pos >= 0 and pos + 2 < line.value.length then
				if line.value[pos + 1] == ':' then
					pos += 2
					pos = md.skip_spaces(pos)
					if pos >= 0 and line.value[pos] == '<' then
						pos += 1
						pos = md.read_until(link, pos, '>')
						pos += 1
					else if pos >= 0 then
						pos = md.read_until(link, pos, ' ', '\n')
					end
					if not link.is_empty then
						pos = md.skip_spaces(pos)
						if pos > 0 and pos < line.value.length then
							var c = line.value[pos]
							if c == '\"' or c == '\'' or c == '(' then
								pos += 1
								if c == '(' then
									pos = md.read_until(comment, pos, ')')
								else
									pos = md.read_until(comment, pos, c)
								end
								if pos > 0 then is_link_ref = true
							end
						else
							is_link_ref = true
						end
					end
				end
			end
		end
		if is_link_ref and not id.is_empty and not link.is_empty then
			var lr = new LinkRef.with_title(link.write_to_string, comment.write_to_string)
			add_link_ref(id.write_to_string, lr)
			if comment.is_empty then last_link_ref = lr
			return true
		else
			comment = new FlatBuffer
			if not line.is_empty and last_link_ref != null then
				pos = line.leading
				var c = line.value[pos]
				if c == '\"' or c == '\'' or c ==  '(' then
					pos += 1
					if c == '(' then
						pos = md.read_until(comment, pos, ')')
					else
						pos = md.read_until(comment, pos, c)
					end
				end
				var last_link_ref = self.last_link_ref
				if not comment.is_empty and last_link_ref != null then
					last_link_ref.title = comment.write_to_string
				end
			end
			if comment.is_empty then return false
			return true
		end
	end

	# Known link refs
	# This list will be needed during output to expand links.
	var link_refs: Map[String, LinkRef] = new HashMap[String, LinkRef]

	# Last encountered link ref (for multiline definitions)
	#
	# Markdown allows link refs to be defined over two lines:
	#
	# ~~~md
	# [id]: http://example.com/longish/path/to/resource/here
	#	"Optional Title Here"
	# ~~~
	#
	private var last_link_ref: nullable LinkRef = null

	# Add a link ref to the list
	fun add_link_ref(key: String, ref: LinkRef) do link_refs[key.to_lower] = ref

	# Recursively split a `block`.
	#
	# The block is splitted according to the type of lines it contains.
	# Some blocks can be splited again recursively like lists.
	# The `in_list` mode is used to recurse on list and build
	# nested paragraphs or code blocks.
	fun recurse(root: MDBlock, in_list: Bool) do
		var old_mode = self.in_list
		var old_root = self.current_block
		self.in_list = in_list

		var line = root.first_line
		while line != null and line.is_empty do
			line = line.next
			if line == null then return
		end

		current_line = line
		current_block = root
		while current_line != null do
			line_kind(current_line.as(not null)).process(self)
		end
		self.in_list = old_mode
		self.current_block = old_root
	end

	# Currently processed line.
	# Used when visiting blocks with `recurse`.
	var current_line: nullable MDLine = null is writable

	# Currently processed block.
	# Used when visiting blocks with `recurse`.
	var current_block: nullable MDBlock = null is writable

	# Is the current recursion in list mode?
	# Used when visiting blocks with `recurse`
	private var in_list = false

	# The type of line.
	# see: `md_line_*`
	fun line_kind(md: MDLine): Line do
		var value = md.value
		var leading = md.leading
		var trailing = md.trailing
		if md.is_empty then return new LineEmpty
		if md.leading > 3 then return new LineCode
		if value[leading] == '#' then return new LineHeadline
		if value[leading] == '>' then return new LineBlockquote

		if ext_mode then
			if value.length - leading - trailing > 2 then
				if value[leading] == '`' and md.count_chars_start('`') >= 3 then
					return new LineFence
				end
				if value[leading] == '~' and md.count_chars_start('~') >= 3 then
					return new LineFence
				end
			end
		end

		if value.length - leading - trailing > 2 and
		   (value[leading] == '*' or value[leading] == '-' or value[leading] == '_') then
		   if md.count_chars(value[leading]) >= 3 then
				return new LineHR
		   end
		end

		if value.length - leading >= 2 and value[leading + 1] == ' ' then
			var c = value[leading]
			if c == '*' or c == '-' or c == '+' then return new LineUList
		end

		if value.length - leading >= 3 and value[leading].is_digit then
			var i = leading + 1
			while i < value.length and value[i].is_digit do i += 1
			if i + 1 < value.length and value[i] == '.' and value[i + 1] == ' ' then
				return new LineOList
			end
		end

		if value[leading] == '<' and md.check_html then return new LineXML

		var next = md.next
		if next != null and not next.is_empty then
			if next.count_chars('=') > 0 then
				return new LineHeadline1
			end
			if next.count_chars('-') > 0 then
				return new LineHeadline2
			end
		end
		return new LineOther
	end

	# Get the token kind at `pos`.
	fun token_at(text: Text, pos: Int): Token do
		var c0: Char
		var c1: Char
		var c2: Char

		if pos > 0 then
			c0 = text[pos - 1]
		else
			c0 = ' '
		end
		var c = text[pos]

		if pos + 1 < text.length then
			c1 = text[pos + 1]
		else
			c1 = ' '
		end
		if pos + 2 < text.length then
			c2 = text[pos + 2]
		else
			c2 = ' '
		end

		var loc
		if no_location then
			loc = null
		else
			loc = new MDLocation(
				current_loc.line_start,
				current_loc.column_start + pos,
				current_loc.line_start,
				current_loc.column_start + pos)
		end

		if c == '*' then
			if c1 == '*' then
				if c0 != ' ' or c2 != ' ' then
					return new TokenStrongStar(loc, pos, c)
				else
					return new TokenEmStar(loc, pos, c)
				end
			end
			if c0 != ' ' or c1 != ' ' then
				return new TokenEmStar(loc, pos, c)
			else
				return new TokenNone(loc, pos, c)
			end
		else if c == '_' then
			if c1 == '_' then
				if c0 != ' ' or c2 != ' ' then
					return new TokenStrongUnderscore(loc, pos, c)
				else
					return new TokenEmUnderscore(loc, pos, c)
				end
			end
			if ext_mode then
				if (c0.is_letter or c0.is_digit) and c0 != '_' and
				   (c1.is_letter or c1.is_digit) then
					return new TokenNone(loc, pos, c)
				else
					return new TokenEmUnderscore(loc, pos, c)
				end
			end
			if c0 != ' ' or c1 != ' ' then
				return new TokenEmUnderscore(loc, pos, c)
			else
				return new TokenNone(loc, pos, c)
			end
		else if c == '!' then
			if c1 == '[' then return new TokenImage(loc, pos, c)
			return new TokenNone(loc, pos, c)
		else if c == '[' then
			return new TokenLink(loc, pos, c)
		else if c == ']' then
			return new TokenNone(loc, pos, c)
		else if c == '`' then
			if c1 == '`' then
				return new TokenCodeDouble(loc, pos, c)
			else
				return new TokenCodeSingle(loc, pos, c)
			end
		else if c == '\\' then
			if c1 == '\\' or c1 == '[' or c1 == ']' or c1 == '(' or c1 == ')' or c1 == '{' or c1 == '}' or c1 == '#' or c1 == '"' or c1 == '\'' or c1 == '.' or c1 == '<' or c1 == '>' or c1 == '*' or c1 == '+' or c1 == '-' or c1 == '_' or c1 == '!' or c1 == '`' or c1 == '~' or c1 == '^' then
				return new TokenEscape(loc, pos, c)
			else
				return new TokenNone(loc, pos, c)
			end
		else if c == '<' then
			return new TokenHTML(loc, pos, c)
		else if c == '&' then
			return new TokenEntity(loc, pos, c)
		else
			if ext_mode then
				if c == '~' and c1 == '~' then
					return new TokenStrike(loc, pos, c)
				end
			end
			return new TokenNone(loc, pos, c)
		end
	end

	# Find the position of a `token` in `self`.
	fun find_token(text: Text, start: Int, token: Token): Int do
		var pos = start
		while pos < text.length do
			if token_at(text, pos).is_same_type(token) then
				return pos
			end
			pos += 1
		end
		return -1
	end

	# Kind of decorator used for decoration.
	type DECORATOR: Decorator

	# Decorator used for output.
	# Default is `HTMLDecorator`
	var decorator: DECORATOR is writable, lazy do
		return new HTMLDecorator
	end

	# Create a new `MarkdownEmitter` using a custom `decorator`.
	init with_decorator(decorator: DECORATOR) do
		self.decorator = decorator
	end

	# Output `block` using `decorator` in the current buffer.
	fun emit(block: Block): Text do
		var buffer = push_buffer
		block.emit(self)
		pop_buffer
		return buffer
	end

	# Output the content of `block`.
	fun emit_in(block: Block) do block.emit_in(self)

	# Transform and emit mardown text
	fun emit_text(text: Text) do emit_text_until(text, 0, null)

	# Transform and emit mardown text starting at `start` and
	# until a token with the same type as `token` is found.
	# Go until the end of `text` if `token` is null.
	fun emit_text_until(text: Text, start: Int, token: nullable Token): Int do
		var old_text = current_text
		var old_pos = current_pos
		current_text = text
		current_pos = start
		while current_pos < text.length do
			if text[current_pos] == '\n' then
				current_loc.line_start += 1
				current_loc.column_start = -current_pos
			end
			var mt = token_at(text, current_pos)
			if (token != null and not token isa TokenNone) and
			(mt.is_same_type(token) or
			(token isa TokenEmStar and mt isa TokenStrongStar) or
			(token isa TokenEmUnderscore and mt isa TokenStrongUnderscore)) then
				return current_pos
			end
			mt.emit(self)
			current_pos += 1
		end
		current_text = old_text
		current_pos = old_pos
		return -1
	end

	# Currently processed position in `current_text`.
	# Used when visiting inline production with `emit_text_until`.
	private var current_pos: Int = -1

	# Currently processed text.
	# Used when visiting inline production with `emit_text_until`.
	private var current_text: nullable Text = null

	# Stacked buffers.
	private var buffer_stack = new List[FlatBuffer]

	# Push a new buffer on the stack.
	private fun push_buffer: FlatBuffer do
		var buffer = new FlatBuffer
		buffer_stack.add buffer
		return buffer
	end

	# Pop the last buffer.
	private fun pop_buffer do buffer_stack.pop

	# Current output buffer.
	private fun current_buffer: FlatBuffer do
		assert not buffer_stack.is_empty
		return buffer_stack.last
	end

	# Stacked locations.
	private var loc_stack = new List[MDLocation]

	# Push a new MDLocation on the stack.
	private fun push_loc(location: MDLocation) do loc_stack.add location

	# Pop the last buffer.
	private fun pop_loc: MDLocation do return loc_stack.pop

	# Current output buffer.
	private fun current_loc: MDLocation do
		assert not loc_stack.is_empty
		return loc_stack.last
	end

	# Append `e` to current buffer.
	fun add(e: Writable) do
		if e isa Text then
			current_buffer.append e
		else
			current_buffer.append e.write_to_string
		end
	end

	# Append `c` to current buffer.
	fun addc(c: Char) do
		current_buffer.add c
	end

	# Append a "\n" line break.
	fun addn do addc '\n'
end

# A Link Reference.
# Links that are specified somewhere in the mardown document to be reused as shortcuts.
#
# ~~~raw
# [1]: http://example.com/ "Optional title"
# ~~~
class LinkRef

	# Link href
	var link: String

	# Optional link title
	var title: nullable String = null

	# Is the link an abreviation?
	var is_abbrev = false

	# Create a link with a title.
	init with_title(link: String, title: nullable String) do
		init(link)
		self.title = title
	end
end

# A `Decorator` is used to emit mardown into a specific format.
# Default decorator used is `HTMLDecorator`.
interface Decorator

	# Kind of processor used
	type PROCESSOR: MarkdownProcessor

	# Render a single plain char.
	#
	# Redefine this method to add special escaping for plain text.
	fun add_char(v: PROCESSOR, c: Char) do v.addc c

	# Render a ruler block.
	fun add_ruler(v: PROCESSOR, block: BlockRuler) is abstract

	# Render a headline block with corresponding level.
	fun add_headline(v: PROCESSOR, block: BlockHeadline) is abstract

	# Render a paragraph block.
	fun add_paragraph(v: PROCESSOR, block: BlockParagraph) is abstract

	# Render a code or fence block.
	fun add_code(v: PROCESSOR, block: BlockCode) is abstract

	# Render a blockquote.
	fun add_blockquote(v: PROCESSOR, block: BlockQuote) is abstract

	# Render an unordered list.
	fun add_unorderedlist(v: PROCESSOR, block: BlockUnorderedList) is abstract

	# Render an ordered list.
	fun add_orderedlist(v: PROCESSOR, block: BlockOrderedList) is abstract

	# Render a list item.
	fun add_listitem(v: PROCESSOR, block: BlockListItem) is abstract

	# Render an emphasis text.
	fun add_em(v: PROCESSOR, text: Text) is abstract

	# Render a strong text.
	fun add_strong(v: PROCESSOR, text: Text) is abstract

	# Render a strike text.
	#
	# Extended mode only (see `MarkdownProcessor::ext_mode`)
	fun add_strike(v: PROCESSOR, text: Text) is abstract

	# Render a link.
	fun add_link(v: PROCESSOR, link: Text, name: Text, comment: nullable Text) is abstract

	# Render an image.
	fun add_image(v: PROCESSOR, link: Text, name: Text, comment: nullable Text) is abstract

	# Render an abbreviation.
	fun add_abbr(v: PROCESSOR, name: Text, comment: Text) is abstract

	# Render a code span reading from a buffer.
	fun add_span_code(v: PROCESSOR, buffer: Text, from, to: Int) is abstract

	# Render a text and escape it.
	fun append_value(v: PROCESSOR, value: Text) is abstract

	# Render code text from buffer and escape it.
	fun append_code(v: PROCESSOR, buffer: Text, from, to: Int) is abstract

	# Render a character escape.
	fun escape_char(v: PROCESSOR, char: Char) is abstract

	# Render a line break
	fun add_line_break(v: PROCESSOR) is abstract

	# Generate a new html valid id from a `String`.
	fun strip_id(txt: String): String is abstract

	# Found headlines during the processing labeled by their ids.
	fun headlines: ArrayMap[String, HeadLine] is abstract
end

# Class representing a markdown headline.
class HeadLine
	# Unique identifier of this headline.
	var id: String

	# Text of the headline.
	var title: String

	# Level of this headline.
	#
	# According toe the markdown specification, level must be in `[1..6]`.
	var level: Int
end

# `Decorator` that outputs HTML.
class HTMLDecorator
	super Decorator

	redef var headlines = new ArrayMap[String, HeadLine]

	redef fun add_ruler(v, block) do v.add "<hr/>\n"

	redef fun add_headline(v, block) do
		# save headline
		var line = block.block.first_line
		if line == null then return
		var txt = line.value
		var id = strip_id(txt)
		var lvl = block.depth
		headlines[id] = new HeadLine(id, txt, lvl)
		# output it
		v.add "<h{lvl} id=\"{id}\">"
		v.emit_in block
		v.add "</h{lvl}>\n"
	end

	redef fun add_paragraph(v, block) do
		v.add "<p>"
		v.emit_in block
		v.add "</p>\n"
	end

	redef fun add_code(v, block) do
		var meta = block.meta
		if meta != null then
			v.add "<pre class=\""
			append_value(v, meta)
			v.add "\"><code>"
		else
			v.add "<pre><code>"
		end
		v.emit_in block
		v.add "</code></pre>\n"
	end

	redef fun add_blockquote(v, block) do
		v.add "<blockquote>\n"
		v.emit_in block
		v.add "</blockquote>\n"
	end

	redef fun add_unorderedlist(v, block) do
		v.add "<ul>\n"
		v.emit_in block
		v.add "</ul>\n"
	end

	redef fun add_orderedlist(v, block) do
		v.add "<ol>\n"
		v.emit_in block
		v.add "</ol>\n"
	end

	redef fun add_listitem(v, block) do
		v.add "<li>"
		v.emit_in block
		v.add "</li>\n"
	end

	redef fun add_em(v, text) do
		v.add "<em>"
		v.add text
		v.add "</em>"
	end

	redef fun add_strong(v, text) do
		v.add "<strong>"
		v.add text
		v.add "</strong>"
	end

	redef fun add_strike(v, text) do
		v.add "<del>"
		v.add text
		v.add "</del>"
	end

	redef fun add_image(v, link, name, comment) do
		v.add "<img src=\""
		append_value(v, link)
		v.add "\" alt=\""
		append_value(v, name)
		v.add "\""
		if comment != null and not comment.is_empty then
			v.add " title=\""
			append_value(v, comment)
			v.add "\""
		end
		v.add "/>"
	end

	redef fun add_link(v, link, name, comment) do
		v.add "<a href=\""
		append_value(v, link)
		v.add "\""
		if comment != null and not comment.is_empty then
			v.add " title=\""
			append_value(v, comment)
			v.add "\""
		end
		v.add ">"
		v.emit_text(name)
		v.add "</a>"
	end

	redef fun add_abbr(v, name, comment) do
		v.add "<abbr title=\""
		append_value(v, comment)
		v.add "\">"
		v.emit_text(name)
		v.add "</abbr>"
	end

	redef fun add_span_code(v, text, from, to) do
		v.add "<code>"
		append_code(v, text, from, to)
		v.add "</code>"
	end

	redef fun add_line_break(v) do
		v.add "<br/>"
	end

	redef fun append_value(v, text) do for c in text do escape_char(v, c)

	redef fun escape_char(v, c) do
		if c == '&' then
			v.add "&amp;"
		else if c == '<' then
			v.add "&lt;"
		else if c == '>' then
			v.add "&gt;"
		else if c == '"' then
			v.add "&quot;"
		else if c == '\'' then
			v.add "&apos;"
		else
			v.addc c
		end
	end

	redef fun append_code(v, buffer, from, to) do
		for i in [from..to[ do
			var c = buffer[i]
			if c == '&' then
				v.add "&amp;"
			else if c == '<' then
				v.add "&lt;"
			else if c == '>' then
				v.add "&gt;"
			else
				v.addc c
			end
		end
	end

	redef fun strip_id(txt) do
		# strip id
		var b = new FlatBuffer
		for c in txt do
			if c == ' ' then
				b.add '_'
			else
				if not c.is_letter and
				   not c.is_digit and
				   not allowed_id_chars.has(c) then continue
				b.add c
			end
		end
		var res = b.to_s
		var key = res
		# check for multiple id definitions
		if headlines.has_key(key) then
			var i = 1
			key = "{res}_{i}"
			while headlines.has_key(key) do
				i += 1
				key = "{res}_{i}"
			end
		end
		return key
	end

	private var allowed_id_chars: Array[Char] = ['-', '_', ':', '.']
end

# Location in a Markdown input.
class MDLocation

	# Starting line number (starting from 1).
	var line_start: Int

	# Starting column number (starting from 1).
	var column_start: Int

	# Stopping line number (starting from 1).
	var line_end: Int

	# Stopping column number (starting from 1).
	var column_end: Int

	redef fun to_s do return "{line_start},{column_start}--{line_end},{column_end}"

	# Return a copy of `self`.
	fun copy: MDLocation do
		return new MDLocation(line_start, column_start, line_end, column_end)
	end
end

# A block of markdown lines.
# A `MDBlock` can contains lines and/or sub-blocks.
class MDBlock

	# Position of `self` in the input.
	var location: MDLocation

	# Kind of block.
	# See `Block`.
	var kind: Block = new BlockNone(self) is writable

	# First line if any.
	var first_line: nullable MDLine = null is writable

	# Last line if any.
	var last_line: nullable MDLine = null is writable

	# First sub-block if any.
	var first_block: nullable MDBlock = null is writable

	# Last sub-block if any.
	var last_block: nullable MDBlock = null is writable

	# Previous block if any.
	var prev: nullable MDBlock = null is writable

	# Next block if any.
	var next: nullable MDBlock = null is writable

	# Does this block contain subblocks?
	fun has_blocks: Bool do return first_block != null

	# Count sub-blocks.
	fun count_blocks: Int do
		var count = 0
		var block = first_block
		while block != null do
			count += 1
			block = block.next
		end
		return count
	end

	# Does this block contain lines?
	fun has_lines: Bool do return first_line != null

	# Count block lines.
	fun count_lines: Int do
		var count = 0
		var line = first_line
		while line != null do
			count += 1
			line = line.next
		end
		return count
	end

	# Split `self` creating a new sub-block having `line` has `last_line`.
	fun split(line: MDLine): MDBlock do
		# location for new block
		var new_loc = new MDLocation(
			first_line.as(not null).location.line_start,
			first_line.as(not null).location.column_start,
			line.location.line_end,
			line.location.column_end)
		# create block
		var block = new MDBlock(new_loc)
		block.first_line = first_line
		block.last_line = line
		first_line = line.next
		line.next = null
		if first_line == null then
			last_line = null
		else
			first_line.as(not null).prev = null
			# update current block loc
			location.line_start = first_line.as(not null).location.line_start
			location.column_start = first_line.as(not null).location.column_start
		end
		if first_block == null then
			first_block = block
			last_block = block
		else
			last_block.as(not null).next = block
			last_block = block
		end
		return block
	end

	# Add a `line` to this block.
	fun add_line(line: MDLine) do
		if last_line == null then
			first_line = line
			last_line = line
		else
			last_line.as(not null).next_empty = line.is_empty
			line.prev_empty = last_line.as(not null).is_empty
			line.prev = last_line
			last_line.as(not null).next = line
			last_line = line
		end
	end

	# Remove `line` from this block.
	fun remove_line(line: MDLine) do
		if line.prev == null then
			first_line = line.next
		else
			line.prev.as(not null).next = line.next
		end
		if line.next == null then
			last_line = line.prev
		else
			line.next.as(not null).prev = line.prev
		end
		line.prev = null
		line.next = null
	end

	# Remove leading empty lines.
	fun remove_leading_empty_lines: Bool do
		var was_empty = false
		var line = first_line
		while line != null and line.is_empty do
			remove_line line
			line = first_line
			was_empty = true
		end
		return was_empty
	end

	# Remove trailing empty lines.
	fun remove_trailing_empty_lines: Bool do
		var was_empty = false
		var line = last_line
		while line != null and line.is_empty do
			remove_line line
			line = last_line
			was_empty = true
		end
		return was_empty
	end

	# Remove leading and trailing empty lines.
	fun remove_surrounding_empty_lines: Bool do
		var was_empty = false
		if remove_leading_empty_lines then was_empty = true
		if remove_trailing_empty_lines then was_empty = true
		return was_empty
	end

	# Remove list markers and up to 4 leading spaces.
	# Used to clean nested lists.
	fun remove_list_indent(v: MarkdownProcessor) do
		var line = first_line
		while line != null do
			if not line.is_empty then
				var kind = v.line_kind(line)
				if kind isa LineList then
					line.value = kind.extract_value(line)
				else
					line.value = line.value.substring_from(line.leading.min(4))
				end
				line.leading = line.process_leading
			end
			line = line.next
		end
	end

	# Collect block line text.
	fun text: String do
		var text = new FlatBuffer
		var line = first_line
		while line != null do
			if not line.is_empty then
				text.append line.text
			end
			text.append "\n"
			line = line.next
		end
		var block = first_block
		while block != null do
			text.append block.text
			text.append "\n"
			block = block.next
		end
		return text.write_to_string
	end
end

# Representation of a markdown block in the AST.
# Each `Block` is linked to a `MDBlock` that contains mardown code.
abstract class Block

	# The markdown block `self` is related to.
	var block: MDBlock

	# Output `self` using `v.decorator`.
	fun emit(v: MarkdownProcessor) do v.emit_in(self)

	# Emit the containts of `self`, lines or blocks.
	fun emit_in(v: MarkdownProcessor) do
		block.remove_surrounding_empty_lines
		if block.has_lines then
			emit_lines(v)
		else
			emit_blocks(v)
		end
	end

	# Emit lines contained in `block`.
	fun emit_lines(v: MarkdownProcessor) do
		var tpl = v.push_buffer
		var line = block.first_line
		while line != null do
			if not line.is_empty then
				v.add line.value.substring(line.leading, line.value.length - line.trailing)
				if line.trailing >= 2 then v.decorator.add_line_break(v)
			end
			if line.next != null then
				v.addn
			end
			line = line.next
		end
		v.pop_buffer
		v.emit_text(tpl)
	end

	# Emit sub-blocks contained in `block`.
	fun emit_blocks(v: MarkdownProcessor) do
		var block = self.block.first_block
		while block != null do
			v.push_loc(block.location)
			block.kind.emit(v)
			v.pop_loc
			block = block.next
		end
	end

	# The raw content of the block as a multi-line string.
	fun raw_content: String do
		var infence = self isa BlockFence
		var text = new FlatBuffer
		var line = self.block.first_line
		while line != null do
			if not line.is_empty then
				var str = line.value
				if not infence and str.has_prefix("    ") then
					text.append str.substring(4, str.length - line.trailing)
				else
					text.append str
				end
			end
			text.append "\n"
			line = line.next
		end
		return text.write_to_string
	end
end

# A block without any markdown specificities.
#
# Actually use the same implementation than `BlockCode`,
# this class is only used for typing purposes.
class BlockNone
	super Block
end

# A markdown blockquote.
class BlockQuote
	super Block

	redef fun emit(v) do v.decorator.add_blockquote(v, self)

	# Remove blockquote markers.
	private fun remove_block_quote_prefix(block: MDBlock) do
		var line = block.first_line
		while line != null do
			if not line.is_empty then
				if line.value[line.leading] == '>' then
					var rem = line.leading + 1
					if line.leading + 1 < line.value.length and
					   line.value[line.leading + 1] == ' ' then
						rem += 1
					end
					line.value = line.value.substring_from(rem)
					line.leading = line.process_leading
				end
			end
			line = line.next
		end
	end
end

# A markdown code block.
class BlockCode
	super Block

	# Any string found after fence token.
	var meta: nullable Text

	# Number of char to skip at the beginning of the line.
	#
	# Block code lines start at 4 spaces.
	protected var line_start = 4

	redef fun emit(v) do v.decorator.add_code(v, self)

	redef fun emit_lines(v) do
		var line = block.first_line
		while line != null do
			if not line.is_empty then
				v.decorator.append_code(v, line.value, line_start, line.value.length)
			end
			v.addn
			line = line.next
		end
	end
end

# A markdown code-fence block.
#
# Actually use the same implementation than `BlockCode`,
# this class is only used for typing purposes.
class BlockFence
	super BlockCode

	# Fence code lines start at 0 spaces.
	redef var line_start = 0
end

# A markdown headline.
class BlockHeadline
	super Block

	redef fun emit(v) do
		var loc = block.location.copy
		loc.column_start += start
		v.push_loc(loc)
		v.decorator.add_headline(v, self)
		v.pop_loc
	end

	private var start = 0

	# Depth of the headline used to determine the headline level.
	var depth = 0

	# Remove healine marks from lines contained in `self`.
	private fun transform_headline(block: MDBlock) do
		if depth > 0 then return
		var level = 0
		var line = block.first_line
		if line == null then return
		if line.is_empty then return
		var start = line.leading
		while start < line.value.length and line.value[start] == '#' do
			level += 1
			start += 1
		end
		while start < line.value.length and line.value[start] == ' ' do
			start += 1
		end
		if start >= line.value.length then
			line.is_empty = true
		else
			var nend = line.value.length - line.trailing - 1
			while line.value[nend] == '#' do nend -= 1
			while line.value[nend] == ' ' do nend -= 1
			line.value = line.value.substring(start, nend - start + 1)
			line.leading = 0
			line.trailing = 0
		end
		self.start = start
		depth = level.min(6)
	end
end

# A markdown list item block.
class BlockListItem
	super Block

	redef fun emit(v) do v.decorator.add_listitem(v, self)
end

# A markdown list block.
# Can be either an ordered or unordered list, this class is mainly used to factorize code.
abstract class BlockList
	super Block

	# Split list block into list items sub-blocks.
	private fun init_block(v: MarkdownProcessor) do
		var line = block.first_line
		if line == null then return
		line = line.next
		while line != null do
			var t = v.line_kind(line)
			if t isa LineList or
			   (not line.is_empty and (line.prev_empty and line.leading == 0 and
			   not (t isa LineList))) then
				   var sblock = block.split(line.prev.as(not null))
				   sblock.kind = new BlockListItem(sblock)
			end
			line = line.next
		end
		var sblock = block.split(block.last_line.as(not null))
		sblock.kind = new BlockListItem(sblock)
	end

	# Expand list items as paragraphs if needed.
	private fun expand_paragraphs(block: MDBlock) do
		var outer = block.first_block
		var inner: nullable MDBlock
		var has_paragraph = false
		while outer != null and not has_paragraph do
			if outer.kind isa BlockListItem then
				inner = outer.first_block
				while inner != null and not has_paragraph do
					if inner.kind isa BlockParagraph then
						has_paragraph = true
					end
					inner = inner.next
				end
			end
			outer = outer.next
		end
		if has_paragraph then
			outer = block.first_block
			while outer != null do
				if outer.kind isa BlockListItem then
					inner = outer.first_block
					while inner != null do
						if inner.kind isa BlockNone then
							inner.kind = new BlockParagraph(inner)
						end
						inner = inner.next
					end
				end
				outer = outer.next
			end
		end
	end
end

# A markdown ordered list.
class BlockOrderedList
	super BlockList

	redef fun emit(v) do v.decorator.add_orderedlist(v, self)
end

# A markdown unordred list.
class BlockUnorderedList
	super BlockList

	redef fun emit(v) do v.decorator.add_unorderedlist(v, self)
end

# A markdown paragraph block.
class BlockParagraph
	super Block

	redef fun emit(v) do v.decorator.add_paragraph(v, self)
end

# A markdown ruler.
class BlockRuler
	super Block

	redef fun emit(v) do v.decorator.add_ruler(v, self)
end

# Xml blocks that can be found in markdown markup.
class BlockXML
	super Block

	redef fun emit_lines(v) do
		var line = block.first_line
		while line != null do
			if not line.is_empty then v.add line.value
			v.addn
			line = line.next
		end
	end
end

# A markdown line.
class MDLine

	# Location of `self` in the original input.
	var location: MDLocation

	# Text contained in this line.
	var value: String is writable

	# Is this line empty?
	# Lines containing only spaces are considered empty.
	var is_empty: Bool = true is writable

	# Previous line in `MDBlock` or null if first line.
	var prev: nullable MDLine = null is writable

	# Next line in `MDBlock` or null if last line.
	var next: nullable MDLine = null is writable

	# Is the previous line empty?
	var prev_empty: Bool = false is writable

	# Is the next line empty?
	var next_empty: Bool = false is writable

	# Initialize a new MDLine from its string value
	init do
		self.leading = process_leading
		if leading != value.length then
			self.is_empty = false
			self.trailing = process_trailing
		end
	end

	# Set `value` as an empty String and update `leading`, `trailing` and is_`empty`.
	fun clear do
		value = ""
		leading = 0
		trailing = 0
		is_empty = true
		if prev != null then prev.as(not null).next_empty = true
		if next != null then next.as(not null).prev_empty = true
	end

	# Number or leading spaces on this line.
	var leading: Int = 0 is writable

	# Compute `leading` depending on `value`.
	fun process_leading: Int do
		var count = 0
		var value = self.value
		while count < value.length and value[count] == ' ' do count += 1
		if leading == value.length then clear
		return count
	end

	# Number of trailing spaces on this line.
	var trailing: Int = 0 is writable

	# Compute `trailing` depending on `value`.
	fun process_trailing: Int do
		var count = 0
		var value = self.value
		while value[value.length - count - 1] == ' ' do
			count += 1
		end
		return count
	end

	# Count the amount of `ch` in this line.
	# Return A value > 0 if this line only consists of `ch` end spaces.
	fun count_chars(ch: Char): Int do
		var count = 0
		for c in value do
			if c == ' ' then
				continue
			end
			if c == ch then
				count += 1
				continue
			end
			count = 0
			break
		end
		return count
	end

	# Count the amount of `ch` at the start of this line ignoring spaces.
	fun count_chars_start(ch: Char): Int do
		var count = 0
		for c in value do
			if c == ' ' then
				continue
			end
			if c == ch then
				count += 1
			else
				break
			end
		end
		return count
	end

	# Last XML line if any.
	private var xml_end_line: nullable MDLine = null

	# Does `value` contains valid XML markup?
	private fun check_html: Bool do
		var tags = new Array[String]
		var tmp = new FlatBuffer
		var pos = leading
		if pos + 1 < value.length and value[pos + 1] == '!' then
			if read_xml_comment(self, pos) > 0 then return true
		end
		pos = value.read_xml(tmp, pos, false)
		var tag: String
		if pos > -1 then
			tag = tmp.xml_tag
			if not tag.is_html_block then
				return false
			end
			if tag == "hr" then
				xml_end_line = self
				return true
			end
			tags.add tag
			var line: nullable MDLine = self
			while line != null do
				while pos < line.value.length and line.value[pos] != '<' do
					pos += 1
				end
				if pos >= line.value.length then
					if pos - 2 >= 0 and line.value[pos - 2] == '/' then
						tags.pop
						if tags.is_empty then
							xml_end_line = line
							break
						end
					end
					line = line.next
					pos = 0
				else
					tmp = new FlatBuffer
					var new_pos = line.value.read_xml(tmp, pos, false)
					if new_pos > 0 then
						tag = tmp.xml_tag
						if tag.is_html_block and not tag == "hr" then
							if tmp[1] == '/' then
								if tags.last != tag then
									return false
								end
								tags.pop
							else
								tags.add tag
							end
						end
						if tags.is_empty then
							xml_end_line = line
							break
						end
						pos = new_pos
					else
						pos += 1
					end
				end
			end
			return tags.is_empty
		end
		return false
	end

	# Read a XML comment.
	# Used by `check_html`.
	private fun read_xml_comment(first_line: MDLine, start: Int): Int do
		var line: nullable MDLine = first_line
		if start + 3 < line.as(not null).value.length then
			if line.as(not null).value[2] == '-' and line.as(not null).value[3] == '-' then
				var pos = start + 4
				while line != null do
					while pos < line.value.length and line.value[pos] != '-' do
						pos += 1
					end
					if pos == line.value.length then
						line = line.next
						pos = 0
					else
						if pos + 2 < line.value.length then
							if line.value[pos + 1] == '-' and line.value[pos + 2] == '>' then
								first_line.xml_end_line = line
								return pos + 3
							end
						end
						pos += 1
					end
				end
			end
		end
		return -1
	end

	# Extract the text of `self` without leading and trailing.
	fun text: String do return value.substring(leading, value.length - trailing)
end

# A markdown line.
interface Line

	# Parse the line.
	# See `MarkdownProcessor::recurse`.
	fun process(v: MarkdownProcessor) is abstract
end

# An empty markdown line.
class LineEmpty
	super Line

	redef fun process(v) do
		v.current_line = v.current_line.as(not null).next
	end
end

# A non-specific markdown construction.
# Mainly used as part of another line construct such as paragraphs or lists.
class LineOther
	super Line

	redef fun process(v) do
		var line = v.current_line
		# go to block end
		var was_empty = line.as(not null).prev_empty
		while line != null and not line.is_empty do
			var t = v.line_kind(line)
			if (v.in_list or v.ext_mode) and t isa LineList then
				break
			end
			if v.ext_mode and (t isa LineCode or t isa LineFence) then
				break
			end
			if t isa LineHeadline or t isa LineHeadline1 or t isa LineHeadline2 or
			   t isa LineHR or t isa LineBlockquote or t isa LineXML then
				   break
			end
			line = line.next
		end
		# build block
		var current_block = v.current_block.as(not null)
		if line != null and not line.is_empty then
			var block = current_block.split(line.prev.as(not null))
			if v.in_list and not was_empty then
				block.kind = new BlockNone(block)
			else
				block.kind = new BlockParagraph(block)
			end
			current_block.remove_leading_empty_lines
		else
			var block: MDBlock
			if line != null then
				block = current_block.split(line)
			else
				block = current_block.split(current_block.last_line.as(not null))
			end
			if v.in_list and (line == null or not line.is_empty) and not was_empty then
				block.kind = new BlockNone(block)
			else
				block.kind = new BlockParagraph(block)
			end
			current_block.remove_leading_empty_lines
		end
		v.current_line = current_block.first_line
	end
end

# A line of markdown code.
class LineCode
	super Line

	redef fun process(v) do
		var line = v.current_line
		# lookup block end
		while line != null and (line.is_empty or v.line_kind(line) isa LineCode) do
			line = line.next
		end
		# split at block end line
		var current_block = v.current_block.as(not null)
		var block: MDBlock
		if line != null then
			block = current_block.split(line.prev.as(not null))
		else
			block = current_block.split(current_block.last_line.as(not null))
		end
		block.kind = new BlockCode(block)
		block.remove_surrounding_empty_lines
		v.current_line = current_block.first_line
	end
end

# A line of raw XML.
class LineXML
	super Line

	redef fun process(v) do
		var line = v.current_line
		if line == null then return
		var current_block = v.current_block.as(not null)
		var prev = line.prev
		if prev != null then current_block.split(prev)
		var block = current_block.split(line.xml_end_line.as(not null))
		block.kind = new BlockXML(block)
		current_block.remove_leading_empty_lines
		v.current_line = current_block.first_line
	end
end

# A markdown blockquote line.
class LineBlockquote
	super Line

	redef fun process(v) do
		var line = v.current_line
		var current_block = v.current_block.as(not null)
		# go to bquote end
		while line != null do
			if not line.is_empty and (line.prev_empty and
			   line.leading == 0 and
			   not v.line_kind(line) isa LineBlockquote) then break
			line = line.next
		end
		# build sub block
		var block: MDBlock
		if line != null then
			block = current_block.split(line.prev.as(not null))
		else
			block = current_block.split(current_block.last_line.as(not null))
		end
		var kind = new BlockQuote(block)
		block.kind = kind
		block.remove_surrounding_empty_lines
		kind.remove_block_quote_prefix(block)
		v.current_line = line
		v.recurse(block, false)
		v.current_line = current_block.first_line
	end
end

# A markdown ruler line.
class LineHR
	super Line

	redef fun process(v) do
		var line = v.current_line
		if line == null then return
		var current_block = v.current_block.as(not null)
		if line.prev != null then current_block.split(line.prev.as(not null))
		var block = current_block.split(line)
		block.kind = new BlockRuler(block)
		current_block.remove_leading_empty_lines
		v.current_line = current_block.first_line
	end
end

# A markdown fence code line.
class LineFence
	super Line

	redef fun process(v) do
		# go to fence end
		var line = v.current_line.as(not null).next
		var current_block = v.current_block.as(not null)
		while line != null do
			if v.line_kind(line) isa LineFence then break
			line = line.next
		end
		if line != null then
			line = line.next
		end
		# build fence block
		var block: MDBlock
		if line != null then
			block = current_block.split(line.prev.as(not null))
		else
			block = current_block.split(current_block.last_line.as(not null))
		end
		block.remove_surrounding_empty_lines
		var meta = block.first_line.as(not null).value.meta_from_fence
		block.kind = new BlockFence(block, meta)
		block.first_line.as(not null).clear
		var last = block.last_line
		if last != null and v.line_kind(last) isa LineFence then
			block.last_line.as(not null).clear
		end
		block.remove_surrounding_empty_lines
		v.current_line = line
	end
end

# A markdown headline.
class LineHeadline
	super Line

	redef fun process(v) do
		var line = v.current_line
		if line == null then return
		var current_block = v.current_block.as(not null)
		var lprev = line.prev
		if lprev != null then current_block.split(lprev)
		var block = current_block.split(line)
		var kind = new BlockHeadline(block)
		block.kind = kind
		kind.transform_headline(block)
		current_block.remove_leading_empty_lines
		v.current_line = current_block.first_line
	end
end

# A markdown headline of level 1.
class LineHeadline1
	super LineHeadline

	redef fun process(v) do
		var line = v.current_line
		if line == null then return
		var current_block = v.current_block.as(not null)
		var lprev = line.prev
		if lprev != null then current_block.split(lprev)
		line.next.as(not null).clear
		var block = current_block.split(line)
		var kind = new BlockHeadline(block)
		kind.depth = 1
		kind.transform_headline(block)
		block.kind = kind
		current_block.remove_leading_empty_lines
		v.current_line = current_block.first_line
	end
end

# A markdown headline of level 2.
class LineHeadline2
	super LineHeadline

	redef fun process(v) do
		var line = v.current_line
		if line == null then return
		var current_block = v.current_block.as(not null)
		var lprev = line.prev
		if lprev != null then current_block.split(lprev)
		line.next.as(not null).clear
		var block = current_block.split(line)
		var kind = new BlockHeadline(block)
		kind.depth = 2
		kind.transform_headline(block)
		block.kind = kind
		current_block.remove_leading_empty_lines
		v.current_line = current_block.first_line
	end
end

# A markdown list line.
# Mainly used to factorize code between ordered and unordered lists.
abstract class LineList
	super Line

	redef fun process(v) do
		var line = v.current_line
		# go to list end
		while line != null do
			var t = v.line_kind(line)
			if not line.is_empty and (line.prev_empty and line.leading == 0 and
			   not t isa LineList) then break
			line = line.next
		end
		# build list block
		var current_block = v.current_block.as(not null)
		var list: MDBlock
		if line != null then
			list = current_block.split(line.prev.as(not null))
		else
			list = current_block.split(current_block.last_line.as(not null))
		end
		var kind = block_kind(list)
		list.kind = kind
		list.first_line.as(not null).prev_empty = false
		list.last_line.as(not null).next_empty = false
		list.remove_surrounding_empty_lines
		list.first_line.as(not null).prev_empty = false
		list.last_line.as(not null).next_empty = false
		kind.init_block(v)
		var block = list.first_block
		while block != null do
			block.remove_list_indent(v)
			v.recurse(block, true)
			block = block.next
		end
		kind.expand_paragraphs(list)
		v.current_line = line
	end

	# Create a new block kind based on this line.
	protected fun block_kind(block: MDBlock): BlockList is abstract

	# Extract string value from `MDLine`.
	protected fun extract_value(line: MDLine): String is abstract
end

# An ordered list line.
class LineOList
	super LineList

	redef fun block_kind(block) do return new BlockOrderedList(block)

	redef fun extract_value(line) do
		return line.value.substring_from(line.value.index_of('.') + 2)
	end
end

# An unordered list line.
class LineUList
	super LineList

	redef fun block_kind(block) do return new BlockUnorderedList(block)

	redef fun extract_value(line) do
		return line.value.substring_from(line.leading + 2)
	end
end

# A token represent a character in the markdown input.
# Some tokens have a specific markup behaviour that is handled here.
abstract class Token

	# Location of `self` in the original input.
	var location: nullable MDLocation

	# Position of `self` in input independant from lines.
	var pos: Int

	# Character found at `pos` in the markdown input.
	var char: Char

	# Output that token using `MarkdownEmitter::decorator`.
	fun emit(v: MarkdownProcessor) do v.decorator.add_char(v, char)
end

# A token without a specific meaning.
class TokenNone
	super Token
end

# An emphasis token.
abstract class TokenEm
	super Token

	redef fun emit(v) do
		var tmp = v.push_buffer
		var b = v.emit_text_until(v.current_text.as(not null), pos + 1, self)
		v.pop_buffer
		if b > 0 then
			v.decorator.add_em(v, tmp)
			v.current_pos = b
		else
			v.addc char
		end
	end
end

# An emphasis star token.
class TokenEmStar
	super TokenEm
end

# An emphasis underscore token.
class TokenEmUnderscore
	super TokenEm
end

# A strong token.
abstract class TokenStrong
	super Token

	redef fun emit(v) do
		var tmp = v.push_buffer
		var b = v.emit_text_until(v.current_text.as(not null), pos + 2, self)
		v.pop_buffer
		if b > 0 then
			v.decorator.add_strong(v, tmp)
			v.current_pos = b + 1
		else
			v.addc char
		end
	end
end

# A strong star token.
class TokenStrongStar
	super TokenStrong
end

# A strong underscore token.
class TokenStrongUnderscore
	super TokenStrong
end

# A code token.
# This class is mainly used to factorize work between single and double quoted span codes.
abstract class TokenCode
	super Token

	redef fun emit(v) do
		var current_text = v.current_text.as(not null)
		var a = pos + next_pos + 1
		var b = v.find_token(current_text, a, self)
		if b > 0 then
			v.current_pos = b + next_pos
			while a < b and current_text[a] == ' ' do a += 1
			if a < b then
				while current_text[b - 1] == ' ' do b -= 1
				v.decorator.add_span_code(v, current_text, a, b)
			end
		else
			v.addc char
		end
	end

	private fun next_pos: Int is abstract
end

# A span code token.
class TokenCodeSingle
	super TokenCode

	redef fun next_pos do return 0
end

# A doubled span code token.
class TokenCodeDouble
	super TokenCode

	redef fun next_pos do return 1
end

# A link or image token.
# This class is mainly used to factorize work between images and links.
abstract class TokenLinkOrImage
	super Token

	# Link adress
	var link: nullable Text = null

	# Link text
	var name: nullable Text = null

	# Link title
	var comment: nullable Text = null

	# Is the link construct an abbreviation?
	var is_abbrev = false

	redef fun emit(v) do
		var tmp = new FlatBuffer
		var b = check_link(v, tmp, pos, self)
		if b > 0 then
			emit_hyper(v)
			v.current_pos = b
		else
			v.addc char
		end
	end

	# Emit the hyperlink as link or image.
	private fun emit_hyper(v: MarkdownProcessor) is abstract

	# Check if the link is a valid link.
	private fun check_link(v: MarkdownProcessor, out: FlatBuffer, start: Int, token: Token): Int do
		var md = v.current_text
		if md == null then return -1
		var pos
		if token isa TokenLink then
			pos = start + 1
		else
			pos = start + 2
		end
		var tmp = new FlatBuffer
		pos = md.read_md_link_id(tmp, pos)
		if pos < start then return -1
		name = tmp
		var old_pos = pos
		pos += 1
		pos = md.skip_spaces(pos)
		if pos < start then
			var tid = name.as(not null).write_to_string.to_lower
			if v.link_refs.has_key(tid) then
				var lr = v.link_refs[tid]
				is_abbrev = lr.is_abbrev
				link = lr.link
				comment = lr.title
				pos = old_pos
			else
				return -1
			end
		else if md[pos] == '(' then
			pos += 1
			pos = md.skip_spaces(pos)
			if pos < start then return -1
			tmp = new FlatBuffer
			var use_lt = md[pos] == '<'
			if use_lt then
				pos = md.read_until(tmp, pos + 1, '>')
			else
				pos = md.read_md_link(tmp, pos)
			end
			if pos < start then return -1
			if use_lt then pos += 1
			link = tmp.write_to_string
			if md[pos] == ' ' then
				pos = md.skip_spaces(pos)
				if pos > start and md[pos] == '"' then
					pos += 1
					tmp = new FlatBuffer
					pos = md.read_until(tmp, pos, '"')
					if pos < start then return -1
					comment = tmp.write_to_string
					pos += 1
					pos = md.skip_spaces(pos)
					if pos == -1 then return -1
				end
			end
			if pos < start then return -1
			if md[pos] != ')' then return -1
		else if md[pos] == '[' then
			pos += 1
			tmp = new FlatBuffer
			pos = md.read_raw_until(tmp, pos, ']')
			if pos < start then return -1
			var id
			if tmp.length > 0 then
				id = tmp
			else
				id = name
			end
			var tid = id.as(not null).write_to_string.to_lower
			if v.link_refs.has_key(tid) then
				var lr = v.link_refs[tid]
				link = lr.link
				comment = lr.title
			end
		else
			var tid = name.as(not null).write_to_string.replace("\n", " ").to_lower
			if v.link_refs.has_key(tid) then
				var lr = v.link_refs[tid]
				link = lr.link
				comment = lr.title
				pos = old_pos
			else
				return -1
			end
		end
		if link == null then return -1
		return pos
	end
end

# A markdown link token.
class TokenLink
	super TokenLinkOrImage

	redef fun emit_hyper(v) do
		if is_abbrev and comment != null then
			v.decorator.add_abbr(v, name.as(not null), comment.as(not null))
		else
			v.decorator.add_link(v, link.as(not null), name.as(not null), comment)
		end
	end
end

# A markdown image token.
class TokenImage
	super TokenLinkOrImage

	redef fun emit_hyper(v) do
		v.decorator.add_image(v, link.as(not null), name.as(not null), comment)
	end
end

# A HTML/XML token.
class TokenHTML
	super Token

	redef fun emit(v) do
		var tmp = new FlatBuffer
		var b = check_html(v, tmp, v.current_text.as(not null), v.current_pos)
		if b > 0 then
			v.add tmp
			v.current_pos = b
		else
			v.decorator.escape_char(v, char)
		end
	end

	# Is the HTML valid?
	# Also take care of link and mailto shortcuts.
	private fun check_html(v: MarkdownProcessor, out: FlatBuffer, md: Text, start: Int): Int do
		# check for auto links
		var tmp = new FlatBuffer
		var pos = md.read_until(tmp, start + 1, ':', ' ', '>', '\n')
		if pos != -1 and md[pos] == ':' and tmp.is_link_prefix then
			pos = md.read_until(tmp, pos, '>')
			if pos != -1 then
				var link = tmp.write_to_string
				v.decorator.add_link(v, link, link, null)
				return pos
			end
		end
		# TODO check for mailto
		# check for inline html
		if start + 2 < md.length then
			return md.read_xml(out, start, true)
		end
		return -1
	end
end

# An HTML entity token.
class TokenEntity
	super Token

	redef fun emit(v) do
		var tmp = new FlatBuffer
		var b = check_entity(tmp, v.current_text.as(not null), pos)
		if b > 0 then
			v.add tmp
			v.current_pos = b
		else
			v.decorator.escape_char(v, char)
		end
	end

	# Is the entity valid?
	private fun check_entity(out: FlatBuffer, md: Text, start: Int): Int do
		var pos = md.read_until(out, start, ';')
		if pos < 0 or out.length < 3 then
			return -1
		end
		if out[1] == '#' then
			if out[2] == 'x' or out[2] == 'X' then
				if out.length < 4 then return -1
				for i in [3..out.length[ do
					var c = out[i]
					if (c < '0' or c > '9') and (c < 'a' and c > 'f') and (c < 'A' and c > 'F') then
						return -1
					end
				end
			else
				for i in [2..out.length[ do
					var c = out[i]
					if c < '0' or c > '9' then return -1
				end
			end
			out.add ';'
		else
			for i in [1..out.length[ do
				var c = out[i]
				if not c.is_digit and not c.is_letter then return -1
			end
			out.add ';'
			# TODO check entity is valid
			# if out.is_entity then
				return pos
			# else
				# return -1
			# end
		end
		return pos
	end
end

# A markdown escape token.
class TokenEscape
	super Token

	redef fun emit(v) do
		v.current_pos += 1
		v.addc v.current_text.as(not null)[v.current_pos]
	end
end

# A markdown strike token.
#
# Extended mode only (see `MarkdownProcessor::ext_mode`)
class TokenStrike
	super Token

	redef fun emit(v) do
		var tmp = v.push_buffer
		var b = v.emit_text_until(v.current_text.as(not null), pos + 2, self)
		v.pop_buffer
		if b > 0 then
			v.decorator.add_strike(v, tmp)
			v.current_pos = b + 1
		else
			v.addc char
		end
	end
end

redef class Text

	# Get the position of the next non-space character.
	private fun skip_spaces(start: Int): Int do
		var pos = start
		while pos > -1 and pos < length and (self[pos] == ' ' or self[pos] == '\n') do
			pos += 1
		end
		if pos < length then return pos
		return -1
	end

	# Read `self` until `nend` and append it to the `out` buffer.
	# Escape markdown special chars.
	private fun read_until(out: FlatBuffer, start: Int, nend: Char...): Int do
		var pos = start
		while pos < length do
			var c = self[pos]
			if c == '\\' and pos + 1 < length then
				pos = escape(out, self[pos + 1], pos)
			else
				for n in nend do if c == n then break label
				out.add c
			end
			pos += 1
		end label
		if pos == length then return -1
		return pos
	end

	# Read `self` as raw text until `nend` and append it to the `out` buffer.
	# No escape is made.
	private fun read_raw_until(out: FlatBuffer, start: Int, nend: Char...): Int do
		var pos = start
		while pos < length do
			var c = self[pos]
			var end_reached = false
			for n in nend do
				if c == n then
					end_reached = true
					break
				end
			end
			if end_reached then break
			out.add c
			pos += 1
		end
		if pos == length then return -1
		return pos
	end

	# Read `self` as XML until `to` and append it to the `out` buffer.
	# Escape HTML special chars.
	private fun read_xml_until(out: FlatBuffer, from: Int, to: Char...): Int do
		var pos = from
		var in_str = false
		var str_char: nullable Char = null
		while pos < length do
			var c = self[pos]
			if in_str then
				if c == '\\' then
					out.add c
					pos += 1
					if pos < length then
						out.add c
						pos += 1
					end
					continue
				end
				if c == str_char then
					in_str = false
					out.add c
					pos += 1
					continue
				end
			end
			if c == '"' or c == '\'' then
				in_str = true
				str_char = c
			end
			if not in_str then
				var end_reached = false
				for n in [0..to.length[ do
					if c == to[n] then
						end_reached = true
						break
					end
				end
				if end_reached then break
			end
			out.add c
			pos += 1
		end
		if pos == length then return -1
		return pos
	end

	# Read `self` as XML and append it to the `out` buffer.
	# Safe mode can be activated to limit reading to valid xml.
	private fun read_xml(out: FlatBuffer, start: Int, safe_mode: Bool): Int do
		var pos = 0
		var is_valid = true
		var is_close_tag = false
		if start + 1 >= length then return -1
		if self[start + 1] == '/' then
			is_close_tag = true
			pos = start + 2
		else if self[start + 1] == '!' then
			out.append "<!"
			return start + 1
		else
			is_close_tag = false
			pos = start + 1
		end
		if safe_mode then
			var tmp = new FlatBuffer
			pos = read_xml_until(tmp, pos, ' ', '/', '>')
			if pos == -1 then return -1
			var tag = tmp.write_to_string.trim.to_lower
			if not tag.is_valid_html_tag then
				out.append "&lt;"
				pos = -1
			else if tag.is_html_unsafe then
				is_valid = false
				out.append "&lt;"
				if is_close_tag then out.add '/'
				out.append tmp
			else
				out.append "<"
				if is_close_tag then out.add '/'
				out.append tmp
			end
		else
			out.add '<'
			if is_close_tag then out.add '/'
			pos = read_xml_until(out, pos, ' ', '/', '>')
		end
		if pos == -1 then return -1
		pos = read_xml_until(out, pos, '/', '>')
		if pos == -1 then return -1
		if self[pos] == '/' then
			out.append " /"
			pos = self.read_xml_until(out, pos + 1, '>')
			if pos == -1 then return -1
		end
		if self[pos] == '>' then
			if is_valid then
				out.add '>'
			else
				out.append "&gt;"
			end
			return pos
		end
		return -1
	end

	# Read a markdown link address and append it to the `out` buffer.
	private fun read_md_link(out: FlatBuffer, start: Int): Int do
		var pos = start
		var counter = 1
		while pos < length do
			var c = self[pos]
			if c == '\\' and pos + 1 < length then
				pos = escape(out, self[pos + 1], pos)
			else
				var end_reached = false
				if c == '(' then
					counter += 1
				else if c == ' ' then
					if counter == 1 then end_reached = true
				else if c == ')' then
					counter -= 1
					if counter == 0 then end_reached = true
				end
				if end_reached then break
				out.add c
			end
			pos += 1
		end
		if pos == length then return -1
		return pos
	end

	# Read a markdown link text and append it to the `out` buffer.
	private fun read_md_link_id(out: FlatBuffer, start: Int): Int do
		var pos = start
		var counter = 1
		while pos < length do
			var c = self[pos]
			var end_reached = false
			if c == '[' then
				counter += 1
				out.add c
			else if c == ']' then
				counter -= 1
				if counter == 0 then
					end_reached = true
				else
					out.add c
				end
			else
				out.add c
			end
			if end_reached then break
			pos += 1
		end
		if pos == length then return -1
		return pos
	end

	# Extract the XML tag name from a XML tag.
	private fun xml_tag: String do
		var tpl = new FlatBuffer
		var pos = 1
		if pos < length and self[1] == '/' then pos += 1
		while pos < length - 1 and (self[pos].is_digit or self[pos].is_letter) do
			tpl.add self[pos]
			pos += 1
		end
		return tpl.write_to_string.to_lower
	end

	private fun is_valid_html_tag: Bool do
		if is_empty then return false
		for c in self do
			if not c.is_alpha then return false
		end
		return true
	end

	# Read and escape the markdown contained in `self`.
	private fun escape(out: FlatBuffer, c: Char, pos: Int): Int do
		if c == '\\' or c == '[' or c == ']' or c == '(' or c == ')' or c == '{' or
		   c == '}' or c == '#' or c == '"' or c == '\'' or c == '.' or c == '<' or
		   c == '>' or c == '*' or c == '+' or c == '-' or c == '_' or c == '!' or
		   c == '`' or c == '~' or c == '^' then
			out.add c
			return pos + 1
		end
		out.add '\\'
		return pos
	end

	# Extract string found at end of fence opening.
	private fun meta_from_fence: nullable Text do
		for i in [0..chars.length[ do
			var c = chars[i]
			if c != ' ' and c != '`' and c != '~' then
				return substring_from(i).trim
			end
		end
		return null
	end

	# Is `self` an unsafe HTML element?
	private fun is_html_unsafe: Bool do return html_unsafe_tags.has(self.write_to_string)

	# Is `self` a HRML block element?
	private fun is_html_block: Bool do return html_block_tags.has(self.write_to_string)

	# Is `self` a link prefix?
	private fun is_link_prefix: Bool do return html_link_prefixes.has(self.write_to_string)

	private fun html_unsafe_tags: Array[String] do return once ["applet", "head", "body", "frame", "frameset", "iframe", "script", "object"]

	private fun html_block_tags: Array[String] do return once ["address", "article", "aside", "audio", "blockquote", "canvas", "dd", "div", "dl", "fieldset", "figcaption", "figure", "footer", "form", "h1", "h2", "h3", "h4", "h5", "h6", "header", "hgroup", "hr", "noscript", "ol", "output", "p", "pre", "section", "table", "tfoot", "ul", "video"]

	private fun html_link_prefixes: Array[String] do return once ["http", "https", "ftp", "ftps"]
end

redef class String

	# Parse `self` as markdown and return the HTML representation
	#.
	#    var md = "**Hello World!**"
	#    var html = md.md_to_html
	#    assert html == "<p><strong>Hello World!</strong></p>\n"
	fun md_to_html: Writable do
		var processor = new MarkdownProcessor
		return processor.process(self)
	end
end
