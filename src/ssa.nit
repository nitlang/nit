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
