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

private import compiling_icode

# Something that store color of table elements
class ColorContext
	var _colors: HashMap[TableElt, Int] = new HashMap[TableElt, Int]

	# The color of a table element.
	fun color(e: TableElt): Int
	do
		return _colors[e]
	end

	# Is a table element already colored?
	fun has_color(e: TableElt): Bool
	do
		return _colors.has_key(e)
	end

	# Assign a color to a table element.
	fun color=(e: TableElt, c: Int)
	do
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
	readable var _compiled_classes: HashMap[MMGlobalClass, CompiledClass] = new HashMap[MMGlobalClass, CompiledClass]

	# The main module of the program globally analysed
	readable var _module: MMModule

	# FIXME: do something better.
	readable writable var _max_class_table_length: Int = 0

	init(module: MMModule)
	do
		_module = module
	end
end

class GlobalCompilerVisitor
special CompilerVisitor
	# The global analysis result
	readable var _global_analysis: GlobalAnalysis
	init(m: MMModule, tc: ToolContext, ga: GlobalAnalysis)
	do
		super(m, tc)
		_global_analysis = ga
	end
end

# A compiled class is a class in a program
class CompiledClass
special ColorContext
	# The corresponding local class in the main module of the prgram
	readable var _local_class: MMLocalClass

	# The identifier of the class
	readable writable var _id: Int = 0

	# The full class table of the class
	readable var _class_table: Array[nullable TableElt] = new Array[nullable TableElt]

	# The full instance table of the class
	readable var _instance_table: Array[nullable TableElt] = new Array[nullable TableElt]

	# The proper class table part (no superclasses but all refinements)
	readable writable var _class_layout: TableEltComposite = new TableEltComposite(self)

	# The proper instance table part (no superclasses but all refinements)
	readable writable var _instance_layout: TableEltComposite = new TableEltComposite(self)

	init(c: MMLocalClass) do _local_class = c
end

redef class MMConcreteClass
	# The table element of the subtype check
	fun class_color_pos: TableEltClassColor do return _class_color_pos.as(not null)
	var _class_color_pos: nullable TableEltClassColor

	# The proper local class table part (nor superclasses nor refinments)
	readable var _class_layout: Array[TableElt] = new Array[TableElt]

	# The proper local instance table part (nor superclasses nor refinments)
	readable var _instance_layout: Array[TableElt] = new Array[TableElt]

	# Build the local layout of the class and feed the module table
	fun build_layout_in(tc: ToolContext, module_table: Array[ModuleTableElt])
	do
		var clt = _class_layout
		var ilt = _instance_layout

		if global.intro == self then
			module_table.add(new TableEltClassId(self))
			var cpp = new TableEltClassColor(self)
			_class_color_pos = cpp
			module_table.add(cpp)
			clt.add(new TableEltClassInitTable(self))
		end
		for p in local_local_properties do
			var pg = p.global
			if pg.intro == p then
				if p isa MMAttribute then
					ilt.add(new TableEltAttr(p))
				else if p isa MMMethod then
					clt.add(new TableEltMeth(p))
				end
			end
			if p isa MMMethod and p.need_super then
				clt.add(new TableEltSuper(p))
			end
		end

		if not ilt.is_empty then
			var teg = new ModuleTableEltGroup
			teg.elements.append(ilt)
			module_table.add(teg)
		end

		if not clt.is_empty then
			var teg = new ModuleTableEltGroup
			teg.elements.append(clt)
			module_table.add(teg)
		end
	end
end

