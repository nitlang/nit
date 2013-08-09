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

import parser
import toolcontext
import phase

import modelbuilder #FIXME useless

redef class ToolContext
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

	init(toolcontext: ToolContext)
	do
		self.toolcontext = toolcontext
	end

	redef fun visit(n)
	do
		n.accept_literal(self)
		n.visit_all(self)
	end
end

redef class ANode
	private fun accept_literal(v: LiteralVisitor) do end
end

redef class AIntExpr
	# The value of the literal int once computed.
	var value: nullable Int
	redef fun accept_literal(v)
	do
		self.value = self.n_number.text.to_i
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

redef class ACharExpr
	# The value of the literal char once computed.
	var value: nullable Char
	redef fun accept_literal(v)
	do
		var txt = self.n_char.text.unescape_nit
		if txt.length != 3 then
			v.toolcontext.error(self.hot_location, "Invalid character literal {txt}")
			return
		end
		self.value = txt[1]
	end
end

redef class AStringFormExpr
	# The value of the literal string once computed.
	var value: nullable String
	redef fun accept_literal(v)
	do
		var txt = self.n_string.text
		var skip = 1
		if txt[0] == txt[1] and txt.length >= 6 then skip = 3
		self.value = txt.substring(skip, txt.length-(2*skip)).unescape_nit
	end
end

redef class String
	# Return a string where Nit escape sequences are transformed.
	#
	# Example:
	#     var s = "\\n"
	#     print s.length # -> 2
	#     var u = s.unescape_nit
	#     print s.length # -> 1
	#     print s[0].ascii # -> 10 (the ASCII value of the "new line" character)
	fun unescape_nit: String
	do
		var res = new Buffer.with_capacity(self.length)
		var was_slash = false
		for c in self do
			if not was_slash then
				if c == '\\' then
					was_slash = true
				else
					res.add(c)
				end
				continue
			end
			was_slash = false
			if c == 'n' then
				res.add('\n')
			else if c == 'r' then
				res.add('\r')
			else if c == 't' then
				res.add('\t')
			else if c == '0' then
				res.add('\0')
			else
				res.add(c)
			end
		end
		return res.to_s
	end
end
