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
end

redef class ADecIntExpr
	redef fun accept_literal(v)
	do
		self.value = self.n_number.text.to_i
	end
end

redef class AHexIntExpr
	redef fun accept_literal(v)
	do
		self.value = self.n_hex_number.text.substring_from(2).to_hex
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
		self.value = txt.chars[1]
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
