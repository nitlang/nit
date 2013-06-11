# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
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

# The main module of the nitdoc program
package nitdoc

import syntax
private import utils
import abstracttool


# Store knowledge and facilities to generate files
class DocContext
	super AbstractCompiler
	# Destination directory
	readable writable var _dir: String = "doc"
	# GitHub Repo name
	var github_repo: nullable String = null
	# Content of a generated file
	var _stage_context: StageContext = new StageContext(null)

	# Add a string in the content
	fun add(s: String) do
		_stage_context.content.add(s)
		_stage_context.validate = true
	end

	# Add a string in the content iff some other string are added
	fun stage(s: String) do _stage_context.content.add(s)

	# Create a new stage in the content
	fun open_stage do _stage_context = new StageContext(_stage_context)

	# Close the current stage in the content
	fun close_stage
	do
		var s = _stage_context.parent
		if _stage_context.validate then
			s.content.add_all(_stage_context.content)
			s.validate = true
		end
		assert s != null
		_stage_context = s
	end

	# Write the content to a new file
	fun write_to(filename: String)
	do
		var f = new OFStream.open(filename)
		for s in _stage_context.content do
			f.write(s)
		end
		f.close
	end

	# Start a new file
	fun clear
	do
		_stage_context = new StageContext(null)
	end

	# Sorter of entities in alphabetical order
	var _sorter: AlphaSorter[MMEntity] = new AlphaSorter[MMEntity]

	# Sort entities in the alphabetical order
	fun sort(array: Array[MMEntity])
	do
		_sorter.sort(array)
	end

	readable var _opt_dir: OptionString = new OptionString("Directory where doc is generated", "-d", "--dir")
	readable var _opt_source: OptionString = new OptionString("What link for source (%f for filename, %l for first line, %L for last line)", "--source")
	readable var _opt_public: OptionBool = new OptionBool("Generate only the public API", "--public")
	readable var _opt_private: OptionBool = new OptionBool("Generate the private API", "--private")
	readable var _opt_nodot: OptionBool = new OptionBool("Do not generate graphes with graphviz", "--no-dot")
	readable var _opt_sharedir: OptionString = new OptionString("Directory containing the nitdoc files", "--sharedir")
	
	readable var _opt_custom_menu_items: OptionString = new OptionString("Items displayed in menu before the 'Overview' item (Each item must be enclosed in 'li' tags)", "--custom-menu-items")
	readable var _opt_custom_title: OptionString = new OptionString("Title displayed in the top of the Overview page and as suffix of all page names", "--custom-title")
	readable var _opt_custom_overview_text: OptionString = new OptionString("Text displayed as introduction of Overview page before the modules list", "--custom-overview-text")
	readable var _opt_custom_footer_text: OptionString = new OptionString("Text displayed as footer of all pages", "--custom-footer-text")
	readable var _opt_github_repo_name: OptionString = new OptionString("GitHub repo name, example: --github MyRepoName", "--github")
	var sharedir: nullable String

	fun public_only: Bool
	do
		if self._opt_public.value == true then return true
		return false
	end

	fun with_private: Bool
	do
		if self._opt_private.value == true then return true
		return false
	end

	# The current processed filename
	var filename: String

	# The main virtual module
	var mainmod: nullable MMVirtualModule

	redef fun perform_work(mods)
	do
		mainmod = new MMVirtualModule(self, mods)

		dir.mkdir

		sys.system("cp -r '{sharedir.to_s}'/* {dir}/")

		# Compute the set of direct owned nested modules
		var owns = new HashMap[MMModule, Array[MMModule]]
		for mod in modules do
			owns[mod] = new Array[MMModule]# [mod]
		end
		for mod in modules do
			if mod == mainmod then continue
			var d = mod.directory
			loop
				var o = d.owner
				if o != null and o != mod then
					owns[o].add(mod)
				end
				var dp = d.parent
				if dp == null or dp == d then break
				d = dp
			end
		end

		# Builds the various module hierarchies
		var mnh = new PartialOrder[MMModule] # nested module hierarchy
		var tmh = new PartialOrder[MMModule] # top module import hierrchy
		var ms = mainmod.mhe.linear_extension.reversed
		for m in ms do
			if ms == mainmod then continue
			m.mnhe_ = mnh.add(m, owns[m])
			var pub = new Array[MMModule]
			for m2 in m.mhe.greaters do
				if m2.toplevel_owner != m2 and m2.toplevel_owner != m.toplevel_owner then continue
				if m.mnhe <= m2 then continue
				if m.visibility_for(m2) <= 0 then
					# nothing
				else if m.visibility_for(m2) == 1 then
				else
					pub.add(m2)
				end
			end
			m.tmhe_ = tmh.add(m, pub)
		end

		var head = "<meta charset=\"utf-8\">" +
			"<script type=\"text/javascript\" src=\"scripts/jquery-1.7.1.min.js\"></script>\n" +
			"<script type=\"text/javascript\" src=\"quicksearch-list.js\"></script>\n" +
			"<script type=\"text/javascript\" src=\"scripts/js-facilities.js\"></script>\n" +
			"<link rel=\"stylesheet\" href=\"styles/main.css\" type=\"text/css\"  media=\"screen\" />"

		var custom_items = ""
		if self._opt_custom_menu_items.value != null then custom_items = self._opt_custom_menu_items.value.as(not null)

		var action_bar = "<header><nav class='main'><ul>{custom_items}<li class=\"current\">Overview</li><li><a href='full-index.html'>Full Index</a></li><li><a href=\"help.html\">Help</a></li><li id=\"liGitHub\" class=\"\"><a id=\"logGitHub\" class=\"btn\" ><img id=\"imgGitHub\" src=\"resources/icons/github-icon.png\" /></a><div class=\"popover bottom\"><div class=\"arrow\"></div><div class=\"githubTitle\"><h3>Github Sign In</h3></div><div><label id=\"lbloginGit\" for=\"login\">Username</label><input id=\"loginGit\" type=\"text\" name=\"login\"><label id=\"logginMessage\" >Hello <a id=\"githubAccount\" ><strong id=\"nickName\"></strong></a></label></div><div><label id=\"lbpasswordGit\" for=\"password\">Password</label><input id=\"passwordGit\" type=\"password\" name=\"password\"><div id=\"divGitHubRepoDisplay\"><label id=\"lbRepoDisplay\">Repository: </label><strong><label id=\"githubRepoDisplay\"></label></strong></div></div><div><label id=\"lbrepositoryGit\" for=\"repository\">Repository</label><input id=\"repositoryGit\" type=\"text\" name=\"repository\"><div id=\"listBranches\"><label id=\"lbBranches\">Branch </label><select id=\"dropBranches\" name=\"dropBranches\" tabindex=\"1\" class=\"dropdown\"></select></div></div><div><label id=\"lbbranchGit\" for=\"branch\">Branch</label><input id=\"branchGit\" type=\"text\" name=\"branch\"></div><div id=\"divlogIn\"><a id=\"signIn\" >Sign In</a></div></div></li></ul></nav></header>\n"
		var custom_title = "Nitdoc"
		if self._opt_custom_title.value != null then custom_title = self._opt_custom_title.value.as(not null)
		
		var overview_text = ""
		if self._opt_custom_overview_text.value != null then overview_text = self._opt_custom_overview_text.value.as(not null)

		var footer_text = ""
		if self._opt_custom_footer_text.value != null then footer_text = self._opt_custom_footer_text.value.as(not null)
		
		# generate the index
		self.filename = "index.html"
		clear
		add("<!DOCTYPE html>")
		add("<html><head>{head}<title>Overview | {custom_title}</title></head><body>\n")
		add(action_bar)
		add("<div class=\"page\">")
		add("<div class=\"content fullpage\">")
		add("<h1>{custom_title}</h1>\n<article class='overview'>{overview_text}</article><article class='overview'><h2>Modules</h2><ul>")
		var modss = mainmod.mhe.greaters_and_self.to_a
		sort(modss)
		for mod in modss do
			if not mod.is_toplevel then continue
			if not mod.require_doc(self) then continue
			assert mod isa MMSrcModule
			add("<li>{mod.html_link(self)} {mod.short_doc}</li>")

		end
		add("</ul>")

		var op = new Buffer
		op.append("digraph dep \{ rankdir=BT; node[shape=none,margin=0,width=0,height=0,fontsize=10]; edge[dir=none,color=gray]; ranksep=0.2; nodesep=0.1;\n")
		for mod in modss do
			if not mod.is_toplevel then continue
			if not mod.require_doc(self) then continue
			op.append("\"{mod.name}\"[URL=\"{mod.html_name}.html\"];\n")
			for mod2 in mod.tmhe.direct_greaters do
				if not modss.has(mod2) then continue
				op.append("\"{mod.name}\"->\"{mod2.name}\";\n")
			end
		end
		op.append("\}\n")
		self.gen_dot(op.to_s, "dep", "Modules hierarchy")
		add("</article></div>")
		add("</div>")
		add("<footer>{footer_text}</footer>")
		addGithubInformation
		addCommitForm
		add("</body></html>\n")
		write_to("{dir}/index.html")

		# Generate page for modules
		for mod in modules do
			if mod == mainmod then continue
			assert mod isa MMSrcModule
			if not mod.require_doc(self) then continue
			self.filename = mod.html_name
			action_bar = "<header><nav class='main'><ul>{custom_items}<li><a href='./index.html'>Overview</a></li><li class=\"current\">{mod.name}</li><li><a href='full-index.html'>Full Index</a></li><li><a href=\"help.html\">Help</a></li><li id=\"liGitHub\" class=\"\"><a id=\"logGitHub\" class=\"btn\" ><img id=\"imgGitHub\" src=\"resources/icons/github-icon.png\" /></a><div class=\"popover bottom\"><div class=\"arrow\"></div><div class=\"githubTitle\"><h3>Github Sign In</h3></div><div><label id=\"lbloginGit\" for=\"login\">Username</label><input id=\"loginGit\" type=\"text\" name=\"login\"><label id=\"logginMessage\" >Hello <a id=\"githubAccount\" ><strong id=\"nickName\"></strong></a></label></div><div><label id=\"lbpasswordGit\" for=\"password\">Password</label><input id=\"passwordGit\" type=\"password\" name=\"password\"><div id=\"divGitHubRepoDisplay\"><label id=\"lbRepoDisplay\">Repository: </label><strong><label id=\"githubRepoDisplay\"></label></strong></div></div><div><label id=\"lbrepositoryGit\" for=\"repository\">Repository</label><input id=\"repositoryGit\" type=\"text\" name=\"repository\"><div id=\"listBranches\"><label id=\"lbBranches\">Branch </label><select id=\"dropBranches\" name=\"dropBranches\" tabindex=\"1\" class=\"dropdown\"></select></div></div><div><label id=\"lbbranchGit\" for=\"branch\">Branch</label><input id=\"branchGit\" type=\"text\" name=\"branch\"></div><div id=\"divlogIn\"><a id=\"signIn\" >Sign In</a></div></div></li></ul></nav></header>\n"
			clear
			add("<!DOCTYPE html>")
			add("<html><head>{head}<title>{mod.name} module | {custom_title}</title></head><body>\n")
			add(action_bar)
			add("<div class=\"page\">")
			mod.file_page_doc(self)
			add("</div>")
			add("<footer>{footer_text}</footer>")
			addGithubInformation
			addCommitForm
			add("</body></html>\n")
			write_to("{dir}/{mod.html_name}.html")
		end

		# Generate pages for global classes
		for c in mainmod.local_classes do
			if not c.require_doc(self) then continue
			self.filename = c.html_name
			action_bar = "<header><nav class='main'><ul>{custom_items}<li><a href='./index.html'>Overview</a></li><li>{c.global.intro.mmmodule.toplevel_owner.html_link(self)}</li><li class=\"current\">{c.name}</li><li><a href='full-index.html'>Full Index</a></li><li><a href=\"help.html\">Help</a></li><li id=\"liGitHub\" class=\"\"><a id=\"logGitHub\" class=\"btn\" ><img id=\"imgGitHub\" src=\"resources/icons/github-icon.png\" /></a><div class=\"popover bottom\"><div class=\"arrow\"></div><div class=\"githubTitle\"><h3>Github Sign In</h3></div><div><label id=\"lbloginGit\" for=\"login\">Username</label><input id=\"loginGit\" type=\"text\" name=\"login\"><label id=\"logginMessage\" >Hello <a id=\"githubAccount\" ><strong id=\"nickName\"></strong></a></label></div><div><label id=\"lbpasswordGit\" for=\"password\">Password</label><input id=\"passwordGit\" type=\"password\" name=\"password\"><div id=\"divGitHubRepoDisplay\"><label id=\"lbRepoDisplay\">Repository: </label><strong><label id=\"githubRepoDisplay\"></label></strong></div></div><div><label id=\"lbrepositoryGit\" for=\"repository\">Repository</label><input id=\"repositoryGit\" type=\"text\" name=\"repository\"><div id=\"listBranches\"><label id=\"lbBranches\">Branch </label><select id=\"dropBranches\" name=\"dropBranches\" tabindex=\"1\" class=\"dropdown\"></select></div></div><div><label id=\"lbbranchGit\" for=\"branch\">Branch</label><input id=\"branchGit\" type=\"text\" name=\"branch\"></div><div id=\"divlogIn\"><a id=\"signIn\" >Sign In</a></div></div></li></ul></nav></header>\n"
			clear
			add("<!DOCTYPE html>")
			add("<html><head>{head}<title>{c.name} class | {custom_title}</title></head><body>\n")
			add(action_bar)
			add("<div class=\"page\">")
			c.file_page_doc(self)
			add("</div>")
			add("<footer>{footer_text}</footer>")
			addGithubInformation
			addCommitForm
			add("</body></html>\n")
			write_to("{dir}/{c.html_name}.html")
		end

		self.filename = "fullindex"
		action_bar = "<header><nav class='main'><ul>{custom_items}<li><a href='./index.html'>Overview</a></li><li class=\"current\">Full Index</li><li><a href=\"help.html\">Help</a></li><li id=\"liGitHub\" class=\"\"><a id=\"logGitHub\" class=\"btn\" ><img id=\"imgGitHub\" src=\"resources/icons/github-icon.png\" /></a><div class=\"popover bottom\"><div class=\"arrow\"></div><div class=\"githubTitle\"><h3>Github Sign In</h3></div><div><label id=\"lbloginGit\" for=\"login\">Username</label><input id=\"loginGit\" type=\"text\" name=\"login\"><label id=\"logginMessage\" >Hello <a id=\"githubAccount\" ><strong id=\"nickName\"></strong></a></label></div><div><label id=\"lbpasswordGit\" for=\"password\">Password</label><input id=\"passwordGit\" type=\"password\" name=\"password\"><div id=\"divGitHubRepoDisplay\"><label id=\"lbRepoDisplay\">Repository: </label><strong><label id=\"githubRepoDisplay\"></label></strong></div></div><div><label id=\"lbrepositoryGit\" for=\"repository\">Repository</label><input id=\"repositoryGit\" type=\"text\" name=\"repository\"><div id=\"listBranches\"><label id=\"lbBranches\">Branch </label><select id=\"dropBranches\" name=\"dropBranches\" tabindex=\"1\" class=\"dropdown\"></select></div></div><div><label id=\"lbbranchGit\" for=\"branch\">Branch</label><input id=\"branchGit\" type=\"text\" name=\"branch\"></div></div> <div id=\"divlogIn\"><a id=\"signIn\" >Sign In</a></div></div></li></ul></nav></header>\n"
		clear
		add("<!DOCTYPE html>")
		add("<html><head>{head}<title>Full Index | {custom_title}</title></head><body>\n")
		add(action_bar)
		add("<div class=\"page\">")
		add("<div class=\"content fullpage\">")
		mainmod.file_index_page_doc(self)
		add("</div>")
		add("</div>")
		add("<footer>{footer_text}</footer>")
		addGithubInformation
		addCommitForm
		add("</body></html>\n")
		write_to("{dir}/full-index.html")

		self.filename = "quicksearch-list"
		clear
		mainmod.file_quicksearch_list_doc(self)
		write_to("{dir}/quicksearch-list.js")
	end
	
	# Add or not a tag for the github repository
	fun addGithubInformation do
		if not github_repo == null then add("<div id=\"repoName\" name=\"{github_repo.to_s}\"></div>")
	end

	# Add all tags for the commit form
	fun addCommitForm do	
		add("<div id=\"modal\"><form class=\"clearfix\"><div><label for=\"commitMessage\">Commit message</label><textarea id=\"commitMessage\" rows=\"1\" cols=\"76\" name=\"commitMessage\" ></textarea><input id=\"chkSignedOff\" type=\"checkbox\" name=\"chkSignedOff\">Signed-Off </div><div class=\"social-signup login\"><form ></form></div><form id=\"github-connect-form\" class=\"connect-button\" name=\"login\"><a id=\"loginAction\" title=\"Commit on GitHub\"><img src=\"resources/icons/github-icon.png\"><span id=\"btnGitHub\"><strong>Commit</strong></span></a></form></form></div><div id=\"modalQuestion\"><label id=\"txtQuestion\"></label><br><a id=\"btnCreateBranch\">Yes</a><a id=\"btnCancelBranch\">No</a></div><div id=\"waitCommit\"></div>\n\n")
	end

	# Add a (source) link fo a given location
	fun show_source(l: Location)
	do
		var s = opt_source.value
		if s == null then
			add("({l.file.filename.simplify_path})")
		else
			# THIS IS JUST UGLY ! (but there is no replace yet)
			var x = s.split_with("%f")
			s = x.join(l.file.filename.simplify_path)
			x = s.split_with("%l")
			s = x.join(l.line_start.to_s)
			x = s.split_with("%L")
			s = x.join(l.line_end.to_s)
			add(" (<a href=\"{s}\">show code</a>)")
		end
	end

	# Return source link for a given location
	fun get_source(l: Location): String
	do
		var s = opt_source.value
		if s == null then
			return l.file.filename.simplify_path
		else
			# THIS IS JUST UGLY ! (but there is no replace yet)
			var x = s.split_with("%f")
			s = x.join(l.file.filename.simplify_path)
			x = s.split_with("%l")
			s = x.join(l.line_start.to_s)
			x = s.split_with("%L")
			s = x.join(l.line_end.to_s)
			return s
		end
	end

	# Generate a clicable graphiz image using a dot content.
	# `name' refer to the filename (without extension) and the id name of the map.
	# `name' must also match the name of the graph in the dot content (eg. digraph NAME {...)
	fun gen_dot(dot: String,  name: String, alt: String)
	do
		if opt_nodot.value then return
		var f = new OFStream.open("{self.dir}/{name}.dot")
		f.write(dot)
		f.close
		sys.system("\{ test -f {self.dir}/{name}.png && test -f {self.dir}/{name}.s.dot && diff {self.dir}/{name}.dot {self.dir}/{name}.s.dot >/dev/null 2>&1 ; \} || \{ cp {self.dir}/{name}.dot {self.dir}/{name}.s.dot && dot -Tpng -o{self.dir}/{name}.png -Tcmapx -o{self.dir}/{name}.map {self.dir}/{name}.s.dot ; \}")
		self.add("<article class=\"graph\"><img src=\"{name}.png\" usemap=\"#{name}\" style=\"margin:auto\" alt=\"{alt}\"/></article>")
		var fmap = new IFStream.open("{self.dir}/{name}.map")
		self.add(fmap.read_all)
		fmap.close
	end

	init
	do
		keep_ast = true
		super("nitdoc")
		filename = "-unset-"
		option_context.add_option(opt_public)
		option_context.add_option(opt_private)
		option_context.add_option(opt_dir)
		option_context.add_option(opt_source)
		option_context.add_option(opt_nodot)
		option_context.add_option(opt_sharedir)
		option_context.add_option(opt_custom_title)
		option_context.add_option(opt_custom_menu_items)
		option_context.add_option(opt_custom_overview_text)
		option_context.add_option(opt_custom_footer_text)
		option_context.add_option(opt_github_repo_name)
	end

	redef fun process_options
	do
		super
		var d = opt_dir.value
		if d != null then dir = d

		if not opt_nodot.value then
			# Test if dot is runable
			var res = sys.system("sh -c dot </dev/null >/dev/null 2>&1")
			if res != 0 then
				stderr.write "--no-dot implied since `dot' is not available. Try to install graphviz.\n"
				opt_nodot.value = true
			end
		end
		
		sharedir = opt_sharedir.value
		if sharedir == null then
			var dir = "NIT_DIR".environ
			if dir.is_empty then
				dir = "{sys.program_name.dirname}/../share/nitdoc"
				if dir.file_exists then sharedir = dir
			else
				dir = "{dir}/share/nitdoc"
				if dir.file_exists then sharedir = dir
			end
			if sharedir == null then
				fatal_error(null, "Error: Cannot locate nitdoc shared files. Uses --sharedir or envvar NIT_DIR.")
			end
			dir = "{sharedir.to_s}/scripts/js-facilities.js"
			if sharedir == null then
				fatal_error(null, "Error: Invalid nitdoc shared files. Check --sharedir or envvar NIT_DIR.")
			end

		end
		var git = opt_github_repo_name.value
		if not git == null then github_repo = git
	end

	redef fun handle_property_conflict(lc, impls)
	do
		# THIS IS SO UGLY! See MMVirtualModule
		if lc.mmmodule == self.mainmod then 
			return # We just accept, so one in impls is arbitrary inherited
		end
		super
	end
