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

# Basic catalog generator for Nit packages
#
# See: <http://nitlanguage.org/catalog/>
#
# The tool scans packages and generates the HTML files of a catalog.
#
# See `catalog` for details
module nitcatalog

import loader # Scan&load packages, groups and modules
import catalog

import doc::templates::html_model

# A HTML page in a catalog
#
# This is just a template with the header pre-filled and the footer injected at rendering.
# Therefore, once instantiated, the content can just be added to it.
class CatalogPage
	super Template

	# The associated catalog, used to groups options and other global data
	var catalog: Catalog

	# Placeholder to include additional things before the `</head>`.
	var more_head = new Template

	# Relative path to the root directory (with the index file).
	#
	# Use "" for pages in the root directory
	# Use ".." for pages in a subdirectory
	var rootpath: String

	redef init
	do
		add """
<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<link rel="stylesheet" media="all" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.1/css/bootstrap.min.css">
	<link rel="stylesheet" media="all" href="{{{rootpath / "style.css"}}}">
"""
		add more_head

		add """
</head>
<body>
<div class='container-fluid'>
 <div class='row'>
  <nav id='topmenu' class='navbar navbar-default navbar-fixed-top' role='navigation'>
   <div class='container-fluid'>
    <div class='navbar-header'>
     <button type='button' class='navbar-toggle' data-toggle='collapse' data-target='#topmenu-collapse'>
      <span class='sr-only'>Toggle menu</span>
      <span class='icon-bar'></span>
      <span class='icon-bar'></span>
      <span class='icon-bar'></span>
     </button>
     <span class='navbar-brand'><a href="http://nitlanguage.org/">Nitlanguage.org</a></span>
    </div>
    <div class='collapse navbar-collapse' id='topmenu-collapse'>
     <ul class='nav navbar-nav'>
      <li><a href="{{{rootpath / "index.html"}}}">Catalog</a></li>
     </ul>
    </div>
   </div>
  </nav>
 </div>
"""
	end

	# Inject piwik HTML code if required
	private fun add_piwik
	do
		var tracker_url = catalog.piwik_tracker
		if tracker_url == null then return

		var site_id = catalog.piwik_site_id

		tracker_url = tracker_url.trim
		if tracker_url.chars.last != '/' then tracker_url += "/"
		add """
<!-- Piwik -->
<script type="text/javascript">
var _paq = _paq || [];
_paq.push(['trackPageView']);
_paq.push(['enableLinkTracking']);
(function() {
var u=(("https:" == document.location.protocol) ? "https" : "http") + "://{{{tracker_url.escape_to_c}}}";
_paq.push(['setTrackerUrl', u+'piwik.php']);
_paq.push(['setSiteId', {{{site_id}}}]);
var d=document, g=d.createElement('script'), s=d.getElementsByTagName('script')[0]; g.type='text/javascript';
g.defer=true; g.async=true; g.src=u+'piwik.js'; s.parentNode.insertBefore(g,s);
})();

</script>
<noscript><p><img src="http://{{{tracker_url.html_escape}}}piwik.php?idsite={{{site_id}}}" style="border:0;" alt="" /></p></noscript>
<!-- End Piwik Code -->
"""

	end

	redef fun rendering
	do
		add """
</div> <!-- container-fluid -->
<script src='https://code.jquery.com/jquery-latest.min.js'></script>
<script src='https://maxcdn.bootstrapcdn.com/bootstrap/3.3.1/js/bootstrap.min.js'></script>
<script src='https://cdnjs.cloudflare.com/ajax/libs/bootstrap-table/1.8.1/bootstrap-table-all.min.js'></script>
"""
		add_piwik
		add """

</body>
</html>
"""
	end
end

