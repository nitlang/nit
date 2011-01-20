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
special AbstractCompiler
	# Destination directory
	readable writable var _dir: String = "."

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

	# Currently computed mmmodule
	readable var _mmmodule: nullable MMSrcModule

	# Is the current directory module computed as a simple modude ?
	readable writable var _inside_mode: Bool = false

	# Is the current module computed as a intruded one ?
	readable writable var _intrude_mode: Bool = false

	# Compued introducing entities (for the index)
	var _entities: Array[MMEntity] = new Array[MMEntity]

	# Register an entity (for the index)
	fun register(e: MMEntity)
	do
		_entities.add(e)
		if e isa MMSrcModule then
			_mmmodule = e
		end
	end

	# Start a new file
	fun clear
	do
		_stage_context = new StageContext(null)
	end

	# Generate common files (frames, index, overview)
	fun extract_other_doc
	do
		info("Generating other files",1)
		_mmmodule = null
		inside_mode = false
		intrude_mode = false
		clear
		add("<html><body>\n")
		add("<a href=\"overview.html\" target=\"mainFrame\">Overview</a><br/>\n")
		add("<a href=\"index-1.html\" target=\"mainFrame\">Index</a><br/>\n")
		var modules = modules.to_a
		sort(modules)

		var rootdirs = new Array[MMDirectory]
		for m in modules do
			var md = m.directory
			if md.parent == null and not rootdirs.has(md) then
				rootdirs.add(md)
			end
		end

		var done = new Array[MMModule]
		for root in rootdirs do
			var dirstack = [root]
			var curdir = root
			add("{root.name}<br/>\n")
			var indent = "&nbsp; "
			while not dirstack.is_empty do
				var redo = false
				for m in modules do
					if done.has(m) then continue
					var md = m.directory
					if md.owner == m and md.parent == curdir then
						# It's a directory module
						add("{indent}<a href=\"{m}.html\" target=\"mainFrame\">{m}</a><br/>\n")
						curdir = md
						dirstack.push(curdir)
						indent = "&nbsp " * dirstack.length
						redo = true
						break # restart to preserve alphabetic order
					else if md == curdir then
						if md.owner == m then
							add("{indent}<a href=\"{m}_.html\" target=\"mainFrame\">{m}</a><br/>\n")
						else
							add("{indent}<a href=\"{m}.html\" target=\"mainFrame\">{m}</a><br/>\n")
						end
						done.add(m)
						redo = true
					end
				end
				if not redo then
					dirstack.pop
					if not dirstack.is_empty then
						curdir = dirstack[dirstack.length-1]
						indent = "&nbsp " * dirstack.length
					end
				end
			end
		end
		add("</body></html>\n")
		write_to("{dir}/menu-frame.html")

		clear
		add_header("Index")
		add("<dl>\n")
		sort(_entities)
		for e in _entities do
			add("<dt><b>{e.html_link(self)}</b> - {e.prototype_head(self)} <b>{e}</b>{e.prototype_body(self)} {e.locate(self)}<dd>{e.short_doc}\n")
		end
		add("</dl></body></html>\n")
		write_to("{dir}/index-1.html")

		clear
		add_header("Overview")
		add("<table border=\"1\" width=\"100%\" cellpadding=\"3\" cellspacing=\"0\">\n")
		add("<tr bgcolor=\"#CCCCFF\"><th colspan=\"2\"><big>Overview of all Modules</big></th><tr>\n")
		for m in modules do
			add("<tr><td width=\"20%\" align=\"right\">{m.html_link(self)}</td><td>{m.short_doc}</td><tr>\n")
		end
		add("</table></body></html>\n")
		write_to("{dir}/overview.html")

		clear
		add("<html>\n<frameset cols=\"20%,80%\">\n<frame src=\"menu-frame.html\" name=\"menuFrame\" title=\"Menu\">\n<frame src=\"overview.html\" name=\"mainFrame\" title=\"Main\" scrolling=\"yes\">\n</frameset></html>\n")
		write_to("{dir}/index.html")
	end

	fun add_header(title: String)
	do
		add("<html><head><title>{title}</title></head>\n<body>\n")
		add("<table border=\"0\" width=\"100%\" cellpadding=\"1\" cellspacing=\"0\"><tr><td bgcolor=\"#eeeeff\">\n")
		add("<a href=\"overview.html\"><b>Overview</b></a>&nbsp; <a href=\"index-1.html\"><b>Index</b></a>&nbsp; <a href=\"index.html\" target=\"_top\"><b>With Frames</b></a>\n")
		add("</td></tr></table>")
		add("Visibility: ")
		var mod = mmmodule
		if (not inside_mode and not intrude_mode) or mod == null then
			add("<b>Public</b>&nbsp; ")
		else
			add("<a href=\"{mod}.html\"><b>Public</b></a>&nbsp; ")
		end
		if inside_mode or mod == null then
			add("<b>Inside</b>&nbsp; ")
		else if mod.directory.owner != mod then
			add("<strike><b>Inside</b></strike>&nbsp; ")
		else
			add("<a href=\"{mod}_.html\"><b>Inside</b></a>&nbsp; ")
		end
		if intrude_mode or mod == null then
			add("<b>Intrude</b>&nbsp; ")
		else
			add("<a href=\"{mod}__.html\"><b>Intrude</b></a>&nbsp; ")
		end
		add("<br/>")
	end

	# Sorter of entities in alphabetical order
	var _sorter: AlphaSorter[MMEntity] = new AlphaSorter[MMEntity]

	# Sort entities in the alphabetical order
	fun sort(array: Array[MMEntity])
	do
		_sorter.sort(array)
	end

	readable writable var _owned_modules: Array[MMModule] = new Array[MMModule]

	# Return the known_owner for current module
	# if inside_mode is set, it could be a different result
	fun known_owner_of(m: MMModule): MMModule
	do
		var mod = mmmodule
		if mod == null then return m
		var res = mod.known_owner_of(m)
		if not inside_mode and not intrude_mode and res.directory.owner == mod then
			return mod
		else
			return res
		end
	end

	readable var _opt_dir: OptionString = new OptionString("Directory where doc is generated", "-d", "--dir")

	redef fun perform_work(mods)
	do
		dir.mkdir

		for mod in modules do
			assert mod isa MMSrcModule
			mod.extract_module_doc(self)
		end
		self.extract_other_doc
	end

	init
	do
		keep_ast = true
		super("nitdoc")
		option_context.add_option(opt_dir)
	end

	redef fun process_options
	do
		super
		var d = opt_dir.value
		if d != null then dir = d
	end
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
special AbstractSorter[E]
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
class MMEntity
	# Return a link to
	fun html_link(dctx: DocContext): String is abstract

	# Is the entity should appear in the generaed doc
	fun need_doc(dctx: DocContext): Bool is abstract

	# Return a one liner description
	fun short_doc: String do return "&nbsp;"

	# The doc node from the AST
	# Return null is none
	fun doc: nullable ADoc do return null

	# Human redable location of the entity (module/class/property)
	fun locate(dctx: DocContext): String do return ""

	# Part of the prototype before the name (kind, modifiers, qualifier)
	fun prototype_head(dctx: DocContext): String is abstract

	# Part of the property after the name (signature, modifiers)
	fun prototype_body(dctx: DocContext): String do return ""
