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

# Wiki internal links handling.
module wiki_links

import wiki_base
intrude import markdown

redef class Nitiwiki
	# Looks up a WikiEntry by its `name`.
	#
	# Rules are:
	# 1. Looks in the current section
	# 2. Looks in the current section children
	# 3. Looks in the current section parent
	# 4. Looks up to wiki root
	#
	# Returns `null` if no article can be found.
	fun lookup_entry_by_name(context: WikiEntry, name: String): nullable WikiEntry do
		var section = context.parent
		var res = section.lookup_entry_by_name(name)
		if res != null then return res
		while section != null do
			if section.name == name then return section
			if section.children.has_key(name) then return section.children[name]
			section = section.parent
		end
		return null
	end

	# Looks up a WikiEntry by its `title`.
	#
	# Rules are:
	# 1. Looks in the current section
	# 2. Looks in the current section children
	# 3. Looks in the current section parent
	# 4. Looks up to wiki root
	#
	# Returns `null` if no article can be found.
	fun lookup_entry_by_title(context: WikiEntry, title: String): nullable WikiEntry do
		var section = context.parent
		var res = section.lookup_entry_by_title(title)
		if res != null then return res
		while section != null do
			if section.title == title then return section
			for child in section.children.values do
				if child.title == title then return child
			end
			section = section.parent
		end
		return null
	end

	# Looks up a WikiEntry by its `path`.
	#
	# Path can be relative from `context` like `context/entry`.
	# Or absolute like `/entry1/entry2`.
	#
	# Returns `null` if no article can be found.
	fun lookup_entry_by_path(context: WikiEntry, path: String): nullable WikiEntry do
		var entry = context.parent
		var parts = path.split_with("/")
		if path.has_prefix("/") then
			entry = root_section
			if parts.is_empty then return root_section.index
			parts.shift
		end
		while not parts.is_empty do
			var name = parts.shift
			if name.is_empty then continue
			if not entry.children.has_key(name) then return null
			entry = entry.children[name]
		end
		return entry
	end
end

redef class WikiEntry

	# Url to `self` once generated.
	fun url: String do return wiki.config.root_url.join_path(breadcrumbs.join("/"))

	redef fun render do
		super
		if not is_dirty and not wiki.force_render then return
	end

	# Search in `self` then `self.children` if an entry has the name `name`.
	fun lookup_entry_by_name(name: String): nullable WikiEntry do
		if children.has_key(name) then return children[name]
		for child in children.values do
			var res = child.lookup_entry_by_name(name)
			if res != null then return res
		end
		return null
	end

	# Search in `self` then `self.children` if an entry has the title `title`.
	fun lookup_entry_by_title(title: String): nullable WikiEntry do
		for child in children.values do
			if child.title == title then return child
		end
		for child in children.values do
			var res = child.lookup_entry_by_title(title)
			if res != null then return res
		end
		return null
	end
end

redef class WikiSection

	# The index page for this section.
	#
	# If no file `index.md` exists for this section,
	# a summary is generated using contained articles.
	var index: WikiArticle is lazy do
		for child in children.values do
			if child isa WikiArticle and child.is_index then return child
		end
		return new WikiSectionIndex(wiki, "index", self)
	end
end

redef class WikiArticle

	# Headlines ids and titles.
	var headlines = new ArrayMap[String, HeadLine]

	# Is `self` an index page?
	#
	# Checks if `self.name == "index"`.
	fun is_index: Bool do return name == "index"

	redef fun url do
		if parent == null then
			return wiki.config.root_url.join_path("{name}.html")
		else
			return parent.url.join_path("{name}.html")
		end
	end

	redef fun render do
		super
		if not is_dirty and not wiki.force_render or not has_source then return
		var md_proc = new NitiwikiMdProcessor(wiki, self)
		content = md_proc.process(md.as(not null))
		headlines.recover_with(md_proc.emitter.decorator.headlines)
	end
end

# A `WikiArticle` that contains the section index tree.
class WikiSectionIndex
	super WikiArticle

	# The section described by `self`.
	var section: WikiSection

	redef fun title do return section.title

	redef fun url do return section.url
end

# A MarkdownProcessor able to parse wiki links.
class NitiwikiMdProcessor
	super MarkdownProcessor

	# Wiki used to resolve links.
	var wiki: Nitiwiki

	# Article parsed by `self`.
	#
	# Used to contextualize links.
	var context: WikiArticle

	init do
		emitter = new MarkdownEmitter(self)
		emitter.decorator = new NitiwikiDecorator(wiki, context)
	end

	redef fun token_at(text, pos) do
		var token = super
		if not token isa TokenLink then return token
		if pos + 1 < text.length then
			var c = text[pos + 1]
			if c == '[' then return new TokenWikiLink(pos, c)
		end
		return token
	end
end

private class NitiwikiDecorator
	super HTMLDecorator

	# Wiki used to resolve links.
	var wiki: Nitiwiki

	# Article used to contextualize links.
	var context: WikiArticle

	fun add_wikilink(v: MarkdownEmitter, link: Text, name, comment: nullable Text) do
		var wiki = v.processor.as(NitiwikiMdProcessor).wiki
		var target: nullable WikiEntry = null
		var anchor: nullable String = null
		if link.has("#") then
			var parts = link.split_with("#")
			link = parts.first
			anchor = parts.subarray(1, parts.length - 1).join("#")
		end
		if link.has("/") then
			target = wiki.lookup_entry_by_path(context, link.to_s)
		else
			target = wiki.lookup_entry_by_name(context, link.to_s)
			if target == null then
				target = wiki.lookup_entry_by_title(context, link.to_s)
			end
		end
		v.add "<a "
		if target != null then
			if name == null then name = target.title
			link = target.url
		else
			wiki.message("Warning: unknown wikilink `{link}` (in {context.src_path.as(not null)})", 0)
			v.add "class=\"broken\" "
		end
		v.add "href=\""
		append_value(v, link)
		if anchor != null then append_value(v, "#{anchor}")
		v.add "\""
		if comment != null and not comment.is_empty then
			v.add " title=\""
			append_value(v, comment)
			v.add "\""
		end
		v.add ">"
		if name == null then name = link
		v.emit_text(name)
		v.add "</a>"
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
		v.decorator.as(NitiwikiDecorator).add_wikilink(v, link.as(not null), name, comment)
	end

	redef fun check_link(v, out, start, token) do
		var md = v.current_text
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
		pos += 1
		return pos
	end
end