redef class NitdocDecorator
	redef fun add_image(v, link, name, comment)
	do
		# Keep absolute links as is
		if link.has_prefix("http://") or link.has_prefix("https://") then
			super
			return
		end

		do
			# Get the directory of the doc object to deal with the relative link
			var mdoc = current_mdoc
			if mdoc == null then break
			var source = mdoc.location.file
			if source == null then break
			var path = source.filename
			var stat = path.file_stat
			if stat == null then break
			if not stat.is_dir then path = path.dirname

			# Get the full path to the local resource
			var fulllink = path / link.to_s
			stat = fulllink.file_stat
			if stat == null then break

			# Get a collision-free catalog name for the resource
			var hash = fulllink.md5
			var ext = fulllink.file_extension
			if ext != null then hash = hash + "." + ext

			# Copy the local resource in the resource directory of the catalog
			var res = catalog.outdir / "res" / hash
			fulllink.file_copy_to(res)

			# Hijack the link in the html.
			link = ".." / "res" / hash
			super(v, link, name, comment)
			return
		end

		# Something went bad
		catalog.modelbuilder.toolcontext.error(current_mdoc.location, "Error: cannot find local image `{link}`")
		super
	end

	# The registered catalog
	#
	# It is used to deal with relative links in images.
	var catalog: Catalog is noautoinit
end

