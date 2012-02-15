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

# Detect inlinable methods and inline them
package inline_methods

import icode

private class InlineMethodVisitor
	super ICodeVisitor
	var _pass: Int = 0
	var _icb: ICodeBuilder

	redef fun visit_icode(ic)
	do
		if ic isa ICall and not ic.is_explicit_from_extern then
			var m = ic.property
			var ir = m.iroutine
			if ir != null and ic.is_inlinable then
				var icb = _icb
				if icb.iroutine == ir then
					# We cannot inline ir
					# So, at least transform the call to a static one
					current_icode.delete
					var icall = new IStaticCall(ic.property, ic.exprs)
					icall.closure_defs = ic.closure_defs
					icall.result = ic.result
					current_icode.insert_before(icall)
					current_icode.delete
				else
					var seq = new ISeq
					var old_seq = icb.seq
					icb.seq = seq
					current_icode.insert_before(seq)
					var e = icb.inline_routine(ir, ic.exprs, ic.closure_defs)
					var r = ic.result
					if r != null then
						assert e != null
						current_icode.insert_before(new IMove(r, e))
					end
					current_icode.delete
					icb.seq = old_seq
					visit_icode(seq)
				end
			end
		end
		super
	end

	init(m: MMModule, r: IRoutine)
	do
		_icb = new ICodeBuilder(m, r)
	end
end

redef class ICall
	fun is_inlinable: Bool
	do
		var m = property
		var mn = m.name
		var cn = m.local_class.name
		return (m.is_intern and cn != once ("Object".to_symbol)) or
			(cn == (once ("Int".to_symbol)) and (mn == (once ("enumerate_to".to_symbol)) or mn == (once ("enumerate_before".to_symbol)))) or
			(cn == (once ("Array".to_symbol)) and (mn == (once ("length".to_symbol)) or mn == (once ("[]".to_symbol)) or mn == (once ("iterate".to_symbol)))) or
			(cn == (once ("AbstractArrayRead".to_symbol)) and (mn == (once ("length".to_symbol)) or mn == (once ("[]".to_symbol)))) or
			(m.global.intro.local_class.name == (once ("Inline__".to_symbol)))
	end
end

redef class IRoutine
	fun inline_methods(m: MMModule)
	do
		var v = new InlineMethodVisitor(m, self)
		v.visit_iroutine(self)
	end
end
