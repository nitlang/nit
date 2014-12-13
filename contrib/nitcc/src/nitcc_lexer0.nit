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

# Ad-hoc hand-written lexer for nitcc
# This avoid to commit (and rely on) a generated lexer
module nitcc_lexer0

# Required for the tokens definitions
import nitcc_parser

# Hand-written lexer of nitcc.
# Used only for the bootstrap of the tool.
class Lexer_nitcc
	# The text to tokenize
	var text: String

	# The iterator on text
	private var iter: Iterator[Char] is noinit

	# The current position
	var pos = 0

	# The tokens currently produced
	private var tokens = new Array[NToken]

	# Tokenize and returns the tokens
	fun lex: Array[NToken]
	do
		iter = text.chars.iterator
		while iter.is_ok do
			trim
			if not iter.is_ok then break
			var c = iter.item
			iter.next
			pos += 1
			if c == '*' then
				tokens.add new Nstar
			else if c == '?' then
				tokens.add new Nques
			else if c == '+' then
				tokens.add new Nplus
			else if c == '-' then
				if iter.item == '>' then
					iter.next
					tokens.add new Narrow
				else
					tokens.add new Nminus
				end
			else if c == '(' then
				tokens.add new Nopar
			else if c == ')' then
				tokens.add new Ncpar
			else if c == '{' then
				tokens.add new Nocur
			else if c == '}' then
				tokens.add new Nccur
			else if c == '|' then
				tokens.add new Npipe
			else if c == ',' then
				tokens.add new Ncomma
			else if c == ':' then
				tokens.add new Ncolo
			else if c == ';' then
				tokens.add new Nsemi
			else if c == '.' then
				tokens.add new Ndot
			else if c == '=' then
				tokens.add new Neq
			else if c == '\'' then
				str
			else if c >= 'a' and c <= 'z' then
				id(c)
			else if c >= 'A' and c <= 'Z' then
				kw(c)
			else if c == '/' and iter.is_ok and iter.item == '/' then
				while iter.is_ok and iter.item != '\n' do iter.next
			else
				error(c)
			end
		end
		tokens.add new NEof
		return tokens
	end

	private fun error(c: Char)
	do
		print "pos {pos}: Lexer error on '{c}'."
		abort
	end

	private fun str
	do
		var b = new FlatBuffer
		b.add('\'')
		while iter.is_ok do
			var c = iter.item
			iter.next
			if c == '\\' then
				if not iter.is_ok then
					error(c)
				end
				b.add(c)
				c = iter.item
				iter.next
			else if c == '\'' then
				b.add(c)
				var token = new Nstr
				token.text = b.to_s
				tokens.add token
				return
			end
			b.add c
		end
		error('\n')
		abort
	end

	private fun id(c: Char)
	do
		var b = new FlatBuffer
		b.add c
		while iter.is_ok do
			c = iter.item
			if c != '_' and (c<'a' or c >'z') and (c<'0' or c>'9') then
				break
			end
			b.add c
			iter.next
		end
		var token = new Nid
		token.text = b.to_s
		tokens.add token
	end

	private fun kw(c: Char)
	do
		var b = new FlatBuffer
		b.add c
		while iter.is_ok do
			c = iter.item
			if c != '_' and (c<'a' or c >'z') and (c<'0' or c>'9') then
				break
			end
			b.add c
			iter.next
		end
		var token = new Nkw
		token.text = b.to_s
		tokens.add token
	end

	private fun trim
	do
		while iter.is_ok and iter.item <= ' ' do
			iter.next
			pos += 1
		end
	end
end
