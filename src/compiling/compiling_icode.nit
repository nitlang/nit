# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2009 Jean Privat <jean@pryen.org>
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

# Generate C code from intermediate code representation
package compiling_icode

import icode
private import analysis
import primitive_info
import compiling_base

# Compiler context from ICode to C
class I2CCompilerVisitor
	# Associate things
	var _ids: HashMap[Object, String] = new HashMap[Object, String]
	# Associate other things
	var _ids2: HashMap[Object, String] = new HashMap[Object, String]

	# Return the string associated with a register
	fun register(e: IRegister): String
	do
		if e.stype isa MMTypeNone then return "NIT_NULL"
		var ids = _ids
		if closure and not e.is_local then ids = _ids2
		if ids.has_key(e) then
			return ids[e]
		else
			var i = e.slot_index
			if i == null then
				# The register is dead
				var s = "NIT_NULL"
				ids[e] = s
				return s
			else
				var s: String
				var strs: HashMap[Int, String]
				if e.in_tag_slots then
					strs = once new HashMap[Int, String]
					if not strs.has_key(i) then strs[i] = "REGB{i}"
				else if closure and not e.is_local then
					strs = once new HashMap[Int, String]
					if not strs.has_key(i) then strs[i] = "closctx->REG[{i}]"
				else
					strs = once new HashMap[Int, String]
					if not strs.has_key(i) then strs[i] = "fra.me.REG[{i}]"
				end
				s = strs[i]
				ids[e] = s
				return s
			end
		end
	end

	# Return the strings associated with registers
	fun registers(a: Collection[IRegister]): Array[String]
	do
		var r = new Array[String].with_capacity(a.length)
		for e in a do
			r.add(register(e))
		end
		return r
	end

	var _last_number: Int = 0
	# Give a new unique number (unique for the visitor)
	fun new_number: Int
	do
		_last_number += 1
		return _last_number
	end

	# Return the string associated with a escape label
	fun lab(e: ISeq): String
	do
		if _ids.has_key(e) then
			return _ids[e]
		else
			var s = "label{new_number}"
			_ids[e] = s
			return s
		end
	end

	# The rank (number) of each closure
	readable var _closures: HashMap[IClosureDecl, String] = new HashMap[IClosureDecl, String]

	# The functionnal type of each closure
	readable var _clostypes: HashMap[IClosureDecl, String] = new HashMap[IClosureDecl, String]

	# label locally accessibles
	readable writable var _local_labels: HashSet[ISeq] = new HashSet[ISeq]

	# Not local escaped labels
	# The integer value is an index identifying the label
	readable writable var _escaped_labels: HashMap[ISeq, Int] = new HashMap[ISeq, Int]

	# Register a escape to a non local label and return an index identifying the label
	fun register_escape_label(e: ISeq): Int
	do
		if _escaped_labels.has_key(e) then
			return _escaped_labels[e]
		else
			var res = _escaped_labels.length + 1
			_escaped_labels[e] = res
			return res
		end
	end

	# Add a C label mark (if needed)
	fun add_label(e: ISeq)
	do
		if _ids.has_key(e) then
			add_instr("{_ids[e]}: while(0);")
		end
	end

	# Add a goto to a label (even outside a closure)
	fun add_goto(seq: ISeq)
	do
		if local_labels.has(seq) then
			add_instr("goto {lab(seq)};")
		else
			assert closure
			var ind = register_escape_label(seq)
			add_instr("closctx->has_broke = {ind};")
			add_instr("goto {lab(return_label.as(not null))};")
		end
	end

	# Association between IEscapeMarks and visited ISeq
	readable var _marks_to_seq: Map[IEscapeMark, ISeq] = new HashMap[IEscapeMark, ISeq]

	# Are we in a closure ?
	readable writable var _closure: Bool = false

	# The current compiler visitor
	readable var _visitor: CompilerVisitor

	# The current compiled iroutine
	readable var _iroutine: IRoutine

	# The return label of the current compiling C function
	readable writable var _return_label: nullable ISeq = null

	fun add_decl(s: String)
	do
		visitor.add_decl(s)
	end

	# Prepare a new instuction (indent, comment)
	# Caller must ensure to add a new line to finish its instr
	fun new_instr: Writer
	do
		var w = visitor.writer
		var l = _next_location
		if l != null then
			visitor.add_indent(w)
			w.add("/* ")
			w.add(l.file.filename)
			w.add(":")
			w.add(l.line_start.to_s)
			w.add(" */\n")
			_next_location = null
		end
		visitor.add_indent(w)
		return w
	end

	fun add_instr(s: String)
	do
		new_instr.add(s).add("\n")
	end

	fun indent
	do
		visitor.indent
	end

	fun unindent
	do
		visitor.unindent
	end

	fun add_assignment(to, from: String)
	do
		visitor.add_assignment(to, from)
	end

	var _last_location: nullable Location = null
	var _next_location: nullable Location = null

	# Add location information in a comment
	# Do nothing if the last location added is the same
	fun add_location(l: nullable Location)
	do
		var last = _last_location
		if last == l or l == null then return
		_last_location = l
		if last != null and last.file == l.file and last.line_start == l.line_start then
			return
		else
			_next_location = l
		end
	end

	# The C fonction name of the iroutine
	readable var _basecname: String

	init(v: CompilerVisitor, ir: IRoutine, cname: String)
	do
		_visitor = v
		_iroutine = ir
		_basecname = cname
	end