redef class Catalog
	redef init
	do
		# Register `self` to the global NitdocDecorator
		# FIXME this is ugly. But no better idea at the moment.
		modelbuilder.model.nitdoc_md_processor.decorator.as(NitdocDecorator).catalog = self
	end

	# The output directory where to generate pages
	var outdir: String is noautoinit

	# Return a empty `CatalogPage`.
	fun new_page(rootpath: String): CatalogPage
	do
		return new CatalogPage(self, rootpath)
	end

	# Recursively generate a level in the file tree of the *content* section
	private fun gen_content_level(ot: OrderedTree[MConcern], os: Array[Object], res: Template)
	do
		res.add "<ul>\n"
		for o in os do
			res.add "<li>"
			if o isa MGroup then
				var d = ""
				var mdoc = o.mdoc
				if mdoc != null then d = ": {mdoc.html_synopsis.write_to_string}"
				res.add "<strong>{o.name}</strong>{d} ({o.filepath.to_s})"
			else if o isa MModule then
				var d = ""
				var mdoc = o.mdoc
				if mdoc != null then d = ": {mdoc.html_synopsis.write_to_string}"
				res.add "<strong>{o.name}</strong>{d} ({o.filepath.to_s})"
			else
				abort
			end
			var subs = ot.sub.get_or_null(o)
			if subs != null then gen_content_level(ot, subs, res)
			res.add "</li>\n"
		end
		res.add "</ul>\n"
	end

	# Generate a full HTML page for a package
	fun generate_page(mpackage: MPackage): Writable
	do
		var res = new_page("..")
		var name = mpackage.name.html_escape
		res.more_head.add """<title>{{{name}}}</title>"""

		res.add """<div class="content">"""

		var mdoc = mpackage.mdoc_or_fallback
		if mdoc == null then
			res.add """<h1 class="package-name">{{{name}}}</h1>"""
		else
			res.add """
<div style="float: left">
	<h1 class="package-name">{{{name}}}&nbsp;-&nbsp;</h1>
</div>
"""
			res.add mdoc.html_documentation
		end

		res.add "<h2>Content</h2>"
		var ot = new OrderedTree[MConcern]
		for g in mpackage.mgroups do
			var pa = g.parent
			if g.is_interesting then
				ot.add(pa, g)
				pa = g
			end
			for mp in g.mmodules do
				ot.add(pa, mp)
			end
		end
		ot.sort_with(alpha_comparator)
		gen_content_level(ot, ot.roots, res)


		res.add """
</div>
<div class="sidebar">
<ul class="box">
"""
		var tryit = mpackage.metadata.metadata("upstream.tryit")
		if tryit != null then
			var e = tryit.html_escape
			res.add "<li><a href=\"{e}\">Try<span style=\"color:white\">n</span>it!</a></li>\n"
		end
		var apk = mpackage.metadata.metadata("upstream.apk")
		if apk != null then
			var e = apk.html_escape
			res.add "<li><a href=\"{e}\">Android apk</a></li>\n"
		end

		res.add """</ul>\n<ul class="box">\n"""

		var homepage = mpackage.metadata.metadata("upstream.homepage")
		if homepage != null then
			var e = homepage.html_escape
			res.add "<li><a href=\"{e}\">{e}</a></li>\n"
		end
		for maintainer in mpackage.metadata.maintainers do
			res.add "<li>{maintainer.to_html}</li>"
		end
		var license = mpackage.metadata.metadata("package.license")
		if license != null then
			var e = license.html_escape
			res.add "<li><a href=\"http://opensource.org/licenses/{e}\">{e}</a> license</li>\n"
		end
		res.add "</ul>\n"

		res.add "<h3>Source Code</h3>\n<ul class=\"box\">\n"
		var browse = mpackage.metadata.metadata("upstream.browse")
		if browse != null then
			var e = browse.html_escape
			res.add "<li><a href=\"{e}\">{e}</a></li>\n"
		end
		var git = mpackage.metadata.metadata("upstream.git")
		if git != null then
			var e = git.html_escape
			res.add "<li><tt>{e}</tt></li>\n"
		end
		var last_date = mpackage.metadata.last_date
		if last_date != null then
			var e = last_date.html_escape
			res.add "<li>most recent commit: {e}</li>\n"
		end
		var first_date = mpackage.metadata.first_date
		if first_date != null then
			var e = first_date.html_escape
			res.add "<li>oldest commit: {e}</li>\n"
		end
		var commits = commits[mpackage]
		if commits != 0 then
			res.add "<li>{commits} commits</li>\n"
		end
		res.add "</ul>\n"

		res.add "<h3>Quality</h3>\n<ul class=\"box\">\n"
		var errors = errors[mpackage]
		if errors > 0 then
			res.add "<li>{errors} errors</li>\n"
		end
		res.add "<li>{warnings[mpackage]} warnings ({warnings_per_kloc[mpackage]}/kloc)</li>\n"
		res.add "<li>{documentation_score[mpackage]}% documented</li>\n"
		res.add "</ul>\n"

		res.add "<h3>Tags</h3>\n"
		var ts2 = new Array[String]
		for t in mpackage.metadata.tags do
			t = t.html_escape
			ts2.add "<a href=\"../index.html#tag_{t}\">{t}</a>"
		end
		res.add_list(ts2, ", ", ", ")

		if deps.vertices.has(mpackage) then
			var reqs = deps.get_all_successors(mpackage)
			reqs.remove(mpackage)
			alpha_comparator.sort(reqs)
			res.add "<h3>Requirements</h3>\n"
			if reqs.is_empty then
				res.add "none"
			else
				var list = new Array[String]
				for r in reqs do
					var direct = deps.has_arc(mpackage, r)
					var s = "<a href=\"{r}.html\">"
					if direct then s += "<strong>"
					s += r.to_s
					if direct then s += "</strong>"
					s += "</a>"
					list.add s
				end
				res.add_list(list, ", ", " and ")
			end

			reqs = deps.get_all_predecessors(mpackage)
			reqs.remove(mpackage)
			alpha_comparator.sort(reqs)
			res.add "<h3>Clients</h3>\n"
			if reqs.is_empty then
				res.add "none"
			else
				var list = new Array[String]
				for r in reqs do
					var direct = deps.has_arc(r, mpackage)
					var s = "<a href=\"{r}.html\">"
					if direct then s += "<strong>"
					s += r.to_s
					if direct then s += "</strong>"
					s += "</a>"
					list.add s
				end
				res.add_list(list, ", ", " and ")
			end
		end

		var contributors = mpackage.metadata.contributors
		if not contributors.is_empty then
			res.add "<h3>Contributors</h3>\n<ul class=\"box\">"
			for c in contributors do
				res.add "<li>{c.to_html}</li>"
			end
			res.add "</ul>"
		end

		res.add """
<h3>Stats</h3>
<ul class="box">
<li>{{{mmodules[mpackage]}}} modules</li>
<li>{{{mclasses[mpackage]}}} classes</li>
<li>{{{mmethods[mpackage]}}} methods</li>
<li>{{{loc[mpackage]}}} lines of code</li>
</ul>
"""

		res.add """
</div>
"""
		return res
	end

	# Return a short HTML sequence for a package
	#
	# Intended to use in lists.
	fun li_package(p: MPackage): String
	do
		var res = ""
		var f = "p/{p.name}.html"
		res += "<a href=\"{f}\">{p}</a>"
		var d = p.mdoc_or_fallback
		if d != null then res += " - {d.html_synopsis.write_to_string}"
		return res
	end

	# List packages by group.
	#
	# For each key of the `map` a `<h3>` is generated.
	# Each package is then listed.
	#
	# The list of keys is generated first to allow fast access to the correct `<h3>`.
	# `id_prefix` is used to give an id to the `<h3>` element.
	fun list_by(map: MultiHashMap[Object, MPackage], id_prefix: String): Template
	do
		var res = new Template
		var keys = map.keys.to_a
		alpha_comparator.sort(keys)
		var list = [for x in keys do "<a href=\"#{id_prefix}{x.to_s.html_escape}\">{x.to_s.html_escape}</a>"]
		res.add_list(list, ", ", " and ")

		for k in keys do
			var projs = map[k].to_a
			alpha_comparator.sort(projs)
			var e = k.to_s.html_escape
			res.add "<h3 id=\"{id_prefix}{e}\">{e} ({projs.length})</h3>\n<ul>\n"
			for p in projs do
				res.add "<li>"
				res.add li_package(p)
				res.add "</li>"
			end
			res.add "</ul>"
		end
		return res
	end

	# List the 10 best packages from `cpt`
	fun list_best(cpt: Counter[MPackage]): Template
	do
		var res = new Template
		res.add "<ul>"
		var best = cpt.sort
		for i in [1..10] do
			if i > best.length then break
			var p = best[best.length-i]
			res.add "<li>"
			res.add li_package(p)
			# res.add " ({cpt[p]})"
			res.add "</li>"
		end
		res.add "</ul>"
		return res
	end

	# Produce a HTML table containig information on the packages
	#
	# `package_page` must have been called before so that information is computed.
	fun table_packages(mpackages: Array[MPackage]): Template
	do
		alpha_comparator.sort(mpackages)
		var res = new Template
		res.add "<table data-toggle=\"table\" data-sort-name=\"name\" data-sort-order=\"desc\" width=\"100%\">\n"
		res.add "<thead><tr>\n"
		res.add "<th data-field=\"name\" data-sortable=\"true\">name</th>\n"
		res.add "<th data-field=\"maint\" data-sortable=\"true\">maint</th>\n"
		res.add "<th data-field=\"contrib\" data-sortable=\"true\">contrib</th>\n"
		if deps.vertices.not_empty then
			res.add "<th data-field=\"reqs\" data-sortable=\"true\">reqs</th>\n"
			res.add "<th data-field=\"dreqs\" data-sortable=\"true\">direct<br>reqs</th>\n"
			res.add "<th data-field=\"cli\" data-sortable=\"true\">clients</th>\n"
			res.add "<th data-field=\"dcli\" data-sortable=\"true\">direct<br>clients</th>\n"
		end
		res.add "<th data-field=\"mod\" data-sortable=\"true\">modules</th>\n"
		res.add "<th data-field=\"cla\" data-sortable=\"true\">classes</th>\n"
		res.add "<th data-field=\"met\" data-sortable=\"true\">methods</th>\n"
		res.add "<th data-field=\"loc\" data-sortable=\"true\">lines</th>\n"
		res.add "<th data-field=\"score\" data-sortable=\"true\">score</th>\n"
		res.add "<th data-field=\"errors\" data-sortable=\"true\">errors</th>\n"
		res.add "<th data-field=\"warnings\" data-sortable=\"true\">warnings</th>\n"
		res.add "<th data-field=\"warnings_per_kloc\" data-sortable=\"true\">w/kloc</th>\n"
		res.add "<th data-field=\"doc\" data-sortable=\"true\">doc</th>\n"
		res.add "</tr></thead>"
		for p in mpackages do
			res.add "<tr>"
			res.add "<td><a href=\"p/{p.name}.html\">{p.name}</a></td>"
			var maint = "?"
			if p.metadata.maintainers.not_empty then maint = p.metadata.maintainers.first.name.html_escape
			res.add "<td>{maint}</td>"
			res.add "<td>{p.metadata.contributors.length}</td>"
			if deps.vertices.not_empty then
				res.add "<td>{deps.get_all_successors(p).length-1}</td>"
				res.add "<td>{deps.successors(p).length}</td>"
				res.add "<td>{deps.get_all_predecessors(p).length-1}</td>"
				res.add "<td>{deps.predecessors(p).length}</td>"
			end
			res.add "<td>{mmodules[p]}</td>"
			res.add "<td>{mclasses[p]}</td>"
			res.add "<td>{mmethods[p]}</td>"
			res.add "<td>{loc[p]}</td>"
			res.add "<td>{score[p]}</td>"
			res.add "<td>{errors[p]}</td>"
			res.add "<td>{warnings[p]}</td>"
			res.add "<td>{warnings_per_kloc[p]}</td>"
			res.add "<td>{documentation_score[p]}</td>"
			res.add "</tr>\n"
		end
		res.add "</table>\n"
		return res
	end

	# Piwik tracker URL, if any
	var piwik_tracker: nullable String = null

	# Piwik site ID
	# Used when `piwik_tracker` is set
	var piwik_site_id: Int = 1
