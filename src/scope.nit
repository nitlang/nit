# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Identification and scping of local variables and labels.
module scope

import parser
import toolcontext
import phase

import modelbuilder #FIXME useless

redef class ToolContext
	var scope_phase: Phase = new ScopePhase(self, null)
end

private class ScopePhase
	super Phase
	redef fun process_npropdef(npropdef) do npropdef.do_scope(toolcontext)
end


# A local variable (including parameters, automatic variables and self)
class Variable
	# The name of the variable (as used in the program)
	var name: String

	# Alias of `name'
	redef fun to_s do return self.name
end

# A local variable associated to a closure definition
class ClosureVariable
	super Variable
end

# Mark where break and continue will branch.
# Marks are either associated with a label of with a for_loop structure
class EscapeMark
	# The name of the label (unless the mark is an anonymous loop mark)
	var name: nullable String

	# Is the mark atached to a loop (loop, while, for, closure)
	# Such a mark is a candidate to a labelless 'continue' or 'break'
	var for_loop: Bool

	# Each 'continue' attached to the mark
	var continues: Array[AContinueExpr] = new Array[AContinueExpr]

	# Each 'break' attached to the mark
	var breaks: Array[ABreakExpr] = new Array[ABreakExpr]
end

# Visit a npropdef and:
#  * Identify variables, closures and labels
#  * Associate each break and continue to its escapemark
#  * Transform ACallFormExpr that access a variable into AVarFormExpr
#  * Transform ACallFormExpr that call a closure into AClosureCallExpr
# FIXME: Should the class be private?
private class ScopeVisitor
	super Visitor

	# The tool context used to display errors
	var toolcontext: ToolContext

	var selfvariable: Variable = new Variable("self")

	init(toolcontext: ToolContext)
	do
		self.toolcontext = toolcontext
		scopes.add(new Scope)
	end

	# All stacked scope. `scopes.first' is the current scope
	private var scopes: List[Scope] = new List[Scope]

	# Regiter a local variable.
	# Display an error on toolcontext if a variable with the same name is masked.
	fun register_variable(node: ANode, variable: Variable): Bool
	do
		var name = variable.name
		var found = search_variable(name)
		if found != null then
			self.error(node, "Error: A variable named `{name}' already exists")
			return false
		end
		scopes.first.variables[name] = variable
		return true
	end

	# Look for a variable named `name'.
	# Return null if no such a variable is found.
	fun search_variable(name: String): nullable Variable
	do
		for scope in scopes do
			var res = scope.get_variable(name)
			if res != null then
				return res
			end
		end
		return null
	end

	redef fun visit(n)
	do
		n.accept_scope_visitor(self)
	end

	# Enter in a statement block `node' as inside a new scope.
	# The block can be optionally attached to an `escapemark'.
	private fun enter_visit_block(node: nullable AExpr, escapemark: nullable EscapeMark)
	do
		if node == null then return
		var scope = new Scope
		scope.escapemark = escapemark
		scopes.unshift(scope)
		enter_visit(node)
		scopes.shift
	end

	# Look for a label `name'.
	# Return nulll if no such a label is found.
	private fun search_label(name: String): nullable EscapeMark
	do
		for scope in scopes do
			var res = scope.escapemark
			if res != null and res.name == name then
				return res
			end
		end
		return null
	end

	# Create a new escape mark (possibly with a label)
	# Display an error on toolcontext if a label with the same name is masked.
	private fun make_escape_mark(nlabel: nullable ALabel, for_loop: Bool): EscapeMark
	do
		assert named_or_for_loop: nlabel != null or for_loop
		var name: nullable String
		if nlabel != null then
			name = nlabel.n_id.text
			var found = self.search_label(name)
			if found != null then
				self.error(nlabel, "Syntax error: label {name} already defined.")
			end
		else
			name = null
		end
		var res = new EscapeMark(name, for_loop)
		return res
	end

	# Look for an escape mark optionally associated with a label.
	# If a label is given, the the escapemark of this label is returned.
	# If there is no label, the nearest escapemark that is `for loop' ir returned.
	# If there is no valid escapemark, then an error is displayed ans null is returned.
	# Return nulll if no such a label is found.
	private fun get_escapemark(node: ANode, nlabel: nullable ALabel): nullable EscapeMark
	do
		if nlabel != null then
			var name = nlabel.n_id.text
			var res = search_label(name)
			if res == null then
				self.error(nlabel, "Syntax error: invalid label {name}.")
				return null
			end
			return res
		else
			for scope in scopes do
				var res = scope.escapemark
				if res != null and res.for_loop then
					return res
				end
			end
			self.error(node, "Syntax Error: 'break' statment outside block.")
			return null
		end
	end

	# Display an error
	private fun error(node: ANode, message: String)
	do
		self.toolcontext.error(node.hot_location, message)
	end
