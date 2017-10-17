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

# Decorators for `markdown` parsing.
module decorators

import markdown

# `Decorator` that outputs markdown.
class MdDecorator
	super Decorator

	redef var headlines = new ArrayMap[String, HeadLine]

	redef fun add_ruler(v, block) do v.add "***\n"

	redef fun add_headline(v, block) do
		# save headline
		var txt = block.block.first_line.as(not null).value
		var id = strip_id(txt)
		var lvl = block.depth
		headlines[id] = new HeadLine(id, txt, lvl)
		v.add "{"#" * lvl} "
		v.emit_in block
		v.addn
	end

	redef fun add_paragraph(v, block) do
		v.emit_in block
		v.addn
	end

	redef fun add_code(v, block) do
		if block isa BlockFence and block.meta != null then
			v.add "~~~{block.meta.as(not null).to_s}"
		else
			v.add "~~~"
		end
		v.addn
		v.emit_in block
		v.add "~~~"
		v.addn
	end

	redef fun add_blockquote(v, block) do
		v.add "> "
		v.emit_in block
		v.addn
	end

	redef fun add_unorderedlist(v, block) do
		in_unorderedlist = true
		v.emit_in block
		in_unorderedlist = false
	end
	private var in_unorderedlist = false

	redef fun add_orderedlist(v, block) do
		in_orderedlist = true
		current_li = 0
		v.emit_in block
		in_orderedlist = false
	end
	private var in_orderedlist = false
	private var current_li = 0

	redef fun add_listitem(v, block) do
		if in_unorderedlist then
			v.add "* "
		else if in_orderedlist then
			current_li += 1
			v.add "{current_li} "
		end
		v.emit_in block
		v.addn
	end

	redef fun add_em(v, text) do
		v.add "*"
		v.add text
		v.add "*"
	end

	redef fun add_strong(v, text) do
		v.add "**"
		v.add text
		v.add "**"
	end

	redef fun add_strike(v, text) do
		v.add "~~"
		v.add text
		v.add "~~"
	end

	redef fun add_image(v, link, name, comment) do
		v.add "!["
		v.add name
		v.add "]("
		append_value(v, link)
		if comment != null and not comment.is_empty then
			v.add " "
			append_value(v, comment)
		end
		v.add ")"
	end

	redef fun add_link(v, link, name, comment) do
		v.add "["
		v.add name
		v.add "]("
		append_value(v, link)
		if comment != null and not comment.is_empty then
			v.add " "
			append_value(v, comment)
		end
		v.add ")"
	end

	redef fun add_abbr(v, name, comment) do
		v.add "<abbr title=\""
		append_value(v, comment)
		v.add "\">"
		v.emit_text(name)
		v.add "</abbr>"
	end

	redef fun add_span_code(v, text, from, to) do
		v.add "`"
		append_code(v, text, from, to)
		v.add "`"
	end

	redef fun add_line_break(v) do
		v.add "\n"
	end

	redef fun append_value(v, text) do for c in text do escape_char(v, c)

	redef fun escape_char(v, c) do v.addc(c)

	redef fun append_code(v, buffer, from, to) do
		for i in [from..to[ do
			v.addc buffer[i]
		end
	end

	redef fun strip_id(txt) do
		# strip id
		var b = new FlatBuffer
		for c in txt do
			if c == ' ' then
				b.add '_'
			else
				if not c.is_letter and
				   not c.is_digit and
				   not allowed_id_chars.has(c) then continue
				b.add c
			end
		end
		var res = b.to_s
		var key = res
		# check for multiple id definitions
		if headlines.has_key(key) then
			var i = 1
			key = "{res}_{i}"
			while headlines.has_key(key) do
				i += 1
				key = "{res}_{i}"
			end
		end
		return key
	end

	private var allowed_id_chars: Array[Char] = ['-', '_', ':', '.']
end

# Decorator for span elements.
#
# InlineDecorator does not decorate things like paragraphs or headers.
class InlineDecorator
	super HTMLDecorator

	redef fun add_paragraph(v, block) do v.emit_in block
	redef fun add_headline(v, block) do v.emit_in block

	redef fun add_code(v, block) do
		v.add "<code>"
		v.emit_in block
		v.add "</code>"
	end
end
