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
module icode_tools
import icode_builder

# A simple visitor to visit icode structures
abstract class ICodeVisitor
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
	# Require that routine != self.iroutine
	fun inline_routine(routine: IRoutine, args: Sequence[IRegister], closdefs: nullable Sequence[nullable IClosureDef]): nullable IRegister
	do
		assert routine != self.iroutine
		var d = new ICodeDupContext(self)
		assert args.length == routine.params.length
		var closdecls = routine.closure_decls
		var cdefsa = if closdefs != null then closdefs.length else 0
		var cdeclsa = if closdecls != null then closdecls.length else 0
		assert cdefsa <= cdeclsa

		# Fill register duplicate association
		var dico = d._registers
		var res = routine.result
		if res != null then
			var res2 = new_register(res.stype)
			dico[res] = res2
			res = res2
		end
		for reg in routine.registers do
			assert not dico.has_key(reg)
			dico[reg] = new_register(reg.stype)
		end
		for i in [0..args.length[ do
			# FIXME The following assumes that params are readonly.
			# The alternative is safe but add one move :/
			dico[routine.params[i]] = args[i]
			#seq.icodes.add(new IMove(dico[routine.params[i]]), args[i]))
		end

		# Fill escape mark association
		for m in routine.escape_marks do
			var m2 = new IEscapeMark
			iroutine.escape_marks.add(m2)
			d._marks[m] = m2
		end

		# Fill closure association
		if closdecls != null then
			var cdico = d._closures
			for i in [0..cdefsa[ do
				cdico[closdecls[i]] = closdefs[i]
			end
			for i in [cdefsa..cdeclsa[ do
				cdico[closdecls[i]] = null
			end
		end

		# Process inlining
		routine.body.dup_with(d)
		return res
	end
end

# This class stores reference to allow correct duplication of icodes
private class ICodeDupContext
	# Return the correct register
	# * a duplicate of the local register 'r' of the inlined iroutine
	# * 'r' else (it is a register of the caller iroutine)
	fun dup_ireg(r: IRegister): IRegister
	do
		var rs = _registers
		if rs.has_key(r) then
			return rs[r]
		else
			return r
		end
	end

	# Return a correct bunch of registers
	fun dup_iregs(regs: Sequence[IRegister]): Array[IRegister]
	do
		var a = new Array[IRegister].with_capacity(regs.length)
		for r in regs do
			a.add(dup_ireg(r))
		end
		return a
	end

	# The assocation between old_ireg and new_ireg
	# Used by dup_ireg
	var _registers: Map[IRegister, IRegister] = new HashMap[IRegister, IRegister]

	# Return the correct escape mark
	# * a duplicate of the local escape mark 'm' of the inlined iroutine
	# * 'r' else (it is a escape mark of the caller iroutine)
	fun dup_mark(m: IEscapeMark): IEscapeMark
	do
		var ms = _marks
		if ms.has_key(m) then
			return ms[m]
		else
			return m
		end
	end

	# The associoation between old_seq and new_seq
	# Used by dup_mark
	var _marks: Map[IEscapeMark, IEscapeMark] = new HashMap[IEscapeMark, IEscapeMark]

	# The association between a closure_decl and its closure_def (if any)
	var _closures: Map[IClosureDecl, nullable IClosureDef] = new ArrayMap[IClosureDecl, nullable IClosureDef]

	# The current code builder
	var _icb: ICodeBuilder

	init(icb: ICodeBuilder)
	do
		_icb = icb
	end
end

redef class ICode
	# Duplicate the current icode in the icode builder of the ICodeDupContext
	private fun dup_with(d: ICodeDupContext)
	do
		var c = inner_dup_with(d)
		if self isa ICodeN then
			assert c isa ICodeN
			var cdecl = closure_defs
			if cdecl != null then
				# Duplicate the colsure definitions
				var cdecl2 = new Array[nullable IClosureDef].with_capacity(cdecl.length)
				for cd in cdecl do
					if cd == null then
						cdecl2.add(null)
					else
						var r = cd.result
						if r != null then r = d.dup_ireg(r)
						var cd2 = new IClosureDef(d.dup_iregs(cd.params), r)
						cdecl2.add(cd2)
						cd.body.dup_seq_to(d, cd2.body)
					end
				end
				c.closure_defs = cdecl2
			end
		end
		var r = result
		if r != null then c.result = d.dup_ireg(r)
		c.location = location
		d._icb.seq.icodes.add(c)
	end

	# Simle partial duplication of the current icode
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
		var old_seq = d._icb.seq
		d._icb.seq = dest
		for c in icodes do
			c.dup_with(d)
		end
		d._icb.seq = old_seq
		assert dest.iescape_mark == null
		var mark = iescape_mark
		if mark != null then
			dest.iescape_mark = d.dup_mark(mark)
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
		# Get the associated mark (duplicated of not)
		var mark = d.dup_mark(iescape_mark)
		# Jump to the mark
		return new IEscape(mark)
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

redef class IAllocateInstance
	redef fun inner_dup_with(d)
	do
		return new IAllocateInstance(stype)
	end
end

redef class IStaticCall
	redef fun inner_dup_with(d)
	do
		return new IStaticCall(property, d.dup_iregs(exprs))
	end
end

redef class ICheckInstance
	redef fun inner_dup_with(d)
	do
		return new ICheckInstance(stype, d.dup_ireg(expr))
	end
end

redef class IInitAttributes
	redef fun inner_dup_with(d)
	do
		return new IInitAttributes(stype, d.dup_ireg(expr))
	end
end

redef class IClosCall
	redef fun dup_with(d)
	do
		if d._closures.has_key(closure_decl) then
			# The icloscall need to be replaced with an inlined closdef
			var closdef = d._closures[closure_decl]
			if closdef == null then
				# Default is already guarded and inlined
				return
			end
			# Break sequence cannot be inlined :/
			assert break_seq == null
			# Inline the closdef
			var res = d._icb.inline_routine(closdef, d.dup_iregs(exprs), null)
			if result != null then
				assert res != null
				d._icb.stmt(new IMove(d.dup_ireg(result.as(not null)), res))
			end
		else
			# Standard icloscall duplication
			super
		end
	end

	redef fun inner_dup_with(d)
	do
		return new IClosCall(closure_decl, exprs)
	end
end

redef class INative
	redef fun inner_dup_with(d)
	do
		var c2 = new INative(method, d.dup_iregs(exprs))
		c2.is_pure = is_pure
		return c2
	end
end

redef class IIntValue
	redef fun inner_dup_with(d)
	do
		return new IIntValue(value)
	end
end

redef class IBoolValue
	redef fun inner_dup_with(d)
	do
		return new IBoolValue(value)
	end
end

redef class IStringValue
	redef fun inner_dup_with(d)
	do
		return new IStringValue(value)
	end
end

redef class IFloatValue
	redef fun inner_dup_with(d)
	do
		return new IFloatValue(value)
	end
end

redef class ICharValue
	redef fun inner_dup_with(d)
	do
		return new ICharValue(value)
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
		return new ITypeCheck(d.dup_ireg(expr1), d.dup_ireg(expr2), stype)
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
		if d._closures.has_key(closure_decl) then
			# closdef will be inlined
			var closdef = d._closures[closure_decl]
			var res: IRegister
			if closdef != null then
				res = d._icb.lit_true_reg
			else
				res = d._icb.lit_false_reg
			end
			return new IMove(d.dup_ireg(result.as(not null)), res)
		else
			return new IHasClos(closure_decl)
		end
	end
end