end

private class Scope
	var variables: HashMap[String, Variable] = new HashMap[String, Variable]

	var escapemark: nullable EscapeMark = null

	fun get_variable(name: String): nullable Variable
	do
		if self.variables.has_key(name) then
			return self.variables[name]
		else
			return null
		end
	end
end

redef class ANode
	private fun accept_scope_visitor(v: ScopeVisitor)
	do
		visit_all(v)
	end
end

redef class APropdef
	# Entry point of the scope analysis
	fun do_scope(toolcontext: ToolContext)
	do
		var v = new ScopeVisitor(toolcontext)
		v.enter_visit(self)
	end
end

redef class AParam
	# The variable associated with the parameter
	var variable: nullable Variable
	redef fun accept_scope_visitor(v)
	do
		super
		var nid = self.n_id
		var variable = new Variable(nid.text)
		v.register_variable(nid, variable)
		self.variable = variable
	end
end

redef class AClosureDecl
	# The variable associated with the closure declaration
	var variable: nullable ClosureVariable
	redef fun accept_scope_visitor(v)
	do
		var nid = self.n_id
		var variable = new ClosureVariable(nid.text)
		v.register_variable(nid, variable)
		self.variable = variable
	end
end

redef class AVardeclExpr
	# The variable associated with the variable declaration
	var variable: nullable Variable
	redef fun accept_scope_visitor(v)
	do
		super
		var nid = self.n_id
		var variable = new Variable(nid.text)
		v.register_variable(nid, variable)
		self.variable = variable
	end
end

redef class ASelfExpr
	# The variable associated with the self reciever
	var variable: nullable Variable
	redef fun accept_scope_visitor(v)
	do
		super
		self.variable = v.selfvariable
	end
end

redef class AContinueExpr
	# The escape mark associated with the continue
	var escapemark: nullable EscapeMark
	redef fun accept_scope_visitor(v)
	do
		super
		var escapemark = v.get_escapemark(self, self.n_label)
		if escapemark == null then return # Skip error
		if not escapemark.for_loop then
			v.error(self, "Error: cannot 'continue', only 'break'.")
		end
		escapemark.continues.add(self)
		self.escapemark = escapemark
	end
end

redef class ABreakExpr
	# The escape mark associated with the break
	var escapemark: nullable EscapeMark
	redef fun accept_scope_visitor(v)
	do
		super
		var escapemark = v.get_escapemark(self, self.n_label)
		if escapemark == null then return # Skip error
		escapemark.breaks.add(self)
		self.escapemark = escapemark
	end
end


redef class ADoExpr
	# The escape mark associated with the 'do' block
	var escapemark: nullable EscapeMark
	redef fun accept_scope_visitor(v)
	do
		if n_label != null then
			self.escapemark = v.make_escape_mark(n_label, false)
		end
		v.enter_visit_block(n_block, self.escapemark)
	end
end

redef class AIfExpr
	redef fun accept_scope_visitor(v)
	do
		v.enter_visit(n_expr)
		v.enter_visit_block(n_then, null)
		v.enter_visit_block(n_else, null)
	end