end

# A virtual module is used to work as an implicit main module that combine unrelated modules
# Since conflict may arrise in a virtual module (the main method for instance) conflicts are disabled
class MMVirtualModule
	super MMModule
	init(ctx: MMContext, mods: Array[MMModule])
	do
		# We need to compute the whole metamodel since there is no mmbuilder to do it
		super(" main".to_symbol, mods.first.directory, ctx, new Location(null,0,0,0,0))
		ctx.add_module(self, mods)
		for m in mods do
			self.add_super_module(m, 1)
		end
		self.import_global_classes
		self.import_local_classes
		for c in self.local_classes do
			c.compute_super_classes
		end
		for c in self.local_classes do
			c.compute_ancestors
		end

	end
	redef fun require_doc(dctx) do return false
end

# Conditionnal part of the text content of a DocContext
class StageContext
	# Content of the current stage
	readable var _content: Array[String] = new Array[String]

	# Is a normal string already added?
	readable writable var _validate: Bool = false

	# Parent stage is any
	readable var _parent: nullable StageContext = null

	init(parent: nullable StageContext) do _parent = parent
end


# Efficiently sort object with their to_s method
class AlphaSorter[E: Object]
	super AbstractSorter[E]
	redef fun compare(a, b)
	do
		var sa: String
		var sb: String
		var d = _dico
		if d.has_key(a) then
			sa = d[a]
		else
			sa = a.to_s
			d[a] = sa
		end
		if d.has_key(b) then
			sb = d[b]
		else
			sb = b.to_s
			d[b] = sb
		end
		return sa <=> sb
	end

	# Keep track of to_s values
	var _dico: HashMap[Object, String] = new HashMap[Object, String]

	init do end