end

redef class Person
	redef fun to_html do
		var res = ""
		var e = name.html_escape
		var page = self.page
		if page != null then
			res += "<a href=\"{page.html_escape}\">"
		end
		var gravatar = self.gravatar
		if gravatar != null then
			res += "<img src=\"https://secure.gravatar.com/avatar/{gravatar}?size=20&amp;default=retro\">&nbsp;"
		end
		res += e
		if page != null then res += "</a>"
		return res
	end
end

var model = new Model
var tc = new ToolContext

var opt_dir = new OptionString("Directory where the HTML files are generated", "-d", "--dir")
var opt_no_git = new OptionBool("Do not gather git information from the working directory", "--no-git")
var opt_no_parse = new OptionBool("Do not parse nit files (no importation information)", "--no-parse")
var opt_no_model = new OptionBool("Do not analyse nit files (no class/method information)", "--no-model")

# Piwik tracker URL.
# If you want to monitor your visitors.
var opt_piwik_tracker = new OptionString("Piwik tracker URL (ex: `nitlanguage.org/piwik/`)", "--piwik-tracker")
# Piwik tracker site id.
var opt_piwik_site_id = new OptionString("Piwik site ID", "--piwik-site-id")

tc.option_context.add_option(opt_dir, opt_no_git, opt_no_parse, opt_no_model, opt_piwik_tracker, opt_piwik_site_id)