redef class MMModule
	# The local table of the module (refers things introduced in the module)
	var _local_table: Array[ModuleTableElt] = new Array[ModuleTableElt]

	# Builds the local tables and local classes layouts
	fun local_analysis(tc: ToolContext)
	do
		for c in local_classes do
			if c isa MMConcreteClass then
				c.build_layout_in(tc, _local_table)
			end
		end
	end

	# Do the complete global analysis
	fun global_analysis(cctx: ToolContext): GlobalAnalysis
	do
		#print "Do the complete global analysis"
		var ga = new GlobalAnalysis(self)
		var smallest_classes = new Array[MMLocalClass]
		var global_properties = new HashSet[MMGlobalProperty]
		var ctab = new Array[TableElt]
		var itab = new Array[TableElt]

		ctab.add(new TableEltClassSelfId)
		ctab.add(new TableEltClassObjectSize)
		itab.add(new TableEltVftPointer)
		itab.add(new TableEltObjectId)

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
			assert bc isa MMConcreteClass
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
				build_tables_in(cc.class_table, ga, c, ctab)
				if maxcolor < cc.class_table.length then maxcolor = cc.class_table.length
			else
				# For other classes, it's easier: just append to the parent tables
				var sc = c.cshe.direct_greaters.first
				var scc = ga.compiled_classes[sc.global]
				assert cc.class_table.is_empty
				cc.class_table.add_all(scc.class_table)
				var bc = c.global.intro
				assert bc isa MMConcreteClass
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
			var cte = cc.class_layout
			var ite = cc.instance_layout
			for sc in c.crhe.greaters_and_self do
				if sc isa MMConcreteClass then
					cte.add(sc, sc.class_layout)
					ite.add(sc, sc.instance_layout)
				end
			end

			if core_classes.has(c) then
				if cte.length > 0 then
					ctab.add(cte)
				end
				if ite.length > 0 then
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
				build_tables_in(cc.class_table, ga, c, ctab)
				build_tables_in(cc.instance_table, ga, c, itab)
			else
				# For other classes, it's easier: just append to the parent tables
				var sc = c.cshe.direct_greaters.first
				var scc = ga.compiled_classes[sc.global]
				cc.class_table.clear
				cc.class_table.add_all(scc.class_table)
				var bc = c.global.intro
				assert bc isa MMConcreteClass
				var colpos = bc.class_color_pos
				cc.class_table[ga.color(colpos)] = colpos
				while cc.class_table.length <= maxcolor do
					cc.class_table.add(null)
				end
				append_to_table(ga, cc.class_table, cc.class_layout)
				assert cc.instance_table.is_empty
				cc.instance_table.add_all(scc.instance_table)
				append_to_table(ga, cc.instance_table, cc.instance_layout)
			end
		end

		return ga
	end

	private fun append_to_table(cc: ColorContext, table: Array[nullable TableElt], cmp: TableEltComposite)
	do
		for j in [0..cmp.length[ do
			var e = cmp.item(j)
			cc.color(e) = table.length
			table.add(e)
		end
	end

	private fun build_tables_in(table: Array[nullable TableElt], ga: GlobalAnalysis, c: MMLocalClass, elts: Array[TableElt])
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
		var i = 0
		while i < len do
			if tab.has_key(i) then
				var e = tab[i]
				for j in [0..e.length[ do
					table[i] = e.item(j)
					i = i + 1
				end
			else
				table[i] = null
				i = i + 1
			end
		end
	end

	# Perform coloring
	fun colorize(ga: GlobalAnalysis, elts: Array[TableElt], classes: Collection[MMLocalClass], startcolor: Int)
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

	private fun free_color(es: Array[TableElt], c: MMLocalClass): Bool
	do
		for e2 in es do
			if e2.is_related_to(c) then
				return false
			end
		end
		return true
	end

	# Compile module and class tables
	fun compile_tables_to_c(v: GlobalCompilerVisitor)
	do
		for m in mhe.greaters_and_self do
			m.compile_local_table_to_c(v)
		end

		for c in local_classes do
			c.compile_tables_to_c(v)
		end
		var s = new Buffer.from("classtable_t TAG2VFT[4] = \{NULL")
		for t in ["Int","Char","Bool"] do
			if has_global_class_named(t.to_symbol) then
				s.append(", (const classtable_t)VFT_{t}")
			else
				s.append(", NULL")
			end
		end
		s.append("};")
		v.add_instr(s.to_s)
	end

	# Declare class table (for _sep.h)
	fun declare_class_tables_to_c(v: GlobalCompilerVisitor)
	do
		for c in local_classes do
			if c.global.module == self then
				c.declare_tables_to_c(v)
			end
		end
	end

	# Compile main part (for _table.c)
	fun compile_main_part(v: GlobalCompilerVisitor)
	do
		v.add_instr("int main(int argc, char **argv) \{")
		v.indent
		v.add_instr("prepare_signals();")
		v.add_instr("glob_argc = argc; glob_argv = argv;")
		var sysname = once "Sys".to_symbol
		if not has_global_class_named(sysname) then
			print("No main")
		else
			var sys = class_by_name(sysname)
			var name = once "main".to_symbol
			if not sys.has_global_property_by_name(name) then
				print("No main")
			else
				var mainm = sys.select_method(name)
				v.add_instr("G_sys = NEW_Sys();")
				v.add_instr("{mainm.cname}(G_sys);")
			end
		end
		v.add_instr("return 0;")
		v.unindent
		v.add_instr("}")
	end

	# Compile sep files
	fun compile_mod_to_c(v: GlobalCompilerVisitor)
	do
		v.add_decl("extern const char *LOCATE_{name};")
		if not v.tc.global then
			v.add_decl("extern const int SFT_{name}[];")
		end
		var i = 0
		for e in _local_table do
			var value: String
			if v.tc.global then
				value = "{e.value(v.global_analysis)}"
			else
				value = "SFT_{name}[{i}]"
				i = i + 1
			end
			e.compile_macros(v, value)
		end
		for c in local_classes do
			if not c isa MMConcreteClass then continue
			for pg in c.global_properties do
				var p = c[pg]
				if p.local_class == c and p isa MMMethod then
					p.compile_property_to_c(v)
				end
				if pg.is_init_for(c) then
					# Declare constructors
					var params = new Array[String]
					for j in [0..p.signature.arity[ do
						params.add("val_t p{j}")
					end
					v.add_decl("val_t NEW_{c}_{p.global.intro.cname}({params.join(", ")});")
				end
			end
		end
	end

	# Compile module file for the current module
	fun compile_local_table_to_c(v: GlobalCompilerVisitor)
	do
		v.add_instr("const char *LOCATE_{name} = \"{location.file}\";")

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

###############################################################################

# An element of a class, an instance or a module table
abstract class AbsTableElt
	# Compile the macro needed to use the element and other related elements
	fun compile_macros(v: GlobalCompilerVisitor, value: String) is abstract
end

# An element of a class or an instance table
# Such an elements represent method function pointers, attribute values, etc.
abstract class TableElt
special AbsTableElt
	# Is the element conflict to class `c' (used for coloring)
	fun is_related_to(c: MMLocalClass): Bool is abstract

	# Number of sub-elements. 1 if none
	fun length: Int do return 1

	# Access the ith subelement.
	fun item(i: Int): TableElt do return self

	# Return the value of the element for a given class
	fun compile_to_c(v: GlobalCompilerVisitor, c: MMLocalClass): String is abstract
end

# An element of a module table
# Such an elements represent colors or identifiers
abstract class ModuleTableElt
special AbsTableElt
	# Return the value of the element once the global analisys is performed
	fun value(ga: GlobalAnalysis): String is abstract
end

# An element of a module table that represents a group of TableElt defined in the same local class
class ModuleTableEltGroup
special ModuleTableElt
	readable var _elements: Array[TableElt] = new Array[TableElt]

	redef fun value(ga) do return "{ga.color(_elements.first)} /* Group of ? */"
	redef fun compile_macros(v, value)
	do
		var i = 0
		for e in _elements do
			e.compile_macros(v, "{value} + {i}")
			i += 1
		end
	end
end

# An element that represents a class property
abstract class TableEltProp
special TableElt
	var _property: MMLocalProperty

	init(p: MMLocalProperty)
	do
		_property = p
	end
end

# An element that represents a function pointer to a global method
class TableEltMeth
special TableEltProp
	redef fun compile_macros(v, value)
	do
		var pg = _property.global
		v.add_decl("#define {pg.meth_call}(recv) (({pg.intro.cname}_t)CALL((recv), ({value})))")
	end

	redef fun compile_to_c(v, c)
	do
		var p = c[_property.global]
		return p.cname
	end
end

# An element that represents a function pointer to the super method of a local method
class TableEltSuper
special TableEltProp
	redef fun compile_macros(v, value)
	do
		var p = _property
		v.add_decl("#define {p.super_meth_call}(recv) (({p.cname}_t)CALL((recv), ({value})))")
	end

	redef fun compile_to_c(v, c)
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
				if s.has_global_property(g) then
					#print "found {s.module}::{s}::{p}"
					return s[g].cname
				end
			end
		end
		abort
	end
end

# An element that represents the value stored for a global attribute
class TableEltAttr
special TableEltProp
	redef fun compile_macros(v, value)
	do
		var pg = _property.global
		v.add_decl("#define {pg.attr_access}(recv) ATTR(recv, ({value}))")
	end

	redef fun compile_to_c(v, c)
	do
		var ga = v.global_analysis
		var p = c[_property.global]
		return "/* {ga.color(self)}: Attribute {c}::{p} */"
	end
end

# An element representing a class information
class AbsTableEltClass
special AbsTableElt
	# The local class where the information comes from
	var _local_class: MMLocalClass

	init(c: MMLocalClass)
	do
		_local_class = c
	end

	# The C macro name refering the value
	fun symbol: String is abstract

	redef fun compile_macros(v, value)
	do
		v.add_decl("#define {symbol} ({value})")
	end
end

# An element of a class table representing a class information
class TableEltClass
special TableElt
special AbsTableEltClass
	redef fun is_related_to(c)
	do
		var bc = c.module[_local_class.global]
		return c.cshe <= bc
	end
end

# An element representing the id of a class in a module table
class TableEltClassId
special ModuleTableElt
special AbsTableEltClass
	redef fun symbol do return _local_class.global.id_id

	redef fun value(ga)
	do
		return "{ga.compiled_classes[_local_class.global].id} /* Id of {_local_class} */"
	end
end

# An element representing the constructor marker position in a class table
class TableEltClassInitTable
special TableEltClass
	redef fun symbol do return _local_class.global.init_table_pos_id

	redef fun compile_to_c(v, c)
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
end

# An element used for a cast
# Note: this element is both a TableElt and a ModuleTableElt.
# At the TableElt offset, there is the id of the super-class
# At the ModuleTableElt offset, there is the TableElt offset (ie. the color of the super-class).
class TableEltClassColor
special TableEltClass
special ModuleTableElt
	redef fun symbol do return _local_class.global.color_id

	redef fun value(ga)
	do
		return "{ga.color(self)} /* Color of {_local_class} */"
	end

	redef fun compile_to_c(v, c)
	do
		var ga = v.global_analysis
		var cc = ga.compiled_classes[_local_class.global]
		return "{cc.id} /* {ga.color(self)}: {c} < {cc.local_class}: superclass typecheck marker */"
	end
end

# A Group of elements introduced in the same global-class that are colored together
class TableEltComposite
special TableElt
	var _table: Array[TableElt]
	var _cc: CompiledClass
	var _offsets: HashMap[MMLocalClass, Int]
	redef fun length do return _table.length
	redef fun is_related_to(c) do return c.cshe <= _cc.local_class

	fun add(c: MMLocalClass, tab: Array[TableElt])
	do
		_offsets[c] = _table.length
		_table.append(tab)
	end

	redef fun item(i) do return _table[i]

	redef fun compile_to_c(v, c) do abort

	init(cc: CompiledClass)
	do
		_cc = cc
		_table = new Array[TableElt]
		_offsets = new HashMap[MMLocalClass, Int]
	end
end

# The element that represent the class id
class TableEltClassSelfId
special TableElt
	redef fun is_related_to(c) do return true
	redef fun compile_to_c(v, c)
	do
		var ga = v.global_analysis
		return "{v.global_analysis.compiled_classes[c.global].id} /* {ga.color(self)}: Identity */"
	end
end


# The element that represent the Object Size
class TableEltClassObjectSize
special TableElt
	redef fun is_related_to(c) do return true
	redef fun compile_to_c(v, c)
	do
        var nb = 0
        var ga = v.global_analysis
		if c.name == "NativeArray".to_symbol then
			nb = -1
		else
			var cc = ga.compiled_classes[c.global]
			var itab = cc.instance_table
			for e in itab do
				nb += 1
			end
		end
		return "{nb} /* {ga.color(self)}: Object size (-1 if a NativeArray)*/"
	end
end

# The element that represent the object id
class TableEltObjectId
special TableElt
	redef fun is_related_to(c) do return true
	redef fun compile_to_c(v, c)
	do
		var ga = v.global_analysis
		return "/* {ga.color(self)}: Object_id */"
	end
end

# The element that
class TableEltVftPointer
special TableElt
	redef fun is_related_to(c) do return true
	redef fun compile_to_c(v, c)
	do
		var ga = v.global_analysis
		return "/* {ga.color(self)}: Pointer to the classtable */"
	end
end

###############################################################################

# Used to sort local class in a deterministic total order
# The total order superset the class refinement and the class specialisation relations
class ClassSorter
special AbstractSorter[MMLocalClass]
	redef fun compare(a, b) do return a.compare(b)
	init do end
end

redef class MMLocalClass
	# Comparaison in a total order that superset the class refinement and the class specialisation relations
	fun compare(b: MMLocalClass): Int
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
	fun declare_tables_to_c(v: GlobalCompilerVisitor)
	do
		v.add_decl("")
		var pi = primitive_info
		v.add_decl("extern const classtable_elt_t VFT_{name}[];")
		if name == "NativeArray".to_symbol then
			v.add_decl("val_t NEW_NativeArray(size_t length, size_t size);")
		else if pi == null then
			# v.add_decl("val_t NEW_{name}(void);")
		else if not pi.tagged then
			var t = pi.cname
			var tbox = "struct TBOX_{name}"
			v.add_decl("{tbox} \{ const classtable_elt_t * vft; bigint object_id; {t} val;};")
			v.add_decl("val_t BOX_{name}({t} val);")
			v.add_decl("#define UNBOX_{name}(x) ((({tbox} *)(VAL2OBJ(x)))->val)")
		end
	end

	# Compilation of table and new (or box)
	fun compile_tables_to_c(v: GlobalCompilerVisitor)
	do
		var cc = v.global_analysis.compiled_classes[self.global]
		var ctab = cc.class_table
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
				v.add_instr("\{(bigint) {e.compile_to_c(v, self)}},")
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
		if name == "NativeArray".to_symbol then
			v.add_instr("val_t NEW_NativeArray(size_t length, size_t size) \{")
			v.indent
			v.add_instr("Nit_NativeArray array;")
			v.add_instr("array = (Nit_NativeArray)alloc(sizeof(struct Nit_NativeArray) + ((length - 1) * size));")
			v.add_instr("array->vft = (classtable_elt_t*)VFT_{name};")
			v.add_instr("array->object_id = object_id_counter;")
			v.add_instr("object_id_counter = object_id_counter + 1;")
			v.add_instr("array->size = length;")
			v.add_instr("return OBJ2VAL(array);")
			v.unindent
			v.add_instr("}")
		else if pi == null then
			do
				var iself = new IRegister(get_type)
				var iselfa = [iself]
				var iroutine = new IRoutine(new Array[IRegister], iself)
				var icb = new ICodeBuilder(module, iroutine)
				var obj = new INative("OBJ2VAL(obj)", null)
				obj.result = iself
				icb.stmt(obj)

				for g in global_properties do
					var p = self[g]
					var t = p.signature.return_type
					if p isa MMAttribute and t != null then
						var ir = p.iroutine
						if ir == null then continue
						# FIXME: Not compatible with sep compilation
						var e = icb.inline_routine(ir, iselfa, null).as(not null)
						icb.stmt(new IAttrWrite(p, iself, e))
					end
				end

				var cname = "NEW_{name}"
				var args = iroutine.compile_signature_to_c(v, cname, "new {name}", null, null)
				var ctx_old = v.ctx
				v.ctx = new CContext
				v.add_decl("obj_t obj;")
				v.add_instr("obj = alloc(sizeof(val_t) * {itab.length});")
				v.add_instr("obj->vft = (classtable_elt_t*)VFT_{name};")
				v.add_instr("obj[1].object_id = object_id_counter;")
				v.add_instr("object_id_counter = object_id_counter + 1;")
				var r = iroutine.compile_to_c(v, cname, args).as(not null)
				v.add_instr("return {r};")
				ctx_old.append(v.ctx)
				v.ctx = ctx_old
				v.unindent
				v.add_instr("}")
			end

			do
				# Compile CHECKNAME
				var iself = new IRegister(get_type)
				var iselfa = [iself]
				var iroutine = new IRoutine(iselfa, null)
				var icb = new ICodeBuilder(module, iroutine)
				for g in global_properties do
					var p = self[g]
					var t = p.signature.return_type
					if p isa MMAttribute and t != null and not t.is_nullable then
						icb.add_attr_check(p, iself)
					end
				end
				var cname = "CHECKNEW_{name}"
				var args = iroutine.compile_signature_to_c(v, cname, "check new {name}", null, null)
				var ctx_old = v.ctx
				v.ctx = new CContext
				iroutine.compile_to_c(v, cname, args)
				ctx_old.append(v.ctx)
				v.ctx = ctx_old
				v.unindent
				v.add_instr("}")
			end

			var init_table_size = cshe.greaters.length + 1
			var init_table_decl = "int init_table[{init_table_size}] = \{0{", 0" * (init_table_size-1)}};"

			for g in global_properties do
				var p = self[g]
				# FIXME skip invisible constructors
				if not p.global.is_init_for(self) then continue
				assert p isa MMMethod

				var iself = new IRegister(get_type)
				var iparams = new Array[IRegister]
				for i in [0..p.signature.arity[ do iparams.add(new IRegister(p.signature[i]))
				var iroutine = new IRoutine(iparams, iself)
				iroutine.location = p.iroutine.location
				var icb = new ICodeBuilder(module, iroutine)

				var inew = new INative("NEW_{name}()", null)
				inew.result = iself
				icb.stmt(inew)
				var iargs = [iself]
				iargs.add_all(iparams)
				icb.stmt(new INative("{p.cname}(@@@{", @@@"*iparams.length}, init_table)", iargs))
				icb.stmt(new INative("CHECKNEW_{name}(@@@)", [iself]))

				var cname = "NEW_{self}_{p.global.intro.cname}"
				var new_args = iroutine.compile_signature_to_c(v, cname, "new {self} {p.full_name}", null, null)
				var ctx_old = v.ctx
				v.ctx = new CContext
				v.add_instr(init_table_decl)
				var e = iroutine.compile_to_c(v, cname, new_args).as(not null)
				v.add_instr("return {e};")
				ctx_old.append(v.ctx)
				v.ctx = ctx_old
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
			v.add_instr("box->object_id = object_id_counter;")
			v.add_instr("object_id_counter = object_id_counter + 1;")
			v.add_instr("return OBJ2VAL(box);")
			v.unindent
			v.add_instr("}")
		end
	end
end

redef class MMMethod
	fun compile_property_to_c(v: CompilerVisitor)
	do
		var ir = iroutine
		assert ir != null

		var more_params: nullable String = null
		if global.is_init then more_params = "int* init_table"
		var args = ir.compile_signature_to_c(v, cname, full_name, null, more_params)
		var ctx_old = v.ctx
		v.ctx = new CContext

		v.out_contexts.clear

		var itpos: nullable String = null
		if global.is_init then
			itpos = "itpos{v.new_number}"
			v.add_decl("int {itpos} = VAL2OBJ({args.first})->vft[{local_class.global.init_table_pos_id}].i;")
			v.add_instr("if (init_table[{itpos}]) return;")
		end

		var s = ir.compile_to_c(v, cname, args)

		if itpos != null then
			v.add_instr("init_table[{itpos}] = 1;")
		end
		if s == null then
			v.add_instr("return;")
		else
			v.add_instr("return ", s, ";")
		end

		ctx_old.append(v.ctx)
		v.ctx = ctx_old
		v.unindent
		v.add_instr("}")

		for ctx in v.out_contexts do v.ctx.merge(ctx)
	end
end