end

# Generalization of metamodel entities
interface MMEntity
	# Return a link to
	fun html_link(dctx: DocContext): String is abstract

	# Return a one liner description
	fun short_doc: String do return "&nbsp;"

	# The doc node from the AST
	# Return null is none
	fun doc: nullable ADoc do return null

	# Return a JSON entry for quicksearch list
	fun json_entry(dctx: DocContext): String is abstract

	# Return the qualified name as string
	fun qualified_name: String is abstract
		
end

redef class MMModule
	super MMEntity
	redef fun html_link(dctx) do 
		if short_doc == "&nbsp;" then
			return "<a href=\"{html_name}.html\"\">{self}</a>"
		else 
			return "<a href=\"{html_name}.html\" title=\"{short_doc}\">{self}</a>"
		end
	end
	
	fun html_anchor: String do 
		return "<a id=\"MOD_{html_name}\"></a>"
	end
	
	fun html_link_to_anchor: String do 
		return "<a href=\"#MOD_{html_name}\" title=\"Jump to definitions from module {html_name}\">{self}</a>"
	end

	redef fun json_entry(dctx) do
		return "\{txt:\"{self.qualified_name}\",url:\"{html_name}.html\"\},"
	end

	redef fun qualified_name do
		var buffer = new Buffer
		for m in mnhe.smallers do
			buffer.append("{m.html_name}::")
		end
		buffer.append("{self.name}")
		return buffer.to_s
	end

	fun require_doc(dctx: DocContext): Bool
	do
		if dctx.public_only and not is_toplevel then return false
		return true
	end

	# Return true if the module is a top-level owner or a top-level module
	fun is_toplevel: Bool
	do
		var pd = directory.parent
		return pd == null or (pd.owner == null and directory.owner == self)
	end

	# Element in the module nesting tree
	fun mnhe: PartialOrderElement[MMModule] do return mnhe_.as(not null)
	var mnhe_: nullable PartialOrderElement[MMModule] = null

	# Element in the top level module importation hierarchy
	fun tmhe: PartialOrderElement[MMModule] do return tmhe_.as(not null)
	var tmhe_: nullable PartialOrderElement[MMModule] = null

	fun toplevel_owner: MMModule
	do
		var m = self
		loop
			var ds = m.mnhe.direct_smallers
			if ds.length == 0 then return m
			if ds.length == 1 then m = ds.first else abort
		end
	end

	fun html_name: String
	do
		return "{name}"
	end

	fun direct_owner: nullable MMModule
	do
		var d = directory
		while d.owner == self do d = d.parent.as(not null)
		return d.owner
	end

	# Fill the body for the page associated to the module 
	fun file_page_doc(dctx: DocContext)
	do
		dctx.add("<div class=\"menu\">\n")

		var mods = new Array[MMModule]
		mods = self.mhe.greaters.to_a
		dctx.sort(mods)

		dctx.open_stage
		dctx.stage("<nav>\n")
		dctx.stage("<h3>Module Hierarchy</h3>\n")
		dctx.stage("<h4>All dependencies</h4>\n")
		dctx.stage("<ul>\n")
		for mod in mods do
			if not mod.require_doc(dctx) then continue
			if self.mnhe <= mod then continue # do not want nested stuff
			if mod.direct_owner != null and not mod.direct_owner.mnhe <= self then continue # not in the right nesting
			dctx.add("<li>{mod.html_link(dctx)}</li>")
		end
		dctx.stage("</ul>\n")

		mods = self.mhe.smallers.to_a
		dctx.sort(mods)
		dctx.stage("<h4>All clients</h4>\n")
		dctx.stage("<ul>\n")
		for mod in mods do
			if not mod.require_doc(dctx) then continue
			if self.mnhe <= mod then continue # do not want nested stuff
			if mod.direct_owner != null and not mod.direct_owner.mnhe <= self then continue # not in the right nesting
			dctx.add("<li>{mod.html_link(dctx)}</li>")
		end
		dctx.stage("</ul>\n")
		dctx.stage("</nav>\n")
		dctx.close_stage

		if not dctx.public_only then
			mods = self.mnhe.direct_greaters.to_a
			dctx.sort(mods)
			dctx.open_stage
			dctx.stage("<nav>\n")
			dctx.stage("<h3>Nested Modules</h3><ul>\n")
			for mod in mods do
				if not mod.require_doc(dctx) then continue
				dctx.add("<li>{mod.html_link(dctx)}</li>")
			end
			dctx.stage("</ul></nav>\n")
			dctx.close_stage
		end

		dctx.add("</div>") # metadata

		dctx.add("<div class=\"content\">\n")
		dctx.add("<h1>{name}</h1>\n")
		dctx.add("<div class='subtitle'>module ")
		for m in mnhe.smallers do
			dctx.add("{m.html_link(dctx)}::")
		end
		dctx.add("{self.name}</div>\n")
		dctx.add("<div style=\"float: right;\"><a id=\"lblDiffCommit\"></a></div>")
		dctx.add("<section class='description'>\n")

		var doc = doc
		if doc != null then
			dctx.add("<div id=\"description\">\n")
			dctx.add("<pre class=\"text_label\">{doc.to_html}</pre>\n")
			dctx.add("<textarea rows=\"1\" cols=\"76\" id=\"fileContent\" class=\"edit\"></textarea>\n")
			dctx.add("<a id=\"cancelBtn\">Cancel</a><a id=\"commitBtn\">Commit</a>")
			dctx.add("<pre id=\"preSave\" type=\"2\" class=\"text_label\" ></pre>")
			dctx.add("</div>\n")
		end

		var op = new Buffer
		op.append("digraph {name} \{ rankdir=BT; node[shape=none,margin=0,width=0,height=0,fontsize=10]; edge[dir=none,color=gray]; ranksep=0.2; nodesep=0.1;\n")
		var ms = new Array[nullable MMModule]
		do
			var m0: nullable MMModule = self
			while m0 != null do
				m0 = m0.direct_owner
				ms.add(m0)
			end
		end
		var cla = new HashSet[MMModule]
		cla.add(self)
		for m0 in self.mhe.greaters do
			if not m0.require_doc(dctx) then continue
			if self.visibility_for(m0) <= 1 then continue # private or hidden
			if self.mnhe <= m0 then continue # do not want nested stuff
			if m0.direct_owner != null and not m0.direct_owner.mnhe <= self then continue # not in the right nesting
			cla.add(m0)
		end
		for m0 in self.mhe.smallers do
			if not m0.require_doc(dctx) then continue
			if m0.visibility_for(self) <= 1 then continue # private or hidden
			if m0.direct_owner != null and not m0.direct_owner.mnhe <= self then continue # not in the right nesting
			cla.add(m0)
		end
		for m0 in self.mnhe.smallers do
			cla.add(m0)
		end
		ms = ms.reversed
		for m0 in ms do
			if m0 != null then
				op.append("subgraph \"cluster_{m0.name}\"\{\n")
			end
			for c in cla do
				if c.direct_owner != m0 then continue
				if c == self then
					op.append("\"{c.name}\"[shape=box,margin=0.03];\n")
				else
					op.append("\"{c.name}\"[URL=\"{c.html_name}.html\"];\n")
				end
			end
			if m0 != null then
				op.append("\"{m0.name}\"[URL=\"{m0.html_name}.html\"];\n")
				for c in m0.mhe.direct_greaters do
					if not cla.has(c) then continue
					op.append("\"{m0.name}\"->\"{c.name}\";\n")
				end
			end
		end
		for m0 in ms do
			# Close the nesting subgraph
			if m0 != null then
				op.append("\}\n")
			end
		end
		for c in cla do
			for c2 in c.tmhe.direct_greaters do
				if not cla.has(c2) then continue
				op.append("\"{c.name}\"->\"{c2.name}\";\n")
			end
		end
		op.append("\}\n")
		dctx.gen_dot(op.to_s, name.to_s, "Dependency graph for module {name}")
		dctx.add("</section>")

		var clas = new Array[MMLocalClass]
		var props = new HashMap[MMGlobalProperty, Array[MMLocalProperty]]
		var gprops = new Array[MMLocalProperty]
		do
			var m = self
			for g in m.global_classes do
				var lc = m[g]
				if not lc.require_doc(dctx) then continue
				var im = g.intro.mmmodule
				if self.visibility_for(im) <= 1 then continue # private import or invisible import
				var keep = false
				for lc2 in lc.crhe.greaters_and_self do
					if not lc2 isa MMSrcLocalClass then continue
					if not self.mnhe <= lc2.mmmodule then continue # not introduced/redefined here/stolen
					keep = true
				end
				if not keep then continue
				clas.add(self[g])
				lc.compute_super_classes
				for gp in lc.global_properties do
					if self.visibility_for(gp.intro.local_class.mmmodule) <= 1 then continue # private import or invisible import
					var lp = lc[gp]
					var mp = lp.local_class.mmmodule
					if not self.mnhe <= mp then continue # not introduced/redefined here/stolen
					lp = self[g][gp]
					if not lp.require_doc(dctx) then continue
					if props.has_key(lp.global) then
						if not props[lp.global].has(lp) then
							props[lp.global].add(lp)
						end
					else
						props[lp.global] = [lp]
						gprops.add(lp.global.intro)
					end
				end
			end
		end
		dctx.add("<section class=\"module\">\n")
		dctx.open_stage
		dctx.stage("<article class=\"classes filterable\">\n")
		dctx.stage("<h2>Classes</h2>\n")
		dctx.sort(clas)
		dctx.stage("<ul>\n")
		for lc in clas do
			if self.mnhe <= lc.global.intro.mmmodule then
				dctx.add("<li class='intro'><span title='introduced in this module'>I</span>&nbsp;")
			else
				dctx.add("<li class='redef'><span title='refined in this module'>R</span>&nbsp;")
			end
			dctx.add("{lc.html_link(dctx)}</li>\n")
		end
		dctx.stage("</ul></article>\n")
		dctx.close_stage

		dctx.open_stage
		dctx.stage("<article class=\"properties filterable\">\n")
		dctx.stage("<h2>Properties</h2>\n")
		dctx.sort(gprops)
		dctx.stage("<ul>\n")
		for lgp in gprops do
			var gp = lgp.global
			var lps = props[gp]

			if gp.intro isa MMAttribute then continue
			
			var lpi = self[gp.intro.local_class.global][gp]
		
			if lps.has(lpi) then
				dctx.add("<li class='intro'><span title='introduction in an other module'>I</span>&nbsp;{lpi.html_open_link(dctx)}{lpi.html_name}&nbsp;({lpi.local_class})</a></li>\n")
				lps.remove(lpi)
			else
				dctx.add("<li class='intro'><span title='introduction in this module'>I</span>&nbsp;{lpi.html_name}")
				dctx.add("&nbsp;({lpi.local_class})</li>\n")
			end
			if lps.length >= 1 then
				dctx.sort(lps)
				for lp in lps do
					dctx.add("<li class='redef'><span title='redefinition'>R</span>&nbsp;{lp.html_open_link(dctx)}{lp.html_name}&nbsp;({lp.local_class})</a></li>")
				end
			end
		end
		dctx.stage("</ul></article>\n")
		dctx.close_stage
		dctx.add("</section>\n")
		dctx.add("</div>\n")
	end

	# Fill the body for the page associated to the full index
	fun file_index_page_doc(dctx: DocContext)
	do

		dctx.add("<h1>Full Index</h1>\n")

		var clas = new Array[MMLocalClass]
		var props = new HashMap[MMGlobalProperty, Array[MMLocalProperty]]
		var gprops = new Array[MMLocalProperty]
		var mods = new Array[MMModule]
		for m in mhe.greaters_and_self do
			if not m.require_doc(dctx) then continue
			mods.add(m)
		end
		for g in global_classes do
			var lc = self[g]
			if not lc.require_doc(dctx) then continue
			clas.add(lc)
			for gp in lc.global_properties do
				var lp = lc[gp]
				if not lp.require_doc(dctx) then continue
				if props.has_key(lp.global) then
					if not props[lp.global].has(lp) then
						props[lp.global].add(lp)
					end
				else
					props[lp.global] = [lp]
					gprops.add(lp.global.intro)
				end
			end
		end
		dctx.open_stage
		dctx.stage("<article class=\"modules filterable\">\n")
		dctx.stage("<h2>Modules</h2>\n")
		dctx.sort(mods)
		dctx.stage("<ul>\n")
		for m in mods do
			dctx.add("<li>{m.html_link(dctx)}</li>")
		end
		dctx.stage("</ul></article>\n")
		dctx.close_stage

		dctx.open_stage
		dctx.stage("<article class=\"classes filterable\">\n")
		dctx.stage("<h2>Classes</h2>\n")
		dctx.sort(clas)
		dctx.stage("<ul>\n")
		for lc in clas do
			dctx.add("<li>{lc.html_link(dctx)}</li>")
		end
		dctx.stage("</ul></article>\n")
		dctx.close_stage

		dctx.open_stage
		dctx.stage("<article class=\"properties filterable\">\n")
		dctx.stage("<h2>Properties</h2>\n")
		dctx.sort(gprops)
		dctx.stage("<ul>\n")
		for lgp in gprops do
			var gp = lgp.global
			var lps = props[gp]

			if gp.intro isa MMAttribute then continue

			var lpi = self[gp.intro.local_class.global][gp]
			
			lps.remove(lpi)
			dctx.add("<li class='intro'><span title='introduction'>I</span>&nbsp;{lpi.html_open_link(dctx)}{lpi.html_name}&nbsp;({lpi.local_class})</a></li>\n")
			if lps.length >= 1 then
				dctx.sort(lps)
				for lp in lps do
					dctx.add("<li class='redef'><span title='redefinition'>R</span>&nbsp;{lp.html_open_link(dctx)}{lp.html_name}&nbsp;({lp.local_class})</a></li>\n")
				end
			end
		end
		dctx.stage("</ul></article>\n")
		dctx.close_stage
	end

	# Fill the quicksearch list JSON object
	fun file_quicksearch_list_doc(dctx: DocContext)
	do
		var entities = new HashMap[String, Array[MMEntity]]
		var props = new HashMap[MMGlobalProperty, Array[MMLocalProperty]]
		for m in mhe.greaters_and_self do
			if not m.require_doc(dctx) then continue
			var a = new Array[MMEntity]
			a.add(m)
			entities[m.html_name] = a
		end
		for g in global_classes do
			var lc = self[g]
			if not lc.require_doc(dctx) then continue
			var a = new Array[MMEntity]
			a.add(lc)
			entities[lc.html_name] = a
			for gp in lc.global_properties do
				var lp = lc[gp]
				if not lp.require_doc(dctx) then continue
				if lp.kind == "var" then continue
				if props.has_key(lp.global) then
					if not props[lp.global].has(lp) then
						props[lp.global].add(lp)
					end
				else
					props[lp.global] = [lp]
				end
			end
		end

		for k, v in props do
			entities[k.short_name] = v
		end

		var keys = entities.keys.to_a
		var sorter = new AlphaSorter[String]
		sorter.sort(keys)
		
		dctx.open_stage
		dctx.stage("var entries = \{")
		for key in keys do
			dctx.add("\"{key}\": [")
			for entity in entities[key] do
				dctx.add(entity.json_entry(dctx))
			end
			dctx.add("],")
		end
		dctx.stage("\};")
		dctx.close_stage
	end
