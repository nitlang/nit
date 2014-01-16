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
module compiling_global

import table_computation
private import compiling_icode

redef class Program
	# Compile module and class tables
	fun compile_tables_to_c(v: CompilerVisitor)
	do
		for m in main_module.mhe.greaters_and_self do
			m.compile_local_table_to_c(v)
		end

		with_each_live_local_classes !action(c) do
			if c.global.is_abstract or c.global.is_interface then continue
			c.compile_tables_to_c(v)
		end

		var s = new FlatBuffer.from("classtable_t TAG2VFT[4] = \{NULL")
		for t in ["Int","Char","Bool"] do
			if main_module.has_global_class_named(t.to_symbol) then
				var c = main_module.class_by_name(t.to_symbol)
				s.append(", (const classtable_t)VFT_{c.cname}")
			else
				s.append(", NULL")
			end
		end
		s.append("};")
		v.add_instr(s.to_s)
	end

	# Compile main part (for _table.c)
	fun compile_main_part(v: CompilerVisitor)
	do
		v.add_instr("int main(int argc, char **argv) \{")
		v.indent
		v.add_instr("prepare_signals();")
		v.add_instr("glob_argc = argc; glob_argv = argv;")
		if v.program.main_method == null then
			print("No main")
		else
			var c = v.program.main_class
			v.add_instr("G_sys = NEW_{c.cname}();")
			v.add_instr("register_static_object(&G_sys);")
			v.add_instr("{v.program.main_method.cname}(G_sys);")
		end
		v.add_instr("return 0;")
		v.unindent
		v.add_instr("}")
	end
end

redef class MMModule
	# Declare class table (for _sep.h or _glob.h)
	fun declare_class_tables_to_c(v: CompilerVisitor)
	do
		for c in local_classes do
			if c.global.mmmodule == self then
				c.declare_tables_to_c(v)
			end
		end
	end

	# Compile sep files
	fun compile_mod_to_c(v: CompilerVisitor)
	do
		v.add_decl("extern const char LOCATE_{cname}[];")
		if not v.program.tc.use_SFT_optimization then
			v.add_decl("extern const int SFT_{cname}[];")
		end
		var i = 0
		for e in local_table do
			var value: String
			if v.program.tc.use_SFT_optimization then
				value = "{e.value(v.program)}"
			else
				value = "SFT_{cname}[{i}]"
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
	fun compile_local_table_to_c(v: CompilerVisitor)
	do
		v.add_instr("const char LOCATE_{cname}[] = \"{location.file.filename}\";")

		if v.program.tc.use_SFT_optimization or local_table.is_empty then
			return
		end

		v.add_instr("const int SFT_{cname}[{local_table.length}] = \{")
		v.indent
		for e in local_table do
			v.add_instr(e.value(v.program) + ",")
		end
		v.unindent
		v.add_instr("\};")
	end
end

###############################################################################

redef class AbsTableElt
	# Compile the macro needed to use the element and other related elements
	fun compile_macros(v: CompilerVisitor, value: String) is abstract
end

redef class TableElt
	# Return the value of the element for a given class
	fun compile_to_c(v: CompilerVisitor, c: MMLocalClass): String is abstract
end

redef class ModuleTableElt
	# Return the value of the element once the global analisys is performed
	fun value(prog: Program): String is abstract
end

redef class ModuleTableEltGroup
	redef fun value(prog) do return "{prog.table_information.color(elements.first)} /* Group of ? */"
	redef fun compile_macros(v, value)
	do
		var i = 0
		for e in elements do
			e.compile_macros(v, "{value} + {i}")
			i += 1
		end
	end
end

redef class TableEltMeth
	redef fun compile_macros(v, value)
	do
		var pg = property.global
		v.add_decl("#define {pg.meth_call}(recv) (({pg.intro.cname}_t)CALL((recv), ({value})))")
	end

	redef fun compile_to_c(v, c)
	do
		var p = c[property.global]
		return p.cname
	end
end

redef class TableEltSuper
	redef fun compile_macros(v, value)
	do
		var p = property
		v.add_decl("#define {p.super_meth_call}(recv) (({p.cname}_t)CALL((recv), ({value})))")
	end

	redef fun compile_to_c(v, c)
	do
		var pc = property.local_class
		var g = property.global
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