tc.process_options(sys.args)
tc.keep_going = true

var modelbuilder = new ModelBuilder(model, tc)
var catalog = new Catalog(modelbuilder)

catalog.piwik_tracker = opt_piwik_tracker.value
var piwik_site_id = opt_piwik_site_id.value
if piwik_site_id != null then
	if catalog.piwik_tracker == null then
		print_error "Warning: ignored `{opt_piwik_site_id}` because `{opt_piwik_tracker}` is not set."
	else if piwik_site_id.is_int then
		print_error "Warning: ignored `{opt_piwik_site_id}`, an integer is required."
	else
		catalog.piwik_site_id = piwik_site_id.to_i
	end
end


# Get files or groups
var args = tc.option_context.rest
var mmodules
if opt_no_parse.value then
	mmodules = modelbuilder.scan_full(args)
else
	mmodules = modelbuilder.parse_full(args)
end
var mpackages = modelbuilder.model.mpackage_importation_graph.vertices

# Scan packages and compute information
for p in mpackages do
	var g = p.root
	assert g != null
	modelbuilder.scan_group(g)
end

if not opt_no_git.value then for p in mpackages do
	catalog.git_info(p)
end

# Run phases to modelize classes and properties (so we can count them)
if not opt_no_model.value then
	modelbuilder.run_phases
end

var out = opt_dir.value or else "catalog.out"
(out/"p").mkdir
(out/"res").mkdir

catalog.outdir = out

