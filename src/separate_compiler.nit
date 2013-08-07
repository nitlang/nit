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

# Separate compilation of a Nit program
module separate_compiler

import abstract_compiler
import layout_builders
import rapid_type_analysis

# Add separate compiler specific options
redef class ToolContext
	# --separate
	var opt_separate: OptionBool = new OptionBool("Use separate compilation", "--separate")
	# --no-inline-intern
	var opt_no_inline_intern: OptionBool = new OptionBool("Do not inline call to intern methods", "--no-inline-intern")
	# --no-union-attribute
	var opt_no_union_attribute: OptionBool = new OptionBool("Put primitive attibutes in a box instead of an union", "--no-union-attribute")
	# --no-shortcut-equate
	var opt_no_shortcut_equate: OptionBool = new OptionBool("Always call == in a polymorphic way", "--no-shortcut-equal")
	# --inline-coloring-numbers
	var opt_inline_coloring_numbers: OptionBool = new OptionBool("Inline colors and ids", "--inline-coloring-numbers")
	# --use-naive-coloring
	var opt_bm_typing: OptionBool = new OptionBool("Colorize items incrementaly, used to simulate binary matrix typing", "--bm-typing")
	# --use-mod-perfect-hashing
	var opt_phmod_typing: OptionBool = new OptionBool("Replace coloration by perfect hashing (with mod operator)", "--phmod-typing")
	# --use-and-perfect-hashing
	var opt_phand_typing: OptionBool = new OptionBool("Replace coloration by perfect hashing (with and operator)", "--phand-typing")
	# --tables-metrics
	var opt_tables_metrics: OptionBool = new OptionBool("Enable static size measuring of tables used for vft, typing and resolution", "--tables-metrics")

	redef init
	do
		super
		self.option_context.add_option(self.opt_separate)
		self.option_context.add_option(self.opt_no_inline_intern)
		self.option_context.add_option(self.opt_no_union_attribute)
		self.option_context.add_option(self.opt_no_shortcut_equate)
		self.option_context.add_option(self.opt_inline_coloring_numbers)
		self.option_context.add_option(self.opt_bm_typing)
		self.option_context.add_option(self.opt_phmod_typing)
		self.option_context.add_option(self.opt_phand_typing)
		self.option_context.add_option(self.opt_tables_metrics)
	end
end

redef class ModelBuilder
	fun run_separate_compiler(mainmodule: MModule, runtime_type_analysis: RapidTypeAnalysis)
	do
		var time0 = get_time
		self.toolcontext.info("*** GENERATING C ***", 1)

		var compiler = new SeparateCompiler(mainmodule, self, runtime_type_analysis)
		compiler.compile_header

		# compile class structures
		self.toolcontext.info("Property coloring", 2)
		compiler.new_file("{mainmodule.name}.classes")
		compiler.do_property_coloring
		for m in mainmodule.in_importation.greaters do
			for mclass in m.intro_mclasses do
				if mclass.kind == abstract_kind or mclass.kind == interface_kind then continue
				compiler.compile_class_to_c(mclass)
			end
		end

		# The main function of the C
		compiler.new_file("{mainmodule.name}.main")
		compiler.compile_main_function

		# compile methods
		for m in mainmodule.in_importation.greaters do
			self.toolcontext.info("Generate C for module {m}", 2)
			compiler.new_file("{m.name}.sep")
			compiler.compile_module_to_c(m)
		end

		# compile live & cast type structures
		self.toolcontext.info("Type coloring", 2)
		compiler.new_file("{mainmodule.name}.types")
		var mtypes = compiler.do_type_coloring
		for t in mtypes do
			compiler.compile_type_to_c(t)
		end

		compiler.display_stats

		var time1 = get_time
		self.toolcontext.info("*** END GENERATING C: {time1-time0} ***", 2)
		write_and_make(compiler)
	end
end

