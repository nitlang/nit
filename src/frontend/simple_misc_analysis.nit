# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2012 Jean Privat <jean@pryen.org>
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

# Simple vavious processing on a AST
# The analysis warns on :
#  * superfluous parentheses
#  * nested "once" expressions
#  * use of "while true" instead of "loop"
module simple_misc_analysis

import phase

redef class ToolContext
	# Execute `AModule::do_simple_misc_analysis` on each module.
	var simple_misc_analysis_phase: Phase = new SimpleMiscAnalysisPhase(self, null)
end

private class SimpleMiscAnalysisPhase
	super Phase
	redef fun process_nmodule(nmodule) do nmodule.do_simple_misc_analysis(toolcontext)
end

redef class AModule
	# Visit the module to detect easy warnings that does not need the metamodel or the importation
	# Warnings are displayed on the toolcontext
	fun do_simple_misc_analysis(toolcontext: ToolContext)
	do
		var v = new SimpleMiscVisitor(toolcontext)
		v.enter_visit(self)

		var t = location.file.first_token
		while t != null do
			t.accept_simple_misc_token(v)
			t = t.next_token
		end
	end
end

private class SimpleMiscVisitor
	super Visitor
	redef fun visit(n)
	do
		n.accept_simple_misc(self)
	end

	# Number of nested once
	var once_count: Int = 0

	var toolcontext: ToolContext

	fun warning(node: ANode, tag, msg: String)
	do
		toolcontext.warning(node.hot_location, tag, msg)
	end

	# Issue a warning if `sub` is a standalone `do` block.
	fun check_do_expr(sub: nullable AExpr)
	do
		if sub isa ADoExpr then
			warning(sub, "useless-do", "Warning: superfluous `do` block.")
		end
	end
end


###############################################################################

redef class ANode
	private fun accept_simple_misc(v: SimpleMiscVisitor)
	do
		visit_all(v)
		after_simple_misc(v)
	end
	private fun after_simple_misc(v: SimpleMiscVisitor) do end
end

redef class Token
	private fun accept_simple_misc_token(v: SimpleMiscVisitor)
	do
	end
end

redef class ASignature
	redef fun after_simple_misc(v)
	do
		if self.n_opar != null and self.n_params.is_empty then
			v.warning(self, "parentheses", "Warning: superfluous parentheses.")
		end
	end
end

redef class AExpr
	# Warn in case of superfluous parentheses
	private fun warn_parentheses(v: SimpleMiscVisitor) do end
end

redef class AParExpr
	redef fun warn_parentheses(v)
	do
		v.warning(self, "parentheses", "Warning: superfluous parentheses.")
	end
end

redef class AParExprs
	redef fun after_simple_misc(v)
	do
		if n_exprs.is_empty then
			v.warning(self, "parentheses", "Warning: superfluous parentheses.")
		end
	end
end

redef class AReturnExpr
	redef fun after_simple_misc(v)
	do
		var e = n_expr
		if e != null then
			e.warn_parentheses(v)
		end
	end
end

redef class AEscapeExpr
	redef fun after_simple_misc(v)
	do
		var e = n_expr
		if e != null then
			e.warn_parentheses(v)
		end
	end
end

redef class AWhileExpr
	redef fun after_simple_misc(v)
	do
		if n_expr isa ATrueExpr then
			v.warning(self, "loop", "Warning: use `loop` instead of `while true do`.")
		else
			n_expr.warn_parentheses(v)
		end
		v.check_do_expr(n_block)
	end
end

redef class ADoExpr
	redef fun after_simple_misc(v)
	do
		v.check_do_expr(n_block)
	end
end

redef class ALoopExpr
	redef fun after_simple_misc(v)
	do
		v.check_do_expr(n_block)
	end
end

redef class AForExpr
	redef fun after_simple_misc(v)
	do
		v.check_do_expr(n_block)
	end
end

redef class AForGroup
	redef fun after_simple_misc(v)
	do
		n_expr.warn_parentheses(v)
	end
end

redef class AWithExpr
	redef fun after_simple_misc(v)
	do
		v.check_do_expr(n_block)
	end
end

redef class AIfExpr
	redef fun after_simple_misc(v)
	do
		n_expr.warn_parentheses(v)
	end
end

redef class AIfexprExpr
	redef fun after_simple_misc(v)
	do
		n_expr.warn_parentheses(v)
	end
end

redef class AOnceExpr
	redef fun accept_simple_misc(v)
	do
		if v.once_count > 0 then
			v.warning(self, "nested-once", "Warning: useless once in a once expression.")
		end
		v.once_count = v.once_count + 1

		super

		v.once_count = v.once_count - 1
	end
end

redef class TSemi
	redef fun accept_simple_misc_token(v)
	do
		var n = next_token
		var p = prev_token
		if
			n == null or
			n isa TEol or
			n isa EOF or
			n isa TComment or
			p == null or
			p isa TEol or
			p isa EOF or
			p isa TComment or
			p isa TSemi
		then
			v.warning(self, "semi", "Warning: superfluous `;`.")
			return
		end
	end
end
