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

# Compute and generate tables for classes and modules.
package compiling_global

#import compiling_base
private import compiling_methods
private import syntax

# Something that store color of table elements
class ColorContext
	attr _colors: HashMap[TableElt, Int]

	# The color of a table element.
	meth color(e: TableElt): Int
	do
		return _colors[e]
	end

	# Is a table element already colored?
	meth has_color(e: TableElt): Bool
	do
		return _colors != null and _colors.has_key(e)
	end

	# Assign a color to a table element.
	meth color=(e: TableElt, c: Int)
	do
		if _colors == null then _colors = new HashMap[TableElt, Int]
		_colors[e] = c
		var idx = c
		for i in [0..e.length[ do
			_colors[e.item(i)] = idx
			idx = idx + 1
		end
	end
end

# All information and results of the global analysis.
class GlobalAnalysis
special ColorContext
	# Associate global classes to compiled classes
	readable attr _compiled_classes: HashMap[MMGlobalClass, CompiledClass] 

	# The main module of the program globally analysed
	readable attr _module: MMModule 

	# FIXME: do something better.
	readable writable attr _max_class_table_length: Int

	init(module: MMSrcModule)
	do
		_compiled_classes = new HashMap[MMGlobalClass, CompiledClass]
		_module = module
	end
end

redef class CompilerVisitor
	# The global analysis result, if any
	readable writable attr _global_analysis: GlobalAnalysis 
end

# A compiled class is a class in a program
class CompiledClass
special ColorContext
	# The corresponding local class in the main module of the prgram
	readable attr _local_class: MMLocalClass 

	# The identifier of the class
	readable writable attr _id: Int 

	# The full class table of the class
	readable writable attr _class_table: Array[TableElt] 

	# The full instance table of the class
	readable writable attr _instance_table: Array[TableElt] 

	# The proper class table part (no superclasses but all refinements)
	readable writable attr _class_layout: TableEltComposite 

	# The proper instance table part (no superclasses but all refinements)
	readable writable attr _instance_layout: TableEltComposite 

	init(c: MMLocalClass) do _local_class = c
end

redef class MMGlobalProperty
	# The position of the property in the local class table part
	# FIXME: It's ugly. store this somewhere else please
	readable writable attr _pos_of: Int 
end

redef class MMSrcLocalClass
	# The table element of the attribute position (for accessor simulation)
	readable attr _base_attr_pos: TableEltBaseAttrPos 

	# The table element of the subtype check
	readable attr _class_color_pos: TableEltClassColorPos

	# The proper local class table part (nor superclasses nor refinments)
	readable attr _class_layout: Array[LocalTableElt] 

	# The proper local instance table part (nor superclasses nor refinments)
	readable attr _instance_layout: Array[LocalTableElt] 

	# Build the local layout of the class and feed the module table
	meth build_layout_in(tc: ToolContext, module_table: Array[LocalTableElt])
	do
		var intro_methods = new Array[MMGlobalProperty] # FIXME: Remove this
		var intro_attributes = new Array[MMGlobalProperty] # FIXME: Remove this
		var clt = new Array[LocalTableElt]
		_class_layout = clt
		var ilt = new Array[LocalTableElt]
		_instance_layout = ilt

		if global.intro == self then
			module_table.add(new TableEltClassIdPos(self))
			_class_color_pos = new TableEltClassColorPos(self)
			module_table.add(_class_color_pos)
			#clt.add(_class_color_pos)
			clt.add(new TableEltClassInitTablePos(self))
		end
		for p in src_local_properties do
			var pg = p.global
			if pg.intro == p then
				if p isa MMSrcAttribute then
					pg.pos_of = intro_attributes.length
					intro_attributes.add(pg)
					ilt.add(new TableEltAttrPos(p))
				else if p isa MMSrcMethod then
					pg.pos_of = intro_methods.length
					intro_methods.add(pg)
					clt.add(new TableEltMethPos(p))
				end
			end
			if p isa MMSrcMethod and p.need_super then
				clt.add(new TableEltSuperPos(p))
			end
		end
		if tc.attr_sim and not intro_attributes.is_empty then
			_base_attr_pos = new TableEltBaseAttrPos(self)
			clt.add(_base_attr_pos)
		else
			module_table.append(ilt)
		end
		module_table.append(clt)
	end
end

redef class MMSrcModule
	# The local table of the module (refers things introduced in the module)
	attr _local_table: Array[LocalTableElt]

	# Builds the local tables and local classes layouts
	meth local_analysis(tc: ToolContext)
	do
		var lt = new Array[LocalTableElt]
		_local_table = lt
		for c in src_local_classes do
			c.build_layout_in(tc, lt)
		end
	end

	# Do the complete global analysis
	meth global_analysis(cctx: ToolContext): GlobalAnalysis
	do
		#print "Do the complete global analysis"
		var ga = new GlobalAnalysis(self)
		var smallest_classes = new Array[MMLocalClass]
		var global_properties = new HashSet[MMGlobalProperty]
		var ctab = new Array[TableElt]
		var itab = new Array[TableElt]

		ctab.add(new TableEltClassSelfId)
		itab.add(new TableEltVftPointer)
		
		var pclassid = -1
		var classid = 3

		# We have to work on ALL the classes of the module
		var classes = new Array[MMLocalClass]
		for c in local_classes do
			c.compute_super_classes
			classes.add(c)
		end
		(new ClassSorter).sort(classes)

		for c in classes do
			# Finish processing the class (if invisible)
			c.compute_ancestors
			c.inherit_global_properties

			# Associate a CompiledClass to the class
			var cc = new CompiledClass(c)
			ga.compiled_classes[c.global] = cc

			# Assign a unique class identifier
			# (negative are for primitive classes)
			var gc = c.global
			var bm = gc.module
			if c.primitive_info != null then
				cc.id = pclassid
				pclassid = pclassid - 4
			else
				cc.id = classid
				classid = classid + 4
			end

			# Register is the class is a leaf
			if c.cshe.direct_smallers.is_empty then
				smallest_classes.add(c)
			end

			# Store the colortableelt in the class table pool
			var bc = c.global.intro
			assert bc isa MMSrcLocalClass
			ctab.add(bc.class_color_pos)
		end

		# Compute core and crown classes for colorization
		var crown_classes = new HashSet[MMLocalClass]
		var core_classes = new HashSet[MMLocalClass] 
		for c in smallest_classes do
			while c.cshe.direct_greaters.length == 1 do
				c = c.cshe.direct_greaters.first
			end
			crown_classes.add(c)
			core_classes.add_all(c.cshe.greaters_and_self)
		end
		#print("nbclasses: {classes.length} leaves: {smallest_classes.length} crown: {crown_classes.length} core: {core_classes.length}")

		# Colorize core color for typechecks
		colorize(ga, ctab, crown_classes, 0)

		# Compute tables for typechecks
		var maxcolor = 0
		for c in classes do
			var cc = ga.compiled_classes[c.global]
			if core_classes.has(c) then
				# For core classes, just build the table
				cc.class_table = build_tables(ga, c, ctab)
				if maxcolor < cc.class_table.length then maxcolor = cc.class_table.length
			else
				# For other classes, it's easier: just append to the parent tables
				var sc = c.cshe.direct_greaters.first
				var scc = ga.compiled_classes[sc.global]
				cc.class_table = scc.class_table.to_a
				var bc = c.global.intro
				assert bc isa MMSrcLocalClass
				var colpos = bc.class_color_pos
				var colposcolor = cc.class_table.length
				ga.color(colpos) = colposcolor
				cc.class_table.add(colpos)
				if maxcolor < colposcolor then maxcolor = colposcolor
			end
		end
		ga.max_class_table_length = maxcolor + 1

		# Fill class table and instance tables pools
		for c in classes do
			var cc = ga.compiled_classes[c.global]
			var cte = new TableEltComposite(cc)
			var ite = new TableEltComposite(cc)
			for sc in c.crhe.greaters_and_self do
				if sc isa MMSrcLocalClass then
					cte.add(sc, sc.class_layout)
					ite.add(sc, sc.instance_layout)
				end
				cc.class_layout = cte
				cc.instance_layout = ite
			end

			if core_classes.has(c) then
				if cte.length > 0 then
					ctab.add(cte)
				end
				if not cctx.attr_sim and ite.length > 0 then
					itab.add(ite)
				end
			end
		end

		# Colorize all elements in pools tables
		colorize(ga, ctab, crown_classes, maxcolor+1)
		colorize(ga, itab, crown_classes, 0)

		# Build class and instance tables now things are colored
		ga.max_class_table_length = 0 
		for c in classes do
			var cc = ga.compiled_classes[c.global]
			if core_classes.has(c) then
				# For core classes, just build the table
				cc.class_table = build_tables(ga, c, ctab)
				cc.instance_table = build_tables(ga, c, itab)
			else
				# For other classes, it's easier: just append to the parent tables
				var sc = c.cshe.direct_greaters.first
				var scc = ga.compiled_classes[sc.global]
				cc.class_table = scc.class_table.to_a
				var bc = c.global.intro
				assert bc isa MMSrcLocalClass
				var colpos = bc.class_color_pos
				cc.class_table[ga.color(colpos)] = colpos
				while cc.class_table.length <= maxcolor do
					cc.class_table.add(null)
				end
				append_to_table(ga, cc.class_table, cc.class_layout)
				cc.instance_table = scc.instance_table.to_a
				append_to_table(ga, cc.instance_table, cc.instance_layout)
			end

			if cctx.attr_sim then
				cc.instance_table = build_tables(ga, c, itab)
				for sc in c.cshe.greaters_and_self do
					var scc = ga.compiled_classes[sc.global]
					append_to_table(cc, cc.instance_table, scc.instance_layout)
				end
			end
		end

		return ga
	end

	private meth append_to_table(cc: ColorContext, table: Array[TableElt], cmp: TableEltComposite)
	do
		for j in [0..cmp.length[ do
			var e = cmp.item(j)
			cc.color(e) = table.length
			table.add(e)
		end
	end

	private meth build_tables(ga: GlobalAnalysis, c: MMLocalClass, elts: Array[TableElt]): Array[TableElt]
	do
		var tab = new HashMap[Int, TableElt]
		var len = 0
		for e in elts do
			if e.is_related_to(c) then
				var col = ga.color(e)
				var l = col + e.length
				tab[col] = e
				if len < l then
					len = l
				end
			end
		end
		var res = new Array[TableElt]
		var i = 0
		while i < len do
			if tab.has_key(i) then
				var e = tab[i]
				for j in [0..e.length[ do
					res[i] = e.item(j)
					i = i + 1
				end
			else
				res[i] = null
				i = i + 1
			end
		end
		return res
	end

	# Perform coloring
	meth colorize(ga: GlobalAnalysis, elts: Array[TableElt], classes: Collection[MMLocalClass], startcolor: Int)
	do
		var colors = new HashMap[Int, Array[TableElt]]
		var rel_classes = new Array[MMLocalClass]
		for e in elts do
			var color = -1
			var len = e.length
			if ga.has_color(e) then
				color = ga.color(e)
			else
				rel_classes.clear
				for c in classes do
					if e.is_related_to(c) then
						rel_classes.add(c)
					end
				end
				var trycolor = startcolor
				while trycolor != color do
					color = trycolor
					for c in rel_classes do
						var idx = 0 
						while idx < len do
							if colors.has_key(trycolor + idx) and not free_color(colors[trycolor + idx], c) then
								trycolor = trycolor + idx + 1
								idx = 0
							else
								idx = idx + 1
							end
						end
					end
				end
				ga.color(e) = color
			end
			for idx in [0..len[ do
				if colors.has_key(color + idx) then
					colors[color + idx].add(e)
				else
					colors[color + idx] = [e]
				end
			end
		end
	end

	private meth free_color(es: Array[TableElt], c: MMLocalClass): Bool
	do
		for e2 in es do
			if e2.is_related_to(c) then
				return false
			end
		end
		return true
	end

	# Compile module and class tables
	meth compile_tables_to_c(v: CompilerVisitor)
	do
		for m in mhe.greaters_and_self do
			assert m isa MMSrcModule
			m.compile_local_table_to_c(v)
		end

		for c in local_classes do
			c.compile_tables_to_c(v)
		end
		var s = "classtable_t TAG2VFT[4] = \{NULL"
		for t in ["Int","Char","Bool"] do
			if has_global_class_named(t.to_symbol) then
				s.append(", (const classtable_t)VFT_{t}")
			else
				s.append(", NULL")
			end
		end
		s.append("};")
		v.add_instr(s)
	end

	# Declare class table (for _sep.h)
	meth declare_class_tables_to_c(v: CompilerVisitor)
	do
		for c in local_classes do
			if c.global.module == self then
				c.declare_tables_to_c(v)
			end
		end
	end

	# Compile main part (for _table.c)
	meth compile_main_part(v: CompilerVisitor)
	do
		v.add_instr("int main(int argc, char **argv) \{")
		v.indent
		v.add_instr("prepare_signals();")
		v.add_instr("glob_argc = argc; glob_argv = argv;")
		var sysname = once "Sys".to_symbol
		if not has_global_class_named(sysname) then
			print("No main")
		else
			var sys = class_by_name(sysname).get_type
			# var initm = sys.select_method(once "init".to_symbol)
			var mainm = sys.select_method(once "main".to_symbol)
			if mainm == null then
				print("No main")
			else
				#v.add_instr("G_sys = NEW_{initm.cname}();")
				v.add_instr("G_sys = NEW_Sys();")
				v.add_instr("{mainm.cname}(G_sys);")
			end
		end
		v.add_instr("return 0;")
		v.unindent
		v.add_instr("}")
	end
	
	# Compile sep files 
	meth compile_mod_to_c(v: CompilerVisitor)
	do
		v.add_decl("#define LOCATE_{name} \"{filename}\"")
		if not v.tc.global then
			v.add_decl("extern const int SFT_{name}[];")
		end
		var i = 0
		for e in _local_table do
			if v.tc.global then
				v.add_decl("#define {e.symbol} {e.value(v.global_analysis)}")
			else
				v.add_decl("#define {e.symbol} SFT_{name}[{i}]")
				i = i + 1
			end
		end
		for c in src_local_classes do
			for p in c.src_local_properties do
				var pg = p.global
				if pg.intro == p and p isa MMAttribute then
					if v.tc.attr_sim then
						var bc = pg.local_class
						assert bc isa MMSrcLocalClass
						var s = bc.base_attr_pos.symbol
						v.add_decl("#define {pg.attr_access}(recv) ATTRS(recv, {s}, {pg.pos_of})")
					else
						v.add_decl("#define {pg.attr_access}(recv) ATTR(recv, {pg.color_id})")
					end
				end
				assert p isa MMConcreteProperty
				p.compile_property_to_c(v)
			end
		end
	end

	# Compile module file for the current module
	meth compile_local_table_to_c(v: CompilerVisitor)
	do
		if v.tc.global or _local_table.is_empty then
			return
		end

		v.add_instr("const int SFT_{name}[{_local_table.length}] = \{")
		v.indent
		for e in _local_table do
			v.add_instr(e.value(v.global_analysis) + ",")
		end
		v.unindent
		v.add_instr("\};")
	end
end

class TableElt
	meth is_related_to(c: MMLocalClass): Bool is abstract
	meth length: Int do return 1
	meth item(i: Int): TableElt do return self
	meth compile_to_c(v: CompilerVisitor, c: MMLocalClass): String is abstract
end

class LocalTableElt
special TableElt
	meth symbol: String is abstract
	meth value(ga: GlobalAnalysis): String is abstract
end

class TableEltPropPos
special LocalTableElt
	attr _property: MMConcreteProperty
	redef meth symbol do return _property.global.color_id
	redef meth value(ga) do return "{ga.color(self)} /* Property {_property} */"

	init(p: MMConcreteProperty)
	do
		_property = p
	end
end

class TableEltMethPos
special TableEltPropPos
	redef meth compile_to_c(v, c)
	do
		var p = c[_property.global]
		return p.cname
	end
	init(p) do super 
end

class TableEltSuperPos
special TableEltPropPos
	redef meth symbol do return _property.color_id_for_super
	redef meth compile_to_c(v, c)
	do
		var pc = _property.local_class
		var g = _property.global
		var lin = c.che.linear_extension
		var found = false
		for s in lin do
			#print "{c.module}::{c} for {pc.module}::{pc}::{_property} try {s.module}:{s}"
			if s == pc then
				found = true
			else if found and c.che < s then
				var p = s[g]
				if p != null and p isa MMConcreteProperty then
					#print "found {s.module}::{s}::{p}"
					return p.cname
				end
			end
		end
		assert false
		return null
	end

	init(p) do super 
end

class TableEltAttrPos
special TableEltPropPos
	redef meth compile_to_c(v, c)
	do
		var ga = v.global_analysis
		var p = c[_property.global]
		return "/* {ga.color(self)}: Attribute {c}::{p} */"
	end

	init(p) do super 
end

class TableEltClassPos
special LocalTableElt
	attr _local_class: MMLocalClass
	redef meth is_related_to(c)
	do
		var bc = c.module[_local_class.global]
		return c.cshe <= bc
	end

	init(c: MMLocalClass)
	do
		_local_class = c
	end
end

class TableEltClassIdPos
special TableEltClassPos
	redef meth symbol do return _local_class.global.id_id
	redef meth value(ga)
	do
		return "{ga.compiled_classes[_local_class.global].id} /* Id of {_local_class} */"
	end

	init(c) do super
end

class TableEltClassInitTablePos
special TableEltClassPos
	redef meth symbol do return _local_class.global.init_table_pos_id
	redef meth value(ga)
	do
		return "{ga.color(self)} /* Color of {_local_class} */"
	end
	redef meth compile_to_c(v, c)
	do
		var ga = v.global_analysis
		var cc = ga.compiled_classes[_local_class.global]
		var linext = c.cshe.reverse_linear_extension
		var i = 0
		while linext[i].global != _local_class.global do
			i += 1
		end
		return "{i} /* {ga.color(self)}: {c} < {cc.local_class}: superclass init_table position */"
	end

	init(c) do super
end

class TableEltClassColorPos
special TableEltClassPos
	redef meth symbol do return _local_class.global.color_id
	redef meth value(ga)
	do
		return "{ga.color(self)} /* Color of {_local_class} */"
	end
	redef meth compile_to_c(v, c)
	do
		var ga = v.global_analysis
		var cc = ga.compiled_classes[_local_class.global]
		return "{cc.id} /* {ga.color(self)}: {c} < {cc.local_class}: superclass typecheck marker */"
	end

	init(c) do super
end

class TableEltBaseAttrPos
special LocalTableElt
	attr _local_class: MMSrcLocalClass
	redef meth symbol do return "COLOR_{_local_class.module}_{_local_class.name}_BASEATTR"
	redef meth value(ga)
	do
		return "{ga.color(self)} /* BaseAttrPos of {_local_class} */"
	end

	redef meth compile_to_c(v, c)
	do
		var ga = v.global_analysis
		var cc = ga.compiled_classes[c.global]
		return "{cc.color(_local_class.instance_layout.first)} /* {ga.color(self)}: Base attribut offset of {_local_class.module}::{_local_class} in {c} */"
	end

	init(c: MMSrcLocalClass)
	do
		_local_class = c
	end
end

class TableEltComposite
special TableElt
	attr _table: Array[LocalTableElt]
	attr _cc: CompiledClass
	attr _offsets: HashMap[MMLocalClass, Int]
	redef meth length do return _table.length
	redef meth is_related_to(c) do return c.cshe <= _cc.local_class

	meth add(c: MMLocalClass, tab: Array[LocalTableElt])
	do
		_offsets[c] = _table.length
		_table.append(tab)
	end

	redef meth item(i) do return _table[i]

	redef meth compile_to_c(v, c) do abort

	init(cc: CompiledClass)
	do
		_cc = cc
		_table = new Array[LocalTableElt]
		_offsets = new HashMap[MMLocalClass, Int]
	end
end

class TableEltClassSelfId
special TableElt
	redef meth is_related_to(c) do return true
	redef meth compile_to_c(v, c)
	do
		var ga = v.global_analysis
		return "{v.global_analysis.compiled_classes[c.global].id} /* {ga.color(self)}: Identity */"
	end

	init do end
end

class TableEltVftPointer
special TableElt
	redef meth is_related_to(c) do return true
	redef meth compile_to_c(v, c)
	do
		var ga = v.global_analysis
		return "/* {ga.color(self)}: Pointer to the classtable */"
	end

	init do end
end

# Used to sort local class in a deterministic total order
# The total order superset the class refinement and the class specialisation relations
class ClassSorter
special AbstractSorter[MMLocalClass]
	redef meth compare(a, b) do return a.compare(b)
	init do end
end

redef class MMLocalClass
	# Comparaison in a total order that superset the class refinement and the class specialisation relations
	meth compare(b: MMLocalClass): Int
	do
		var a = self
		if a == b then
			return 0
		else if a.module.mhe < b.module then
			return 1
		else if b.module.mhe < a.module then
			return -1
		end
		var ar = a.cshe.rank
		var br = b.cshe.rank
		if ar > br then
			return 1
		else if br > ar then
			return -1
		else
			return b.name.to_s <=> a.name.to_s
		end
	end

	# Declaration and macros related to the class table
	meth declare_tables_to_c(v: CompilerVisitor)
	do
		v.add_decl("")
		var pi = primitive_info
		v.add_decl("extern const classtable_elt_t VFT_{name}[];")
		if pi == null then
			# v.add_decl("val_t NEW_{name}(void);")
		else if not pi.tagged then
			var t = pi.cname
			var tbox = "struct TBOX_{name}"
			v.add_decl("{tbox} \{ const classtable_elt_t * vft; {t} val;};")
			v.add_decl("val_t BOX_{name}({t} val);")
			v.add_decl("#define UNBOX_{name}(x) ((({tbox} *)(VAL2OBJ(x)))->val)")
		end
	end

	# Compilation of table and new (or box)
	meth compile_tables_to_c(v: CompilerVisitor)
	do
		var cc = v.global_analysis.compiled_classes[self.global]
		var ctab =  cc.class_table
		var clen = ctab.length
		if v.global_analysis.max_class_table_length > ctab.length then
			clen = v.global_analysis.max_class_table_length
		end

		v.add_instr("const classtable_elt_t VFT_{name}[{clen}] = \{")
		v.indent
		for e in ctab do
			if e == null then
				v.add_instr("\{0} /* Class Hole :( */,")
			else
				v.add_instr("\{(int) {e.compile_to_c(v, self)}},")
			end
		end
		if clen > ctab.length then
			v.add_instr("\{0},"*(clen-ctab.length))
		end
		v.unindent
		v.add_instr("};")
		var itab = cc.instance_table
		for e in itab do
			if e == null then
				v.add_instr("/* Instance Hole :( */")
			else
				v.add_instr(e.compile_to_c(v, self))
			end
		end

		var pi = primitive_info
		if pi == null then
			v.clear
			var s = "val_t NEW_{name}(void)"
			v.add_instr(s + " \{")
			v.indent
			var ctx_old = v.ctx
			v.ctx = new CContext

			v.method_params = ["OBJ2VAL(obj)"]

			v.add_instr("obj_t obj;")
			v.add_instr("obj = alloc(sizeof(val_t) * {itab.length});")
			v.add_instr("obj->vft = (classtable_elt_t*)VFT_{name};")
			for g in global_properties do
				var p = self[g]
				var t = p.signature.return_type
				if p isa MMAttribute and t != null then
					# FIXME: Not compatible with sep compilation
					var pi = p.concrete_property
					assert pi isa MMSrcAttribute
					var np = pi.node
					assert np isa AAttrPropdef
					var ne = np.n_expr
					if ne != null then
						var e = ne.compile_expr(v)
						v.add_instr("{p.global.attr_access}(obj) = {e};")
					else
						var pi = t.local_class.primitive_info
						if pi != null and pi.tagged then
							var default = t.default_cvalue
							v.add_instr("{p.global.attr_access}(obj) = {default};")
						end
					end
				end
			end
			v.add_instr("return OBJ2VAL(obj);")
			ctx_old.append(v.ctx)
			v.ctx = ctx_old
			v.unindent
			v.add_instr("}")

			var init_table_size = cshe.greaters.length + 1
			var init_table_decl = "int init_table[{init_table_size}] = \{0{", 0" * (init_table_size-1)}};"

			for g in global_properties do
				var p = self[g]
				if not p.global.is_init or p.global.intro.local_class.global != global then continue
				v.clear
				var params = new Array[String]
				var args = ["self"]
				for i in [0..p.signature.arity[ do
					params.add("val_t p{i}")
					args.add("p{i}")
				end
				args.add("init_table")
				var s = "val_t NEW_{p.global.intro.cname}({params.join(", ")})"
				v.add_instr(s + " \{")
				v.indent
				v.add_instr(init_table_decl)
				v.add_instr("val_t self = NEW_{name}();")
				v.add_instr("{p.concrete_property.cname}({args.join(", ")});")
				v.add_instr("return self;")
				v.unindent
				v.add_instr("}")
			end
		else if not pi.tagged then
			var t = pi.cname
			var tbox = "struct TBOX_{name}"
			v.add_instr("val_t BOX_{name}({t} val) \{")
			v.indent
			v.add_instr("{tbox} *box = ({tbox}*)alloc(sizeof({tbox}));")
			v.add_instr("box->vft = VFT_{name};")
			v.add_instr("box->val = val;")
			v.add_instr("return OBJ2VAL(box);")
			v.unindent
			v.add_instr("}")
		end
	end
end

