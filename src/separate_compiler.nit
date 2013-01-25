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


import global_compiler # TODO better separation of concerns
import coloring

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

	# --generic-resolution-tree
	var opt_generic_tree: OptionBool = new OptionBool("Use tree representation for live generic types instead of flattened representation", "--generic-resolution-tree")

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
		self.option_context.add_option(self.opt_generic_tree)
	end
end

redef class ModelBuilder
	fun run_separate_compiler(mainmodule: MModule, runtime_type_analysis: RapidTypeAnalysis)
	do
		var time0 = get_time
		self.toolcontext.info("*** COMPILING TO C ***", 1)

		var compiler = new SeparateCompiler(mainmodule, runtime_type_analysis, self)
		compiler.compile_header

		# compile class structures
		for m in mainmodule.in_importation.greaters do
			for mclass in m.intro_mclasses do
				compiler.compile_class_to_c(mclass)
			end
		end

		# The main function of the C
		compiler.new_file
		compiler.compile_main_function

		# compile methods
		for m in mainmodule.in_importation.greaters do
			compiler.new_file
			compiler.compile_module_to_c(m)
		end

		# compile live & cast type structures
		compiler.new_file
		var mtypes = compiler.do_type_coloring
		for t in mtypes do
			compiler.compile_type_to_c(t)
		end

		if self.toolcontext.opt_generic_tree.value then
			# compile live generic types selection structures
			for mclass in model.mclasses do
				compiler.compile_live_gentype_to_c(mclass)
			end
		end

		compiler.display_stats

		write_and_make(compiler)
	end
end