# Generate the css (hard coded)
var css = """
body {
margin-top:			15px;
background-color:		#f8f8f8;
}

a {
color:				#0D8921;
text-decoration:		none;
}

a:hover {
color:				#333;
text-decoration:		none;
}

h1 {
font-weight:			bold;
color:                          #0D8921;
font-size:			22px;
}

h2 {
color:                          #6C6C6C;
font-size:			18px;
border-bottom:			solid 3px #CCC;
}

h3 {
color:                          #6C6C6C;
font-size:			15px;
border-bottom:			solid 1px #CCC;
}

ul {
list-style-type:		square;
}

dd {
color:				#6C6C6C;
margin-top:			1em;
margin-bottom:			1em;
}

pre {
border:				1px solid #CCC;
font-family:			Monospace;
color:				#2d5003;
background-color:		rgb(250, 250, 250);
}

code {
font-family:			Monospace;
color:				#2d5003;
}

footer {
margin-top:			20px;
}

.container {
margin:				0 auto;
padding:			0 20px;
}

.content {
float:				left;
margin-top:			40px;
width:				65%;
}

.sidebar {
float:				right;
margin-top:			40px;
width:				30%
}

.sidebar h3 {
color:                          #0D8921;
font-size:			18px;
border-bottom:			0px;
}

.box {
margin:				0;
padding:			0;
}

.box li {
line-height:			2.5;
white-space:			nowrap;
overflow:			hidden;
text-overflow:			ellipsis;
padding-right:			10px;
border-bottom:			1px solid rgba(0,0,0,0.2);
}
"""
css.write_to_file(out/"style.css")

# PAGES

for p in mpackages do
	# print p
	var f = "p/{p.name}.html"
	catalog.package_page(p)
	catalog.generate_page(p).write_to_file(out/f)
	# copy ini
	var ini = p.ini
	if ini != null then ini.write_to_file(out/"p/{p.name}.ini")
end

# INDEX

var index = catalog.new_page("")
index.more_head.add "<title>Packages in Nit</title>"

index.add """
<div class="content">
<h1>Packages in Nit</h1>
"""

index.add "<h2>Highlighted Packages</h2>\n"
index.add catalog.list_best(catalog.score)

if catalog.deps.vertices.not_empty then
	index.add "<h2>Most Required</h2>\n"
	var reqs = new Counter[MPackage]
	for p in mpackages do
		reqs[p] = catalog.deps.get_all_successors(p).length - 1
	end
	index.add catalog.list_best(reqs)
end

index.add "<h2>By First Tag</h2>\n"
index.add catalog.list_by(catalog.cat2proj, "cat_")

index.add "<h2>By Any Tag</h2>\n"
index.add catalog.list_by(catalog.tag2proj, "tag_")

index.add """
</div>
<div class="sidebar">
<h3>Stats</h3>
<ul class="box">
<li>{{{mpackages.length}}} packages</li>
<li>{{{catalog.maint2proj.length}}} maintainers</li>
<li>{{{catalog.contrib2proj.length}}} contributors</li>
<li>{{{catalog.tag2proj.length}}} tags</li>
<li>{{{catalog.mmodules.sum}}} modules</li>
<li>{{{catalog.mclasses.sum}}} classes</li>
<li>{{{catalog.mmethods.sum}}} methods</li>
<li>{{{catalog.loc.sum}}} lines of code</li>
</ul>
</div>
"""

index.write_to_file(out/"index.html")

# PEOPLE

var page = catalog.new_page("")
page.more_head.add "<title>People of Nit</title>"
page.add """<div class="content">\n<h1>People of Nit</h1>\n"""
page.add "<h2>By Maintainer</h2>\n"
page.add catalog.list_by(catalog.maint2proj, "maint_")
page.add "<h2>By Contributor</h2>\n"
page.add catalog.list_by(catalog.contrib2proj, "contrib_")
page.add "</div>\n"
page.write_to_file(out/"people.html")

# TABLE

page = catalog.new_page("")
page.more_head.add "<title>Projets of Nit</title>"
page.add """<div class="content">\n<h1>People of Nit</h1>\n"""
page.add "<h2>Table of Projets</h2>\n"
page.add catalog.table_packages(mpackages.to_a)
page.add "</div>\n"
page.write_to_file(out/"table.html")
