# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2015 Julien Pagès <julien.pages@lirmm.fr>
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

# Single-Static Assignment algorithm from an AST
module ssa

import semantize

# Represent a sequence of the program
# A basic block is composed of several instructions without a jump
class BasicBlock
	# First instruction of the basic block
	var first: ANode is noinit

	# Last instruction of the basic block
	var last: ANode is noinit

	# Direct successors
	var successors = new Array[BasicBlock]

	# Direct predecessors
	var predecessors = new Array[BasicBlock]

	# Parts of AST that contain a read to a variable
	var read_sites = new Array[AVarFormExpr]

	# Parts of AST that contain a write to a variable
	var write_sites = new Array[AVarFormExpr]

	# Parts of AST that contain a variable access (read or write)
	var variables_sites = new Array[AExpr]

	# The iterated dominance frontier of this block
	# i.e. the set of blocks this block dominate directly or indirectly
	var dominance_frontier: Array[BasicBlock] = new Array[BasicBlock] is lazy

	# Self is the old block to link to the new,
	# The two blocks are not linked if the current ends with a `AReturnExpr` or `ABreakExpr`
	# i.e. self is the predecessor of `successor`
	# `successor` The successor block
	fun link(successor: BasicBlock)
	do
		# Do not link the two blocks if the current block end with a return, break or continue
		if last isa AReturnExpr or last isa ABreakExpr or last isa AContinueExpr then return

		successors.add(successor)
		successor.predecessors.add(self)
	end

	# Self is the old block to link to the new
	# i.e. self is the predecessor of `successor`
	# `successor` The successor block
	fun link_special(successor: BasicBlock)
	do
		# Link the two blocks even if the current block ends with a return or a break
		successors.add(successor)
		successor.predecessors.add(self)
	end

	# Add the `block` to the dominance frontier of this block
	fun add_df(block: BasicBlock)
	do
		dominance_frontier.add(block)

		# Add this block recursively in super-blocks to compute the iterated
		# dominance frontier
		for successor in block.successors do
			# If this successor has not already been add to the dominance frontier
			if not dominance_frontier.has(successor) then
				add_df(successor)
			end
		end
	end

	# Compute recursively the dominance frontier of self block and its successors
	private fun compute_df
	do
		# Treat each block only one time
		df_computed = true

		for s in successors do
			add_df(s)

			if not s.df_computed then s.compute_df
		end
	end

	# Used to handle recursions by treating only one time each block
	var treated: Bool = false

	# If true, the iterated dominance frontier of this block has been computed
	var df_computed: Bool = false

	# Indicate the BasicBlock is newly created and needs to be updated
	var need_update: Bool = false

	# Indicate if the variables renaming step has been made for this block
	var is_renaming: Bool = false

	# The variables that are accessed in this block
	var variables = new Array[Variable] is lazy

	# The PhiFunction this block contains at the beginning
	var phi_functions = new Array[PhiFunction] is lazy
end

# Contain the currently analyzed propdef
class SSA
	# The currently analyzed APropdef
	var propdef: APropdef

	# The PhiFunction `current_propdef` contains
	var phi_functions = new Array[PhiFunction]

	# Recursively generate the basic blocks for this propdef
	fun generate_basic_blocks
	do
		propdef.generate_basic_blocks(self)
	end
end

redef class Variable
	# The expressions of AST of this variable depends
	var dep_exprs = new Array[AExpr]

	# The blocks in which this variable is assigned
	var assignment_blocks: Array[BasicBlock] = new Array[BasicBlock] is lazy

	# Part of the program where this variable is read
	var read_blocks: Array[BasicBlock] = new Array[BasicBlock] is lazy

	# The stack of this variable, used for SSA renaming
	var stack = new Array[Variable] is lazy

	# The original Variable in case of renaming
	var original_variable: nullable Variable = self

	# If true, this variable is a parameter of a method
	var parameter: Bool = false
end

# A PhiFunction is a kind of Variable used in SSA-construction,
# it is placed at the beginning of a BasicBlock with many incoming blocks
class PhiFunction
	super Variable

	# The dependences of this variable for SSA-Algorithm
	var dependences = new Array[Couple[Variable, BasicBlock]]

	# The position in the AST of the phi-function
	var block: BasicBlock

	# Set the dependences for the phi-function
	# *`block` BasicBlock in which we go through the dominance-frontier
	# *`v` The variable to looking for
	fun add_dependences(block: BasicBlock, v: Variable)
	do
		# Look in which blocks of DF(block) `v` has been assigned
		for b in block.predecessors do
			if v.assignment_blocks.has(b) then
				var dep = new Couple[Variable, BasicBlock](v, b)
				dependences.add(dep)
			end
		end
	end

	# Print the PhiFunction with all its dependences
	redef fun to_s: String
	do
		var s = ""
		s += " dependences = [ "
		for d in dependences do
			s += d.first.to_s + " "
		end
		s += "]"

		return s
	end