redef class TableEltVTClassColor
	redef fun compile_macros(v, value)
	do
		var pg = property.global
		v.add_decl("#define {pg.vt_class_color}(recv) (VAL2VFT(recv)[{value}].i)")
	end

	redef fun compile_to_c(v, c)
	do
		var prog = v.program
		var p = c[property.global]
		var g = p.signature_for(c.get_type).return_type.local_class.global
		var col = g.intro.as(MMConcreteClass).class_color_pos
		return "{prog.table_information.color(col)} /* {prog.table_information.color(self)}: VT {c}::{p} : color of {g} */"
	end
end

redef class TableEltVTClassId
	redef fun compile_macros(v, value)
	do
		var pg = property.global
		v.add_decl("#define {pg.vt_class_id}(recv) (VAL2VFT(recv)[{value}].i)")
	end

	redef fun compile_to_c(v, c)
	do
		var prog = v.program
		var p = c[property.global]
		var g = p.signature_for(c.get_type).return_type.local_class.global
		return "{prog.compiled_classes[g].id} /* {prog.table_information.color(self)}: VT {c}::{p} : id of {g} */"
	end
end

redef class TableEltAttr
	redef fun compile_macros(v, value)
	do
		var pg = property.global
		v.add_decl("#define {pg.attr_access}(recv) ATTR(recv, ({value}))")
	end

	redef fun compile_to_c(v, c)
	do
		var prog = v.program
		var p = c[property.global]
		return "/* {prog.table_information.color(self)}: Attribute {c}::{p} */"
	end
end


redef class AbsTableEltClass
	# The C macro name refering the value
	fun symbol: String is abstract

	redef fun compile_macros(v, value)
	do
		v.add_decl("#define {symbol} ({value})")
	end
end

redef class TableEltClassId
	redef fun symbol do return local_class.global.id_id

	redef fun value(prog)
	do
		return "{prog.compiled_classes[local_class.global].id} /* Id of {local_class} */"
	end
end

redef class TableEltClassInitTable
	redef fun symbol do return local_class.global.init_table_pos_id

	redef fun compile_to_c(v, c)
	do
		var prog = v.program
		var cc = prog.compiled_classes[local_class.global]
		var linext = c.cshe.reverse_linear_extension
		var i = 0
		while linext[i].global != local_class.global do
			i += 1
		end
		return "{i} /* {prog.table_information.color(self)}: {c} < {cc.local_class}: superclass init_table position */"
	end
end

redef class TableEltClassColor
	redef fun symbol do return local_class.global.color_id

	redef fun value(prog)
	do
		return "{prog.table_information.color(self)} /* Color of {local_class} */"
	end

	redef fun compile_to_c(v, c)
	do
		var prog = v.program
		var cc = prog.compiled_classes[local_class.global]
		return "{cc.id} /* {prog.table_information.color(self)}: {c} < {cc.local_class}: superclass typecheck marker */"
	end
end

redef class TableEltComposite
	redef fun compile_to_c(v, c) do abort
end

redef class TableEltClassSelfId
	redef fun compile_to_c(v, c)
	do
		var prog = v.program
		return "{prog.compiled_classes[c.global].id} /* {prog.table_information.color(self)}: Identity */"
	end
end

redef class TableEltClassSelfName
	redef fun compile_to_c(v, c)
	do
		var prog = v.program
		return "\"{c.global.name}\" /* {prog.table_information.color(self)}: Class Name */"
	end
end

redef class TableEltClassObjectSize
	redef fun compile_to_c(v, c)
	do
        var nb = 0
        var p = v.program
		if c.name == "NativeArray".to_symbol then
			nb = -1
		else
			var cc = p.compiled_classes[c.global]
			var itab = cc.instance_table
			for e in itab do
				nb += 1
			end
		end
		return "{nb} /* {p.table_information.color(self)}: Object size (-1 if a NativeArray)*/"
	end
end

redef class TableEltObjectId
	redef fun compile_to_c(v, c)
	do
		var p = v.program
		return "/* {p.table_information.color(self)}: Object_id */"
	end
end

redef class TableEltVftPointer
	redef fun compile_to_c(v, c)
	do
		var prog = v.program
		return "/* {prog.table_information.color(self)}: Pointer to the classtable */"
	end
end

