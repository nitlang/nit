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

# Parser for inline markdown
#
# Used to create the AST representation of inline nodes like emphasis, code, links
# images etc.
module markdown_inline_parsing

import markdown_ast

# Parser for inline content (text, links, emphasis, etc)
class MdInlineParser

	# List of delimiter processors to use
	private var delimiter_processors: Array[MdDelimiterProcessor] is lazy do
		var delimiters = new Array[MdDelimiterProcessor]
		delimiters.add new MdAsteriskDelimiterProcessor
		delimiters.add new MdUnderscoreDelimiterProcessor
		return delimiters
	end

	# Map special characters to their delimiter processor
	private var delimiter_processors_map: Map[Char, MdDelimiterProcessor] is lazy do
		var map = new HashMap[Char, MdDelimiterProcessor]
		for delimiter_processor in delimiter_processors do
			add_delimiter_processor(delimiter_processor, map)
		end
		special_characters.add_all map.keys
		return map
	end

	# Register a delimiter processor
	private fun add_delimiter_processor(delimiter_processor: MdDelimiterProcessor, map: Map[Char, MdDelimiterProcessor]) do
		var opening = delimiter_processor.opening_delimiter
		var closing = delimiter_processor.closing_delimiter
		if opening == closing then
			if map.has_key(opening) then
				var old = map[opening]
				if old.opening_delimiter == old.closing_delimiter then
					var s: MdStaggeredDelimiterProcessor
					if old isa MdStaggeredDelimiterProcessor then
						s = old
					else
						s = new MdStaggeredDelimiterProcessor(opening)
						s.add old
					end
					s.add delimiter_processor
					map[opening] = s
				else
					add_delimiter_processor_for_char(opening, delimiter_processor, map)
				end
			else
				add_delimiter_processor_for_char(opening, delimiter_processor, map)
			end
		else
			add_delimiter_processor_for_char(opening, delimiter_processor, map)
			add_delimiter_processor_for_char(closing, delimiter_processor, map)
		end
	end

	# Register a delimiter processor for a special character
	private fun add_delimiter_processor_for_char(delimiter_char: Char, delimiter_processor: MdDelimiterProcessor, map: Map[Char, MdDelimiterProcessor]) do
		assert not map.has_key(delimiter_char) else
			print "Delimiter processor conflict with delimiter char `{delimiter_char}`"
		end
		map[delimiter_char] = delimiter_processor
	end

	# List of characters that have a special Markdown meaning
	private var special_characters: Array[Char] = ['\n', '`', '[', ']', '\\', '!', '<', '&']

	# Link references by ID, needs to be built up using `parse_reference` before calling `parse`
	private var reference_map = new HashMap[String, MdLink]

	# Current block under parsing
	private var block: MdNode is noinit

	# Current input string
	private var input: String is noinit

	# Current index
	private var index: Int is noinit

	# Current line
	private var line: Int is noinit

	# Current column
	private var column: Int is noinit

	# Current column offset
	private var column_offset: Int is noinit

	# Top delimiter (emphasis, strong emphasis or custom emphasis)
	# Brackets are on a separate stack, different from the algorithm described in the spec.
	private var last_delimiter: nullable MdDelimiter = null

	# Top opening bracket (`[` or `![`)
	private var last_bracket: nullable MdBracket = null

	# Parse `input` as inline and add resulting nodes as children to `block`
	fun parse(input: String, offset: Int, block: MdNode) do
		self.block = block
		self.input = input.trim
		self.index = 0
		self.last_delimiter = null
		self.last_bracket = null
		self.line = block.location.line_start
		self.column_offset = offset
		self.column = 1 + column_offset

		var more_to_parse = parse_inline
		while more_to_parse do
			more_to_parse = parse_inline
		end

		process_delimiters(null)
		merge_child_text_nodes(block)
	end

	# Advance the current index of `count` characters
	private fun advance(count: Int) do
		index += count
		column += count
	end

	# Attempt to parse a link reference
	#
	# Return how many characters were parsed as a reference.
	# Returns 0 if none.
	fun parse_reference(input: String): Int do
		self.input = input
		self.index = 0
		self.column = 0
		var dest
		var title
		var match_chars
		var start_index = index

		# label
		match_chars = parse_link_label
		if match_chars == 0 then return 0
		advance match_chars

		var raw_label = input.substring(0, match_chars)

		# colon
		if peek != ':' then return 0
		advance 1

		# link url
		spnl

		dest = parse_link_destination.first
		if dest == null or dest.is_empty then return 0

		var before_title = index
		var before_column = column
		spnl
		title = parse_link_title
		if title == null then
			# rewind before spaces
			index = before_title
			column = before_column
		end

		var at_line_end = true
		if index != input.length and match(re_line_end) == null then
			if title == null then
				at_line_end = false
			else
				# the potential title we found is not at the line end,
				# but it could still be a legal link reference if we discard the title
				title = null
				# rewind before spaces
				index = before_title
				column = before_column
				# and instead check if the link URL is at the line end
				at_line_end = match(re_line_end) != null
			end
		end

		if not at_line_end then return 0

		var normalized_label = raw_label.normalize_reference
		if normalized_label.is_empty then return 0

		if not reference_map.has_key(normalized_label) then
			var link = new MdLink(new MdLocation(0, 0, 0, 0), dest, title)
			reference_map[normalized_label] = link
		end

		return index - start_index
	end

	# Line end pattern
	private var re_line_end: Regex = "^ *(\n|$)".to_re

	# Append standard text to the current block
	#
	# Read `text` between `begin_index` and `end_index`.
	private fun append_text(text: String, begin_index, end_index: nullable Int): MdText do
		var node: MdText
		if begin_index != null and end_index != null then
			var nb_chars = end_index - begin_index
			var string = text.substring(begin_index, nb_chars)
			node = new MdText(
				new MdLocation(
					line,
					column,
					line,
					column + nb_chars - 1
				), string)
		else
			node = new MdText(
				new MdLocation(
					line,
					column,
					line,
					column + text.length
				), text)
		end
		append_node(node)
		return node
	end

	# Append `node` to the current block
	private fun append_node(node: MdNode) do block.append_child(node)

	# Parse the next inline element in subject, advancing input index
	#
	# On success, add the result to block's children and return true.
	# On failure, return false.
	private fun parse_inline: Bool do
		var res: Bool
		var c = peek
		if c == '\0' then return false
		if c == '\n' then
			res = parse_newline
		else if c == '\\' then
			res = parse_backslash
		else if c == '`' then
			res = parse_backticks
		else if c == '[' then
			res = parse_open_bracket
		else if c == '!' then
			res = parse_bang
		else if c == ']' then
			res = parse_close_bracket
		else if c == '<' then
			res = parse_auto_link or parse_html_inline
		else if c == '&' then
			res = parse_entity
		else
			if delimiter_processors_map.has_key(c) then
				res = parse_delimiters(delimiter_processors_map[c], c)
			else
				res = parse_string
			end
		end

		if not res then
			advance 1
			# When we get here, it's only for a single special character that turned
			# out to not have a special meaning.
			# So we shouldn't have a single surrogate here, hence it should be ok
			# to turn it into a String
			var literal = c.to_s
			append_text(literal)
		end

		return true
	end

	# If `re` matches at current index in the input, advance index and return the match
	# Else return null.
	private fun match(re: Pattern): nullable String do
		if index >= input.length then return null
		var match = input.search_from(re, index)
		if match != null then
			index = match.after
			column = match.after
			return match.to_s
		end
		return null
	end

	# Return the char at the current input index, or `\0`
	private fun peek: Char do
		if index < input.length then
			return input.chars[index]
		end
		return '\0'
	end

	# Return the char at the current input index + 1, or `\0`
	private fun peek_next: Char do
		if index + 1 < input.length then
			return input.chars[index + 1]
		end
		return '\0'
	end

	# Parse zero or more space characters, incuding at most one newline
	private fun spnl: Bool do
		var found_nl = false
		loop
			var c = peek
			if c == ' ' or c == '\t' then
				advance 1
				continue
			else if c == '\n' then
				if found_nl then break
				found_nl = true
				advance 1
				continue
			end
			break
		end
		return true
	end

	# Parse a new line
	#
	# If it was preceded by two spaces, return a hard line break,
	# otherwise a soft line break
	private fun parse_newline: Bool do
		advance 1 # assume we're at a `\n`

		var last_child = block.last_child

		# check previous text for trailing spaces
		# the `has_suffix` is an optimization to avoid an RE match in the common case
		if last_child != null and last_child isa MdText and
		   (last_child.literal.has_suffix(" ")) then
			var text = last_child
			var literal = text.literal
			var match = literal.search(re_final_space)
			var spaces = if match != null then match.length else 0
			if spaces > 0 then
				text.literal = literal.substring(0, literal.length - spaces)
			end
			last_child.location.column_end = last_child.location.column_end - spaces
			if spaces >= 2 then
				append_node(new MdHardLineBreak(new MdLocation(line, column - spaces - 1, line, column - 1), false))
			else
				append_node(new MdSoftLineBreak(new MdLocation(line, column - spaces - 1, line, column -1)))
			end
		else
			append_node(new MdSoftLineBreak(new MdLocation(line, column - 1, line, column - 1)))
		end
		line += 1
		column = 1 + column_offset

		# gobble leading spaces in next line
		while peek == ' ' do
			advance 1
		end
		return true
	end

	# Final white spaces pattern
	private var re_final_space: Regex = " *$".to_re

	# Parse a backslash-escaped special character
	#
	# Add either the escaped characters, a hard line break (if the backslash is followed by
	# a new line), or a literal backslash to the block's children.
	private fun parse_backslash: Bool do
		advance 1
		if peek == '\n' then
			append_node(new MdHardLineBreak(new MdLocation(line, column - 1, line, column), true))
			advance 1
			line += 1
			column = 1 + column_offset
		else if index < input.length and input.substring(index, 1).has(re_escapable) then
		    append_text(input, index, index + 1)
		    advance 1
		else
			append_text("\\")
		end
		return true
	end

	# Escapable characters pattern
	private var p_escapable = "[]!\"#$%&\'()*+,./:;<=>?@\\[\\\\^_`\\\{|\\\}~-]"

	# Escapable characters regex
	private var re_escapable: Regex = "^{p_escapable}".to_re

	# Attempt to parse backticks
	#
	# Adding either a backtick code span or a literal sequence of backticks.
	private fun parse_backticks: Bool do
		var column_before = column
		var ticks = match(re_ticks_here)
		if ticks == null then return false

		var after_open_ticks = index
		var matched = match(re_ticks)
		while matched != null do
			if matched == ticks then
				var content = input.substring(after_open_ticks, index - after_open_ticks - ticks.length)
				content = content.trim
				content = content.replace(re_whitespace, " ")
				var node = new MdCode(new MdLocation(line, column_before, line, column), matched.to_s, content.trim)
				append_node(node)
				column += 1
				return true
			end
			matched = match(re_ticks)
		end
		# If we got here, we didn't match a closing backtick sequence
		index = after_open_ticks
		column = after_open_ticks + 1
		append_text(ticks)
		return true
	end

	# Backticks starting pattern
	private var re_ticks_here: Regex = "^`+".to_re

	# Backticks pattern
	private var re_ticks: Regex = "`+".to_re

	# Attempt to parse delimiters like emphasis, strong emphasis or custom delimiters
	private fun parse_delimiters(delimiter_processor: MdDelimiterProcessor, delimiter_char: Char): Bool do
		var res = scan_delimiters(delimiter_processor, delimiter_char)
		if res == null then return false

		var length = res.count
		var start_index = index
		var start_column = column

		advance length
		var column_before = column
		column = start_column
		var node = append_text(input, start_index, index)
		column = column_before

		# Add entry to stack for this opener
		var last_delimiter = new MdDelimiter(node, delimiter_char, res.can_open, res.can_close, last_delimiter)
		last_delimiter.length = length
		last_delimiter.original_length = length

		var prev = last_delimiter.prev
		if prev != null then
			prev.next = last_delimiter
		end
		self.last_delimiter = last_delimiter
		return true
	end

	# Add open bracket to delimiter stack and add a text node to block's children
	private fun parse_open_bracket: Bool do
		var start_index = index
		advance 1

		var node = append_text("[")

		# Add entry to stack for this opener
		add_bracket(new MdBracket.link(node, start_index, column - 1, last_bracket, last_delimiter))
		return true
	end

	# If next character is `[`, add `!` delimiter to delimiter stack and add a text node to
	# block's children.
	# Otherwise just add a text node.
	private fun parse_bang: Bool do
		var start_index = index
		advance 1

		if peek == '[' then
			advance 1
			var node = append_text("![")

			# Add entry to stack for this opener
			add_bracket(new MdBracket.image(node, start_index + 1, column - 2, last_bracket, last_delimiter))
		else
			append_text("!")
		end
		return true
	end

	# Try match close bracket against an opening delimiter stack
	#
	# Add either a link or image, or a plan `[` character, to block's children.
	# If there is a matching delimiter, remove it from the delimiter stack.
	private fun parse_close_bracket: Bool do
		advance 1
		var start_index = index
		var start_column = column

		# Get previous `[` or `![`
		var opener = last_bracket
		if opener == null then
			# no matching opener, just return a literal
			append_text("]")
			return true
		end

		if not opener.allowed then
			# matching opener but it's not allowed, juste return a literal
			append_text("]")
			remove_last_bracket
			return true
		end

		# check to see if we have a link or image
		var dest: nullable Couple[nullable String, Bool] = null
		var title = null
		var is_link_or_image = false

		# maybe an inline link like `[foo](\uri "title")`
		if peek == '(' then
			advance 1
			spnl
			dest = parse_link_destination
			if dest.first != null then
				spnl
				# title needs a whitespace before
				if input.substring(index - 1, 1).has(re_whitespace) then
					title = parse_link_title
					spnl
				end
				if peek == ')' then
					advance 1
					is_link_or_image = true
				else
					index = start_index
					column = start_column
				end
			end
		end

		# maybe a reference link like `[foo][bar]`, `[foo][]` or `[foo]`
		if not is_link_or_image then
			# see if there's a link label like `[bar]` or `[]`
			var before_label = index
			var label_length = parse_link_label
			advance label_length
			var ref = null
			if label_length > 2 then
				ref = input.substring(before_label, label_length)
			else if not opener.bracket_after then
				# If the second label is empty `[foo][]` or missing `[foo]`, then the first label
				# is the reference.
				# But it can only be a reference when there's no (unescaped) bracket in it.
				# If there is, we don't even need to try to lookup the reference.
				ref = input.substring(opener.index, start_index - opener.index)
			end

			if ref != null then
				var nref = ref.normalize_reference
				if reference_map.has_key(nref) then
					var link = reference_map[nref]
					dest = new Couple[nullable String, Bool](link.destination, false)
					title = link.title
					is_link_or_image = true
				end
			end
		end

		if is_link_or_image then
			# If we got here, open is a potential opener
			var link_or_image: MdLinkOrImage
			if opener.is_image then
				link_or_image = new MdImage(new MdLocation(line, opener.column, line, column - 1), dest.as(not null).first or else "", title)
			else
				link_or_image = new MdLink(new MdLocation(line, opener.column, line, column - 1), dest.as(not null).first or else "", title)
			end
			link_or_image.has_brackets = dest.as(not null).second

			var node = opener.node.next
			while node != null do
				var next = node.next
				link_or_image.append_child(node)
				node = next
			end
			append_node(link_or_image)

			# Process delimiters such as emphasis inside a link/image
			process_delimiters(opener.prev_delimiter)
			merge_child_text_nodes(link_or_image)
			# We don't need the corresponding text node anymore, we turned it into a node
			opener.node.unlink
			remove_last_bracket

			# Links within links are not allowed
			# We found this link, so there can be no other link around it.
			if not opener.is_image then
				var bracket = last_bracket
				while bracket != null do
					if not bracket.is_image then
						# disallow link opener
						bracket.allowed = false
					end
					bracket = bracket.prev
				end
			end
			return true
		end

		if not is_link_or_image then
			if parse_wikilink then return true
		end

		# no link or image
		append_text("]")
		remove_last_bracket
		index = start_index
		column = start_column
		return true
	end

	# Whitespace pattern
	private var re_whitespace: Regex = "\\s+".to_re

	# Add a bracket token on top of the `last_bracket` stack
	private fun add_bracket(bracket: MdBracket) do
		var last_bracket = self.last_bracket
		if last_bracket != null then
			last_bracket.bracket_after = true
		end
		self.last_bracket = bracket
	end

	# Remove the last bracket on the `last_bracket` stack
	private fun remove_last_bracket do
		var last_bracket = self.last_bracket
		if last_bracket == null then return
		self.last_bracket = last_bracket.prev
	end

	# Wikilink placeholder
	#
	# Will be defined in sub module.
	private fun parse_wikilink: Bool do return false

	# Attempt to parse a link destination, returning the string or null if not match
	private fun parse_link_destination: Couple[nullable String, Bool] do
		var buffer = new Buffer

		var c = peek
		var parens = 0

		var has_bracket = c == '<'
		if has_bracket then advance 1

		loop
			c = peek
			if c == '\0' then
				break # end of input
			else if c == ' ' or c == '\t' or c == '\n' or c == '\r' then
				break # no spaces allowed in urls
			else if c == '\\' then
				var next = peek_next
				if escapable.has(next) then
					buffer.add next
					advance 2 # skip over the backslash
					continue
				end
			else if has_bracket and c == '>' then
				advance 1
				break
			else if not has_bracket and c == '(' then
				parens += 1
			else if not has_bracket and c == ')' then
				if parens == 0 then break
				parens -= 1
			else if c == '\0' then
				break
			end
			buffer.add c
			advance 1
		end
		return new Couple[nullable String, Bool](buffer.to_s, has_bracket)
	end

	# Attempt to parse a link title (sans quotes), returning the string or null if no match
	private fun parse_link_title: nullable String do
		var c = peek
		if c != '\'' and c != '"' and c != '(' then
			return null
		end
		var opener = c

		var buffer = new Buffer
		loop
			advance 1
			c = peek
			if c == opener or (opener == '(' and c == ')') then
				advance 1
				break
			else if c == '\\' then
				var next = peek_next
				if escapable.has(next) then
					buffer.add next
					advance 1
					continue
				end
			else if c == '\0' then
				return null
			end
			buffer.add c
		end
		return buffer.to_s
	end

	# Escapable characters
	private var escapable = "[]!\"#$%&\'()*+,./:;<=>?@\\^_`\{|\}~-"

	# Attempt to parse a link label returning number of characters parsed
	private fun parse_link_label: Int do
		var i = index
		while i < input.length do
			var c = input[i]
			if i == index and c != '[' then
				return 0
			else if c == '[' and i != index then
				if input[i - 1] != '\\' or (i - 2 > index and input[i - 2] == '\\') then
					return 0
				end
			else if c == ']' then
				if i > 1001 then return 0
				if input[i - 1] != '\\' or (i - 2 > index and input[i - 2] == '\\') then
					return (i - index) + 1
				end
			end
			i += 1
		end
		return 0
	end

	# Attempt to parse an autolink (URL or email in pointy brackets)
	private fun parse_auto_link: Bool do
		var column_before = column
		var m = match(re_autolink_email)
		if m != null then
			var dest = m.substring(1, m.length - 2)
			var node = new MdLink(new MdLocation(line, column_before, line, column), "mailto:{dest}", null, true)
			node.append_child(new MdText(new MdLocation(line, column_before + 1, line, column - 1), dest))
			column += 1
			append_node(node)
			return true
		end
		m = match(re_autolink_url)
		if m != null then
			var dest = m.substring(1, m.length - 2)
			var node = new MdLink(new MdLocation(line, column_before, line, column), dest, null, true)
			node.append_child(new MdText(new MdLocation(line, column_before + 1, line, column - 1), dest))
			column += 1
			append_node(node)
			return true
		end
		return false
	end

	# Autolink email pattern
	private var re_autolink_email: Regex = "^<([a-zA-Z0-9.!#$%&'*+/=?^_`\{|\}~-]+@[a-zA-Z0-9]([a-zA-Z0-9-]\{0,61\}[a-zA-Z0-9])?(\\.[a-zA-Z0-9]([a-zA-Z0-9-]\{0,61\}[a-zA-Z0-9])?)*)>".to_re

	# Autolink url pattern
	private var re_autolink_url: Regex = "^<[a-zA-Z][a-zA-Z0-9.+-]\{1,31\}:[^<> ]*>".to_re

	# Attempt to parse an inline HTML string
	private fun parse_html_inline: Bool do
		var column_before = column
		var m = match(re_html_tag)
		if m != null then
			var node = new MdHtmlInline(new MdLocation(line, column_before, line, column), m)
			column += 1
			append_node(node)
			return true
		end
		return false
	end

	private var p_tagname = "[A-Za-z][A-Za-z0-9-]*"
	private var p_attribute_name = "[a-zA-Z_:][a-zA-Z0-9:._-]*"
	private var p_uquoted_value = "[^\"'=<>` \t\n]+"
	private var p_squoted_value = "'[^']*'"
	private var p_dquoted_value = "\"[^\"]*\""
	private var p_attribute_value = "({p_uquoted_value}|{p_squoted_value}|{p_dquoted_value})"
	private var p_attribute_value_spec = "(\\s*=\\s*{p_attribute_value})"
	private var p_attribute = "(\\s{p_attribute_name}{p_attribute_value_spec}?)"
	private var p_opentag = "<{p_tagname}{p_attribute}*\\s*/?>"
	private var p_closetag = "</{p_tagname}\\s*[>]"
	private var p_html_comment = "<!---->|<!--(-?[^>-])(-?[^-])*-->"
	private var p_processing_instruction = "[<][?].*?[?][>]"
	private var p_declaration = "<![A-Z]+\\s+[^>]*>"
	private var p_cdata = "<!\\[CDATA\\[.*\\]\\]>"
	private var p_html_tag = "({p_opentag}|{p_closetag}|{p_html_comment}|{p_processing_instruction}|{p_declaration}|{p_cdata})"

	# HTML tag pattern
	private var re_html_tag: Regex do
		var re = "^{p_html_tag}".to_re
		re.ignore_case = true
		return re
	end

	# Attempt to parse an HTML entity
	private fun parse_entity: Bool do
		var m = match(re_entity_here)
		if m != null then
			append_text(m)
			return true
		end
		return false
	end

	# HTML entity pattern
	private var re_entity_here: Regex do
		var re = "^&(#x[a-f0-9]\{1,8\}|#[0-9]\{1,8\}|[a-z][a-z0-9]\{1,31\});".to_re
		re.ignore_case = true
		return re
	end

	# Parse a run of ordinary characters
	#
	# Or a single character with a special meaning in markdown, as a plain string.
	private fun parse_string: Bool do
		var begin = index
		var begin_column = column
		var length = input.length
		while index != length do
			if special_characters.has(input.chars[index]) then
				break
			end
			advance 1
		end
		if begin != index then
			var column_before = column
			column = begin_column
			append_text(input, begin, index)
			column = column_before
			return true
		end
		return false
	end

	# Scan a sequence of characters with code `delimiter_char`
	#
	# Return information about the number of delimiters and whether they are positioned
	# such as they can open and/or close emphasis or strong emphasis.
	private fun scan_delimiters(delimiter_processor: MdDelimiterProcessor, delimiter_char: Char): nullable MdDelimiterData do
		var start_index = index
		var start_column = column

		var delimiter_count = 0
		while peek == delimiter_char do
			delimiter_count += 1
			advance 1
		end

		if delimiter_count < delimiter_processor.min_length then
			index = start_index
			column = start_column
			return null
		end

		var before = "\n"
		if start_index > 0 then
			before = input.substring(start_index - 1, 1)
		end

		var char_after = peek
		var after = "\n"
		if char_after != '\0' then
			after = char_after.to_s
		end

		var before_is_punctuation = before.has(re_punctuation)
		var before_is_whitespace = before.has(re_whitespace_char)
		var after_is_punctuation = after.has(re_punctuation)
		var after_is_whitespace = after.has(re_whitespace_char)

		var left_flanking = not after_is_whitespace and
			(not after_is_punctuation or before_is_whitespace or before_is_punctuation)
		var right_flanking = not before_is_whitespace and
			(not before_is_punctuation or after_is_whitespace or after_is_punctuation)

		var can_open
		var can_close
		if delimiter_char == '_' then
			can_open = left_flanking and (not right_flanking or before_is_punctuation)
			can_close = right_flanking and (not left_flanking or after_is_punctuation)
		else
			can_open = left_flanking and delimiter_char == delimiter_processor.opening_delimiter
			can_close = right_flanking and delimiter_char == delimiter_processor.closing_delimiter
		end

		index = start_index
		column = start_column
		return new MdDelimiterData(delimiter_count, can_open, can_close)
	end

	# Punctuation pattern
	private var re_punctuation: Regex = "^[]!\"#\\$%&'()*+,.:;<=>?@^_`\{|\}~[-]".to_re

	# Whitespace character start pattern
	private var re_whitespace_char: Regex = "^[  \t\r\n]".to_re

	# Process the stack of delimiters
	private fun process_delimiters(stack_bottom: nullable MdDelimiter) do
		var openers_bottom = new HashMap[Char, nullable MdDelimiter]

		# find first closer above stack bottom
		var closer = last_delimiter
		while closer != null and closer.prev != stack_bottom do
			closer = closer.prev
		end
		# move forward, looking for closers, and handling each
		while closer != null do
			var delimiter_char = closer.delimiter_char

			if not closer.can_close then
				closer = closer.next
				continue
			end

			if not delimiter_processors_map.has_key(delimiter_char) then
				closer = closer.next
				continue
			end

			var delimiter_processor = delimiter_processors_map[delimiter_char]
			var opening_delimiter_char = delimiter_processor.opening_delimiter

			# Found delimiter closer. Now look back for first matching opener
			var use_delims = 0
			var opener_found = false
			var potential_opener_found = false
			var opener = closer.prev

			while opener != null and opener != stack_bottom and (not openers_bottom.has_key(delimiter_char) or opener != openers_bottom[delimiter_char]) do

				if opener.can_open and opener.delimiter_char == opening_delimiter_char then
					potential_opener_found = true
					use_delims = delimiter_processor.delimiter_use(opener, closer)
					if use_delims > 0 then
						opener_found = true
						break
					end
				end
				opener = opener.prev
			end

			if not opener_found then
				if not potential_opener_found then
					# Set lower bound for future searches for openers.
					# Only do this when we didn't even have a potential opener
					# (one that matches the character and can open).
					# If an opener was rejected because of the number of delimiters
					# (e.g. because of the "multiple of 3" rule),
					# we want to consider it next time because the number of delimiter
					# can change as we continue processing.
					openers_bottom[delimiter_char] = closer.prev
					if not closer.can_open then
						# We can remove a closer that can't be an opener,
						# once we've seen there's no matching opener.
						remove_delimiters_keep_node(closer)
					end
				end
				closer = closer.next
				continue
			end

			var opener_node = opener.as(not null).node
			var closer_node = closer.node

			# Remove number of used delimieters from stack and inline nodes
			opener.as(not null).length -= use_delims
			closer.length -= use_delims
			opener_node.literal = opener_node.literal.substring(0,
				opener_node.literal.length - use_delims)
			closer_node.literal = closer_node.literal.substring(0,
				closer_node.literal.length - use_delims)

			remove_delimiters_between(opener, closer)
			# The delimieter processor can re-parent the nodes between opener and closer,
			# so make sure they're contiguous already.
			# Exclusive because we want to keep opener/closer themselves.
			merge_text_nodes_between_exclusive(opener_node, closer_node)
			delimiter_processor.process(opener_node, closer_node, use_delims)

			# Node delimieter characters left to process, so we can remove
			# delimieter and the now empty node
			if opener.as(not null).length == 0 then
				remove_delimiters_and_node(opener)
			end

			if closer.length == 0 then
				var next = closer.next
				remove_delimiters_and_node(closer)
				closer = next
			end
		end

		# Remove all delimiters
		while last_delimiter != null and last_delimiter != stack_bottom do
			remove_delimiters_keep_node(last_delimiter)
		end
	end

	# Remove all delimiters between `opener` and `closer`
	private fun remove_delimiters_between(opener, closer: nullable MdDelimiter) do
		if opener == null or closer == null then return

		var delimiter = closer.prev
		while delimiter != null and delimiter != opener do
			var previous_delimiter = delimiter.prev
			remove_delimiters_keep_node(delimiter)
			delimiter = previous_delimiter
		end
	end

	# Remove the delimiter and the corresponding text node
	#
	# For used delimiters, e.g. `*` in `*foo*`.
	private fun remove_delimiters_and_node(delim: nullable MdDelimiter) do
		if delim == null then return

		var node = delim.node
		node.unlink
		remove_delimiter(delim)
	end

	# Remove the delimiter but keep the corresponding node as text
	#
	# For unused delimiters such as `_` in `foo_bar`.
	private fun remove_delimiters_keep_node(delim: nullable MdDelimiter) do
		remove_delimiter(delim)
	end

	# Remove the delimiter `delim`
	private fun remove_delimiter(delim: nullable MdDelimiter) do
		if delim == null then return

		var prev = delim.prev
		if prev != null then
			prev.next = delim.next
		end
		var next = delim.next
		if next == null then
			# top of stack
			last_delimiter = prev
		else
			next.prev = prev
		end
	end

	# Merge all nodes between `from` and `to` excluding `from` and `to`
	private fun merge_text_nodes_between_exclusive(from, to: nullable MdNode) do
		if from == null or to == null then return
		# no node between them
		if from == to or from.next == to then return
		merge_text_nodes_inclusive(from.next, to.prev)
	end

	# Merge all child nodes of `node` into one
	private fun merge_child_text_nodes(node: nullable MdNode) do
		if node == null then return
		# no children or just one child node, no need for merging
		if node.first_child == node.last_child then return
		merge_text_nodes_inclusive(node.first_child, node.last_child)
	end

	# Merge all nodes between `from` and `to` including `from` and `to`
	private fun merge_text_nodes_inclusive(from, to: nullable MdNode) do
		var first = null
		var last = null

		var node = from
		while node != null do
			if node isa MdText then
				var text = node
				if first == null then first = text
				last = text
			else
				merge_if_needed(first, last)
				first = null
				last = null
			end
			if node == to then break
			node = node.next
		end
		merge_if_needed(first, last)
	end

	# Merge all nodes between `first` and `last`
	private fun merge_if_needed(first, last: nullable MdText) do
		if first != null and last != null and first != last then
			var buffer = new Buffer
			buffer.append(first.literal)
			var node = first.next
			var stop = last.next
			while node != null and node != stop do
				buffer.append(node.as(MdText).literal)
				first.location.line_end = node.location.line_end
				first.location.column_end = node.location.column_end
				var unlink = node
				node = node.next
				unlink.unlink
			end
			var literal = buffer.write_to_string
			first.literal = literal
		end
	end
