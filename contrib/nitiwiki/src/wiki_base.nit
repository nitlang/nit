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

# Base entities of a nitiwiki.
module wiki_base

import template::macro
import ini

# A Nitiwiki instance.
#
# Nitiwiki provide all base services used by `WikiSection` and `WikiArticle`.
# It manages content and renders pages.
#
# Each nitiwiki instance is linked to a config file.
# This file show to `nitiwiki` that a wiki is present in the current directory.
# Without it, nitiwiki will consider the directory as empty.
class Nitiwiki

	# Wiki config object.
	var config: WikiConfig

	# Default config filename.
	var config_filename = "config.ini"

	# Force render on all file even if the source is unmodified.
	var force_render = false is writable

	# Verbosity level.
	var verbose_level = 0 is writable

	# Delete all the output files.
	fun clean do
		var out_dir = expand_path(config.root_dir, config.out_dir)
		if out_dir.file_exists then out_dir.rmdir
	end

	# Synchronize local output with the distant `WikiConfig::rsync_dir`.
	fun sync do
		var root = expand_path(config.root_dir, config.out_dir)
		var rsync_dir = config.rsync_dir
		if rsync_dir == "" then
			message("Error: configure `wiki.rsync_dir` to use rsync.", 0)
			return
		end
		sys.system "rsync -vr --delete -- {root.escape_to_sh}/ {rsync_dir.escape_to_sh}"
	end

	# Pull data from git repository.
	fun fetch do
		sys.system "git pull {config.git_origin.escape_to_sh} {config.git_branch.escape_to_sh}"
	end

	# Analyze wiki files from `dir` to build wiki entries.
	#
	# This method build a hierarchical structure of `WikiSection` and `WikiArticle`
	# based on the markdown source structure.
	fun parse do
		var dir = expand_path(config.root_dir, config.source_dir)
		root_section = new_section(dir)
		var files = list_md_files(dir)
		for file in files do
			new_article(file)
		end
	end

	# Render output.
	fun render do end

	# Show wiki status.
	fun status do
		print "nitiWiki"
		print "name: {config.wiki_name}"
		print "config: {config.ini_file}"
		print ""
		if root_section.is_dirty then
			print "There is modified files:"
			var paths = entries.keys.to_a
			var s = new DefaultComparator
			s.sort(paths)
			for path in paths do
				var entry = entries[path]
				if not entry.is_dirty then continue
				var name = entry.name
				if entry.has_source then name = entry.src_path.as(not null)
				if entry.is_new then
					print " + {name}"
				else
					print " * {name}"
				end
			end
			print ""
			print "Use nitiwiki --render to render modified files"
		else
			print "Wiki is up-to-date"
			print ""
			print "Use nitiwiki --fetch to pull modification from origin"
			print "Use nitiwiki --rsync to synchronize distant output"
		end
	end

	# Display msg if `level <= verbose_level`
	fun message(msg: String, level: Int) do
		if level <= verbose_level then print msg
	end

	# List markdown source files from a directory.
	fun list_md_files(dir: String): Array[String] do
		var files = new Array[String]
		var pipe = new ProcessReader("find", dir, "-name", "*.{config.md_ext}")
		while not pipe.eof do
			var file = pipe.read_line
			if file == "" then break # last line
			var name = file.basename(".{config.md_ext}")
			if name == "header" or name == "footer" or name == "menu" then continue
			files.add file
		end
		pipe.close
		pipe.wait
		if pipe.status != 0 then exit 1
		var s = new DefaultComparator
		s.sort(files)
		return files
	end

	# Does `src` have been modified since `target` creation?
	#
	# Always returns `true` if `--force` is on.
	fun need_render(src, target: String): Bool do
		if force_render then return true
		if not target.file_exists then return true
		return src.file_stat.as(not null).mtime >= target.file_stat.as(not null).mtime
	end

	# Create a new `WikiSection`.
	#
	# `path` is used to determine the place in the wiki hierarchy.
	protected fun new_section(path: String): WikiSection do
		path = path.simplify_path
		if entries.has_key(path) then return entries[path].as(WikiSection)
		var root = expand_path(config.root_dir, config.source_dir)
		var name = path.basename
		var section = new WikiSection(self, name)
		entries[path] = section
		if path == root then return section
		var ppath = path.dirname
		if ppath != path  then
			var parent = new_section(ppath)
			parent.add_child(section)
		end
		section.try_load_config
		return section
	end

	# Create a new `WikiArticle`.
	#
	# `path` is used to determine the ancestor sections.
	protected fun new_article(path: String): WikiArticle do
		if entries.has_key(path) then return entries[path].as(WikiArticle)
		message("Found article `{path}`", 2)
		var article = new WikiArticle.from_source(self, path)
		var section = new_section(path.dirname)
		section.add_child(article)
		entries[path] = article
		return article
	end

	# Wiki entries found in the last `lookup_hierarchy`.
	var entries = new HashMap[String, WikiEntry]

	# The root `WikiSection` of the site found in the last `lookup_hierarchy`.
	var root_section: WikiSection is noinit

	# Does a template named `name` exists for this wiki?
	fun has_template(name: String): Bool do
		return expand_path(config.root_dir, config.templates_dir, name).file_exists
	end

	# Load a template file as a `TemplateString`.
	#
	# REQUIRE: `has_template`
	fun load_template(name: String): TemplateString do
		if not has_template(name) then
			message("Error: can't load template `{name}`", 0)
			exit 1
		end
		var file = expand_path(config.root_dir, config.templates_dir, name)
		var tpl = new TemplateString.from_file(file)
		if tpl.has_macro("TITLE") then
			tpl.replace("TITLE", config.wiki_name)
		end
		if tpl.has_macro("SUBTITLE") then
			tpl.replace("SUBTITLE", config.wiki_desc)
		end
		if tpl.has_macro("LOGO") then
			tpl.replace("LOGO", config.wiki_logo)
		end
		return tpl
	end

	# Does a sideblock named `name` exists for this wiki?
	fun has_sideblock(name: String): Bool do
		name = "{name}.{config.md_ext}"
		return expand_path(config.root_dir, config.sidebar_dir, name).file_exists
	end

	# Load a markdown block with `name` from `WikiConfig::sidebar_dir`.
	private fun load_sideblock(name: String): nullable String do
		if not has_sideblock(name) then
			message("Error: can't load sideblock `{name}`", 0)
			return null
		end
		name = "{name}.{config.md_ext}"
		var path = expand_path(config.root_dir, config.sidebar_dir, name)
		var file = new FileReader.open(path)
		var res = file.read_all
		file.close
		return res
	end

	# Join `parts` as a path and simplify it
	fun expand_path(parts: String...): String do
		var path = ""
		for part in parts do
			path = path.join_path(part)
		end
		return path.simplify_path
	end

	# Transform an id style name into a pretty printed name.
	#
	# Used to translate ids in beautiful page names.
	fun pretty_name(name: String): String do
		name = name.replace("_", " ")
		name = name.capitalized(keep_upper=true)
		return name
	end
