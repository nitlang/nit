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
intrude import coloring
redef class ToolContext
	# --separate
	var opt_separate: OptionBool = new OptionBool("Use separate compilation", "--separate")

	redef init
	do
		super
		self.option_context.add_option(self.opt_separate)
	end
end

redef class ModelBuilder
	redef fun run_global_compiler(mainmodule: MModule, runtime_type_analysis: RapidTypeAnalysis)
	do
		# Hijack the run_global_compiler to run the separate one if requested.
		if self.toolcontext.opt_separate.value then
			run_separate_compiler(mainmodule, runtime_type_analysis)
		else
			super
		end
	end

	fun run_separate_compiler(mainmodule: MModule, runtime_type_analysis: RapidTypeAnalysis)
	do
		var time0 = get_time
		self.toolcontext.info("*** COMPILING TO C ***", 1)

		var compiler = new SeparateCompiler(mainmodule, runtime_type_analysis, self)
		var v = new SeparateCompilerVisitor(compiler)
		compiler.header = v
		v.add_decl("#include <stdlib.h>")
		v.add_decl("#include <stdio.h>")
		v.add_decl("#include <string.h>")
		v.add_decl("#include <gc/gc.h>")
		v.add_decl("typedef void(*nitmethod_t)(void); /* general C type representing a Nit method. */")
		v.add_decl("typedef void* nitattribute_t; /* general C type representing a Nit attribute. */")

		# Class abstract representation
		v.add_decl("struct class \{ nitmethod_t vft[1]; \}; /* general C type representing a Nit class. */")
		# Type abstract representation
		v.add_decl("struct type \{ int id; int color; struct fts_table *fts_table; int type_table[1]; \}; /* general C type representing a Nit type. */")
		v.add_decl("struct fts_table \{ struct type *fts[1]; \}; /* fts list of a C type representation. */")
		# Instance abstract representation
		v.add_decl("typedef struct \{ struct type *type; struct class *class; nitattribute_t attrs[1]; \} val; /* general C type representing a Nit instance. */")

		# Class names (for the class_name and output_class_name methods)
		v.add_decl("extern const char const * class_names[];")
		v.add("const char const * class_names[] = \{")
		for t in runtime_type_analysis.live_types do
			v.add("\"{t}\",")
		end
		v.add("\};")

		# The main function of the C

		v = new SeparateCompilerVisitor(compiler)
		v.add_decl("int glob_argc;")
		v.add_decl("char **glob_argv;")
		v.add_decl("val *glob_sys;")
		v.add_decl("int main(int argc, char** argv) \{")
		v.add("glob_argc = argc; glob_argv = argv;")
		var main_type = mainmodule.sys_type
		if main_type == null then return # Nothing to compile
		var glob_sys = v.init_instance(main_type)
		v.add("glob_sys = {glob_sys};")
		var main_init = mainmodule.try_get_primitive_method("init", main_type)
		if main_init != null then
			v.send(main_init, [glob_sys])
		end
		var main_method = mainmodule.try_get_primitive_method("main", main_type)
		if main_method != null then
			v.send(main_method, [glob_sys])
		end
		v.add("\}")

		for m in mainmodule.in_importation.greaters do
			compiler.compile_module_to_c(m)
			for mclass in m.intro_mclasses do
				compiler.compile_class_to_c(mclass)
			end
		end

		# compile live & cast type structures
		var mtypes = compiler.do_global_type_coloring
		for t in mtypes do
			compiler.compile_type_to_c(t)
		end

		for mclass in model.mclasses do
			compiler.compile_live_gentype_to_c(mclass)
		end

		write_and_make(compiler)
	end
end