end

# Custom delimiter processor for additional delimiters besides `_` and `*`
interface MdDelimiterProcessor

	# The character that marks the beginning of a delimited node
	#
	# Must not clash with anu built-in special characters.
	fun opening_delimiter: Char is abstract

	# The character that marks the ending of a delimited node
	#
	# Must not clash with anu built-in special characters.
	fun closing_delimiter: Char is abstract

	# Minimum number of delimiters characters that are needed to active this
	#
	# Must be at least one.
	fun min_length: Int is abstract

	# Determine how many (if any) of the delimiter characters should be used
	#
	# This allows implementations to decide how many characters to use based on the
	# properties of the delimiter runs.
	#
	# An implementation can also return 0 when it doesn't want to allow this particular
	# combination of delimiter runs.
	fun delimiter_use(opener, closer: MdDelimiter): Int is abstract

	# Process the matched delimiters
	#
	# For example, by wrapping the nodes between `opener` and `closer` in a new node,
	# or appending a new node after the opener.
	#
	# Note that removal of the delimiter from the delimiter nodes and unlinking
	# them is done by the caller.
	fun process(opener, closer: MdText, delimiter_use: Int) is abstract
end

# A delimiter is one or more of the same delimiter character
#
# Used for paired delimiters like emphasis or strong emphasis.
class MdDelimiter

	# Node containing the delimiter
	var node: MdText

	# Character used as delimiter
	var delimiter_char: Char

	# Can `self` open a delimiter?
	var can_open: Bool

	# Cant `self` close a delimiter?
	var can_close: Bool

	# Previous delimiter found
	var prev: nullable MdDelimiter

	# Next delimiter found
	var next: nullable MdDelimiter

	# The number of characters in this delimiter run that are left for processing
	var length = 1

	# The number of characters originally in this delimiter run
	#
	# At the start of processing, this is the same as `length`.
	var original_length = 1
