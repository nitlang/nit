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

# Tools to manipulate intermediace nit code representation
import icode_builder

# A simple visitor to visit icode structures
class ICodeVisitor
	# Called when a iregister is read in a icode
	fun visit_iregister_read(ic: ICode, r: IRegister) do end

	# Called when a iregister is wrote in a icode
	fun visit_iregister_write(ic: ICode, r: IRegister) do end

	# The current icode iterator.
	# Can be used to insert_before, used to change the item or deleted
	readable var _current_icode: nullable ListIterator[ICode] = null

	# Called when a icode is visited
	# Automatically visits iregisters and sub-icodes
	fun visit_icode(ic: nullable ICode)
	do
		if ic == null then return
		if ic isa ISeq then
			var old_icode = _current_icode
			var cur = ic.icodes.iterator
			while cur.is_ok do
				_current_icode = cur
				var ic2 = cur.item
				visit_icode(ic2)
				cur.next
			end
			_current_icode = old_icode
		else if ic isa IIf then
			visit_iregister_read(ic, ic.expr)
			visit_icode(ic.then_seq)
			visit_icode(ic.else_seq)
		else if ic isa IOnce then
			visit_icode(ic.body)
		else if ic isa ICode1 then
			visit_iregister_read(ic, ic.expr)
		else if ic isa ICode2 then
			visit_iregister_read(ic, ic.expr1)
			visit_iregister_read(ic, ic.expr2)
		else if ic isa ICodeN then
			for e in ic.exprs do
				visit_iregister_read(ic, e)
			end
			var closdefs = ic.closure_defs
			if ic isa IClosCall then
				visit_icode(ic.break_seq)
			end
			if closdefs != null then
				visit_closure_defs(closdefs)
			end
		end
		var r = ic.result
		if r != null then visit_iregister_write(ic, r)
	end

	# Called when closure definitions are visited
	# Automatically visits each closure definition
	fun visit_closure_defs(closdefs: Collection[nullable IClosureDef])
	do
		for e in closdefs do
			if e != null then
				visit_iroutine(e)
			end
		end
	end

	# Called when an iroutine is visited
	# Automatically visits the body
	# Warning: parameters of result registers are not visited
	fun visit_iroutine(ir: IRoutine)
	do
		visit_icode(ir.body)
	end
end

