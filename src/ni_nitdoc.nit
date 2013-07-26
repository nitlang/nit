# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

module ni_nitdoc

import model_utils
import abstract_compiler

class NitdocContext
	private var toolcontext: ToolContext
	private var model: Model
	private var modelbuilder: ModelBuilder
	private var mainmodule: MModule
	private var class_hierarchy: POSet[MClass]
	private var arguments: Array[String]
	private var output_dir: nullable String
	private var dot_dir: nullable String
	private var share_dir: nullable String
	private var source: nullable String
	private var min_visibility: MVisibility

	private var opt_dir = new OptionString("Directory where doc is generated", "-d", "--dir")
	private var opt_source = new OptionString("What link for source (%f for filename, %l for first line, %L for last line)", "--source")
	private var opt_sharedir = new OptionString("Directory containing the nitdoc files", "--sharedir")
	private var opt_nodot = new OptionBool("Do not generate graphes with graphiviz", "--no-dot")
	private var opt_private: OptionBool = new OptionBool("Generate the private API", "--private")

	private var opt_custom_title: OptionString = new OptionString("Title displayed in the top of the Overview page and as suffix of all page names", "--custom-title")
	private var opt_custom_menu_items: OptionString = new OptionString("Items displayed in menu before the 'Overview' item (Each item must be enclosed in 'li' tags)", "--custom-menu-items")
	private var opt_custom_overview_text: OptionString = new OptionString("Text displayed as introduction of Overview page before the modules list", "--custom-overview-text")
	private var opt_custom_footer_text: OptionString = new OptionString("Text displayed as footer of all pages", "--custom-footer-text")

	init(toolcontext: ToolContext) do
		# We need a model to collect stufs
		self.toolcontext = toolcontext
		self.arguments = toolcontext.option_context.rest
		toolcontext.option_context.options.clear
		toolcontext.option_context.add_option(opt_dir)
		toolcontext.option_context.add_option(opt_source)
		toolcontext.option_context.add_option(opt_sharedir)
		toolcontext.option_context.add_option(opt_nodot)
		toolcontext.option_context.add_option(opt_private)
		toolcontext.option_context.add_option(opt_custom_title)
		toolcontext.option_context.add_option(opt_custom_footer_text)
		toolcontext.option_context.add_option(opt_custom_overview_text)
		toolcontext.option_context.add_option(opt_custom_menu_items)
		toolcontext.process_options
		process_options

		if arguments.length < 1 then
			toolcontext.option_context.usage
			exit(1)
		end

		model = new Model
		modelbuilder = new ModelBuilder(model, toolcontext)
		# Here we load an process all modules passed on the command line
		var mmodules = modelbuilder.parse_and_build(arguments)
		modelbuilder.full_propdef_semantic_analysis
		if mmodules.is_empty then return

		if mmodules.length == 1 then
			mainmodule = mmodules.first
		else
			# We need a main module, so we build it by importing all modules
			mainmodule = new MModule(model, null, "<main>", new Location(null, 0, 0, 0, 0))
			mainmodule.set_imported_mmodules(mmodules)
		end
		self.class_hierarchy = mainmodule.flatten_mclass_hierarchy
	end

	private fun process_options do
		if not opt_dir.value is null then
			output_dir = opt_dir.value
		else
			output_dir = "doc"
		end
		if not opt_sharedir.value is null then
			share_dir = opt_sharedir.value
		else
			var dir = "NIT_DIR".environ
			if dir.is_empty then
				dir = "{sys.program_name.dirname}/../share/nitdoc"
			else
				dir = "{dir}/share/nitdoc"
			end
			share_dir = dir
			if share_dir is null then
				print "Error: Cannot locate nitdoc share files. Uses --sharedir or envvar NIT_DIR"
				abort
			end
			dir = "{share_dir.to_s}/scripts/js-facilities.js"
			if share_dir is null then
				print "Error: Invalid nitdoc share files. Check --sharedir or envvar NIT_DIR"
				abort
			end

			if opt_private.value then
				min_visibility = none_visibility
			else
				min_visibility = protected_visibility
			end
		end
		source = opt_source.value
	end

	fun start do
		# Create destination dir if it's necessary
		if not output_dir.file_exists then output_dir.mkdir
		sys.system("cp -r {share_dir.to_s}/* {output_dir.to_s}/")
		self.dot_dir = null
		if not opt_nodot.value then self.dot_dir = output_dir.to_s
		overview
		fullindex
		modules
		classes
		quicksearch_list
	end

	private fun overview do
		var overviewpage = new NitdocOverview(self, dot_dir)
		overviewpage.save("{output_dir.to_s}/index.html")
	end

	private fun fullindex do
		var fullindex = new NitdocFullindex(self)
		fullindex.save("{output_dir.to_s}/full-index.html")
	end

	private fun modules do
		for mmodule in model.mmodules do
			if mmodule.name == "<main>" then continue
			var modulepage = new NitdocModule(mmodule, self, dot_dir)
			modulepage.save("{output_dir.to_s}/{mmodule.url}")
		end
	end

	private fun classes do
		for mclass in modelbuilder.model.mclasses do
			var classpage = new NitdocClass(mclass, self, dot_dir, source)
			classpage.save("{output_dir.to_s}/{mclass.url}")
		end
	end

	private fun quicksearch_list do
		var file = new OFStream.open("{output_dir.to_s}/quicksearch-list.js")
		var content = new Buffer
		content.append("var entries = \{ ")

		for mmodule in model.mmodules do
			content.append("\"{mmodule.name}\": [")
			content.append("\{txt: \"{mmodule.name}\", url:\"{mmodule.url}\" \},")
			content.append("],")
		end
		for mclass in model.mclasses do
			if mclass.visibility < min_visibility then continue
			content.append("\"{mclass.name}\": [")
			content.append("\{txt: \"{mclass.name}\", url:\"{mclass.url}\" \},")
			content.append("],")
		end
		var name2mprops = new HashMap[String, Set[MPropDef]]
		for mproperty in model.mproperties do
			if mproperty.visibility < min_visibility then continue
			if mproperty isa MAttribute then continue
			if not name2mprops.has_key(mproperty.name) then name2mprops[mproperty.name] = new HashSet[MPropDef]
			name2mprops[mproperty.name].add_all(mproperty.mpropdefs)
		end
		for mproperty, mpropdefs in name2mprops do
			content.append("\"{mproperty}\": [")
			for mpropdef in mpropdefs do
				content.append("\{txt: \"{mpropdef.full_name}\", url:\"{mpropdef.url}\" \},")
			end
			content.append("],")
		end

		content.append(" \};")
		file.write(content.to_s)
		file.close
	end

end