end

# Opening bracket for links and images
class MdBracket

	# Node containing the bracket
	var node: MdText

	# Index of the bracket in the original string
	var index: Int

	# COlumn of the bracket
	var column: Int

	# Is this bracket opening an image?
	var is_image: Bool

	# Previous bracket
	var prev: nullable MdBracket

	# Previous delimiter
	var prev_delimiter: nullable MdDelimiter

	# Whether this bracket is allowed to form a link/image
	var allowed = true

	# Whether there is an unescaped bracket (opening or closing) anywhere after this bracket
	var bracket_after = false

	# Create a new bracket for a link
	init link(node: MdText, index: Int, column: Int, prev: nullable MdBracket, prev_delimiter: nullable MdDelimiter) do
		init(node, index, column, false, prev, prev_delimiter)
	end

	# Create a new bracket for an image
	init image(node: MdText, index: Int, column: Int, prev: nullable MdBracket, prev_delimiter: nullable MdDelimiter) do
		init(node, index, column, true, prev, prev_delimiter)
	end
end

# Data about a delimiter parsing
private class MdDelimiterData

	# Number of successive delimiters found
	var count: Int

	# Can this delimiter open an inline construct?
	var can_open: Bool

	# Can this delimiter close an inline construct?
	var can_close: Bool
