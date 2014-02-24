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

# Transform Nit verbatim documentation into HTML
module markdown

import parser
import html
import highlight

# The class that does the convertion from a `ADoc` to HTML
private class Doc2Mdwn
	var toolcontext: ToolContext

	# The lines of the current code block, empty is no current code block
	var curblock = new Array[String]

	fun work(ndoc: ADoc): HTMLTag
	do
		var root = new HTMLTag("div")
		root.add_class("nitdoc")

		# Indent level of the previous line
		var lastindent = 0

		# Indent level of the current line
		var indent = 0

		# The current element (p, li, etc.) if any
		var n: nullable HTMLTag = null

		# The current ul element (if any)
		var ul: nullable HTMLTag = null

		# Local variable to benefit adaptive typing
		for c in ndoc.n_comment do
			# Remove the starting `#`
			var text = c.text.substring_from(1)

			# Count the number of spaces
			lastindent = indent
			indent = 0
			while text.length > indent and text.chars[indent] == ' ' do indent += 1

			# Is codeblock? Then just collect them
			if indent > 4 then
				var part = text.substring_from(4)
				curblock.add(part)
				continue
			end

			# Was a codblock just before the current line ?
			close_codeblock(n or else root)

			# Cleanup the string
			text = text.trim

			# The HTML node of the last line, so we know if we continue the same block
			var old = n

			# No line or loss of indentation: reset
			if text.is_empty or indent < lastindent then
				n = null
				ul = null
				if text.is_empty then continue
			end

			# Special first word: new paragraph
			if text.has_prefix("TODO") or text.has_prefix("FIXME") then
				n = new HTMLTag("p")
				root.add n
				n.add_class("todo")
				ul = null
			else if text.has_prefix("REQUIRE") or text.has_prefix("Require") or text.has_prefix("ENSURE") or text.has_prefix("Ensure") then
				n = new HTMLTag("p")
				root.add n
				n.add_class("contract")
				ul = null
			end

			# List
			if text.has_prefix("* ") or text.has_prefix("- ") then
				text = text.substring_from(1).trim
				if ul == null then
					ul = new HTMLTag("ul")
					root.add ul
				end
				n = new HTMLTag("li")
				ul.add(n)
			end

			# Nothing? then paragraph
			if n == null then
				n = new HTMLTag("p")
				root.add n
				ul = null
			end

			if old == n then
				# Because spaces and `\n` where trimmed
				n.append("\n")
			end

			process_line(n, text)

			# Special case, the fist line is the synopsys and is in its own paragraph
			if c == ndoc.n_comment.first then
				n.add_class("synopsys")
				n = null
			end
		end

		# If the codeblock was the last code sequence
		close_codeblock(n or else root)

		return root
	end

	fun short_work(ndoc: ADoc): HTMLTag
	do
			var text = ndoc.n_comment.first.text.substring_from(1)
			var n = new HTMLTag("span")
			n.add_class("synopsys")
			n.add_class("nitdoc")
			process_line(n, text)
			return n
	end

	fun process_line(n: HTMLTag, text: String)
	do
		# Loosly detect code parts
		var parts = text.split("`")

		# Process each code parts, thus alternate between text and code
		var is_text = true
		for part in parts do
			if is_text then
				# Text part
				n.append part
			else
				# Code part
				var n2 = new HTMLTag("code")
				n.add(n2)
				process_code(n2, part)
			end
			is_text = not is_text
		end
	end

	fun close_codeblock(root: HTMLTag)
	do
		# Is there a codeblock to manage?
		if not curblock.is_empty then
			var n = new HTMLTag("pre")
			root.add(n)
			var btext = curblock.to_s
			process_code(n, btext)
			curblock.clear
		end
	end

	fun process_code(n: HTMLTag, text: String)
	do
		# Try to parse it
		var ast = toolcontext.parse_something(text)

		if ast isa AError then
			n.append text
			# n.attrs["title"] = ast.message
			n.add_class("rawcode")
		else
			var v = new HighlightVisitor
			v.enter_visit(ast)
			n.add(v.html)
			n.add_class("nitcode")
		end
	end
end

redef class ADoc
	# Build a `<div>` element that contains the full documentation in HTML
	fun full_markdown: HTMLTag
	do
		var tc = new ToolContext
		var d2m = new Doc2Mdwn(tc)
		return d2m.work(self)
	end

	# Build a `<span>` element that contains the synopsys in HTML
	fun short_markdown: HTMLTag
	do
		var tc = new ToolContext
		var d2m = new Doc2Mdwn(tc)
		return d2m.short_work(self)
	end
end
