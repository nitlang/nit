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
	attr _stack: Array[EscapableBlock] = new Array[EscapableBlock]

	# Push a new escapable block
	meth push(block: EscapableBlock)
	do
		_stack.push(block)
	end

	# Is there no block in the stack?
	meth is_empty: Bool do return _stack.is_empty

	# Return the current block (the last stacked)
	meth head: EscapableBlock
	do
		return _stack.last
	end

	# Remove the last block (the last stacked)
	meth pop
	do
		var n = _stack.pop
	end

	readable attr _visitor: AbsSyntaxVisitor
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
	readable attr _node: PNode = null

	# Is self a break closure ?
	meth is_break_block: Bool do return false

	# Collected expressions used in breaks.
	# null if break does not accept values.
	# break_list is used to store expressions used in break statments and perform type checks latter
	meth break_list: Array[PExpr] do return null

	# The static type required by the continue statement (if any)
	meth continue_stype: MMType do return null

	init(node: PNode)
	do
		_node = node
	end
end

# specific EscapableBlock for closures
class EscapableClosure
special EscapableBlock
	# The associated closure
	readable attr _closure: MMClosure

	redef meth is_break_block do return _closure.is_break

	redef readable attr _break_list: Array[PExpr]

	redef meth continue_stype do return _closure.signature.return_type

	init(node: PNode, closure: MMClosure, break_list: Array[PExpr])
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
	readable attr _escapable_block: EscapableBlock

	# The name of the keyword
	meth kwname: String is abstract

	# Compute, set and return the _abelable_node value
	meth compute_escapable_block(lctx: EscapableContext): EscapableBlock
	do
		var block: EscapableBlock
		if lctx.is_empty then
			lctx.visitor.error(self, "Syntax Error: '{kwname}' statment outside block.")
			return null
		end
		block = lctx.head
		_escapable_block = block
		return block
	end
end

redef class AContinueExpr
special AEscapeExpr
	redef meth kwname do return "continue"
end

redef class ABreakExpr
special AEscapeExpr
	redef meth kwname do return "break"
end