end

# A wiki is composed of hierarchical entries.
abstract class WikiEntry

	# `Nitiwiki` this entry belongs to.
	var wiki: Nitiwiki

	# Entry data

	# Entry internal name.
	#
	# Mainly used in urls.
	var name: String

	# Displayed title for `self`.
	#
	# If `self` is the root entry then display the wiki `WikiConfig::wiki_name` instead.
	fun title: String do
		if is_root then return wiki.config.wiki_name
		return wiki.pretty_name(name)
	end

	# Is this section rendered from a source document?
	#
	# Source is an abstract concept at this level.
	# It can represent a directory, a source file,
	# a part of a file, everything needed to
	# extend this base framework.
	fun has_source: Bool do return src_path != null

	# Entry creation time.
	#
	# Returns `-1` if not `has_source`.
	fun create_time: Int do
		if not has_source then return -1
		return src_full_path.as(not null).file_stat.as(not null).ctime
	end

	# Entry last modification time.
	#
	# Returns `-1` if not `has_source`.
	fun last_edit_time: Int do
		if not has_source then return -1
		return src_full_path.as(not null).file_stat.as(not null).mtime
	end

	# Entry list rendering time.
	#
	# Returns `-1` if `is_new`.
	fun last_render_time: Int do
		if is_new then return -1
		return out_full_path.file_stat.as(not null).mtime
	end

	# Entries hierarchy

	# Type of the parent entry.
	type PARENT: WikiEntry

	# Parent entry if any.
	var parent: nullable PARENT = null

	# Does `self` have a parent?
	fun is_root: Bool do return parent == null

	# Children labelled by `name`.
	var children = new HashMap[String, WikiEntry]

	# Does `self` have a child nammed `name`?
	fun has_child(name: String): Bool do return children.keys.has(name)

	# Retrieve the child called `name`.
	fun child(name: String): WikiEntry do return children[name]

	# Add a sub-entry to `self`.
	fun add_child(entry: WikiEntry) do
		entry.parent = self
		children[entry.name] = entry
	end

	# Paths and urls

	# Breadcrumbs from the `Nitiwiki::root_section` to `self`.
	#
	# Result is returned as an array containg ordered entries:
	# `breadcrumbs.first` is the root entry and
	# `breadcrumbs.last == self`
	var breadcrumbs: Array[WikiEntry] is lazy do
		var path = new Array[WikiEntry]
		var entry: nullable WikiEntry = self
		while entry != null and not entry.is_root do
			path.add entry
			entry = entry.parent
		end
		return path.reversed
	end

	# Sidebar relative to this wiki entry.
	var sidebar = new WikiSidebar(self)

	# Relative path from `wiki.config.root_dir` to source if any.
	fun src_path: nullable String is abstract

	# Absolute path to the source if any.
	fun src_full_path: nullable String do
		var src = src_path
		if src == null then return null
		return wiki.config.root_dir.join_path(src)
	end

	# Relative path from `wiki.config.root_dir` to rendered output.
	#
	# Like `src_path`, this method can represent a
	# directory or a file.
	fun out_path: String is abstract

	# Absolute path to the output.
	fun out_full_path: String do return wiki.config.root_dir.join_path(out_path)

	# Rendering

	# Does `self` have already been rendered?
	fun is_new: Bool do return not out_full_path.file_exists

	# Does `self` rendered output is outdated?
	#
	# Returns `true` if `is_new` then check in children.
	fun is_dirty: Bool do
		if is_new then return true
		if has_source then
			if last_edit_time >= last_render_time then return true
		end
		for child in children.values do
			if child.is_dirty then return true
		end
		return false
	end

	# Render `self` and `children` is needed.
	fun render do for child in children.values do child.render

	# Templating

	# Template file for `self`.
	#
	# Each entity can use a custom template.
	# By default the template is inherited from the parent.
	#
	# If the root does not have a custom template,
	# then returns the main wiki template file.
	fun template_file: String do
		if is_root then return wiki.config.template_file
		return parent.as(not null).template_file
	end

	# Header template file for `self`.
	#
	# Behave like `template_file`.
	fun header_file: String do
		if is_root then return wiki.config.header_file
		return parent.as(not null).header_file
	end

	# Footer template file for `self`.
	#
	# Behave like `template_file`.
	fun footer_file: String do
		if is_root then return wiki.config.footer_file
		return parent.as(not null).footer_file
	end

	# Menu template file for `self`.
	#
	# Behave like `template_file`.
	fun menu_file: String do
		if is_root then return wiki.config.menu_file
		return parent.as(not null).menu_file
	end

	# Display the entry `name`.
	redef fun to_s do return name
