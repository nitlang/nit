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

# Wikilinks handling.
#
# Wikilinks are on the form `[[link]]`.
# They can also contain a custom title with the syntax `[[title|link]]`.
#
# By importing this module, you enable the `MarkdownProcessor` to recognize
# `TokenWikiLink` but nothing will happen until you define a
# `Decorator::add_wikilink` customized to your applciation domain.
module wikilinks

intrude import markdown

# `MarkdownProcessor` is now able to parse wikilinks.
redef class MarkdownProcessor

	redef fun token_at(text, pos) do
		var token = super
		if not token isa TokenLink then return token
		if pos + 1 < text.length then
			var c = text[pos + 1]
			if c == '[' then return new TokenWikiLink(token.location, pos, c)
		end
		return token
	end
end

redef class Decorator

	# Renders a `[[wikilink]]` item.
	fun add_wikilink(v: PROCESSOR, token: TokenWikiLink) do
		if token.name != null then
			v.add "[[{token.name.as(not null).to_s}|{token.link.as(not null).to_s}]]"
		else
			v.add "[[{token.link.as(not null).to_s}]]"
		end
	end
end

# A NitiWiki link token.
#
# Something of the form `[[foo]]`.
#
# Allowed formats:
#
# * `[[Wikilink]]`
# * `[[Wikilink/Bar]]`
# * `[[Wikilink#foo]]`
# * `[[Wikilink/Bar#foo]]`
# * `[[title|Wikilink]]`
# * `[[title|Wikilink/Bar]]`
# * `[[title|Wikilink/Bar#foo]]`
class TokenWikiLink
	super TokenLink

	redef fun emit_hyper(v) do
		v.decorator.add_wikilink(v, self)
	end

	redef fun check_link(v, out, start, token) do
		var md = v.current_text
		if md == null then return -1
		var pos = start + 2
		var tmp = new FlatBuffer
		pos = md.read_md_link_id(tmp, pos)
		if pos < start then return -1
		var name = tmp.write_to_string
		if name.has("|") then
			var parts = name.split_once_on("|")
			self.name = parts.first
			self.link = parts[1]
		else
			self.name = null
			self.link = name
		end
		pos += 1
		pos = md.skip_spaces(pos)
		if pos < start then return -1
		return pos
	end
end