# Nitdoc base page
abstract class NitdocPage

	var dot_dir: nullable String
	var source: nullable String
	var ctx: NitdocContext

	init(ctx: NitdocContext) do
		self.ctx = ctx
	end

	fun append(str: String) do html.append(str)
	private var html = new Buffer

	protected fun head do
		append("<meta charset='utf-8'/>")
		append("<script type='text/javascript' src='scripts/jquery-1.7.1.min.js'></script>")
		append("<script type='text/javascript' src='quicksearch-list.js'></script>")
		append("<script type='text/javascript' src='scripts/js-facilities.js'></script>")
		append("<link rel='stylesheet' href='styles/main.css' type='text/css' media='screen'/>")
		var title = ""
		if ctx.opt_custom_title.value != null then
			title = " | {ctx.opt_custom_title.value.to_s}"
		end
		append("<title>{self.title}{title}</title>")
	end

	protected fun menu do
		if ctx.opt_custom_menu_items.value != null then
			append(ctx.opt_custom_menu_items.value.to_s)
		end
	end

	protected fun title: String is abstract

	protected fun header do
		append("<header>")
		append("<nav class='main'>")
		append("<ul>")
		menu
		append("<li id='liGitHub'>")
		append("<a class='btn' id='logGitHub'>")
		append("<img id='imgGitHub' src='resources/icons/github-icon.png' alt='GitHub'/>")
		append("</a>")
		append("<div class='popover bottom'>")
		append("<div class='arrow'>&nbsp;</div>")
		append("<div class='githubTitle'>")
		append("<h3>Github Sign In</h3>")
		append("</div>")
		append("<div>")
		append("<label id='lbloginGit'>Username</label>")
		append("<input id='loginGit' name='login' type='text'/>")
		append("<label id='logginMessage'>Hello ")
		append("<a id='githubAccount'><strong id='nickName'></strong></a>")
		append("</label>")
		append("</div>")
		append("<div>")
		append("<label id='lbpasswordGit'>Password</label>")
		append("<input id='passwordGit' name='password' type='password'/>")
		append("<div id='listBranches'>")
		append("<label id='lbBranches'>Branch</label>")
		append("<select class='dropdown' id='dropBranches' name='dropBranches' tabindex='1'></select>")
		append("</div>")
		append("</div>")
		append("<div>")
		append("<label id='lbrepositoryGit'>Repository</label>")
		append("<input id='repositoryGit' name='repository' type='text'/>")
		append("</div>")
		append("<div>")
		append("<label id='lbbranchGit'>Branch</label>")
		append("<input id='branchGit' name='branch' type='text'/>")
		append("</div>")
		append("<div>")
		append("<a id='signIn'>Sign In</a>")
		append("</div>")
		append("</div>")
		append("</li>")
		append("</ul>")
		append("</nav>")
		append("</header>")
	end

	protected fun content is abstract

	protected fun footer do
		if ctx.opt_custom_footer_text.value != null then
			append("<footer>{ctx.opt_custom_footer_text.value.to_s}</footer>")
		end
	end

	# Generate a clickable graphviz image using a dot content
	protected fun generate_dot(dot: String, name: String, alt: String) do
		var output_dir = dot_dir
		if output_dir == null then return
		var file = new OFStream.open("{output_dir}/{name}.dot")
		file.write(dot)
		file.close
		sys.system("\{ test -f {output_dir}/{name}.png && test -f {output_dir}/{name}.s.dot && diff {output_dir}/{name}.dot {output_dir}/{name}.s.dot >/dev/null 2>&1 ; \} || \{ cp {output_dir}/{name}.dot {output_dir}/{name}.s.dot && dot -Tpng -o{output_dir}/{name}.png -Tcmapx -o{output_dir}/{name}.map {output_dir}/{name}.s.dot ; \}")
		append("<article class='graph'>")
		append("<img src='{name}.png' usemap='#{name}' style='margin:auto' alt='{alt}'/>")
		append("</article>")
		var fmap = new IFStream.open("{output_dir}/{name}.map")
		append(fmap.read_all)
		fmap.close
	end

	# Add a (source) link for a given location
	protected fun show_source(l: Location): String
	do
		if source == null then
			return "({l.file.filename.simplify_path})"
		else
			# THIS IS JUST UGLY ! (but there is no replace yet)
			var x = source.split_with("%f")
			source = x.join(l.file.filename.simplify_path)
			x = source.split_with("%l")
			source = x.join(l.line_start.to_s)
			x = source.split_with("%L")
			source = x.join(l.line_end.to_s)
			return " (<a href=\"{source.to_s}\">source</a>)"
		end
	end

	# Render the page as a html string
	fun render: String do
		append("<!DOCTYPE html>")
		append("<head>")
		head
		append("</head>")
		append("<body>")
		header
		append("<div class='page'>")
		content
		append("</div>")
		footer
		append("</body>")
		return html.to_s
	end

	# Save html page in the specified file
	fun save(file: String) do
		var out = new OFStream.open(file)
		out.write(render)
		out.close
	end
end

# The overview page
class NitdocOverview
	super NitdocPage
	private var mbuilder: ModelBuilder
	private var mmodules = new Array[MModule]

	init(ctx: NitdocContext, dot_dir: nullable String) do
		super(ctx)
		self.mbuilder = ctx.modelbuilder
		self.dot_dir = dot_dir
		# get modules
		var mmodules = new HashSet[MModule]
		for mmodule in mbuilder.model.mmodules do
			if mmodule.name == "<main>" then continue
			var owner = mmodule.public_owner
			if owner != null then
				mmodules.add(owner)
			else
				mmodules.add(mmodule)
			end
		end
		# sort modules
		var sorter = new ComparableSorter[MModule]
		self.mmodules.add_all(mmodules)
		sorter.sort(self.mmodules)
	end

	redef fun title do return "Overview"

	redef fun menu do
		super
		append("<li class='current'>Overview</li>")
		append("<li><a href='full-index.html'>Full Index</a></li>")
	end

	redef fun content do
		append("<div class='content fullpage'>")
		var title = "Overview"
		if ctx.opt_custom_title.value != null then
			title = ctx.opt_custom_title.value.to_s
		end
		append("<h1>{title}</h1>")
		var text = ""
		if ctx.opt_custom_overview_text.value != null then
			text = ctx.opt_custom_overview_text.value.to_s
		end
		append("<article class='overview'>{text}</article>")
		append("<article class='overview'>")
		# module list
		append("<h2>Modules</h2>")
		append("<ul>")
		for mmodule in mmodules do
			if mbuilder.mmodule2nmodule.has_key(mmodule) then
				var amodule = mbuilder.mmodule2nmodule[mmodule]
				append("<li>{mmodule.link(mbuilder)}&nbsp;{amodule.short_comment}</li>")
			end
		end
		append("</ul>")
		# module graph
		process_generate_dot
		append("</article>")
		append("</div>")
	end

	private fun process_generate_dot do
		var op = new Buffer
		op.append("digraph dep \{ rankdir=BT; node[shape=none,margin=0,width=0,height=0,fontsize=10]; edge[dir=none,color=gray]; ranksep=0.2; nodesep=0.1;\n")
		for mmodule in mmodules do
			op.append("\"{mmodule.name}\"[URL=\"{mmodule.url}\"];\n")
			for imported in mmodule.in_importation.direct_greaters do
				if imported.direct_owner == null then
					op.append("\"{mmodule.name}\"->\"{imported.name}\";\n")
				end
			end
		end
		op.append("\}\n")
		generate_dot(op.to_s, "dep", "Modules hierarchy")
	end