end

redef class APropdef
	# The variables contained in the body on this propdef
	var variables: HashSet[Variable] = new HashSet[Variable] is lazy

	# The first basic block of the code
	var basic_block: nullable BasicBlock

	# If true, the basic blocks where generated
	var is_generated: Bool = false

	# Generate all basic blocks for this code
	fun generate_basic_blocks(ssa: SSA) is abstract
end

redef class AAttrPropdef
	redef fun generate_basic_blocks(ssa: SSA)
	do
		basic_block = new BasicBlock
		basic_block.first = self
		basic_block.last = self

		# Add the self variable
		if self.selfvariable != null then variables.add(selfvariable.as(not null))

		# Recursively goes into the nodes
		if n_block != null then
			n_block.generate_basic_blocks(ssa, basic_block.as(not null))
			is_generated = true
		end
	end
end

redef class AMethPropdef

	# The return variable of the propdef
	# Create an empty variable for the return of the method
	# and treat returns like variable assignments
	var returnvar: Variable = new Variable("returnvar")

	redef fun generate_basic_blocks(ssa: SSA)
	do
		basic_block = new BasicBlock
		basic_block.first = self
		basic_block.last = self

		# If the method has a signature
		if n_signature != null then
			for p in n_signature.n_params do
				# Add parameters to the local variables
				variables.add(p.variable.as(not null))
				p.variable.parameter = true
			end
		end

		# Add the return variable
		variables.add(returnvar)

		# Add the self variable
		if self.selfvariable != null then variables.add(selfvariable.as(not null))

		# Recursively goes into the nodes
		if n_block != null then
			n_block.generate_basic_blocks(ssa, basic_block.as(not null))
			is_generated = true
		end
	end
end

redef class AExpr
	# Generate recursively basic block for this expression
	# *`ssa` An instance of the SSA class initialized with the enclosing `APropdef`
	# *`old_block` A basic block not completely filled
	# Return the last created block (the last block can be nested)
	fun generate_basic_blocks(ssa: SSA, old_block: BasicBlock): BasicBlock
	do
		return old_block
	end
end

redef class AVarFormExpr
	# The original variable
	var original_variable: nullable Variable = variable
end

redef class AVarExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		self.variable.as(not null).read_blocks.add(old_block)
		old_block.variables.add(self.variable.as(not null))

		self.variable.as(not null).original_variable = self.variable.as(not null)
		# Save this read site in the block
		old_block.read_sites.add(self)
		old_block.variables_sites.add(self)

		return old_block
	end
end

redef class AVardeclExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		var decl = self.variable.as(not null)

		# Add the corresponding variable to the enclosing mpropdef
		ssa.propdef.variables.add(decl)

		decl.original_variable = decl
		decl.assignment_blocks.add(old_block)
		old_block.variables.add(decl)

		if self.n_expr != null then
			self.variable.dep_exprs.add(self.n_expr.as(not null))
			old_block = self.n_expr.generate_basic_blocks(ssa, old_block)
		end

		return old_block
	end
end

redef class AVarAssignExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		self.variable.as(not null).assignment_blocks.add(old_block)
		old_block.variables.add(self.variable.as(not null))
		self.variable.as(not null).original_variable = self.variable.as(not null)

		# Save this write site in the block
		old_block.write_sites.add(self)
		old_block.variables_sites.add(self)

		ssa.propdef.variables.add(self.variable.as(not null))

		return self.n_value.generate_basic_blocks(ssa, old_block)
	end
end

redef class AVarReassignExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		self.variable.as(not null).assignment_blocks.add(old_block)
		old_block.variables.add(self.variable.as(not null))
		self.variable.as(not null).original_variable = self.variable.as(not null)

		# Save this write site in the block
		old_block.write_sites.add(self)
		old_block.variables_sites.add(self)

		ssa.propdef.variables.add(self.variable.as(not null))
		return self.n_value.generate_basic_blocks(ssa, old_block)
	end
end

redef class ABreakExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		# Finish the old block
		old_block.last = self

		return old_block
	end
end

redef class AContinueExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		return old_block
	end
end

