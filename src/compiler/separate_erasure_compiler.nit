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
	var opt_erasure = new OptionBool("Erase generic types", "--erasure")
	# --rta
	var opt_rta = new OptionBool("Activate RTA (implicit with --global and --separate)", "--rta")
	# --no-check-erasure-cast
	var opt_no_check_erasure_cast = new OptionBool("Disable implicit casts on unsafe return with erasure-typing policy (dangerous)", "--no-check-erasure-cast")

	redef init
	do
		super
		self.option_context.add_option(self.opt_erasure, self.opt_no_check_erasure_cast, opt_rta)
	end

	redef fun process_options(args)
	do
		super

		if opt_no_check_all.value then
			opt_no_check_erasure_cast.value = true
		end

		# Temporary disabled. TODO: implement tagging in the erasure compiler.
		if opt_erasure.value then
			opt_no_tag_primitives.value = true
		end
	end

	var erasure_compiler_phase = new ErasureCompilerPhase(self, null)
end

class ErasureCompilerPhase
	super Phase
	redef fun process_mainmodule(mainmodule, given_mmodules) do
		if not toolcontext.opt_erasure.value then return

		var modelbuilder = toolcontext.modelbuilder
		var analysis = null
		if toolcontext.opt_rta.value then
			analysis = modelbuilder.do_rapid_type_analysis(mainmodule)
		end
		modelbuilder.run_separate_erasure_compiler(mainmodule, analysis)
	end
end

redef class ModelBuilder
	fun run_separate_erasure_compiler(mainmodule: MModule, runtime_type_analysis: nullable RapidTypeAnalysis)
	do
		var time0 = get_time
		self.toolcontext.info("*** GENERATING C ***", 1)

		var compiler = new SeparateErasureCompiler(mainmodule, self, runtime_type_analysis)
		compiler.do_compilation
		compiler.display_stats
		var time1 = get_time
		self.toolcontext.info("*** END GENERATING C: {time1-time0} ***", 2)
		write_and_make(compiler)
	end
end