# Singleton that store the knowledge about the separate compilation process
class SeparateCompiler
	super GlobalCompiler # TODO better separation of concerns

	private var undead_types: Set[MType] = new HashSet[MType]
	private var partial_types: Set[MType] = new HashSet[MType]
	protected var typeids: HashMap[MType, Int] protected writable = new HashMap[MType, Int]

	private var type_colors: Map[MType, Int] = typeids
	private var type_tables: nullable Map[MType, Array[nullable MType]] = null

	private var livetypes_colors: nullable Map[MType, Int]
	private var livetypes_tables: nullable Map[MClass, Array[nullable Object]]
	private var livetypes_tables_sizes: nullable Map[MClass, Array[Int]]
	private var live_unanchored_types: Map[MClassDef, Set[MType]] = new HashMap[MClassDef, HashSet[MType]]

	private var unanchored_types_colors: nullable Map[MType, Int]
	private var unanchored_types_tables: nullable Map[MClassType, Array[nullable MType]]
	private var unanchored_types_masks: nullable Map[MClassType, Int]

	protected var class_coloring: ClassColoring

	protected var method_colors: Map[MMethod, Int]
	protected var method_tables: Map[MClass, Array[nullable MMethodDef]]

	protected var attr_colors: Map[MAttribute, Int]
	protected var attr_tables: Map[MClass, Array[nullable MAttributeDef]]

	protected var vt_colors: Map[MVirtualTypeProp, Int]
	protected var vt_tables: Map[MClass, Array[nullable MVirtualTypeDef]]
	protected var vt_masks: nullable Map[MClass, Int]

	private var ft_colors: nullable Map[MParameterType, Int]
	private var ft_tables: nullable Map[MClass, Array[nullable MParameterType]]
	private var ft_masks: nullable Map[MClass, Int]

	init(mainmodule: MModule, runtime_type_analysis: RapidTypeAnalysis, mmbuilder: ModelBuilder) do
		self.do_property_coloring
		self.compile_box_kinds
	end

	redef fun compile_header_structs do
		self.header.add_decl("typedef void(*nitmethod_t)(void); /* general C type representing a Nit method. */")
		self.compile_header_attribute_structs
		self.header.add_decl("struct class \{ int box_kind; nitmethod_t vft[1]; \}; /* general C type representing a Nit class. */")

		if modelbuilder.toolcontext.opt_generic_tree.value then
			# With generic_tree, only ft and vt resolution is stored in the type
			self.header.add_decl("struct type \{ int id; const char *name; int color; short int is_nullable; int livecolor; struct types *vts_table; struct types *fts_table; int table_size; int type_table[1]; \}; /* general C type representing a Nit type. */")
		else
			# With unanchored_table, all live type resolution are stored in a big table: unanchored_table
			self.header.add_decl("struct type \{ int id; const char *name; int color; short int is_nullable; struct types *unanchored_table; int table_size; int type_table[1]; \}; /* general C type representing a Nit type. */")
		end

		if modelbuilder.toolcontext.opt_phmod_typing.value or modelbuilder.toolcontext.opt_phand_typing.value then
			self.header.add_decl("struct types \{ int mask; struct type *types[1]; \}; /* a list types (used for vts, fts and unanchored lists). */")
		else
			self.header.add_decl("struct types \{ struct type *types[1]; \}; /* a list types (used for vts, fts and unanchored lists). */")
		end


		self.header.add_decl("typedef struct \{ struct type *type; struct class *class; nitattribute_t attrs[1]; \} val; /* general C type representing a Nit instance. */")
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

	redef fun compile_class_names do
		abort # There is no class name compilation since the name is stored in the type structure
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
		for m, c in colors do
			if m isa MProperty then
				if modelbuilder.toolcontext.opt_inline_coloring_numbers.value then
					self.header.add_decl("#define {m.const_color} {c}")
				else
					self.header.add_decl("extern const int {m.const_color};")
					self.header.add("const int {m.const_color} = {c};")
				end
			else if m isa MType then
				if modelbuilder.toolcontext.opt_inline_coloring_numbers.value then
					self.header.add_decl("#define {m.const_color} {c}")
				else
					self.header.add_decl("extern const int {m.const_color};")
					self.header.add("const int {m.const_color} = {c};")
				end
			end
		end
	end

	# colorize classe properties
	fun do_property_coloring do

		# classes coloration
		self.class_coloring = new ClassColoring(mainmodule)
		class_coloring.colorize(modelbuilder.model.mclasses)

		# methods coloration
		var method_coloring = new MethodColoring(self.class_coloring)
		self.method_colors = method_coloring.colorize
		self.method_tables = method_coloring.build_property_tables
		self.compile_color_consts(self.method_colors)

		# attributes coloration
		var attribute_coloring = new AttributeColoring(self.class_coloring)
		self.attr_colors = attribute_coloring.colorize
		self.attr_tables = attribute_coloring.build_property_tables
		self.compile_color_consts(self.attr_colors)

		if modelbuilder.toolcontext.opt_bm_typing.value then
			self.class_coloring = new NaiveClassColoring(mainmodule)
			self.class_coloring.colorize(modelbuilder.model.mclasses)
		end

		# vt coloration
		if modelbuilder.toolcontext.opt_bm_typing.value then
			var vt_coloring = new NaiveVTColoring(self.class_coloring)
			self.vt_colors = vt_coloring.colorize
			self.vt_tables = vt_coloring.build_property_tables
		else if modelbuilder.toolcontext.opt_phmod_typing.value then
			var vt_coloring = new VTModPerfectHashing(self.class_coloring)
			self.vt_colors = vt_coloring.colorize
			self.vt_masks = vt_coloring.compute_masks
			self.vt_tables = vt_coloring.build_property_tables
		else if modelbuilder.toolcontext.opt_phand_typing.value then
			var vt_coloring = new VTAndPerfectHashing(self.class_coloring)
			self.vt_colors = vt_coloring.colorize
			self.vt_masks = vt_coloring.compute_masks
			self.vt_tables = vt_coloring.build_property_tables
		else
			var vt_coloring = new VTColoring(self.class_coloring)
			self.vt_colors = vt_coloring.colorize
			self.vt_tables = vt_coloring.build_property_tables
		end
		self.compile_color_consts(self.vt_colors)
	end

	# colorize live types of the program
	private fun do_type_coloring: Set[MType] do
		var mtypes = new HashSet[MType]
		mtypes.add_all(self.runtime_type_analysis.live_types)
		mtypes.add_all(self.runtime_type_analysis.live_cast_types)
		mtypes.add_all(self.undead_types)
		for c in self.box_kinds.keys do
			mtypes.add(c.mclass_type)
		end

		for mtype in mtypes do
			retieve_live_partial_types(mtype)
		end
		mtypes.add_all(self.partial_types)

		# set type unique id
		if modelbuilder.toolcontext.opt_phmod_typing.value or modelbuilder.toolcontext.opt_phand_typing.value then
			var sorted_mtypes = new OrderedSet[MType].from(mtypes)
			sorted_mtypes.linearize(new ReverseTypeSorter(self.mainmodule))
			for mtype in sorted_mtypes do
				self.typeids[mtype] = self.typeids.length + 1
			end
		else
			for mtype in mtypes do
				self.typeids[mtype] = self.typeids.length
			end
		end

		if modelbuilder.toolcontext.opt_generic_tree.value then
			# fts coloration for non-erased compilation
			if modelbuilder.toolcontext.opt_bm_typing.value then
				var ft_coloring = new NaiveFTColoring(self.class_coloring)
				self.ft_colors = ft_coloring.colorize
				self.ft_tables = ft_coloring.build_ft_tables
			else if modelbuilder.toolcontext.opt_phmod_typing.value then
				var ft_coloring = new FTModPerfectHashing(self.class_coloring)
				self.ft_colors = ft_coloring.colorize
				self.ft_masks = ft_coloring.compute_masks
				self.ft_tables = ft_coloring.build_ft_tables
			else if modelbuilder.toolcontext.opt_phand_typing.value then
				var ft_coloring = new FTAndPerfectHashing(self.class_coloring)
				self.ft_colors = ft_coloring.colorize
				self.ft_masks = ft_coloring.compute_masks
				self.ft_tables = ft_coloring.build_ft_tables
			else
				var ft_coloring = new FTColoring(self.class_coloring)
				self.ft_colors = ft_coloring.colorize
				self.ft_tables = ft_coloring.build_ft_tables
			end
			self.compile_color_consts(self.ft_colors.as(not null))

			# colorize live entries
			var entries_coloring
			if modelbuilder.toolcontext.opt_bm_typing.value then
				entries_coloring = new NaiveLiveEntryColoring
			else
				entries_coloring = new LiveEntryColoring
			end
			self.livetypes_colors = entries_coloring.colorize(mtypes)
			self.livetypes_tables = entries_coloring.build_livetype_tables(mtypes)
			self.livetypes_tables_sizes = entries_coloring.livetypes_tables_sizes
		else
			# VT and FT are stored with other unresolved types in the big unanchored_tables
			self.compile_unanchored_tables(mtypes)
		end

		# colorize types
		if modelbuilder.toolcontext.opt_bm_typing.value then
			var type_coloring = new NaiveTypeColoring(self.mainmodule, mtypes)
			self.type_colors = type_coloring.colorize(mtypes)
			self.type_tables = type_coloring.build_type_tables(mtypes, type_colors)
		else if modelbuilder.toolcontext.opt_phmod_typing.value then
			var type_coloring = new TypeModPerfectHashing(self.mainmodule, mtypes)
			self.type_colors = type_coloring.compute_masks(mtypes, typeids)
			self.type_tables = type_coloring.hash_type_tables(mtypes, typeids, type_colors)
			self.header.add_decl("#define HASH(mask, id) ((mask)%(id))")
		else if modelbuilder.toolcontext.opt_phand_typing.value then
			var type_coloring = new TypeAndPerfectHashing(self.mainmodule, mtypes)
			self.type_colors = type_coloring.compute_masks(mtypes, typeids)
			self.type_tables = type_coloring.hash_type_tables(mtypes, typeids, type_colors)
			self.header.add_decl("#define HASH(mask, id) ((mask)&(id))")
		else
			var type_coloring = new TypeColoring(self.mainmodule, mtypes)
			self.type_colors = type_coloring.colorize(mtypes)
			self.type_tables = type_coloring.build_type_tables(mtypes, type_colors)
		end


		return mtypes
	end

	protected fun compile_unanchored_tables(mtypes: Set[MType]) do
		# Unanchored_tables is used to perform a type resolution at runtime in O(1)

		# During the visit of the body of classes, live_unanchored_types are collected
		# and associated to
		# Collect all live_unanchored_types (visited in the body of classes)

		# Determinate fo each livetype what are its possible requested anchored types
		var mtype2unanchored = new HashMap[MClassType, Set[MType]]
		for mtype in self.runtime_type_analysis.live_types do
			var set = new HashSet[MType]
			for cd in mtype.collect_mclassdefs(self.mainmodule) do
				if self.live_unanchored_types.has_key(cd) then
					set.add_all(self.live_unanchored_types[cd])
				end
			end
			mtype2unanchored[mtype] = set
		end

		# Compute the table layout with the prefered method
		if modelbuilder.toolcontext.opt_bm_typing.value then
			var unanchored_type_coloring = new NaiveUnanchoredTypeColoring
			self.unanchored_types_colors = unanchored_type_coloring.colorize(mtype2unanchored)
			self.unanchored_types_tables = unanchored_type_coloring.build_tables(mtype2unanchored)
		else if modelbuilder.toolcontext.opt_phmod_typing.value then
			var unanchored_type_coloring = new UnanchoredTypeModPerfectHashing
			self.unanchored_types_colors = unanchored_type_coloring.colorize(mtype2unanchored)
			self.unanchored_types_masks = unanchored_type_coloring.compute_masks(mtype2unanchored)
			self.unanchored_types_tables = unanchored_type_coloring.build_tables(mtype2unanchored)
		else if modelbuilder.toolcontext.opt_phand_typing.value then
			var unanchored_type_coloring = new UnanchoredTypeAndPerfectHashing
			self.unanchored_types_colors = unanchored_type_coloring.colorize(mtype2unanchored)
			self.unanchored_types_masks = unanchored_type_coloring.compute_masks(mtype2unanchored)
			self.unanchored_types_tables = unanchored_type_coloring.build_tables(mtype2unanchored)
		else
			var unanchored_type_coloring = new UnanchoredTypeColoring
			self.unanchored_types_colors = unanchored_type_coloring.colorize(mtype2unanchored)
			self.unanchored_types_tables = unanchored_type_coloring.build_tables(mtype2unanchored)
		end

		# Compile a C constant for each collected unanchored type.
		# Either to a color, or to -1 if the unanchored type is dead (no live receiver can require it)
		var all_unanchored = new HashSet[MType]
		for t in self.live_unanchored_types.values do
			all_unanchored.add_all(t)
		end
		var all_unanchored_types_colors = new HashMap[MType, Int]
		for t in all_unanchored do
			if unanchored_types_colors.has_key(t) then
				all_unanchored_types_colors[t] = unanchored_types_colors[t]
			else
				all_unanchored_types_colors[t] = -1
			end
		end
		self.compile_color_consts(all_unanchored_types_colors)

		#print "tables"
		#for k, v in unanchored_types_tables.as(not null) do
		#	print "{k}: {v.join(", ")}"
		#end
		#print ""
	end

	fun retieve_live_partial_types(mtype: MType) do
		# add formal types arguments to mtypes
		if mtype isa MGenericType then
			for ft in mtype.arguments do
				if ft.need_anchor then
					print("Why do we need anchor here ?")
					abort
				end
				self.partial_types.add(ft)
				retieve_live_partial_types(ft)
			end
		end
		var mclass_type: MClassType
		if mtype isa MNullableType then
			mclass_type = mtype.mtype.as(MClassType)
		else
			mclass_type = mtype.as(MClassType)
		end

		# add virtual types to mtypes
		for vt in self.vt_tables[mclass_type.mclass] do
			if vt != null then
				var anchored = vt.bound.anchor_to(self.mainmodule, mclass_type)
				self.partial_types.add(anchored)
			end
		end
	end

	# declare live generic types tables selection
	private fun compile_live_gentype_to_c(mclass: MClass) do
		if mclass.arity > 0 then
			if self.livetypes_tables.has_key(mclass) then
				var table = self.livetypes_tables[mclass]
				var sign = self.livetypes_tables_sizes[mclass]
				var table_buffer = new Buffer.from("const struct type *livetypes_{mclass.c_name}[{sign.join("][")}] = \{\n")
				compile_livetype_table(table, table_buffer, 1, mclass.arity)
				table_buffer.append("\};")

				var v = new SeparateCompilerVisitor(self)
				self.header.add_decl("extern const struct type *livetypes_{mclass.c_name}[{sign.join("][")}];")
				v.add_decl(table_buffer.to_s)
			else
				var sign = new Array[Int].filled_with(0, mclass.arity)
				var v = new SeparateCompilerVisitor(self)
				self.header.add_decl("extern const struct type *livetypes_{mclass.c_name}[{sign.join("][")}];")
				v.add_decl("const struct type *livetypes_{mclass.c_name}[{sign.join("][")}];")
			end
		end
	end

	private fun compile_livetype_table(table: Array[nullable Object], buffer: Buffer, depth: Int, max: Int) do
		for obj in table do
			if obj == null then
				if depth == max then
					buffer.append("NULL,\n")
				else
					buffer.append("\{\},\n")
				end
			else if obj isa MClassType then
				buffer.append("(struct type*) &type_{obj.c_name}, /* {obj} */\n")
			else if obj isa Array[nullable Object] then
				buffer.append("\{\n")
				compile_livetype_table(obj, buffer, depth + 1, max)
				buffer.append("\},\n")
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
				var r = new SeparateRuntimeFunction(pd)
				r.compile_to_c(self)
				if true or cd.bound_mtype.ctype != "val*" then
					var r2 = new VirtualRuntimeFunction(pd)
					r2.compile_to_c(self)
				end
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
		self.header.add_decl("extern const struct type_{c_name} type_{c_name};")
		self.header.add_decl("struct type_{c_name} \{")
		self.header.add_decl("int id;")
		self.header.add_decl("const char *name;")
		self.header.add_decl("int color;")
		self.header.add_decl("short int is_nullable;")
		if modelbuilder.toolcontext.opt_generic_tree.value then
			self.header.add_decl("int livecolor;")
			self.header.add_decl("const struct vts_table_{c_name} *vts_table;")
			self.header.add_decl("const struct fts_table_{c_name} *fts_table;")
		else
			self.header.add_decl("const struct types *unanchored_table;")
		end
		self.header.add_decl("int table_size;")
		self.header.add_decl("int type_table[{self.type_tables[mtype].length}];")
		self.header.add_decl("\};")

		# const struct type_X
		v.add_decl("const struct type_{c_name} type_{c_name} = \{")
		v.add_decl("{self.typeids[mtype]},")
		v.add_decl("\"{mtype}\", /* class_name_string */")
		v.add_decl("{self.type_colors[mtype]},")
		if mtype isa MNullableType then
			v.add_decl("1,")
		else
			v.add_decl("0,")
		end
		if modelbuilder.toolcontext.opt_generic_tree.value then
			v.add_decl("{self.livetypes_colors[mtype]},")
			if compile_type_vts_table(mtype) then
				v.add_decl("&vts_table_{c_name},")
			else
				v.add_decl("NULL,")
			end
			if compile_type_fts_table(mtype) then
				v.add_decl("&fts_table_{c_name},")
			else
				v.add_decl("NULL,")
			end
		else
			if compile_type_unanchored_table(mtype) then
				v.add_decl("(struct types*) &unanchored_table_{c_name},")
			else
				v.add_decl("NULL,")
			end
		end
		v.add_decl("{self.type_tables[mtype].length},")
		v.add_decl("\{")
		for stype in self.type_tables[mtype] do
			if stype == null then
				v.add_decl("-1, /* empty */")
			else
				v.add_decl("{self.typeids[stype]}, /* {stype} */")
			end
		end
		v.add_decl("\},")
		v.add_decl("\};")
	end

	protected fun compile_type_fts_table(mtype: MType): Bool do

		var mclass_type: MClassType
		if mtype isa MNullableType then
			mclass_type = mtype.mtype.as(MClassType)
		else
			mclass_type = mtype.as(MClassType)
		end
		if self.ft_tables[mclass_type.mclass].is_empty then return false

		# extern const struct fst_table_X fst_table_X
		self.header.add_decl("extern const struct fts_table_{mtype.c_name} fts_table_{mtype.c_name};")
		self.header.add_decl("struct fts_table_{mtype.c_name} \{")
		if modelbuilder.toolcontext.opt_phmod_typing.value or modelbuilder.toolcontext.opt_phand_typing.value then
			self.header.add_decl("int mask;")
		end
		self.header.add_decl("struct type *types[{self.ft_tables[mclass_type.mclass].length}];")
		self.header.add_decl("\};")

		# const struct fts_table_X fts_table_X
		var v = new_visitor
		v.add_decl("const struct fts_table_{mtype.c_name} fts_table_{mtype.c_name} = \{")
		if modelbuilder.toolcontext.opt_phmod_typing.value or modelbuilder.toolcontext.opt_phand_typing.value then
			v.add_decl("{self.ft_masks[mclass_type.mclass]},")
		end
		v.add_decl("\{")
		for ft in self.ft_tables[mclass_type.mclass] do
			if ft == null then
				v.add_decl("NULL, /* empty */")
			else
				var ntype: MType
				if ft.mclass == mclass_type.mclass then
					ntype = mclass_type.arguments[ft.rank]
				else
					ntype = ft.anchor_to(self.mainmodule, mclass_type)
				end
				if self.typeids.has_key(ntype) then
					v.add_decl("(struct type*)&type_{ntype.c_name}, /* {ft} ({ntype}) */")
				else
					v.add_decl("NULL, /* empty ({ft} not a live type) */")
				end
			end
		end
		v.add_decl("\},")
		v.add_decl("\};")
		return true
	end

	protected fun compile_type_vts_table(mtype: MType): Bool do

		var mclass_type: MClassType
		if mtype isa MNullableType then
			mclass_type = mtype.mtype.as(MClassType)
		else
			mclass_type = mtype.as(MClassType)
		end
		if self.vt_tables[mclass_type.mclass].is_empty then return false

		# extern const struct vts_table_X vts_table_X
		self.header.add_decl("extern const struct vts_table_{mtype.c_name} vts_table_{mtype.c_name};")
		self.header.add_decl("struct vts_table_{mtype.c_name} \{")
		if modelbuilder.toolcontext.opt_phmod_typing.value or modelbuilder.toolcontext.opt_phand_typing.value then
			self.header.add_decl("int mask;")
		end
		self.header.add_decl("struct type *types[{self.vt_tables[mclass_type.mclass].length}];")
		self.header.add_decl("\};")

		# const struct vts_table_X vts_table_X
		var v = new_visitor
		v.add_decl("const struct vts_table_{mtype.c_name} vts_table_{mtype.c_name} = \{")
		if modelbuilder.toolcontext.opt_phmod_typing.value or modelbuilder.toolcontext.opt_phand_typing.value then
			v.add_decl("{vt_masks[mclass_type.mclass]},")
		end
		v.add_decl("\{")

		for vt in self.vt_tables[mclass_type.mclass] do
			if vt == null then
				v.add_decl("NULL, /* empty */")
			else
				var bound = vt.bound
				if bound == null then
					#FIXME how can a bound be null here ?
					print "No bound found for virtual type {vt} ?"
					abort
				else
					var is_nullable = ""
					if bound isa MNullableType then
						bound = bound.mtype
						is_nullable = "nullable_"
					end
					if bound isa MVirtualType then
						bound = bound.anchor_to(self.mainmodule, mclass_type)
					else if bound isa MParameterType then
						bound = bound.anchor_to(self.mainmodule, mclass_type)
					else if bound isa MGenericType and bound.need_anchor then
						bound = bound.anchor_to(self.mainmodule, mclass_type)
					else if bound isa MClassType then
					else
						print "NOT YET IMPLEMENTED: mtype_to_livetype with type: {bound}"
						abort
					end

					if self.typeids.has_key(bound) then
						v.add_decl("(struct type*)&type_{is_nullable}{bound.c_name}, /* {bound} */")
					else
						v.add_decl("NULL, /* dead type {bound} */")
					end
				end
			end
		end
		v.add_decl("\},")
		v.add_decl("\};")
		return true
	end

	fun compile_type_unanchored_table(mtype: MType): Bool do

		var mclass_type: MClassType
		if mtype isa MNullableType then
			mclass_type = mtype.mtype.as(MClassType)
		else
			mclass_type = mtype.as(MClassType)
		end
		if not self.unanchored_types_tables.has_key(mclass_type) then return false

		# extern const struct unanchored_table_X unanchored_table_X
		self.header.add_decl("extern const struct unanchored_table_{mtype.c_name} unanchored_table_{mtype.c_name};")

		self.header.add_decl("struct unanchored_table_{mtype.c_name} \{")
		if modelbuilder.toolcontext.opt_phmod_typing.value or modelbuilder.toolcontext.opt_phand_typing.value then
			self.header.add_decl("int mask;")
		end
		self.header.add_decl("struct type *types[{self.unanchored_types_tables[mclass_type].length}];")
		self.header.add_decl("\};")

		# const struct fts_table_X fts_table_X
		var v = new_visitor
		v.add_decl("const struct unanchored_table_{mtype.c_name} unanchored_table_{mtype.c_name} = \{")
		if modelbuilder.toolcontext.opt_phmod_typing.value or modelbuilder.toolcontext.opt_phand_typing.value then
			v.add_decl("{self.unanchored_types_masks[mclass_type]},")
		end
		v.add_decl("\{")
		for t in self.unanchored_types_tables[mclass_type] do
			if t == null then
				v.add_decl("NULL, /* empty */")
			else
				# The table stores the result of the type resolution
				# Therefore, for a receiver `mclass_type`, and a unresolved type `t`
				# the value stored is tv.
				var tv = t.resolve_for(mclass_type, mclass_type, self.mainmodule, true)
				# FIXME: What typeids means here? How can a tv not be live?
				if self.typeids.has_key(tv) then
					v.add_decl("(struct type*)&type_{tv.c_name}, /* {t}: {tv} */")
				else
					v.add_decl("NULL, /* empty ({t}: {tv} not a live type) */")
				end
			end
		end
		v.add_decl("\},")
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

		v.add_decl("/* runtime class {c_name} */")
		var idnum = classids.length
		var idname = "ID_" + c_name
		self.classids[mtype] = idname
		#self.header.add_decl("#define {idname} {idnum} /* {c_name} */")

		self.header.add_decl("struct class_{c_name} \{")
		self.header.add_decl("int box_kind;")
		self.header.add_decl("nitmethod_t vft[{vft.length}];")
		self.header.add_decl("\};")

		# Build class vft
		self.header.add_decl("extern const struct class_{c_name} class_{c_name};")
		v.add_decl("const struct class_{c_name} class_{c_name} = \{")
		v.add_decl("{self.box_kind_of(mclass)}, /* box_kind */")
		v.add_decl("\{")
		for i in [0 .. vft.length[ do
			var mpropdef = vft[i]
			if mpropdef == null then
				v.add_decl("NULL, /* empty */")
			else
				if true or mpropdef.mclassdef.bound_mtype.ctype != "val*" then
					v.add_decl("(nitmethod_t)VIRTUAL_{mpropdef.c_name}, /* pointer to {mclass.intro_mmodule}:{mclass}:{mpropdef} */")
				else
					v.add_decl("(nitmethod_t){mpropdef.c_name}, /* pointer to {mclass.intro_mmodule}:{mclass}:{mpropdef} */")
				end
			end
		end
		v.add_decl("\}")
		v.add_decl("\};")

		if mtype.ctype != "val*" then
			#Build instance struct
			self.header.add_decl("struct instance_{c_name} \{")
			self.header.add_decl("const struct type *type;")
			self.header.add_decl("const struct class *class;")
			self.header.add_decl("{mtype.ctype} value;")
			self.header.add_decl("\};")

			if not self.runtime_type_analysis.live_types.has(mtype) then return

			self.header.add_decl("val* BOX_{c_name}({mtype.ctype});")
			v.add_decl("/* allocate {mtype} */")
			v.add_decl("val* BOX_{mtype.c_name}({mtype.ctype} value) \{")
			v.add("struct instance_{c_name}*res = GC_MALLOC(sizeof(struct instance_{c_name}));")
			v.add("res->type = (struct type*) &type_{c_name};")
			v.add("res->class = (struct class*) &class_{c_name};")
			v.add("res->value = value;")
			v.add("return (val*)res;")
			v.add("\}")
			return
		end

		var is_native_array = mclass.name == "NativeArray"

		var sig
		if is_native_array then
			sig = "int length, struct type* type"
		else
			sig = "struct type* type"
		end

		#Build instance struct
		#extern const struct instance_array__NativeArray instance_array__NativeArray;
		self.header.add_decl("struct instance_{c_name} \{")
		self.header.add_decl("const struct type *type;")
		self.header.add_decl("const struct class *class;")
		self.header.add_decl("nitattribute_t attrs[{attrs.length}];")
		if is_native_array then
			# NativeArrays are just a instance header followed by an array of values
			self.header.add_decl("val* values[0];")
		end
		self.header.add_decl("\};")


		self.header.add_decl("{mtype.ctype} NEW_{c_name}({sig});")
		v.add_decl("/* allocate {mtype} */")
		v.add_decl("{mtype.ctype} NEW_{c_name}({sig}) \{")
		var res = v.new_named_var(mtype, "self")
		res.is_exact = true
		if is_native_array then
			var mtype_elt = mtype.arguments.first
			v.add("{res} = GC_MALLOC(sizeof(struct instance_{c_name}) + length*sizeof({mtype_elt.ctype}));")
		else
			v.add("{res} = GC_MALLOC(sizeof(struct instance_{c_name}));")
		end
		v.add("{res}->type = type;")
		if v.compiler.modelbuilder.toolcontext.opt_hardening.value then
			v.add("if(type == NULL) \{")
			v.add_abort("type null")
			v.add("\}")
			if not v.compiler.modelbuilder.toolcontext.opt_generic_tree.value then
				v.add("if(type->unanchored_table == NULL) \{")
				v.add("fprintf(stderr, \"Insantiation of a dead type: %s\\n\", type->name);")
				v.add_abort("type dead")
				v.add("\}")
			end
		end
		v.add("{res}->class = (struct class*) &class_{c_name};")

		self.generate_init_attr(v, res, mtype)
		v.add("return {res};")
		v.add("\}")

		generate_check_init_instance(mtype)
	end

	redef fun generate_check_init_instance(mtype)
	do
		if self.modelbuilder.toolcontext.opt_no_check_initialization.value then return

		var v = self.new_visitor
		var c_name = mtype.mclass.c_name
		var res = new RuntimeVariable("self", mtype, mtype)
		self.header.add_decl("void CHECK_NEW_{c_name}({mtype.ctype});")
		v.add_decl("/* allocate {mtype} */")
		v.add_decl("void CHECK_NEW_{c_name}({mtype.ctype} {res}) \{")
		self.generate_check_attr(v, res, mtype)
		v.add("\}")
	end

	redef fun new_visitor do return new SeparateCompilerVisitor(self)
end

# The C function associated to a methoddef separately compiled
class SeparateRuntimeFunction
	super AbstractRuntimeFunction

	redef fun build_c_name: String
	do
		return "{mmethoddef.c_name}"
	end

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
		comment.append("(self: {selfvar}")
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
		compiler.header.add_decl("{sig};")

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

	redef fun build_c_name: String
	do
		return "VIRTUAL_{mmethoddef.c_name}"
	end

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
		comment.append("(self: {selfvar}")
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
		compiler.header.add_decl("{sig};")

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

	redef fun call(v, arguments)
	do
		abort
		# TODO ?
	end
end

# A visitor on the AST of property definition that generate the C code of a separate compilation process.
class SeparateCompilerVisitor
	super GlobalCompilerVisitor # TODO better separation of concerns

	redef fun adapt_signature(m: MMethodDef, args: Array[RuntimeVariable])
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

	# Box or unbox a value to another type iff a C type conversion is needed
	# ENSURE: result.mtype.ctype == mtype.ctype
	redef fun autobox(value: RuntimeVariable, mtype: MType): RuntimeVariable
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
			return "(&type_{value.mtype.c_name})"
		end
	end

	redef fun send(mmethod, arguments)
	do
		if arguments.first.mcasttype.ctype != "val*" then
			return self.monomorphic_send(mmethod, arguments.first.mcasttype, arguments)
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
		# This is more complex than usual because the unanchored type must not be resolved
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

	# Build livetype structure retrieving
	#ENSURE: mtype.need_anchor
	fun retrieve_anchored_livetype(mtype: MGenericType, buffer: Buffer) do
		assert mtype.need_anchor

		var compiler = self.compiler.as(SeparateCompiler)
		for ft in mtype.arguments do

			var ntype = ft
			var s: String = ""
			if ntype isa MNullableType then
				ntype = ntype.mtype
			end

			var recv = self.frame.arguments.first
			var recv_type_info = self.type_info(recv)
			if ntype isa MParameterType then
				if compiler.modelbuilder.toolcontext.opt_phmod_typing.value or compiler.modelbuilder.toolcontext.opt_phand_typing.value then
					buffer.append("[{recv_type_info}->fts_table->types[HASH({recv_type_info}->fts_table->mask, {ntype.const_color})]->livecolor]")
				else
					buffer.append("[{recv_type_info}->fts_table->types[{ntype.const_color}]->livecolor]")
				end
			else if ntype isa MVirtualType then
				if compiler.modelbuilder.toolcontext.opt_phmod_typing.value or compiler.modelbuilder.toolcontext.opt_phand_typing.value then
					buffer.append("[{recv_type_info}->vts_table->types[HASH({recv_type_info}->vts_table->mask, {ntype.mproperty.const_color})]->livecolor]")
				else
					buffer.append("[{recv_type_info}->vts_table->types[{ntype.mproperty.const_color}]->livecolor]")
				end
			else if ntype isa MGenericType and ntype.need_anchor then
				var bbuff = new Buffer
				retrieve_anchored_livetype(ntype, bbuff)
				buffer.append("[livetypes_{ntype.mclass.c_name}{bbuff.to_s}->livecolor]")
			else if ntype isa MClassType then
				compiler.undead_types.add(ft)
				buffer.append("[type_{ft.c_name}.livecolor]")
			else
				self.add("printf(\"NOT YET IMPLEMENTED: init_instance(%s, {mtype}).\\n\", \"{ft}\"); exit(1);")
			end
		end
	end

	redef fun init_instance(mtype)
	do
		var compiler = self.compiler.as(SeparateCompiler)
		if mtype isa MGenericType and mtype.need_anchor then
			if compiler.modelbuilder.toolcontext.opt_generic_tree.value then
				var buff = new Buffer
				retrieve_anchored_livetype(mtype, buff)
				mtype = self.anchor(mtype).as(MClassType)
				return self.new_expr("NEW_{mtype.mclass.c_name}((struct type *) livetypes_{mtype.mclass.c_name}{buff.to_s})", mtype)
			else
				link_unanchored_type(self.frame.mpropdef.mclassdef, mtype)
				var recv = self.frame.arguments.first
				var recv_type_info = self.type_info(recv)
				if compiler.modelbuilder.toolcontext.opt_phmod_typing.value or compiler.modelbuilder.toolcontext.opt_phand_typing.value then
					return self.new_expr("NEW_{mtype.mclass.c_name}((struct type *) {recv_type_info}->unanchored_table->types[HASH({recv_type_info}->unanchored_table->mask, {mtype.const_color})])", mtype)
				else
					return self.new_expr("NEW_{mtype.mclass.c_name}((struct type *) {recv_type_info}->unanchored_table->types[{mtype.const_color}])", mtype)
				end
			end
		end
		compiler.undead_types.add(mtype)
		return self.new_expr("NEW_{mtype.mclass.c_name}((struct type *) &type_{mtype.c_name})", mtype)
	end

	redef fun check_init_instance(value, mtype)
	do
		if self.compiler.modelbuilder.toolcontext.opt_no_check_initialization.value then return
		self.add("CHECK_NEW_{mtype.mclass.c_name}({value});")
	end


	redef fun type_test(value, mtype, tag)
	do
		self.add("/* {value.inspect} isa {mtype} */")
		var compiler = self.compiler.as(SeparateCompiler)

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
			self.add_decl("struct type* {type_struct};")

			# For unresolved types, there is two implementations
			if compiler.modelbuilder.toolcontext.opt_generic_tree.value then
				# Either with the generic_tree and the construction of a type
				if ntype isa MParameterType then
					if compiler.modelbuilder.toolcontext.opt_phmod_typing.value or compiler.modelbuilder.toolcontext.opt_phand_typing.value then
						self.add("{type_struct} = {recv_type_info}->fts_table->types[HASH({recv_type_info}->fts_table->mask, {ntype.const_color})];")
					else
						self.add("{type_struct} = {recv_type_info}->fts_table->types[{ntype.const_color}];")
					end
				else if ntype isa MVirtualType then
					var vtcolor = ntype.mproperty.const_color
					if compiler.modelbuilder.toolcontext.opt_phmod_typing.value or compiler.modelbuilder.toolcontext.opt_phand_typing.value then
						self.add("{type_struct} = {recv_type_info}->vts_table->types[HASH({recv_type_info}->vts_table->mask, {vtcolor})];")
					else
						self.add("{type_struct} = {recv_type_info}->vts_table->types[{vtcolor}];")
					end
				else if ntype isa MGenericType then
					var buff = new Buffer
					retrieve_anchored_livetype(ntype, buff)
					self.add("{type_struct} = (struct type*)livetypes_{ntype.mclass.c_name}{buff.to_s};")
				end
			else
				# Either with unanchored_table with a direct resolution
				link_unanchored_type(self.frame.mpropdef.mclassdef, ntype)
				if compiler.modelbuilder.toolcontext.opt_phmod_typing.value or compiler.modelbuilder.toolcontext.opt_phand_typing.value then
					self.add("{type_struct} = {recv_type_info}->unanchored_table->types[HASH({recv_type_info}->unanchored_table->mask, {ntype.const_color})];")
				else
					self.add("{type_struct} = {recv_type_info}->unanchored_table->types[{ntype.const_color}];")
				end
				if compiler.modelbuilder.toolcontext.opt_typing_test_metrics.value then
					self.compiler.count_type_test_unresolved[tag] += 1
					self.add("count_type_test_unresolved_{tag}++;")
				end
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
				self.add("{res} = ({value2} != NULL) && ({value2}->class == (struct class*) &class_{mtype1.c_name}); /* is_same_type_test */")
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
				self.add("{res} = ({value2} != NULL) && ({value2}->class == (struct class*) &class_{mtype1.c_name});")
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
			for t, v in self.compiler.as(SeparateCompiler).box_kinds do
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
		assert mtype isa MGenericType
		var compiler = self.compiler.as(SeparateCompiler)
		if mtype.need_anchor then
			if compiler.modelbuilder.toolcontext.opt_generic_tree.value then
				var buff = new Buffer
				retrieve_anchored_livetype(mtype, buff)
				mtype = self.anchor(mtype).as(MClassType)
				return self.new_expr("NEW_{mtype.mclass.c_name}({length}, (struct type *) livetypes_{mtype.mclass.c_name}{buff.to_s})", mtype)
			else
				link_unanchored_type(self.frame.mpropdef.mclassdef, mtype)
				var recv = self.frame.arguments.first
				var recv_type_info = self.type_info(recv)
				if compiler.modelbuilder.toolcontext.opt_phmod_typing.value or compiler.modelbuilder.toolcontext.opt_phand_typing.value then
					return self.new_expr("NEW_{mtype.mclass.c_name}({length}, (struct type *) {recv_type_info}->unanchored_table->types[HASH({recv_type_info}->unanchored_table->mask, {mtype.const_color})])", mtype)
				else
					return self.new_expr("NEW_{mtype.mclass.c_name}({length}, (struct type *) {recv_type_info}->unanchored_table->types[{mtype.const_color}])", mtype)
				end
			end
		end
		compiler.undead_types.add(mtype)
		return self.new_expr("NEW_{mtype.mclass.c_name}({length}, (struct type *) &type_{mtype.c_name})", mtype)
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

	fun link_unanchored_type(mclassdef: MClassDef, mtype: MType) do
		assert mtype.need_anchor
		var compiler = self.compiler.as(SeparateCompiler)
		if not compiler.live_unanchored_types.has_key(self.frame.mpropdef.mclassdef) then
			compiler.live_unanchored_types[self.frame.mpropdef.mclassdef] = new HashSet[MType]
		end
		compiler.live_unanchored_types[self.frame.mpropdef.mclassdef].add(mtype)
	end
end

redef class MClass
	# Return the name of the C structure associated to a Nit class
	fun c_name: String do
		var res = self.c_name_cache
		if res != null then return res
		res = "{intro_mmodule.name.to_cmangle}__{name.to_cmangle}"
		self.c_name_cache = res
		return res
	end
	private var c_name_cache: nullable String
end

redef class MType
	fun const_color: String do return "COLOR_{c_name}"
end

redef class MParameterType
	redef fun c_name
	do
		var res = self.c_name_cache
		if res != null then return res
		res = "{self.mclass.c_name}_FT{self.rank}"
		self.c_name_cache = res
		return res
	end
end

redef class MVirtualType
	redef fun c_name
	do
		var res = self.c_name_cache
		if res != null then return res
		res = "{self.mproperty.intro.mclassdef.mclass.c_name}_VT{self.mproperty.name}"
		self.c_name_cache = res
		return res
	end
end

redef class MNullableType
	redef fun c_name
	do
		var res = self.c_name_cache
		if res != null then return res
		res = "nullable_{self.mtype.c_name}"
		self.c_name_cache = res
		return res
	end
end

redef class MProperty
	fun c_name: String do
		var res = self.c_name_cache
		if res != null then return res
		res = "{self.intro.c_name}"
		self.c_name_cache = res
		return res
	end
	private var c_name_cache: nullable String

	fun const_color: String do return "COLOR_{c_name}"
end