end

# Each WikiSection is related to a source directory.
#
# A section can contain other sub-sections or pages.
class WikiSection
	super WikiEntry

	# A section can only have another section as parent.
	redef type PARENT: WikiSection

	redef fun title do
		if has_config then
			var title = config.as(not null).title
			if title != null then return title
		end
		return super
	end

	# Is this section hidden?
	#
	# Hidden section are rendered but not linked in menus.
	fun is_hidden: Bool do
		if has_config then return config.as(not null).is_hidden
		return false
	end

	# Source directory.
	redef fun src_path: String do
		if parent == null then
			return wiki.config.source_dir
		else
			return wiki.expand_path(parent.as(not null).src_path, name)
		end
	end

	# Config

	# Custom configuration file for this section.
	var config: nullable SectionConfig = null

	# Does this section have its own config file?
	fun has_config: Bool do return config != null

	# Try to load the config file for this section.
	private fun try_load_config do
		var cfile = wiki.expand_path(wiki.config.root_dir, src_path, wiki.config_filename)
		if not cfile.file_exists then return
		wiki.message("Custom config for section {name}", 2)
		config = new SectionConfig(cfile)
	end

	# Templating

	# Also check custom config.
	redef fun template_file do
		if has_config then
			var tpl = config.as(not null).template_file
			if tpl != null then return tpl
		end
		if is_root then return wiki.config.template_file
		return parent.as(not null).template_file
	end

	# Also check custom config.
	redef fun header_file do
		if has_config then
			var tpl = config.as(not null).header_file
			if tpl != null then return tpl
		end
		if is_root then return wiki.config.header_file
		return parent.as(not null).header_file
	end

	# Also check custom config.
	redef fun footer_file do
		if has_config then
			var tpl = config.as(not null).footer_file
			if tpl != null then return tpl
		end
		if is_root then return wiki.config.footer_file
		return parent.as(not null).footer_file
	end

	# Also check custom config.
	redef fun menu_file do
		if has_config then
			var tpl = config.as(not null).menu_file
			if tpl != null then return tpl
		end
		if is_root then return wiki.config.menu_file
		return parent.as(not null).menu_file
	end
