# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2013 Lucas Bajolet <lucas.bajolet@gmail.com>
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

# Debugging of a nit program using the NaiveInterpreter
module debugger

intrude import naive_interpreter

redef class ToolContext
	# -d
	var opt_debugger_mode: OptionBool = new OptionBool("Launches the target program with the debugger attached to it", "-d")

	redef init
	do
		super
		self.option_context.add_option(self.opt_debugger_mode)
	end
end

redef class ModelBuilder
	# Execute the program from the entry point (Sys::main) of the `mainmodule'
	# `arguments' are the command-line arguments in order
	# REQUIRE that:
	#   1. the AST is fully loaded.
	#   2. the model is fully built.
	#   3. the instructions are fully analysed.
	fun run_debugger(mainmodule: MModule, arguments: Array[String])
	do
		var time0 = get_time
		self.toolcontext.info("*** START INTERPRETING ***", 1)

		var interpreter = new Debugger(self, mainmodule, arguments)

		init_naive_interpreter(interpreter, mainmodule)

		var time1 = get_time
		self.toolcontext.info("*** END INTERPRETING: {time1-time0} ***", 2)
	end
end

# The class extending NaiveInterpreter by adding debugging methods
class Debugger
	super NaiveInterpreter

	# Keeps the frame count in memory to find when to stop
	# and launch the command prompt after a step out call
	var step_stack_count = 1

	# Triggers a step over an instruction in a nit program
	var stop_after_step_over_trigger = true

	# Triggers a step out of an instruction
	var stop_after_step_out_trigger= false

	# Triggers a step in a instruction (enters a function
	# if the instruction is a function call)
	var step_in_trigger = false

	#######################################################################
	##                  Execution of statement function                  ##
	#######################################################################

	# Main loop, every call to a debug command is done here
	redef fun stmt(n: nullable AExpr)
	do
		if n == null then return

		var frame = self.frame
		var old = frame.current_node
		frame.current_node = n

		steps_fun_call(n)

		n.stmt(self)
		frame.current_node = old
	end

	# Encpasulates the behaviour for step over/out
	private fun steps_fun_call(n: AExpr)
	do
		if self.stop_after_step_over_trigger then
			if self.frames.length <= self.step_stack_count then
				n.debug("Execute stmt {n.to_s}")
				while process_debug_command(gets) do end
			end
		else if self.stop_after_step_out_trigger then
			if frames.length < self.step_stack_count then
				n.debug("Execute stmt {n.to_s}")
				while process_debug_command(gets) do end
			end
		else if step_in_trigger then
			n.debug("Execute stmt {n.to_s}")
			while process_debug_command(gets) do end
		end
	end

	#######################################################################
	##                   Processing commands functions                   ##
	#######################################################################

	# Takes a user command as a parameter
	#
	# Returns a boolean value, representing whether or not to
	# continue reading commands from the console input
	fun process_debug_command(command:String): Bool
	do
		# For lisibility
		print "\n"

		# Kills the current program
		if command == "kill" then
			abort
		# Step-out command
		else if command == "finish"
		then
			return step_out
		# Step-in command
		else if command == "s"
		then
			return step_in
		# Step-over command
		else if command == "n" then
			return step_over
		# Continues execution until the end
		else if command == "c" then
			return continue_exec
		else
			var parts_of_command = command.split_with(' ')
			# Shows the value of a variable in the current frame
			if parts_of_command[0] == "p" or parts_of_command[0] == "print" then
				print_command(parts_of_command)
			end
		end
		return true
	end

	#######################################################################
	##               Processing specific command functions               ##
	#######################################################################

	# Sets the flags to step-over an instruction in the current file
	fun step_over: Bool
	do
		self.step_stack_count = frames.length
		self.stop_after_step_over_trigger = true
		self.stop_after_step_out_trigger = false
		self.step_in_trigger = false
		return false
	end

	#Sets the flags to step-out of a function
	fun step_out: Bool
	do
		self.stop_after_step_over_trigger = false
		self.stop_after_step_out_trigger = true
		self.step_in_trigger = false
		self.step_stack_count = frames.length
		return false
	end

	# Sets the flags to step-in an instruction
	fun step_in: Bool
	do
		self.step_in_trigger = true
		self.stop_after_step_over_trigger = false
		self.stop_after_step_out_trigger = false
		return false
	end

	# Sets the flags to continue execution
	fun continue_exec: Bool
	do
		self.stop_after_step_over_trigger = false
		self.stop_after_step_out_trigger = false
		self.step_in_trigger = false
		return false
	end

	# Prints the demanded variable in the command
	#
	# The name of the variable in in position 1 of the array 'parts_of_command'
	fun print_command(parts_of_command: Array[String])
	do
		if parts_of_command[1] == "*" then
			var map_of_instances = frame.map

			var keys = map_of_instances.iterator

			print "Variables collection : \n"

			for instance in map_of_instances.keys do
				print "Variable {instance.to_s}, Instance {map_of_instances[instance].to_s}"
			end

			print "\nEnd of current instruction \n"
		else
			var instance = seek_variable(parts_of_command[1], frame)

			if instance != null
			then
				print_instance(instance)
			end
		end
	end

	#######################################################################
	##                         Print functions                           ##
	#######################################################################

	# Prints an object instance and its attributes if it has some
	#
	# If it is a primitive type, its value is directly printed
	fun print_instance(instance: Instance)
	do
		if instance isa MutableInstance then
			var attributes = instance.attributes
			print "Object : {instance}"

			for current_attribute in attributes.keys do
				print "Attribute : {current_attribute.to_s} \nValeur : {attributes[current_attribute].to_s}"
			end
		else
			print "Found variable {instance}"
		end
	end

	#######################################################################
	##                  Variable Exploration functions                   ##
	#######################################################################

	# Seeks a variable from the current frame called 'variable_path', can introspect complex objects using function get_variable_in_mutable_instance
	private fun seek_variable(variable_path: String, frame: Frame): nullable Instance
	do
		var full_variable = variable_path.split_with(".")

		var full_variable_iterator = full_variable.iterator

		var first_instance = get_variable_in_frame(full_variable_iterator.item, frame)

		if first_instance == null then	return null

		if full_variable.length <= 1 then return first_instance

		full_variable_iterator.next

		if not (first_instance isa MutableInstance and full_variable_iterator.is_ok) then return null

		return get_variable_in_mutable_instance(first_instance, full_variable_iterator)
	end

	# Gets a variable 'variable_name' contained in the frame 'frame'
	private fun get_variable_in_frame(variable_name: String, frame: Frame): nullable Instance
	do
		if variable_name == "self" then
			if frame.arguments.length >= 1 then return frame.arguments.first
		end

		var map_of_instances = frame.map

		for key in map_of_instances.keys do
			if key.to_s == variable_name then
				return map_of_instances[key]
			end
		end

		return null
	end

	# Gets an attribute 'attribute_name' contained in variable 'variable'
	fun get_attribute_in_mutable_instance(variable: MutableInstance, attribute_name: String): nullable MAttribute
	do
		var map_of_attributes = variable.attributes

		for key in map_of_attributes.keys do
			if key.to_s.substring_from(1) == attribute_name then
				return key
			end
		end

		return null
	end

	# Recursive function, returns the variable described by 'total_chain'
	fun get_variable_in_mutable_instance(variable: MutableInstance, iterator: Iterator[String]): nullable Instance
	do
		var attribute = get_attribute_in_mutable_instance(variable, iterator.item)

		if attribute == null then return null

		iterator.next

		if iterator.is_ok then
			var new_variable = variable.attributes[attribute]
			if new_variable isa MutableInstance then
				return get_variable_in_mutable_instance(new_variable, iterator)
			else
				return null
			end
		else
			return variable.attributes[attribute]
		end
	end

end
