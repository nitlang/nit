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
special ICodeVisitor
	var _pass: Int = 0

	redef fun visit_icode(ic)
	do
		if ic isa ICall then
			var m = ic.property
			if m.iroutine != null and ic.is_inlinable then
				var ir = m.iroutine.as(not null)
				var seq = new ISeq
				current_icode.insert_before(seq)
				var e = ir.inline_in_seq(seq, ic.exprs)
				var r = ic.result
				if r != null then
					assert e != null
					current_icode.insert_before(new IMove(r, e))
				end
				current_icode.delete
				visit_icode(seq)
			end
		end
		super
	end
end

redef class ICall
	fun is_inlinable: Bool
	do
		var m = property
		var mn = m.name
		var cn = m.local_class.name
		return (m.is_intern and cn != once ("Object".to_symbol)) or
			(cn == (once ("Array".to_symbol)) and (mn == (once ("length".to_symbol)) or mn == (once ("[]".to_symbol)))) or
			(cn == (once ("AbstractArrayRead".to_symbol)) and (mn == (once ("length".to_symbol)) or mn == (once ("[]".to_symbol))))
	end
end

redef class IRoutine
	fun inline_methods
	do
		var v = new InlineMethodVisitor
		v.visit_iroutine(self)
	end
end
