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

# Internal algorithm and data structures for the Nit lexer
module lexer_work

intrude import parser_nodes
private import tables

redef class Token
    private var cached_text: nullable String

    redef fun text
    do
        var res = _cached_text
        if res != null then return res
        res = location.text
	_cached_text = res
	return res
    end

    redef fun text=(text)
    do
        _cached_text = text
    end

    fun parser_index: Int is abstract
end

redef class EOF
    init init_tk(loc: Location)
    do
        _cached_text = ""
		_location = loc
    end
end

redef class AError
    var message: String

    init init_error(message: String, loc: Location)
    do
		init_tk(loc)
		self.message = message
    end
end

redef class ALexerError
    var string: String

    init init_lexer_error(message: String, loc: Location, string: String)
    do
		init_error(message, loc)
		self.string = string
    end
end

redef class AParserError
    var token: Token

    init init_parser_error(message: String, loc: Location, token: Token)
    do
		init_error(message, loc)
		self.token = token
    end
end

# The lexer extract NIT tokens from an input stream.
# It is better user with the Parser
class Lexer
	super TablesCapable

	# Last peeked token
	var token: nullable Token = null

	# Lexer current state
	private var state: Int = 0

	# The source file
	var file: SourceFile

	# Current character in the stream
	var stream_pos: Int = 0

	# Current line number in the input stream
	var line: Int = 0

	# Current column in the input stream
	var pos: Int = 0

	# Was the last character a carriage-return?
	var cr: Bool = false

	# Constante state values
	private fun state_initial: Int do return 0 end

	# The last peeked token to chain them
	private var last_token: nullable Token = null

	# Give the next token (but do not consume it)
	fun peek: Token
	do
		var t = _token
		if t != null then return t

		t = get_token
		while t == null do t = get_token

		if isset t._location then
			var l = last_token
			if l != null then
				l.next_token = t
				t.prev_token = l
			else
				file.first_token = t
			end
			last_token = t
		end

		_token = t
		return t
	end

	# Give and consume the next token
	fun next: Token
	do
		var result = peek
		_token = null
		return result
	end

	# Primitive method to return a token, or return null if it is discarded
	# Is used to implement `peek` and `next`
	protected fun get_token: nullable Token
	do
		var dfa_state = 0

		var sp = _stream_pos
		var start_stream_pos = sp
		var start_pos = _pos
		var start_line = _line
		var file = self.file
		var string = file.string
		var string_len = string.length

		var accept_state = -1
		var accept_token = -1
		var accept_length = -1
		var accept_pos = -1
		var accept_line = -1

		var cr = _cr
		var line = _line
		var pos = _pos
		loop
			if sp >= string_len then
				dfa_state = -1
			else
				# Very ugly hack, this is because of the way SableCC generates its tables.
				# Due to the 0xFFFF limit of a Java char, when a big Nit char is read (i.e.
				# code point > 65535), it crashes.
				#
				# Hence, if a char has a code point <= 255 (ISO8859 range), it is left as is.
				# Else, it is replaced by 255.
				# This does not corrupt the lexer and works perfectly on any character.
				#
				# TL;DR: Java fucked up, need retarded solution to cope for retarded decision
				var c = string[sp].code_point
				if c >= 256 then c = 255
				sp += 1

				if c == 10 then
					if cr then
						cr = false
					        file.line_starts[line] = sp
					else
						line = line + 1
						pos = 0
					        file.line_starts[line] = sp
					end
				else if c == 13 then
					line = line + 1
					pos = 0
					cr = true
					file.line_starts[line] = sp
				else
					pos = pos + 1
					cr = false
				end

				loop
					var old_state = dfa_state
					if dfa_state < -1 then
						old_state = -2 - dfa_state
					end

					dfa_state = -1

					var low = 0
					var high = lexer_goto(old_state, 0) - 1

					if high >= 0 then
						while low <= high do
							var middle = (low + high) / 2
							var offset = middle * 3 + 1 # +1 because length is at 0

							if c < lexer_goto(old_state, offset) then
								high = middle - 1
							else if c > lexer_goto(old_state, offset+1) then
								low = middle + 1
							else
								dfa_state = lexer_goto(old_state, offset+2)
								break
							end
						end
					end
					if dfa_state > -2 then break
				end

			end
			_cr = cr
			_line = line
			_pos = pos

			if dfa_state >= 0 then
				var tok = lexer_accept(dfa_state)
				if tok != -1 then
					accept_state = dfa_state
					accept_token = tok
					accept_length = sp - start_stream_pos
					accept_pos = _pos
					accept_line = _line
				end
			else
				if accept_state != -1 then
					_pos = accept_pos
					_line = accept_line
					_stream_pos = start_stream_pos + accept_length
					if accept_token == 0 then
						# Ignored token (whitespaces)
						return null
					end
					var location = new Location(file, start_line + 1, accept_line + 1, start_pos + 1, accept_pos)
					return make_token(accept_token, location)
				else
					_stream_pos = sp
					var location = new Location(file, start_line + 1, start_line + 1, start_pos + 1, start_pos + 1)
					if sp > start_stream_pos then
						var text = string.substring(start_stream_pos, sp-start_stream_pos)
						var token = new ALexerError.init_lexer_error("Syntax Error: unknown token `{text}`.", location, text)
						file.last_token = token
						return token
					else
						var token = new EOF.init_tk(location)
						file.last_token = token
						return token
					end
				end
			end
		end
	end

	# Allocate the right Token object for a given identifier
	protected fun make_token(accept_token: Int, location: Location): Token is abstract
end
