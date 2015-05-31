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
import astbuilder

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

	# Used to dump the BasicBlock to dot
	var treated_debug: Bool = false

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

	# Contain all AST-parts related to object mechanisms the propdef has:
	# instantiation, method dispatch, attribute access, subtyping-test
	var object_sites: Array[AExpr] = new Array[AExpr]

	# Compute the three steps of SSA-algorithm
	# `ssa` A new instance of SSA class initialized with `self`
	fun compute_ssa(ssa: SSA)
	do
		if is_generated then return

		# The first step is to generate the basic blocks
		generate_basic_blocks(ssa)

		# The propdef has no body (abstract)
		if not is_generated then return

		# Once basic blocks were generated, compute SSA algorithm
		compute_phi(ssa)
		rename_variables(ssa)
		ssa_destruction(ssa)
	end

	# Compute the first phase of SSA algorithm: placing phi-functions
	fun compute_phi(ssa: SSA)
	do
		var root_block = basic_block.as(not null)

		# Compute the iterated dominance frontier of the graph of basic blocks
		root_block.compute_df

		# Places where a phi-function is added per variable
		var phi_blocks = new HashMap[Variable, Array[BasicBlock]]

		# For each variables in the propdef
		for v in variables do
			var phi_variables = new Array[BasicBlock]

			var read_blocks = new Array[BasicBlock]
			read_blocks.add_all(v.read_blocks)
			read_blocks.add_all(v.assignment_blocks)

			# While we have not treated each part accessing `v`
			while not read_blocks.is_empty do
				# Remove a block from the array
				var block = read_blocks.shift

				# For each block in the dominance frontier of `block`
				for df in block.dominance_frontier do
					# If we have not yet put a phi-function at the beginning of this block
					if not phi_variables.has(df) then
						phi_variables.add(df)

						# Create a new phi-function and set its dependences
						var phi = new PhiFunction("phi", df)
						phi.add_dependences(df, v)
						phi.block = df
						phi.original_variable = phi
						phi.declared_type = v.declared_type

						# Indicate this phi-function is assigned in this block
						phi.assignment_blocks.add(block)
						ssa.phi_functions.add(phi)

						# Add a phi-function at the beginning of df for variable v
						df.phi_functions.add(phi)

						if not v.read_blocks.has(df) or not v.assignment_blocks.has(df) then read_blocks.add(df)
					end
				end
			end

			# Add `phi-variables` to the global map
			phi_blocks[v] = phi_variables
		end
	end

	# Compute the second phase of SSA algorithm: renaming variables
	# NOTE: `compute_phi` must has been called before
	fun rename_variables(ssa: SSA)
	do
		# A counter for each variable
		# The key is the variable, the value the number of assignment into the variable
		var counter = new HashMap[Variable, Int]

		for v in variables do
			counter[v] = 0
			v.stack.push(v)
		end

		for phi in ssa.phi_functions do counter[phi] = 0

		# Launch the recursive renaming from the root block
		rename(basic_block.as(not null), counter, ssa)
	end

	# Recursively rename each variable from `block`
	# *`block` The starting basic block
	# *`counter` The key is the variable, the value the number of assignment into the variable
	fun rename(block: BasicBlock, counter: HashMap[Variable, Int], ssa: SSA)
	do
		if block.is_renaming then return

		block.is_renaming = true

		# For each phi-function of this block
		for phi in block.phi_functions do
			generate_name(phi, counter, block.first, ssa)

			# Replace the phi into the block
			block.phi_functions[block.phi_functions.index_of(phi)] = phi.original_variable.stack.last.as(PhiFunction)
		end

		# For each variable read in `block`
		for vread in block.read_sites do
			# Replace the old variable in AST
			vread.variable = vread.variable.original_variable.stack.last
		end

		# For each variable write
		for vwrite in block.write_sites do
			generate_name(vwrite.variable.as(not null), counter, vwrite, ssa)

			var new_version = vwrite.variable.original_variable.stack.last

			# Set dependence of the new variable
			if vwrite isa AVarReassignExpr then
				new_version.dep_exprs.add(vwrite.n_value)
			else if vwrite isa AVarAssignExpr then
				new_version.dep_exprs.add(vwrite.n_value)
			end

			# Replace the old variable by the last created
			vwrite.variable = new_version
		end

		# Rename occurrence of old names in phi-function
		for successor in block.dominance_frontier do
			for sphi in successor.phi_functions do
				# Go over the couples in the phi dependences to rename variables
				for couple in sphi.dependences do
					if couple.second == block then
						# Rename this variable
						couple.first = couple.first.original_variable.stack.last
					end
				end
			end
		end

		# Recurse in successor blocks
		for successor in block.successors do
			rename(successor, counter, ssa)
		end

		# Pop old names off the stack for each phi-function
		for phi in block.phi_functions do
			if not phi.stack.is_empty then phi.stack.pop
		end
	end

	# Generate a new version of the variable `v` and return it
	# *`v` The variable for which we generate a name
	# *`counter` The key is the variable, the value the number of assignment into the variable
	# *`expr` The AST node in which the assignment of v is made
	# *`ssa` The instance of SSA
	fun generate_name(v: Variable, counter: HashMap[Variable, Int], expr: ANode, ssa: SSA): Variable
	do
		var original_variable = v.original_variable.as(not null)

		var i = counter[original_variable]

		var new_version: Variable

		# Create a new version of Variable
		if original_variable isa PhiFunction then
			var block = original_variable.block
			new_version = new PhiFunction(original_variable.name + i.to_s, block)
			new_version.dependences.add_all(original_variable.dependences)
			ssa.phi_functions.add(new_version)
		else
			new_version = new Variable(original_variable.name + i.to_s)
			new_version.declared_type = expr.as(AVarFormExpr).variable.declared_type
			variables.add(new_version)
		end

		# Recopy the fields into the new version
		new_version.location = expr.location
		new_version.original_variable = original_variable

		# Push a new version on the stack
		original_variable.stack.add(new_version)
		counter[v] = i + 1

		return new_version
	end

	# Transform SSA-representation into an executable code (delete phi-functions)
	# `ssa` Current instance of SSA
	fun ssa_destruction(ssa: SSA)
	do
		var builder = new ASTBuilder(mpropdef.mclassdef.mmodule, mpropdef.mclassdef.bound_mtype)

		# Iterate over all phi-functions
		for phi in ssa.phi_functions do
			for dep in phi.dependences do
				# dep.second is the block where we need to create a varassign
				var var_read = builder.make_var_read(dep.first, dep.first.declared_type.as(not null))
				var nvar = builder.make_var_assign(dep.first, var_read)

				var block = dep.second.last.parent

				# This variable read must be add to a ABlockExpr
				if block isa ABlockExpr then
					block.add(nvar)
				end

				propagate_dependences(phi, phi.block)
				ssa.propdef.variables.add(dep.first)
			end
		end
	end

	# Propagate the dependences of the phi-functions into following variables
	# `phi` The PhiFunction
	# `block` Current block where we propagate dependences
	fun propagate_dependences(phi: PhiFunction, block: BasicBlock)
	do
		# Treat each block once
		if block.treated then return

		# For each variable access site in the block
		for site in block.variables_sites do
			if site isa AVarExpr then
				# Propagate the dependences of the phi-function in variables after the phi
				for dep in phi.dependences do
					for expr in dep.first.dep_exprs do
						if site.variable.dep_exprs.has(expr) then break

						if dep.first.original_variable == site.variable.original_variable then
							site.variable.dep_exprs.add(expr)
						end
					end
				end
			else
				# The site is a variable write, we stop the propagation
				return
			end
		end

		block.treated = true

		# If we do not meet a variable write, continue the propagation
		for b in block.successors do propagate_dependences(phi, b)
	end
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