end

redef class AWhileExpr
	# The escape mark associated with the 'while'
	var escapemark: nullable EscapeMark
	redef fun accept_scope_visitor(v)
	do
		var escapemark = v.make_escape_mark(n_label, true)
		self.escapemark = escapemark
		v.enter_visit(n_expr)
		v.enter_visit_block(n_block, escapemark)
	end
end

redef class ALoopExpr
	# The escape mark associated with the 'loop'
	var escapemark: nullable EscapeMark
	redef fun accept_scope_visitor(v)
	do
		var escapemark = v.make_escape_mark(n_label, true)
		self.escapemark = escapemark
		v.enter_visit_block(n_block, escapemark)
	end
end

redef class AForExpr
	# The automatic variables in order
	var variables: nullable Array[Variable]

	# The escape mark associated with the 'for'
	var escapemark: nullable EscapeMark

	redef fun accept_scope_visitor(v)
	do
		v.enter_visit(n_expr)

		# Protect automatic variables
		v.scopes.unshift(new Scope)

		# Create the automatic variables
		var variables = new Array[Variable]
		self.variables = variables
		for nid in n_ids do
			var va = new Variable(nid.text)
			v.register_variable(nid, va)
			variables.add(va)
		end

		var escapemark = v.make_escape_mark(n_label, true)
		self.escapemark = escapemark
		v.enter_visit_block(n_block, escapemark)

		v.scopes.shift
	end
end

redef class AVarFormExpr
	# The associated variable
	var variable: nullable Variable
end

redef class ACallFormExpr
	redef fun accept_scope_visitor(v)
	do
		if n_expr isa AImplicitSelfExpr then
			var name = n_id.text
			var variable = v.search_variable(name)
			if variable != null then
				var n: AExpr
				if variable isa ClosureVariable then
					n = new AClosureCallExpr.init_aclosurecallexpr(n_id, n_args, n_closure_defs)
					n.variable = variable
				else
					if not n_args.n_exprs.is_empty or n_args isa AParExprs then
						v.error(self, "Error: {name} is variable, not a function.")
						return
					end
					n = variable_create(variable)
					n.variable = variable
				end
				replace_with(n)
				n.accept_scope_visitor(v)
				return
			end
		end

		super
	end

	# Create a variable acces corresponding to the call form
	private fun variable_create(variable: Variable): AVarFormExpr is abstract
end

redef class ACallExpr
	redef fun variable_create(variable)
	do
		return new AVarExpr.init_avarexpr(n_id)
	end
end

redef class ACallAssignExpr
	redef fun variable_create(variable)
	do
		return new AVarAssignExpr.init_avarassignexpr(n_id, n_assign, n_value)
	end
end

redef class ACallReassignExpr
	redef fun variable_create(variable)
	do
		return new AVarReassignExpr.init_avarreassignexpr(n_id, n_assign_op, n_value)
	end
end

redef class AClosureCallExpr
	# the associate closure variable
	var variable: nullable ClosureVariable
end

redef class ASendExpr
	# The escape mark used with the closures if any
	var escapemark: nullable EscapeMark

	redef fun accept_scope_visitor(v)
	do
		if self.n_closure_defs.length > 0 then
			var escapemark = v.make_escape_mark(self.n_closure_defs.last.n_label, true)
			self.escapemark = escapemark
		end
		super
	end
end

redef class AClosureDef
	# The automatic variables in order
	var variables: nullable Array[Variable]

	# The escape mark used with the closure
	var escapemark: nullable EscapeMark

	redef fun accept_scope_visitor(v)
	do
		v.scopes.unshift(new Scope)

		var variables = new Array[Variable]
		self.variables = variables

		for nid in self.n_ids do
			var va = new Variable(nid.text)
			v.register_variable(nid, va)
			variables.add(va)
		end

		self.escapemark = self.parent.as(ASendExpr).escapemark
		v.enter_visit_block(self.n_expr, escapemark)

		v.scopes.shift
	end
end
