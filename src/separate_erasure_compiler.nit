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

# Separate compilation of a Nit program with generic type erasure
module separate_erasure_compiler

intrude import separate_compiler

# Add separate erased compiler specific options
redef class ToolContext
	# --erasure
	var opt_erasure: OptionBool = new OptionBool("Erase generic types", "--erasure")
	# --no-check-erasure-cast
	var opt_no_check_erasure_cast: OptionBool = new OptionBool("Disable implicit casts on unsafe return with erasure-typing policy (dangerous)", "--no-check-erasure-cast")

	redef init
	do
		super
		self.option_context.add_option(self.opt_erasure, self.opt_no_check_erasure_cast)
	end
end

redef class ModelBuilder
	fun run_separate_erasure_compiler(mainmodule: MModule, runtime_type_analysis: RapidTypeAnalysis)
	do
		var time0 = get_time
		self.toolcontext.info("*** GENERATING C ***", 1)

		var compiler = new SeparateErasureCompiler(mainmodule, self, runtime_type_analysis)
		compiler.compile_header

		# compile class structures
		self.toolcontext.info("Property coloring", 2)
		compiler.new_file("{mainmodule.name}.tables")
		compiler.do_property_coloring
		for m in mainmodule.in_importation.greaters do
			for mclass in m.intro_mclasses do
				compiler.compile_class_to_c(mclass)
			end
		end
		compiler.compile_color_consts(compiler.vt_layout.pos)

		# The main function of the C
		compiler.new_file("{mainmodule.name}.main")
		compiler.compile_main_function

		# compile methods
		for m in mainmodule.in_importation.greaters do
			self.toolcontext.info("Generate C for module {m}", 2)
			compiler.new_file("{m.name}.sep")
			compiler.compile_module_to_c(m)
		end

		compiler.display_stats

		var time1 = get_time
		self.toolcontext.info("*** END GENERATING C: {time1-time0} ***", 2)
		write_and_make(compiler)
	end
end