redef class ICodeBuilder
	# Inline an iroutine in the current icode sequence
	fun inline_routine(routine: IRoutine, args: Sequence[IRegister]): nullable IRegister
	do
		var d = new ICodeDupContext
		assert args.length == routine.params.length
		for i in [0..args.length[ do
			# FIXME The following assumes that params are readonly.
			# The alternative is safe but add one move :/
			d._registers[routine.params[i]] = args[i]
			#seq.icodes.add(new IMove(d.dup_ireg(routine.params[i]), args[i]))
		end
		seq.icodes.add(routine.body.dup_with(d))
		var r = routine.result
		if r != null then r = d.dup_ireg(r)
		return r
	end
end

# This class stores reference to allow correct duplication of icodes
private class ICodeDupContext
	# Duplicate one register
	# Subsequent invocation will return the same register
	fun dup_ireg(r: IRegister): IRegister
	do
		var rs = _registers
		if rs.has_key(r) then
			return rs[r]
		else
			var r2 = new IRegister(r.stype)
			rs[r] = r2
			return r2
		end
	end

	# Duplicate a bunch of registers
	# Subsequent invocation will return the same registers
	fun dup_iregs(regs: Sequence[IRegister]): Sequence[IRegister]
	do
		var a = new Array[IRegister].with_capacity(regs.length)
		for r in regs do
			a.add(dup_ireg(r))
		end
		return a
	end

	# The associoation between old_seq and new_seq
	# Directly used by the IEscape
	var _seqs: Map[ISeq, ISeq] = new HashMap[ISeq, ISeq]

	# The assocation between old_ireg and new_ireg
	# Used by dup_ireg
	var _registers: Map[IRegister, IRegister] = new HashMap[IRegister, IRegister]
end

redef class ICode
	# Duplicate the current icode (generic part)
	private fun dup_with(d: ICodeDupContext): ICode
	do
		var c = inner_dup_with(d)
		var r = result
		if r != null then c.result = d.dup_ireg(r)
		c.location = location
		return c
	end

	# Duplicate the current icode (specific part)
	private fun inner_dup_with(d: ICodeDupContext): ICode is abstract
end

redef class ISeq
	redef fun inner_dup_with(d)
	do
		var c2 = new ISeq
		dup_seq_to(d, c2)
		return c2
	end

	# Duplicate each icode and store them in dest
	# Note: dest must be empty and not modified afted duplication or IEscapes may be wrongly duplicated
	private fun dup_seq_to(d: ICodeDupContext, dest: ISeq)
	do
		d._seqs[self] = dest
		for c in icodes do
			dest.icodes.add(c.dup_with(d))
		end
	end
end

redef class ILoop
	redef fun inner_dup_with(d)
	do
		var c2 = new ILoop
		dup_seq_to(d, c2)
		return c2
	end
end

redef class IIf
	redef fun inner_dup_with(d)
	do
		var c2 = new IIf(d.dup_ireg(expr))
		then_seq.dup_seq_to(d, c2.then_seq)
		else_seq.dup_seq_to(d, c2.else_seq)
		return c2
	end
end

redef class IEscape
	redef fun inner_dup_with(d)
	do
		if d._seqs.has_key(seq) then
			# Jump to a duplicated sequence
			return new IEscape(d._seqs[seq])
		else
			# Jump to an englobing unduplicated sequence
			return new IEscape(seq)
		end
	end
end

redef class IAbort
	redef fun inner_dup_with(d)
	do
		return new IAbort(texts, module_location)
	end
end

redef class ICall
	redef fun inner_dup_with(d)
	do
		return new ICall(property, d.dup_iregs(exprs))
	end
end

redef class ISuper
	redef fun inner_dup_with(d)
	do
		return new ISuper(property, d.dup_iregs(exprs))
	end
end

redef class INew
	redef fun inner_dup_with(d)
	do
		return new INew(stype, property, d.dup_iregs(exprs))
	end
end

redef class IClosCall
	redef fun inner_dup_with(d)
	do
		var c2 = new IClosCall(closure_decl, d.dup_iregs(exprs))
		var bs = break_seq
		if bs != null then
			var bs2 = new ISeq
			c2.break_seq = bs2
			bs.dup_seq_to(d, bs2)
		end
		return c2
	end
end

redef class INative
	redef fun inner_dup_with(d)
	do
		var c2 = new INative(code, d.dup_iregs(exprs))
		c2.is_pure = is_pure
		return c2
	end
end

redef class IMove
	redef fun inner_dup_with(d)
	do
		return new IMove(d.dup_ireg(result.as(not null)), d.dup_ireg(expr))
	end
end

redef class IAttrRead
	redef fun inner_dup_with(d)
	do
		return new IAttrRead(property, d.dup_ireg(expr))
	end
end

redef class IAttrWrite
	redef fun inner_dup_with(d)
	do
		return new IAttrWrite(property, d.dup_ireg(expr1), d.dup_ireg(expr2))
	end
end

redef class IAttrIsset
	redef fun inner_dup_with(d)
	do
		return new IAttrIsset(property, d.dup_ireg(expr))
	end
end

redef class ITypeCheck
	redef fun inner_dup_with(d)
	do
		return new ITypeCheck(d.dup_ireg(expr), stype)
	end
end

redef class IIs
	redef fun inner_dup_with(d)
	do
		return new IIs(d.dup_ireg(expr1), d.dup_ireg(expr2))
	end
end

redef class INot
	redef fun inner_dup_with(d)
	do
		return new INot(d.dup_ireg(expr))
	end
end

redef class IOnce
	redef fun inner_dup_with(d)
	do
		var c2 = new IOnce
		body.dup_seq_to(d, c2.body)
		return c2
	end
end

redef class IHasClos
	redef fun inner_dup_with(d)
	do
		return new IHasClos(closure_decl)
	end
end