end

# Each WikiArticle is related to a HTML file.
#
# Article can be created from scratch using this API or
# automatically from a markdown source file (see: `from_source`).
class WikiArticle
	super WikiEntry

	# Articles can only have `WikiSection` as parents.
	redef type PARENT: WikiSection

	redef fun title do
		var parent = self.parent
		if name == "index" and parent != null then return parent.title
		return super
	end

	# Page content.
	#
	# What you want to be displayed in the page.
	var content: nullable Writable = null is writable

	# Create a new article using a markdown source file.
	init from_source(wiki: Nitiwiki, md_file: String) do
		src_full_path = md_file
		init(wiki, md_file.basename(".{wiki.config.md_ext}"))
		content = md
	end

	redef var src_full_path = null

	redef fun src_path do
		var src_full_path = self.src_full_path
		if src_full_path == null then return null
		var res = wiki.config.root_dir.relpath(src_full_path)
		return res
	end

	# The page markdown source content.
	#
	# Extract the markdown text from `source_file`.
	#
	# REQUIRE: `has_source`.
	var md: nullable String is lazy do
		if not has_source then return null
		var file = new FileReader.open(src_full_path.as(not null))
		var md = file.read_all
		file.close
		return md
	end

	# Returns true if has source and
	# `last_edit_date` > 'last_render_date'.
	redef fun is_dirty do
		if super then return true
		if has_source then
			return wiki.need_render(src_full_path.as(not null), out_full_path)
		end
		return false
	end

	redef fun to_s do return "{name} ({parent or else "null"})"
end

