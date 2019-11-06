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

# Markdown AST representation
module markdown_ast

# An abstract node
abstract class MdNode

	# Node location in original markdown
	var location: MdLocation

	# Node parent
	var parent: nullable MdNode = null is writable

	# First child
	var first_child: nullable MdNode = null is writable

	# Last child
	var last_child: nullable MdNode = null is writable

	# Previous node
	var prev: nullable MdNode = null is writable

	# Next node
	var next: nullable MdNode = null is writable

	# Children nodes of `self`
	fun children: Array[MdNode] do
		var nodes = new Array[MdNode]

		var node = first_child
		while node != null do
			nodes.add node
			node = node.next
		end

		return nodes
	end

	# Append a child to `self`
	fun append_child(child: MdNode) do
		child.unlink
		child.parent = self
		if last_child != null then
			last_child.as(not null).next = child
			child.prev = last_child
			last_child = child
		else
			first_child = child
			last_child = child
		end
	end

	# Prepend a child to `self`
	fun prepend_child(child: MdNode) do
		child.unlink
		child.parent = self
		if first_child != null then
			first_child.as(not null).prev = child
			child.next = first_child
			first_child = child
		else
			first_child = child
			last_child = child
		end
	end

	# Unlink `self` from its `parent`
	fun unlink do
		if prev != null then
			prev.as(not null).next = next
		else if parent != null then
			parent.as(not null).first_child = next
		end
		if next != null then
			next.as(not null).prev = prev
		else if parent != null then
			parent.as(not null).last_child = prev
		end
		parent = null
		next = null
		prev = null
	end

	# Insert `sibling` after `self`.
	fun insert_after(sibling: MdNode) do
		sibling.unlink
		sibling.next = next
		if sibling.next != null then
			sibling.next.as(not null).prev = sibling
		end
		sibling.prev = self
		next = sibling
		sibling.parent = parent
		if sibling.next == null then
			sibling.parent.as(not null).last_child = sibling
		end
	end

	# Insert `sibling` before `self`.
	fun insert_before(sibling: MdNode) do
		sibling.unlink
		sibling.prev = prev
		if sibling.prev != null then
			sibling.prev.as(not null).next = sibling
		end
		sibling.next = self
		prev = sibling
		sibling.parent = parent
		if sibling.prev == null then
			sibling.parent.as(not null).first_child = sibling
		end
	end

	# Visit all children or `self`
	fun visit_all(v: MdVisitor) do
		var node = first_child
		while node != null do
			var next = node.next
			v.visit(node)
			node = next
		end
	end

	redef fun to_s do return "{super}\{{to_s_attrs}\}"

	# Returns `self` attributes as a String
	#
	# Mainly used for debug purposes.
	fun to_s_attrs: String do return "loc: {location}"

	# Print `self` AST
	fun debug do
		var v = new MdASTPrinter
		v.enter_visit(self)
	end
end

# A visitor for Markdown AST
interface MdVisitor

	# Start visiting `node`
	fun enter_visit(node: MdNode) do visit(node)

	# Visit `node`
	#
	# Method to define in specific visitor.
	# It should not be called directly but used by `enter_visit`.
	protected fun visit(node: MdNode) is abstract
end

# Print the AST content
class MdASTPrinter
	super MdVisitor

	# Current indent level
	var indent = 0

	# Visit `self` to print the AST content
	fun print_ast(node: MdNode) do
		print "{"  " * indent}{node}"
		indent += 1
		node.visit_all(self)
		indent -= 1
	end

	redef fun visit(node) do print_ast(node)
end

# Blocks

# An abstract markdown block
abstract class MdBlock
	super MdNode

	redef fun parent do return super

	# Can this block contain other blocks?
	var is_container = false

	# Can this block contain `block`?
	fun can_contain(block: MdBlock): Bool do return false

	# Parents of blocks can only be blocks
	redef fun parent=(node) do
		assert parent == null or parent isa MdBlock else
			print "Parent of block must also be block."
		end
		super(node)
	end
end

# A Markdown document
class MdDocument
	super MdBlock

	redef var is_container = true

	redef fun can_contain(block) do return true
end

# A block quote
class MdBlockQuote
	super MdBlock

	redef var is_container = true

	redef fun can_contain(block) do return true
end

# A block of code (indented or fenced)
abstract class MdCodeBlock
	super MdBlock

	# Literal content
	var literal: nullable String = null is writable

	# Fence info / meta
	var info: nullable String = null is writable

	redef fun to_s_attrs do return "{super}, info={info or else "null"}, literal={literal or else "null"}"
end

# A block code that starts with an indent
class MdIndentedCodeBlock
	super MdCodeBlock

	# Does this block use tabs instead of spaces?
	var use_tabs: Bool

	redef fun to_s_attrs do return "{super}, use_tabs={use_tabs}"
end

