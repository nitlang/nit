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

# HTML wiki rendering
module wiki_html

import wiki_links
import markdown::decorators

redef class Nitiwiki

	# Render HTML output looking for changes in the markdown sources.
	redef fun render do
		super
		if not root_section.is_dirty and not force_render then return
		var out_dir = expand_path(config.root_dir, config.out_dir)
		out_dir.mkdir
		copy_assets
		root_section.add_child make_sitemap
		root_section.render
	end

	# Copy the asset directory to the (public) output directory.
	private fun copy_assets do
		var src = expand_path(config.root_dir, config.assets_dir)
		var out = expand_path(config.root_dir, config.out_dir)
		if need_render(src, expand_path(out, config.assets_dir)) then
			if src.file_exists then sys.system "cp -R -- {src.escape_to_sh} {out.escape_to_sh}"
		end
	end

	# Build the wiki sitemap page.
	private fun make_sitemap: WikiSitemap do
		var sitemap = new WikiSitemap(self, "sitemap")
		sitemap.is_dirty = true
		return sitemap
	end

	# Markdown processor used for inline element such as titles in TOC.
	private var inline_processor: MarkdownProcessor is lazy do
		var proc = new MarkdownProcessor
		proc.decorator = new InlineDecorator
		return proc
	end

	# Inline markdown (remove h1, p, ... elements).
	private fun inline_md(md: Writable): Writable do
		return inline_processor.process(md.write_to_string)
	end
end

redef class WikiEntry
	# Get a `<a>` template link to `self`
	fun tpl_link(context: WikiEntry): Writable do
		return "<a href=\"{href_from(context)}\">{title}</a>"
	end
end

redef class WikiSection

	# Output directory (where to ouput the HTML pages for this section).
	redef fun out_path do
		var parent = self.parent
		if parent == null then
			return wiki.config.out_dir
		else
			return wiki.expand_path(parent.out_path, name)
		end
	end

	redef fun render do
		if not is_dirty and not wiki.force_render then return
		if is_new then
			out_full_path.mkdir
		else
			sys.system "touch -- {out_full_path.escape_to_sh}"
		end
		if has_source then
			wiki.message("Render section {name} -> {out_path}", 1)
			copy_files
		end
		var index = self.index
		if index isa WikiSectionIndex then
			wiki.message("Render auto-index for section {name} -> {out_path}", 1)
			index.is_dirty = true
			add_child index
		end
		# Hack: Force the rendering of `index` first so that trails are collected
		# TODO: Add first-pass analysis to collect global information before doing the rendering
		index.render
		super
	end

	# Copy attached files from `src_path` to `out_path`.
	private fun copy_files do
		assert has_source
		var dir = src_full_path.as(not null).to_s
		for name in dir.files do
			if name == wiki.config_filename then continue
			if name.has_suffix(".md") then continue
			if has_child(name) then continue
			var src = wiki.expand_path(dir, name)
			var out = wiki.expand_path(out_full_path, name)
			if not wiki.need_render(src, out) then continue
			sys.system "cp -R -- {src.escape_to_sh} {out_full_path.escape_to_sh}"
		end
	end

	redef fun tpl_link(context) do return index.tpl_link(context)

	# Render the section hierarchy as a html tree.
	#
	# `limit` is used to specify the max-depth of the tree.
	#
	# The generated tree will be something like this:
	#
	# ~~~html
	# <ul>
	#  <li>section 1</li>
	#  <li>section 2
	#   <ul>
	#    <li>section 2.1</li>
	#    <li>section 2.2</li>
	#   </ul>
	#  </li>
	# </ul>
	# ~~~
	fun tpl_tree(limit: Int): Template do
		return tpl_tree_intern(limit, 1, self)
	end

	# Build the template tree for this section recursively.
	protected fun tpl_tree_intern(limit, count: Int, context: WikiEntry): Template do
		var out = new Template
		var index = index
		out.add "<li>"
		out.add tpl_link(context)
		if (limit < 0 or count < limit) and
		   (children.length > 1 or (children.length == 1)) then
			out.add " <ul>"
			for child in children.values do
				if child == index then continue
				if child isa WikiArticle then
					out.add "<li>"
					out.add child.tpl_link(context)
					out.add "</li>"
				else if child isa WikiSection and not child.is_hidden then
					out.add child.tpl_tree_intern(limit, count + 1, context)
				end
			end
			out.add " </ul>"
		end
		out.add "</li>"
		return out
	end
end

