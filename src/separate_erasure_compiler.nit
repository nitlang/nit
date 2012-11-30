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
intrude import coloring

redef class ToolContext
	# --erasure
	var opt_erasure: OptionBool = new OptionBool("Erase generic types", "--erasure")

	redef init
	do
		super
		self.option_context.add_option(self.opt_erasure)
	end
end

redef class ModelBuilder
	redef fun run_global_compiler(mainmodule: MModule, runtime_type_analysis: RapidTypeAnalysis)
	do
		if self.toolcontext.opt_erasure.value then
			run_separate_erasure_compiler(mainmodule, runtime_type_analysis)
		else
			super
		end
	end

	fun run_separate_erasure_compiler(mainmodule: MModule, runtime_type_analysis: RapidTypeAnalysis)
	do
		var time0 = get_time
		self.toolcontext.info("*** COMPILING TO C ***", 1)

		var compiler = new SeparateErasureCompiler(mainmodule, runtime_type_analysis, self)
		var v = compiler.new_visitor
		compiler.header = v
		v.add_decl("#include <stdlib.h>")
		v.add_decl("#include <stdio.h>")
		v.add_decl("#include <string.h>")
		v.add_decl("#include <gc/gc.h>")
		v.add_decl("typedef void(*nitmethod_t)(void); /* general C type representing a Nit method. */")
		v.add_decl("typedef void* nitattribute_t; /* general C type representing a Nit attribute. */")
		v.add_decl("struct class \{ int id; int color; struct type_table *type_table; nitmethod_t vft[1]; \}; /* general C type representing a Nit class. */")
		v.add_decl("struct type_table \{ int size; int table[1]; \}; /* colorized type table. */")
		v.add_decl("typedef struct \{ struct class *class; nitattribute_t attrs[1]; \} val; /* general C type representing a Nit instance. */")
		v.add_decl("extern const char const * class_names[];")

		# Declare global instances
		v.add_decl("extern int glob_argc;")
		v.add_decl("extern char **glob_argv;")
		v.add_decl("extern val *glob_sys;")

		# The main function of the C
		compiler.compile_main_function

		# compile class structures
		for m in mainmodule.in_importation.greaters do
			for mclass in m.intro_mclasses do
				compiler.compile_class_to_c(mclass)
			end
		end

		# compile methods
		for m in mainmodule.in_importation.greaters do
			compiler.compile_module_to_c(m)
		end

		write_and_make(compiler)
	end
end

class SeparateErasureCompiler
	super SeparateCompiler

	private var class_ids: HashMap[MClass, Int] = new HashMap[MClass, Int]
	private var class_tables: nullable Map[MClass, Array[nullable MClass]] = null

	init(mainmodule: MModule, runtime_type_analysis: RapidTypeAnalysis, mmbuilder: ModelBuilder) do
		# classes coloration
		var class_coloring = new ClassColoring(mainmodule)
		self.class_colors = class_coloring.colorize(mmbuilder.model.mclasses)
		self.class_tables = class_coloring.build_type_tables(mmbuilder.model.mclasses, class_colors)

		# methods coloration
		var method_coloring = new MethodColoring(class_coloring)
		self.method_colors = method_coloring.colorize
		self.method_tables = method_coloring.build_property_tables

		# attributes coloration
		var attribute_coloring = new AttributeColoring(class_coloring)
		self.attr_colors = attribute_coloring.colorize
		self.attr_tables = attribute_coloring.build_property_tables

		# set type unique id
		for mclass in class_colors.keys do
			self.class_ids[mclass] = self.class_ids.length
		end

		# for the class_name and output_class_name methods
		self.compile_class_names
	end

	redef fun compile_class_names do
		# Build type names table
		var type_array = new Array[nullable MClass]
		for t, i in class_ids do
			if i >= type_array.length then
				type_array[i] = null
			end
			type_array[i] = t
		end

		var v = self.new_visitor
		v.add("const char const * class_names[] = \{")
		for t in type_array do
			if t == null then
				v.add("NULL, /* empty */")
			else
				v.add("\"{t}\",")
			end
		end
		v.add("\};")
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
		self.header.add_decl("int color;")
		self.header.add_decl("struct type_table *type_table;")
		self.header.add_decl("nitmethod_t vft[{vft.length}];")

		if mtype.ctype != "val*" then
			# Is the Nit type is native then the struct is a box with two fields:
			# * the `vft` to be polymorph
			# * the `value` that contains the native value.
			self.header.add_decl("{mtype.ctype} value;")
		end

		# Collect all attributes and associate them a field in the structure.
		# Note: we do not try to optimize the order and helps CC to optimize the client code.
		for cd in mtype.collect_mclassdefs(self.mainmodule) do
			for p in cd.intro_mproperties do
				if not p isa MAttribute then continue
				var t = p.intro.static_mtype.as(not null)
				t = t.anchor_to(self.mainmodule, mtype)
				self.header.add_decl("{t.ctype} {p.intro.c_name}; /* {p}: {t} */")
			end
		end
		self.header.add_decl("\};")

		# Build class vft
		v.add_decl("const struct class_{c_name} class_{c_name} = \{")
		v.add_decl("{self.class_ids[mclass]},")
		v.add_decl("{self.class_colors[mclass]},")
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
				v.add_decl("0, /* empty */")
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

		for cd in mtype.collect_mclassdefs(self.mainmodule)
		do
			var n = self.modelbuilder.mclassdef2nclassdef[cd]
			for npropdef in n.n_propdefs do
				if npropdef isa AAttrPropdef then
					npropdef.init_expr(v, res)
				end
			end
		end
		v.add("return {res};")
		v.add("\}")
	end

	redef fun new_visitor do return new SeparateErasureCompilerVisitor(self)