class SeparateErasureCompiler
	super SeparateCompiler

	private var class_layout: nullable Layout[MClass]
	protected var vt_layout: nullable Layout[MVirtualTypeProp]

	init(mainmodule: MModule, mmbuilder: ModelBuilder, runtime_type_analysis: RapidTypeAnalysis) do
		super

		var mclasses = new HashSet[MClass].from(mmbuilder.model.mclasses)

		var layout_builder: TypingLayoutBuilder[MClass]
		var class_colorer = new MClassColorer(mainmodule)
		if modelbuilder.toolcontext.opt_phmod_typing.value then
			layout_builder = new MClassHasher(new PHModOperator, mainmodule)
			class_colorer.build_layout(mclasses)
		else if modelbuilder.toolcontext.opt_phand_typing.value then
			layout_builder = new MClassHasher(new PHAndOperator, mainmodule)
			class_colorer.build_layout(mclasses)
		else if modelbuilder.toolcontext.opt_bm_typing.value then
			layout_builder = new MClassBMizer(mainmodule)
			class_colorer.build_layout(mclasses)
		else
			layout_builder = class_colorer
		end
		self.class_layout = layout_builder.build_layout(mclasses)
		self.class_tables = self.build_class_typing_tables(mclasses)

		# vt coloration
		var vt_coloring = new MVirtualTypePropColorer(mainmodule, class_colorer)
		var vt_layout = vt_coloring.build_layout(mclasses)
		self.vt_tables = build_vt_tables(mclasses, vt_layout)
		self.vt_layout = vt_layout
	end

	fun build_vt_tables(mclasses: Set[MClass], layout: Layout[MProperty]): Map[MClass, Array[nullable MPropDef]] do
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
					if not mproperty isa MVirtualTypeProp then continue
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
				if not mproperty isa MVirtualTypeProp then continue
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

	# Build class tables
	fun build_class_typing_tables(mclasses: Set[MClass]): Map[MClass, Array[nullable MClass]] do
		var tables = new HashMap[MClass, Array[nullable MClass]]
		var layout = self.class_layout
		for mclass in mclasses do
			var table = new Array[nullable MClass]
			var supers = new Array[MClass]
			if mainmodule.flatten_mclass_hierarchy.has(mclass) then
				supers = mclass.in_hierarchy(mainmodule).greaters.to_a
			end
			for sup in supers do
				var color: Int
				if layout isa PHLayout[MClass, MClass] then
					color = layout.hashes[mclass][sup]
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
			tables[mclass] = table
		end
		return tables
	end

	redef fun compile_header_structs do
		self.header.add_decl("typedef void(*nitmethod_t)(void); /* general C type representing a Nit method. */")
		self.compile_header_attribute_structs
		self.header.add_decl("struct class \{ int id; const char *name; int box_kind; int color; const struct vts_table *vts_table; const struct type_table *type_table; nitmethod_t vft[]; \}; /* general C type representing a Nit class. */")
		self.header.add_decl("struct type_table \{ int size; int table[]; \}; /* colorized type table. */")
		self.header.add_decl("struct vts_entry \{ short int is_nullable; const struct class *class; \}; /* link (nullable or not) between the vts and is bound. */")

		if self.vt_layout isa PHLayout[MClass, MVirtualTypeProp] then
			self.header.add_decl("struct vts_table \{ int mask; const struct vts_entry vts[]; \}; /* vts list of a C type representation. */")
		else
			self.header.add_decl("struct vts_table \{ int dummy; const struct vts_entry vts[]; \}; /* vts list of a C type representation. */")
		end

		if modelbuilder.toolcontext.opt_phmod_typing.value then
			self.header.add_decl("#define HASH(mask, id) ((mask)%(id))")
		else if modelbuilder.toolcontext.opt_phand_typing.value then
			self.header.add_decl("#define HASH(mask, id) ((mask)&(id))")
		end

		self.header.add_decl("typedef struct instance \{ const struct class *class; nitattribute_t attrs[1]; \} val; /* general C type representing a Nit instance. */")
	end

	redef fun compile_class_to_c(mclass: MClass)
	do
		var mtype = mclass.intro.bound_mtype
		var c_name = mclass.c_name

		var vft = self.method_tables[mclass]
		var attrs = self.attr_tables[mclass]
		var class_table = self.class_tables[mclass]
		var v = self.new_visitor

		v.add_decl("/* runtime class {c_name} */")

		self.provide_declaration("class_{c_name}", "extern const struct class class_{c_name};")
		v.add_decl("extern const struct type_table type_table_{c_name};")

		# Build class vft
		v.add_decl("const struct class class_{c_name} = \{")
		v.add_decl("{self.class_layout.ids[mclass]},")
		v.add_decl("\"{mclass.name}\", /* class_name_string */")
		v.add_decl("{self.box_kind_of(mclass)}, /* box_kind */")
		var layout = self.class_layout
		if layout isa PHLayout[MClass, MClass] then
			v.add_decl("{layout.masks[mclass]},")
		else
			v.add_decl("{layout.pos[mclass]},")
		end
		if build_class_vts_table(mclass) then
			v.require_declaration("vts_table_{c_name}")
			v.add_decl("&vts_table_{c_name},")
		else
			v.add_decl("NULL,")
		end
		v.add_decl("&type_table_{c_name},")
		v.add_decl("\{")
		for i in [0 .. vft.length[ do
			var mpropdef = vft[i]
			if mpropdef == null then
				v.add_decl("NULL, /* empty */")
			else
				if true or mpropdef.mclassdef.bound_mtype.ctype != "val*" then
					v.require_declaration("VIRTUAL_{mpropdef.c_name}")
					v.add_decl("(nitmethod_t)VIRTUAL_{mpropdef.c_name}, /* pointer to {mclass.intro_mmodule}:{mclass}:{mpropdef} */")
				else
					v.require_declaration("{mpropdef.c_name}")
					v.add_decl("(nitmethod_t){mpropdef.c_name}, /* pointer to {mclass.intro_mmodule}:{mclass}:{mpropdef} */")
				end
			end
		end
		v.add_decl("\}")
		v.add_decl("\};")

		# Build class type table

		v.add_decl("const struct type_table type_table_{c_name} = \{")
		v.add_decl("{class_table.length},")
		v.add_decl("\{")
		for msuper in class_table do
			if msuper == null then
				v.add_decl("-1, /* empty */")
			else
				v.add_decl("{self.class_layout.ids[msuper]}, /* {msuper} */")
			end
		end
		v.add_decl("\}")
		v.add_decl("\};")

		if mtype.ctype != "val*" then
			#Build instance struct
			self.header.add_decl("struct instance_{c_name} \{")
			self.header.add_decl("const struct class *class;")
			self.header.add_decl("{mtype.ctype} value;")
			self.header.add_decl("\};")

			#Build BOX
			self.header.add_decl("val* BOX_{c_name}({mtype.ctype});")
			v.add_decl("/* allocate {mtype} */")
			v.add_decl("val* BOX_{mtype.c_name}({mtype.ctype} value) \{")
			v.add("struct instance_{c_name}*res = nit_alloc(sizeof(struct instance_{c_name}));")
			v.require_declaration("class_{c_name}")
			v.add("res->class = &class_{c_name};")
			v.add("res->value = value;")
			v.add("return (val*)res;")
			v.add("\}")
			return
		else if mclass.name == "NativeArray" then
			#Build instance struct
			self.header.add_decl("struct instance_{c_name} \{")
			self.header.add_decl("const struct class *class;")
			self.header.add_decl("val* values[];")
			self.header.add_decl("\};")

			#Build NEW
			self.provide_declaration("NEW_{c_name}", "{mtype.ctype} NEW_{c_name}(int length);")
			v.add_decl("/* allocate {mtype} */")
			v.add_decl("{mtype.ctype} NEW_{c_name}(int length) \{")
			var res = v.new_named_var(mtype, "self")
			res.is_exact = true
			var mtype_elt = mtype.arguments.first
			v.add("{res} = nit_alloc(sizeof(struct instance_{c_name}) + length*sizeof({mtype_elt.ctype}));")
			v.require_declaration("class_{c_name}")
			v.add("{res}->class = &class_{c_name};")
			v.add("return {res};")
			v.add("\}")
			return
		end

		#Build NEW
		self.provide_declaration("NEW_{c_name}", "{mtype.ctype} NEW_{c_name}(void);")
		v.add_decl("/* allocate {mtype} */")
		v.add_decl("{mtype.ctype} NEW_{c_name}(void) \{")
		var res = v.new_named_var(mtype, "self")
		res.is_exact = true
		v.add("{res} = nit_alloc(sizeof(struct instance) + {attrs.length}*sizeof(nitattribute_t));")
		v.require_declaration("class_{c_name}")
		v.add("{res}->class = &class_{c_name};")
		self.generate_init_attr(v, res, mtype)
		v.add("return {res};")
		v.add("\}")

		generate_check_init_instance(mtype)
	end

	private fun build_class_vts_table(mclass: MClass): Bool do
		if self.vt_tables[mclass].is_empty then return false

		self.provide_declaration("vts_table_{mclass.c_name}", "extern const struct vts_table vts_table_{mclass.c_name};")

		var v = new_visitor
		v.add_decl("const struct vts_table vts_table_{mclass.c_name} = \{")
		if self.vt_layout isa PHLayout[MClass, MVirtualTypeProp] then
			#TODO redo this when PHPropertyLayoutBuilder will be implemented
			#v.add_decl("{vt_masks[mclass]},")
		else
			v.add_decl("0, /* dummy */")
		end
		v.add_decl("\{")

		for vt in self.vt_tables[mclass] do
			if vt == null then
				v.add_decl("\{-1, NULL\}, /* empty */")
			else
				var is_null = 0
				var bound = retrieve_vt_bound(mclass.intro.bound_mtype, vt.as(MVirtualTypeDef).bound)
				while bound isa MNullableType do
					bound = retrieve_vt_bound(mclass.intro.bound_mtype, bound.mtype)
					is_null = 1
				end
				var vtclass = bound.as(MClassType).mclass
				v.require_declaration("class_{vtclass.c_name}")
				v.add_decl("\{{is_null}, &class_{vtclass.c_name}\}, /* {vt} */")
			end
		end
		v.add_decl("\},")
		v.add_decl("\};")
		return true
	end

	private fun retrieve_vt_bound(anchor: MClassType, mtype: nullable MType): MType do
		if mtype == null then
			print "NOT YET IMPLEMENTED: retrieve_vt_bound on null"
			abort
		end
		if mtype isa MVirtualType then
			return mtype.anchor_to(mainmodule, anchor)
		else if mtype isa MParameterType then
			return mtype.anchor_to(mainmodule, anchor)
		else
			return mtype
		end
	end

	redef fun new_visitor do return new SeparateErasureCompilerVisitor(self)

	# Stats

	private var class_tables: Map[MClass, Array[nullable MClass]]
	private var vt_tables: Map[MClass, Array[nullable MPropDef]]

	redef fun display_sizes
	do
		print "# size of subtyping tables"
		print "\ttotal \tholes"
		var total = 0
		var holes = 0
		for t, table in class_tables do
			total += table.length
			for e in table do if e == null then holes += 1
		end
		print "\t{total}\t{holes}"

		print "# size of resolution tables"
		print "\ttotal \tholes"
		total = 0
		holes = 0
		for t, table in vt_tables do
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

class SeparateErasureCompilerVisitor
	super SeparateCompilerVisitor

	redef fun compile_callsite(callsite, arguments)
	do
		var res = super
		if callsite.erasure_cast and not self.compiler.as(SeparateErasureCompiler).modelbuilder.toolcontext.opt_no_check_erasure_cast.value then
			assert res != null
			var mtype = callsite.msignature.return_mtype
			assert mtype != null
			self.add("/* Erasure cast for return {res} isa {mtype} */")
			var cond = self.type_test(res, mtype, "erasure")
			self.add("if (!{cond}) \{")
			#var x = self.class_name_string(res)
			#var y = self.class_name_string(arguments.first)
			#self.add("fprintf(stderr, \"Erasure cast: expected {mtype} (self is %s), got %s for {res}\\n\", {y}, {x});")
			self.add_abort("Cast failed")
			self.add("\}")
		end
		return res
	end

	redef fun init_instance(mtype)
	do
		self.require_declaration("NEW_{mtype.mclass.c_name}")
		return self.new_expr("NEW_{mtype.mclass.c_name}()", mtype)
	end

	redef fun type_test(value, mtype, tag)
	do
		self.add("/* type test for {value.inspect} isa {mtype} */")

		var res = self.new_var(bool_type)

		var cltype = self.get_name("cltype")
		self.add_decl("int {cltype};")
		var idtype = self.get_name("idtype")
		self.add_decl("int {idtype};")

		var maybe_null = self.maybe_null(value)
		var accept_null = "0"
		if mtype isa MNullableType then
			mtype = mtype.mtype
			accept_null = "1"
		end
		if mtype isa MParameterType then
			# Here we get the bound of the the formal type (eh, erasure...)
			mtype = mtype.resolve_for(self.frame.mpropdef.mclassdef.bound_mtype, self.frame.mpropdef.mclassdef.bound_mtype, self.frame.mpropdef.mclassdef.mmodule, false)
			if mtype isa MNullableType then
				mtype = mtype.mtype
				accept_null = "1"
			end
		end

		if value.mcasttype.is_subtype(self.frame.mpropdef.mclassdef.mmodule, self.frame.mpropdef.mclassdef.bound_mtype, mtype) then
			self.add("{res} = 1; /* easy {value.inspect} isa {mtype}*/")
			if compiler.modelbuilder.toolcontext.opt_typing_test_metrics.value then
				self.compiler.count_type_test_skipped[tag] += 1
				self.add("count_type_test_skipped_{tag}++;")
			end
			return res
		end

		var class_ptr
		var type_table
		if value.mtype.ctype == "val*" then
			class_ptr = "{value}->class->"
		else
			var mclass = value.mtype.as(MClassType).mclass
			self.require_declaration("class_{mclass.c_name}")
			class_ptr = "class_{mclass.c_name}."
		end

		if mtype isa MClassType then
			self.require_declaration("class_{mtype.mclass.c_name}")
			self.add("{cltype} = class_{mtype.mclass.c_name}.color;")
			self.add("{idtype} = class_{mtype.mclass.c_name}.id;")
			if compiler.modelbuilder.toolcontext.opt_typing_test_metrics.value then
				self.compiler.count_type_test_resolved[tag] += 1
				self.add("count_type_test_resolved_{tag}++;")
			end
		else if mtype isa MVirtualType then
			var recv = self.frame.arguments.first
			var recv_ptr
			if recv.mtype.ctype == "val*" then
				recv_ptr = "{recv}->class->"
			else
				var mclass = recv.mtype.as(MClassType).mclass
				self.require_declaration("class_{mclass.c_name}")
				recv_ptr = "class_{mclass.c_name}."
			end
			var entry = self.get_name("entry")
			self.add("struct vts_entry {entry};")
			self.require_declaration(mtype.mproperty.const_color)
			if self.compiler.as(SeparateErasureCompiler).vt_layout isa PHLayout[MClass, MVirtualTypeProp] then
				self.add("{entry} = {recv_ptr}vts_table->vts[HASH({recv_ptr}vts_table->mask, {mtype.mproperty.const_color})];")
			else
				self.add("{entry} = {recv_ptr}vts_table->vts[{mtype.mproperty.const_color}];")
			end
			self.add("{cltype} = {entry}.class->color;")
			self.add("{idtype} = {entry}.class->id;")
			if maybe_null and accept_null == "0" then
				var is_nullable = self.get_name("is_nullable")
				self.add_decl("short int {is_nullable};")
				self.add("{is_nullable} = {entry}.is_nullable;")
				accept_null = is_nullable.to_s
			end
			if compiler.modelbuilder.toolcontext.opt_typing_test_metrics.value then
				self.compiler.count_type_test_unresolved[tag] += 1
				self.add("count_type_test_unresolved_{tag}++;")
			end
		else
			self.debug("type_test({value.inspect}, {mtype})")
			abort
		end

		# check color is in table
		if maybe_null then
			self.add("if({value} == NULL) \{")
			self.add("{res} = {accept_null};")
			self.add("\} else \{")
		end
		if self.compiler.as(SeparateErasureCompiler).class_layout isa PHLayout[MClass, MClass] then
			self.add("{cltype} = HASH({class_ptr}color, {idtype});")
		end
		self.add("if({cltype} >= {class_ptr}type_table->size) \{")
		self.add("{res} = 0;")
		self.add("\} else \{")
		self.add("{res} = {class_ptr}type_table->table[{cltype}] == {idtype};")
		self.add("\}")
		if maybe_null then
			self.add("\}")
		end

		return res
	end

	redef fun class_name_string(value)
	do
		var res = self.get_name("var_class_name")
		self.add_decl("const char* {res};")
		if value.mtype.ctype == "val*" then
			self.add "{res} = {value} == NULL ? \"null\" : {value}->class->name;"
		else
			self.require_declaration("class_{value.mtype.c_name}")
			self.add "{res} = class_{value.mtype.c_name}.name;"
		end
		return res
	end

	redef fun array_instance(array, elttype)
	do
		var nclass = self.get_class("NativeArray")
		elttype = self.anchor(elttype)
		var arraytype = self.get_class("Array").get_mtype([elttype])
		var res = self.init_instance(arraytype)
		self.add("\{ /* {res} = array_instance Array[{elttype}] */")
		var nat = self.new_var(self.get_class("NativeArray").get_mtype([elttype]))
		nat.is_exact = true
		self.require_declaration("NEW_{nclass.c_name}")
		self.add("{nat} = NEW_{nclass.c_name}({array.length});")
		for i in [0..array.length[ do
			var r = self.autobox(array[i], self.object_type)
			self.add("((struct instance_{nclass.c_name}*){nat})->values[{i}] = (val*) {r};")
		end
		var length = self.int_instance(array.length)
		self.send(self.get_property("with_native", arraytype), [res, nat, length])
		self.check_init_instance(res, arraytype)
		self.add("\}")
		return res
	end

	redef fun calloc_array(ret_type, arguments)
	do
		var ret = ret_type.as(MClassType)
		self.require_declaration("NEW_{ret.mclass.c_name}")
		self.ret(self.new_expr("NEW_{ret.mclass.c_name}({arguments[1]})", ret_type))
	end
end
