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

# Identification and scoping of local variables and labels.
module scope

import phase

redef class ToolContext
	# Run `APropdef::do_scope` on each propdef.
	var scope_phase: Phase = new ScopePhase(self, null)
end

private class ScopePhase
	super Phase
	redef fun process_npropdef(npropdef) do npropdef.do_scope(toolcontext)
end


# A local variable (including parameters, automatic variables and self)
class Variable
	# The name of the variable (as used in the program)
	var name: String is writable

	# Alias of `name`
	redef fun to_s do return self.name

	# The declaration of the variable, if any
	var location: nullable Location = null is writable

	# Is the local variable not read and need a warning?
	var warn_unread = false is writable
end

# Mark where break and continue will branch.
# Marks are either associated with a label of with a for_loop structure
class EscapeMark
	# The name of the label (unless the mark is an anonymous loop mark)
	var name: nullable String

	# The associated `continue` mark, if any.
	# If the mark attached to a loop (loop, while, for), a distinct mark is used.
	private var continue_mark: nullable EscapeMark = null

	# Each break/continue attached to the mark
	var escapes = new Array[AEscapeExpr]
end

# Visit a npropdef and:
#  * Identify variables and labels
#  * Associate each break and continue to its escapemark
#  * Transform `ACallFormExpr` that access a variable into `AVarFormExpr`
# FIXME: Should the class be private?
private class ScopeVisitor
	super Visitor

	# The tool context used to display errors
	var toolcontext: ToolContext

	var selfvariable = new Variable("self")

	init
	do
		scopes.add(new Scope)
	end

	# All stacked scope. `scopes.first` is the current scope
	var scopes = new List[Scope]

	# Shift and check the last scope
	fun shift_scope
	do
		assert not scopes.is_empty
		var scope = scopes.shift
		for v in scope.variables.values do
			if v.warn_unread then
				toolcontext.advice(v.location, "unread-variable", "Warning: local variable {v.name} is never read.")
			end
		end
	end

	# Register a local variable.
	# Display an error on toolcontext if a variable with the same name is masked.
	fun register_variable(node: ANode, variable: Variable): Bool
	do
		var name = variable.name
		var found = search_variable(name)
		if found != null then
			self.error(node, "Error: a variable named `{name}` already exists.")
			return false
		end
		scopes.first.variables[name] = variable
		variable.location = node.location
		return true
	end

	# Look for a variable named `name`.
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

	# Enter in a statement block `node` as inside a new scope.
	# The block can be optionally attached to an `escapemark`.
	fun enter_visit_block(node: nullable AExpr, escapemark: nullable EscapeMark)
	do
		if node == null then return
		var scope = new Scope
		scope.escapemark = escapemark
		scopes.unshift(scope)
		enter_visit(node)
		shift_scope
	end

	# Look for a label `name`.
	# Return null if no such a label is found.
	fun search_label(name: String): nullable EscapeMark
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
	fun make_escape_mark(nlabel: nullable ALabel, for_loop: Bool): EscapeMark
	do
		var name: nullable String
		if nlabel != null then
			var nid = nlabel.n_id
			if nid == null then
				var res = search_label("")
				if res != null then
					self.error(nlabel, "Syntax Error: anonymous label already defined.")
				end
				name = ""
			else
				name = nid.text
				var found = self.search_label(name)
				if found != null then
					self.error(nlabel, "Syntax Error: label `{name}` already defined.")
				end
			end
		else
			name = null
		end
		var res = new EscapeMark(name)
		if for_loop then res.continue_mark = new EscapeMark(name)
		return res
	end

	# Look for an escape mark optionally associated with a label.
	# If a label is given, the escapemark of this label is returned.
	# If there is no label, the nearest escapemark that is `for loop` is returned.
	# If there is no valid escapemark, then an error is displayed ans null is returned.
	# Return null if no such a label is found.
	fun get_escapemark(node: ANode, nlabel: nullable ALabel): nullable EscapeMark
	do
		if nlabel != null then
			var nid = nlabel.n_id
			if nid == null then
				var res = search_label("")
				if res == null then
					self.error(nlabel, "Syntax Error: invalid anonymous label.")
					return null
				end
				return res
			end
			var name = nid.text
			var res = search_label(name)
			if res == null then
				self.error(nlabel, "Syntax Error: invalid label `{name}`.")
				return null
			end
			return res
		else
			for scope in scopes do
				var res = scope.escapemark
				if res != null then
					return res
				end
			end
			self.error(node, "Syntax Error: `break` statement outside block.")
			return null
		end
	end

	# Display an error
	fun error(node: ANode, message: String)
	do
		self.toolcontext.error(node.hot_location, message)
	end
end