redef class WikiArticle

	redef fun out_path do
		var parent = self.parent
		if parent == null then
			return wiki.expand_path(wiki.config.out_dir, "{name}.html")
		else
			return wiki.expand_path(parent.out_path, "{name}.html")
		end
	end

	redef fun render do
		super
		if not is_dirty and not wiki.force_render then return
		var file = out_full_path
		wiki.message("Render article {name} -> {file}", 1)
		file.dirname.mkdir
		tpl_page.write_to_file file
	end


	# Load a template and resolve page-related macros
	fun load_template(template_file: String): TemplateString do
		var tpl = wiki.load_template(template_file)
		if tpl.has_macro("ROOT_URL") then
			tpl.replace("ROOT_URL", root_href)
		end
		return tpl
	end

	# Replace macros in the template by wiki data.
	private fun tpl_page: TemplateString do
		var tpl = load_template(template_file)
		if tpl.has_macro("TOP_MENU") then
			tpl.replace("TOP_MENU", tpl_menu)
		end
		if tpl.has_macro("HEADER") then
			tpl.replace("HEADER", tpl_header)
		end
		if tpl.has_macro("BODY") then
			tpl.replace("BODY", tpl_article)
		end
		if tpl.has_macro("FOOTER") then
			tpl.replace("FOOTER", tpl_footer)
		end
		if tpl.has_macro("TRAIL") then
			tpl.replace("TRAIL", tpl_trail)
		end
		return tpl
	end

	# Generate the HTML header for this article.
	fun tpl_header: Writable do
		var file = header_file
		if not wiki.has_template(file) then return ""
		return load_template(file)
	end

	# Generate the HTML page for this article.
	fun tpl_article: TplArticle do
		var article = new TplArticle
		article.body = content
		if wiki.config.auto_breadcrumbs then
			article.breadcrumbs = new TplBreadcrumbs(self)
		end
		article.sidebar = tpl_sidebar
		article.sidebar_pos = wiki.config.sidebar
		return article
	end

	# Sidebar for this page.
	var tpl_sidebar: TplSidebar is lazy do
		var res = new TplSidebar
		if wiki.config.auto_summary then
			res.blocks.add tpl_summary
		end
		res.blocks.add_all sidebar.blocks
		return res
	end

	# Generate the HTML summary for this article.
	#
	# Based on `headlines`
	fun tpl_summary: Writable do
		var headlines = self.headlines
		var tpl = new Template
		tpl.add "<ul class=\"summary list-unstyled\">"
		var iter = headlines.iterator
		while iter.is_ok do
			var hl = iter.item
			# parse title as markdown
			var title = wiki.inline_md(hl.title)
			tpl.add "<li><a href=\"#{hl.id}\">{title}</a>"
			iter.next
			if iter.is_ok then
				if iter.item.level > hl.level then
					tpl.add "<ul class=\"list-unstyled\">"
				else if iter.item.level < hl.level then
					tpl.add "</li>"
					tpl.add "</ul>"
				end
			else
				tpl.add "</li>"
			end
		end
		tpl.add "</ul>"
		return tpl
	end

	# Generate the HTML menu for this article.
	fun tpl_menu: Writable do
		var file = menu_file
		if not wiki.has_template(file) then return ""
		var tpl = load_template(file)
		if tpl.has_macro("MENUS") then
			var items = new Template
			for child in wiki.root_section.children.values do
				if child isa WikiArticle and child.is_index then continue
				if child isa WikiSection and child.is_hidden then continue
				items.add "<li"
				if self == child or self.breadcrumbs.has(child) then
					items.add " class=\"active\""
				end
				items.add ">"
				items.add child.tpl_link(self)
				items.add "</li>"
			end
			tpl.replace("MENUS", items)
		end
		return tpl
	end

	# Generate navigation links for the trail of this article, if any.
	#
	# A trail is generated if the article include or is included in a trail.
	# See `wiki.trails` for details.
	fun tpl_trail: Writable do
		if not wiki.trails.has(self) then return ""

		# Get the position of `self` in the trail
		var flat = wiki.trails.to_a
		var pos = flat.index_of(self)
		assert pos >= 0

		var res = new Template
		res.add "<ul class=\"trail\">"
		var parent = wiki.trails.parent(self)
		# Up and prev are disabled on a root
		if parent != null then
			if pos > 0 then
				var target = flat[pos-1]
				res.add "<li>{target.a_from(self, "prev")}</li>"
			end
			res.add "<li>{parent.a_from(self, "up")}</li>"
		end
		if pos < flat.length - 1 then
			var target = flat[pos+1]
			# Only print the next if it is not a root
			if target.parent != null then
				res.add "<li>{target.a_from(self, "next")}</li>"
			end
		end
		res.add "</ul>"

		return res
	end

	# Generate the HTML footer for this article.
	fun tpl_footer: Writable do
		var file = footer_file
		if not wiki.has_template(file) then return ""
		var tpl = load_template(file)
		var time = new Tm.gmtime
		if tpl.has_macro("YEAR") then
			tpl.replace("YEAR", (time.year + 1900).to_s)
		end
		if tpl.has_macro("GEN_TIME") then
			tpl.replace("GEN_TIME", time.to_s)
		end
		if tpl.has_macro("LAST_CHANGES") then
			var url = "{wiki.config.last_changes}{src_path or else ""}"
			tpl.replace("LAST_CHANGES", url)
		end
		if tpl.has_macro("EDIT") then
			var url = "{wiki.config.edit}{src_path or else ""}"
			tpl.replace("EDIT", url)
		end
		return tpl
	end
