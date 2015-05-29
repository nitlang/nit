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

# Handle all numbering operations related to local variables in the Nit virtual machine
module variables_numbering

import virtual_machine

redef class VirtualMachine

	# The frames of the VirtualMachine are specialized
	redef type FRAME: VmFrame

	# Number the variables in `n`.
	# Do nothing if `n` is null
	fun numbering(n: nullable AExpr, position: Int): Int
	do
		if n == null then return position

		var pos = n.numbering(self, position)
		return pos
	end

	# Redef to add the numbering of variables and arguments
	redef fun new_frame(node, mpropdef, args)
	do
		var f = new VmFrame(node, mpropdef, args)

		# If this Frame is for a method or an attribute block then number variables into the body of the method
		if node isa APropdef then
			# Compile the code (number its local variables)
			if not node.is_compiled then node.compile(self)

			# Create an empty environment
			f.variables = new Array[Instance].filled_with(initialization_value, node.environment_size)
		end

		# Putting self at the beginning of the environment
		f.variables[0] = args[0]
		return f
	end

	# Read a `Variable` from a frame by using its position
	redef fun read_variable(v: Variable): Instance
	do
		return frame.variables[v.position]
	end

	# Assign the value of the `Variable` in an environment
	redef fun write_variable(v: Variable, value: Instance)
	do
		frame.variables[v.position] = value
	end
end

redef class Variable
	# The position in the environment
	var position: Int is writable
end

# Implementation of a Frame with numbered variables
class VmFrame
	super Frame

	# Contains the value of Variables (which are numbered)
	var variables: Array[Instance] = new Array[Instance]
end

redef class AExpr
	# Give a position to each variable declared in the node.
	# NOTE: Do not call this method directly, but use `v.numbering`
	# This method is here to be implemented by subclasses.
	# *`v` The current instance of the virtual machine
	# *`position` The first available position in the environment a variable can have
	# Return the next available position a variable can have
	public fun numbering(v: VirtualMachine, position: Int): Int
	do
		return position
	end
end

redef class APropdef
	# Indicite if this propdef was compile
	var is_compiled: Bool = false

	# Indicate if the variables numbering has been done
	private var is_numbering: Bool = false

	# The size of the environment to create to call this method
	private var environment_size: Int = 0

	# Compile this propdef
	# *`vm` The running instance of `VirtualMachine`
	fun compile(vm: VirtualMachine)
	do
		# Number the variables
		if not is_numbering then numbering_variables(vm)

		is_compiled = true
	end

	# Numbering the variable inside the propdef
	fun numbering_variables(vm: VirtualMachine) is abstract
end

redef class AMethPropdef
	# Assign a position in the environment to each local variable
	# *`vm` The current VirtualMachine
	redef fun numbering_variables(vm: VirtualMachine)
	do
		# The position in the environment
		var position = 0

		# The `self` variable has the first position
		if self.selfvariable != null then
			self.selfvariable.position = position
			position += 1
		end

		# Number the parameters
		for i in [0..mpropdef.msignature.arity[ do
			var variable = self.n_signature.n_params[i].variable
			variable.as(not null).position = position
			position += 1
		end

		# Recursively go into the AST nodes to number all local variables
		if n_block != null then
			position = vm.numbering(self.n_block, position)
		end

		is_numbering = true

		# The size of the environment to create to execute a call to this method
		environment_size = position
	end
end

redef class AAttrPropdef
	# Assign a position in the environment to each local variable
	# *`vm` The current VirtualMachine
	redef fun numbering_variables(vm: VirtualMachine)
	do
		# The position in the environment
		var position = 0

		# The `self` variable has the first position
		if self.selfvariable != null then
			self.selfvariable.position = position
			position += 1
		end

		# Recursively go into the AST nodes to number all local variables
		if n_block != null then
			position = vm.numbering(self.n_block, position)
		end

		is_numbering = true

		# The size of the environment to create to execute a call to this method
		environment_size = position
	end
end

redef class AVardeclExpr
	redef fun numbering(v, position)
	do
		# Attribute a position to this variable
		self.variable.as(not null).position = position
		position += 1

		# Recursively continue to numbering the variables
		position = v.numbering(self.n_expr, position)

		# `position` is the next available position in the environment
		return position
	end
end

redef class ABlockExpr
	redef fun numbering(v, position)
	do
		for e in self.n_expr do
			position = v.numbering(e, position)
		end
		return position
	end
end

redef class AIfExpr
	redef fun numbering(v, position)
	do
		# Attribute numbers separetely for the two branches
		var pos = v.numbering(self.n_then, position)
		var pos1 = v.numbering(self.n_else, position)

		if pos > pos1 then
			return pos
		else
			return pos1
		end
	end
end

redef class AIfexprExpr
	redef fun numbering(v, position)
	do
		# Attribute numbers separetely for the two branches
		var pos = v.numbering(self.n_then, position)
		var pos1 = v.numbering(self.n_else, position)

		if pos > pos1 then
			return pos
		else
			return pos1
		end
	end
end

redef class ADoExpr
	redef fun numbering(v, position)
	do
		return v.numbering(self.n_block, position)
	end
end

redef class AWhileExpr
	redef fun numbering(v, position)
	do
		return v.numbering(self.n_block, position)
	end
end

redef class ALoopExpr
	redef fun numbering(v, position)
	do
		return v.numbering(self.n_block, position)
	end
end

redef class AForExpr
	redef fun numbering(v, position)
	do
		# Give a position to each variable declared in the header of the for
		if self.variables.length == 1 then
			self.variables.first.position = position
			self.variables[0].position = position
			position += 1
		else if self.variables.length == 2 then
			self.variables[0].position = position
			position += 1
			self.variables[1].position = position
			position += 1
		end
		return v.numbering(self.n_block, position)
	end
end

redef class AArrayExpr
	redef fun numbering(v, position)
	do
		for nexpr in self.n_exprs do
			position = v.numbering(nexpr, position)
		end
		return position
	end
end