class SeparateErasureCompiler
	super SeparateCompiler

	private var class_ids: Map[MClass, Int] is noinit
	private var class_colors: Map[MClass, Int] is noinit
	protected var vt_colors: Map[MVirtualTypeProp, Int] is noinit

	init do

		# Class coloring
		var poset = mainmodule.flatten_mclass_hierarchy
		var mclasses = new HashSet[MClass].from(poset)
		var colorer = new POSetColorer[MClass]
		colorer.colorize(poset)
		class_ids = colorer.ids
		class_colors = colorer.colors
		class_tables = self.build_class_typing_tables(mclasses)

		# lookup vt to build layout with
		var vts = new HashMap[MClass, Set[MVirtualTypeProp]]
		for mclass in mclasses do
			vts[mclass] = new HashSet[MVirtualTypeProp]
			for mprop in self.mainmodule.properties(mclass) do
				if mprop isa MVirtualTypeProp then
					vts[mclass].add(mprop)
				end
			end
		end

		# vt coloration
		var vt_colorer = new POSetBucketsColorer[MClass, MVirtualTypeProp](poset, colorer.conflicts)
		vt_colors = vt_colorer.colorize(vts)
		vt_tables = build_vt_tables(mclasses)
	end

	fun build_vt_tables(mclasses: Set[MClass]): Map[MClass, Array[nullable MPropDef]] do
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
					var color = vt_colors[mproperty]
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
				var color = vt_colors[mproperty]
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
		for mclass in mclasses do
			var table = new Array[nullable MClass]
			var supers = new Array[MClass]
			if mainmodule.flatten_mclass_hierarchy.has(mclass) then
				supers = mclass.in_hierarchy(mainmodule).greaters.to_a
			end
			for sup in supers do
				var color = class_colors[sup]
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
		self.header.add_decl("struct vts_table \{ int dummy; const struct vts_entry vts[]; \}; /* vts list of a C type representation. */")
		self.header.add_decl("typedef struct instance \{ const struct class *class; nitattribute_t attrs[1]; \} val; /* general C type representing a Nit instance. */")
	end

	redef fun compile_class_to_c(mclass: MClass)
	do
		var mtype = mclass.intro.bound_mtype
		var c_name = mclass.c_name

		var class_table = self.class_tables[mclass]
		var v = self.new_visitor

		var rta = runtime_type_analysis
		var is_dead = false # mclass.kind == abstract_kind or mclass.kind == interface_kind
		if not is_dead and rta != null and not rta.live_classes.has(mclass) and not mtype.is_c_primitive and mclass.name != "NativeArray" then
			is_dead = true
		end

		v.add_decl("/* runtime class {c_name} */")

		self.provide_declaration("class_{c_name}", "extern const struct class class_{c_name};")
		v.add_decl("extern const struct type_table type_table_{c_name};")

		# Build class vft
		v.add_decl("const struct class class_{c_name} = \{")
		v.add_decl("{class_ids[mclass]},")
		v.add_decl("\"{mclass.name}\", /* class_name_string */")
		v.add_decl("{self.box_kind_of(mclass)}, /* box_kind */")
		v.add_decl("{class_colors[mclass]},")
		if not is_dead then
			if build_class_vts_table(mclass) then
				v.require_declaration("vts_table_{c_name}")
				v.add_decl("&vts_table_{c_name},")
			else
				v.add_decl("NULL,")
			end
			v.add_decl("&type_table_{c_name},")
			v.add_decl("\{")
			var vft = self.method_tables.get_or_null(mclass)
			if vft != null then for i in [0 .. vft.length[ do
				var mpropdef = vft[i]
				if mpropdef == null then
					v.add_decl("NULL, /* empty */")
				else
					assert mpropdef isa MMethodDef
					if rta != null and not rta.live_methoddefs.has(mpropdef) then
						v.add_decl("NULL, /* DEAD {mclass.intro_mmodule}:{mclass}:{mpropdef} */")
						continue
					end
					var rf = mpropdef.virtual_runtime_function
					v.require_declaration(rf.c_name)
					v.add_decl("(nitmethod_t){rf.c_name}, /* pointer to {mpropdef.full_name} */")
				end
			end
			v.add_decl("\}")
		end
		v.add_decl("\};")

		# Build class type table

		v.add_decl("const struct type_table type_table_{c_name} = \{")
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

		if mtype.is_c_primitive or mtype.mclass.name == "Pointer" then
			#Build instance struct
			self.header.add_decl("struct instance_{c_name} \{")
			self.header.add_decl("const struct class *class;")
			self.header.add_decl("{mtype.ctype} value;")
			self.header.add_decl("\};")

			#Build BOX
			self.provide_declaration("BOX_{c_name}", "val* BOX_{c_name}({mtype.ctype_extern});")
			v.add_decl("/* allocate {mtype} */")
			v.add_decl("val* BOX_{mtype.c_name}({mtype.ctype_extern} value) \{")
			v.add("struct instance_{c_name}*res = nit_alloc(sizeof(struct instance_{c_name}));")
			v.require_declaration("class_{c_name}")
			v.add("res->class = &class_{c_name};")
			v.add("res->value = value;")
			v.add("return (val*)res;")
			v.add("\}")

			if mtype.mclass.name != "Pointer" then return

			v = new_visitor
			self.provide_declaration("NEW_{c_name}", "{mtype.ctype} NEW_{c_name}();")
			v.add_decl("/* allocate {mtype} */")
			v.add_decl("{mtype.ctype} NEW_{c_name}() \{")
			if is_dead then
				v.add_abort("{mclass} is DEAD")
			else
				var res = v.new_named_var(mtype, "self")
				res.is_exact = true
				v.add("{res} = nit_alloc(sizeof(struct instance_{mtype.c_name}));")
				v.require_declaration("class_{c_name}")
				v.add("{res}->class = &class_{c_name};")
				v.add("((struct instance_{mtype.c_name}*){res})->value = NULL;")
				v.add("return {res};")
			end
			v.add("\}")
			return
		else if mclass.name == "NativeArray" then
			#Build instance struct
			self.header.add_decl("struct instance_{c_name} \{")
			self.header.add_decl("const struct class *class;")
			self.header.add_decl("int length;")
			self.header.add_decl("val* values[];")
			self.header.add_decl("\};")

			#Build NEW
			self.provide_declaration("NEW_{c_name}", "{mtype.ctype} NEW_{c_name}(int length);")
			v.add_decl("/* allocate {mtype} */")
			v.add_decl("{mtype.ctype} NEW_{c_name}(int length) \{")
			var res = v.get_name("self")
			v.add_decl("struct instance_{c_name} *{res};")
			var mtype_elt = mtype.arguments.first
			v.add("{res} = nit_alloc(sizeof(struct instance_{c_name}) + length*sizeof({mtype_elt.ctype}));")
			v.require_declaration("class_{c_name}")
			v.add("{res}->class = &class_{c_name};")
			v.add("{res}->length = length;")
			v.add("return (val*){res};")
			v.add("\}")
			return
                else if mclass.name == "RoutineRef" then
                        self.header.add_decl("struct instance_{c_name} \{")
                        self.header.add_decl("const struct class *class;")
                        self.header.add_decl("val* recv;")
                        self.header.add_decl("nitmethod_t method;")
                        self.header.add_decl("\};")

                        self.provide_declaration("NEW_{c_name}", "{mtype.ctype} NEW_{c_name}(val* recv, nitmethod_t method, const struct class* class);")
                        v.add_decl("/* allocate {mtype} */")
                        v.add_decl("{mtype.ctype} NEW_{c_name}(val* recv, nitmethod_t method, const struct class* class)\{")
                        var res = v.get_name("self")
                        v.add_decl("struct instance_{c_name} *{res};")
                        var alloc = v.nit_alloc("sizeof(struct instance_{c_name})", mclass.full_name)
                        v.add("{res} = {alloc};")
                        v.add("{res}->class = class;")
                        v.add("{res}->recv = recv;")
                        v.add("{res}->method = method;")
                        v.add("return (val*){res};")
                        v.add("\}")
                        return
		else if mtype.mclass.kind == extern_kind and mtype.mclass.name != "CString" then
			var pointer_type = mainmodule.pointer_type

			self.provide_declaration("NEW_{c_name}", "{mtype.ctype} NEW_{c_name}();")
			v.add_decl("/* allocate {mtype} */")
			v.add_decl("{mtype.ctype} NEW_{c_name}() \{")
			if is_dead then
				v.add_abort("{mclass} is DEAD")
			else
				var res = v.new_named_var(mtype, "self")
				res.is_exact = true
				v.add("{res} = nit_alloc(sizeof(struct instance_{pointer_type.c_name}));")
				#v.add("{res}->type = type;")
				v.require_declaration("class_{c_name}")
				v.add("{res}->class = &class_{c_name};")
				v.add("((struct instance_{pointer_type.c_name}*){res})->value = NULL;")
				v.add("return {res};")
			end
			v.add("\}")
			return
		end

		#Build NEW
		self.provide_declaration("NEW_{c_name}", "{mtype.ctype} NEW_{c_name}(void);")
		v.add_decl("/* allocate {mtype} */")
		v.add_decl("{mtype.ctype} NEW_{c_name}(void) \{")
		if is_dead then
			v.add_abort("{mclass} is DEAD")
		else

			var res = v.new_named_var(mtype, "self")
			res.is_exact = true
			var attrs = self.attr_tables.get_or_null(mclass)
			if attrs == null then
				v.add("{res} = nit_alloc(sizeof(struct instance));")
			else
				v.add("{res} = nit_alloc(sizeof(struct instance) + {attrs.length}*sizeof(nitattribute_t));")
			end
			v.require_declaration("class_{c_name}")
			v.add("{res}->class = &class_{c_name};")
			if attrs != null then
				self.generate_init_attr(v, res, mtype)
				v.set_finalizer res
			end
			v.add("return {res};")
		end
		v.add("\}")
	end

	private fun build_class_vts_table(mclass: MClass): Bool do
		if self.vt_tables[mclass].is_empty then return false

		self.provide_declaration("vts_table_{mclass.c_name}", "extern const struct vts_table vts_table_{mclass.c_name};")

		var v = new_visitor
		v.add_decl("const struct vts_table vts_table_{mclass.c_name} = \{")
		v.add_decl("0, /* dummy */")
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

	redef fun compile_types
	do
		compile_color_consts(vt_colors)
	end

	redef fun new_visitor do return new SeparateErasureCompilerVisitor(self)

	# Stats

	private var class_tables: Map[MClass, Array[nullable MClass]] is noinit
	private var vt_tables: Map[MClass, Array[nullable MPropDef]] is noinit

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
			#self.add("PRINT_ERROR(\"Erasure cast: expected {mtype} (self is %s), got %s for {res}\\n\", {y}, {x});")
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
		if not value.mtype.is_c_primitive then
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
			if not recv.mtype.is_c_primitive then
				recv_ptr = "{recv}->class->"
			else
				var mclass = recv.mtype.as(MClassType).mclass
				self.require_declaration("class_{mclass.c_name}")
				recv_ptr = "class_{mclass.c_name}."
			end
			var entry = self.get_name("entry")
			self.add("struct vts_entry {entry};")
			self.require_declaration(mtype.mproperty.const_color)
			self.add("{entry} = {recv_ptr}vts_table->vts[{mtype.mproperty.const_color}];")
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

	redef fun unbox_extern(value, mtype)
	do
		if mtype isa MClassType and mtype.mclass.kind == extern_kind and
		   mtype.mclass.name != "CString" then
			var pointer_type = compiler.mainmodule.pointer_type
			var res = self.new_var_extern(mtype)
			self.add "{res} = ((struct instance_{pointer_type.c_name}*){value})->value; /* unboxing {value.mtype} */"
			return res
		else
			return value
		end
	end

	redef fun box_extern(value, mtype)
	do
		if mtype isa MClassType and mtype.mclass.kind == extern_kind and
		   mtype.mclass.name != "CString" then
			var valtype = compiler.mainmodule.pointer_type
			var res = self.new_var(mtype)
			if compiler.runtime_type_analysis != null and not compiler.runtime_type_analysis.live_types.has(value.mtype.as(MClassType)) then
				self.add("/*no boxing of {value.mtype}: {value.mtype} is not live! */")
				self.add("PRINT_ERROR(\"Dead code executed!\\n\"); fatal_exit(1);")
				return res
			end
			self.require_declaration("BOX_{valtype.c_name}")
			self.add("{res} = BOX_{valtype.c_name}({value}); /* boxing {value.mtype} */")
			self.require_declaration("class_{mtype.c_name}")
			self.add("{res}->class = &class_{mtype.c_name};")
			return res
		else
			return value
		end
	end

	redef fun class_name_string(value)
	do
		var res = self.get_name("var_class_name")
		self.add_decl("const char* {res};")
		if not value.mtype.is_c_primitive then
			self.add "{res} = {value} == NULL ? \"null\" : {value}->class->name;"
		else
			self.require_declaration("class_{value.mtype.c_name}")
			self.add "{res} = class_{value.mtype.c_name}.name;"
		end
		return res
	end

	redef fun native_array_instance(elttype, length)
	do
		var nclass = mmodule.native_array_class
		var mtype = nclass.get_mtype([elttype])
		var res = self.new_var(mtype)
		res.is_exact = true
		self.require_declaration("NEW_{nclass.c_name}")
		length = autobox(length, compiler.mainmodule.int_type)
		self.add("{res} = NEW_{nclass.c_name}({length});")
		return res
	end

        redef fun routine_ref_instance(routine_type, recv, callsite)
        do
		var mmethoddef = callsite.mpropdef
                #debug "ENTER ref_instance"
                var mmethod = mmethoddef.mproperty
                # routine_mclass is the specialized one, e.g: FunRef1, ProcRef2, etc..
                var routine_mclass = routine_type.mclass

                var nclasses = mmodule.model.get_mclasses_by_name("RoutineRef").as(not null)
                var base_routine_mclass = nclasses.first

                # All routine classes use the same `NEW` constructor.
                # However, they have different declared `class` and `type` value.
                self.require_declaration("NEW_{base_routine_mclass.c_name}")

                var recv_class_cname = recv.mcasttype.as(MClassType).mclass.c_name
                var my_recv = recv

                if recv.mtype.is_c_primitive then
                        my_recv = autobox(recv, mmodule.object_type)
                end
                var my_recv_mclass_type = my_recv.mtype.as(MClassType)

                # The class of the concrete Routine must exist (e.g ProcRef0, FunRef0, etc.)
                self.require_declaration("class_{routine_mclass.c_name}")

                self.require_declaration(mmethoddef.c_name)

                var thunk_function = mmethoddef.callref_thunk(my_recv_mclass_type)
                var runtime_function = mmethoddef.virtual_runtime_function

                var is_c_equiv = runtime_function.msignature.c_equiv(thunk_function.msignature)

                var c_ref = thunk_function.c_ref
                if is_c_equiv then
                        var const_color = mmethoddef.mproperty.const_color
                        c_ref = "{class_info(my_recv)}->vft[{const_color}]"
                        self.require_declaration(const_color)
                else
                        self.require_declaration(thunk_function.c_name)
                        compiler.thunk_todo(thunk_function)
                end
                compiler.thunk_todo(thunk_function)

                # Each RoutineRef points to a receiver AND a callref_thunk
                var res = self.new_expr("NEW_{base_routine_mclass.c_name}({my_recv}, (nitmethod_t){c_ref}, &class_{routine_mclass.c_name})", routine_type)
                #debug "LEAVING ref_instance"
                return res

        end
end