end

redef class MMModule
special MMEntity
	redef fun html_link(dctx) do 
		if dctx.mmmodule == self then
			return "{self}"
		else
			return "<a href=\"{self}.html\">{self}</a>"
		end
	end
	redef fun need_doc(dctx) do return true
	redef fun prototype_head(dctx) do return "module "

	var _known_owner_of_cache: Map[MMModule, MMModule] = new HashMap[MMModule, MMModule]

	# Return the owner of `module` from the point of view of `self`
	fun known_owner_of(mod: MMModule): MMModule
	do
		if _known_owner_of_cache.has_key(mod) then return _known_owner_of_cache[mod]
		var res = mod
		# is module is publicly imported by self?
		if mhe < mod and visibility_for(mod) != 0 then
			res = known_owner_of_intern(mod, self, false)
		else
			# Return the canonnical owner of module from the point of view of self
			res = mod.owner(self)
		end
		_known_owner_of_cache[mod] = res
		return res
	end

	# Return the most general module that own self
	fun owner(from: MMModule): MMModule
	do
		var res = self
		var d: nullable MMDirectory = directory
		while d != null and d != from.directory do
			var o = d.owner
			if o != null and o.mhe <= res then res = o
			d = d.parent
		end
		return res
	end

	# ???
	private fun known_owner_of_intern(mod: MMModule, from: MMModule, as_owner: Bool): MMModule
	do
		if mod == self then return self
		var candidates = new Array[MMModule]
		for m in explicit_imported_modules do
			if from.visibility_for(m) == 0 then continue
			if not m.mhe <= mod then continue
			candidates.add(m.known_owner_of_intern(mod, from, true))
		end
		# FIXME: I do not know what this does
		if candidates.is_empty then return mod.owner(from)
		var max = candidates.first
		for m in candidates do
			if max.mhe < m then max = m
		end
		if as_owner and max.directory.owner == self then
			return self
		else
			return max
		end
	end

