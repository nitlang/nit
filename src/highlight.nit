# This file is part of NIT ( https://nitlanguage.org ).
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

# Highlighting of Nit AST
module highlight

import frontend
import astutil
import console

# Visitor used to produce a HTML tree based on a AST on a `Source`
class AbstractHighlightVisitor
	# The first line to generate, null if start at the first line
	var first_line: nullable Int = null is writable

	# The last line to generate, null if finish at the last line
	var last_line: nullable Int = null is writable

	# When highlighting a node, show its messages (errors, warnings), if any.
	#
	# default: true
	var show_messages = true is writable

	# When highlighting a node, also consider the loose tokens around it.
	#
	# Loose tokens are tokens discarded from the AST but attached before
	# or after some non-loose tokens. See `Token::is_loose`.
	#
	# When this flag is set to `true`, the loose tokens that are before the
	# first token and after the last token are also highlighted.
	#
	# Default: false.
	var include_loose_tokens = false is writable

	# When highlighting a node, the first and the last lines are fully included.
	#
	# If the highlighted node starts (or ends) in the middle of a line,
	# this flags forces the whole line to be highlighted.
	#
	# Default: false
	var include_whole_lines = false is writable

	# Highlight a AST element.
	fun highlight_node(n: ANode)
	do
		n.parentize_tokens

		var f
		var l

		if n isa Token then
			f = n
			l = n
		else
			assert n isa Prod
			f = n.first_token
			if f == null then return
			l = n.last_token
			if l == null then return
		end

		if include_loose_tokens then
			if f.prev_looses.not_empty then f = f.prev_looses.first
			if l.next_looses.not_empty then l = l.next_looses.last
		end

		var line = first_line
		if line != null then
			while f.location.line_start < line do
				f = f.next_token
				if f == null then return
			end
		end

		line = last_line
		if line != null then
			while l.location.line_end > line do
				l = l.prev_token
				if l == null then return
			end
		end

		if include_whole_lines then
			f = f.first_real_token_in_line
			l = l.last_real_token_in_line
		end

		do_highlight(f, l)
	end

	# Highlight a full lexed source file.
	#
	# REQUIRE `source.first_token != null`
	fun highlight_source(source: SourceFile)
	do
		do_highlight(source.first_token.as(not null), null)
	end

	# Low-level highlighting between 2 tokens
	protected fun do_highlight(first_token: Token, last_token: nullable Token) is abstract
end

# Text-based highlighter that use ANSI escape sequence for colors
class AnsiHighlightVisitor
	super AbstractHighlightVisitor

	# The produced highlighting
	var result = new Template

	redef fun do_highlight(f, l)
	do
		var c
		c = f
		while c != null do
			if c != f then result.add(c.blank_before)
			result.add c.ansi_colored

			if c == l then
				c = null
			else
				c = c.next_token
			end
		end
	end
end

redef class Token
	# Return the ANSI colored text
	fun ansi_colored: String do return text
end

redef class TComment
	redef fun ansi_colored do return super.blue
end

redef class TokenKeyword
	redef fun ansi_colored do return super.yellow
end

redef class TClassid
	redef fun ansi_colored do return super.green
end

redef class TokenLiteral
	redef fun ansi_colored do return super.red
end
