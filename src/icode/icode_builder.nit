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

# Help generation of icode
package icode_builder

import icode_base

# Helps to generate icodes in a iroutine
class ICodeBuilder
	# Add a new statment in the current icode sequence
	# Can be used with expression if the result is ignored of if the result is already set
	fun stmt(s: ICode)
	do
		s.location = _current_location
		_seq.icodes.add(s)
	end

	# Add a new expression in the current icode sequence and return a new associated result register
	fun expr(e: ICode, s: MMType): IRegister
	do
		stmt(e)
		assert e.result == null
		var reg = new_register(s)
		e.result = reg
		return reg
	end

	# Add an assignement (IMove) in the current icode sequence
	fun add_assignment(reg: IRegister, v: IRegister)
	do
		stmt(new IMove(reg, v))
	end

	# Check that the reciever e is not null (IIs + IAbort)
	fun add_null_reciever_check(e: IRegister)
	do
		var nul = lit_null_reg
		var c = expr(new IIs(e, nul), mmmodule.type_bool)
		var iif = new IIf(c)
		stmt(iif)
		var old_seq = seq
		seq = iif.then_seq
		add_abort("Reciever is null")
		seq = old_seq
	end

	# Add a type cast (ITypeCheck + IAbort) in the current icode sequence
	fun add_type_cast(e: IRegister, stype: MMType)
	do
		var c = expr(new ITypeCheck(iroutine.params.first, e, stype), mmmodule.type_bool)
		var iif = new IIf(c)
		stmt(iif)
		var old_seq = seq
		seq = iif.else_seq
		add_abort("Cast failed")
		seq = old_seq
	end

	# Add an attr check (IAttrIsset + IAbort) in the current icode sequence
	fun add_attr_check(prop: MMAttribute, e: IRegister)
	do
		if not prop.signature.return_type.is_nullable then
			var cond = expr(new IAttrIsset(prop, e), mmmodule.type_bool)
			var iif = new IIf(cond)
			stmt(iif)
			var seq_old = seq
			seq = iif.else_seq
			add_abort("Uninitialized attribute %s", prop.name.to_s)
			seq = seq_old
		end
	end

	# Add an IAttrRead guarded by an add_attr_check in the current icode sequence
	fun add_attr_read(prop: MMAttribute, e: IRegister): IRegister
	do
		add_attr_check(prop, e)
		return expr(new IAttrRead(prop, e), prop.signature.return_type.as(not null))
	end

	# Add a localized IAbort
	fun add_abort(s: String...)
	do
		stmt(new IAbort(s, mmmodule))
	end

	# Add an assigment to the iroutine return value
	# Beware, no jump is generated
	fun add_return_value(reg: IRegister)
	do
		add_assignment(iroutine.result.as(not null), reg)
	end

	# Add an ICall with possible simple inlining in the current icode sequence
	fun add_call(prop: MMMethod, args: Array[IRegister], closcns: nullable Array[nullable IClosureDef]): nullable IRegister
	do
		var ee = once "==".to_symbol

		# Inline "x!=y" as "not x==y"
		var ne = once "!=".to_symbol
		if prop.name == ne then
			var eqp = prop.signature.recv.local_class.select_method(ee)
			var eqcall = add_call(eqp, args, closcns).as(not null)
			return expr(new INot(eqcall), mmmodule.type_bool)
		end

		# TODO: Inline x==y as "x is y or (x != null and (== is not the Object one) and x.==(y))"
		# inline "x==y" as "x is y or x != null and x.==(y)"
		var icall = new ICall(prop, args)
		icall.closure_defs = closcns
		if prop.name == ee then
			# Prepare the result
			var reg = new_register(mmmodule.type_bool)
			# "x is y"
			var cond = expr(new IIs(args[0], args[1]), mmmodule.type_bool)
			var iif = new IIf(cond)
			stmt(iif)
			var seq_old = seq
			seq = iif.then_seq
			add_assignment(reg, cond)
			# "or"
			seq = iif.else_seq
			# Do the "x != null" part iff x is nullable
			if args[0].stype.is_nullable then
				var nul = lit_null_reg
				cond = expr(new IIs(args[0], nul), mmmodule.type_bool)
				iif = new IIf(cond)
				stmt(iif)
				seq = iif.then_seq
				add_assignment(reg, lit_false_reg)
				seq = iif.else_seq
			end
			# "x.==(y)"
			add_assignment(reg, expr(icall, mmmodule.type_bool))
			seq = seq_old
			return reg
		end

		if args.first.stype.is_nullable then add_null_reciever_check(args.first)
		var rtype = prop.signature.return_type
		if rtype != null then
			return expr(icall, rtype)
		else
			stmt(icall)
			return null
		end
	end

	# Add an escape to a given sequence
	# Create a new IEscapeMark if required
	fun add_escape(seq: ISeq)
	do
		var mark = seq.iescape_mark
		if mark == null then
			mark = new IEscapeMark
			iroutine.escape_marks.add(mark)
			seq.iescape_mark = mark
		end
		stmt(new IEscape(mark))
	end

	# Return a literal "null" value
	fun lit_null_reg: IRegister
	do
		return new_register(mmmodule.type_none)
	end

	# Return a literal "true" value
	fun lit_true_reg: IRegister
	do
		var e = new IBoolValue(true)
		return expr(e, mmmodule.type_bool)
	end

	# Return a literal "false" value
	fun lit_false_reg: IRegister
	do
		var e = new IBoolValue(false)
		return expr(e, mmmodule.type_bool)
	end

	# Get a new register
	fun new_register(s: MMType): IRegister
	do
		var r = new IRegister(s)
		iroutine.registers.add(r)
		return r
	end

	# The module where classes and types are extracted
	readable var _mmmodule: MMModule

	# The current iroutine build
	readable var _iroutine: IRoutine

	# The current sequence of icodes
	readable writable var _seq: ISeq

	init(mod: MMModule, r: IRoutine)
	do
		_mmmodule = mod
		_current_location = r.location
		_iroutine = r
		_seq = r.body
	end

	# New ICodes are set to this location
	readable writable var _current_location: nullable Location = null