end

redef class MMLocalProperty
special MMEntity
	# Anchor of the property description in the module html file
	fun html_anchor: String
	do
		return "PROP_{local_class}_{cmangle(name)}"
	end

	redef fun html_link(dctx)
	do
		var m = mmmodule
		if not need_doc(dctx) then m = global.intro.mmmodule
		m = dctx.known_owner_of(m)
		if m == dctx.mmmodule then
			return "<a href=\"#{html_anchor}\">{self}</a>"
		else
			return "<a href=\"{m}.html#{html_anchor}\">{self}</a>"
		end
	end
	
	# Kind of property (fun, attr, etc.)
	fun kind: String is abstract

	redef fun locate(dctx)
	do
		return "in {mmmodule.html_link(dctx)}::{local_class.html_link(dctx)}"
	end

	fun known_intro_class(dctx: DocContext): MMLocalClass
	do
		var mod = dctx.known_owner_of(global.intro.local_class.mmmodule)
		var cla = mod[global.intro.local_class.global]
		return cla
	end

	redef fun prototype_head(dctx)
	do
		var res = new Buffer
		var intro_class = known_intro_class(dctx)
		var is_redef = local_class != intro_class

		if is_redef then res.append("redef ")
		if global.visibility_level == 2 then
			res.append("protected ")
		else if global.visibility_level == 3 then
			res.append("private ")
		end
		res.append(kind)
		if is_redef then
			var gp = global.intro
			if intro_class.global != local_class.global then
				res.append(" {mmmodule[intro_class.global].html_link(dctx)}::")
			else if intro_class.mmmodule != mmmodule then
				res.append(" {intro_class.mmmodule.html_link(dctx)}::")
			end
		end
		return res.to_s
	end

	redef fun prototype_body(dctx)
	do
		var res = new Buffer
		res.append(signature.to_html(dctx, true))
		var s = self
		if s isa MMMethod then
			if s.is_abstract then
				res.append(" is abstract")
			else if s.is_intern then
				res.append(" is intern")
			end
		end
		return res.to_s
	end

	redef fun need_doc(dctx)
	do
		if global.visibility_level >= 3 or self isa MMAttribute then
			if not dctx.intrude_mode then return false
			if dctx.mmmodule.visibility_for(mmmodule) == 0 then return false
		end
		if global.intro == self then
			return true
		end
		return doc != null
	end

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
	# Extract and generate html file for the module
	fun extract_module_doc(dctx: DocContext)
	do
		dctx.info("Generating HTML for module {name}",1)
		dctx.register(self)

		dctx.clear
		extract_module_doc_inside(dctx)
		dctx.write_to("{dctx.dir}/{name}.html")
		
		dctx.intrude_mode = true
		dctx.clear
		extract_module_doc_inside(dctx)
		dctx.write_to("{dctx.dir}/{name}__.html")
		dctx.intrude_mode = false

		if directory.owner == self then
			dctx.inside_mode = true
			dctx.clear
			extract_module_doc_inside(dctx)
			dctx.write_to("{dctx.dir}/{name}_.html")
			dctx.inside_mode = false
		end
	end

	fun extract_module_doc_inside(dctx: DocContext)
	do
		dctx.add_header("Module {self}")
		dctx.add("<h1>Module {self}</h1>\n<dl>")
		var s = ""
		var d: nullable MMDirectory = directory
		while d != null do
			if d.owner != null and (d.owner != self or dctx.inside_mode or dctx.intrude_mode) then
				s = "{d.owner.html_link(dctx)}::{s}"
			end
			d = d.parent
		end
		dctx.add("{s}<br/>{prototype_head(dctx)}<b>{self}</b>{prototype_body(dctx)}<br/>\n")

		var strs = new Array[String]
		var intrude_modules = new Array[MMModule]
		var public_modules = new Array[MMModule]
		var private_modules = new Array[MMModule]
		var owned_modules = dctx.owned_modules
		owned_modules.clear
		for m in mhe.greaters do
			var v = visibility_for(m) 
			if not dctx.inside_mode and not dctx.intrude_mode and m.directory.owner == self then 
				if v >= 2 then owned_modules.add(m)
				continue
			end
			if v == 3 then
				intrude_modules.add(m)
			else if v == 2 then
				public_modules.add(m)
			else if v == 1 then
				private_modules.add(m)
			end
		end
		if not intrude_modules.is_empty then
			var mods = mhe.order.select_smallests(intrude_modules)
			for i in mods do strs.add(i.html_link(dctx))
			dctx.add("<dt>Intruded modules: <dd>{strs.join(", ")}\n")
		end
		if not public_modules.is_empty then
			strs.clear
			var mods = mhe.order.select_smallests(public_modules)
			for i in mods do strs.add(i.html_link(dctx))
			dctx.add("<dt>Imported modules: <dd>{strs.join(", ")}\n")
		end
		if not private_modules.is_empty then
			strs.clear
			var mods = mhe.order.select_smallests(private_modules)
			for i in mods do strs.add(i.html_link(dctx))
			dctx.add("<dt>Privatly imported modules: <dd>{strs.join(", ")}\n")
		end
		dctx.add("</dl>\n")

		var doc = doc
		if doc != null then dctx.add("<pre>{doc.to_html}</pre>\n")

		var new_classes = new Array[MMLocalClass]
		for c in local_classes do
			if c.need_doc(dctx) then
				new_classes.add(c)
				if c.global.intro == c then
					dctx.register(c)
				end
			else
				for m in owned_modules do
					if m.global_classes.has(c.global) then
						var mc = m[c.global]
						if mc.need_doc(dctx) then
							new_classes.add(c)
							break
						end
					end
				end
			end
		end

		if not new_classes.is_empty then 
			dctx.sort(new_classes)
			dctx.add("<table border=\"1\" width=\"100%\" cellpadding=\"3\" cellspacing=\"0\">\n")
			dctx.add("<tr bgcolor=\"#CCCCFF\"><th colspan=\"2\"><big>Class Summary of {self}</big></th><tr>\n")
			for c in new_classes do
				dctx.add("<tr><td width=\"20%\" align=\"right\">{c.prototype_head(dctx)}</td><td><b>{c.html_link(dctx)}</b>{c.prototype_body(dctx)}<br/>{c.short_doc}</td><tr>\n")
			end
			dctx.add("</table><br/>\n")
		end

		if not new_classes.is_empty then 
			dctx.add("<table border=\"1\" width=\"100%\" cellpadding=\"3\" cellspacing=\"0\">\n")
			dctx.add("<tr bgcolor=\"#CCCCFF\"><th><big>Class Detail of {self}</big></th><tr>\n")
			dctx.add("</table>\n")

			for c in new_classes do
				c.extract_class_doc(dctx)
			end
		end

		dctx.add("</body></html>\n")
	end

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
		if n.n_packagedecl == null then
			return null
		end
		var np = n.n_packagedecl
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
		return res.to_s
	end

	# Oneliner transcription of the doc
	fun short: String
	do
		return n_comment.first.text.substring_from(1)
	end
