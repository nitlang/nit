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


import separate_compiler

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
		self.toolcontext.info("*** COMPILING TO C ***", 1)

		var compiler = new SeparateErasureCompiler(mainmodule, runtime_type_analysis, self)
		compiler.compile_header

		# compile class structures
		compiler.new_file
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

		compiler.display_stats

		write_and_make(compiler)
	end
end

class SeparateErasureCompiler
	super SeparateCompiler

	private var class_ids: HashMap[MClass, Int] = new HashMap[MClass, Int]
	private var class_colors: Map[MClass, Int]
	private var class_tables: Map[MClass, Array[nullable MClass]]

	init(mainmodule: MModule, runtime_type_analysis: RapidTypeAnalysis, mmbuilder: ModelBuilder) do
		var mclasses = new HashSet[MClass]
		mclasses.add_all(mmbuilder.model.mclasses)

		# classes coloration
		if modelbuilder.toolcontext.opt_phmod_typing.value then
			# set type unique id
			for mclass in mclasses do
				self.class_ids[mclass] = self.class_ids.length + 1
			end

			var class_coloring = new ClassModPerfectHashing(mainmodule)
			self.class_colors = class_coloring.compute_masks(mclasses, class_ids)
			self.class_tables = class_coloring.hash_type_tables(mclasses, class_ids, class_colors)

			self.header.add_decl("#define HASH(mask, id) ((mask)%(id))")
		else if modelbuilder.toolcontext.opt_phand_typing.value then
			# set type unique id
			for mclass in mclasses do
				self.class_ids[mclass] = self.class_ids.length + 1
			end

			var class_coloring = new ClassAndPerfectHashing(mainmodule)
			self.class_colors = class_coloring.compute_masks(mclasses, class_ids)
			self.class_tables = class_coloring.hash_type_tables(mclasses, class_ids, class_colors)

			self.header.add_decl("#define HASH(mask, id) ((mask)&(id))")
		else
			var class_coloring
			if modelbuilder.toolcontext.opt_bm_typing.value then
				class_coloring = new NaiveClassColoring(mainmodule)
			else
				class_coloring = new ClassColoring(mainmodule)
			end
			# set type unique id
			for mclass in mclasses do
				self.class_ids[mclass] = self.class_ids.length + 1
			end
			self.class_colors = class_coloring.colorize(modelbuilder.model.mclasses)
			self.class_tables = class_coloring.build_type_tables(modelbuilder.model.mclasses, class_colors)
		end
	end

	redef fun compile_header_structs do
		self.header.add_decl("typedef void(*nitmethod_t)(void); /* general C type representing a Nit method. */")
		self.compile_header_attribute_structs
		self.header.add_decl("struct class \{ int id; const char *name; int box_kind; int color; struct vts_table *vts_table; struct type_table *type_table; nitmethod_t vft[1]; \}; /* general C type representing a Nit class. */")
		self.header.add_decl("struct type_table \{ int size; int table[1]; \}; /* colorized type table. */")
		self.header.add_decl("struct vts_entry \{ short int is_nullable; struct class *class; \}; /* link (nullable or not) between the vts and is bound. */")

		if modelbuilder.toolcontext.opt_phmod_typing.value or modelbuilder.toolcontext.opt_phand_typing.value then
			self.header.add_decl("struct vts_table \{ int mask; struct vts_entry vts[1]; \}; /* vts list of a C type representation. */")
		else
			self.header.add_decl("struct vts_table \{ struct vts_entry vts[1]; \}; /* vts list of a C type representation. */")
		end

		self.header.add_decl("typedef struct val \{ struct class *class; nitattribute_t attrs[1]; \} val; /* general C type representing a Nit instance. */")
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
		var idnum = classids.length
		var idname = "ID_" + c_name
		self.classids[mtype] = idname
		#self.header.add_decl("#define {idname} {idnum} /* {c_name} */")

		self.header.add_decl("extern const struct class_{c_name} class_{c_name};")
		self.header.add_decl("struct class_{c_name} \{")
		self.header.add_decl("int id;")
		self.header.add_decl("const char *name;")
		self.header.add_decl("int box_kind;")
		self.header.add_decl("int color;")
		self.header.add_decl("const struct vts_table *vts_table;")
		self.header.add_decl("struct type_table *type_table;")
		self.header.add_decl("nitmethod_t vft[{vft.length}];")
		self.header.add_decl("\};")

		# Build class vft
		v.add_decl("const struct class_{c_name} class_{c_name} = \{")
		v.add_decl("{self.class_ids[mclass]},")
		v.add_decl("\"{mclass.name}\", /* class_name_string */")
		v.add_decl("{self.box_kind_of(mclass)}, /* box_kind */")
		v.add_decl("{self.class_colors[mclass]},")
		if build_class_vts_table(mclass) then
			v.add_decl("(const struct vts_table*) &vts_table_{c_name},")
		else
			v.add_decl("NULL,")
		end
		v.add_decl("(struct type_table*) &type_table_{c_name},")
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

		# Build class type table
		self.header.add_decl("extern const struct type_table_{c_name} type_table_{c_name};")
		self.header.add_decl("struct type_table_{c_name} \{")
		self.header.add_decl("int size;")
		self.header.add_decl("int table[{class_table.length}];")
		self.header.add_decl("\};")

		v.add_decl("const struct type_table_{c_name} type_table_{c_name} = \{")
		v.add_decl("{class_table.length},")
		v.add_decl("\{")
		for msuper in class_table do
			if msuper == null then
				v.add_decl("-1, /* empty */")
			else
				v.add_decl("{self.class_ids[msuper]}, /* {msuper} */")
			end
		end
		v.add_decl("\}")
		v.add_decl("\};")

		#Build instance struct
		if mtype.ctype != "val*" then
			self.header.add_decl("struct instance_{c_name} \{")
			self.header.add_decl("const struct class *class;")
			self.header.add_decl("{mtype.ctype} value;")
			self.header.add_decl("\};")

			self.header.add_decl("val* BOX_{c_name}({mtype.ctype});")
			v.add_decl("/* allocate {mtype} */")
			v.add_decl("val* BOX_{mtype.c_name}({mtype.ctype} value) \{")
			v.add("struct instance_{c_name}*res = GC_MALLOC(sizeof(struct instance_{c_name}));")
			v.add("res->class = (struct class*) &class_{c_name};")
			v.add("res->value = value;")
			v.add("return (val*)res;")
			v.add("\}")
			return
		end

		var is_native_array = mclass.name == "NativeArray"

		var sig
		if is_native_array then
			sig = "int length"
		else
			sig = ""
		end

		#Build instance struct
		#extern const struct instance_array__NativeArray instance_array__NativeArray;
		self.header.add_decl("struct instance_{c_name} \{")
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
		v.add("{res}->class = (struct class*) &class_{c_name};")

		self.generate_init_attr(v, res, mtype)
		v.add("return {res};")
		v.add("\}")

		generate_check_init_instance(mtype)
	end

	private fun build_class_vts_table(mclass: MClass): Bool do
		if self.vt_tables[mclass].is_empty then return false

		self.header.add_decl("extern const struct vts_table_{mclass.c_name} vts_table_{mclass.c_name};")
		self.header.add_decl("struct vts_table_{mclass.c_name} \{")
		if modelbuilder.toolcontext.opt_phmod_typing.value or modelbuilder.toolcontext.opt_phand_typing.value then
			self.header.add_decl("int mask;")
		end
		self.header.add_decl("struct vts_entry vts[{self.vt_tables[mclass].length}];")
		self.header.add_decl("\};")

		var v = new_visitor
		v.add_decl("const struct vts_table_{mclass.c_name} vts_table_{mclass.c_name} = \{")
		if modelbuilder.toolcontext.opt_phmod_typing.value or modelbuilder.toolcontext.opt_phand_typing.value then
			v.add_decl("{vt_masks[mclass]},")
		end
		v.add_decl("\{")

		for vt in self.vt_tables[mclass] do
			if vt == null then
				v.add_decl("\{-1, NULL\}, /* empty */")
			else
				var is_null = 0
				var bound = retrieve_vt_bound(mclass.intro.bound_mtype, vt.bound)
				while bound isa MNullableType do
					bound = retrieve_vt_bound(mclass.intro.bound_mtype, bound.mtype)
					is_null = 1
				end
				v.add_decl("\{{is_null}, (struct class*)&class_{bound.as(MClassType).mclass.c_name}\}, /* {vt} */")
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
			class_ptr = "class_{mclass.c_name}."
		end

		if mtype isa MClassType then
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
				recv_ptr = "class_{mclass.c_name}."
			end
			var entry = self.get_name("entry")
			self.add("struct vts_entry {entry};")
			if compiler.modelbuilder.toolcontext.opt_phmod_typing.value or compiler.modelbuilder.toolcontext.opt_phand_typing.value then
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
		if compiler.modelbuilder.toolcontext.opt_phmod_typing.value or compiler.modelbuilder.toolcontext.opt_phand_typing.value then
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
		self.ret(self.new_expr("NEW_{ret.mclass.c_name}({arguments[1]})", ret_type))
	end
end