end

# An implementation of MdDelimiterProcessor that dispatches all calls to others
#
# The sub processors called bepends on the length of the delimiter run.
# All child processors must have different minimum lengths.
# A given delimiter run is dispatched to the child with the largest acceptable minimum length.
# If not child is applicable, the one with the largest minimum length is chosen.
class MdStaggeredDelimiterProcessor
	super MdDelimiterProcessor

	# Delimiter character
	var delim: Char

	# Sub processors to apply
	var processors = new Array[MdDelimiterProcessor]

	redef var min_length = 0
	redef fun opening_delimiter do return delim
	redef fun closing_delimiter do return delim

	# Add a new sub delimiter processor
	fun add(dp: MdDelimiterProcessor) do
		var len = dp.min_length
		var i = 0
		while i < processors.length do
			var p = processors[i]
			assert len != p.min_length else
				print "Cannot add two delimiter processor for `{delim}` " +
					"and mininimum length `{len}`"
			end
			if len > p.min_length then
				break
			end
			i += 1
		end
		processors.insert(dp, i)
	end

	# Find the corresponding processor for a length of `len` delimiter characters
	fun find_processor(len: Int): MdDelimiterProcessor do
		for processor in processors do
			if processor.min_length <= len then return processor
		end
		return processors.first
	end

	redef fun delimiter_use(opener, closer) do
		return find_processor(opener.length).delimiter_use(opener, closer)
	end

	redef fun process(opener, closer, delimiter_use) do
		find_processor(delimiter_use).process(opener, closer, delimiter_use)
	end
