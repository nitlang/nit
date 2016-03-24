# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012 Jean Privat <jean@pryen.org>
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

# Parsing of literal values in the abstract syntax tree.
module literal

import phase

redef class ToolContext
	# Parses literal values in the whole AST and produces errors if needed
	var literal_phase: Phase = new LiteralPhase(self, null)
end

private class LiteralPhase
	super Phase

	redef fun process_nmodule(nmodule) do nmodule.do_literal(toolcontext)
end

redef class AModule
	# Visit the module to compute the real value of the literal-related node of the AST.
	# Warnings and errors are displayed on the toolcontext.
	fun do_literal(toolcontext: ToolContext)
	do
		var v = new LiteralVisitor(toolcontext)
		v.enter_visit(self)
	end
end

private class LiteralVisitor
	super Visitor

	var toolcontext: ToolContext

	redef fun visit(n)
	do
		n.accept_literal(self)
		n.visit_all(self)
	end
end

redef class ANode
	private fun accept_literal(v: LiteralVisitor) do end
end

redef class AExpr
	# Get `self` as a `String`.
	# Return null if not a string.
	fun as_string: nullable String
	do
		if not self isa AStringFormExpr then return null
		return self.value.as(not null)
	end

	# Get `self` as an `Int`.
	# Return null if not an integer.
	fun as_int: nullable Int
	do
		if not self isa AIntegerExpr then return null
		return self.value.as(not null).to_i
	end
end

redef class AIntegerExpr
	# The value of the literal int once computed.
	var value: nullable Numeric

	redef fun accept_literal(v) do
		value = n_integer.text.to_num
		if value == null then
			v.toolcontext.error(hot_location, "Error: invalid literal `{n_integer.text}`")
		end
	end
end

redef class AFloatExpr
	# The value of the literal float once computed.
	var value: nullable Float
	redef fun accept_literal(v)
	do
		self.value = self.n_float.text.to_f
	end
end

# Any kind of literal which supports a prefix or a suffix
class AAugmentedLiteral
	# Returns the text of the token
	private fun text: String is abstract

	# Is the combination of prefixes and suffixes in `self` valid ?
	fun is_valid_augmentation: Bool is abstract

	private fun delimiter_start: Char is abstract

	private fun delimiter_end: Char is abstract

	# Prefix for the entity, "" if no prefix is found
	protected var prefix: String is lazy do return text.substring(0, text.index_of(delimiter_start))

	# Suffix for the entity, "" if no prefix is found
	protected var suffix: String is lazy do return text.substring_from(text.last_index_of(delimiter_end) + 1)

	# Content of the entity, without prefix nor suffix
	protected var content: String is lazy do return text.substring_from(text.index_of(delimiter_start)).substring(0, text.last_index_of(delimiter_end) + 1)
end

redef class ACharExpr
	super AAugmentedLiteral
	# The value of the literal char once computed.
	var value: nullable Char = null

	redef fun delimiter_start do return '\''

	redef fun delimiter_end do return '\''

	# Is the expression returning an ASCII byte value ?
	fun is_ascii: Bool do return prefix == "b"

	# Is the expression returning a Code Point ?
	fun is_code_point: Bool do return prefix == "u"

	redef fun text do return n_char.text

	redef fun is_valid_augmentation do
		if suffix != "" then return false
		if is_ascii then return true
		if is_code_point then return true
		if prefix != "" then return false
		return true
	end

	redef fun accept_literal(v)
	do
		if not is_valid_augmentation then
			v.toolcontext.error(hot_location, "Syntax Error: invalid prefix/suffix combination {prefix}/{suffix}")
			return
		end
		var txt = content.unescape_nit
		if txt.length != 3 then
			v.toolcontext.error(self.hot_location, "Syntax Error: invalid character literal `{txt}`.")
			return
		end
		self.value = txt.chars[1]
		if is_ascii and txt.chars[1].code_point > 127 then v.toolcontext.error(self.hot_location, "Syntax Error: usage of byte prefix on multibyte character.")
	end
end

redef class AStringFormExpr
	# The value of the literal string once computed.
	var value: nullable String
	redef fun accept_literal(v)
	do
		var txt = self.n_string.text
		var behead = 1
		var betail = 1
		if txt.chars[0] == txt.chars[1] and txt.length >= 6 then
			behead = 3
			betail = 3
			if txt.chars[0] == '"' and txt.chars[3] == '\n' then behead = 4 # ignore first \n in """
		end
		self.value = txt.substring(behead, txt.length - behead - betail).unescape_nit
	end
end