# The sidebar is displayed in front of the main panel of a `WikiEntry`.
class WikiSidebar

	# Wiki used to parse sidebar blocks.
	var wiki: Nitiwiki is lazy do return entry.wiki

	# WikiEntry this panel is related to.
	var entry: WikiEntry

	# Blocks are ieces of markdown that will be rendered in the sidebar.
	var blocks: Array[Text] is lazy do
		var res = new Array[Text]
		# TODO get blocks from the entry for more customization
		for name in entry.wiki.config.sidebar_blocks do
			var block = wiki.load_sideblock(name)
			if block == null then continue
			res.add block
		end
		return res
	end
end

# Wiki configuration class.
#
# This class provides services that ensure static typing when accessing the `config.ini` file.
class WikiConfig
	super IniFile
	autoinit ini_file

	# Path to this file
	var ini_file: String

	init do load_file(ini_file)

	# Returns the config value at `key` or return `default` if no key was found.
	protected fun value_or_default(key: String, default: String): String do
		return self[key] or else default
	end

	# Site name displayed.
	#
	# The title is used as home title and in headers.
	#
	# * key: `wiki.name`
	# * default: `MyWiki`
	var wiki_name: String is lazy do return value_or_default("wiki.name", "MyWiki")

	# Site description.
	#
	# Displayed in header.
	#
	# * key: `wiki.desc`
	# * default: ``
	var wiki_desc: String is lazy do return value_or_default("wiki.desc", "")

	# Site logo url.
	#
	# Url of the image to be displayed in header.
	#
	# * key: `wiki.logo`
	# * default: ``
	var wiki_logo: String is lazy do return value_or_default("wiki.logo", "")

	# Markdown extension recognized by this wiki.
	#
	# We allow only one kind of extension per wiki.
	# Files with other markdown extensions will be treated as resources.
	#
	# * key: `wiki.md_ext`
	# * default: `md`
	var md_ext: String is lazy do return value_or_default("wiki.md_ext", "md")

	# Root directory of the wiki.
	#
	# Directory where the wiki files are stored locally.
	#
	# * key: `wiki.root_dir`
	# * default: `./`
	var root_dir: String is lazy do return value_or_default("wiki.root_dir", "./").simplify_path

	# Pages directory.
	#
	# Directory where markdown source files are stored.
	#
	# * key: `wiki.source_dir
	# * default: `pages/`
	var source_dir: String is lazy do
		return value_or_default("wiki.source_dir", "pages/").simplify_path
	end

	# Output directory.
	#
	# Directory where public wiki files are generated.
	# **This path MUST be relative to `root_dir`.**
	#
	# * key: `wiki.out_dir`
	# * default: `out/`
	var out_dir: String is lazy do return value_or_default("wiki.out_dir", "out/").simplify_path

	# Asset files directory.
	#
	# Directory where public assets like JS scripts or CSS files are stored.
	# **This path MUST be relative to `root_dir`.**
	#
	# * key: `wiki.assets_dir`
	# * default: `assets/`
	var assets_dir: String is lazy do
		return value_or_default("wiki.assets_dir", "assets/").simplify_path
	end

	# Template files directory.
	#
	# Directory where template used in HTML generation are stored.
	# **This path MUST be relative to `root_dir`.**
	#
	# * key: `wiki.templates_dir`
	# * default: `templates/`
	var templates_dir: String is lazy do
		return value_or_default("wiki.templates_dir", "templates/").simplify_path
	end

	# Main template file.
	#
	# The main template is used to specify the overall structure of a page.
	#
	# * key: `wiki.template`
	# * default: `template.html`
	var template_file: String is lazy do
		return value_or_default("wiki.template", "template.html")
	end

	# Main header template file.
	#
	# Used to specify the structure of the page header.
	# This is generally the place where you want to put your logo and wiki title.
	#
	# * key: `wiki.header`
	# * default: `header.html`
	var header_file: String is lazy do
		return value_or_default("wiki.header", "header.html")
	end

	# Main menu template file.
	#
	# Used to specify the menu structure.
	#
	# * key: `wiki.menu`
	# * default: `menu.html`
	var menu_file: String is lazy do
		return value_or_default("wiki.menu", "menu.html")
	end

	# Main footer file.
	#
	# The main footer is used to specify the structure of the page footer.
	# This is generally the place where you want to put your copyright.
	#
	# * key: `wiki.footer`
	# * default: `footer.html`
	var footer_file: String is lazy do
		return value_or_default("wiki.footer", "footer.html")
	end

	# Automatically add a summary.
	#
	# * key: `wiki.auto_summary`
	# * default: `true`
	var auto_summary: Bool is lazy do
		return value_or_default("wiki.auto_summary", "true") == "true"
	end

	# Automatically add breadcrumbs.
	#
	# * key: `wiki.auto_breadcrumbs`
	# * default: `true`
	var auto_breadcrumbs: Bool is lazy do
		return value_or_default("wiki.auto_breadcrumbs", "true") == "true"
	end

	# Sidebar position.
	#
	# Position of the sidebar between `left`, `right` and `none`. Any other value
	# will be considered as `none`.
	#
	# * key: `wiki.sidebar`
	# * default: `left`
	var sidebar: String is lazy do
		return value_or_default("wiki.sidebar", "left")
	end

	# Sidebar markdown block to include.
	#
	# Blocks are specified by their filename without the extension.
	#
	# * key: `wiki.sidebar.blocks`
	# * default: `[]`
	var sidebar_blocks: Array[String] is lazy do
		var res = new Array[String]
		if not has_key("wiki.sidebar.blocks") then return res
		for val in section("wiki.sidebar.blocks").as(not null).values do
			res.add val.as(not null)
		end
		return res
	end

	# Sidebar files directory.
	#
	# Directory where sidebar blocks are stored.
	# **This path MUST be relative to `root_dir`.**
	#
	# * key: `wiki.sidebar_dir`
	# * default: `sidebar/`
	var sidebar_dir: String is lazy do
		return value_or_default("wiki.sidebar_dir", "sidebar/").simplify_path
	end

	# Directory used by rsync to upload wiki files.
	#
	# This information is used to update your distant wiki files (like the webserver).
	#
	# * key: `wiki.rsync_dir`
	# * default: ``
	var rsync_dir: String is lazy do return value_or_default("wiki.rsync_dir", "")

	# Remote repository used to pull modifications on sources.
	#
	# * key: `wiki.git_origin`
	# * default: `origin`
	var git_origin: String is lazy do return value_or_default("wiki.git_origin", "origin")

	# Remote branch used to pull modifications on sources.
	#
	# * key: `wiki.git_branch`
	# * default: `master`
	var git_branch: String is lazy do return value_or_default("wiki.git_branch", "master")

	# URL to source versionning used to display last changes
	#
	# * key: `wiki.last_changes`
	# * default: ``
	var last_changes: String is lazy do return value_or_default("wiki.last_changes", "")

	# URL to source edition.
	#
	# * key: `wiki.edit`
	# * default: ``
	var edit: String is lazy do return value_or_default("wiki.edit", "")
end

# WikiSection custom configuration.
#
# Each section can provide its own config file to customize
# appearance or behavior.
class SectionConfig
	super IniFile
	autoinit ini_file

	# Path to this file
	var ini_file: String

	init do load_file(ini_file)

	# Returns the config value at `key` or `null` if no key was found.
	private fun value_or_null(key: String): nullable String do
		if not has_key(key) then return null
		return self[key]
	end

	# Is this section hidden in sitemap and trees and menus?
	fun is_hidden: Bool do return value_or_null("section.hidden") == "true"

	# Custom section title if any.
	fun title: nullable String do return value_or_null("section.title")

	# Custom template file if any.
	fun template_file: nullable String do return value_or_null("section.template")

	# Custom header file if any.
	fun header_file: nullable String do return value_or_null("section.header")

	# Custom menu file if any.
	fun menu_file: nullable String do return value_or_null("section.menu")

	# Custom footer file if any.
	fun footer_file: nullable String do return value_or_null("section.footer")
end