# Singleton that store the knowledge about the separate compilation process
class SeparateCompiler
	super GlobalCompiler # TODO better separation of concerns

	private var undead_types: Set[MClassType] = new HashSet[MClassType]
	protected var typeids: HashMap[MClassType, Int] = new HashMap[MClassType, Int]

	private var type_colors: Map[MClassType, Int] = typeids
	private var type_tables: nullable Map[MClassType, Array[nullable MClassType]] = null
	private var livetypes_tables: nullable Map[MClass, Array[nullable Object]]
	private var livetypes_tables_sizes: nullable Map[MClass, Array[Int]]

	private var class_colors: Map[MClass, Int]

	private var method_colors: Map[MMethod, Int]
	private var method_tables: Map[MClass, Array[nullable MMethodDef]]

	private var attr_colors: Map[MAttribute, Int]
	private var attr_tables: Map[MClass, Array[nullable MAttributeDef]]

	private var ft_colors: Map[MParameterType, Int]
	private var ft_tables: Map[MClass, Array[nullable MParameterType]]

	init(mainmodule: MModule, runtime_type_analysis: RapidTypeAnalysis, mmbuilder: ModelBuilder) do
		# classes coloration
		var class_coloring = new ClassColoring(mainmodule)
		self.class_colors = class_coloring.colorize(mmbuilder.model.mclasses)

		# methods coloration
		var method_coloring = new MethodColoring(class_coloring)
		self.method_colors = method_coloring.colorize
		self.method_tables = method_coloring.build_property_tables

		# attributes coloration
		var attribute_coloring = new AttributeColoring(class_coloring)
		self.attr_colors = attribute_coloring.colorize
		self.attr_tables = attribute_coloring.build_property_tables

		# fts coloration
		var ft_coloring = new FTColoring(class_coloring)
		self.ft_colors = ft_coloring.colorize
		self.ft_tables = ft_coloring.build_ft_tables
	end

	# colorize live types of the program
	private fun do_global_type_coloring: Set[MClassType] do
		var mtypes = new HashSet[MClassType]
		#print "undead types:"
		#for t in self.undead_types do
		#	print t
		#end
		#print "live types:"
		#for t in runtime_type_analysis.live_types do
		#	print t
		#end
		#print "cast types:"
		#for t in runtime_type_analysis.live_cast_types do
		#	print t
		#end
		#print "--"
		mtypes.add_all(self.runtime_type_analysis.live_types)
		mtypes.add_all(self.runtime_type_analysis.live_cast_types)
		mtypes.add_all(self.undead_types)

		# add formal types arguments to mtypes
		for mtype in mtypes do
			if mtype isa MGenericType then
				#TODO do it recursive
				for ft in mtype.arguments do
					if ft isa MNullableType then ft = ft.mtype
					mtypes.add(ft.as(MClassType))
				end
			end
		end

		# set type unique id
		for mtype in mtypes do
			self.typeids[mtype] = self.typeids.length
		end

		# build livetypes tables
		self.livetypes_tables = new HashMap[MClass, Array[nullable Object]]
		self.livetypes_tables_sizes = new HashMap[MClass, Array[Int]]
		for mtype in mtypes do
			if mtype isa MGenericType then
				var table: Array[nullable Object]
				var sizes: Array[Int]
				if livetypes_tables.has_key(mtype.mclass) then
					table = livetypes_tables[mtype.mclass]
				else
					table = new Array[nullable Object]
					self.livetypes_tables[mtype.mclass] = table
				end
				if livetypes_tables_sizes.has_key(mtype.mclass) then
					sizes = livetypes_tables_sizes[mtype.mclass]
				else
					sizes = new Array[Int]
					self.livetypes_tables_sizes[mtype.mclass] = sizes
				end
				build_livetype_table(mtype, 0, table, sizes)
			end
		end

		# colorize
		var type_coloring = new TypeColoring(self.mainmodule, self.runtime_type_analysis)
		self.type_colors = type_coloring.colorize(mtypes)
		self.type_tables = type_coloring.build_type_tables(mtypes, type_colors)

		return mtypes
	end

	# build live gentype table recursively
	private fun build_livetype_table(mtype: MGenericType, current_rank: Int, table: Array[nullable Object], sizes: Array[Int]) do
		var ft = mtype.arguments[current_rank]
		if ft isa MNullableType then ft = ft.mtype
		var id = self.typeids[ft.as(MClassType)]

		if current_rank >= sizes.length then
			sizes[current_rank] = id + 1
		else if id >= sizes[current_rank] then
			sizes[current_rank] = id + 1
		end

		if id > table.length then
			for i in [table.length .. id[ do table[i] = null
		end

		if current_rank == mtype.arguments.length - 1 then
			table[id] = mtype
		else
			var ft_table = new Array[nullable Object]
			table[id] = ft_table
			build_livetype_table(mtype, current_rank + 1, ft_table, sizes)
		end
	end

	private fun add_to_livetypes_table(table: Array[nullable Object], ft: MClassType) do
		var id = self.typeids[ft]
		for i in [table.length .. id[ do
			table[i] = null
		end
		table[id] = ft
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

	# Separately compile all the method definitions of the module
	fun compile_module_to_c(mmodule: MModule)
	do
		for cd in mmodule.mclassdefs do
			for pd in cd.mpropdefs do
				if not pd isa MMethodDef then continue
				#print "compile {pd} @ {cd} @ {mmodule}"
				var r = new SeparateRuntimeFunction(pd)
				r.compile_to_c(self)
				if cd.bound_mtype.ctype != "val*" then
					var r2 = new VirtualRuntimeFunction(pd)
					r2.compile_to_c(self)
				end
			end
		end
	end

	# Globaly compile the type structure of a live type
	fun compile_type_to_c(mtype: MClassType)
	do
		var c_name = mtype.c_name
		var v = new SeparateCompilerVisitor(self)
		v.add_decl("/* runtime type {mtype} */")

		# extern const struct type_X
		self.header.add_decl("extern const struct type_{c_name} type_{c_name};")
		self.header.add_decl("struct type_{c_name} \{")
		self.header.add_decl("int id;")
		self.header.add_decl("int color;")
		self.header.add_decl("const struct fts_table_{c_name} *fts_table;")
		self.header.add_decl("int type_table[{self.type_tables[mtype].length}];")
		self.header.add_decl("\};")

		# extern const struct fst_table_X fst_table_X
		self.header.add_decl("extern const struct fts_table_{c_name} fts_table_{c_name};")
		self.header.add_decl("struct fts_table_{c_name} \{")
		self.header.add_decl("struct type *fts[{self.ft_tables[mtype.mclass].length}];")
		self.header.add_decl("\};")

		# const struct type_X
		v.add_decl("const struct type_{c_name} type_{c_name} = \{")
		v.add_decl("{self.typeids[mtype]},")
		v.add_decl("{self.type_colors[mtype]},")
		v.add_decl("&fts_table_{c_name},")
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

		# const struct fst_table_X fst_table_X
		v.add_decl("const struct fts_table_{c_name} fts_table_{c_name} = \{")
		v.add_decl("\{")

		if mtype isa MGenericType then
			for ft in self.ft_tables[mtype.mclass] do
				if ft == null then
					v.add_decl("NULL, /* empty */")
				else
					var id = -1
					var ntype: MType
					if ft.mclass == mtype.mclass then
						ntype = mtype.arguments[ft.rank]
					else
						ntype = ft.anchor_to(self.mainmodule, mtype)
					end
					if ntype isa MNullableType then ntype = ntype.mtype
					var ftype = ntype.as(MClassType)
					if self.typeids.has_key(ftype) then
						v.add_decl("(struct type*)&type_{ftype.c_name}, /* {ft} ({ftype}) */")
					else
						v.add_decl("NULL, /* empty ({ft} not a live type) */")
					end
				end
			end
		end

		v.add_decl("\},")
		v.add_decl("\};")
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
		var v = new SeparateCompilerVisitor(self)

		v.add_decl("/* runtime class {c_name} */")
		var idnum = classids.length
		var idname = "ID_" + c_name
		self.classids[mtype] = idname
		#self.header.add_decl("#define {idname} {idnum} /* {c_name} */")

		self.header.add_decl("struct class_{c_name} \{")
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
		self.header.add_decl("extern const struct class_{c_name} class_{c_name};")
		v.add_decl("const struct class_{c_name} class_{c_name} = \{")
		v.add_decl("\{")
		for i in [0 .. vft.length[ do
			var mpropdef = vft[i]
			if mpropdef == null then
				v.add_decl("NULL, /* empty */")
			else
				if mpropdef.mclassdef.bound_mtype.ctype != "val*" then
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

			self.header.add_decl("val* BOX_{c_name}({mtype.ctype}, struct type*);")
			v.add_decl("/* allocate {mtype} */")
			v.add_decl("val* BOX_{mtype.c_name}({mtype.ctype} value, struct type* type) \{")
			v.add("struct instance_{c_name}*res = GC_MALLOC(sizeof(struct instance_{c_name}));")
			v.add("res->type = type;")
			v.add("res->class = (struct class*) &class_{c_name};")
			v.add("res->value = value;")
			v.add("return (val*)res;")
			v.add("\}")
			return
		end

		#Build instance struct
		v.add_decl("struct instance_{c_name} \{")
		v.add_decl("const struct type *type;")
		v.add_decl("const struct class *class;")
		v.add_decl("nitattribute_t attrs[{attrs.length}];")
		v.add_decl("\};")


		var res = v.new_named_var(mtype, "self")
		res.is_exact = true

		self.header.add_decl("{mtype.ctype} NEW_{c_name}(struct type* type);")
		v.add_decl("/* allocate {mtype} */")
		v.add_decl("{mtype.ctype} NEW_{c_name}(struct type* type) \{")
		v.add("{res} = calloc(sizeof(struct instance_{c_name}), 1);")
		v.add("{res}->type = type;")
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
		var v = new SeparateCompilerVisitor(compiler)
		var selfvar = new RuntimeVariable("self", recv, recv)
		var arguments = new Array[RuntimeVariable]
		var frame = new Frame(v, mmethoddef, recv, arguments)
		v.frame = frame

		var sig = new Buffer
		var comment = new Buffer
		var ret = mmethoddef.msignature.return_mtype
		if ret != null then
			ret = v.resolve_for(ret, selfvar)
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
		for i in [0..mmethoddef.msignature.arity[ do
			var mtype = mmethoddef.msignature.mparameters[i].mtype
			if i == mmethoddef.msignature.vararg_rank then
				mtype = v.get_class("Array").get_mtype([mtype])
			end
			mtype = v.resolve_for(mtype, selfvar)
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
		var v = new SeparateCompilerVisitor(compiler)
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
		var recv = args.first
		if recv.mtype.ctype != m.mclassdef.mclass.mclass_type.ctype then
			args.first = self.autobox(args.first, m.mclassdef.mclass.mclass_type)
		end
		for i in [0..m.msignature.arity[ do
			var t = m.msignature.mparameters[i].mtype
			if i == m.msignature.vararg_rank then
				t = args[i+1].mtype
			end
			t = self.resolve_for(t, recv)
			args[i+1] = self.autobox(args[i+1], t)
		end
	end

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
			self.add("{res} = BOX_{valtype.c_name}({value}, (struct type*) &type_{totype.c_name}); /* autobox from {value.mtype} to {mtype} */")
			return res
		else
			# Bad things will appen!
			var res = self.new_var(mtype)
			self.add("/* {res} left unintialized (cannot convert {value.mtype} to {mtype}) */")
			self.add("printf(\"Cast error: Cannot cast %s to %s.\\n\", \"{value.mtype}\", \"{mtype}\"); exit(1);")
			return res
		end
	end

	redef fun send(mmethod, arguments)
	do
		if arguments.first.mtype.ctype != "val*" then
			assert arguments.first.mtype == arguments.first.mcasttype
			return self.monomorphic_send(mmethod, arguments.first.mtype, arguments)
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
			ret = self.resolve_for(ret, arguments.first)
			res = self.new_var(ret)
		end

		var s = new Buffer
		var ss = new Buffer

		var recv = arguments.first
		s.append("val*")
		ss.append("{recv}")
		for i in [0..msignature.arity[ do
			var a = arguments[i+1]
			var t = msignature.mparameters[i].mtype
			s.append(", {t.ctype}")
			a = self.autobox(a, t)
			ss.append(", {a}")
		end

		var maybenull = recv.mcasttype isa MNullableType
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

		var color = self.compiler.as(SeparateCompiler).method_colors[mmethod]
		var r
		if ret == null then r = "void" else r = ret.ctype
		var call = "(({r} (*)({s}))({arguments.first}->class->vft[{color}]))({ss}) /* {mmethod} on {arguments.first.inspect}*/"

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
			ret = self.resolve_for(ret, arguments.first)
			res = self.new_var(ret)
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

	redef fun isset_attribute(a, recv)
	do
		# FIXME: Here we inconditionally return boxed primitive attributes
		var res = self.new_var(bool_type)
		self.add("{res} = {recv}->attrs[{self.compiler.as(SeparateCompiler).attr_colors[a]}] != NULL; /* {a} on {recv.inspect}*/")
		return res
	end

	redef fun read_attribute(a, recv)
	do
		# FIXME: Here we inconditionally return boxed primitive attributes
		var ret = a.intro.static_mtype.as(not null)
		ret = self.resolve_for(ret, recv)
		var cret = self.object_type.as_nullable
		var res = self.new_var(cret)
		res.mcasttype = ret
		self.add("{res} = {recv}->attrs[{self.compiler.as(SeparateCompiler).attr_colors[a]}]; /* {a} on {recv.inspect} */")
		if not ret isa MNullableType then
			self.add("if ({res} == NULL) \{")
			self.add_abort("Uninitialized attribute {a.name}")
			self.add("\}")
		end

		return res
	end

	redef fun write_attribute(a, recv, value)
	do
		# FIXME: Here we inconditionally box primitive attributes
		value = self.autobox(value, self.object_type.as_nullable)
		self.add("{recv}->attrs[{self.compiler.as(SeparateCompiler).attr_colors[a]}] = {value}; /* {a} on {recv.inspect} */")
	end

	redef fun init_instance(mtype)
	do
		var compiler = self.compiler.as(SeparateCompiler)
		if mtype isa MGenericType and mtype.need_anchor then
			var buff = new Buffer
			for ft in mtype.mclass.mclass_type.arguments do
				var ftcolor = compiler.ft_colors[ft.as(MParameterType)]
				buff.append("[self->type->fts_table->fts[{ftcolor}]->id]")
			end
			mtype = self.anchor(mtype).as(MClassType)
			return self.new_expr("NEW_{mtype.mclass.c_name}((struct type *) livetypes_{mtype.mclass.c_name}{buff.to_s})", mtype)
		end
		compiler.undead_types.add(mtype)
		return self.new_expr("NEW_{mtype.mclass.c_name}((struct type *) &type_{mtype.c_name})", mtype)
	end

	redef fun type_test(value, mtype)
	do
		var compiler = self.compiler.as(SeparateCompiler)
		var res = self.new_var(bool_type)
		var buff = new Buffer

		if mtype isa MNullableType then mtype = mtype.mtype
		if mtype isa MGenericType and mtype.need_anchor then
			for ft in mtype.mclass.mclass_type.arguments do
				var ftcolor = compiler.ft_colors[ft.as(MParameterType)]
				buff.append("[self->type->fts_table->fts[{ftcolor}]->id]")
			end
			self.add("{res} = {value}->type->type_table[livetypes_{mtype.mclass.c_name}{buff.to_s}->color] == livetypes_{mtype.mclass.c_name}{buff.to_s}->id;")
		else if mtype isa MClassType then
			compiler.undead_types.add(mtype)
			self.add("{res} = {value}->type->type_table[type_{mtype.c_name}.color] == type_{mtype.c_name}.id;")
		else if mtype isa MParameterType then
			var ftcolor = compiler.ft_colors[mtype]
			self.add("{res} = {value}->type->type_table[self->type->fts_table->fts[{ftcolor}]->color] == self->type->fts_table->fts[{ftcolor}]->id;")
		end

		return res
	end

	redef fun is_same_type_test(value1, value2)
	do
		var res = self.new_var(bool_type)
		# TODO
		add("printf(\"NOT YET IMPLEMENTED: is_same_type(%s,%s).\\n\", \"{value1.inspect}\", \"{value2.inspect}\"); exit(1);")
		return res
	end

	redef fun class_name_string(value1)
	do
		var res = self.get_name("var_class_name")
		self.add_decl("const char* {res};")
		# TODO
		add("printf(\"NOT YET IMPLEMENTED: class_name_string(%s).\\n\", \"{value1.inspect}\"); exit(1);")
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
			if value2.mtype.ctype == value1.mtype.ctype then
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
		else
			self.add("{res} = {value1} == {value2};")
		end
		return res
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