private class Scope
	var variables = new HashMap[String, Variable]

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
		v.shift_scope
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

redef class AVardeclExpr
	# The variable associated with the variable declaration
	var variable: nullable Variable
	redef fun accept_scope_visitor(v)
	do
		super
		var nid = self.n_id
		var variable = new Variable(nid.text)
		v.register_variable(nid, variable)
		variable.warn_unread = true # wait for some read mark.
		self.variable = variable
	end
end

redef class ASelfExpr
	# The variable associated with the self receiver
	var variable: nullable Variable
	redef fun accept_scope_visitor(v)
	do
		super
		self.variable = v.selfvariable
	end
end

redef class AEscapeExpr
	# The escape mark associated with the break/continue
	var escapemark: nullable EscapeMark
end

redef class AContinueExpr
	redef fun accept_scope_visitor(v)
	do
		super
		var escapemark = v.get_escapemark(self, self.n_label)
		if escapemark == null then return # Skip error
		escapemark = escapemark.continue_mark
		if escapemark == null then
			v.error(self, "Error: cannot 'continue', only 'break'.")
			return
		end
		escapemark.escapes.add(self)
		self.escapemark = escapemark
	end
end

redef class ABreakExpr
	redef fun accept_scope_visitor(v)
	do
		super
		var escapemark = v.get_escapemark(self, self.n_label)
		if escapemark == null then return # Skip error
		escapemark.escapes.add(self)
		self.escapemark = escapemark
	end
end


redef class ADoExpr
	# The break escape mark associated with the 'do' block
	var break_mark: nullable EscapeMark

	redef fun accept_scope_visitor(v)
	do
		self.break_mark = v.make_escape_mark(n_label, false)
		v.enter_visit_block(n_block, self.break_mark)
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
	# The break escape mark associated with the 'while'
	var break_mark: nullable EscapeMark

	# The continue escape mark associated with the 'while'
	var continue_mark: nullable EscapeMark

	redef fun accept_scope_visitor(v)
	do
		var escapemark = v.make_escape_mark(n_label, true)
		self.break_mark = escapemark
		self.continue_mark = escapemark.continue_mark
		v.enter_visit(n_expr)
		v.enter_visit_block(n_block, escapemark)
	end
end

redef class ALoopExpr
	# The break escape mark associated with the 'loop'
	var break_mark: nullable EscapeMark

	# The continue escape mark associated with the 'loop'
	var continue_mark: nullable EscapeMark

	redef fun accept_scope_visitor(v)
	do
		var escapemark = v.make_escape_mark(n_label, true)
		self.break_mark = escapemark
		self.continue_mark = escapemark.continue_mark
		v.enter_visit_block(n_block, escapemark)
	end
end

redef class AForExpr
	# The automatic variables in order
	var variables: nullable Array[Variable]

	# The break escape mark associated with the 'for'
	var break_mark: nullable EscapeMark

	# The continue escape mark associated with the 'for'
	var continue_mark: nullable EscapeMark

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
		self.break_mark = escapemark
		self.continue_mark = escapemark.continue_mark
		v.enter_visit_block(n_block, escapemark)

		v.shift_scope
	end
end

redef class AWithExpr
	# The break escape mark associated with the 'with'
	var break_mark: nullable EscapeMark

	redef fun accept_scope_visitor(v)
	do
		v.scopes.unshift(new Scope)

		var escapemark = v.make_escape_mark(n_label, true)
		self.break_mark = escapemark

		v.enter_visit(n_expr)
		v.enter_visit_block(n_block, escapemark)

		v.shift_scope
	end
end

redef class AAssertExpr
	redef fun accept_scope_visitor(v)
	do
		v.enter_visit(n_expr)
		v.enter_visit_block(n_else, null)
	end
end

redef class AVarFormExpr
	# The associated variable
	var variable: nullable Variable is writable
end

redef class ACallFormExpr
	redef fun accept_scope_visitor(v)
	do
		if n_expr isa AImplicitSelfExpr then
			var name = n_id.text
			var variable = v.search_variable(name)
			if variable != null then
				var n: AExpr
				if not n_args.n_exprs.is_empty or n_args isa AParExprs then
					v.error(self, "Error: `{name}` is a variable, not a method.")
					return
				end
				n = variable_create(variable)
				n.variable = variable
				replace_with(n)
				n.accept_scope_visitor(v)
				return
			end
		end

		super
	end

	# Create a variable access corresponding to the call form
	private fun variable_create(variable: Variable): AVarFormExpr is abstract
end

redef class ACallExpr
	redef fun variable_create(variable)
	do
		variable.warn_unread = false
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
		variable.warn_unread = false
		return new AVarReassignExpr.init_avarreassignexpr(n_id, n_assign_op, n_value)
	end
end
