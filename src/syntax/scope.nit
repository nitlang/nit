# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
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

# Manage nested escapable blocks (while, for and closure) and escape statements (break and continue)
package scope

import syntax_base
import flow

# All-in-one context for scoped things.
# It features:
# * variable and labels visibility
# * control for 'break' and 'continue'
# This class manage itself the entree and the exit of scopes:
# * use push or push_escapable to enter in a new scope block
# * use pop to remove the last scope block (do not foget do pop!)
# Warning: ScopeContext are created empty: you must perform a first push to register variables
class ScopeContext
	# Stack of scope blocks
	var _stack: Array[ScopeBlock] = new Array[ScopeBlock]

	# Known variables
	# (all variables, even out of scope ones)
	# Used for debuging
	var _variables: Array[Variable] = new Array[Variable]

	# Return the variable associated with a name
	fun [](n: Symbol): nullable Variable
	do
		var i = _stack.length - 1
		while i >= 0 do
			var b = _stack[i]
			var va = b.get_variable(n)
			if va != null then return va
			i -= 1
		end
		return null
	end

	# Register a variable with its name in the current scope
	# Display an error if name conflict
	fun add_variable(v: Variable)
	do
		var old_var = self[v.name]
		if old_var != null then
			_visitor.error(v.decl, "Error: '{v}' already defined at {old_var.decl.location.relative_to(v.decl.location)}.")
		end
		_stack.last.add_variable(v)
		_variables.add(v)
	end

	# Push a simple unlabeled variable scope block
	fun push(node: ANode)
	do
		var block = new ScopeBlock(node)
		_stack.push(block)
	end

	# Push a specific escapable block
	# Display error message if there is a problem with the label
	fun push_escapable(block: EscapableBlock, n_label: nullable ALabel)
	do
		_stack.push(block)
		if n_label != null then
			var lab = n_label.n_id.to_symbol
			var i = _stack.length - 1
			while i >= 0 do
				var b = _stack[i]
				if b isa EscapableBlock and b.lab == lab then
					visitor.error(n_label, "Syntax error: label {lab} already defined at {b.lab_location.relative_to(n_label.location)}.")
					return
				end
				i -= 1
			end
			block._lab = lab
			block._lab_location = n_label.location
		end
	end

	# Return the last stacked block that accepts unlabelled break/continue
	fun head: nullable EscapableBlock
	do
		var i = _stack.length - 1
		while i >= 0 do
			var h = _stack[i]
			if h isa EscapableBlock and not (h isa BreakOnlyEscapableBlock) then return h
			i -= 1
		end
		return null
	end

	# Return the block associed to a label
	# Output an error end return null if the label is not known
	fun get_by_label(nl: ALabel): nullable EscapableBlock
	do
		var i = _stack.length - 1
		var lab = nl.n_id.to_symbol
		while i >= 0 do
			var b = _stack[i]
			if b isa EscapableBlock and b.lab == lab then return b
			i -= 1
		end
		visitor.error(nl, "Syntax error: invalid label {lab}.")
		return null
	end

	# Remove the last block (the last stacked)
	fun pop
	do
		var n = _stack.pop
	end

	readable var _visitor: AbsSyntaxVisitor
	init (v: AbsSyntaxVisitor)
	do
		_visitor = v
	end
end

###############################################################################

# A single scope block. Thez are stacked in a ScopeContext
# This block is used only to store local variables
class ScopeBlock
	# The syntax node of the block
	readable var _node: ANode

	# List of local variables of the block
	# Lazily constructed since many blocks does not have local variables
	var _dico: nullable HashMap[Symbol, Variable] = null

	private fun add_variable(v: Variable)
	do
		var dico = _dico
		if dico == null then
			dico = new HashMap[Symbol, Variable]
			_dico = dico
		end
		dico[v.name] = v
	end

	private fun get_variable(n: Symbol): nullable Variable
	do
		var dico = _dico
		if dico == null then return null
		if not dico.has_key(n) then return null
		return dico[n]
	end

	init(node: ANode)
	do
		_node = node
	end
end

# A escapable block correspond to a scope block where break and/or continue can by used.
# EscapableBlocks can also be labeled.
# 'for' and 'while' use this class
# labeled 'do' uses the BreakOnlyEscapableBlock subclass
# closures uses the EscapableClosure subclass
class EscapableBlock
	super ScopeBlock
	# The label of the block (if any)
	# Set by the push in EscapableContext
	readable var _lab: nullable Symbol

	# The location of the label (if any)
	readable var _lab_location: nullable Location

	# Is self a break closure ?
	fun is_break_block: Bool do return false

	# Collected expressions used in breaks.
	# null if break does not accept values.
	# break_list is used to store expressions used in break statments and perform type checks latter
	fun break_list: nullable Array[AExpr] do return null

	# The static type required by the continue statement (if any)
	fun continue_stype: nullable MMType do return null

	# Alternatives flow contexts for breaks
	readable var _break_flow_contexts: Array[FlowContext] = new Array[FlowContext]

	init(node: ANode)
	do
		super(node)
	end
end

# specific EscapableBlock where only labelled break can be used
class BreakOnlyEscapableBlock
	super EscapableBlock
	redef fun is_break_block: Bool do return true

	init(node: ANode) do super
end

# specific EscapableBlock for closures
class EscapableClosure
	super EscapableBlock
	# The associated closure
	readable var _closure: MMClosure

	redef fun is_break_block do return _closure.is_break

	redef readable var _break_list: nullable Array[AExpr]

	redef fun continue_stype do return _closure.signature.return_type

	init(node: ANode, closure: MMClosure, break_list: nullable Array[AExpr])
	do
		super(node)
		_closure = closure
		_break_list = break_list
	end
end

###############################################################################

abstract class AEscapeExpr
	super ALabelable
	# The associated escapable block
	readable var _escapable: nullable EscapableBlock

	# The name of the keyword
	fun kwname: String is abstract

	# Compute, set and return the associated escapable block
	fun compute_escapable_block(lctx: ScopeContext): nullable EscapableBlock
	do
		var block: nullable EscapableBlock
		var nl = n_label
		if nl != null then
			block = lctx.get_by_label(nl)
		else
			block = lctx.head
			if block == null then
				lctx.visitor.error(self, "Syntax Error: '{kwname}' statment outside block.")
			end
		end
		_escapable = block
		return block
	end
end

redef class AContinueExpr
	super AEscapeExpr
	redef fun kwname do return "continue"
end

redef class ABreakExpr
	super AEscapeExpr
	redef fun kwname do return "break"
end