end

# The full index page
class NitdocFullindex
	super NitdocPage

	init(ctx: NitdocContext) do
		super(ctx)
		self.dot_dir = null
	end

	redef fun title do return "Full Index"

	redef fun menu do
		super
		append("<li><a href='index.html'>Overview</a></li>")
		append("<li class='current'>Full Index</li>")
	end

	redef fun content do
		append("<div class='content fullpage'>")
		append("<h1>Full Index</h1>")
		module_column
		classes_column
		properties_column
		append("</div>")
	end

	# Add to content modules column
	private fun module_column do
		var sorter = new ComparableSorter[MModule]
		var sorted = new Array[MModule]
		for mmodule in ctx.modelbuilder.model.mmodule_importation_hierarchy do
			sorted.add(mmodule)
		end
		sorter.sort(sorted)
		append("<article class='modules filterable'>")
		append("<h2>Modules</h2>")
		append("<ul>")
		for mmodule in sorted do
			append("<li>{mmodule.link(ctx.modelbuilder)}</li>")
		end
		append("</ul>")
		append("</article>")
	end

	# Add to content classes modules
	private fun classes_column do
		var sorted = ctx.modelbuilder.model.mclasses
		var sorter = new ComparableSorter[MClass]
		sorter.sort(sorted)
		append("<article class='modules filterable'>")
		append("<h2>Classes</h2>")
		append("<ul>")
		for mclass in sorted do
			if mclass.visibility < ctx.min_visibility then continue
			append("<li>{mclass.link(ctx.modelbuilder)}</li>")
		end
		append("</ul>")
		append("</article>")
	end

	# Insert the properties column of fullindex page
	private fun properties_column do
		var sorted = ctx.modelbuilder.model.mproperties
		var sorter = new ComparableSorter[MProperty]
		sorter.sort(sorted)
		append("<article class='modules filterable'>")
		append("<h2>Properties</h2>")
		append("<ul>")
		for mproperty in sorted do
			if mproperty.visibility < ctx.min_visibility then continue
			if mproperty isa MAttribute then continue
			append("<li>{mproperty.intro.link(ctx.modelbuilder)} ({mproperty.intro.mclassdef.mclass.link(ctx.modelbuilder)})</li>")
		end
		append("</ul>")
		append("</article>")
	end

end

# A module page
class NitdocModule
	super NitdocPage

	private var mmodule: MModule
	private var mbuilder: ModelBuilder

	init(mmodule: MModule, ctx: NitdocContext, dot_dir: nullable String) do
		super(ctx)
		self.mmodule = mmodule
		self.mbuilder = ctx.modelbuilder
		self.dot_dir = dot_dir
	end

	redef fun title do
		if mbuilder.mmodule2nmodule.has_key(mmodule) then
			var nmodule = mbuilder.mmodule2nmodule[mmodule]
			return "{mmodule.name} module | {nmodule.short_comment}"
		else
			return "{mmodule.name} module"
		end
	end

	redef fun menu do
		super
		append("<li><a href='index.html'>Overview</a></li>")
		append("<li class='current'>{mmodule.name}</li>")
		append("<li><a href='full-index.html'>Full Index</a></li>")
	end

	redef fun content do
		sidebar
		append("<div class='content'>")
		append("<h1>{mmodule.name}</h1>")
		append("<div class='subtitle'>{mmodule.html_signature(mbuilder)}</div>")
		append(mmodule.html_full_comment(mbuilder))
		process_generate_dot
		classes
		properties
		append("</div>")
	end

	private fun process_generate_dot do
		var name = "dep_{mmodule.name}"
		var op = new Buffer
		op.append("digraph {name} \{ rankdir=BT; node[shape=none,margin=0,width=0,height=0,fontsize=10]; edge[dir=none,color=gray]; ranksep=0.2; nodesep=0.1;\n")
		for m in mmodule.in_importation.poset do
			if m.name == "<main>" then continue
			var public_owner = m.public_owner
			if public_owner == null then
				public_owner = m
				if m == mmodule then
					op.append("\"{m.name}\"[shape=box,margin=0.03];\n")
				else
					op.append("\"{m.name}\"[URL=\"{m.url}\"];\n")
				end
			end
			for imported in m.in_importation.direct_greaters do
				if imported.name == "<main>" then continue
				if imported.public_owner == null then
					op.append("\"{public_owner.name}\"->\"{imported.name}\";\n")
				end
			end
		end
		op.append("\}\n")
		generate_dot(op.to_s, name, "Dependency graph for module {mmodule.name}")
	end

	private fun sidebar do
		append("<div class='menu'>")
		append("<nav>")
		append("<h3>Module Hierarchy</h3>")
		var dependencies = new Array[MModule]
		for dep in mmodule.in_importation.greaters do
			if dep == mmodule or dep.public_owner != null then continue
			dependencies.add(dep)
		end
		if dependencies.length > 0 then
			append("<h4>All dependencies</h4>")
			display_module_list(dependencies)
		end
		var clients = new Array[MModule]
		for dep in mmodule.in_importation.smallers do
			if dep == mmodule or dep.public_owner != null then continue
			clients.add(dep)
		end
		if clients.length > 0 then
			append("<h4>All clients</h4>")
			display_module_list(clients)
		end
		append("</nav>")
		if mmodule.in_nesting.direct_greaters.length > 0 then
			append("<nav>")
			append("<h3>Nested Modules</h3>")
			display_module_list(mmodule.in_nesting.direct_greaters.to_a)
			append("</nav>")
		end
		append("</div>")
	end

	private fun display_module_list(list: Array[MModule]) do
		append("<ul>")
		var sorter = new ComparableSorter[MModule]
		sorter.sort(list)
		for m in list do append("<li>{m.link(mbuilder)}</li>")
		append("</ul>")
	end

	# display the class column
	private fun classes do
		var intro_mclasses = mmodule.intro_mclasses
		var redef_mclasses = mmodule.redef_mclasses
		var all_mclasses = new HashSet[MClass]
		for m in mmodule.in_nesting.greaters do
			all_mclasses.add_all(m.intro_mclasses)
			all_mclasses.add_all(m.redef_mclasses)
		end
		all_mclasses.add_all(intro_mclasses)
		all_mclasses.add_all(redef_mclasses)

		var sorted = new Array[MClass]
		sorted.add_all(all_mclasses)
		var sorter = new ComparableSorter[MClass]
		sorter.sort(sorted)
		append("<div class='module'>")
		append("<article class='classes filterable'>")
		append("<h2>Classes</h2>")
		append("<ul>")
		for c in sorted do
			if c.visibility < ctx.min_visibility then continue
			if redef_mclasses.has(c) and c.intro_mmodule.public_owner != mmodule then
				append("<li class='redef'>")
				append("<span title='refined in this module'>R </span>")
			else
				append("<li class='intro'>")
				append("<span title='introduced in this module'>I </span>")
			end
			append(c.link(mbuilder))
			append("</li>")
		end
		append("</ul>")
		append("</article>")
		append("</div>")
	end

	# display the property column
	private fun properties do
		# get properties
		var mpropdefs = new HashSet[MPropDef]
		for m in mmodule.in_nesting.greaters do
			for c in m.mclassdefs do mpropdefs.add_all(c.mpropdefs)
		end
		for c in mmodule.mclassdefs do mpropdefs.add_all(c.mpropdefs)
		var sorted = mpropdefs.to_a
		var sorter = new ComparableSorter[MPropDef]
		sorter.sort(sorted)
		# display properties in one column
		append("<article class='properties filterable'>")
		append("<h2>Properties</h2>")
		append("<ul>")
		for mprop in sorted do
			if mprop isa MAttributeDef then continue
			if mprop.mproperty.visibility < ctx.min_visibility then continue
			append(mprop.html_list_item(mbuilder))
		end
		append("</ul>")
		append("</article>")
	end