end

redef class MMLocalClass
special MMEntity
	# Anchor of the class description in the module html file
	fun html_anchor: String do return "CLASS_{self}"

	redef fun html_link(dctx)
	do
		var m = mmmodule
		if not need_doc(dctx) then m = global.mmmodule
		m = dctx.known_owner_of(m)
		if m == dctx.mmmodule then
			return "<a href=\"#{html_anchor}\">{self}</a>"
		else
			return "<a href=\"{m}.html#{html_anchor}\">{self}</a>"
		end
	end

	redef fun short_doc do return global.intro.short_doc

	redef fun doc do return global.intro.doc

	redef fun need_doc(dctx) do
		if mmmodule == dctx.mmmodule then
			for m in dctx.owned_modules do
				if m.global_classes.has(global) then
					var c = m[global]
					if c.need_doc(dctx) then return true
				end
			end
		end
		return false
	end

	redef fun locate(dctx) do return "in {mmmodule.html_link(dctx)}"

	fun known_intro(dctx: DocContext): MMLocalClass do return dctx.known_owner_of(global.intro.mmmodule)[global]

	redef fun prototype_head(dctx)
	do
		var res = new Buffer
		var ki = known_intro(dctx)
		var is_redef = ki != self
		if is_redef then res.append("redef ")
		if global.visibility_level == 3 then res.append("private ")
		res.append("class ")
		if is_redef then res.append("{ki.mmmodule.html_link(dctx)}::")
		return res.to_s
	end

	redef fun prototype_body(dctx)
	do
		var res = new Buffer
		if arity > 0 then
			res.append("[")
			for i in [0..arity[ do
				var t = get_formal(i)
				res.append(t.name.to_s)
				res.append(": ")
				res.append(t.bound.html_link(dctx))
			end
			res.append("]")
		end
		return res.to_s
	end

	# Extract the doc of a class
	fun extract_class_doc(dctx: DocContext)
	do
		dctx.add("<a name=\"{html_anchor}\"></a><h2>{self}</h2><small>{mmmodule.html_link(dctx)}::</small><br/>{prototype_head(dctx)}<b>{self}</b>{prototype_body(dctx)}\n")
		dctx.add("<blockquote>\n")
		dctx.add("<dl>\n")

		var sup2 = new Array[String]
		var intro_module = dctx.known_owner_of(global.mmmodule)
		if intro_module != mmmodule then
			dctx.add("<dt>Refine {self} from: <dd>{intro_module.html_link(dctx)}\n")
			sup2.clear
			var mods = new Array[MMModule]
			for c in crhe.greaters do
			 	if c.need_doc(dctx) then
					var km = dctx.known_owner_of(c.mmmodule)
					if km != mmmodule and km != intro_module and not mods.has(km) then
						mods.add(km)
					end
				end
			end
			for c in crhe.linear_extension do
				if mods.has(c.mmmodule) then sup2.add(c.mmmodule.html_link(dctx))
			end
			if not sup2.is_empty then dctx.add("<dt>Previous refinements in: <dd>{sup2.join(", ")}\n")
		end
		if not cshe.greaters.is_empty then
			sup2.clear
			var clas = new Array[MMLocalClass]
			for c in cshe.direct_greaters do
				sup2.add(c.html_link(dctx))
			end
			dctx.add("<dt>Direct superclasses: <dd>{sup2.join(", ")}\n")
			sup2.clear
			for c in cshe.linear_extension do
				if c != self then sup2.add(c.html_link(dctx))
			end
			dctx.add("<dt>All superclasses: <dd>{sup2.join(", ")}\n")
		end
		if not cshe.direct_smallers.is_empty then
			sup2.clear
			for c in cshe.direct_smallers do
				sup2.add(c.html_link(dctx))
			end
			dctx.add("<dt>Direct subclasses: <dd>{sup2.join(", ")}\n")
		end
		sup2.clear
		for c in crhe.smallers do
			c.compute_super_classes
			for c2 in c.mmmodule.local_classes do
				if not c2 isa MMConcreteClass then continue
				c2.compute_super_classes
				c2.compute_ancestors
			end
			for c2 in c.cshe.direct_smallers do
				if c2.global.intro == c2 then
					sup2.add("{c2.html_link(dctx)}")
				end
			end
		end
		if not sup2.is_empty then
			dctx.add("<dt>Other direct subclasses in known modules: <dd>{sup2.join(", ")}\n")
		end
		sup2.clear
		for c in crhe.order do
			if not mmmodule.mhe <= c.mmmodule and c.need_doc(dctx) then
				sup2.add(c.mmmodule.html_link(dctx))
			end
		end
		if not sup2.is_empty then
			dctx.add("<dt>Refinements in known modules: <dd>{sup2.join(", ")}\n")
		end
		dctx.add("</dl>\n")

		var doc = doc
		if doc != null then
			dctx.add("<pre>{doc.to_html}</pre>\n")
		end

		var details = new Array[Array[MMLocalProperty]]
		for i in [0..4[ do details.add(property_summary(dctx, i))
		for i in [0..4[ do property_detail(dctx, i, details[i])

		dctx.add("</blockquote><hr/>\n")
	end

	fun pass_name(pass: Int): String
	do
		var names = once ["Virtual Types", "Consructors", "Methods", "Attributes"]
		return names[pass]
	end
	
	fun accept_prop(p: MMLocalProperty, pass: Int): Bool
	do
		if pass == 0 then
			return p isa MMTypeProperty
		else if pass == 1 then
			return p.global.is_init
		else if pass == 2 then
			return p isa MMMethod and not p.global.is_init
		else if pass == 3 then
			return p isa MMAttribute
		end
		abort
	end

	fun property_summary(dctx: DocContext, pass: Int): Array[MMLocalProperty]
	do
		var passname = pass_name(pass)
		dctx.open_stage
		dctx.stage("<table border=\"1\" width=\"100%\" cellpadding=\"3\" cellspacing=\"0\">\n")
		dctx.stage("<tr bgcolor=\"#CCCCFF\"><th colspan=\"2\">{passname} Summary of {self}</th></tr>\n")

		var new_props = new Array[MMLocalProperty]
		for g in global_properties do
			if not accept_prop(g.intro, pass) then continue
			if mmmodule.visibility_for(g.intro.mmmodule) < g.visibility_level then continue
			var p = self[g]
			if p.local_class != self or not p.need_doc(dctx) then
				var cla = new Array[MMLocalClass]
				for m in dctx.owned_modules do
					if not m.global_classes.has(global) then continue
					var c = m[global]
					if not c isa MMConcreteClass then continue
					if not c.has_global_property(g) then continue
					var p2 = c[g]
					if p2.local_class != c or not p2.need_doc(dctx) then continue
					cla.add(c)
				end
				if cla.is_empty then continue
				cla = crhe.order.select_smallests(cla)
			end

			new_props.add(p)
			if p.global.intro == p then
				dctx.register(p)
			end
		end
		dctx.sort(new_props)
		for p in new_props do
			dctx.add("<tr><td width=\"20%\" align=\"right\">{p.prototype_head(dctx)}</td><td><b>{p.html_link(dctx)}</b>{p.prototype_body(dctx)}<br/>&nbsp;&nbsp;&nbsp;&nbsp;{p.short_doc}</td></tr>\n")
		end
		dctx.stage("</table><br/>\n")

		dctx.open_stage
		dctx.stage("<table border=\"1\" width=\"100%\" cellpadding=\"3\" cellspacing=\"0\">\n")
		if pass != 1 then
			# skip pass 1 because constructors are not inherited
			var cmap = new HashMap[MMLocalClass, Array[MMLocalProperty]]
			var mmap = new HashMap[MMModule, Array[MMLocalProperty]]
			for c in che.greaters do
				if c isa MMSrcLocalClass then
					var km = dctx.known_owner_of(c.mmmodule)
					var kc = km[c.global]
					if kc == self then continue
					var props: Array[MMLocalProperty]
					if km == mmmodule then
						if cmap.has_key(kc) then
							props = cmap[kc]
						else
							props = new Array[MMLocalProperty]
							cmap[kc] = props
						end
					else
						if mmap.has_key(km) then
							props = mmap[km]
						else
							props = new Array[MMLocalProperty]
							mmap[km] = props
						end
					end
					for g in c.global_properties do
						var p = c[g]
						if p.local_class == c and p.need_doc(dctx) and accept_prop(p, pass) then
							props.add(kc[g])
						end
					end
				end
			end
			dctx.open_stage
			dctx.stage("<tr bgcolor=\"#EEEEFF\"><th colspan=\"2\"><small>Inherited {passname}</small></th><tr>\n")
			for c in cshe.linear_extension do
				if not cmap.has_key(c) then continue
				var props = cmap[c]
				if props.is_empty then continue
				dctx.sort(props)
				var properties = new Array[String]
				for p in props do properties.add(p.html_link(dctx))
				dctx.add("<tr><td width=\"20%\"><small>from {c.html_link(dctx)}</small></td><td><small>{properties.join(", ")}</small></td><tr>\n")
			end
			dctx.close_stage

			dctx.open_stage
			dctx.stage("<tr bgcolor=\"#EEEEFF\"><th colspan=\"2\"><small>Imported {passname}</small></th><tr>\n")
			for m in mmmodule.mhe.linear_extension do
				if not mmap.has_key(m) then continue
				var props = mmap[m]
				if props.is_empty then continue
				dctx.sort(props)
				var properties = new Array[String]
				for p in props do properties.add(p.html_link(dctx))
				dctx.add("<tr><td width=\"20%\"><small>from {m.html_link(dctx)}</small></td><td><small>{properties.join(", ")}</small></td><tr>\n")
			end
			dctx.close_stage
		end

		var mmap = new HashMap[MMModule, Array[MMLocalProperty]]
		for c in crhe.order do
			if mmmodule.mhe <= c.mmmodule or dctx.owned_modules.has(c.mmmodule) or not c isa MMSrcLocalClass then continue
			var km = dctx.known_owner_of(c.mmmodule)
			if mmmodule.mhe <= km then continue
			var kc = km[c.global]
			var props: Array[MMLocalProperty]
			if mmap.has_key(km) then
				props = mmap[km]
			else
				props = new Array[MMLocalProperty]
				mmap[km] = props
			end
			for g in c.global_properties do
				var p = c[g]
				if p.local_class == c and p.need_doc(dctx) and accept_prop(p, pass) then
					var kp = kc[g]
					if not props.has(kp) then props.add(kp)
				end
			end
			# c.properties_inherited_from(dctx, self, pass)
		end
		dctx.open_stage
		dctx.stage("<tr bgcolor=\"#EEEEFF\"><th colspan=\"2\"><small>Added {passname} in known modules</small></th><tr>\n")
		for c in crhe.order do
			var m = c.mmmodule
			if not mmap.has_key(m) then continue
			var props = mmap[m]
			if props.is_empty then continue
			dctx.sort(props)
			var properties = new Array[String]
			for p in props do properties.add(p.html_link(dctx))
			dctx.add("<tr><td width=\"20%\"><small>in {m.html_link(dctx)}</small></td><td><small>{properties.join(", ")}</small></td><tr>\n")
		end
		dctx.close_stage
		dctx.stage("</table><br/><br/>\n")
		dctx.close_stage

		dctx.close_stage
		return new_props
	end

	fun property_detail(dctx: DocContext, pass: Int, new_props: Array[MMLocalProperty])
	do
		var passname = pass_name(pass)
		dctx.open_stage
		dctx.stage("<table border=\"1\" width=\"100%\" cellpadding=\"3\" cellspacing=\"0\">\n")
		dctx.stage("<tr bgcolor=\"#CCCCFF\"><th>{passname} Detail of {self}</th><tr>\n")
		dctx.stage("</table>\n")

		dctx.open_stage
		for p in new_props do
			dctx.add("<a name=\"{p.html_anchor}\"></a><h3>{p}</h3><p><small>{p.mmmodule.html_link(dctx)}::{p.local_class.html_link(dctx)}::</small><br/>{p.prototype_head(dctx)} <b>{p.name}</b>{p.prototype_body(dctx)}</p>\n")
			dctx.add("<blockquote>")
			var doc = p.doc
			if doc != null then
				dctx.add("<pre>{doc.to_html}</pre>\n")
			end
			dctx.stage("</blockquote>\n")
			dctx.close_stage

			dctx.open_stage
			dctx.stage("<hr/>\n")
		end
		dctx.close_stage

		dctx.close_stage
	end

	# Add rows for properties inheriterd to some heirs
	fun properties_inherited_from(dctx: DocContext, heir: MMLocalClass, pass: Int)
	do
		var properties = new Array[String]
		for g in global_properties do
			var p = self[g]
			if p.local_class == self and p.need_doc(dctx) and accept_prop(p, pass) then
				properties.add(p.html_link(dctx))
			end
		end
		if not properties.is_empty then
			var s: String
			if heir.global == global then
				s = mmmodule.html_link(dctx)
			else
				s = self.html_link(dctx)
			end
			dctx.add("<tr><td width=\"20%\"><small>in {s}</small></td><td><small>{properties.join(", ")}</small></td><tr>\n")
		end
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

	redef fun need_doc(dctx)
	do
		if global.visibility_level >= 3 then
			if not dctx.intrude_mode then return false
			if dctx.mmmodule.visibility_for(mmmodule) == 0 then return false
		end
		if global.intro == self then
			return true
		end
		for p in src_local_properties do
			if p.need_doc(dctx) then
				return true
			end
		end
		return super
	end
end

redef class MMSignature
	# Htlm transcription of the signature (with nested links)
	fun to_html(dctx: DocContext, with_closure: Bool): String
	do
		var res = new Buffer
		if arity > 0 then
			res.append("(")
			res.append(self[0].html_link(dctx))
			for i in [1..arity[ do
				res.append(", ")
				res.append(self[i].html_link(dctx))
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

var c = new DocContext
c.exec_cmd_line