# Utility class for dump basic block and SSA output to dot files
class BlockDebug
	# The output file
	var file: FileWriter

	# Dump all the hierarchy of BasicBlock from `block` to the leaves
	fun dump(block: BasicBlock)
	do
		# Write the basic blocks hierarchy in output file
		file.write("digraph basic_blocks\n\{\n")
		var i = 0
		file.write(print_block(block, i))
		file.write("\n\}")

		file.close
	end

	# Print all the block recursively from `block` to the leaves
	# *`block` The root BasicBlock
	# *`i` Used for the recursion
	private fun print_block(block: BasicBlock, i: Int): String
	do
		# Precise the type and location of the begin and end of current block
		var s = "block{block.hash.to_s} [shape=record, label="+"\"\{"
		s += "block" + block.to_s.escape_to_dot
		s += "|\{" + block.first.location.file.filename.to_s + block.first.location.line_start.to_s
		s += " | " + block.first.to_s.escape_to_dot

		# Print phi-functions if any
		for phi in block.phi_functions do
			s += " | " + phi.to_s.escape_to_dot + " "
		end

		s += "}|\{" + block.last.location.file.filename.to_s + block.last.location.line_start.to_s
		s += " | " + block.last.to_s.escape_to_dot + "}}\"];"+ "\n"

		i += 1
		block.treated_debug = true

		for b in block.successors do
			# Print edges to successors
			s += "block{block.hash.to_s} -> " + " block{b.hash.to_s};\n"

			# Recursively print child blocks
			if not b.treated_debug then s += print_block(b, i)
		end

		return s
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
		ssa.propdef.object_sites.add(self)

		return self.n_expr.generate_basic_blocks(ssa, old_block)
	end
end

redef class AAsCastExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		ssa.propdef.object_sites.add(self)

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

		ssa.propdef.object_sites.add(self)

		# Recursively goes into arguments to find variables if any
		for e in self.raw_arguments do e.generate_basic_blocks(ssa, old_block)

		return self.n_expr.generate_basic_blocks(ssa, old_block)
	end
end

redef class ASendReassignFormExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		self.n_expr.generate_basic_blocks(ssa, old_block)

		ssa.propdef.object_sites.add(self)

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

		ssa.propdef.object_sites.add(self)

		return old_block
	end
end

redef class AAttrExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		ssa.propdef.object_sites.add(self)

		return self.n_expr.generate_basic_blocks(ssa, old_block)
	end
end

redef class AAttrAssignExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		ssa.propdef.object_sites.add(self)

		return self.n_expr.generate_basic_blocks(ssa, old_block)
	end
end

redef class AAttrReassignExpr
	redef fun generate_basic_blocks(ssa, old_block)
	do
		ssa.propdef.object_sites.add(self)

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