###############################################################################

redef class MMLocalClass
	# Declaration and macros related to the class table
	fun declare_tables_to_c(v: CompilerVisitor)
	do
		v.add_decl("")
		var pi = primitive_info
		v.add_decl("extern const classtable_elt_t VFT_{cname}[];")
		if pi != null and not pi.tagged then
			var t = pi.cname
			var tbox = "struct TBOX_{name}"
			v.add_decl("{tbox} \{ const classtable_elt_t * vft; bigint object_id; {t} val;};")
			v.add_decl("val_t BOX_{name}({t} val);")
			v.add_decl("#define UNBOX_{name}(x) ((({tbox} *)(VAL2OBJ(x)))->val)")
		end
	end

	# Compilation of table and new (or box)
	fun compile_tables_to_c(v: CompilerVisitor)
	do
		var cc = v.program.compiled_classes[self.global]
		var ctab = cc.class_table
		var clen = ctab.length
		if v.program.table_information.max_class_table_length > ctab.length then
			clen = v.program.table_information.max_class_table_length
		end

		v.add_instr("const classtable_elt_t VFT_{cname}[{clen}] = \{")
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
			v.add_instr("array->vft = (classtable_elt_t*)VFT_{cname};")
			v.add_instr("array->object_id = object_id_counter;")
			v.add_instr("object_id_counter = object_id_counter + 1;")
			v.add_instr("array->size = length;")
			v.add_instr("return OBJ2VAL(array);")
			v.unindent
			v.add_instr("}")
		else if pi == null then
			do
				# Generate INIT_ATTRIBUTES routine
				var cname = "INIT_ATTRIBUTES__{cname}"
				var args = init_var_iroutine.compile_signature_to_c(v, cname, "init var of {name}", null, null)
				var decl_writer_old = v.decl_writer
				v.decl_writer = v.writer.sub
				init_var_iroutine.compile_to_c(v, cname, args)
				v.decl_writer = decl_writer_old
				v.unindent
				v.add_instr("}")
			end
			do
				# Generate NEW routine
				v.add_decl("val_t NEW_{cname}(void);")
				v.add_instr("val_t NEW_{cname}(void)")
				v.add_instr("\{")
				v.indent
				v.add_instr("obj_t obj;")
				v.add_instr("obj = alloc(sizeof(val_t) * {itab.length});")
				v.add_instr("obj->vft = (classtable_elt_t*)VFT_{cname};")
				v.add_instr("obj[1].object_id = object_id_counter;")
				v.add_instr("object_id_counter = object_id_counter + 1;")
				v.add_instr("return OBJ2VAL(obj);")
				v.unindent
				v.add_instr("}")
			end
			do
				# Compile CHECKNAME
				var cname = "CHECKNEW_{cname}"
				var args = checknew_iroutine.compile_signature_to_c(v, cname, "check new {name}", null, null)
				var decl_writer_old = v.decl_writer
				v.decl_writer = v.writer.sub
				checknew_iroutine.compile_to_c(v, cname, args)
				v.decl_writer = decl_writer_old
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

				var cname = "NEW_{self}_{p.global.intro.cname}"
				var new_args = new_instance_iroutine[p].compile_signature_to_c(v, cname, "new {self} {p.full_name}", null, null)
				var decl_writer_old = v.decl_writer
				v.decl_writer = v.writer.sub
				v.add_instr(init_table_decl)
				var e = new_instance_iroutine[p].compile_to_c(v, cname, new_args).as(not null)
				v.add_instr("return {e};")
				v.decl_writer = decl_writer_old
				v.unindent
				v.add_instr("}")
			end
		else if not pi.tagged then
			var t = pi.cname
			var tbox = "struct TBOX_{name}"
			v.add_instr("val_t BOX_{name}({t} val) \{")
			v.indent
			v.add_instr("{tbox} *box = ({tbox}*)alloc(sizeof({tbox}));")
			v.add_instr("box->vft = VFT_{cname};")
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
		var writer_old = v.writer
		v.writer = v.writer.sub
		var decl_writer_old = v.decl_writer
		v.decl_writer = v.writer.sub

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
			v.add_instr("return {s};")
		end
		v.unindent
		v.add_instr("}")

		v.writer = writer_old
		v.decl_writer = decl_writer_old
	end
end

