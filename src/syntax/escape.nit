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
package escape

import syntax_base

# Stack escapable blocks
class EscapableContext
	# Stack of blocks
	var _stack: Array[EscapableBlock] = new Array[EscapableBlock]

	# Known labels
	# (all labels, even out of scopes ones)
	# Used to find duplicates
	var _labels: Array[ALabel] = new Array[ALabel]

	# Push a new escapable block
	# Display error message if tere is a problem with the label
	fun push(block: EscapableBlock, n_label: nullable ALabel)
	do
		_stack.push(block)
		if n_label != null then
			var lab = n_label.n_id.to_symbol
			for nl in _labels do
				if n_label != nl and lab == nl.n_id.to_symbol then
					visitor.error(n_label, "Syntax error: label {lab} already defined at {nl.location.relative_to(n_label.location)}.")
					return
				end
			end
			_labels.add(n_label)
			block._lab = lab
		end
	end

	# Return the last stacked block that accepts unlabelled break/continue
	fun head: nullable EscapableBlock
	do
		var i = _stack.length - 1
		while i >= 0 do
			var h = _stack[i]
			if not (h isa BreakOnlyEscapableBlock) then return h
			i -= 1
		end
		return null
	end

	# Return the block associed to a label
	# Output an error end return null if the label is not known
	fun get_by_label(nl: ALabel): nullable EscapableBlock
	do
		var i = _stack.length - 1
		var block: nullable EscapableBlock = null
		var lab = nl.n_id.to_symbol
		while i >= 0 do
			var b = _stack[i]
			if b.lab == lab then return b
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

# A escapable block correspond to a block statement where break and/or continue can by used
# 'for' and 'while' use this class
# 'do' uses the BreakOnlyEscapableBlock subclass
# closures uses the EscapableClosure subclass
class EscapableBlock
	# The syntax node of the block
	readable var _node: ANode

	# The label of the block (if any)
	# Set by the push in EscapableContext
	readable var _lab: nullable Symbol

	# Is self a break closure ?
	fun is_break_block: Bool do return false

	# Collected expressions used in breaks.
	# null if break does not accept values.
	# break_list is used to store expressions used in break statments and perform type checks latter
	fun break_list: nullable Array[AExpr] do return null

	# The static type required by the continue statement (if any)
	fun continue_stype: nullable MMType do return null

	init(node: ANode)
	do
		_node = node
	end
end

# specific EscapableBlock where only labelled break can be used
class BreakOnlyEscapableBlock
special EscapableBlock
	redef fun is_break_block: Bool do return true

	init(node: ANode) do super
end

# specific EscapableBlock for closures
class EscapableClosure
special EscapableBlock
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

class AEscapeExpr
special ALabelable
	# The associated escapable block
	readable var _escapable: nullable EscapableBlock

	# The name of the keyword
	fun kwname: String is abstract

	# Compute, set and return the associated escapable block
	fun compute_escapable_block(lctx: EscapableContext): nullable EscapableBlock
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
special AEscapeExpr
	redef fun kwname do return "continue"
end

redef class ABreakExpr
special AEscapeExpr
	redef fun kwname do return "break"
end