end

# A class page
class NitdocClass
	super NitdocPage

	private var mclass: MClass
	private var mbuilder: ModelBuilder
	private var vtypes = new HashSet[MVirtualTypeDef]
	private var consts = new HashSet[MMethodDef]
	private var meths = new HashSet[MMethodDef]
	private var inherited = new HashSet[MPropDef]

	init(mclass: MClass, ctx: NitdocContext, dot_dir: nullable String, source: nullable String) do
		super(ctx)
		self.mclass = mclass
		self.mbuilder = ctx.modelbuilder
		self.dot_dir = dot_dir
		self.source = source
		# load properties
		for mclassdef in mclass.mclassdefs do
			for mpropdef in mclassdef.mpropdefs do
				if mpropdef.mproperty.visibility < ctx.min_visibility then continue
				if mpropdef isa MVirtualTypeDef then vtypes.add(mpropdef)
				if mpropdef isa MMethodDef then
					if mpropdef.mproperty.is_init then
						consts.add(mpropdef)
					else
						meths.add(mpropdef)
					end
				end
			end
		end
		# get inherited properties
		for mprop in mclass.inherited_mproperties do
			var mpropdef = mprop.intro
			if mprop.visibility < ctx.min_visibility then continue
			if mpropdef isa MVirtualTypeDef then vtypes.add(mpropdef)
			if mpropdef isa MMethodDef then
				if mpropdef.mproperty.is_init then
					consts.add(mpropdef)
				else
					meths.add(mpropdef)
				end
			end
			inherited.add(mpropdef)
		end
	end

	redef fun title do
		var nclass = mbuilder.mclassdef2nclassdef[mclass.intro]
		if nclass isa AStdClassdef then
			return "{mclass.name} class | {nclass.short_comment}"
		else
			return "{mclass.name} class"
		end
	end

	redef fun menu do
		super
		append("<li><a href='index.html'>Overview</a></li>")
		var public_owner = mclass.public_owner
		if public_owner is null then
			append("<li>{mclass.intro_mmodule.link(mbuilder)}</li>")
		else
			append("<li>{public_owner.link(mbuilder)}</li>")
		end
		append("<li class='current'>{mclass.name}</li>")
		append("<li><a href='full-index.html'>Full Index</a></li>")
	end

	redef fun content do
		append("<div class='menu'>")
		properties_column
		inheritance_column
		append("</div>")
		append("<div class='content'>")
		class_doc
		append("</div>")
	end

	private fun properties_column do
		var sorter = new ComparableSorter[MPropDef]
		append("<nav class='properties filterable'>")
		append("<h3>Properties</h3>")
		# virtual types
		if vtypes.length > 0 then
			var vts = new Array[MVirtualTypeDef]
			vts.add_all(vtypes)
			sorter.sort(vts)
			append("<h4>Virtual Types</h4>")
			append("<ul>")
			for mprop in vts do
				append(mprop.html_sidebar_item(self))
			end
			append("</ul>")
		end
		# constructors
		if consts.length > 0 then
			var cts = new Array[MMethodDef]
			cts.add_all(consts)
			sorter.sort(cts)
			append("<h4>Constructors</h4>")
			append("<ul>")
			for mprop in cts do
				append(mprop.html_sidebar_item(self))
			end
			append("</ul>")
		end
		# methods
		if meths.length > 0 then
			var mts = new Array[MMethodDef]
			mts.add_all(meths)
			sorter.sort(mts)
			append("<h4>Methods</h4>")
			append("<ul>")
			for mprop in mts do
				if mclass.name != "Object" and mprop.mproperty.intro_mclassdef.mclass.name == "Object" and mprop.mproperty.visibility <= protected_visibility then continue
				append(mprop.html_sidebar_item(self))
			end
			append("</ul>")
		end
		append("</nav>")
	end

	private fun inheritance_column do
		var sorted = new Array[MClass]
		var sorterp = new ComparableSorter[MClass]
		append("<nav>")
		append("<h3>Inheritance</h3>")
		var greaters = mclass.in_hierarchy(ctx.mainmodule).greaters.to_a
		if greaters.length > 1 then
			ctx.mainmodule.linearize_mclasses(greaters)
			append("<h4>Superclasses</h4>")
			append("<ul>")
			for sup in greaters do
				if sup == mclass then continue
				append("<li>{sup.link(mbuilder)}</li>")
			end
			append("</ul>")
		end
		var smallers = mclass.in_hierarchy(ctx.mainmodule).smallers.to_a
		var direct_smallers = mclass.in_hierarchy(ctx.mainmodule).direct_smallers.to_a
		if smallers.length <= 1 then
			append("<h4>No Known Subclasses</h4>")
		else if smallers.length <= 100 then
			ctx.mainmodule.linearize_mclasses(smallers)
			append("<h4>Subclasses</h4>")
			append("<ul>")
			for sub in smallers do
				if sub == mclass then continue
				append("<li>{sub.link(mbuilder)}</li>")
			end
			append("</ul>")
		else if direct_smallers.length <= 100 then
			ctx.mainmodule.linearize_mclasses(direct_smallers)
			append("<h4>Direct Subclasses Only</h4>")
			append("<ul>")
			for sub in direct_smallers do
				if sub == mclass then continue
				append("<li>{sub.link(mbuilder)}</li>")
			end
			append("</ul>")
		else
			append("<h4>Too much Subclasses to list</h4>")
		end
		append("</nav>")
	end

	private fun class_doc do
		# title
		append("<h1>{mclass.html_signature}</h1>")
		append("<div class='subtitle info'>{mclass.html_full_signature(mbuilder)}")

		append("</div>")
		# comment
		var nclass = mbuilder.mclassdef2nclassdef[mclass.intro]
		append("<div style=\"float: right;\"><a id=\"lblDiffCommit\"></a></div>")
		append("<section class='description'>")
		if nclass isa AStdClassdef and not nclass.comment.is_empty then append("<pre class=\"text_label\" title=\"122\" name=\"\" tag=\"{mclass.mclassdefs.first.location.to_s}\" type=\"2\">{nclass.comment}</pre><textarea id=\"fileContent\" class=\"edit\" cols=\"76\" rows=\"1\" style=\"display: none;\"></textarea><a id=\"cancelBtn\" style=\"display: none;\">Cancel</a><a id=\"commitBtn\" style=\"display: none;\">Commit</a><pre id=\"preSave\" class=\"text_label\" type=\"2\"></pre>")
		process_generate_dot
		append("</section>")
		# concerns
		var concern2meths = new ArrayMap[MModule, Array[MMethodDef]]
		var sorted_meths = new Array[MMethodDef]
		var sorted = new Array[MModule]
		sorted_meths.add_all(meths)
		ctx.mainmodule.linearize_mpropdefs(sorted_meths)
		for meth in meths do
			if inherited.has(meth) then continue
			var mmodule = meth.mclassdef.mmodule
			if not concern2meths.has_key(mmodule) then
				sorted.add(mmodule)
				concern2meths[mmodule] = new Array[MMethodDef]
			end
			concern2meths[mmodule].add(meth)
		end
		var sections = new ArrayMap[MModule, Array[MModule]]
		for mmodule in concern2meths.keys do
			var owner = mmodule.public_owner
			if owner == null then owner = mmodule
			if not sections.has_key(owner) then sections[owner] = new Array[MModule]
			if owner != mmodule then sections[owner].add(mmodule)
		end
		append("<section class='concerns'>")
		append("<h2 class='section-header'>Concerns</h2>")
		append("<ul>")
		for owner, mmodules in sections do
			var nowner = mbuilder.mmodule2nmodule[owner]
			append("<li>")
			if nowner.short_comment.is_empty then
				append("<a href=\"#{owner.anchor}\">{owner.name}</a>")
			else
				append("<a href=\"#{owner.anchor}\">{owner.name}</a>: {nowner.short_comment}")
			end
			if not mmodules.is_empty then
				append("<ul>")
				for mmodule in mmodules do
					var nmodule = mbuilder.mmodule2nmodule[mmodule]
					if nmodule.short_comment.is_empty then
						append("<li><a href=\"#{mmodule.anchor}\">{mmodule.name}</a></li>")
					else
						append("<li><a href=\"#{mmodule.anchor}\">{mmodule.name}</a>: {nmodule.short_comment}</li>")
					end
				end
				append("</ul>")
			end
			append("</li>")
		end
		append("</ul>")
		append("</section>")
		# properties
		var prop_sorter = new ComparableSorter[MPropDef]
		var sorterprop = new ComparableSorter[MProperty]
		var sorterc = new ComparableSorter[MClass]
		var lmmodule = new List[MModule]
		# virtual and formal types
		var local_vtypes = new Array[MVirtualTypeDef]
		for vt in vtypes do if not inherited.has(vt) then local_vtypes.add(vt)
		if local_vtypes.length > 0 or mclass.arity > 0 then
			append("<section class='types'>")
			append("<h2>Formal and Virtual Types</h2>")
			# formal types
			if mclass.arity > 0 and nclass isa AStdClassdef then
				for ft, bound in mclass.parameter_types do
					append("<article id='FT_{ft}'>")
					append("<h3 class='signature'>{ft}: {bound.link(mbuilder)}</h3>")
					append("<div class=\"info\">formal generic type</div>")
					append("</article>")
				end
			end
			# virtual types
			prop_sorter.sort(local_vtypes)
			for prop in local_vtypes do append(prop.html_full_desc(self))
			append("</section>")
		end
		# constructors
		var local_consts = new Array[MMethodDef]
		for const in consts do if not inherited.has(const) then local_consts.add(const)
		prop_sorter.sort(local_consts)
		if local_consts.length > 0 then
			append("<section class='constructors'>")
			append("<h2 class='section-header'>Constructors</h2>")
			for prop in local_consts do append(prop.html_full_desc(self))
			append("</section>")
		end
		# methods
		if not concern2meths.is_empty then
			append("<section class='methods'>")
			append("<h2 class='section-header'>Methods</h2>")
			for owner, mmodules in sections do
				append("<a id=\"{owner.anchor}\"></a>")
				if owner != mclass.intro_mmodule and owner != mclass.public_owner then
					var nowner = mbuilder.mmodule2nmodule[owner]
					append("<h3 class=\"concern-toplevel\">Methods refined in {owner.link(mbuilder)}</h3>")
					if nowner.short_comment.is_empty then
						append("<p class=\"concern-doc\">{owner.link(mbuilder)}</p>")
					else
						append("<p class=\"concern-doc\">{owner.link(mbuilder)}: {nowner.short_comment}</p>")
					end
				end
				if concern2meths.has_key(owner) then
					var mmethods = concern2meths[owner]
					prop_sorter.sort(mmethods)
					for prop in mmethods do append(prop.html_full_desc(self))
				end
				for mmodule in mmodules do
					append("<a id=\"{mmodule.anchor}\"></a>")
					var nmodule = mbuilder.mmodule2nmodule[mmodule]
					if mmodule != mclass.intro_mmodule and mmodule != mclass.public_owner then
						if nmodule.short_comment.is_empty then
							append("<p class=\"concern-doc\">{mmodule.link(mbuilder)}</p>")
						else
							append("<p class=\"concern-doc\">{mmodule.link(mbuilder)}: {nmodule.short_comment}</p>")
						end
					end
					var mmethods = concern2meths[mmodule]
					prop_sorter.sort(mmethods)
					for prop in mmethods do append(prop.html_full_desc(self))
				end
			end
		end
		# inherited properties
		if inherited.length > 0 then
			var sorted_inherited = new Array[MPropDef]
			sorted_inherited.add_all(inherited)
			ctx.mainmodule.linearize_mpropdefs(sorted_inherited)
			var classes = new ArrayMap[MClass, Array[MPropDef]]
			for mmethod in sorted_inherited.reversed do
				var mclass = mmethod.mclassdef.mclass
				if not classes.has_key(mclass) then classes[mclass] = new Array[MPropDef]
				classes[mclass].add(mmethod)
			end
			append("<h3>Inherited Properties</h3>")
			for c, mmethods in classes do
				prop_sorter.sort(mmethods)
				append("<p>Defined in {c.link(mbuilder)}: ")
				for i in [0..mmethods.length[ do
					var mmethod = mmethods[i]
					append(mmethod.link(mbuilder))
					if i <= mmethods.length - 1 then append(", ")
				end
				append("</p>")
			end
		end
		append("</section>")
	end

	private fun process_generate_dot do
		var pe = ctx.class_hierarchy[mclass]
		var cla = new HashSet[MClass]
		var sm = new HashSet[MClass]
		var sm2 = new HashSet[MClass]
		sm.add(mclass)
		while cla.length + sm.length < 10 and sm.length > 0 do
			cla.add_all(sm)
			sm2.clear
			for x in sm do
				sm2.add_all(pe.poset[x].direct_smallers)
			end
			var t = sm
			sm = sm2
			sm2 = t
		end
		cla.add_all(pe.greaters)

		var op = new Buffer
		var name = "dep_{mclass.name}"
		op.append("digraph {name} \{ rankdir=BT; node[shape=none,margin=0,width=0,height=0,fontsize=10]; edge[dir=none,color=gray]; ranksep=0.2; nodesep=0.1;\n")
		for c in cla do
			if c == mclass then
				op.append("\"{c.name}\"[shape=box,margin=0.03];\n")
			else
				op.append("\"{c.name}\"[URL=\"{c.url}\"];\n")
			end
			for c2 in pe.poset[c].direct_greaters do
				if not cla.has(c2) then continue
				op.append("\"{c.name}\"->\"{c2.name}\";\n")
			end
			if not pe.poset[c].direct_smallers.is_empty then
				var others = true
				for c2 in pe.poset[c].direct_smallers do
					if cla.has(c2) then others = false
				end
				if others then
					op.append("\"{c.name}...\"[label=\"\"];\n")
					op.append("\"{c.name}...\"->\"{c.name}\"[style=dotted];\n")
				end
			end
		end
		op.append("\}\n")
		generate_dot(op.to_s, name, "Dependency graph for class {mclass.name}")
	end
end

#
# Model redefs
#

redef class MModule
	super Comparable
	redef type OTHER: MModule
	redef fun <(other: OTHER): Bool do return self.name < other.name

	# Get the list of all methods in a module
	fun imported_methods: Set[MMethod] do
		var methods = new HashSet[MMethod]
		for mclass in imported_mclasses do
			for method in mclass.intro_methods do
				methods.add(method)
			end
		end
		return methods
	end

	# Get the list aof all refined methods in a module
	fun redef_methods: Set[MMethod] do
		var methods = new HashSet[MMethod]
		for mclass in redef_mclasses do
			for method in mclass.intro_methods do
				methods.add(method)
			end
		end
		return methods
	end

	# URL to nitdoc page
	fun url: String do
		var res = new Buffer
		res.append("module_")
		var mowner = public_owner
		if mowner != null then
			res.append("{public_owner.name}_")
		end
		res.append("{self.name}.html")
		return res.to_s
	end

	# html anchor id to the module in a nitdoc page
	fun anchor: String do
		var res = new Buffer
		res.append("MOD_")
		var mowner = public_owner
		if mowner != null then
			res.append("{public_owner.name}_")
		end
		res.append(self.name)
		return res.to_s
	end

	# Return a link (html a tag) to the nitdoc module page
	fun link(mbuilder: ModelBuilder): String do
		if mbuilder.mmodule2nmodule.has_key(self) then
			return "<a href='{url}' title='{mbuilder.mmodule2nmodule[self].short_comment}'>{name}</a>"
		else
			return "<a href='{url}'>{name}</a>"
		end
	end

	# Return the module signature decorated with html
	fun html_signature(mbuilder: ModelBuilder): String do
		return "<span>module {html_full_namespace(mbuilder)}</span>"
	end

	# Return the module full namespace decorated with html
	fun html_full_namespace(mbuilder: ModelBuilder): String do
		var res = new Buffer
		res.append("<span>")
		var mowner = public_owner
		if mowner != null then
			res.append(public_owner.html_namespace(mbuilder))
			res.append("::")
		end
		res.append(self.link(mbuilder))
		res.append("</span>")
		return res.to_s
	end

	# Return the module full namespace decorated with html
	fun html_namespace(mbuilder: ModelBuilder): String do
		var res = new Buffer
		res.append("<span>")
		var mowner = public_owner
		if mowner != null then
			res.append(public_owner.html_namespace(mbuilder))
		else
			res.append(self.link(mbuilder))
		end
		res.append("</span>")
		return res.to_s
	end

	# Return the full comment of the module decorated with html
	fun html_full_comment(mbuilder: ModelBuilder): String do
		var res = new Buffer
		if mbuilder.mmodule2nmodule.has_key(self) then
			res.append("<div id='description'>")
			res.append("<pre class='text_label'>{mbuilder.mmodule2nmodule[self].comment}</pre>")
			res.append("<textarea class='edit' rows='1' cols='76' id='fileContent'></textarea>")
			res.append("<a id='cancelBtn'>Cancel</a>")
			res.append("<a id='commitBtn'>Commit</a>")
			res.append("<pre class='text_label' id='preSave' type='2'></pre>")
			res.append("</div>")
		end
		return res.to_s
	end
end

redef class MClass
	super Comparable
	redef type OTHER: MClass
	redef fun <(other: OTHER): Bool do return self.name < other.name

	# Return the module signature decorated with html
	fun html_full_signature(mbuilder: ModelBuilder): String do
		var res = new Buffer
		if visibility < public_visibility then res.append("{visibility.to_s} ")
		res.append("{kind} {html_namespace(mbuilder)}")
		return res.to_s
	end

	# Add type parameters
	fun html_signature: String do
		if arity > 0 then
			return "{name}[{intro.parameter_names.join(", ")}]"
		else
			return name
		end
	end

	# Return a link (html a tag) to the nitdoc class page
	fun link(mbuilder: ModelBuilder): String do
		if mbuilder.mclassdef2nclassdef.has_key(intro) then
			var nclass = mbuilder.mclassdef2nclassdef[intro]
			if nclass isa AStdClassdef then
				return "<a href='{url}' title=\"{nclass.short_comment}\">{html_signature}</a>"
			else
				return "<a href='{url}'>{html_signature}</a>"
			end
		else
			return "<a href='{url}'>{html_signature}</a>"
		end
	end

	# Return the class namespace decorated with html
	fun html_namespace(mbuilder: ModelBuilder): String do
		var res = new Buffer
		res.append(intro_mmodule.html_namespace(mbuilder))
		res.append("::<span>{self.link(mbuilder)}</span>")
		return res.to_s
	end

	fun url: String do
		return "class_{public_owner}_{c_name}.html"
	end

	# Escape name for html output
	redef fun name do return super.html_escape
end

redef class MProperty
	super Comparable
	redef type OTHER: MProperty
	redef fun <(other: OTHER): Bool do return self.name < other.name

	# Return the property namespace decorated with html
	fun html_namespace(mbuilder: ModelBuilder): String do
		return "{intro_mclassdef.mclass.html_namespace(mbuilder)}::<span>{intro.link(mbuilder)}</span>"
	end

	# Escape name for html output
	redef fun name do return super.html_escape
end

redef class MType
	fun link(mbuilder: ModelBuilder): String is abstract
end

redef class MClassType
	redef fun link(mbuilder) do return mclass.link(mbuilder)
end

redef class MNullableType
	redef fun link(mbuilder) do return "nullable {mtype.link(mbuilder)}"
end

redef class MGenericType
	redef fun link(mbuilder) do
		var res = new Buffer
		res.append("<a href='{mclass.url}'>{mclass.name}</a>[")
		for i in [0..arguments.length[ do
			res.append(arguments[i].link(mbuilder))
			if i < arguments.length - 1 then res.append(", ")
		end
		res.append("]")
		return res.to_s
	end
end

redef class MParameterType
	redef fun link(mbuilder) do
		var name = mclass.intro.parameter_names[rank]
		return "<a href='{mclass.url}#FT_{name}' title='formal type'>{name}</a>"
	end
end

redef class MVirtualType
	redef fun link(mbuilder) do return mproperty.intro.link(mbuilder)
end

redef class MClassDef
	# Return the classdef namespace decorated with html
	fun html_namespace(mbuilder: ModelBuilder): String do
		var res = new Buffer
		res.append(mmodule.html_full_namespace(mbuilder))
		res.append("::<span>{self.mclass.link(mbuilder)}</span>")
		return res.to_s
	end
end

redef class MPropDef
	super Comparable
	redef type OTHER: MPropDef
	redef fun <(other: OTHER): Bool do return self.mproperty.name < other.mproperty.name

	fun url: String do return "{mclassdef.mclass.url}#{anchor}"
	fun anchor: String do return "PROP_{mclassdef.mclass.public_owner.name}_{c_name}"

	# Return a link (html a tag) to the nitdoc class page
	fun link(mbuilder: ModelBuilder): String do
		if mbuilder.mpropdef2npropdef.has_key(self) then
			var nprop = mbuilder.mpropdef2npropdef[self]
			return "<a href=\"{url}\" title=\"{nprop.short_comment}\">{mproperty.name}</a>"
		else
			return "<a href=\"{url}\">{mproperty.name}</a>"
		end
	end

	# Return a list item for the mpropdef
	fun html_list_item(mbuilder: ModelBuilder): String do
		var res = new Buffer
		if is_intro then
			res.append("<li class='intro'>")
			res.append("<span title='introduction'>I</span>&nbsp;{link(mbuilder)} ({mclassdef.mclass.link(mbuilder)})")
			res.append("</li>")
		else
			res.append("<li class='redef'>")
			res.append("<span title='redefinition'>R</span>&nbsp;{link(mbuilder)} ({mclassdef.mclass.link(mbuilder)})")
			res.append("</li>")
		end
		return res.to_s
	end

	# Return a list item for the mpropdef
	fun html_sidebar_item(page: NitdocClass): String do
		var res = new Buffer
		if is_intro and mclassdef.mclass == page.mclass then
			res.append("<li class='intro'>")
			res.append("<span title='Introduced'>I</span>")
		else if is_intro and mclassdef.mclass != page.mclass then
			res.append("<li class='inherit'>")
			res.append("<span title='Inherited'>H</span>")
		else
			res.append("<li class='redef'>")
			res.append("<span title='Redefined'>R</span>")
		end
		res.append(link(page.mbuilder))
		res.append("</li>")
		return res.to_s
	end

	fun html_full_desc(page: NitdocClass): String is abstract
	fun html_info(page: NitdocClass): String is abstract

	fun full_name: String do
		return "{mclassdef.mclass.public_owner.name}::{mclassdef.mclass.name}::{mproperty.name}"
	end

	fun html_inheritance(page: NitdocClass): String do
		var res = new Buffer
		# definitions block
		res.append("<p class='info'>")
		page.ctx.mainmodule.linearize_mpropdefs(mproperty.mpropdefs)
		var previous_defs = new Array[MPropDef]
		var next_defs = new Array[MPropDef]
		var self_passed = false
		for def in mproperty.mpropdefs do
			if def == self then
				self_passed = true
				continue
			end
			if not self_passed then
				if def.mclassdef.mclass.in_hierarchy(page.ctx.mainmodule) < page.mclass then continue
				if def.is_intro then continue
				previous_defs.add(def)
			else
				if page.mclass.in_hierarchy(page.ctx.mainmodule) < def.mclassdef.mclass then continue
				next_defs.add(def)
			end
		end
		var source = ""
		if page.mbuilder.mpropdef2npropdef.has_key(self) then
			source = " {page.show_source(page.mbuilder.mpropdef2npropdef[self].location)}"
		end
		res.append("defined by {mclassdef.mmodule.html_full_namespace(page.mbuilder)}{source}")
		if not is_intro then
			source = ""
			if page.mbuilder.mpropdef2npropdef.has_key(mproperty.intro) then 
				source = " {page.show_source(page.mbuilder.mpropdef2npropdef[mproperty.intro].location)}"
			end
			res.append(", introduced by {mproperty.intro.mclassdef.mclass.link(page.mbuilder)}{source}")
		end
		if not previous_defs.is_empty then
			res.append(", inherited from ")
			for i in [0..previous_defs.length[ do
				var def = previous_defs[i]
				source = ""
				if page.mbuilder.mpropdef2npropdef.has_key(def) then 
					source = " {page.show_source(page.mbuilder.mpropdef2npropdef[def].location)}"
				end
				res.append("{def.mclassdef.mclass.link(page.mbuilder)}{source}")
				if i < previous_defs.length - 1 then res.append(", ")
			end
		end
		if not next_defs.is_empty then
			res.append(", redefined by ")
			for i in [0..next_defs.length[ do
				var def = next_defs[i]
				source = ""
				if page.mbuilder.mpropdef2npropdef.has_key(def) then 
					source = " {page.show_source(page.mbuilder.mpropdef2npropdef[def].location)}"
				end
				 res.append("{def.mclassdef.mclass.link(page.mbuilder)}{source}")
				 if i < next_defs.length - 1 then res.append(", ")
			end
		end
		res.append(".</p>")
		return res.to_s
	end
end

redef class MMethodDef
	redef fun html_full_desc(page) do
		if not page.mbuilder.mpropdef2npropdef.has_key(self) then
			return ""
		end
		var res = new Buffer
		var mprop = mproperty
		var nprop = page.mbuilder.mpropdef2npropdef[self]
		var classes = new Array[String]
		var is_redef = mprop.intro_mclassdef.mclass != page.mclass
		classes.add("fun")
		if mprop.is_init then classes.add("init")
		if is_redef then classes.add("redef")
		classes.add(mproperty.visibility.to_s)
		res.append("<article class='{classes.join(" ")}' id='{anchor}'>")
		if nprop isa AAttrPropdef then
			if nprop.mreadpropdef == self then
				res.append("<h3 class='signature'>{mprop.name}: {nprop.html_signature(page.mbuilder)}</h3>")
			else
				res.append("<h3 class='signature'>{mprop.name}(value: {nprop.html_signature(page.mbuilder)})</h3>")
			end
		else
			var intro_nprop = page.mbuilder.mpropdef2npropdef[mprop.intro]
			res.append("<h3 class='signature'>{mprop.name}{intro_nprop.html_signature(page.mbuilder)}</h3>")
		end
		res.append(html_info(page))
		res.append("<div class='description'>")
		if nprop.comment == "" then
			res.append("<a class=\"newComment\" title=\"32\" tag=\"\">New Comment</a>")
		else
			res.append("<pre class=\"text_label\" title=\"\" name=\"\" tag=\"\" type=\"1\">{nprop.comment}</pre>")
		end
		res.append("<textarea id=\"fileContent\" class=\"edit\" cols=\"76\" rows=\"1\" style=\"display: none;\"></textarea><a id=\"cancelBtn\" style=\"display: none;\">Cancel</a><a id=\"commitBtn\" style=\"display: none;\">Commit</a><pre id=\"preSave\" class=\"text_label\" type=\"2\"></pre>")
		res.append(html_inheritance(page))
		res.append("</div>")
		res.append("</article>")
		return res.to_s
	end

	redef fun html_info(page) do
		var res = new Buffer
		res.append("<div class='info'>")
		if mproperty.visibility < public_visibility then res.append("{mproperty.visibility.to_s} ")
		if mproperty.intro_mclassdef.mclass != page.mclass then res.append("redef ")
		res.append("fun {mproperty.html_namespace(page.mbuilder)}")
		res.append("</div>")
		res.append("<div style=\"float: right;\"><a id=\"lblDiffCommit\"></a></div>")
		return res.to_s
	end
end

redef class MVirtualTypeDef
	redef fun html_full_desc(page) do
		var res = new Buffer
		var mprop = mproperty
		var is_redef = mprop.intro_mclassdef.mclass != page.mclass
		var classes = new Array[String]
		classes.add("type")
		if is_redef then classes.add("redef")
		classes.add(mproperty.visibility.to_s)
		res.append("<article class='{classes.join(" ")}' id='{anchor}'>")
		res.append("<h3 class='signature'>{mprop.name}: {bound.link(page.mbuilder)}</h3>")
		res.append(html_info(page))
		res.append("<div class='description'>")

		if page.mbuilder.mpropdef2npropdef.has_key(self) and page.mbuilder.mpropdef2npropdef[self].comment != "" then
			var nprop = page.mbuilder.mpropdef2npropdef[self]
			res.append("<pre class=\"text_label\" title=\"\" name=\"\" tag=\"\" type=\"1\">{nprop.comment}</pre>")
		else
			res.append("<a class=\"newComment\" title=\"32\" tag=\"\">New Comment</a>")
		end
		res.append("<textarea id=\"fileContent\" class=\"edit\" cols=\"76\" rows=\"1\" style=\"display: none;\"></textarea><a id=\"cancelBtn\" style=\"display: none;\">Cancel</a><a id=\"commitBtn\" style=\"display: none;\">Commit</a><pre id=\"preSave\" class=\"text_label\" type=\"2\"></pre>")
		res.append(html_inheritance(page))
		res.append("</div>")
		res.append("</article>")
		return res.to_s
	end

	redef fun html_info(page) do
		var res = new Buffer
		res.append("<div class='info'>")
		if mproperty.intro_mclassdef.mclass != page.mclass then res.append("redef ")
		res.append("type {mproperty.html_namespace(page.mbuilder)}")
		res.append("</div>")
		res.append("<div style=\"float: right;\"><a id=\"lblDiffCommit\"></a></div>")
		return res.to_s
	end
end

#
# Nodes redefs
#

redef class AModule
	private fun comment: String do
		var ret = new Buffer
		if n_moduledecl == null or n_moduledecl.n_doc == null then return ""
		for t in n_moduledecl.n_doc.n_comment do
			ret.append(t.text.substring_from(1))
		end
		return ret.to_s.html_escape
	end

	private fun short_comment: String do
		var ret = new Buffer
		if n_moduledecl != null and n_moduledecl.n_doc != null then
			ret.append(n_moduledecl.n_doc.n_comment.first.text.substring_from(2).replace("\n", ""))
		end
		return ret.to_s.html_escape
	end
end

redef class AStdClassdef
	private fun comment: String do
		var ret = new Buffer
		if n_doc != null then
			for t in n_doc.n_comment do ret.append(t.text.substring_from(1))
		end
		return ret.to_s.html_escape
	end

	private fun short_comment: String do
		var ret = new Buffer
		if n_doc != null then ret.append(n_doc.n_comment.first.text.substring_from(2).replace("\n", ""))
		return ret.to_s.html_escape
	end
end

redef class APropdef
	private fun short_comment: String is abstract
	private fun html_signature(mbuilder: ModelBuilder): String is abstract
	private fun comment: String is abstract
end

redef class AAttrPropdef
	redef fun short_comment do
		var ret = new Buffer
		if n_doc != null then ret.append(n_doc.n_comment.first.text.substring_from(2).replace("\n", ""))
		return ret.to_s.html_escape
	end

	redef private fun comment: String do
		var ret = new Buffer
		if n_doc != null then
			for t in n_doc.n_comment do ret.append(t.text.substring_from(1))
		end
		return ret.to_s.html_escape
	end

	redef fun html_signature(mbuilder) do
		if n_type != null then return n_type.mtype.link(mbuilder)
		return ""
	end
end

redef class AMethPropdef
	redef fun short_comment do
		var ret = new Buffer
		if n_doc != null then ret.append(n_doc.n_comment.first.text.substring_from(2).replace("\n", ""))
		return ret.to_s.html_escape
	end

	redef private fun comment: String do
		var ret = new Buffer
		if n_doc != null then
			for t in n_doc.n_comment do ret.append(t.text.substring_from(1))
		end
		return ret.to_s.html_escape
	end

	redef fun html_signature(mbuilder) do
		if n_signature != null then return n_signature.to_html(mbuilder)
		return ""
	end
end

redef class ATypePropdef
	redef fun short_comment do
		var ret = new Buffer
		if n_doc != null then ret.append(n_doc.n_comment.first.text.substring_from(2).replace("\n", ""))
		return ret.to_s.html_escape
	end

	redef private fun comment: String do
		var ret = new Buffer
		if n_doc != null then
			for t in n_doc.n_comment do ret.append(t.text.substring_from(1))
		end
		return ret.to_s.html_escape
	end

	redef fun html_signature(mbuilder) do
		return mpropdef.bound.link(mbuilder)
	end
end

redef class ASignature
	fun to_html(mbuilder: ModelBuilder): String do
		#TODO closures
		var res = new Buffer
		if not n_params.is_empty then
			res.append("(")
			for i in [0..n_params.length[ do
				res.append(n_params[i].to_html(mbuilder))
				if i < n_params.length - 1 then res.append(", ")
			end
			res.append(")")
		end
		if n_type != null and n_type.mtype.link(mbuilder) != "" then res.append(": {n_type.mtype.link(mbuilder)}")
		return res.to_s
	end
end

redef class AParam
	fun to_html(mbuilder: ModelBuilder): String do
		var ret = "{n_id.text}"
		if n_type != null then
			ret = "{ret}: {n_type.mtype.link(mbuilder)}"
			if n_dotdotdot != null then ret = "{ret}..."
		end
		return ret
	end
end

# Create a tool context to handle options and paths
var toolcontext = new ToolContext

# Here we launch the nit index
var nitdoc = new NitdocContext(toolcontext)
nitdoc.start
