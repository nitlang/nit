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

	# Push a new escapable block
	fun push(block: EscapableBlock)
	do
		_stack.push(block)
	end

	# Is there no block in the stack?
	fun is_empty: Bool do return _stack.is_empty

	# Return the current block (the last stacked)
	fun head: EscapableBlock
	do
		return _stack.last
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
# For and while use this class. closures uses the EscapableClosure subclass.
class EscapableBlock
	# The syntax node of the block
	readable var _node: PNode

	# Is self a break closure ?
	fun is_break_block: Bool do return false

	# Collected expressions used in breaks.
	# null if break does not accept values.
	# break_list is used to store expressions used in break statments and perform type checks latter
	fun break_list: nullable Array[PExpr] do return null

	# The static type required by the continue statement (if any)
	fun continue_stype: nullable MMType do return null

	init(node: PNode)
	do
		_node = node
	end
end

# specific EscapableBlock for closures
class EscapableClosure
special EscapableBlock
	# The associated closure
	readable var _closure: MMClosure

	redef fun is_break_block do return _closure.is_break

	redef readable var _break_list: nullable Array[PExpr]

	redef fun continue_stype do return _closure.signature.return_type

	init(node: PNode, closure: MMClosure, break_list: nullable Array[PExpr])
	do
		super(node)
		_closure = closure
		_break_list = break_list
	end
end

###############################################################################

class AEscapeExpr
special PNode
	# The associated escapable block
	readable var _escapable: nullable EscapableBlock

	# The name of the keyword
	fun kwname: String is abstract

	# Compute, set and return the associated escapable block
	fun compute_escapable_block(lctx: EscapableContext): nullable EscapableBlock
	do
		var block: EscapableBlock
		if lctx.is_empty then
			lctx.visitor.error(self, "Syntax Error: '{kwname}' statment outside block.")
			return null
		end
		block = lctx.head
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