end

# A `WikiArticle` that contains the sitemap tree.
class WikiSitemap
	super WikiArticle

	redef fun tpl_article do
		var article = new TplArticle.with_title("Sitemap")
		article.body = new TplPageTree(wiki.root_section, -1)
		return article
	end

	redef var is_dirty = false
end

# A `WikiArticle` that contains the section index tree.
redef class WikiSectionIndex

	redef var is_dirty = false

	redef fun tpl_article do
		var article = new TplArticle.with_title(section.title)
		article.body = new TplPageTree(section, -1)
		article.breadcrumbs = new TplBreadcrumbs(self)
		return article
	end
end

# Article HTML output.
class TplArticle
	super Template

	# Article title.
	var title: nullable Writable = null

	# Article HTML body.
	var body: nullable Writable = null

	# Sidebar of this article (if any).
	var sidebar: nullable TplSidebar = null

	# Position of the sidebar.
	#
	# See `WikiConfig::sidebar`.
	var sidebar_pos: String = "left"

	# Breadcrumbs from wiki root to this article.
	var breadcrumbs: nullable TplBreadcrumbs = null

	# Init `self` with a `title`.
	init with_title(title: Writable) do
		self.title = title
	end

	redef fun rendering do
		if sidebar_pos == "left" then render_sidebar
		if sidebar == null then
			add "<div class=\"col-sm-12 content\">"
		else
			add "<div class=\"col-sm-9 content\">"
		end
		if body != null then
			add "<article>"
			if breadcrumbs != null then
				add breadcrumbs.as(not null)
			end
			if title != null then
				add "<h1>"
				add title.as(not null)
				add "</h1>"
			end
			add	body.as(not null)
			add " </article>"
		end
		add "</div>"
		if sidebar_pos == "right" then render_sidebar
	end

	private fun render_sidebar do
		if sidebar == null then return
		add "<div class=\"col-sm-3 sidebar\">"
		add sidebar.as(not null)
		add "</div>"
	end
end

# A collection of HTML blocks displayed on the side of a page.
class TplSidebar
	super Template

	# Blocks are `Stremable` pieces that will be rendered in the sidebar.
	var blocks = new Array[Writable]

	redef fun rendering do
		for block in blocks do
			add "<nav class=\"sideblock\">"
			add block
			add "</nav>"
		end
	end
end

# An HTML breadcrumbs that show the path from a `WikiArticle` to the `Nitiwiki` root.
class TplBreadcrumbs
	super Template

	# Bread crumb article.
	var article: WikiArticle

	redef fun rendering do
		var path = article.breadcrumbs
		if path.is_empty or path.length <= 2 and article.is_index then return
		add "<ol class=\"breadcrumb\">"
		for entry in path do
			if entry == path.last then
				add "<li class=\"active\">"
				add entry.title
				add "</li>"
			else
				if article.parent == entry and article.is_index then continue
				add "<li>"
				add entry.tpl_link(article)
				add "</li>"
			end
		end
		add "</ol>"
	end
end

# An HTML tree that show the section pages structure.
class TplPageTree
	super Template

	# Builds the page tree from `root`.
	var root: WikiSection

	# Limits the tree depth to `max_depth` levels.
	var max_depth: Int

	redef fun rendering do
		add "<ul>"
		add root.tpl_tree(-1)
		add "</ul>"
	end
end