end

class SeparateErasureCompilerVisitor
	super SeparateCompilerVisitor

	# Box or unbox a value to another type iff a C type conversion is needed
	# ENSURE: result.mtype.ctype == mtype.ctype
	redef fun autobox(value: RuntimeVariable, mtype: MType): RuntimeVariable
	do
		if value.mtype.ctype == mtype.ctype then
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
			var totype = value.mtype
			if totype isa MNullableType then totype = totype.mtype
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

	redef fun init_instance(mtype)
	do
		return self.new_expr("NEW_{mtype.mclass.c_name}()", mtype)
	end

	redef fun type_test(value, mtype)
	do
		var res = self.new_var(bool_type)
		var boxed = self.autobox(value, self.object_type)

		var cltype = self.get_name("cltype")
		self.add_decl("int {cltype};")
		var idtype = self.get_name("idtype")
		self.add_decl("int {idtype};")

		var maybe_null = false
		if mtype isa MNullableType then
			mtype = mtype.mtype
			maybe_null = true
		end
		if mtype isa MParameterType then
			# Here we get the bound of the the formal type (eh, erasure...)
			mtype = mtype.resolve_for(self.frame.mpropdef.mclassdef.bound_mtype, self.frame.mpropdef.mclassdef.bound_mtype, self.frame.mpropdef.mclassdef.mmodule, false)
			if mtype isa MNullableType then
				mtype = mtype.mtype
				maybe_null = true
			end
		end
		if mtype isa MVirtualType then
			# FIXME virtual types should not be erased but got from the class table of the current receiver (self.frame.arguments.first)
			mtype = mtype.resolve_for(self.frame.mpropdef.mclassdef.bound_mtype, self.frame.mpropdef.mclassdef.bound_mtype, self.frame.mpropdef.mclassdef.mmodule, true)
			if mtype isa MNullableType then
				mtype = mtype.mtype
				maybe_null = true
			end
		end
		if mtype isa MClassType then
			self.add("{cltype} = class_{mtype.mclass.c_name}.color;")
			self.add("{idtype} = class_{mtype.mclass.c_name}.id;")
		else
			self.debug("type_test({value.inspect}, {mtype})")
			abort
		end

		var s: String
		if maybe_null then
			s = "{boxed} == NULL ||"
		else
			s = "{boxed} != NULL &&"
		end
		# check color is in table
		self.add("if({boxed} != NULL && {cltype} >= {boxed}->class->type_table->size) \{")
		self.add("{res} = 0;")
		self.add("\} else \{")
		self.add("{res} = {s} {boxed}->class->type_table->table[{cltype}] == {idtype};")
		self.add("\}")

		return res
	end

	redef fun class_name_string(value1)
	do
		var res = self.get_name("var_class_name")
		self.add_decl("const char* {res} = class_names[self->class->id];")
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
		self.check_init_instance(res)
		self.add("\}")
		return res
	end

	redef fun calloc_array(ret_type, arguments)
	do
		var ret = ret_type.as(MClassType)
		self.ret(self.new_expr("NEW_{ret.mclass.c_name}({arguments[1]})", ret_type))
	end
end