end

redef class MMGlobalProperty
	# Return the short name of the property
	fun short_name: String do
		return self.intro.html_name
	end
end 

redef class MMLocalProperty
	super MMEntity
	# Anchor of the property description in the module html file
	fun html_anchor: String
	do
		return "PROP_{self.mmmodule.toplevel_owner}_{local_class}_{cmangle(name)}"
	end

	redef fun json_entry(dctx) do
		return "\{txt:\"{qualified_name}\",url:\"{local_class.html_name}.html#{html_anchor}\"\},"
	end

	redef fun qualified_name do
		return "{intro_module.qualified_name}::{local_class.html_name}::{html_name}"
	end

	fun html_open_link(dctx: DocContext): String
	do
		if not require_doc(dctx) then print "not required {self}"
		var title = "{html_name}{signature.to_s}"
		if short_doc != "&nbsp;" then
			title += " #{short_doc}"
		end
		return "<a href=\"{local_class.html_name}.html#{html_anchor}\" title=\"{title}\">"
	end

	fun html_name: String
	do
		return self.name.to_s.html_escape
	end

	redef fun html_link(dctx)
	do
		if not require_doc(dctx) then print "not required {self}"
		var title = "{html_name}{signature.to_s}"
		if short_doc != "&nbsp;" then
			title += " #{short_doc}"
		end
		return "<a href=\"{local_class.html_name}.html#{html_anchor}\" title=\"{title}\">{html_name}</a>"
	end

	fun html_link_special(dctx: DocContext, lc: MMLocalClass): String
	do
		if not require_doc(dctx) then print "not required {self}"
		var title = "{html_name}{signature_for(lc.get_type)}"
		if short_doc != "&nbsp;" then
			title += " #{short_doc}"
		end
		return "<a href=\"{lc.html_name}.html#{html_anchor}\" title=\"{title}\">{html_name}</a>"
	end

	# Kind of property (fun, attr, etc.)
	fun kind: String is abstract

	redef fun short_doc
	do
		var d = doc
		if d != null then
			return d.short
		else if global.intro == self then
			return "&nbsp;"
		else
			return global.intro.short_doc
		end
	end
	
	redef fun doc
	do
		var n = node
		if n == null or not n isa APropdef then
			return null
		end
		var d = n.n_doc
		if d == null then
			return null
		end
		if d.n_comment.is_empty then
			return null
		else
			return d
		end
	end

	# The most specific module in the nesting hierarchy that exports the intro of self
	fun intro_module: MMModule
	do
		var m = global.intro.mmmodule
		var mo = m.direct_owner
		while mo != null and mo.visibility_for(m) >= 2 do 
			m = mo
			mo = m.direct_owner
		end
		return m
	end

	# Is the intro of self exported by the top-level module ?
	fun is_toplevel: Bool
	do
		var m = intro_module
		return m == m.toplevel_owner
	end

	# Return true if the global property must be documented according to the visibility configured
	fun require_doc(dctx: DocContext): Bool
	do
		if global.visibility_level == 3 and not dctx.with_private then return false # Private
		if dctx.public_only then
			var m = intro_module
			if m != m.toplevel_owner then return false # Unexported
		end
		return true
	end

	# Document the global property in the global class lc
	fun full_documentation(dctx: DocContext, lc: MMLocalClass)
	do
		var visibility: String
		if global.visibility_level == 1 then
			visibility = "public"
		else if global.visibility_level == 2 then
			visibility = "protected"
		else if global.visibility_level == 3 then
			visibility = "private"
		else 
			abort
		end

		var intro_class = global.intro.local_class
		var is_redef = local_class.global != intro_class.global or local_class.mmmodule.toplevel_owner != intro_class.mmmodule.toplevel_owner

		dctx.add("<article id=\"{html_anchor}\" class=\"{kind} {visibility} {if is_redef then "redef" else ""}\">\n")
		dctx.add("<h3 class=\"signature\">{html_name}{signature.to_html(dctx, true)}</h3>\n")
		dctx.add("<div class=\"info\">\n")

		if is_redef then
			dctx.add("redef ")
		end
		if not is_toplevel then
			dctx.add("(unexported) ")
		end
		if global.visibility_level == 2 then
			dctx.add("protected ")
		else if global.visibility_level == 3 then
			dctx.add("private ")
		end
		dctx.add(kind)
		dctx.add(" {intro_class.mmmodule.toplevel_owner.name}")
		if intro_class.global == lc.global then
			dctx.add("::{lc.name}")
		else
			dctx.add("::{mmmodule[intro_class.global].html_link(dctx)}")
		end
		if is_redef then
			dctx.add("::{mmmodule[intro_class.global][global].global.intro.html_link(dctx)}")
		else
			dctx.add("::{html_name}")
		end
		dctx.add("</div>")
		dctx.add("<div style=\"float: right;\"><a id=\"lblDiffCommit\"></a></div>")
		dctx.add("<div class=\"description\">")

		# Collect all refinement of the global property in the same global property
		var lps = new Array[MMLocalProperty]
		for l in prhe.greaters_and_self do
			lps.add(l)
		end

		var introdoc = false
		if global.intro.doc != null then
			for lp in lps do
				if lp.doc == null then introdoc = true
			end
		end
		if introdoc then
			dctx.add("<pre class=\"text_label\" name=\"{html_name}\" >{global.intro.doc.to_html}</pre>")
			dctx.add("<textarea rows=\"1\" cols=\"76\" id=\"fileContent\" class=\"edit\"></textarea>")
			dctx.add("<a id=\"cancelBtn\">Cancel</a><a id=\"commitBtn\">Commit</a>")
			dctx.add("<pre id=\"preSave\" type=\"2\" class=\"text_label\" ></pre>")
		end

		var tlmods = new Array[MMModule]
		for lp in lps do
			var bm = lp.mmmodule.toplevel_owner
			var lcm = lc.global.intro.mmmodule
			if lcm.mhe < lp.mmmodule then bm = lcm.toplevel_owner
			if not tlmods.has(bm) then tlmods.add(bm)
		end

		for tm in tlmods do
			# Document the top level property for the current top level module
			var tlp
			if tm.global_classes.has(lc.global) then
				tlp = tm[lc.global][self.global]
				assert lps.has(tlp)
			else if tm.global_classes.has(self.local_class.global) then
				# Self is the inherited property. Process it
				tlp = tm[self.local_class.global][self.global]
				assert lps.has(tlp)
			else
				# We skip this module since the props defined by the module is  
				continue
			end

			var tlcm = lc.global.intro.mmmodule.toplevel_owner
			if not tlcm.mhe <= tm then
				dctx.add("<h4>In module {tm.html_link(dctx)} :</h4>")
			end

			var doc = tlp.doc
			var n = tlp.node
			if doc != null and (not introdoc or global.intro.doc != doc) then
				if n != null then
					var l = n.location
					dctx.add("<pre type=\"1\" class=\"text_label\" tag=\"{l.file.filename}\" name=\"{dctx.get_source(l)}\" title=\"{l.line_start.to_s}\" >{doc.to_html}</pre>")
				end
			else if not is_redef then
				if n != null then
					var l = n.location
					dctx.add("<a class=\"newComment\" tag=\"{l.file.filename}\" title=\"{l.line_start.to_s}\">New comment</a>\n")
				end
			end
			dctx.add("<textarea rows=\"1\" cols=\"76\" id=\"fileContent\" class=\"edit\"></textarea>")
			dctx.add("<a id=\"cancelBtn\">Cancel</a><a id=\"commitBtn\">Commit</a>")
			dctx.add("<pre id=\"preSave\" type=\"2\" class=\"text_label\" ></pre>")
			dctx.add("<p>")
			if tlp.local_class.global != lc.global then
				dctx.add("inherited from {tlp.local_class.html_link(dctx)} ")
			end
			if tm != tlp.mmmodule then
				dctx.add("defined by the module {tlp.mmmodule.html_link(dctx)} ")
			end
			if n != null then
				var l = n.location
				dctx.show_source(l)
			end
			
			dctx.open_stage
			dctx.stage(". previously defined by:")
			for lp in lps do
				var tl = lp.mmmodule.toplevel_owner
				if tl != tm then continue
				if lp == tlp then continue
				dctx.add(" {lp.mmmodule.html_link(dctx)}")
				if lp.local_class.global != lc.global then
					dctx.add(" for {lp.local_class.html_link(dctx)} ")
				end

				n = lp.node
				if n != null then
					var l = n.location
					dctx.show_source(l)
				end
			end
			dctx.close_stage
			dctx.add("</p>")
		end
		dctx.add("</div>")
		dctx.add("</article>")
	end
