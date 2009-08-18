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
					if not strs.has_key(i) then strs[i] = "closctx->variable[{i}]"
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
	readable var _closures: HashMap[IClosureDecl, Int] = new HashMap[IClosureDecl, Int]

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
			add_instr("closctx->has_broke = (val_t*){ind};")
			add_instr("goto {lab(return_label.as(not null))};")
		end
	end

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

	fun add_instr(s: String)
	do
		var l = _next_location
		if l != null then
			visitor.add_instr("/* ", l.file, ":", l.line_start.to_s, " */")
			_next_location = null
		end
		visitor.add_instr(s)
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
			for i in [0..closure_decls.length[ do
				var closcn = "CLOS_{cname}_{i}"
				var cs = closure_decls[i].closure.signature
				var subparams = new Array[String] # Parameters of the closure
				subparams.add("struct WBT_ *")
				for j in [0..cs.arity[ do
					subparams.add("val_t")
				end
				var rr = "void"
				if cs.return_type != null then rr = "val_t"
				v.add_decl("typedef {rr} (*{closcn})({subparams.join(", ")});")
				cargs.add("wd{i}")
				cparams.add("struct WBT_ *wd{i}")
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
		if human_name != null then v.add_decl("#define LOCATE_", cname, " \"", human_name, "\"")
		v.add_decl(r, " ", cname, "(", p, ");")
		v.add_decl("typedef ", r, " (*", cname, "_t)(", p, ");")
		v.add_instr(r, " ", cname, "(", p, ")\{")
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
		v.add_instr("fra.me.file = LOCATE_{v.visitor.module.name};")
		v.add_instr("fra.me.line = {ll};")
		v.add_instr("fra.me.meth = LOCATE_{v.basecname};")
		v.add_instr("fra.me.REG_size = {std_slots_nb};")

		# Declare/initialize local variables
		for i in [0..std_slots_nb[ do
			v.add_instr("fra.me.REG[{i}] = NIT_NULL;")
		end
		for i in [0..tag_slots_nb[ do
			v.add_decl("val_t REGB{i};")
		end
		var iclosdecls = closure_decls
		if iclosdecls != null then
			v.add_decl("struct WBT_ *CREG[{iclosdecls.length}];")
		else
			v.add_decl("struct WBT_ **CREG = NULL;")
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
				v.closures[iclosdecl] = i
				var cs = iclosdecl.closure.signature # Closure signature
				var subparams = new Array[String] # Parameters of the closure
				subparams.add("struct WBT_ *")
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
	# Including optimization and other stuff.
	# cv must be in the correct function
	fun compile_to_c(cv: CompilerVisitor, cname: String, args: Array[String]): nullable String
	do
		optimize(cv.module)
		var v = new I2CCompilerVisitor(cv, self, cname)
		return compile_inside_to_c(v, args)
	end
end

redef class ICode
	# Full compilation of the icode
	fun compile_to_c(v: I2CCompilerVisitor)
	do
		v.add_location(location)
		store_result(v, inner_compile_to_c(v))
	end

	# Is a result really needed
	private fun need_result: Bool
	do
		var r = result
		return r != null and r.slot_index != null
	end

	# Store s in the result value of self
	private fun store_result(v: I2CCompilerVisitor, s: nullable String)
	do
		var r = result
		if r != null and r.slot_index != null then
			assert s != null
			v.add_assignment(v.register(r), s)
		else if s != null and not is_pure then
			# ICode with side effects must be evaluated
			# even if the result is not wanted
			v.add_instr(s + ";")
		end
	end

	# Compilation of without the result assigment
	# Return the right value is case of expression
	# Return the full expression (witout ;) in case of statement
	private fun inner_compile_to_c(v: I2CCompilerVisitor): nullable String is abstract
end

redef class ISeq
	redef fun inner_compile_to_c(v)
	do
		v.local_labels.add(self)
		for ic in icodes do
			ic.compile_to_c(v)
		end
		v.add_label(self)
		return null
	end
end

redef class IIf
	redef fun inner_compile_to_c(v)
	do
		v.add_instr("if (UNTAG_Bool({v.register(expr)})) \{")
		if not then_seq.icodes.is_empty then
			v.indent
			then_seq.inner_compile_to_c(v)
			v.unindent
		end
		if not else_seq.icodes.is_empty then
			v.add_instr("} else \{")
			v.indent
			else_seq.inner_compile_to_c(v)
			v.unindent
		end
		v.add_instr("}")
		return null
	end
end

redef class ILoop
	redef fun inner_compile_to_c(v)
	do
		v.local_labels.add(self)
		v.add_instr("while(1) \{")
		v.indent
		for ic in icodes do
			ic.compile_to_c(v)
		end
		v.unindent
		v.add_instr("}")
		v.add_label(self)
		return null
	end
end

redef class IEscape
	redef fun inner_compile_to_c(v)
	do
		v.add_goto(seq)
		return null
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
		var closcns: nullable Array[String] = null
		if closdefs != null then
			v.escaped_labels = new HashMap[ISeq, Int]
			closcns = new Array[String]
			for cd in closdefs do
				if cd != null then
					var cn = cd.compile_closure(v)
					args.add(cn)
					closcns.add(cn)
				else
					args.add("NULL")
				end
			end
		end

		var s = compile_call_to_c(v, args)
		var r: nullable String = s

		# Intercept escapes
		if closcns != null then
			var els = v.escaped_labels
			v.escaped_labels = old_el
			# Is there possible escapes?
			if not els.is_empty then
				# Call in a tmp variable to avoid 'break' overwrite
				if need_result then
					r = "tmp"
					v.add_assignment(r, s)
				else
					r = null
					v.add_instr(s + ";")
				end
				# What is the escape index (if any?)
				# It's computed as the union of has_broke
				var switcha = new Array[String]
				for cn in closcns do
					switcha.add("((int)({cn}->has_broke))")
				end
				var switch = switcha.join(" | ")
				# What are the expected escape indexes
				v.add_instr("switch ({switch}) \{")
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
						v.add_instr("case {iels.item}: goto {v.lab(seq)};")
					else
						# Forward escape occured: register the escape label
						assert v.closure
						v.register_escape_label(seq)
						forward_escape = true
					end
					iels.next
				end
				# Forward escape occured, just pass to the next one
				if forward_escape then
					v.add_instr("default: closctx->has_broke = (val_t*)({switch}); goto {v.lab(v.return_label.as(not null))};")
				end
				v.unindent
				v.add_instr("\}")
			end
		end

		store_result(v, r)
	end

	redef fun inner_compile_to_c(v) do abort

	# The single invocation witout fancy stuffs
	private fun compile_call_to_c(v: I2CCompilerVisitor, args: Array[String]): String is abstract
end

redef class ICall
	redef fun compile_call_to_c(v, args)
	do
		var prop = property
		if prop.global.is_init then args.add("init_table")
		if prop.name == (once ("add".to_symbol)) and prop.local_class.name == (once ("Array".to_symbol)) then
			return "{prop.cname}({args.join(", ")})"
		else
			return "{prop.global.meth_call}({args[0]})({args.join(", ")})"
		end
	end
end

redef class ISuper
	redef fun compile_call_to_c(v, args)
	do
		var prop = property
		if prop.global.is_init then args.add("init_table")
		return "{prop.super_meth_call}({args[0]})({args.join(", ")})"
	end
end

redef class INew
	redef fun compile_call_to_c(v, args)
	do
		return "NEW_{stype.local_class}_{property.global.intro.cname}({args.join(", ")})"
	end
end

redef class INative
	redef fun inner_compile_to_c(v)
	do
		if exprs.is_empty then
			return code
		else
			var res = new Buffer
			var i = 0
			var c = code.split_with("@@@")
			for s in c do
				res.append(s)
				if i < exprs.length and i < c.length-1 then
					res.append(v.register(exprs[i]))
				end
				i += 1
			end
			return res.to_s
		end
	end
end

redef class IAbort
	redef fun inner_compile_to_c(v)
	do
		var s = new Buffer.from("fprintf(stderr")
		for t in texts do
			s.append(", \"{t}\"")
		end
		s.append(");")
		v.add_instr(s.to_s)

		var ll = location
		s = new Buffer.from("fprintf(stderr, \" (%s")
		if ll != null then
			s.append(":%d")
		end
		s.append(")\\n\", LOCATE_{module_location.name}")
		if ll != null then
			s.append(", {ll.line_start}")
		end
		s.append(");")
		v.add_instr(s.to_s)

		v.add_instr("nit_exit(1);")
		return null
	end
end

redef class IMove
	redef fun inner_compile_to_c(v)
	do
		return v.register(expr)
	end
end

redef class IAttrRead
	redef fun inner_compile_to_c(v)
	do
		return "{property.global.attr_access}({v.register(expr)})"
	end
end

redef class IAttrIsset
	redef fun inner_compile_to_c(v)
	do
		return "TAG_Bool({property.global.attr_access}({v.register(expr)})!=NIT_NULL)"
	end
end

redef class IAttrWrite
	redef fun inner_compile_to_c(v)
	do
		v.add_instr("{property.global.attr_access}({v.register(expr1)}) = {v.register(expr2)};")
		return null
	end
end

redef class ITypeCheck
	redef fun inner_compile_to_c(v)
	do
		# FIXME handle formaltypes
		var g = stype.local_class.global
		var recv = v.register(expr)
		var s = ""
		if expr.stype.is_nullable then
			if stype.is_nullable then
				s = "({recv}==NIT_NULL) || "
			else if stype.as_nullable == expr.stype then
				return "TAG_Bool({recv}!=NIT_NULL)"
			else
				s = "({recv}!=NIT_NULL) && "
			end
		end
		return "TAG_Bool({s}VAL_ISA({recv}, {g.color_id}, {g.id_id})) /*cast {stype}*/"
	end
end

redef class IIs
	redef fun inner_compile_to_c(v)
	do
		var t1 = expr1.stype
		var t2 = expr2.stype
		if t1 isa MMTypeNone then
			if t2 isa MMTypeNone then
				return "TAG_Bool(1)"
			else if t2.is_nullable then
				return "TAG_Bool({v.register(expr2)}==NIT_NULL)"
			else
				return "TAG_Bool(0)"
			end
		else if t1.is_nullable then
			if t2 isa MMTypeNone then
				return "TAG_Bool({v.register(expr1)}==NIT_NULL)"
			else if t2.is_nullable then
				return "TAG_Bool(IS_EQUAL_NN({v.register(expr1)},{v.register(expr2)}))"
			else
				return "TAG_Bool(IS_EQUAL_ON({v.register(expr2)},{v.register(expr1)}))"
			end
		else
			if t2 isa MMTypeNone then
				return "TAG_Bool(0)"
			else if t2.is_nullable then
				return "TAG_Bool(IS_EQUAL_ON({v.register(expr1)},{v.register(expr2)}))"
			else
				return "TAG_Bool(IS_EQUAL_OO({v.register(expr1)},{v.register(expr2)}))"
			end
		end
	end
end

redef class INot
	redef fun inner_compile_to_c(v)
	do
		return "TAG_Bool(!UNTAG_Bool({v.register(expr)}))"
	end
end

redef class IOnce
	redef fun inner_compile_to_c(v)
	do
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
		var e = v.register(result.as(not null))
		v.add_instr("once_value_{i} = {e};")
		v.add_instr("register_static_object(&once_value_{i});")
		if res.stype.is_nullable then v.add_instr("once_bool_{i} = true;")
		v.unindent
		v.add_instr("} else {e} = once_value_{i};")
		return e
	end
end

redef class IClosCall
	redef fun compile_to_c(v: I2CCompilerVisitor)
	do
		v.add_location(location)
		var ivar: String
		if v.closure then
			ivar = "closctx->closurevariable[{v.closures[closure_decl]}]"
		else
			ivar = "CREG[{v.closures[closure_decl]}]"
		end
		var args = [ivar]
		args.append(v.registers(exprs))

		var s = "(({v.clostypes[closure_decl]})({ivar}->fun))({args.join(", ")})"
		store_result(v, s)

		v.add_instr("if ({ivar}->has_broke) \{")
		v.indent
		var bs = break_seq
		if bs != null then
			bs.compile_to_c(v)
		end
		v.add_goto(v.iroutine.body)
		v.unindent
		v.add_instr("\}")
	end

	redef fun inner_compile_to_c(v) do abort
end

redef class IHasClos
	redef fun inner_compile_to_c(v)
	do
		var ivar: String
		if v.closure then
			ivar = "closctx->closurevariable[{v.closures[closure_decl]}]"
		else
			ivar = "CREG[{v.closures[closure_decl]}]"
		end
		return "TAG_Bool({ivar} != NULL)"
	end
end


redef class IClosureDef
	fun compile_closure(v: I2CCompilerVisitor): String
	do
		var cfc_old = v.closure
		v.closure = true
		var lls_old = v.local_labels
		v.local_labels = new HashSet[ISeq]

		var cv = v.visitor
		var ctx_old = cv.ctx
		cv.ctx = new CContext
		cv.out_contexts.add(cv.ctx)

		var cname = "OC_{v.basecname}_{v.new_number}"
		var args = compile_signature_to_c(v.visitor, cname, null, "struct WBT_ *closctx", null)
		var ctx_old2 = cv.ctx
		cv.ctx = new CContext

		var s = compile_inside_to_c(v, args)
		if s == null then
			v.add_instr("return;")
		else
			v.add_instr("return {s};")
		end

		ctx_old2.append(cv.ctx)
		cv.ctx = ctx_old2
		v.unindent
		v.add_instr("}")
		cv.ctx = ctx_old

		v.closure = cfc_old

		# Build closure
		var closcnv = "wbclos{v.new_number}"
		v.add_decl("struct WBT_ {closcnv};")
		v.add_instr("{closcnv}.fun = (fun_t){cname};")
		v.add_instr("{closcnv}.has_broke = NULL;")
		if cfc_old then
			v.add_instr("{closcnv}.variable = closctx->variable;")
			v.add_instr("{closcnv}.closurevariable = closctx->closurevariable;")
		else
			v.add_instr("{closcnv}.variable = fra.me.REG;")
			v.add_instr("{closcnv}.closurevariable = CREG;")
		end

		v.local_labels = lls_old
		return "(&{closcnv})"
	end
end