# A code block that starts with a fence
class MdFencedCodeBlock
	super MdCodeBlock

	# Fence character
	var fence_char: Char

	# Fence length
	var fence_length: Int

	# Fence indentation level
	var fence_indent: Int

	redef fun to_s_attrs do return "{super}, fence_char={fence_char}, fence_length={fence_length}, fence_indent={fence_indent}"
end

# A heading
class MdHeading
	super MdBlock

	# Heading level (from 1 to 6)
	var level: Int

	# Is this heading in the setext format in the original source?
	var is_setext = false is optional

	# Does this heading has an atx trailing in the original source?
	var has_atx_trailing = false is optional

	redef fun to_s_attrs do return "{super}, level={level}"
end

# An html block
class MdHtmlBlock
	super MdBlock

	# Literal content
	var literal: nullable String = null is writable

	redef fun to_s_attrs do return "{super}, literal={literal or else "null"}"
end

# An ordered or unordered list block
abstract class MdListBlock
	super MdBlock

	# Does this list contains line breaks?
	var is_tight: Bool = false is writable

	redef var is_container = true

	redef fun can_contain(block) do return block isa MdListItem

	redef fun to_s_attrs do return "{super}, is_tight={is_tight}"
end

# An ordered or unordered list item block
class MdListItem
	super MdBlock

	redef var is_container = true

	redef fun can_contain(block) do return true
end

# An ordered list block
class MdOrderedList
	super MdListBlock

	# List starting number
	var start_number: Int

	# List number delimiter
	var delimiter: Char

	redef fun to_s_attrs do return "{super}, start_number={start_number}, delimiter={delimiter}"
end

# An unordered list
class MdUnorderedList
	super MdListBlock

	# List bullet marker
	var bullet_marker: Char

	redef fun to_s_attrs do return "{super}, bullet_marker={bullet_marker}"
end

# A paragraph block
class MdParagraph
	super MdBlock

	# Is this paragraph in a list?
	fun is_in_list: Bool do
		var parent = self.parent
		return parent != null and parent.parent isa MdListBlock
	end

	# Is this paragraph in a tight list?
	fun is_in_tight_list: Bool do
		var parent = self.parent
		if parent == null then return false
		var gramps = parent.parent
		return gramps isa MdListBlock and gramps.is_tight
	end
end

# A ruler
class MdThematicBreak
	super MdBlock

	# Thematic break pattern used in markdown source
	var original_pattern: String
end

# Inline nodes

# A line break (soft or hard)
abstract class MdLineBreak
	super MdNode
end

# A hardline break (`\\n` or `  \n`)
class MdHardLineBreak
	super MdLineBreak

	# Does this line break used a backslash in the original source?
	var has_backslash: Bool
end

# A soft line breack (`\r` or `\n`)
class MdSoftLineBreak
	super MdLineBreak
end

# An inline code string
class MdCode
	super MdNode

	# Emphasis delimiter
	var delimiter: String

	# Literal content
	var literal: String is writable

	redef fun to_s_attrs do return "{super}, literal={literal}"
end

# A node that users delimiters in the Markdown form
#
# For example the emphasis: `*bold*`.
abstract class MdDelimited
	super MdNode

	# Emphasis delimiter
	var delimiter: String

	# Opening delimiter
	fun opening_delimiter: String do return delimiter

	# Closing delimiter
	fun closing_delimiter: String do return delimiter

	redef fun to_s_attrs do return "{super}, delimiter={delimiter}"
end

# An emphasis
class MdEmphasis
	super MdDelimited
end

# A strong emphasis token
class MdStrongEmphasis
	super MdDelimited
end

# An inlined html string
class MdHtmlInline
	super MdNode

	# Literal content
	var literal: String is writable

	redef fun to_s_attrs do return "{super}, literal={literal}"
end

# A link or image
abstract class MdLinkOrImage
	super MdNode

	# Link destination
	var destination: String is writable

	# Link title
	var title: nullable String is writable

	# Is the `destination` between pointy brackets `<dest>`
	var has_brackets = false is writable

	redef fun to_s_attrs do return "{super}, destination={destination}, title={title or else "null"}"
end

# An image
class MdImage
	super MdLinkOrImage
end

# A link
class MdLink
	super MdLinkOrImage

	# Is this link an autolink?
	var is_autolink = false is optional, writable
end

# A raw text token
class MdText
	super MdNode

	# Literal content
	var literal: String is writable

	redef fun to_s_attrs do return "{super}, literal={literal}"
end

# MdNode location in the Markdown input
class MdLocation

	# Starting line number (starting from 1).
	var line_start: Int is writable

	# Starting column number (starting from 1).
	var column_start: Int is writable

	# Stopping line number (starting from 1).
	var line_end: Int is writable

	# Stopping column number (starting from 1).
	var column_end: Int is writable

	redef fun to_s do return "{line_start},{column_start}--{line_end},{column_end}"
end