end
redef class MMMethod
	redef fun kind do return if global.is_init then "init" else "fun"
end
redef class MMAttribute
	redef fun kind do return "var"
end
redef class MMTypeProperty
	redef fun kind do return "type"
end

redef class MMSrcModule
	redef fun short_doc
	do
		var d = doc
		if d != null then
			return d.short
		else
			return "&nbsp;"
		end
	end

	redef fun doc
	do
		var n = node
		if n.n_moduledecl == null then
			return null
		end
		var np = n.n_moduledecl
		var d = np.n_doc
		if d == null then
			return null
		end
		if d.n_comment.is_empty then
			return null
		else
			return d
		end
	end
end

redef class ADoc
	# Html transcription of the doc
	fun to_html: String
	do
		var res = new Buffer
		for c in n_comment do
			res.append(c.text.substring_from(1))
		end
		return res.to_s.html_escape
	end

	# Oneliner transcription of the doc
	fun short: String
	do
		return n_comment.first.text.substring_from(1).html_escape
	end
end

redef class MMLocalClass
	super MMEntity

	# Anchor of the class description in the module html file
	fun html_anchor: String do return "CLASS_{self}"

	fun html_name: String do return "{self}"

	redef fun html_link(dctx)
	do
		if not require_doc(dctx) then print "{dctx.filename}: not required {self}"
		if short_doc == "&nbsp;" then
			return "<a href=\"{html_name}.html\"\">{self}</a>"
		else 
			return "<a href=\"{html_name}.html\" title=\"{short_doc}\">{self}</a>"
		end
	end

	redef fun json_entry(dctx) do
		return "\{txt:\"{qualified_name}\",url:\"{html_name}.html\"\},"
	end

	redef fun qualified_name do
		return "{intro_module.qualified_name}::{html_name}"
	end

	redef fun short_doc do return global.intro.short_doc

	redef fun doc do return global.intro.doc

	fun kind: String
	do
		if global.is_interface then
			return "interface"
		else if global.is_abstract then
			return "abstract class"
		else if global.is_enum then
			return "enum"
		else
			return "class"
		end
	end

	# The most specific module in the nesting hierarchy that exports the intro of self
	fun intro_module: MMModule
	do
		var m = global.intro.mmmodule
		var mo = m.direct_owner
		while mo != null and mo.visibility_for(m) >= 2 do 
			m = mo
			mo = m.direct_owner
		end
		return m
	end

	fun menu_link(dctx: DocContext, p: MMLocalProperty)
	do
		if p.local_class.global != self.global then
			if p.global.intro.local_class.name == "Object".to_symbol then return
			if p.global.is_init or p isa MMTypeProperty then
				dctx.add("<li class='inherit'><span title='Inherited'>H</span>&nbsp;{p.html_link_special(dctx, self)}</li>\n")
			else
				dctx.add("<li class='inherit'><span title='Inherited'>H</span>&nbsp;{p.html_link(dctx)}</li>\n")
			end
		else if p.global.intro.local_class.global == self.global then
			dctx.add("<li class='intro'><span title='Introduced'>I</span>&nbsp;{p.html_link_special(dctx, self)}</li>\n")
		else
			dctx.add("<li class='redef'><span title='Redefined'>R</span>&nbsp;{p.html_link_special(dctx, self)}</li>\n")
		end
	end

	# Return true if the global class must be documented according to the visibility configured
	fun require_doc(dctx: DocContext): Bool
	do
		if global.visibility_level == 3 and not dctx.with_private then return false # Private
		if dctx.public_only then
			var m = intro_module
			if m != m.toplevel_owner then return false # Unexported
		end
		return true
	end

	# Fill the body for the page associated to the global class
	fun file_page_doc(dctx: DocContext)
	do
		dctx.add("<div class=\"menu\">\n")

		var props = new Array[MMLocalProperty]
		var inh = new HashMap[MMLocalClass, Array[MMLocalProperty]]
		var inhs = new Array[MMLocalClass]
		for g in global_properties do
			var p = self[g]
			if not p.require_doc(dctx) then continue
			if p.local_class.global == global or g.is_init_for(self) or p isa MMTypeProperty then
				props.add(p)
			else
				var lc = mmmodule[p.local_class.global]
				if inh.has_key(lc) then
					inh[lc].add(p)
				else
					inh[lc] = [p]
					inhs.add(lc)
				end
				props.add(p)
			end
		end
		dctx.sort(props)

		dctx.add("<nav class=\"properties filterable\">\n")
		dctx.add("<h3>Properties</h3>\n")
		dctx.open_stage
		dctx.stage("<h4>Virtual Types</h4>\n<ul>\n")
		for p in props do
			if p isa MMTypeProperty then
				menu_link(dctx, p)
			end
		end
		dctx.stage("</ul>\n")
		dctx.close_stage
		dctx.open_stage
		dctx.stage("<h4>Constructors</h4>\n<ul>\n")
		for p in props do
			if p.global.is_init_for(self) then
				menu_link(dctx, p)
			end
		end
		dctx.stage("</ul>\n")
		dctx.close_stage
		dctx.open_stage
		dctx.stage("<h4>Methods</h4>\n<ul>\n")
		for p in props do
			if not p.global.is_init and p isa MMMethod then
				menu_link(dctx, p)
			end
		end
		dctx.stage("</ul>\n")
		dctx.close_stage
		dctx.add("</nav>\n")

		dctx.add("<nav class=\"inheritance filterable\">\n")
		dctx.add("<h3>Inheritance</h3>\n")
		dctx.add("<h4>Superclasses</h4>\n<ul>\n")
		for lc in cshe.linear_extension do
			if lc == self then continue
			if not lc.require_doc(dctx) then continue
			dctx.add("<li>{lc.html_link(dctx)}</li>\n")
		end
		dctx.add("</ul>\n")
		if cshe.smallers.length == 0 then 
			dctx.add("<h4>No Known Subclasses</h4>\n")
		else if cshe.smallers.length <= 100 then 
			dctx.add("<h4>Subclasses</h4>\n")
			dctx.add("<ul>\n")
			for lc in cshe.smallers do
				if not lc.require_doc(dctx) then continue
				dctx.add("<li>{lc.html_link(dctx)}</li>\n")
			end
			dctx.add("</ul>\n")
		else if cshe.direct_smallers.length <= 100 then 
			dctx.add("<h4>Direct Subclasses Only</h4>\n<ul>\n")
			for lc in cshe.direct_smallers do
				if not lc.require_doc(dctx) then continue
				dctx.add("<li>{lc.html_link(dctx)}</li>\n")
			end
			dctx.add("</ul>\n")
		else
			dctx.add("<h4>Too much Subclasses to list</h4>\n")
		end
		dctx.add("</nav>\n")

		dctx.add("</div>\n")


		dctx.add("<div class=\"content\">\n")
		dctx.add("<h1>{name}</h1>\n")
		dctx.add("<div class='subtitle'>")
		if global.visibility_level == 2 then
			abort
		else if global.visibility_level == 3 then
			dctx.add("private ")
		else if self.global.intro.mmmodule.toplevel_owner.visibility_for(self.global.intro.mmmodule) <= 1 then
			dctx.add("(unexported) ")
		end
		dctx.add("{kind} {global.intro.mmmodule.toplevel_owner.html_link(dctx)}::{name}</div>")
		dctx.add("<div style=\"float: right;\"><a id=\"lblDiffCommit\"></a></div>")
		dctx.add("<section class=\"description\">\n")
		var doc = doc
		if doc != null then
			var l = doc.location
			dctx.add("<pre type=\"2\" class=\"text_label\" tag=\"{l.file.filename}\" name=\"{dctx.get_source(l)}\" title=\"{l.line_start.to_s}\">{doc.to_html}</pre>\n")
			dctx.add("<textarea rows=\"1\" cols=\"76\" id=\"fileContent\" class=\"edit\"></textarea>")
			dctx.add("<a id=\"cancelBtn\">Cancel</a><a id=\"commitBtn\">Commit</a>")
			dctx.add("<pre id=\"preSave\" type=\"2\" class=\"text_label\" ></pre>")
		end

		var cla = new HashSet[MMLocalClass]
		var sm = new HashSet[MMLocalClass]
		var sm2 = new HashSet[MMLocalClass]
		sm.add(self)
		while cla.length + sm.length < 10 and sm.length > 0 do
			cla.add_all(sm)
			sm2.clear
			for x in sm do
				sm2.add_all(x.cshe.direct_smallers)
			end
			var t = sm
			sm = sm2
			sm2 = t
		end
		cla.add_all(cshe.greaters_and_self)

		var op = new Buffer
		var name = "class_{name}"
		op.append("digraph {name} \{ rankdir=BT; node[shape=none,margin=0,width=0,height=0,fontsize=10]; edge[dir=none,color=gray]; ranksep=0.2; nodesep=0.1;\n")
		for c in cla do
			if c == self then
				op.append("\"{c.name}\"[shape=box,margin=0.03];\n")
			else
				op.append("\"{c.name}\"[URL=\"{c.html_name}.html\"];\n")
			end
			for c2 in c.cshe.direct_greaters do
				if not cla.has(c2) then continue
				op.append("\"{c.name}\"->\"{c2.name}\";\n")
			end
			if not c.cshe.direct_smallers.is_empty then
				var others = true
				for c2 in c.cshe.direct_smallers do
					if cla.has(c2) then others = false
				end
				if others then
					op.append("\"{c.name}...\"[label=\"\"];\n")
					op.append("\"{c.name}...\"->\"{c.name}\"[style=dotted];\n")
				end
			end
		end
		op.append("\}\n")
		dctx.gen_dot(op.to_s, name.to_s, "Inheritance graph for class {name}")
		dctx.add("</section>\n")

		# Concerns table
		dctx.open_stage
		dctx.stage("<section class=\"concerns\">\n")
		dctx.stage("<h2 class=\"section-header\">Concerns</h2>\n")

		var mods = new Array[MMModule]
		mods.add(global.intro.mmmodule.toplevel_owner)
		for lc in crhe.greaters do
			if not lc isa MMSrcLocalClass then continue
			var m = lc.mmmodule.toplevel_owner
			if not mods.has(m) then mods.add(m)
		end
		
		var intro = global.intro.mmmodule
		var short_doc
		dctx.add("<ul>\n")
		for m in mods do
			short_doc = ""
			if m.short_doc != "&nbsp;" then short_doc = ": {m.short_doc}"
			dctx.add("<li>{m.html_link_to_anchor}{short_doc}")
			dctx.add("<ul>\n")
			for lc in crhe.linear_extension.reversed do
				if lc.mmmodule.toplevel_owner != m then continue
				if lc.mmmodule == m then continue
				short_doc = ""
				if lc.mmmodule.short_doc != "&nbsp;" then short_doc = ": {lc.mmmodule.short_doc}"
				dctx.add("<li>{lc.mmmodule.html_link_to_anchor}{short_doc}</li>")
			end
			dctx.add("</ul>\n")
			dctx.add("</li>\n")
		end
		dctx.add("</ul>\n")
		dctx.stage("</section>\n")
		dctx.close_stage

		dctx.open_stage
		dctx.stage("<section class=\"types\">\n")
		dctx.stage("<h2>Formal and Virtual Types</h2>\n")
		for i in [0..arity[ do
			var f = get_formal(i)
			f.full_documentation(dctx, self)
		end
		for p in props do
			if not p isa MMTypeProperty then continue
			p.full_documentation(dctx, self)
		end
		dctx.stage("</section>\n")
		dctx.close_stage

		dctx.open_stage
		dctx.stage("<section class=\"constructors\">\n")
		dctx.stage("<h2 class=\"section-header\">Constructors</h2>\n")
		for p in props do
			if not p.global.is_init_for(self) then continue
			p.full_documentation(dctx, self)
		end
		dctx.stage("</section>\n")
		dctx.close_stage

		dctx.open_stage
		dctx.stage("<section class=\"methods\">\n")
		dctx.stage("<h2 class=\"section-header\">Methods</h2>\n")
		var redefs = new HashMap[MMModule, HashMap[MMModule, Array[MMMethod]]]
		for p in props do
			if p.global.is_init then continue
			if p.local_class.global != self.global then continue
			if not p isa MMMethod then continue
			# Top level module
			var toplevel_module = p.mmmodule.toplevel_owner
			if not redefs.has_key(toplevel_module) then
				redefs[toplevel_module] = new HashMap[MMModule, Array[MMMethod]]
			end
			# Nested module
			var nested_module = p.mmmodule
			if not redefs[toplevel_module].has_key(nested_module) then
				redefs[toplevel_module][nested_module] = new Array[MMMethod]
			end
			# Props
			redefs[toplevel_module][nested_module].add(p)
			
			# Redefs
			if p.mmmodule.toplevel_owner != p.intro_module then
				toplevel_module = p.intro_module
				nested_module = p.global.intro.mmmodule
				
				if not redefs.has_key(toplevel_module) then
					redefs[toplevel_module] = new HashMap[MMModule, Array[MMMethod]]
				end
				if not redefs[toplevel_module].has_key(nested_module) then
					redefs[toplevel_module][nested_module] = new Array[MMMethod]
				end
			
				redefs[toplevel_module][nested_module].add(p.global.intro.as(MMMethod))
			end
		end
		
		# Display toplevel blocks		
		for m in mods do
			if not redefs.has_key(m) then continue
			dctx.add(m.html_anchor)
			if m != global.intro.mmmodule.toplevel_owner then
				dctx.add("<h3 class=\"concern-toplevel\">Methods refined in {m.html_link(dctx)}</h3>")
			end
			
			# Display nested module blocks
			for lc in crhe.linear_extension.reversed do
				if lc.mmmodule.toplevel_owner != m then continue
				var nm =  lc.mmmodule
				if not redefs[m].has_key(nm) then continue
				dctx.add(nm.html_anchor)
				if nm != global.intro.mmmodule then
					short_doc = ""
					if nm.short_doc != "&nbsp;" then short_doc = ": {nm.short_doc}" 
					dctx.add("<p class=\"concern-doc\">{nm.html_name}{short_doc}</p>\n")
				end
			
				var pps = redefs[m][nm]
				dctx.sort(pps)
				for p in pps do
					p.full_documentation(dctx, self)
				end					
			end
		end

		if not inhs.is_empty then
			dctx.open_stage
			dctx.stage("<h3>Inherited Methods</h3>\n")
			for lc in inhs do
				dctx.open_stage
				dctx.stage("<p>Defined in {lc.html_link(dctx)}:")
				
				var ims = new Array[MMMethod] 
				for p in inh[lc] do
					if p.global.is_init then continue
					if not p isa MMMethod then continue
					ims.add(p)
				end
				
				var i = 0
				for p in ims do 
					dctx.add(" {p.html_link(dctx)}")
					if i < ims.length - 1 then dctx.add(",")
					i += 1
				end
				
				dctx.stage("</p>")
				dctx.close_stage
			end
			dctx.close_stage
		end
		dctx.add("</section>\n")
		dctx.close_stage
		dctx.add("</div> <!-- end class {name} -->\n")
	end
end

redef class MMSrcLocalClass
	redef fun short_doc
	do
		var d = doc
		if d != null then
			return d.short
		else if global.intro == self then
			return "&nbsp;"
		else
			var bc = global.intro
			return bc.short_doc
		end
	end

	redef fun doc
	do
		var n = node
		if not n isa AStdClassdef then
			return null
		end
		var d = n.n_doc
		if d == null then
			return null
		end
		if d.n_comment.is_empty then
			return null
		else
			return d
		end
	end
end

redef class MMSignature
	# Htlm transcription of the signature (with nested links)
	fun to_html(dctx: DocContext, with_closure: Bool): String
	do
		var res = new Buffer
		if arity > 0 then
			res.append("(")
			for i in [0..arity[ do
				if i > 0 then res.append(", ")
				res.append(self.params[i].name.to_s)
				res.append(": ")
				res.append(self[i].html_link(dctx))
				if self.vararg_rank == i then
					res.append("...")
				end
			end
			res.append(")")
		end
		if return_type != null then
			res.append(": ")
			res.append(return_type.html_link(dctx))
		end
		if with_closure then
			for c in closures do
				res.append(" ")
				if c.is_optional then res.append("[")
				if c.is_break then res.append("break ")
				res.append("!{c.name}")
				res.append(c.signature.to_html(dctx, false))
				if c.is_optional then res.append("]")
			end
		end
		return res.to_s
	end
end

redef class MMType
	# Htlm transcription of the type (with nested links)
	fun html_link(dctx: DocContext): String do return to_s
end

redef class MMTypeSimpleClass
	redef fun html_link(dctx) do return local_class.html_link(dctx)
end

redef class MMTypeGeneric
	redef fun html_link(dctx)
	do
		var res = new Buffer
		res.append(local_class.html_link(dctx))
		res.append("[")
		res.append(params[0].html_link(dctx))
		for i in [1..params.length[ do
			res.append(", ")
			res.append(params[i].html_link(dctx))
		end
		res.append("]")
		return res.to_s
	end
end

redef class MMTypeFormalParameter
	fun html_anchor: String
	do
		return "FT_{local_class}_{cmangle(name)}"
	end
	redef fun html_link(dctx)
	do
		return "<a href=\"#{html_anchor}\">{name}</a>"
	end
	fun full_documentation(dctx: DocContext, lc: MMLocalClass)
	do
		dctx.add("<article id=\"{html_anchor}\">\n")
		dctx.add("<h3 class=\"signature\">{name}: {bound.html_link(dctx)}</h3>\n")
		dctx.add("<div class=\"info\">")
		dctx.add("formal generic type")
		dctx.add("</div>")
		dctx.add("</article>")
	end
end

redef class MMNullableType
	redef fun html_link(dctx) do return "nullable " + as_notnull.html_link(dctx)
end

redef class MMVirtualType
	redef fun html_link(dctx) do return property.html_link(dctx)
end

var c = new DocContext
c.exec_cmd_line