# Singleton that store the knowledge about the separate compilation process
class SeparateCompiler
	super AbstractCompiler

	# The result of the RTA (used to know live types and methods)
	var runtime_type_analysis: RapidTypeAnalysis

	private var undead_types: Set[MType] = new HashSet[MType]
	private var partial_types: Set[MType] = new HashSet[MType]
	private var live_unresolved_types: Map[MClassDef, Set[MType]] = new HashMap[MClassDef, HashSet[MType]]

	private var type_layout: nullable Layout[MType]
	private var resolution_layout: nullable Layout[MType]
	protected var method_layout: nullable Layout[MMethod]
	protected var attr_layout: nullable Layout[MAttribute]

	init(mainmodule: MModule, mmbuilder: ModelBuilder, runtime_type_analysis: RapidTypeAnalysis) do
		super(mainmodule, mmbuilder)
		var file = new_file("nit.common")
		self.header = new CodeWriter(file)
		self.runtime_type_analysis = runtime_type_analysis
		self.compile_box_kinds
	end

	redef fun compile_header_structs do
		self.header.add_decl("typedef void(*nitmethod_t)(void); /* general C type representing a Nit method. */")
		self.compile_header_attribute_structs
		self.header.add_decl("struct class \{ int box_kind; nitmethod_t vft[]; \}; /* general C type representing a Nit class. */")

		# With resolution_table_table, all live type resolution are stored in a big table: resolution_table
		self.header.add_decl("struct type \{ int id; const char *name; int color; short int is_nullable; const struct types *resolution_table; int table_size; int type_table[]; \}; /* general C type representing a Nit type. */")
		self.header.add_decl("struct instance \{ const struct type *type; const struct class *class; nitattribute_t attrs[]; \}; /* general C type representing a Nit instance. */")

		if modelbuilder.toolcontext.opt_phmod_typing.value or modelbuilder.toolcontext.opt_phand_typing.value then
			self.header.add_decl("struct types \{ int mask; const struct type *types[]; \}; /* a list types (used for vts, fts and unresolved lists). */")
		else
			self.header.add_decl("struct types \{ int dummy; const struct type *types[]; \}; /* a list types (used for vts, fts and unresolved lists). */")
		end

		if modelbuilder.toolcontext.opt_phmod_typing.value then
			self.header.add_decl("#define HASH(mask, id) ((mask)%(id))")
		else if modelbuilder.toolcontext.opt_phand_typing.value then
			self.header.add_decl("#define HASH(mask, id) ((mask)&(id))")
		end

		self.header.add_decl("typedef struct instance val; /* general C type representing a Nit instance. */")
	end

	fun compile_header_attribute_structs
	do
		if modelbuilder.toolcontext.opt_no_union_attribute.value then
			self.header.add_decl("typedef void* nitattribute_t; /* general C type representing a Nit attribute. */")
		else
			self.header.add_decl("typedef union \{")
			self.header.add_decl("void* val;")
			for c, v in self.box_kinds do
				var t = c.mclass_type
				self.header.add_decl("{t.ctype} {t.ctypename};")
			end
			self.header.add_decl("\} nitattribute_t; /* general C type representing a Nit attribute. */")
		end
	end

	fun compile_box_kinds
	do
		# Collect all bas box class
		# FIXME: this is not completely fine with a separate compilation scheme
		for classname in ["Int", "Bool", "Char", "Float", "NativeString", "Pointer"] do
			var classes = self.mainmodule.model.get_mclasses_by_name(classname)
			if classes == null then continue
			assert classes.length == 1 else print classes.join(", ")
			self.box_kinds[classes.first] = self.box_kinds.length + 1
		end
	end

	var box_kinds = new HashMap[MClass, Int]

	fun box_kind_of(mclass: MClass): Int
	do
		if mclass.mclass_type.ctype == "val*" then
			return 0
		else if mclass.kind == extern_kind then
			return self.box_kinds[self.mainmodule.get_primitive_class("Pointer")]
		else
			return self.box_kinds[mclass]
		end

	end

	fun compile_color_consts(colors: Map[Object, Int]) do
		var v = new_visitor
		for m, c in colors do
			if color_consts_done.has(m) then continue
			if m isa MProperty then
				if modelbuilder.toolcontext.opt_inline_coloring_numbers.value then
					self.provide_declaration(m.const_color, "#define {m.const_color} {c}")
				else
					self.provide_declaration(m.const_color, "extern const int {m.const_color};")
					v.add("const int {m.const_color} = {c};")
				end
			else if m isa MType then
				if modelbuilder.toolcontext.opt_inline_coloring_numbers.value then
					self.provide_declaration(m.const_color, "#define {m.const_color} {c}")
				else
					self.provide_declaration(m.const_color, "extern const int {m.const_color};")
					v.add("const int {m.const_color} = {c};")
				end
			end
			color_consts_done.add(m)
		end
	end

	private var color_consts_done = new HashSet[Object]

	# colorize classe properties
	fun do_property_coloring do
		var mclasses = new HashSet[MClass].from(modelbuilder.model.mclasses)

		# Layouts
		var method_layout_builder: PropertyLayoutBuilder[MMethod]
		var attribute_layout_builder: PropertyLayoutBuilder[MAttribute]
		#FIXME PH and BM layouts too slow for large programs
		#if modelbuilder.toolcontext.opt_bm_typing.value then
		#	method_layout_builder = new MMethodBMizer(self.mainmodule)
		#	attribute_layout_builder = new MAttributeBMizer(self.mainmodule)
		#else if modelbuilder.toolcontext.opt_phmod_typing.value then
		#	method_layout_builder = new MMethodHasher(new PHModOperator, self.mainmodule)
		#	attribute_layout_builder = new MAttributeHasher(new PHModOperator, self.mainmodule)
		#else if modelbuilder.toolcontext.opt_phand_typing.value then
		#	method_layout_builder = new MMethodHasher(new PHAndOperator, self.mainmodule)
		#	attribute_layout_builder = new MAttributeHasher(new PHAndOperator, self.mainmodule)
		#else

		var class_layout_builder = new MClassColorer(self.mainmodule)
		class_layout_builder.build_layout(mclasses)
		method_layout_builder = new MMethodColorer(self.mainmodule, class_layout_builder)
		attribute_layout_builder = new MAttributeColorer(self.mainmodule, class_layout_builder)
		#end

		# methods coloration
		var method_layout = method_layout_builder.build_layout(mclasses)
		self.method_tables = build_method_tables(mclasses, method_layout)
		self.compile_color_consts(method_layout.pos)
		self.method_layout = method_layout

		# attributes coloration
		var attr_layout = attribute_layout_builder.build_layout(mclasses)
		self.attr_tables = build_attr_tables(mclasses, attr_layout)
		self.compile_color_consts(attr_layout.pos)
		self.attr_layout = attr_layout
	end

	fun build_method_tables(mclasses: Set[MClass], layout: Layout[MProperty]): Map[MClass, Array[nullable MPropDef]] do
		var tables = new HashMap[MClass, Array[nullable MPropDef]]
		for mclass in mclasses do
			var table = new Array[nullable MPropDef]
			# first, fill table from parents by reverse linearization order
			var parents = new Array[MClass]
			if mainmodule.flatten_mclass_hierarchy.has(mclass) then
				parents = mclass.in_hierarchy(mainmodule).greaters.to_a
				self.mainmodule.linearize_mclasses(parents)
			end
			for parent in parents do
				if parent == mclass then continue
				for mproperty in self.mainmodule.properties(parent) do
					if not mproperty isa MMethod then continue
					var color = layout.pos[mproperty]
					if table.length <= color then
						for i in [table.length .. color[ do
							table[i] = null
						end
					end
					for mpropdef in mproperty.mpropdefs do
						if mpropdef.mclassdef.mclass == parent then
							table[color] = mpropdef
						end
					end
				end
			end

			# then override with local properties
			for mproperty in self.mainmodule.properties(mclass) do
				if not mproperty isa MMethod then continue
				var color = layout.pos[mproperty]
				if table.length <= color then
					for i in [table.length .. color[ do
						table[i] = null
					end
				end
				for mpropdef in mproperty.mpropdefs do
					if mpropdef.mclassdef.mclass == mclass then
						table[color] = mpropdef
					end
				end
			end
			tables[mclass] = table
		end
		return tables
	end

	fun build_attr_tables(mclasses: Set[MClass], layout: Layout[MProperty]): Map[MClass, Array[nullable MPropDef]] do
		var tables = new HashMap[MClass, Array[nullable MPropDef]]
		for mclass in mclasses do
			var table = new Array[nullable MPropDef]
			# first, fill table from parents by reverse linearization order
			var parents = new Array[MClass]
			if mainmodule.flatten_mclass_hierarchy.has(mclass) then
				parents = mclass.in_hierarchy(mainmodule).greaters.to_a
				self.mainmodule.linearize_mclasses(parents)
			end
			for parent in parents do
				if parent == mclass then continue
				for mproperty in self.mainmodule.properties(parent) do
					if not mproperty isa MAttribute then continue
					var color = layout.pos[mproperty]
					if table.length <= color then
						for i in [table.length .. color[ do
							table[i] = null
						end
					end
					for mpropdef in mproperty.mpropdefs do
						if mpropdef.mclassdef.mclass == parent then
							table[color] = mpropdef
						end
					end
				end
			end

			# then override with local properties
			for mproperty in self.mainmodule.properties(mclass) do
				if not mproperty isa MAttribute then continue
				var color = layout.pos[mproperty]
				if table.length <= color then
					for i in [table.length .. color[ do
						table[i] = null
					end
				end
				for mpropdef in mproperty.mpropdefs do
					if mpropdef.mclassdef.mclass == mclass then
						table[color] = mpropdef
					end
				end
			end
			tables[mclass] = table
		end
		return tables
	end

	# colorize live types of the program
	private fun do_type_coloring: POSet[MType] do
		var mtypes = new HashSet[MType]
		mtypes.add_all(self.runtime_type_analysis.live_types)
		mtypes.add_all(self.runtime_type_analysis.live_cast_types)
		mtypes.add_all(self.undead_types)
		for c in self.box_kinds.keys do
			mtypes.add(c.mclass_type)
		end

		for mtype in mtypes do
			retrieve_partial_types(mtype)
		end
		mtypes.add_all(self.partial_types)

		# Typing Layout
		var layout_builder: TypingLayoutBuilder[MType]
		if modelbuilder.toolcontext.opt_bm_typing.value then
			layout_builder = new MTypeBMizer(self.mainmodule)
		else if modelbuilder.toolcontext.opt_phmod_typing.value then
			layout_builder = new MTypeHasher(new PHModOperator, self.mainmodule)
		else if modelbuilder.toolcontext.opt_phand_typing.value then
			layout_builder = new MTypeHasher(new PHAndOperator, self.mainmodule)
		else
			layout_builder = new MTypeColorer(self.mainmodule)
		end

		# colorize types
		self.type_layout = layout_builder.build_layout(mtypes)
		var poset = layout_builder.poset.as(not null)
		self.type_tables = self.build_type_tables(poset)

		# VT and FT are stored with other unresolved types in the big resolution_tables
		self.compile_resolution_tables(mtypes)

		return poset
	end

	# Build type tables
	fun build_type_tables(mtypes: POSet[MType]): Map[MType, Array[nullable MType]] do
		var tables = new HashMap[MType, Array[nullable MType]]
		var layout = self.type_layout
		for mtype in mtypes do
			var table = new Array[nullable MType]
			for sup in mtypes[mtype].greaters do
				var color: Int
				if layout isa PHLayout[MType, MType] then
					color = layout.hashes[mtype][sup]
				else
					color = layout.pos[sup]
				end
				if table.length <= color then
					for i in [table.length .. color[ do
						table[i] = null
					end
				end
				table[color] = sup
			end
			tables[mtype] = table
		end
		return tables
	end

	protected fun compile_resolution_tables(mtypes: Set[MType]) do
		# resolution_tables is used to perform a type resolution at runtime in O(1)

		# During the visit of the body of classes, live_unresolved_types are collected
		# and associated to
		# Collect all live_unresolved_types (visited in the body of classes)

		# Determinate fo each livetype what are its possible requested anchored types
		var mtype2unresolved = new HashMap[MClassType, Set[MType]]
		for mtype in self.runtime_type_analysis.live_types do
			var set = new HashSet[MType]
			for cd in mtype.collect_mclassdefs(self.mainmodule) do
				if self.live_unresolved_types.has_key(cd) then
					set.add_all(self.live_unresolved_types[cd])
				end
			end
			mtype2unresolved[mtype] = set
		end

		# Compute the table layout with the prefered method
		var resolution_builder: ResolutionLayoutBuilder
		if modelbuilder.toolcontext.opt_bm_typing.value then
			resolution_builder = new ResolutionBMizer
		else if modelbuilder.toolcontext.opt_phmod_typing.value then
			resolution_builder = new ResolutionHasher(new PHModOperator)
		else if modelbuilder.toolcontext.opt_phand_typing.value then
			resolution_builder = new ResolutionHasher(new PHAndOperator)
		else
			resolution_builder = new ResolutionColorer
		end
		self.resolution_layout = resolution_builder.build_layout(mtype2unresolved)
		self.resolution_tables = self.build_resolution_tables(mtype2unresolved)

		# Compile a C constant for each collected unresolved type.
		# Either to a color, or to -1 if the unresolved type is dead (no live receiver can require it)
		var all_unresolved = new HashSet[MType]
		for t in self.live_unresolved_types.values do
			all_unresolved.add_all(t)
		end
		var all_unresolved_types_colors = new HashMap[MType, Int]
		for t in all_unresolved do
			if self.resolution_layout.pos.has_key(t) then
				all_unresolved_types_colors[t] = self.resolution_layout.pos[t]
			else
				all_unresolved_types_colors[t] = -1
			end
		end
		self.compile_color_consts(all_unresolved_types_colors)

		#print "tables"
		#for k, v in unresolved_types_tables.as(not null) do
		#	print "{k}: {v.join(", ")}"
		#end
		#print ""
	end

	fun build_resolution_tables(elements: Map[MClassType, Set[MType]]): Map[MClassType, Array[nullable MType]] do
		var tables = new HashMap[MClassType, Array[nullable MType]]
		var layout = self.resolution_layout
		for mclasstype, mtypes in elements do
			var table = new Array[nullable MType]
			for mtype in mtypes do
				var color: Int
				if layout isa PHLayout[MClassType, MType] then
					color = layout.hashes[mclasstype][mtype]
				else
					color = layout.pos[mtype]
				end
				if table.length <= color then
					for i in [table.length .. color[ do
						table[i] = null
					end
				end
				table[color] = mtype
			end
			tables[mclasstype] = table
		end
		return tables
	end

	fun retrieve_partial_types(mtype: MType) do
		# add formal types arguments to mtypes
		if mtype isa MGenericType then
			for ft in mtype.arguments do
				if ft.need_anchor then
					print("Why do we need anchor here ?")
					abort
				end
				self.partial_types.add(ft)
				retrieve_partial_types(ft)
			end
		end
		var mclass_type: MClassType
		if mtype isa MNullableType then
			mclass_type = mtype.mtype.as(MClassType)
		else
			mclass_type = mtype.as(MClassType)
		end

		# add virtual types to mtypes
		for vt in self.mainmodule.properties(mclass_type.mclass) do
			if vt isa MVirtualTypeProp then
				var anchored = vt.mvirtualtype.lookup_bound(self.mainmodule, mclass_type).anchor_to(self.mainmodule, mclass_type)
				self.partial_types.add(anchored)
			end
		end
	end

	# Separately compile all the method definitions of the module
	fun compile_module_to_c(mmodule: MModule)
	do
		var old_module = self.mainmodule
		self.mainmodule = mmodule
		for cd in mmodule.mclassdefs do
			for pd in cd.mpropdefs do
				if not pd isa MMethodDef then continue
				#print "compile {pd} @ {cd} @ {mmodule}"
				var r = pd.separate_runtime_function
				r.compile_to_c(self)
				var r2 = pd.virtual_runtime_function
				r2.compile_to_c(self)
			end
		end
		self.mainmodule = old_module
	end

	# Globaly compile the type structure of a live type
	fun compile_type_to_c(mtype: MType)
	do
		var c_name = mtype.c_name
		var v = new SeparateCompilerVisitor(self)
		v.add_decl("/* runtime type {mtype} */")

		# extern const struct type_X
		self.provide_declaration("type_{c_name}", "extern const struct type type_{c_name};")

		# const struct type_X
		v.add_decl("const struct type type_{c_name} = \{")
		v.add_decl("{self.type_layout.ids[mtype]},")
		v.add_decl("\"{mtype}\", /* class_name_string */")
		var layout = self.type_layout
		if layout isa PHLayout[MType, MType] then
			v.add_decl("{layout.masks[mtype]},")
		else
			v.add_decl("{layout.pos[mtype]},")
		end
		if mtype isa MNullableType then
			v.add_decl("1,")
		else
			v.add_decl("0,")
		end
		if compile_type_resolution_table(mtype) then
			v.require_declaration("resolution_table_{c_name}")
			v.add_decl("&resolution_table_{c_name},")
		else
			v.add_decl("NULL,")
		end
		v.add_decl("{self.type_tables[mtype].length},")
		v.add_decl("\{")
		for stype in self.type_tables[mtype] do
			if stype == null then
				v.add_decl("-1, /* empty */")
			else
				v.add_decl("{self.type_layout.ids[stype]}, /* {stype} */")
			end
		end
		v.add_decl("\},")
		v.add_decl("\};")
	end

	fun compile_type_resolution_table(mtype: MType): Bool do

		var mclass_type: MClassType
		if mtype isa MNullableType then
			mclass_type = mtype.mtype.as(MClassType)
		else
			mclass_type = mtype.as(MClassType)
		end
		if not self.resolution_tables.has_key(mclass_type) then return false

		var layout = self.resolution_layout

		# extern const struct resolution_table_X resolution_table_X
		self.provide_declaration("resolution_table_{mtype.c_name}", "extern const struct types resolution_table_{mtype.c_name};")

		# const struct fts_table_X fts_table_X
		var v = new_visitor
		v.add_decl("const struct types resolution_table_{mtype.c_name} = \{")
		if layout isa PHLayout[MClassType, MType] then
			v.add_decl("{layout.masks[mclass_type]},")
		else
			v.add_decl("0, /* dummy */")
		end
		v.add_decl("\{")
		for t in self.resolution_tables[mclass_type] do
			if t == null then
				v.add_decl("NULL, /* empty */")
			else
				# The table stores the result of the type resolution
				# Therefore, for a receiver `mclass_type`, and a unresolved type `t`
				# the value stored is tv.
				var tv = t.resolve_for(mclass_type, mclass_type, self.mainmodule, true)
				# FIXME: What typeids means here? How can a tv not be live?
				if self.type_layout.ids.has_key(tv) then
					v.require_declaration("type_{tv.c_name}")
					v.add_decl("&type_{tv.c_name}, /* {t}: {tv} */")
				else
					v.add_decl("NULL, /* empty ({t}: {tv} not a live type) */")
				end
			end
		end
		v.add_decl("\}")
		v.add_decl("\};")
		return true
	end

	# Globally compile the table of the class mclass
	# In a link-time optimisation compiler, tables are globally computed
	# In a true separate compiler (a with dynamic loading) you cannot do this unfortnally
	fun compile_class_to_c(mclass: MClass)
	do
		var mtype = mclass.intro.bound_mtype
		var c_name = mclass.c_name

		var vft = self.method_tables[mclass]
		var attrs = self.attr_tables[mclass]
		var v = new_visitor

		var is_dead = not runtime_type_analysis.live_classes.has(mclass) and mtype.ctype == "val*" and mclass.name != "NativeArray"

		v.add_decl("/* runtime class {c_name} */")

		# Build class vft
		if not is_dead then
			self.provide_declaration("class_{c_name}", "extern const struct class class_{c_name};")
			v.add_decl("const struct class class_{c_name} = \{")
			v.add_decl("{self.box_kind_of(mclass)}, /* box_kind */")
			v.add_decl("\{")
			for i in [0 .. vft.length[ do
				var mpropdef = vft[i]
				if mpropdef == null then
					v.add_decl("NULL, /* empty */")
				else
					assert mpropdef isa MMethodDef
					var rf = mpropdef.virtual_runtime_function
					v.require_declaration(rf.c_name)
					v.add_decl("(nitmethod_t){rf.c_name}, /* pointer to {mclass.intro_mmodule}:{mclass}:{mpropdef} */")
				end
			end
			v.add_decl("\}")
			v.add_decl("\};")
		end

		if mtype.ctype != "val*" then
			#Build instance struct
			self.header.add_decl("struct instance_{c_name} \{")
			self.header.add_decl("const struct type *type;")
			self.header.add_decl("const struct class *class;")
			self.header.add_decl("{mtype.ctype} value;")
			self.header.add_decl("\};")

			if not self.runtime_type_analysis.live_types.has(mtype) then return

			#Build BOX
			self.header.add_decl("val* BOX_{c_name}({mtype.ctype});")
			v.add_decl("/* allocate {mtype} */")
			v.add_decl("val* BOX_{mtype.c_name}({mtype.ctype} value) \{")
			v.add("struct instance_{c_name}*res = nit_alloc(sizeof(struct instance_{c_name}));")
			v.require_declaration("type_{c_name}")
			v.add("res->type = &type_{c_name};")
			v.require_declaration("class_{c_name}")
			v.add("res->class = &class_{c_name};")
			v.add("res->value = value;")
			v.add("return (val*)res;")
			v.add("\}")
			return
		else if mclass.name == "NativeArray" then
			#Build instance struct
			self.header.add_decl("struct instance_{c_name} \{")
			self.header.add_decl("const struct type *type;")
			self.header.add_decl("const struct class *class;")
			# NativeArrays are just a instance header followed by an array of values
			self.header.add_decl("val* values[0];")
			self.header.add_decl("\};")

			#Build NEW
			self.provide_declaration("NEW_{c_name}", "{mtype.ctype} NEW_{c_name}(int length, const struct type* type);")
			v.add_decl("/* allocate {mtype} */")
			v.add_decl("{mtype.ctype} NEW_{c_name}(int length, const struct type* type) \{")
			var res = v.new_named_var(mtype, "self")
			res.is_exact = true
			var mtype_elt = mtype.arguments.first
			v.add("{res} = nit_alloc(sizeof(struct instance_{c_name}) + length*sizeof({mtype_elt.ctype}));")
			v.add("{res}->type = type;")
			hardening_live_type(v, "type")
			v.require_declaration("class_{c_name}")
			v.add("{res}->class = &class_{c_name};")
			v.add("return {res};")
			v.add("\}")
			return
		end

		#Build NEW
		self.provide_declaration("NEW_{c_name}", "{mtype.ctype} NEW_{c_name}(const struct type* type);")
		v.add_decl("/* allocate {mtype} */")
		v.add_decl("{mtype.ctype} NEW_{c_name}(const struct type* type) \{")
		if is_dead then
			v.add_abort("{mclass} is DEAD")
		else
			var res = v.new_named_var(mtype, "self")
			res.is_exact = true
			v.add("{res} = nit_alloc(sizeof(struct instance) + {attrs.length}*sizeof(nitattribute_t));")
			v.add("{res}->type = type;")
			hardening_live_type(v, "type")
			v.require_declaration("class_{c_name}")
			v.add("{res}->class = &class_{c_name};")
			self.generate_init_attr(v, res, mtype)
			v.add("return {res};")
		end
		v.add("\}")

		generate_check_init_instance(mtype)
	end

	# Add a dynamic test to ensure that the type referenced by `t` is a live type
	fun hardening_live_type(v: VISITOR, t: String)
	do
		if not v.compiler.modelbuilder.toolcontext.opt_hardening.value then return
		v.add("if({t} == NULL) \{")
		v.add_abort("type null")
		v.add("\}")
		v.add("if({t}->resolution_table == NULL) \{")
		v.add("fprintf(stderr, \"Insantiation of a dead type: %s\\n\", {t}->name);")
		v.add_abort("type dead")
		v.add("\}")
	end

	redef fun generate_check_init_instance(mtype)
	do
		if self.modelbuilder.toolcontext.opt_no_check_initialization.value then return

		var v = self.new_visitor
		var c_name = mtype.mclass.c_name
		var res = new RuntimeVariable("self", mtype, mtype)
		self.provide_declaration("CHECK_NEW_{c_name}", "void CHECK_NEW_{c_name}({mtype.ctype});")
		v.add_decl("/* allocate {mtype} */")
		v.add_decl("void CHECK_NEW_{c_name}({mtype.ctype} {res}) \{")
		if runtime_type_analysis.live_classes.has(mtype.mclass) then
			self.generate_check_attr(v, res, mtype)
		else
			v.add_abort("{mtype.mclass} is DEAD")
		end
		v.add("\}")
	end

	redef fun new_visitor do return new SeparateCompilerVisitor(self)

	# Stats

	private var type_tables: Map[MType, Array[nullable MType]] = new HashMap[MType, Array[nullable MType]]
	private var resolution_tables: Map[MClassType, Array[nullable MType]] = new HashMap[MClassType, Array[nullable MType]]
	protected var method_tables: Map[MClass, Array[nullable MPropDef]] = new HashMap[MClass, Array[nullable MPropDef]]
	protected var attr_tables: Map[MClass, Array[nullable MPropDef]] = new HashMap[MClass, Array[nullable MPropDef]]

	redef fun display_stats
	do
		super
		if self.modelbuilder.toolcontext.opt_tables_metrics.value then
			display_sizes
		end
	end

	fun display_sizes
	do
		print "# size of subtyping tables"
		print "\ttotal \tholes"
		var total = 0
		var holes = 0
		for t, table in type_tables do
			total += table.length
			for e in table do if e == null then holes += 1
		end
		print "\t{total}\t{holes}"

		print "# size of resolution tables"
		print "\ttotal \tholes"
		total = 0
		holes = 0
		for t, table in resolution_tables do
			total += table.length
			for e in table do if e == null then holes += 1
		end
		print "\t{total}\t{holes}"

		print "# size of methods tables"
		print "\ttotal \tholes"
		total = 0
		holes = 0
		for t, table in method_tables do
			total += table.length
			for e in table do if e == null then holes += 1
		end
		print "\t{total}\t{holes}"

		print "# size of attributes tables"
		print "\ttotal \tholes"
		total = 0
		holes = 0
		for t, table in attr_tables do
			total += table.length
			for e in table do if e == null then holes += 1
		end
		print "\t{total}\t{holes}"
	end
end

# A visitor on the AST of property definition that generate the C code of a separate compilation process.
class SeparateCompilerVisitor
	super AbstractCompilerVisitor

	redef type COMPILER: SeparateCompiler

	redef fun adapt_signature(m, args)
	do
		var msignature = m.msignature.resolve_for(m.mclassdef.bound_mtype, m.mclassdef.bound_mtype, m.mclassdef.mmodule, true)
		var recv = args.first
		if recv.mtype.ctype != m.mclassdef.mclass.mclass_type.ctype then
			args.first = self.autobox(args.first, m.mclassdef.mclass.mclass_type)
		end
		for i in [0..msignature.arity[ do
			var t = msignature.mparameters[i].mtype
			if i == msignature.vararg_rank then
				t = args[i+1].mtype
			end
			args[i+1] = self.autobox(args[i+1], t)
		end
	end

	redef fun autobox(value, mtype)
	do
		if value.mtype == mtype then
			return value
		else if value.mtype.ctype == "val*" and mtype.ctype == "val*" then
			return value
		else if value.mtype.ctype == "val*" then
			return self.new_expr("((struct instance_{mtype.c_name}*){value})->value; /* autounbox from {value.mtype} to {mtype} */", mtype)
		else if mtype.ctype == "val*" then
			var valtype = value.mtype.as(MClassType)
			var res = self.new_var(mtype)
			if not compiler.runtime_type_analysis.live_types.has(valtype) then
				self.add("/*no autobox from {value.mtype} to {mtype}: {value.mtype} is not live! */")
				self.add("printf(\"Dead code executed!\\n\"); exit(1);")
				return res
			end
			self.add("{res} = BOX_{valtype.c_name}({value}); /* autobox from {value.mtype} to {mtype} */")
			return res
		else
			# Bad things will appen!
			var res = self.new_var(mtype)
			self.add("/* {res} left unintialized (cannot convert {value.mtype} to {mtype}) */")
			self.add("printf(\"Cast error: Cannot cast %s to %s.\\n\", \"{value.mtype}\", \"{mtype}\"); exit(1);")
			return res
		end
	end

	# Return a C expression returning the runtime type structure of the value
	# The point of the method is to works also with primitives types.
	fun type_info(value: RuntimeVariable): String
	do
		if value.mtype.ctype == "val*" then
			return "{value}->type"
		else
			self.require_declaration("type_{value.mtype.c_name}")
			return "(&type_{value.mtype.c_name})"
		end
	end

	redef fun send(mmethod, arguments)
	do
		if arguments.first.mcasttype.ctype != "val*" then
			# In order to shortcut the primitive, we need to find the most specific method
			# Howverr, because of performance (no flattening), we always work on the realmainmodule
			var m = self.compiler.mainmodule
			self.compiler.mainmodule = self.compiler.realmainmodule
			var res = self.monomorphic_send(mmethod, arguments.first.mcasttype, arguments)
			self.compiler.mainmodule = m
			return res
		end

		var res: nullable RuntimeVariable
		var msignature = mmethod.intro.msignature.resolve_for(mmethod.intro.mclassdef.bound_mtype, mmethod.intro.mclassdef.bound_mtype, mmethod.intro.mclassdef.mmodule, true)
		var ret = msignature.return_mtype
		if mmethod.is_new then
			ret = arguments.first.mtype
			res = self.new_var(ret)
		else if ret == null then
			res = null
		else
			res = self.new_var(ret)
		end

		var s = new Buffer
		var ss = new Buffer

		var recv = arguments.first
		s.append("val*")
		ss.append("{recv}")
		self.varargize(mmethod.intro, mmethod.intro.msignature.as(not null), arguments)
		for i in [0..msignature.arity[ do
			var a = arguments[i+1]
			var t = msignature.mparameters[i].mtype
			if i == msignature.vararg_rank then
				t = arguments[i+1].mcasttype
			end
			s.append(", {t.ctype}")
			a = self.autobox(a, t)
			ss.append(", {a}")
		end

		var consider_null = not self.compiler.modelbuilder.toolcontext.opt_no_check_other.value or mmethod.name == "==" or mmethod.name == "!="
		var maybenull = recv.mcasttype isa MNullableType and consider_null
		if maybenull then
			self.add("if ({recv} == NULL) \{")
			if mmethod.name == "==" then
				assert res != null
				var arg = arguments[1]
				if arg.mcasttype isa MNullableType then
					self.add("{res} = ({arg} == NULL);")
				else if arg.mcasttype isa MNullType then
					self.add("{res} = 1; /* is null */")
				else
					self.add("{res} = 0; /* {arg.inspect} cannot be null */")
				end
			else if mmethod.name == "!=" then
				assert res != null
				var arg = arguments[1]
				if arg.mcasttype isa MNullableType then
					self.add("{res} = ({arg} != NULL);")
				else if arg.mcasttype isa MNullType then
					self.add("{res} = 0; /* is null */")
				else
					self.add("{res} = 1; /* {arg.inspect} cannot be null */")
				end
			else
				self.add_abort("Reciever is null")
			end
			self.add("\} else \{")
		end
		if not self.compiler.modelbuilder.toolcontext.opt_no_shortcut_equate.value and (mmethod.name == "==" or mmethod.name == "!=") then
			assert res != null
			# Recv is not null, thus is arg is, it is easy to conclude (and respect the invariants)
			var arg = arguments[1]
			if arg.mcasttype isa MNullType then
				if mmethod.name == "==" then
					self.add("{res} = 0; /* arg is null but recv is not */")
				else
					self.add("{res} = 1; /* arg is null and recv is not */")
				end
				if maybenull then
					self.add("\}")
				end
				return res
			end
		end

		var r
		if ret == null then r = "void" else r = ret.ctype
		self.require_declaration(mmethod.const_color)
		var call = "(({r} (*)({s}))({arguments.first}->class->vft[{mmethod.const_color}]))({ss}) /* {mmethod} on {arguments.first.inspect}*/"

		if res != null then
			self.add("{res} = {call};")
		else
			self.add("{call};")
		end

		if maybenull then
			self.add("\}")
		end

		return res
	end

	redef fun call(mmethoddef, recvtype, arguments)
	do
		var res: nullable RuntimeVariable
		var ret = mmethoddef.msignature.return_mtype
		if mmethoddef.mproperty.is_new then
			ret = arguments.first.mtype
			res = self.new_var(ret)
		else if ret == null then
			res = null
		else
			ret = ret.resolve_for(mmethoddef.mclassdef.bound_mtype, mmethoddef.mclassdef.bound_mtype, mmethoddef.mclassdef.mmodule, true)
			res = self.new_var(ret)
		end

		if self.compiler.modelbuilder.mpropdef2npropdef.has_key(mmethoddef) and
		self.compiler.modelbuilder.mpropdef2npropdef[mmethoddef] isa AInternMethPropdef and
		not compiler.modelbuilder.toolcontext.opt_no_inline_intern.value then
			var frame = new Frame(self, mmethoddef, recvtype, arguments)
			frame.returnlabel = self.get_name("RET_LABEL")
			frame.returnvar = res
			var old_frame = self.frame
			self.frame = frame
			self.add("\{ /* Inline {mmethoddef} ({arguments.join(",")}) */")
			mmethoddef.compile_inside_to_c(self, arguments)
			self.add("{frame.returnlabel.as(not null)}:(void)0;")
			self.add("\}")
			self.frame = old_frame
			return res
		end

		# Autobox arguments
		self.adapt_signature(mmethoddef, arguments)

		self.require_declaration(mmethoddef.c_name)
		if res == null then
			self.add("{mmethoddef.c_name}({arguments.join(", ")});")
			return null
		else
			self.add("{res} = {mmethoddef.c_name}({arguments.join(", ")});")
		end

		return res
	end

	redef fun supercall(m: MMethodDef, recvtype: MClassType, args: Array[RuntimeVariable]): nullable RuntimeVariable
	do
		# FIXME implements a polymorphic access in tables
		m = m.lookup_next_definition(m.mclassdef.mmodule, m.mclassdef.bound_mtype)
		return self.call(m, recvtype, args)
	end

	redef fun vararg_instance(mpropdef, recv, varargs, elttype)
	do
		# A vararg must be stored into an new array
		# The trick is that the dymaic type of the array may depends on the receiver
		# of the method (ie recv) if the static type is unresolved
		# This is more complex than usual because the unresolved type must not be resolved
		# with the current receiver (ie self).
		# Therefore to isolate the resolution from self, a local Frame is created.
		# One can see this implementation as an inlined method of the receiver whose only
		# job is to allocate the array
		var old_frame = self.frame
		var frame = new Frame(self, mpropdef, mpropdef.mclassdef.bound_mtype, [recv])
		self.frame = frame
		#print "required Array[{elttype}] for recv {recv.inspect}. bound=Array[{self.resolve_for(elttype, recv)}]. selfvar={frame.arguments.first.inspect}"
		var res = self.array_instance(varargs, elttype)
		self.frame = old_frame
		return res
	end

	redef fun isset_attribute(a, recv)
	do
		self.check_recv_notnull(recv)
		var res = self.new_var(bool_type)

		# What is the declared type of the attribute?
		var mtype = a.intro.static_mtype.as(not null)
		var intromclassdef = a.intro.mclassdef
		mtype = mtype.resolve_for(intromclassdef.bound_mtype, intromclassdef.bound_mtype, intromclassdef.mmodule, true)

		if mtype isa MNullableType then
			self.add("{res} = 1; /* easy isset: {a} on {recv.inspect} */")
			return res
		end

		self.require_declaration(a.const_color)
		if self.compiler.modelbuilder.toolcontext.opt_no_union_attribute.value then
			self.add("{res} = {recv}->attrs[{a.const_color}] != NULL; /* {a} on {recv.inspect}*/")
		else

			if mtype.ctype == "val*" then
				self.add("{res} = {recv}->attrs[{a.const_color}].val != NULL; /* {a} on {recv.inspect} */")
			else
				self.add("{res} = 1; /* NOT YET IMPLEMENTED: isset of primitives: {a} on {recv.inspect} */")
			end
		end
		return res
	end

	redef fun read_attribute(a, recv)
	do
		self.check_recv_notnull(recv)

		# What is the declared type of the attribute?
		var ret = a.intro.static_mtype.as(not null)
		var intromclassdef = a.intro.mclassdef
		ret = ret.resolve_for(intromclassdef.bound_mtype, intromclassdef.bound_mtype, intromclassdef.mmodule, true)

		self.require_declaration(a.const_color)
		if self.compiler.modelbuilder.toolcontext.opt_no_union_attribute.value then
			# Get the attribute or a box (ie. always a val*)
			var cret = self.object_type.as_nullable
			var res = self.new_var(cret)
			res.mcasttype = ret

			self.add("{res} = {recv}->attrs[{a.const_color}]; /* {a} on {recv.inspect} */")

			# Check for Uninitialized attribute
			if not ret isa MNullableType and not self.compiler.modelbuilder.toolcontext.opt_no_check_initialization.value then
				self.add("if ({res} == NULL) \{")
				self.add_abort("Uninitialized attribute {a.name}")
				self.add("\}")
			end

			# Return the attribute or its unboxed version
			# Note: it is mandatory since we reuse the box on write, we do not whant that the box escapes
			return self.autobox(res, ret)
		else
			var res = self.new_var(ret)
			self.add("{res} = {recv}->attrs[{a.const_color}].{ret.ctypename}; /* {a} on {recv.inspect} */")

			# Check for Uninitialized attribute
			if ret.ctype == "val*" and not ret isa MNullableType and not self.compiler.modelbuilder.toolcontext.opt_no_check_initialization.value then
				self.add("if ({res} == NULL) \{")
				self.add_abort("Uninitialized attribute {a.name}")
				self.add("\}")
			end

			return res
		end
	end

	redef fun write_attribute(a, recv, value)
	do
		self.check_recv_notnull(recv)

		# What is the declared type of the attribute?
		var mtype = a.intro.static_mtype.as(not null)
		var intromclassdef = a.intro.mclassdef
		mtype = mtype.resolve_for(intromclassdef.bound_mtype, intromclassdef.bound_mtype, intromclassdef.mmodule, true)

		# Adapt the value to the declared type
		value = self.autobox(value, mtype)

		self.require_declaration(a.const_color)
		if self.compiler.modelbuilder.toolcontext.opt_no_union_attribute.value then
			var attr = "{recv}->attrs[{a.const_color}]"
			if mtype.ctype != "val*" then
				assert mtype isa MClassType
				# The attribute is primitive, thus we store it in a box
				# The trick is to create the box the first time then resuse the box
				self.add("if ({attr} != NULL) \{")
				self.add("((struct instance_{mtype.c_name}*){attr})->value = {value}; /* {a} on {recv.inspect} */")
				self.add("\} else \{")
				value = self.autobox(value, self.object_type.as_nullable)
				self.add("{attr} = {value}; /* {a} on {recv.inspect} */")
				self.add("\}")
			else
				# The attribute is not primitive, thus store it direclty
				self.add("{attr} = {value}; /* {a} on {recv.inspect} */")
			end
		else
			self.add("{recv}->attrs[{a.const_color}].{mtype.ctypename} = {value}; /* {a} on {recv.inspect} */")
		end
	end

	redef fun init_instance(mtype)
	do
		self.require_declaration("NEW_{mtype.mclass.c_name}")
		var compiler = self.compiler
		if mtype isa MGenericType and mtype.need_anchor then
			link_unresolved_type(self.frame.mpropdef.mclassdef, mtype)
			var recv = self.frame.arguments.first
			var recv_type_info = self.type_info(recv)
			self.require_declaration(mtype.const_color)
			if compiler.modelbuilder.toolcontext.opt_phmod_typing.value or compiler.modelbuilder.toolcontext.opt_phand_typing.value then
				return self.new_expr("NEW_{mtype.mclass.c_name}({recv_type_info}->resolution_table->types[HASH({recv_type_info}->resolution_table->mask, {mtype.const_color})])", mtype)
			else
				return self.new_expr("NEW_{mtype.mclass.c_name}({recv_type_info}->resolution_table->types[{mtype.const_color}])", mtype)
			end
		end
		compiler.undead_types.add(mtype)
		self.require_declaration("type_{mtype.c_name}")
		return self.new_expr("NEW_{mtype.mclass.c_name}(&type_{mtype.c_name})", mtype)
	end

	redef fun check_init_instance(value, mtype)
	do
		if self.compiler.modelbuilder.toolcontext.opt_no_check_initialization.value then return
		self.require_declaration("CHECK_NEW_{mtype.mclass.c_name}")
		self.add("CHECK_NEW_{mtype.mclass.c_name}({value});")
	end

	redef fun type_test(value, mtype, tag)
	do
		self.add("/* {value.inspect} isa {mtype} */")
		var compiler = self.compiler

		var recv = self.frame.arguments.first
		var recv_type_info = self.type_info(recv)

		var res = self.new_var(bool_type)

		var cltype = self.get_name("cltype")
		self.add_decl("int {cltype};")
		var idtype = self.get_name("idtype")
		self.add_decl("int {idtype};")

		var maybe_null = self.maybe_null(value)
		var accept_null = "0"
		var ntype = mtype
		if ntype isa MNullableType then
			ntype = ntype.mtype
			accept_null = "1"
		end

		if value.mcasttype.is_subtype(self.frame.mpropdef.mclassdef.mmodule, self.frame.mpropdef.mclassdef.bound_mtype, mtype) then
			self.add("{res} = 1; /* easy {value.inspect} isa {mtype}*/")
			if compiler.modelbuilder.toolcontext.opt_typing_test_metrics.value then
				self.compiler.count_type_test_skipped[tag] += 1
				self.add("count_type_test_skipped_{tag}++;")
			end
			return res
		end

		if ntype.need_anchor then
			var type_struct = self.get_name("type_struct")
			self.add_decl("const struct type* {type_struct};")

			# Either with resolution_table with a direct resolution
			link_unresolved_type(self.frame.mpropdef.mclassdef, ntype)
			self.require_declaration(ntype.const_color)
			if compiler.modelbuilder.toolcontext.opt_phmod_typing.value or compiler.modelbuilder.toolcontext.opt_phand_typing.value then
				self.add("{type_struct} = {recv_type_info}->resolution_table->types[HASH({recv_type_info}->resolution_table->mask, {ntype.const_color})];")
			else
				self.add("{type_struct} = {recv_type_info}->resolution_table->types[{ntype.const_color}];")
			end
			if compiler.modelbuilder.toolcontext.opt_typing_test_metrics.value then
				self.compiler.count_type_test_unresolved[tag] += 1
				self.add("count_type_test_unresolved_{tag}++;")
			end
			self.add("{cltype} = {type_struct}->color;")
			self.add("{idtype} = {type_struct}->id;")
			if maybe_null and accept_null == "0" then
				var is_nullable = self.get_name("is_nullable")
				self.add_decl("short int {is_nullable};")
				self.add("{is_nullable} = {type_struct}->is_nullable;")
				accept_null = is_nullable.to_s
			end
		else if ntype isa MClassType then
			compiler.undead_types.add(mtype)
			self.require_declaration("type_{mtype.c_name}")
			self.add("{cltype} = type_{mtype.c_name}.color;")
			self.add("{idtype} = type_{mtype.c_name}.id;")
			if compiler.modelbuilder.toolcontext.opt_typing_test_metrics.value then
				self.compiler.count_type_test_resolved[tag] += 1
				self.add("count_type_test_resolved_{tag}++;")
			end
		else
			self.add("printf(\"NOT YET IMPLEMENTED: type_test(%s, {mtype}).\\n\", \"{value.inspect}\"); exit(1);")
		end

		# check color is in table
		if maybe_null then
			self.add("if({value} == NULL) \{")
			self.add("{res} = {accept_null};")
			self.add("\} else \{")
		end
		var value_type_info = self.type_info(value)
		if compiler.modelbuilder.toolcontext.opt_phmod_typing.value or compiler.modelbuilder.toolcontext.opt_phand_typing.value then
			self.add("{cltype} = HASH({value_type_info}->color, {idtype});")
		end
		self.add("if({cltype} >= {value_type_info}->table_size) \{")
		self.add("{res} = 0;")
		self.add("\} else \{")
		self.add("{res} = {value_type_info}->type_table[{cltype}] == {idtype};")
		self.add("\}")
		if maybe_null then
			self.add("\}")
		end

		return res
	end

	redef fun is_same_type_test(value1, value2)
	do
		var res = self.new_var(bool_type)
		# Swap values to be symetric
		if value2.mtype.ctype != "val*" and value1.mtype.ctype == "val*" then
			var tmp = value1
			value1 = value2
			value2 = tmp
		end
		if value1.mtype.ctype != "val*" then
			if value2.mtype == value1.mtype then
				self.add("{res} = 1; /* is_same_type_test: compatible types {value1.mtype} vs. {value2.mtype} */")
			else if value2.mtype.ctype != "val*" then
				self.add("{res} = 0; /* is_same_type_test: incompatible types {value1.mtype} vs. {value2.mtype}*/")
			else
				var mtype1 = value1.mtype.as(MClassType)
				self.require_declaration("class_{mtype1.c_name}")
				self.add("{res} = ({value2} != NULL) && ({value2}->class == &class_{mtype1.c_name}); /* is_same_type_test */")
			end
		else
			self.add("{res} = ({value1} == {value2}) || ({value1} != NULL && {value2} != NULL && {value1}->class == {value2}->class); /* is_same_type_test */")
		end
		return res
	end

	redef fun class_name_string(value)
	do
		var res = self.get_name("var_class_name")
		self.add_decl("const char* {res};")
		if value.mtype.ctype == "val*" then
			self.add "{res} = {value} == NULL ? \"null\" : {value}->type->name;"
		else
			self.require_declaration("type_{value.mtype.c_name}")
			self.add "{res} = type_{value.mtype.c_name}.name;"
		end
		return res
	end

	redef fun equal_test(value1, value2)
	do
		var res = self.new_var(bool_type)
		if value2.mtype.ctype != "val*" and value1.mtype.ctype == "val*" then
			var tmp = value1
			value1 = value2
			value2 = tmp
		end
		if value1.mtype.ctype != "val*" then
			if value2.mtype == value1.mtype then
				self.add("{res} = {value1} == {value2};")
			else if value2.mtype.ctype != "val*" then
				self.add("{res} = 0; /* incompatible types {value1.mtype} vs. {value2.mtype}*/")
			else
				var mtype1 = value1.mtype.as(MClassType)
				self.require_declaration("class_{mtype1.c_name}")
				self.add("{res} = ({value2} != NULL) && ({value2}->class == &class_{mtype1.c_name});")
				self.add("if ({res}) \{")
				self.add("{res} = ({self.autobox(value2, value1.mtype)} == {value1});")
				self.add("\}")
			end
			return res
		end
		var maybe_null = true
		var test = new Array[String]
		var t1 = value1.mcasttype
		if t1 isa MNullableType then
			test.add("{value1} != NULL")
			t1 = t1.mtype
		else
			maybe_null = false
		end
		var t2 = value2.mcasttype
		if t2 isa MNullableType then
			test.add("{value2} != NULL")
			t2 = t2.mtype
		else
			maybe_null = false
		end

		var incompatible = false
		var primitive
		if t1.ctype != "val*" then
			primitive = t1
			if t1 == t2 then
				# No need to compare class
			else if t2.ctype != "val*" then
				incompatible = true
			else if can_be_primitive(value2) then
				test.add("{value1}->class == {value2}->class")
			else
				incompatible = true
			end
		else if t2.ctype != "val*" then
			primitive = t2
			if can_be_primitive(value1) then
				test.add("{value1}->class == {value2}->class")
			else
				incompatible = true
			end
		else
			primitive = null
		end

		if incompatible then
			if maybe_null then
				self.add("{res} = {value1} == {value2}; /* incompatible types {t1} vs. {t2}; but may be NULL*/")
				return res
			else
				self.add("{res} = 0; /* incompatible types {t1} vs. {t2}; cannot be NULL */")
				return res
			end
		end
		if primitive != null then
			test.add("((struct instance_{primitive.c_name}*){value1})->value == ((struct instance_{primitive.c_name}*){value2})->value")
		else if can_be_primitive(value1) and can_be_primitive(value2) then
			test.add("{value1}->class == {value2}->class")
			var s = new Array[String]
			for t, v in self.compiler.box_kinds do
				s.add "({value1}->class->box_kind == {v} && ((struct instance_{t.c_name}*){value1})->value == ((struct instance_{t.c_name}*){value2})->value)"
			end
			test.add("({s.join(" || ")})")
		else
			self.add("{res} = {value1} == {value2};")
			return res
		end
		self.add("{res} = {value1} == {value2} || ({test.join(" && ")});")
		return res
	end

	fun can_be_primitive(value: RuntimeVariable): Bool
	do
		var t = value.mcasttype
		if t isa MNullableType then t = t.mtype
		if not t isa MClassType then return false
		var k = t.mclass.kind
		return k == interface_kind or t.ctype != "val*"
	end

	fun maybe_null(value: RuntimeVariable): Bool
	do
		var t = value.mcasttype
		return t isa MNullableType or t isa MNullType
	end

	redef fun array_instance(array, elttype)
	do
		var nclass = self.get_class("NativeArray")
		var arrayclass = self.get_class("Array")
		var arraytype = arrayclass.get_mtype([elttype])
		var res = self.init_instance(arraytype)
		self.add("\{ /* {res} = array_instance Array[{elttype}] */")
		var length = self.int_instance(array.length)
		var nat = native_array_instance(elttype, length)
		for i in [0..array.length[ do
			var r = self.autobox(array[i], self.object_type)
			self.add("((struct instance_{nclass.c_name}*){nat})->values[{i}] = (val*) {r};")
		end
		self.send(self.get_property("with_native", arrayclass.intro.bound_mtype), [res, nat, length])
		self.check_init_instance(res, arraytype)
		self.add("\}")
		return res
	end

	fun native_array_instance(elttype: MType, length: RuntimeVariable): RuntimeVariable
	do
		var mtype = self.get_class("NativeArray").get_mtype([elttype])
		self.require_declaration("NEW_{mtype.mclass.c_name}")
		assert mtype isa MGenericType
		var compiler = self.compiler
		if mtype.need_anchor then
			link_unresolved_type(self.frame.mpropdef.mclassdef, mtype)
			var recv = self.frame.arguments.first
			var recv_type_info = self.type_info(recv)
			self.require_declaration(mtype.const_color)
			if compiler.modelbuilder.toolcontext.opt_phmod_typing.value or compiler.modelbuilder.toolcontext.opt_phand_typing.value then
				return self.new_expr("NEW_{mtype.mclass.c_name}({length}, {recv_type_info}->resolution_table->types[HASH({recv_type_info}->resolution_table->mask, {mtype.const_color})])", mtype)
			else
				return self.new_expr("NEW_{mtype.mclass.c_name}({length}, {recv_type_info}->resolution_table->types[{mtype.const_color}])", mtype)
			end
		end
		compiler.undead_types.add(mtype)
		self.require_declaration("type_{mtype.c_name}")
		return self.new_expr("NEW_{mtype.mclass.c_name}({length}, &type_{mtype.c_name})", mtype)
	end

	redef fun native_array_def(pname, ret_type, arguments)
	do
		var elttype = arguments.first.mtype
		var nclass = self.get_class("NativeArray")
		var recv = "((struct instance_{nclass.c_name}*){arguments[0]})->values"
		if pname == "[]" then
			self.ret(self.new_expr("{recv}[{arguments[1]}]", ret_type.as(not null)))
			return
		else if pname == "[]=" then
			self.add("{recv}[{arguments[1]}]={arguments[2]};")
			return
		else if pname == "copy_to" then
			var recv1 = "((struct instance_{nclass.c_name}*){arguments[1]})->values"
			self.add("memcpy({recv1}, {recv}, {arguments[2]}*sizeof({elttype.ctype}));")
			return
		end
	end

	redef fun calloc_array(ret_type, arguments)
	do
		var mclass = self.get_class("ArrayCapable")
		var ft = mclass.mclass_type.arguments.first.as(MParameterType)
		var res = self.native_array_instance(ft, arguments[1])
		self.ret(res)
	end

	fun link_unresolved_type(mclassdef: MClassDef, mtype: MType) do
		assert mtype.need_anchor
		var compiler = self.compiler
		if not compiler.live_unresolved_types.has_key(self.frame.mpropdef.mclassdef) then
			compiler.live_unresolved_types[self.frame.mpropdef.mclassdef] = new HashSet[MType]
		end
		compiler.live_unresolved_types[self.frame.mpropdef.mclassdef].add(mtype)
	end
end

redef class MMethodDef
	fun separate_runtime_function: AbstractRuntimeFunction
	do
		var res = self.separate_runtime_function_cache
		if res == null then
			res = new SeparateRuntimeFunction(self)
			self.separate_runtime_function_cache = res
		end
		return res
	end
	private var separate_runtime_function_cache: nullable SeparateRuntimeFunction

	fun virtual_runtime_function: AbstractRuntimeFunction
	do
		var res = self.virtual_runtime_function_cache
		if res == null then
			res = new VirtualRuntimeFunction(self)
			self.virtual_runtime_function_cache = res
		end
		return res
	end
	private var virtual_runtime_function_cache: nullable VirtualRuntimeFunction
end

# The C function associated to a methoddef separately compiled
class SeparateRuntimeFunction
	super AbstractRuntimeFunction

	redef fun build_c_name: String do return "{mmethoddef.c_name}"

	redef fun to_s do return self.mmethoddef.to_s

	redef fun compile_to_c(compiler)
	do
		var mmethoddef = self.mmethoddef

		var recv = self.mmethoddef.mclassdef.bound_mtype
		var v = compiler.new_visitor
		var selfvar = new RuntimeVariable("self", recv, recv)
		var arguments = new Array[RuntimeVariable]
		var frame = new Frame(v, mmethoddef, recv, arguments)
		v.frame = frame

		var msignature = mmethoddef.msignature.resolve_for(mmethoddef.mclassdef.bound_mtype, mmethoddef.mclassdef.bound_mtype, mmethoddef.mclassdef.mmodule, true)

		var sig = new Buffer
		var comment = new Buffer
		var ret = msignature.return_mtype
		if ret != null then
			sig.append("{ret.ctype} ")
		else if mmethoddef.mproperty.is_new then
			ret = recv
			sig.append("{ret.ctype} ")
		else
			sig.append("void ")
		end
		sig.append(self.c_name)
		sig.append("({selfvar.mtype.ctype} {selfvar}")
		comment.append("({selfvar}: {selfvar.mtype}")
		arguments.add(selfvar)
		for i in [0..msignature.arity[ do
			var mtype = msignature.mparameters[i].mtype
			if i == msignature.vararg_rank then
				mtype = v.get_class("Array").get_mtype([mtype])
			end
			comment.append(", {mtype}")
			sig.append(", {mtype.ctype} p{i}")
			var argvar = new RuntimeVariable("p{i}", mtype, mtype)
			arguments.add(argvar)
		end
		sig.append(")")
		comment.append(")")
		if ret != null then
			comment.append(": {ret}")
		end
		compiler.provide_declaration(self.c_name, "{sig};")

		v.add_decl("/* method {self} for {comment} */")
		v.add_decl("{sig} \{")
		if ret != null then
			frame.returnvar = v.new_var(ret)
		end
		frame.returnlabel = v.get_name("RET_LABEL")

		if recv != arguments.first.mtype then
			#print "{self} {recv} {arguments.first}"
		end
		mmethoddef.compile_inside_to_c(v, arguments)

		v.add("{frame.returnlabel.as(not null)}:;")
		if ret != null then
			v.add("return {frame.returnvar.as(not null)};")
		end
		v.add("\}")
	end
end

# The C function associated to a methoddef on a primitive type, stored into a VFT of a class
# The first parameter (the reciever) is always typed by val* in order to accept an object value
class VirtualRuntimeFunction
	super AbstractRuntimeFunction

	redef fun build_c_name: String do return "VIRTUAL_{mmethoddef.c_name}"

	redef fun to_s do return self.mmethoddef.to_s

	redef fun compile_to_c(compiler)
	do
		var mmethoddef = self.mmethoddef

		var recv = self.mmethoddef.mclassdef.bound_mtype
		var v = compiler.new_visitor
		var selfvar = new RuntimeVariable("self", v.object_type, recv)
		var arguments = new Array[RuntimeVariable]
		var frame = new Frame(v, mmethoddef, recv, arguments)
		v.frame = frame

		var sig = new Buffer
		var comment = new Buffer

		# Because the function is virtual, the signature must match the one of the original class
		var intromclassdef = self.mmethoddef.mproperty.intro.mclassdef
		var msignature = mmethoddef.mproperty.intro.msignature.resolve_for(intromclassdef.bound_mtype, intromclassdef.bound_mtype, intromclassdef.mmodule, true)
		var ret = msignature.return_mtype
		if ret != null then
			sig.append("{ret.ctype} ")
		else if mmethoddef.mproperty.is_new then
			ret = recv
			sig.append("{ret.ctype} ")
		else
			sig.append("void ")
		end
		sig.append(self.c_name)
		sig.append("({selfvar.mtype.ctype} {selfvar}")
		comment.append("({selfvar}: {selfvar.mtype}")
		arguments.add(selfvar)
		for i in [0..msignature.arity[ do
			var mtype = msignature.mparameters[i].mtype
			if i == msignature.vararg_rank then
				mtype = v.get_class("Array").get_mtype([mtype])
			end
			comment.append(", {mtype}")
			sig.append(", {mtype.ctype} p{i}")
			var argvar = new RuntimeVariable("p{i}", mtype, mtype)
			arguments.add(argvar)
		end
		sig.append(")")
		comment.append(")")
		if ret != null then
			comment.append(": {ret}")
		end
		compiler.provide_declaration(self.c_name, "{sig};")

		v.add_decl("/* method {self} for {comment} */")
		v.add_decl("{sig} \{")
		if ret != null then
			frame.returnvar = v.new_var(ret)
		end
		frame.returnlabel = v.get_name("RET_LABEL")

		var subret = v.call(mmethoddef, recv, arguments)
		if ret != null then
			assert subret != null
			v.assign(frame.returnvar.as(not null), subret)
		end

		v.add("{frame.returnlabel.as(not null)}:;")
		if ret != null then
			v.add("return {frame.returnvar.as(not null)};")
		end
		v.add("\}")
	end

	# TODO ?
	redef fun call(v, arguments) do abort
end

redef class MType
	fun const_color: String do return "COLOR_{c_name}"
end

redef class MProperty
	fun const_color: String do return "COLOR_{c_name}"
end