redef class AReturnExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		# The return just set the current block and stop the recursion
		if self.n_expr != null then
			old_block = self.n_expr.generate_basic_blocks(ssa, old_block)

			# Store the return expression in the dependences of the dedicated returnvar
			if ssa.propdef isa AMethPropdef then
				ssa.propdef.as(AMethPropdef).returnvar.dep_exprs.add(n_expr.as(not null))
			end
		end

		old_block.last = self

		return old_block
	end
end

redef class AAssertExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		self.n_expr.generate_basic_blocks(ssa, old_block)

		# The condition of the assert is the last expression of the previous block
		old_block.last = self.n_expr

		# The block if the assert fail
		var block_false = new BasicBlock

		if self.n_else != null then
			block_false.first = self.n_else.as(not null)
			block_false.last = self.n_else.as(not null)
			self.n_else.generate_basic_blocks(ssa, block_false)
		else
			block_false.first = self
			block_false.first = self
		end

		old_block.link(block_false)

		# The block if the assert is true: the execution continue
		var block_true = new BasicBlock
		block_true.first = self
		block_true.last = self

		old_block.link(block_true)

		return block_true
	end
end

redef class AOrExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		self.n_expr.generate_basic_blocks(ssa, old_block)
		return self.n_expr2.generate_basic_blocks(ssa, old_block)
	end
end

redef class AImpliesExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		self.n_expr.generate_basic_blocks(ssa, old_block)
		return self.n_expr2.generate_basic_blocks(ssa, old_block)
	end
end

redef class AAndExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		self.n_expr.generate_basic_blocks(ssa, old_block)
		return self.n_expr2.generate_basic_blocks(ssa, old_block)
	end
end

redef class ANotExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		return self.n_expr.generate_basic_blocks(ssa, old_block)
	end
end

redef class AOrElseExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		self.n_expr.generate_basic_blocks(ssa, old_block)
		return self.n_expr2.generate_basic_blocks(ssa, old_block)
	end
end

redef class AArrayExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		for nexpr in self.n_exprs do
			old_block = nexpr.generate_basic_blocks(ssa, old_block)
		end

		return old_block
	end
end

redef class ASuperstringExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		for nexpr in self.n_exprs do old_block = nexpr.generate_basic_blocks(ssa, old_block)

		return old_block
	end
end

redef class ACrangeExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		self.n_expr.generate_basic_blocks(ssa, old_block)
		return self.n_expr2.generate_basic_blocks(ssa, old_block)
	end
end

redef class AOrangeExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		self.n_expr.generate_basic_blocks(ssa, old_block)
		return self.n_expr2.generate_basic_blocks(ssa, old_block)
	end
end

redef class AIsaExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		return self.n_expr.generate_basic_blocks(ssa, old_block)
	end
end

redef class AAsCastExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		return self.n_expr.generate_basic_blocks(ssa, old_block)
	end
end

redef class AAsNotnullExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		return self.n_expr.generate_basic_blocks(ssa, old_block)
	end
end

redef class AParExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		return self.n_expr.generate_basic_blocks(ssa, old_block)
	end
end

redef class AOnceExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		return self.n_expr.generate_basic_blocks(ssa, old_block)
	end
end

redef class ASendExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		# A call does not finish the current block,
		# because we create intra-procedural basic blocks here

		# Recursively goes into arguments to find variables if any
		for e in self.raw_arguments do e.generate_basic_blocks(ssa, old_block)

		return self.n_expr.generate_basic_blocks(ssa, old_block)
	end
end

redef class ASendReassignFormExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		self.n_expr.generate_basic_blocks(ssa, old_block)

		# Recursively goes into arguments to find variables if any
		for e in self.raw_arguments do e.generate_basic_blocks(ssa, old_block)

		return self.n_value.generate_basic_blocks(ssa, old_block)
	end
end

redef class ASuperExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		# Recursively goes into arguments to find variables if any
		for arg in self.n_args.n_exprs do arg.generate_basic_blocks(ssa, old_block)

		return old_block
	end
end

redef class ANewExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		for e in self.n_args.n_exprs do e.generate_basic_blocks(ssa, old_block)

		return old_block
	end
end

redef class AAttrExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		return self.n_expr.generate_basic_blocks(ssa, old_block)
	end
end

redef class AAttrAssignExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		return self.n_expr.generate_basic_blocks(ssa, old_block)
	end
end

redef class AAttrReassignExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		return self.n_expr.generate_basic_blocks(ssa, old_block)
	end
end

redef class AIssetAttrExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		return self.n_expr.generate_basic_blocks(ssa, old_block)
	end
end

