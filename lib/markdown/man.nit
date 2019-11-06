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

# Simple *groff* decorator restricted for manpages.
module man

import markdown

# `Decorator` that outputs markdown.
class ManDecorator
	super Decorator

	redef var headlines = new ArrayMap[String, HeadLine]

	redef fun add_ruler(v, block) do v.add "***\n"

	redef fun add_headline(v, block) do
		var lvl = block.depth
		if lvl == 1 then
			v.add ".SH "
		else if lvl == 2 then
			v.add ".SS "
		else if lvl >= 3 then
			# We use dictionary (titled paragraph) to simulate a 3rd level (or more)
			v.add ".TP\n"
		end
		v.emit_in block
		v.addn
	end

	redef fun add_paragraph(v, block) do
		if not in_unorderedlist and not in_orderedlist then
			v.addn
			v.emit_in block
			v.addn
		else
			v.emit_in block
		end
	end

	redef fun add_code(v, block) do
		v.add ".RS\n.nf\n\\f[C]\n"
		v.emit_in block
		v.addn
		v.add "\\f[]\n.fi\n.RE\n"
	end

	redef fun add_blockquote(v, block) do
		v.add ".RS\n"
		v.emit_in block
		v.add ".RE\n"
	end

	redef fun add_unorderedlist(v, block) do
		v.add ".RS\n"
		in_unorderedlist = true
		v.emit_in block
		in_unorderedlist = false
		v.add ".RE\n"
	end
	private var in_unorderedlist = false

	redef fun add_orderedlist(v, block) do
		v.add ".RS\n"
		in_orderedlist = true
		current_li = 0
		v.emit_in block
		in_orderedlist = false
		v.add ".RE\n"
	end
	private var in_orderedlist = false
	private var current_li = 0

	redef fun add_listitem(v, block) do
		if in_unorderedlist then
			v.add ".IP \\[bu] 3\n"
		else if in_orderedlist then
			current_li += 1
			v.add ".IP \"{current_li}.\" 3\n"
		end
		v.emit_in block
		v.addn
	end

	redef fun add_em(v, text) do
		v.add "\\f[I]"
		v.add text
		v.add "\\f[]"
	end

	redef fun add_strong(v, text) do
		v.add "\\f[B]"
		v.add text
		v.add "\\f[]"
	end

	redef fun add_strike(v, text) do
		v.add "[STRIKEOUT:"
		v.add text
		v.add "]"
	end

	redef fun add_image(v, link, name, comment) do
		v.add name
		v.add " ("
		append_value(v, link)
		if comment != null and not comment.is_empty then
			v.add " "
			append_value(v, comment)
		end
		v.add ")"
	end

	redef fun add_link(v, link, name, comment) do
		v.add name
		v.add " ("
		append_value(v, link)
		if comment != null and not comment.is_empty then
			v.add " "
			append_value(v, comment)
		end
		v.add ")"
	end

	redef fun add_abbr(v, name, comment) do
		v.add "\">"
		v.emit_text(name)
		v.add " ("
		append_value(v, comment)
		v.add ")"
	end

	redef fun add_span_code(v, text, from, to) do
		v.add "\\f[C]"
		append_code(v, text, from, to)
		v.add "\\f[]"
	end

	redef fun add_line_break(v) do
		v.addn
	end

	redef fun append_value(v, text) do for c in text do escape_char(v, c)

	redef fun add_char(v, c) do
		# Escape - because manpages
		if c == '-' then
			v.addc '\\'
		end
		v.addc(c)
	end

	redef fun escape_char(v, c) do add_char(v, c)

	redef fun append_code(v, buffer, from, to) do
		for i in [from..to[ do
			var c = buffer[i]
			if c == '-' or c == ' ' then
				v.addc '\\'
			end
			v.addc c
		end
	end
end