end

# A processor for emphasis tokens
class MdEmphasisDelimiterProcessor
	super MdDelimiterProcessor

	# Delimiter character
	var delimiter_char: Char

	redef var min_length = 1
	redef fun opening_delimiter do return delimiter_char
	redef fun closing_delimiter do return delimiter_char

	redef fun delimiter_use(opener, closer) do
		# "multiple of 3" rule for internal delimiter runs
		if (opener.can_close or closer.can_open) and
		   ((opener.original_length + closer.original_length) % 3 == 0) then
			return 0
		end
		# calculate actual number of delimiters used from this closer
		if opener.length >= 2 and closer.length >= 2 then
			return 2
		end
		return 1
	end

	redef fun process(opener, closer, delimiter_use) do
		var single_delimiter = opening_delimiter.to_s
		var emphasis: MdNode
		if delimiter_use == 1 then
			emphasis = new MdEmphasis(
				new MdLocation(
					opener.location.line_start,
					opener.location.column_start,
					closer.location.line_end,
					closer.location.column_end),
				single_delimiter)
		else
			emphasis = new MdStrongEmphasis(
				new MdLocation(
					opener.location.line_start,
					opener.location.column_start + opener.literal.length,
					closer.location.line_end,
					closer.location.column_end - closer.literal.length),
				"{single_delimiter}{single_delimiter}")
		end
		var tmp = opener.next
		while tmp != null and tmp != closer do
			var next = tmp.next
			emphasis.append_child(tmp)
			tmp = next
		end
		opener.insert_after(emphasis)
	end