redef class ABlockExpr
	# The block needs to know if a new block is created
	redef fun generate_basic_blocks(ssa, old_block)
	do
		var last_block = old_block
		var current_block: BasicBlock

		# Recursively continue in the body of the block
		for i in [0..self.n_expr.length[ do
			current_block = self.n_expr[i].generate_basic_blocks(ssa, last_block)

			if current_block.need_update then
				if i < (self.n_expr.length-1) then
					# Current_block must be filled
					current_block.first = self.n_expr[i+1]
					current_block.last = self.n_expr[i+1]
					current_block.need_update = false
				else
					# Put the current block at the end of the block
					current_block.first = last_block.last
					current_block.last = last_block.last
				end
			end

			if not current_block.last isa AEscapeExpr or current_block.last isa AReturnExpr then
				# Re-affected the last block
				current_block.last = self.n_expr[i]
			end

			last_block = current_block
		end

		return last_block
	end
end

redef class AIfExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		# Terminate the previous block
		old_block.last = self

		# We start two new blocks if the if has two branches
		var block_then = new BasicBlock

		# Visit the test of the if
		self.n_expr.generate_basic_blocks(ssa, old_block)

		# Launch the recursion in two successors if they exist
		if self.n_then != null then
			old_block.link(block_then)

			block_then.first = self.n_then.as(not null)
			block_then.last = self.n_then.as(not null)
			self.n_then.generate_basic_blocks(ssa, block_then)
		end

		var block_else = new BasicBlock

		if self.n_else != null then
			old_block.link(block_else)

			block_else.first = self.n_else.as(not null)
			block_else.last = self.n_else.as(not null)
			self.n_else.generate_basic_blocks(ssa, block_else)
		end

		# Create a new BasicBlock to represent the two successor
		# branches of the if
		var new_block = new BasicBlock
		new_block.first = self
		new_block.last = self

		if self.n_then != null then block_then.link(new_block)

		# The new block needs to be filled by the caller
		new_block.need_update = true

		if block_else.predecessors.length != 0 then block_else.link(new_block)

		return new_block
	end
end

redef class AIfexprExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		# Terminate the previous block
		old_block.last = self

		# We start two new blocks if the if has two branches
		var block_then = new BasicBlock

		# Visit the test of the if
		self.n_expr.generate_basic_blocks(ssa, old_block)

		# Launch the recursion in two successors if they exist
		old_block.link(block_then)

		block_then.first = self.n_then
		block_then.last = self.n_then
		self.n_then.generate_basic_blocks(ssa, block_then)

		var block_else = new BasicBlock

		old_block.link(block_else)

		block_else.first = self.n_else
		block_else.last = self.n_else
		self.n_else.generate_basic_blocks(ssa, block_else)

		# Create a new BasicBlock to represent the two successor
		# branches of the if
		var new_block = new BasicBlock
		new_block.first = self
		new_block.last = self

		block_then.link(new_block)

		# The new block needs to be filled by the caller
		new_block.need_update = true

		block_else.link(new_block)

		return new_block
	end
end

redef class ADoExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		old_block.last = self

		# The beginning of the block is the first instruction
		var block = new BasicBlock
		block.first = self.n_block.as(not null)
		block.last = self.n_block.as(not null)

		old_block.link(block)
		return self.n_block.generate_basic_blocks(ssa, block)
	end
end

redef class AWhileExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		old_block.last = self

		# The beginning of the block is the test of the while
		var block = new BasicBlock
		block.first = self.n_expr
		block.last = self.n_block.as(not null)

		old_block.link(block)

		self.n_expr.generate_basic_blocks(ssa, old_block)
		var inside_block = self.n_block.generate_basic_blocks(ssa, block)

		# Link the inside of the block to the previous block
		block.link_special(old_block)

		# Create a new Block after the while
		var new_block = new BasicBlock
		new_block.need_update = true

		old_block.link_special(new_block)

		return new_block
	end
end

redef class ALoopExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		old_block.last = self

		# The beginning of the block is the first instruction
		var block = new BasicBlock
		block.first = self.n_block.as(not null)
		block.last = self.n_block.as(not null)

		old_block.link(block)
		self.n_block.generate_basic_blocks(ssa, block)

		return block
	end
end

redef class AForExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		old_block.last = self

		# The beginning of the block is the first instruction
		var block = new BasicBlock
		block.first = self.n_expr
		block.last = self.n_block.as(not null)

		# Visit the test of the if
		self.n_expr.generate_basic_blocks(ssa, block)

		# Collect the variables declared in the for
		for v in variables do
			ssa.propdef.variables.add(v)
		end

		old_block.link(block)

		block.link(old_block)

		var new_block = new BasicBlock
		new_block.need_update = true

		return new_block
	end
end