end

redef class IRoutine
	# Declare and start a C function that match the routine
	# Return what must be given to compile_inside_to_c or to compile_to_c
	# After the method, an openinig { and and indent is added.
	# So, do not forget to add a sub_context, to unintent and to add a closing }
	fun compile_signature_to_c(v: CompilerVisitor, cname: String, human_name: nullable String, before_params, after_params: nullable String): Array[String]
	do
		var cargs = new Array[String]
		var cparams = new Array[String]
		if before_params != null then cparams.add(before_params)
		for i in [0..params.length[ do
			cargs.add("p{i}")
			cparams.add("val_t p{i}")
		end
		if closure_decls != null then
			cparams.add("struct stack_frame_t *closctx_param")
			for i in [0..closure_decls.length[ do
				var closcn = "CLOS_{cname}_{i}"
				var cs = closure_decls[i].closure.signature
				var subparams = new Array[String] # Parameters of the closure
				subparams.add("struct stack_frame_t *")
				for j in [0..cs.arity[ do
					subparams.add("val_t")
				end
				var rr = "void"
				if cs.return_type != null then rr = "val_t"
				v.add_decl("typedef {rr} (*{closcn})({subparams.join(", ")});")
				cargs.add("clos_fun{i}")
				cparams.add("fun_t clos_fun{i}")
			end
		end
		if after_params != null then cparams.add(after_params)
		var r = "void"
		if result != null then r = "val_t"
		var p: String
		if cparams.is_empty then
			p = "void"
		else
			p = cparams.join(", ")
		end
		if human_name != null then
			v.add_instr("static const char LOCATE_{cname}[] = \"{human_name}\";")
		end
		v.add_decl("{r} {cname}({p});")
		v.add_decl("typedef {r} (*{cname}_t)({p});")
		v.add_instr("{r} {cname}({p})\{")
		v.indent
		return cargs
	end

	# Compile the body of the routine, return the result value is any
	fun compile_inside_to_c(v: I2CCompilerVisitor, args: Array[String]): nullable String
	do
		# Create and push the stack frame
		var ll = 0
		if location != null then
			ll = location.line_start
		end
		# Encapsulate the frame ('me') in a larger structure ('fra') that has enough space to store the local variables (REG)
		if std_slots_nb > 1 then
			v.add_decl("struct \{struct stack_frame_t me; val_t MORE_REG[{std_slots_nb-1}];\} fra;")
		else
			v.add_decl("struct \{struct stack_frame_t me;\} fra;")
		end
		v.add_instr("fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;")
		v.add_instr("fra.me.file = LOCATE_{v.visitor.mmmodule.cname};")
		v.add_instr("fra.me.line = {ll};")
		v.add_instr("fra.me.meth = LOCATE_{v.basecname};")
		v.add_instr("fra.me.has_broke = 0;")
		v.add_instr("fra.me.REG_size = {std_slots_nb};")
		v.add_instr("fra.me.nitni_local_ref_head = NULL;")

		# Declare/initialize local variables
		for i in [0..std_slots_nb[ do
			v.add_instr("fra.me.REG[{i}] = NIT_NULL;")
		end
		for i in [0..tag_slots_nb[ do
			v.add_decl("val_t REGB{i};")
		end
		var iclosdecls = closure_decls
		if iclosdecls != null then
			v.add_decl("fun_t CREG[{iclosdecls.length}];")
			v.add_instr("fra.me.closure_ctx = closctx_param;")
			v.add_instr("fra.me.closure_funs = CREG;")
		end
		var k = 0
		for r in params do
			if r.slot_index != null then v.add_assignment(v.register(r), args[k])
			k += 1
		end
		if iclosdecls != null then
			for i in [0..iclosdecls.length[ do
				var iclosdecl = iclosdecls[i]
				v.add_instr("CREG[{i}] = {args[params.length+i]};")
				v.closures[iclosdecl] = i.to_s
				var cs = iclosdecl.closure.signature # Closure signature
				var subparams = new Array[String] # Parameters of the closure
				subparams.add("struct stack_frame_t *")
				for j in [0..cs.arity[ do
					var p = "val_t"
					subparams.add(p)
				end
				var r = "void"
				if cs.return_type != null then r = "val_t"
				v.clostypes[iclosdecl] = "{r} (*)({subparams.join(", ")})"
			end
		end
		v.add_decl("val_t tmp;")

		# Prepare return
		var old_rl = v.return_label
		v.return_label = body

		# Compile body
		body.compile_to_c(v)

		v.add_instr("stack_frame_head = fra.me.prev;")
		v.return_label = old_rl
		var r = result
		if r != null then
			return v.register(r)
		else
			return null
		end
	end

	# Full compilation of the routine
	# cv must be in the correct function
	fun compile_to_c(cv: CompilerVisitor, cname: String, args: Array[String]): nullable String
	do
		var v = new I2CCompilerVisitor(cv, self, cname)
		return compile_inside_to_c(v, args)
	end
end

redef class ICode
	# Full compilation of the icode
	fun compile_to_c(v: I2CCompilerVisitor) is abstract

	# Is a result really needed
	private fun need_result: Bool
	do
		var r = result
		return r != null and r.slot_index != null
	end

	# Store s in the result value of self
	private fun store_result(v: I2CCompilerVisitor, w: nullable Writer)
	do
		var r = result
		if r != null and r.slot_index != null then
			assert w != null
			var w2 = v.new_instr
			w2.add(v.register(r))
			w2.add(" = ")
			w2.append(w)
			w2.add(";\n")
		else if w != null and not is_pure then
			# ICode with side effects must be evaluated
			# even if the result is not wanted
			var w2 = v.new_instr
			w2.append(w)
			w2.add(";\n")
		end
	end

	# Prepare a writer if the expression icode need to be compiled
	# * Result assigment is automatic if needed
	private fun new_result(v: I2CCompilerVisitor): Writer
	do
		assert need_result or not is_pure
		var w2 = v.new_instr
		var r = result
		if r != null and r.slot_index != null then
			w2.add(v.register(r))
			w2.add(" = ")
		end
		var w = w2.sub
		w2.add(";\n")
		return w
	end
end

redef class ISeq
	redef fun compile_to_c(v)
	do
		v.add_location(location)
		v.local_labels.add(self)
		var mark = iescape_mark
		if mark != null then v.marks_to_seq[mark] = self
		for ic in icodes do
			ic.compile_to_c(v)
		end
		v.add_label(self)
	end
end

redef class IIf
	redef fun compile_to_c(v)
	do
		v.add_location(location)
		var w = v.new_instr
		w.add("if (UNTAG_Bool(")
		w.add(v.register(expr))
		w.add(")) \{\n")
		if not then_seq.icodes.is_empty then
			v.indent
			then_seq.compile_to_c(v)
			v.unindent
		end
		if not else_seq.icodes.is_empty then
			v.add_instr("\} else \{")
			v.indent
			else_seq.compile_to_c(v)
			v.unindent
		end
		v.add_instr("\}")
	end
end

redef class ILoop
	redef fun compile_to_c(v)
	do
		v.add_location(location)
		v.local_labels.add(self)
		var mark = iescape_mark
		if mark != null then v.marks_to_seq[mark] = self
		v.add_instr("while(1) \{")
		v.indent
		for ic in icodes do
			ic.compile_to_c(v)
		end
		v.unindent
		v.add_instr("\}")
		v.add_label(self)
	end
end

redef class IEscape
	redef fun compile_to_c(v)
	do
		v.add_location(location)
		v.add_goto(v.marks_to_seq[iescape_mark])
	end
end

redef class IAbsCall
	redef fun compile_to_c(v)
	do
		v.add_location(location)
		var args = v.registers(exprs)

		# Compile closure definitions
		var old_el = v.escaped_labels
		var closdefs = closure_defs
		var closctx: nullable String = null # The closure context of closdefs
		if closdefs != null then
			# Get the closure context
			if v.closure then
				closctx = "closctx"
			else
				closctx = "(&(fra.me))"
			end

			# First aditionnal arguments is the closure context
			args.add(closctx)

			# We are in a new escape boundary
			v.escaped_labels = new HashMap[ISeq, Int]

			# Compile each closures and add each sub-function as an other additionnal parameter
			for cd in closdefs do
				if cd != null then
					var cn = cd.compile_closure(v)
					args.add(cn)
				else
					args.add("NULL")
				end
			end
		end

		# Compile the real call
		var call = compile_call_to_c(v, args)
		var res: nullable Writer = call

		# Intercept escapes
		if closctx != null then
			var els = v.escaped_labels
			v.escaped_labels = old_el
			# Is there possible escapes?
			if not els.is_empty then
				# Call in a tmp variable to avoid 'break' overwrite
				var w = v.new_instr
				if need_result then
					w.add("tmp")
					w.add(" = ")
					w.append(call)
					w.add(";\n")
					res = new Writer
					res.add("tmp")
				else
					res = null
					w.append(call)
					w.add(";\n")
				end
				# What are the expected escape indexes
				v.new_instr.add("switch (").add(closctx).add("->has_broke) \{\n")
				v.indent
				# No escape occured, continue as usual
				v.add_instr("case 0: break;")
				var lls = v.local_labels
				var iels = els.iterator
				var forward_escape = false
				while iels.is_ok do
					var seq = iels.key
					if lls.has(seq) then
						# Local escape occured
						# Clear the has_broke information and go to the target
						v.new_instr.add("case ").add(iels.item.to_s).add(": ").add(closctx).add("->has_broke = 0; goto ").add(v.lab(seq)).add(";\n")
					else
						# Forward escape occured: register the escape label
						assert v.closure
						v.register_escape_label(seq)
						forward_escape = true
					end
					iels.next
				end
				# If forward escape occured, just pass to the next one
				if forward_escape then
					# Do not need to copy 'has_broke' value since it is shared by the next one.
					# So just exit the C function.
					v.new_instr.add("default: goto ").add(v.lab(v.return_label.as(not null))).add(";\n")
				end
				v.unindent
				v.add_instr("\}")
			end
		end

		if res != null then
			var w = new_result(v)
			w.append(res)
		end
	end

	# The single invocation witout fancy stuffs
	private fun compile_call_to_c(v: I2CCompilerVisitor, args: Array[String]): Writer is abstract
end

redef class ICall
	redef fun compile_call_to_c(v, args)
	do
		var w = new Writer
		
		# do not compile explicit calls from native methods
		# theses are really manually called in the native implementation
		if is_explicit_from_extern then return w

		var prop = property
		if prop.global.is_init then args.add("init_table")
		w.add(prop.global.meth_call)
		w.add("(")
		w.add(args.first)
		w.add(")(")
		w.add_all(args, ", ")
		w.add(")")
		return w
	end
end

redef class ISuper
	redef fun compile_call_to_c(v, args)
	do
		# do not compile explicit calls from native methods
		# theses are really manually called in the native implementation
		if is_explicit_from_extern then return new Writer

		var prop = property
		if prop.global.is_init then args.add("init_table")
		var w = new Writer
		w.add(prop.super_meth_call)
		w.add("(")
		w.add(args.first)
		w.add(")(")
		w.add_all(args, ", ")
		w.add(")")
		return w
	end
end

redef class INew
	redef fun compile_call_to_c(v, args)
	do
		var w = new Writer

		# do not compile explicit calls from native methods
		# theses are really manually called in the native implementation
		if is_explicit_from_extern then return w

		w.add("NEW_")
		w.add(stype.local_class.to_s)
		w.add("_")
		w.add(property.global.intro.cname)
		w.add("(")
		w.add_all(args, ", ")
		w.add(")")
		return w
	end
end

redef class IAllocateInstance
	redef fun compile_to_c(v)
	do
		v.add_location(location)
		var w = new_result(v)
		w.add("NEW_")
		w.add(stype.local_class.cname)
		w.add("()")
	end
end

redef class ICheckInstance
	redef fun compile_to_c(v)
	do
		v.add_location(location)
		var w = new_result(v)
		w.add("CHECKNEW_")
		w.add(stype.local_class.cname)
		w.add("(")
		w.add(v.register(expr))
		w.add(")")
	end
end

redef class IInitAttributes
	redef fun compile_to_c(v)
	do
		v.add_location(location)
		var w = v.new_instr
		w.add("INIT_ATTRIBUTES__")
		w.add(stype.local_class.cname)
		w.add("(")
		w.add(v.register(expr))
		w.add(");\n")
	end
end

redef class IStaticCall
	redef fun compile_call_to_c(v, args)
	do
		var prop = property
		if prop.global.is_init then args.add("init_table")
		var w = new Writer
		w.add(property.cname)
		w.add("(")
		w.add_all(args, ", ")
		w.add(")")
		return w
	end
end

redef class INative
	redef fun compile_to_c(v)
	do
		v.add_location(location)
		if method.is_intern then
			compile_intern_method_to_c(v)
		else if not method.global.is_init then
			compile_extern_method_to_c(v)
		end
	end

	fun compile_extern_method_to_c(v: I2CCompilerVisitor)
	do
		var ename = "{method.friendly_extern_name(method.local_class)}___out"

		var sig = method.signature
		assert exprs.length == sig.arity + 1

		var regs = v.registers(exprs)

		var args = new Array[String]
		args.add(regs[0])
		for i in [0..sig.arity[ do
			args.add(regs[i+1])
		end
		var s = "{ename}({args.join(", ")})"

		if need_result then s = s # sig.return_type.boxtype(s)
		var w = new_result(v)
		w.add(s)
	end

	fun compile_intern_method_to_c(v: I2CCompilerVisitor)
	do
		var sig = method.signature
		assert exprs.length == sig.arity + 1
		var c = method.local_class.name
		var n = method.name
		var regs = v.registers(exprs)
		var s: nullable String = null
		if c == once "Int".to_symbol then
			if n == once "object_id".to_symbol then
				s = regs[0]
			else if n == once "unary -".to_symbol then
				s = "TAG_Int(-UNTAG_Int({regs[0]}))"
			else if n == once "output".to_symbol then
				s = "printf(\"%ld\\n\", UNTAG_Int({regs[0]}));"
			else if n == once "ascii".to_symbol then
				s = "TAG_Char(UNTAG_Int({regs[0]}))"
			else if n == once "succ".to_symbol then
				s = "TAG_Int(UNTAG_Int({regs[0]})+1)"
			else if n == once "prec".to_symbol then
				s = "TAG_Int(UNTAG_Int({regs[0]})-1)"
			else if n == once "to_f".to_symbol then
				s = "BOX_Float((float)UNTAG_Int({regs[0]}))"
			else if n == once "+".to_symbol then
				s = "TAG_Int(UNTAG_Int({regs[0]})+UNTAG_Int({regs[1]}))"
			else if n == once "-".to_symbol then
				s = "TAG_Int(UNTAG_Int({regs[0]})-UNTAG_Int({regs[1]}))"
			else if n == once "*".to_symbol then
				s = "TAG_Int(UNTAG_Int({regs[0]})*UNTAG_Int({regs[1]}))"
			else if n == once "/".to_symbol then
				s = "TAG_Int(UNTAG_Int({regs[0]})/UNTAG_Int({regs[1]}))"
			else if n == once "%".to_symbol then
				s = "TAG_Int(UNTAG_Int({regs[0]})%UNTAG_Int({regs[1]}))"
			else if n == once "<".to_symbol then
				s = "TAG_Bool(UNTAG_Int({regs[0]})<UNTAG_Int({regs[1]}))"
			else if n == once ">".to_symbol then
				s = "TAG_Bool(UNTAG_Int({regs[0]})>UNTAG_Int({regs[1]}))"
			else if n == once "<=".to_symbol then
				s = "TAG_Bool(UNTAG_Int({regs[0]})<=UNTAG_Int({regs[1]}))"
			else if n == once ">=".to_symbol then
				s = "TAG_Bool(UNTAG_Int({regs[0]})>=UNTAG_Int({regs[1]}))"
			else if n == once "lshift".to_symbol then
				s = "TAG_Int(UNTAG_Int({regs[0]})<<UNTAG_Int({regs[1]}))"
			else if n == once "rshift".to_symbol then
				s = "TAG_Int(UNTAG_Int({regs[0]})>>UNTAG_Int({regs[1]}))"
			else if n == once "==".to_symbol then
				s = "TAG_Bool(({regs[0]})==({regs[1]}))"
			else if n == once "!=".to_symbol then
				s = "TAG_Bool(({regs[0]})!=({regs[1]}))"
			end
		else if c == once "Float".to_symbol then
			if n == once "object_id".to_symbol then
				s = "TAG_Int((bigint)UNBOX_Float({regs[0]}))"
			else if n == once "unary -".to_symbol then
				s = "BOX_Float(-UNBOX_Float({regs[0]}))"
			else if n == once "output".to_symbol then
				s = "printf(\"%f\\n\", UNBOX_Float({regs[0]}));"
			else if n == once "to_i".to_symbol then
				s = "TAG_Int((bigint)UNBOX_Float({regs[0]}))"
			else if n == once "+".to_symbol then
				s = "BOX_Float(UNBOX_Float({regs[0]})+UNBOX_Float({regs[1]}))"
			else if n == once "-".to_symbol then
				s = "BOX_Float(UNBOX_Float({regs[0]})-UNBOX_Float({regs[1]}))"
			else if n == once "*".to_symbol then
				s = "BOX_Float(UNBOX_Float({regs[0]})*UNBOX_Float({regs[1]}))"
			else if n == once "/".to_symbol then
				s = "BOX_Float(UNBOX_Float({regs[0]})/UNBOX_Float({regs[1]}))"
			else if n == once "<".to_symbol then
				s = "TAG_Bool(UNBOX_Float({regs[0]})<UNBOX_Float({regs[1]}))"
			else if n == once ">".to_symbol then
				s = "TAG_Bool(UNBOX_Float({regs[0]})>UNBOX_Float({regs[1]}))"
			else if n == once "<=".to_symbol then
				s = "TAG_Bool(UNBOX_Float({regs[0]})<=UNBOX_Float({regs[1]}))"
			else if n == once ">=".to_symbol then
				s = "TAG_Bool(UNBOX_Float({regs[0]})>=UNBOX_Float({regs[1]}))"
			end
		else if c == once "Char".to_symbol then
			if n == once "object_id".to_symbol then
				s = "TAG_Int(UNTAG_Char({regs[0]}))"
			else if n == once "unary -".to_symbol then
				s = "TAG_Char(-UNTAG_Char({regs[0]}))"
			else if n == once "output".to_symbol then
				s = "printf(\"%c\", (unsigned char)UNTAG_Char({regs[0]}));"
			else if n == once "ascii".to_symbol then
				s = "TAG_Int((unsigned char)UNTAG_Char({regs[0]}))"
			else if n == once "succ".to_symbol then
				s = "TAG_Char(UNTAG_Char({regs[0]})+1)"
			else if n == once "prec".to_symbol then
				s = "TAG_Char(UNTAG_Char({regs[0]})-1)"
			else if n == once "to_i".to_symbol then
				s = "TAG_Int(UNTAG_Char({regs[0]})-'0')"
			else if n == once "+".to_symbol then
				s = "TAG_Char(UNTAG_Char({regs[0]})+UNTAG_Char({regs[1]}))"
			else if n == once "-".to_symbol then
				s = "TAG_Char(UNTAG_Char({regs[0]})-UNTAG_Char({regs[1]}))"
			else if n == once "*".to_symbol then
				s = "TAG_Char(UNTAG_Char({regs[0]})*UNTAG_Char({regs[1]}))"
			else if n == once "/".to_symbol then
				s = "TAG_Char(UNTAG_Char({regs[0]})/UNTAG_Char({regs[1]}))"
			else if n == once "%".to_symbol then
				s = "TAG_Char(UNTAG_Char({regs[0]})%UNTAG_Char({regs[1]}))"
			else if n == once "<".to_symbol then
				s = "TAG_Bool(UNTAG_Char({regs[0]})<UNTAG_Char({regs[1]}))"
			else if n == once ">".to_symbol then
				s = "TAG_Bool(UNTAG_Char({regs[0]})>UNTAG_Char({regs[1]}))"
			else if n == once "<=".to_symbol then
				s = "TAG_Bool(UNTAG_Char({regs[0]})<=UNTAG_Char({regs[1]}))"
			else if n == once ">=".to_symbol then
				s = "TAG_Bool(UNTAG_Char({regs[0]})>=UNTAG_Char({regs[1]}))"
			else if n == once "==".to_symbol then
				s = "TAG_Bool(({regs[0]})==({regs[1]}))"
			else if n == once "!=".to_symbol then
				s = "TAG_Bool(({regs[0]})!=({regs[1]}))"
			end
		else if c == once "Bool".to_symbol then
			if n == once "object_id".to_symbol then
				s = "TAG_Int(UNTAG_Bool({regs[0]}))"
			else if n == once "unary -".to_symbol then
				s = "TAG_Bool(-UNTAG_Bool({regs[0]}))"
			else if n == once "output".to_symbol then
				s = "(void)printf(UNTAG_Bool({regs[0]})?\"true\\n\":\"false\\n\");"
			else if n == once "ascii".to_symbol then
				s = "TAG_Bool(UNTAG_Bool({regs[0]}))"
			else if n == once "to_i".to_symbol then
				s = "TAG_Int(UNTAG_Bool({regs[0]}))"
			else if n == once "==".to_symbol then
				s = "TAG_Bool(({regs[0]})==({regs[1]}))"
			else if n == once "!=".to_symbol then
				s = "TAG_Bool(({regs[0]})!=({regs[1]}))"
			end
		else if c == once "NativeArray".to_symbol then
			if n == once "object_id".to_symbol then
				s = "TAG_Int(((Nit_NativeArray){regs[0]})->object_id)"
			else if n == once "[]".to_symbol then
				s = "((Nit_NativeArray){regs[0]})->val[UNTAG_Int({regs[1]})]"
			else if n == once "[]=".to_symbol then
				s = "((Nit_NativeArray){regs[0]})->val[UNTAG_Int({regs[1]})]={regs[2]}"
			else if n == once "copy_to".to_symbol then
				s = "(void)memcpy(((Nit_NativeArray ){regs[1]})->val, ((Nit_NativeArray){regs[0]})->val, UNTAG_Int({regs[2]})*sizeof(val_t))"
			end
		else if c == once "NativeString".to_symbol then
			if n == once "object_id".to_symbol then
				s = "TAG_Int(UNBOX_NativeString({regs[0]}))"
			else if n == once "atoi".to_symbol then
				s = "TAG_Int(atoi(UNBOX_NativeString({regs[0]})))"
			else if n == once "[]".to_symbol then
				s = "TAG_Char(UNBOX_NativeString({regs[0]})[UNTAG_Int({regs[1]})])"
			else if n == once "[]=".to_symbol then
				s = "UNBOX_NativeString({regs[0]})[UNTAG_Int({regs[1]})]=UNTAG_Char({regs[2]});"
			else if n == once "copy_to".to_symbol then
				s = "(void)memcpy(UNBOX_NativeString({regs[1]})+UNTAG_Int({regs[4]}), UNBOX_NativeString({regs[0]})+UNTAG_Int({regs[3]}), UNTAG_Int({regs[2]}));"
			end
		else if c == once "Sys".to_symbol then
			if n == once "force_garbage_collection".to_symbol then
				s = "Nit_gc_force_garbage_collection()"
			end
		else if n == once "object_id".to_symbol then
			s = "TAG_Int((bigint)((obj_t){regs[0]})[1].object_id)"
		else if n == once "sys".to_symbol then
			s = "(G_sys)"
		else if n == once "is_same_type".to_symbol then
			s = "TAG_Bool((VAL2VFT({regs[0]})==VAL2VFT({regs[1]})))"
		else if n == once "exit".to_symbol then
			s = "exit(UNTAG_Int({regs[1]}));"
		else if n == once "calloc_array".to_symbol then
			s = "NEW_NativeArray(UNTAG_Int({regs[1]}), sizeof(val_t))"
		else if n == once "calloc_string".to_symbol then
			s = "BOX_NativeString((char*)raw_alloc((UNTAG_Int({regs[1]}) * sizeof(char))))"
		# Add output_class_name native implementation
		else if n == once "output_class_name".to_symbol then
			s = "printf(\"%s\\n\", VAL2VFT({regs[0]})[2].cname);"
		# Add class_name implementation
		else if n == once "native_class_name".to_symbol then
			s = "BOX_NativeString(VAL2VFT({regs[0]})[2].cname);"
		end

		if s == null then
			var ll = location
			if ll != null then v.add_instr("fprintf(stderr, \"{ll.to_s}: \");")
			v.add_instr("fprintf(stderr, \"Fatal error: unknown intern method {method.full_name}.\\n\");")
			v.add_instr("nit_exit(1);")
			s = "NIT_NULL"
		end
		if result == null then
			v.new_instr.add(s).add(";\n")
		else if need_result then
			var w = new_result(v)
			w.add(s)
		end
	end
end

redef class IIntValue
	redef fun compile_to_c(v)
	do
		v.add_location(location)
		var w = new_result(v)
		w.add("TAG_Int(").add(value.to_s).add(")")
	end
end

redef class IBoolValue
	redef fun compile_to_c(v)
	do
		v.add_location(location)
		var w = new_result(v)
		w.add("TAG_Bool(")
		if value then w.add("1") else w.add("0")
		w.add(")")
	end
end

redef class ICharValue
	redef fun compile_to_c(v)
	do
		v.add_location(location)
		var w = new_result(v)
		w.add("TAG_Char(").add(value).add(")")
	end
end

redef class IFloatValue
	redef fun compile_to_c(v)
	do
		v.add_location(location)
		var w = new_result(v)
		w.add("BOX_Float(").add(value).add(")")
	end
end

redef class IStringValue
	redef fun compile_to_c(v)
	do
		v.add_location(location)
		var w = new_result(v)
		w.add("BOX_NativeString(\"").add(value).add("\")")
	end
end

redef class IAbort
	redef fun compile_to_c(v)
	do
		v.add_location(location)
		var w = v.new_instr
		w.add("nit_abort(\"")
		w.add(texts[0])
		if texts.length > 1 then
			w.add("\", \"")
			w.add(texts[1])
			w.add("\"")
		else
			w.add("\", NULL")
		end
		w.add(", LOCATE_")
		w.add(module_location.cname)
		var ll = location
		if ll != null then
			w.add(", ")
			w.add(ll.line_start.to_s)
		else
			w.add(", 0")
		end
		w.add(");\n")
	end
end

redef class IMove
	redef fun compile_to_c(v)
	do
		if not need_result then return
		var e = v.register(expr)
		var r = v.register(result.as(not null))
		if e == r then return
		v.add_location(location)
		var w = v.new_instr
		w.add(r)
		w.add(" = ")
		w.add(e)
		w.add(";\n")
	end
end

redef class IAttrRead
	redef fun compile_to_c(v)
	do
		if not need_result then return
		v.add_location(location)
		var w = new_result(v)
		w.add(property.global.attr_access)
		w.add("(")
		w.add(v.register(expr))
		w.add(")")
	end
end

redef class IAttrIsset
	redef fun compile_to_c(v)
	do
		if not need_result then return
		v.add_location(location)
		var w = new_result(v)
		w.add("TAG_Bool(")
		w.add(property.global.attr_access)
		w.add("(")
		w.add(v.register(expr))
		w.add(")!=NIT_NULL)")
	end
end

redef class IAttrWrite
	redef fun compile_to_c(v)
	do
		v.add_location(location)
		var w = v.new_instr
		w.add(property.global.attr_access)
		w.add("(")
		w.add(v.register(expr1))
		w.add(") = ")
		w.add(v.register(expr2))
		w.add(";\n")
	end
end

redef class ITypeCheck
	redef fun compile_to_c(v)
	do
		if not need_result then return
		v.add_location(location)
		var recv = v.register(expr2)
		var w = new_result(v)
		w.add("TAG_Bool(")
		if expr2.stype.is_nullable then
			if stype.is_nullable then
				w.add("(")
				w.add(recv)
				w.add("==NIT_NULL) || ")
			else if stype.as_nullable == expr2.stype then
				w.add(recv)
				w.add("!=NIT_NULL)")
				return
			else
				w.add("(")
				w.add(recv)
				w.add("!=NIT_NULL) && ")
			end
		end
		# FIXME handle formaltypes
		var t = stype
		if t isa MMVirtualType then
			var slf = v.register(expr1)
			var g = t.property.global
			w.add("VAL_ISA(")
			w.add(recv)
			w.add(", ")
			w.add(g.vt_class_color)
			w.add("(")
			w.add(slf)
			w.add(")")
			w.add(", ")
			w.add(g.vt_class_id)
			w.add("(")
			w.add(slf)
			w.add(")")
			w.add(")) /*cast ")
			w.add(t.to_s)
			w.add("*/")
		else
			var g = t.local_class.global
			w.add("VAL_ISA(")
			w.add(recv)
			w.add(", ")
			w.add(g.color_id)
			w.add(", ")
			w.add(g.id_id)
			w.add(")) /*cast ")
			w.add(t.to_s)
			w.add("*/")
		end
	end
end

redef class IIs
	redef fun compile_to_c(v)
	do
		if not need_result then return
		v.add_location(location)
		var w = new_result(v)
		w.add("TAG_Bool(")
		var t1 = expr1.stype
		var t2 = expr2.stype
		if t1 isa MMTypeNone then
			if t2 isa MMTypeNone then
				w.add("1)")
				return
			else if t2.is_nullable then
				w.add(v.register(expr2))
				w.add("==NIT_NULL)")
				return
			else
				w.add("0)")
				return
			end
		else if t1.is_nullable then
			if t2 isa MMTypeNone then
				w.add(v.register(expr1))
				w.add("==NIT_NULL)")
				return
			else if t2.is_nullable then
				w.add("IS_EQUAL_NN(")
			else
				w.add("IS_EQUAL_ON(")
				w.add(v.register(expr2))
				w.add(",")
				w.add(v.register(expr1))
				w.add("))")
				return
			end
		else
			if t2 isa MMTypeNone then
				w.add("0)")
				return
			else if t2.is_nullable then
				w.add("IS_EQUAL_ON(")
			else
				w.add("IS_EQUAL_OO(")
			end
		end
		w.add(v.register(expr1))
		w.add(",")
		w.add(v.register(expr2))
		w.add("))")
	end
end

redef class INot
	redef fun compile_to_c(v)
	do
		if not need_result then return
		v.add_location(location)
		var w = new_result(v)
		w.add("TAG_Bool(!UNTAG_Bool(")
		w.add(v.register(expr))
		w.add("))")
	end
end

redef class IOnce
	redef fun compile_to_c(v)
	do
		v.add_location(location)
		var i = v.new_number
		var res = result.as(not null)
		if res.stype.is_nullable then
			v.add_decl("static val_t once_value_{i}; static int once_bool_{i}; /* Once value */")
			v.add_instr("if (!once_bool_{i}) \{")
		else
			# Since the value is not nullable, we use the null value to represent the boolean
			v.add_decl("static val_t once_value_{i}; /* Once value */")
			v.add_instr("if (!once_value_{i}) \{")
		end
		v.indent
		body.compile_to_c(v)
		var e = v.register(res)
		v.add_instr("once_value_{i} = {e};")
		v.add_instr("register_static_object(&once_value_{i});")
		if res.stype.is_nullable then v.add_instr("once_bool_{i} = true;")
		v.unindent
		v.add_instr("\} else {e} = once_value_{i};")
		var w = new_result(v)
		w.add(e)
	end
end

redef class IClosCall
	redef fun compile_to_c(v: I2CCompilerVisitor)
	do
		v.add_location(location)
		var ivar: String
		var args: Array[String]
		if v.closure then
			ivar = "closctx->closure_funs[{v.closures[closure_decl]}]"
			args = ["closctx->closure_ctx"]
		else
			ivar = "CREG[{v.closures[closure_decl]}]"
			args = ["closctx_param"]
		end
		args.append(v.registers(exprs))

		var s = "(({v.clostypes[closure_decl]})({ivar}))({args.join(", ")})"
		var w = new Writer
		w.add(s)
		store_result(v, w)

		# Intercept escape
		v.add_instr("if ({args.first}->has_broke) \{")
		v.indent
		var bs = break_seq
		if bs != null then
			bs.compile_to_c(v)
		end
		v.add_goto(v.iroutine.body)
		v.unindent
		v.add_instr("\}")
	end
end

redef class IHasClos
	redef fun compile_to_c(v)
	do
		if not need_result then return
		v.add_location(location)
		var w = new_result(v)
		w.add("TAG_Bool(")
		if v.closure then
			w.add("closctx->closure_funs[")
			w.add(v.closures[closure_decl])
			w.add("]")
		else
			w.add("CREG[")
			w.add(v.closures[closure_decl])
			w.add("]")
		end
		w.add(" != NULL)")
	end
end

redef class IClosureDef
	# Compile the closure as a separate C function in the visitor out_contexts.
	# Return a fun_t pointer to the function.
	fun compile_closure(v: I2CCompilerVisitor): String
	do
		var cv = v.visitor

		# We are now in a closure
		var cfc_old = v.closure
		v.closure = true

		# We are now in a escape boundary
		var lls_old = v.local_labels
		v.local_labels = new HashSet[ISeq]

		# We are now in a new C context
		var decl_writer_old = cv.decl_writer
		var writer_old = cv.writer
		cv.writer = cv.top_writer.sub
		cv.decl_writer = cv.header_writer.sub

		# Generate the C function
		var cname = "OC_{v.basecname}_{v.new_number}"
		var args = compile_signature_to_c(v.visitor, cname, null, "struct stack_frame_t *closctx", null)
		cv.decl_writer = cv.writer.sub

		var s = compile_inside_to_c(v, args)
		if s == null then
			v.add_instr("return;")
		else
			v.add_instr("return {s};")
		end
		v.unindent
		v.add_instr("\}")

		# Restore things
		cv.writer = writer_old
		cv.decl_writer = decl_writer_old
		v.closure = cfc_old
		v.local_labels = lls_old
		return "((fun_t){cname})"
	end
end
