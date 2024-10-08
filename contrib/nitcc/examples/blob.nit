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

# Example of the hijack of a lexer to inject custom behavior.
# see `blob.sablecc` for the grammar
import blob_test_parser

redef class Lexer_blob

	# Two context, *in blob* (custom), and *not in blob* (normal).
	# The initial state is *in blob*.
	var in_blob = true

	# Refine the `next_token` to hijack the lexer.
	redef fun next_token
	do
		if not in_blob then
			# Normal lexer
			var res = super
			# Watch for tokens that trigger a context change
			if res isa Nendmark then in_blob = true
			return res
		end

		# Custom lexer
		# Manage pos, line and col manually
		# TODO: improve the lexer API

		var pos = pos_start
		var line = line_start
		var col = col_start
		var text = stream
		var len = text.length

		# Need to count three '{' or the end of text
		var cpt = 0
		while pos < len do
			var c = text[pos]
			if c == '{' then
				cpt += 1
				if cpt == 3 then
					# Got them, backtrack them.
					pos -= 3
					col -= 3
					break
				end
			else
				cpt = 0
			end

			# Next char, count lines.
			pos += 1
			col += 1
			if c == '\n' then
				line += 1
				col = 1
			end
		end

		# Create manually the `blob token`
		var token = new Nblob
		var position = new Position(pos_start, pos, line_start, line, col_start, col)
		token.position = position
		token.text = text.substring(pos_start, pos-pos_start+1)

		# Prepare for the next token
		pos_start = pos + 1
		line_start = line
		col_start = col + 1
		in_blob = false

		return token
	end
end