end

# Asterisk delimiters processor
class MdAsteriskDelimiterProcessor
	super MdEmphasisDelimiterProcessor
	noautoinit

	redef var delimiter_char = '*'
end

# Underscore delimters processor
class MdUnderscoreDelimiterProcessor
	super MdEmphasisDelimiterProcessor
	noautoinit

	redef var delimiter_char = '_'
end

# Utils

redef class String

	# Remove escape backslash from string
	fun unescape_string: String do
		if not has(re_escaped) then return self

		var buffer = new Buffer
		var match = search(re_escaped)
		var last_end = 0
		while match != null do
			buffer.append substring(last_end, match.from - last_end)
			buffer.append substring(match.from + 1, 1)
			last_end = match.after
			match = search_from(re_escaped, last_end)
		end
		if last_end < length then
			buffer.append substring(last_end, length - last_end)
		end
		return buffer.to_s
	end

	# Normalize link reference names
	private fun normalize_reference: String do
		var stripped = self.substring(1, length - 2).trim
		var lowercase = stripped.to_lower # TODO utf-8
		return lowercase.replace(re_whitespace, " ")
	end
end

redef class Sys
	private var p_escapable = "[]!\"#$%&\'()*+,./:;<=>?@\\[\\\\^_`\\\{|\\\}~-]"
	private var re_escaped: Regex = "\\\\{p_escapable}".to_re
	private var re_whitespace: Regex = "\\s+".to_re
end
