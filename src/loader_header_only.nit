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

# Load only the header of the modules: module declaration and imports
#
# The AST of the loaded modules have only what's needed for the importation
# hierarchy and no classes, top-level functions, top-level code, or top-level
# foreign code bodies. This parsing is fast and robust to syntax errors
# in the body of the modules.
module loader_header_only

import loader

redef class Lexer
	# Tokens already read ahead of the parser, to be returned next
	private var ahead = new Array[Token]

	# Location of the first token of the body
	private var header_end: nullable Location = null

	# Normal token stream up to the imports, then return EOF
	#
	# Look ahead for a definition or block opening as a way to detect that
	# we're done with imports. The look ahead allows to skip over blank tokens
	# and keywords before the definition markers like visibility and `redef`.
	redef fun get_token
	do
		var header_end = header_end
		if header_end == null then
			if ahead.not_empty then return ahead.shift

			var t = super
			if t == null then return null
			if not is_body_start(t) then return t

			header_end = t.location
			self.header_end = header_end
		end

		return new EOF.init_tk(header_end)
	end

	# Is `t` the first token of the body? Looking ahead as needed
	private fun is_body_start(t: Token): Bool
	do
		if not t.is_prefix then return t.starts_body

		var n = scan_significant
		ahead.add n
		while n.is_blank or n.is_prefix do
			n = scan_significant
			ahead.add n
		end
		return not n isa TKwimport
	end

	# Scan the next raw token that is not an ignored blank space
	private fun scan_significant: Token
	do
		var t = scan_token
		while t == null do t = scan_token
		return t
	end
end

redef class Token
	private fun is_blank: Bool do return false
	private fun is_prefix: Bool do return false
	private fun starts_body: Bool do return false
end

# Blanks

redef class TEol
	redef fun is_blank do return true
end

redef class TComment
	redef fun is_blank do return true
end

# Prefixes

redef class TKwpublic
	redef fun is_prefix do return true
end

redef class TKwprotected
	redef fun is_prefix do return true
end

redef class TKwprivate
	redef fun is_prefix do return true
end

redef class TKwintrude
	redef fun is_prefix do return true
end

redef class TKwredef
	redef fun is_prefix do return true
end

# Definitions

redef class TKwclass
	redef fun starts_body do return true
end

redef class TKwabstract
	redef fun starts_body do return true
end

redef class TKwinterface
	redef fun starts_body do return true
end

redef class TKwenum
	redef fun starts_body do return true
end

redef class TKwsubset
	redef fun starts_body do return true
end

redef class TKwextern
	redef fun starts_body do return true
end

redef class TKwmeth
	redef fun starts_body do return true
end

redef class TKwinit
	redef fun starts_body do return true
end

redef class TKwtype
	redef fun starts_body do return true
end

redef class TKwin
	redef fun starts_body do return true
end

# Statements opening a block

redef class TKwif
	redef fun starts_body do return true
end

redef class TKwwhile
	redef fun starts_body do return true
end

redef class TKwfor
	redef fun starts_body do return true
end

redef class TKwloop
	redef fun starts_body do return true
end

redef class TKwdo
	redef fun starts_body do return true
end

redef class TKwwith
	redef fun starts_body do return true
end