end

redef class MMSignature
	# Create an empty IRoutine that match the signature
	fun generate_empty_iroutine: IRoutine
	do
		var args = new Array[IRegister]
		args.add(new IRegister(recv)) # Self
		for i in [0..arity[ do
			args.add(new IRegister(self[i]))
		end
		var res: nullable IRegister = null
		var rtype = return_type
		if rtype != null then
			res = new IRegister(rtype)
		end
		var iroutine = new IRoutine(args, res)
		var clos: nullable Array[IClosureDecl] = null
		if not closures.is_empty then
			clos = new Array[IClosureDecl]
			for c in closures do
				clos.add(new IClosureDecl(c))
			end
			iroutine.closure_decls = clos
		end
		# Add automatic test for virtual types
		var icb = new ICodeBuilder(recv.mmmodule, iroutine)
		for i in [0..arity[ do
			var t = self[i]
			if t isa MMVirtualType then
				icb.add_type_cast(args[i+1], t)
			end
		end
		return iroutine
	end

	# Create an empty IClosureDef that match the signature
	fun generate_empty_iclosuredef(icb: ICodeBuilder): IClosureDef
	do
		var args = new Array[IRegister]
		for i in [0..arity[ do
			args.add(icb.new_register(self[i]))
		end
		var res: nullable IRegister = null
		var rtype = return_type
		if rtype != null then
			res = icb.new_register(rtype)
		end
		var iroutine = new IClosureDef(args, res)
		var clos: nullable Array[IClosureDecl] = null
		if not closures.is_empty then
			clos = new Array[IClosureDecl]
			for c in closures do
				clos.add(new IClosureDecl(c))
			end
			iroutine.closure_decls = clos
		end
		# TODO: add automatic test for virtual types?
		return iroutine
	end
end

