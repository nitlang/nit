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

import breakpoint
intrude import naive_interpreter

redef class ToolContext
	# -d
	var opt_debugger_mode: OptionBool = new OptionBool("Launches the target program with the debugger attached to it", "-d")
	# -c
	var opt_debugger_autorun: OptionBool = new OptionBool("Launches the target program with the interpreter, such as when the program fails, the debugging prompt is summoned", "-c")

	redef init
	do
		super
		self.option_context.add_option(self.opt_debugger_mode)
		self.option_context.add_option(self.opt_debugger_autorun)
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

	fun run_debugger_autorun(mainmodule: MModule, arguments: Array[String])
	do
		var time0 = get_time
		self.toolcontext.info("*** START INTERPRETING ***", 1)

		var interpreter = new Debugger(self, mainmodule, arguments)
		interpreter.autocontinue = true

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

	# HashMap containing the breakpoints bound to a file
	var breakpoints = new HashMap[String, HashSet[Breakpoint]]

	# Contains the current file
	var curr_file = ""

	# Aliases hashmap (maps an alias to a variable name)
	var aliases = new HashMap[String, String]

	# Set containing all the traced variables and their related frame
	private var traces = new HashSet[TraceObject]

	# Map containing all the positions for the positions of the arguments traced
	# In a function call
	private var fun_call_arguments_positions = new HashMap[Int, TraceObject]

	# Triggers the remapping of a trace object in the local context after a function call
	var aftermath = false

	# Used to prevent the case when the body of the function called is empty
	# If it is not, then, the remapping won't be happening
	var frame_count_aftermath = 1

	# Auto continues the execution until the end or until an error is encountered
	var autocontinue = false

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

		if not self.autocontinue then
			if not n isa ABlockExpr then
				steps_fun_call(n)

				breakpoint_check(n)

				check_funcall_and_traced_args(n)

				remap(n)

				check_if_vars_are_traced(n)
			end
		end

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

	# Checks if a breakpoint is encountered, and launches the debugging prompt if true
	private fun breakpoint_check(n: AExpr)
	do
		var currFileNameSplit = self.frame.current_node.location.file.filename.to_s.split_with("/")

		self.curr_file = currFileNameSplit[currFileNameSplit.length-1]

		var breakpoint = find_breakpoint(curr_file, n.location.line_start)

		if breakpoints.keys.has(curr_file) and breakpoint != null then

			breakpoint.check_in

			if not breakpoint.is_valid
			then
				remove_breakpoint(curr_file, n.location.line_start)
			end

			n.debug("Execute stmt {n.to_s}")
			while process_debug_command(gets) do end
		end
	end

	# Check if a variable of current expression is traced
	# Then prints and/or breaks for command prompt
	private fun check_if_vars_are_traced(n: AExpr)
	do
		var identifiers_in_instruction = get_identifiers_in_current_instruction(n.location.text)

		for i in identifiers_in_instruction do
			var variable = seek_variable(i, frame)
			for j in self.traces do
				if j.is_variable_traced_in_frame(i, frame) then
					n.debug("Traced variable {i} used")
					if j.break_on_encounter then while process_debug_command(gets) do end
					break
				end
			end
		end
	end

	# Function remapping all the traced objects to match their name in the local context
	private fun remap(n: AExpr)
	do
		if self.aftermath then

			# Trace every argument variable pre-specified
			if self.frame_count_aftermath < frames.length and fun_call_arguments_positions.length > 0 then

				var ids_in_fun_def = get_identifiers_in_current_instruction(get_function_arguments(frame.mpropdef.location.text))

				for i in fun_call_arguments_positions.keys do
					self.fun_call_arguments_positions[i].add_frame_variable(frame, ids_in_fun_def[i])
				end
			end

			self.aftermath = false
		end
	end

	# If the current instruction is a function call
	# We analyse its signature and the position of traced arguments if the call
	# For future remapping when inside the function
	private fun check_funcall_and_traced_args(n: AExpr) do
		# If we have a function call, we need to see if any of the arguments is traced (including the caller)
		# if it is, next time we face an instruction, we'll trace the local version on the traced variable in the next frame
		if n isa ACallExpr then
			self.aftermath = true
			self.frame_count_aftermath = frames.length
			fun_call_arguments_positions.clear
			var fun_arguments = get_identifiers_in_current_instruction(get_function_arguments(n.location.text))

			for i in self.traces do
				for j in [0 .. fun_arguments.length - 1] do
					if i.is_variable_traced_in_frame(fun_arguments[j],frame) then
						fun_call_arguments_positions[j] = i
					end
				end
			end
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
			# Places a breakpoint on line x of file y
			else if parts_of_command[0] == "break" or parts_of_command[0] == "b"
			then
				process_place_break_fun(parts_of_command)
			# Places a temporary breakpoint on line x of file y
			else if parts_of_command[0] == "tbreak" and (parts_of_command.length == 2 or parts_of_command.length == 3)
			then
				process_place_tbreak_fun(parts_of_command)
			# Removes a breakpoint on line x of file y
			else if parts_of_command[0] == "d" or parts_of_command[0] == "delete" then
				process_remove_break_fun(parts_of_command)
			# Sets an alias for a variable
			else if parts_of_command.length == 3 and parts_of_command[1] == "as"
			then
				add_alias(parts_of_command[0], parts_of_command[2])
			# Modifies the value of a variable in the current frame
			else if parts_of_command.length >= 3 and parts_of_command[1] == "=" then
				process_mod_function(parts_of_command)
			# Traces the modifications on a variable
			else if parts_of_command.length >= 2 and parts_of_command[0] == "trace" then
				process_trace_command(parts_of_command)
			# Untraces the modifications on a variable
			else if parts_of_command.length == 2 and parts_of_command[0] == "untrace" then
				process_untrace_command(parts_of_command)
			# Lists all the commands available
			else
				list_commands
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
		else if parts_of_command[1] == "stack" then
			print self.stack_trace
		else if parts_of_command[1].has('[') and parts_of_command[1].has(']') then
			process_array_command(parts_of_command)
		else
			var instance = seek_variable(get_real_variable_name(parts_of_command[1]), frame)

			if instance != null
			then
				print_instance(instance)
			else
				print "Cannot find variable {parts_of_command[1]}"
			end
		end
	end

	# Processes the input string to know where to put a breakpoint
	fun process_place_break_fun(parts_of_command: Array[String])
	do
		var bp = get_breakpoint_from_command(parts_of_command)
		if bp != null then
			place_breakpoint(bp)
		else
			list_commands
		end
	end

	# Returns a breakpoint containing the informations stored in the command
	fun get_breakpoint_from_command(parts_of_command: Array[String]): nullable Breakpoint
	do
		if parts_of_command[1].is_numeric then
			return new Breakpoint(parts_of_command[1].to_i, curr_file)
		else if parts_of_command.length >= 3 and parts_of_command[2].is_numeric then
			return new Breakpoint(parts_of_command[2].to_i, parts_of_command[1])
		else
			return null
		end
	end

	# Processes the command of removing a breakpoint on specified line and file
	fun process_remove_break_fun(parts_of_command: Array[String])
	do
		if parts_of_command[1].is_numeric then
			remove_breakpoint(self.curr_file, parts_of_command[1].to_i)
		else if parts_of_command.length >= 3 and parts_of_command[2].is_numeric then
			remove_breakpoint(parts_of_command[1], parts_of_command[2].to_i)
		else
			list_commands
		end
	end

	# Processes an array print command
	fun process_array_command(parts_of_command: Array[String])
	do
		var index_of_first_brace = parts_of_command[1].index_of('[')
		var variable_name = get_real_variable_name(parts_of_command[1].substring(0,index_of_first_brace))
		var braces = parts_of_command[1].substring_from(index_of_first_brace)

		var indexes = remove_braces(braces)

		var index_array = new Array[Array[Int]]

		if indexes != null then
			for index in indexes do
				var temp_indexes_array = process_index(index)
				if temp_indexes_array != null then
					index_array.push(temp_indexes_array)
					#print index_array.last
				end
			end
		end

		var instance = seek_variable(variable_name, frame)

		if instance != null then
			print_nested_collection(instance, index_array, 0, variable_name, "")
		else
			print "Cannot find variable {variable_name}"
		end
	end

	# Processes the modification function to modify a variable dynamically
	#
	# Command of type variable = value
	fun process_mod_function(parts_of_command: Array[String])
	do
		parts_of_command[0] = get_real_variable_name(parts_of_command[0])
		var parts_of_variable = parts_of_command[0].split_with(".")

		if parts_of_variable.length > 1 then
			var last_part = parts_of_variable.pop
			var first_part = parts_of_command[0].substring(0,parts_of_command[0].length - last_part.length - 1)
			var papa = seek_variable(first_part, frame)

			if papa != null and papa isa MutableInstance then
				var attribute = get_attribute_in_mutable_instance(papa, last_part)

				if attribute != null then
					modify_argument_of_complex_type(papa, attribute, parts_of_command[2])
				end
			end
		else
			var target = seek_variable(parts_of_variable[0], frame)
			if target != null then
				modify_in_frame(target, parts_of_command[2])
			end
		end
	end

	# Processes the untrace variable command
	#
	# Command pattern : "untrace variable"
	fun process_untrace_command(parts_of_command: Array[String])
	do
		var variable_name = get_real_variable_name(parts_of_command[1])
		if untrace_variable(variable_name) then
			print "Untraced variable {parts_of_command[1]}"
		else
			print "{parts_of_command[1]} is not traced"
		end
	end

	# Processes the trace variable command
	#
	# Command pattern : "trace variable [break/print]"
	fun process_trace_command(parts_of_command: Array[String])
	do
		var variable_name = get_real_variable_name(parts_of_command[1])
		var breaker:Bool

		if seek_variable(variable_name, frame) == null then
			print "Cannot find a variable called {parts_of_command[1]}"
			return
		end

		if parts_of_command.length == 3 then
			if parts_of_command[2] == "break" then
				breaker = true
			else
				breaker = false
			end
		else
			breaker = false
		end

		trace_variable(variable_name, breaker)

		print "Successfully tracing {parts_of_command[1]}"
	end

	#######################################################################
	##                    Trace Management functions                     ##
	#######################################################################

	# Effectively untraces the variable called *variable_name*
	#
	# Returns true if the variable exists, false otherwise
	private fun untrace_variable(variable_name: String): Bool
	do
		var to_remove: nullable TraceObject = null
		for i in self.traces do
			if i.is_variable_traced_in_frame(variable_name, frame) then
				to_remove = i
			end
		end

		if to_remove != null then
			self.traces.remove(to_remove)
			return true
		else
			return false
		end
	end

	# Effectively traces the variable *variable_name* either in print or break mode depending on the value of breaker (break if true, print if false)
	#
	private fun trace_variable(variable_name: String, breaker: Bool)
	do
		for i in self.traces do
			if i.is_variable_traced_in_frame(variable_name, frame) then
				print "This variable is already traced"
				return
			end
		end

		var trace_object: TraceObject

		if breaker then
			trace_object = new TraceObject(true)
		else
			trace_object = new TraceObject(false)
		end

		# We trace the current variable found for the current frame
		trace_object.add_frame_variable(self.frame, variable_name)

		var position_of_variable_in_arguments = get_position_of_variable_in_arguments(frame, variable_name)

		# Start parsing the frames starting with the parent of the current one, until the highest
		# When the variable traced is declared locally, the loop stops
		for i in [1 .. frames.length-1] do

			# If the variable was reported to be an argument of the previous frame
			if position_of_variable_in_arguments != -1 then

				var local_name = get_identifiers_in_current_instruction(get_function_arguments(frames[i].current_node.location.text))[position_of_variable_in_arguments]

				position_of_variable_in_arguments = get_position_of_variable_in_arguments(frames[i], local_name)

				trace_object.add_frame_variable(frames[i], local_name)
			else
				break
			end
		end

		self.traces.add(trace_object)
	end

	# If the variable *variable_name* is an argument of the function being executed in the frame *frame*
	# The function returns its position in the arguments
	# Else, it returns -1
	private fun get_position_of_variable_in_arguments(frame: Frame, variable_name: String): Int
	do
		var identifiers = get_identifiers_in_current_instruction(get_function_arguments(frame.mpropdef.location.text))
		for i in [0 .. identifiers.length-1] do
			# If the current traced variable is an argument of the current function, we trace its parent (at least)
			if identifiers[i] == variable_name then return i
		end
		return -1
	end

	# Gets all the identifiers of an instruction (uses the rules of Nit as of Mar 05 2013)
	#
	fun get_identifiers_in_current_instruction(instruction: AbstractString): Array[String]
	do
		var result_array = new Array[String]
		var instruction_buffer = new Buffer

		var trigger_char_escape = false
		var trigger_string_escape = false
		var trigger_concat_in_string = false

		for i in instruction do
			if trigger_char_escape then
				if i == '\'' then trigger_char_escape = false
			else if trigger_string_escape then
				if i == '{' then
					trigger_concat_in_string = true
					trigger_string_escape = false
				else if i == '\"' then trigger_string_escape = false
			else
				if i.is_alphanumeric or i == '_' then
					instruction_buffer.add(i)
				else if i == '.' then
					if instruction_buffer.is_numeric or (instruction_buffer[0] >= 'A' and instruction_buffer[0] <= 'Z') then
						instruction_buffer.clear
					else
						result_array.push(instruction_buffer.to_s)
						instruction_buffer.add(i)
					end
				else if i == '\'' then
					trigger_char_escape = true
				else if i == '\"' then
					trigger_string_escape = true
				else if i == '}' then
					trigger_concat_in_string = false
					trigger_string_escape = true
				else
					if instruction_buffer.length > 0 and not instruction_buffer.is_numeric and not (instruction_buffer[0] >= 'A' and instruction_buffer[0] <= 'Z') then result_array.push(instruction_buffer.to_s)
					instruction_buffer.clear
				end
			end
		end

		if instruction_buffer.length > 0 and not instruction_buffer.is_numeric and not (instruction_buffer[0] >= 'A' and instruction_buffer[0] <= 'Z') then result_array.push(instruction_buffer.to_s)

		return result_array
	end

	# Takes a function call or declaration and strips all but the arguments
	#
	fun get_function_arguments(function: AbstractString): String
	do
		var buf = new Buffer
		var trigger_copy = false

		for i in function do
			if i == ')' then break
			if trigger_copy then buf.add(i)
			if i == '(' then trigger_copy = true
		end

		return buf.to_s
	end

	#######################################################################
	##                    Alias management functions                     ##
	#######################################################################

	# Adds a new alias to the tables
	fun add_alias(var_represented: String, alias: String)
	do
		self.aliases[alias] = var_represented
	end

	# Gets the real name of a variable hidden by an alias
	fun get_variable_name_by_alias(alias: String): nullable String
	do
		if self.aliases.keys.has(alias) then
			return self.aliases[alias]
		end

		return null
	end

	# Gets the variable named by name, whether it is an alias or not
	fun get_real_variable_name(name: String): String
	do
		var explode_string = name.split_with(".")
		var final_string = new Buffer
		for i in explode_string do
			var alias_resolved = get_variable_name_by_alias(i)
			if alias_resolved != null then
				final_string.append(get_real_variable_name(alias_resolved))
			else
				final_string.append(i)
			end
			final_string.append(".")
		end

		return final_string.substring(0,final_string.length-1).to_s
	end

	#######################################################################
	##                         Print functions                           ##
	#######################################################################

	# Prints an object instance and its attributes if it has some
	#
	# If it is a primitive type, its value is directly printed
	fun print_instance(instance: Instance)
	do
		print "Printing innards of a variable"

		if instance isa MutableInstance then
			var attributes = instance.attributes
			print "Object : {instance}"

			for current_attribute in attributes.keys do
				print "Attribute : {current_attribute.to_s} \nValeur : {attributes[current_attribute].to_s}"
			end
		else
			print "Found variable {instance}"
		end

		print "Stopping printing innards of a variable"
	end

	# Prints the attributes demanded in a SequenceRead
	# Used recursively to print nested collections
	fun print_nested_collection(instance: Instance, indexes: Array[Array[Int]], depth: Int, variable_name: String, depth_string: String)
	do
		var collection: nullable SequenceRead[Object] = null
		var real_collection_length: nullable Int = null

		if instance isa MutableInstance then
			real_collection_length = get_collection_instance_real_length(instance)
			collection = get_primary_collection(instance)
		end

		if collection != null and real_collection_length != null then
			for i in indexes[depth] do
				if i >= 0 and i < real_collection_length then
					if depth == indexes.length-1 then
						print "{variable_name}{depth_string}[{i}] = {collection[i]}"
					else
						var item_i = collection[i]

						if item_i isa MutableInstance then
							print_nested_collection(item_i, indexes, depth+1, variable_name, depth_string+"[{i}]")
						else
							print "The item at {variable_name}{depth_string}[{i}] is not a collection"
							print item_i
						end
					end
				else
					print "Out of bounds exception : i = {i} and collection_length = {real_collection_length.to_s}"

					if i < 0 then
						continue
					else if i >= real_collection_length then
						break
					end
				end
			end
		else
			if collection == null then
				print "Cannot find {variable_name}{depth_string}"
			else if real_collection_length != null then
				print "Cannot find attribute length in {instance}"
			else
				print "Unknown error."
				abort
			end
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

	#######################################################################
	##                     Array exploring functions                     ##
	#######################################################################

	# Gets the length of a collection
	# Used by the debugger, else if we call Collection.length, it returns the capacity instead
	fun get_collection_instance_real_length(collection: MutableInstance): nullable Int
	do
		var collection_length_attribute = get_attribute_in_mutable_instance(collection, "length")

		var real_collection_length: nullable Int = null

		if collection_length_attribute != null then
			var primitive_length_instance = collection.attributes[collection_length_attribute]
			if primitive_length_instance isa PrimitiveInstance[Int] then
				return primitive_length_instance.val
			end
		end

		return null
	end

	# Processes the indexes of a print array call
	# Returns an array containing all the indexes demanded
	fun process_index(index_string: String): nullable Array[Int]
	do
		var from_end_index = index_string.index_of('.')
		var to_start_index = index_string.last_index_of('.')

		if from_end_index != -1 and to_start_index != -1 then
			var index_from_string = index_string.substring(0,from_end_index)
			var index_to_string = index_string.substring_from(to_start_index+1)

			if index_from_string.is_numeric and index_to_string.is_numeric then
				var result_array = new Array[Int]

				var index_from = index_from_string.to_i
				var index_to = index_to_string.to_i

				for i in [index_from..index_to] do
					result_array.push(i)
				end

				return result_array
			end
		else
			if index_string.is_numeric
			then
				var result_array = new Array[Int]

				result_array.push(index_string.to_i)

				return result_array
			else
				return null
			end
		end

		return null
	end

	# Gets a collection in a MutableInstance
	fun get_primary_collection(container: MutableInstance): nullable SequenceRead[Object]
	do
		var items_of_array = get_attribute_in_mutable_instance(container, "items")
		if items_of_array != null then
			var array = container.attributes[items_of_array]

			if array isa PrimitiveInstance[Object] then
				var sequenceRead_final = array.val
				if sequenceRead_final isa SequenceRead[Object] then
					return sequenceRead_final
				end
			end
		end

		return null
	end

	# Removes the braces '[' ']' in a print array command
	# Returns an array containing their content
	fun remove_braces(braces: String): nullable Array[String]
	do
		var buffer = new Buffer

		var result_array = new Array[String]

		var number_of_opening_brackets = 0
		var number_of_closing_brackets = 0

		var last_was_opening_bracket = false

		for i in braces do
			if i == '[' then
				if last_was_opening_bracket then
					return null
				end

				number_of_opening_brackets += 1
				last_was_opening_bracket = true
			else if i == ']' then
				if not last_was_opening_bracket then
					return null
				end

				result_array.push(buffer.to_s)
				buffer.clear
				number_of_closing_brackets += 1
				last_was_opening_bracket = false
			else if i.is_numeric or i == '.' then
				buffer.append(i.to_s)
			else if not i == ' ' then
				return null
			end
		end

		if number_of_opening_brackets != number_of_closing_brackets then
			return null
		end

		return result_array
	end

	#######################################################################
	##                   Breakpoint placing functions                    ##
	#######################################################################

	# Places a breakpoint on line 'line_to_break' for file 'file_to_break'
	fun place_breakpoint(breakpoint: Breakpoint)
	do
		if not self.breakpoints.keys.has(breakpoint.file) then
			self.breakpoints[breakpoint.file] = new HashSet[Breakpoint]
		end
		if find_breakpoint(breakpoint.file, breakpoint.line) == null then
			self.breakpoints[breakpoint.file].add(breakpoint)
			print "Breakpoint added on line {breakpoint.line} for file {breakpoint.file}"
		else
			print "Breakpoint already present on line {breakpoint.line} for file {breakpoint.file}"
		end
	end

	#Places a breakpoint that will trigger once and be destroyed afterwards
	fun process_place_tbreak_fun(parts_of_command: Array[String])
	do
		var bp = get_breakpoint_from_command(parts_of_command)
		if bp != null
		then
			bp.set_max_breaks(1)
			place_breakpoint(bp)
		else
			list_commands
		end
	end

	#######################################################################
	##                  Breakpoint removing functions                    ##
	#######################################################################

	# Removes a breakpoint on line 'line_to_break' for file 'file_to_break'
	fun remove_breakpoint(file_to_break: String, line_to_break: Int)
	do
		if self.breakpoints.keys.has(file_to_break) then
			var bp = find_breakpoint(file_to_break, line_to_break)

			if bp != null then
				self.breakpoints[file_to_break].remove(bp)
				print "Breakpoint removed on line {line_to_break} for file {file_to_break}"
				return
			end
		end

		print "No breakpoint existing on line {line_to_break} for file {file_to_break}"
	end

	#######################################################################
	##                  Breakpoint searching functions                   ##
	#######################################################################

	# Finds a breakpoint for 'file' and 'line' in the class HashMap
	fun find_breakpoint(file: String, line: Int): nullable Breakpoint
	do
		if self.breakpoints.keys.has(file)
		then
			for i in self.breakpoints[file]
			do
				if i.line == line
				then
					return i
				end
			end
		end

		return null
	end

	#######################################################################
	##                  Runtime modification functions                   ##
	#######################################################################

	# Modifies the value of a variable contained in a frame
	fun modify_in_frame(variable: Instance, value: String)
	do
		var new_variable = get_variable_of_type_with_value(variable.mtype.to_s, value)
		if new_variable != null
		then
			var keys = frame.map.keys
			for key in keys
			do
				if frame.map[key] == variable
				then
					frame.map[key] = new_variable
				end
			end
		end
	end

	# Modifies the value of a variable contained in a MutableInstance
	fun modify_argument_of_complex_type(papa: MutableInstance, attribute: MAttribute, value: String)
	do
		var final_variable = papa.attributes[attribute]
		var type_of_variable = final_variable.mtype.to_s
		var new_variable = get_variable_of_type_with_value(type_of_variable, value)
		if new_variable != null
		then
			papa.attributes[attribute] = new_variable
		end
	end

	#######################################################################
	##                   Variable generator functions                    ##
	#######################################################################

	# Returns a new variable of the type 'type_of_variable' with a value of 'value'
	fun get_variable_of_type_with_value(type_of_variable: String, value: String): nullable Instance
	do
		if type_of_variable == "Int" then
			return get_int(value)
		else if type_of_variable == "Float" then
			return get_float(value)
		else if type_of_variable == "Bool" then
			return get_bool(value)
		else if type_of_variable == "Char" then
			return get_char(value)
		end

		return null
	end

	# Returns a new int instance with value 'value'
	fun get_int(value: String): nullable Instance
	do
		if value.is_numeric then
			return int_instance(value.to_i)
		else
			return null
		end
	end

	# Returns a new float instance with value 'value'
	fun get_float(value:String): nullable Instance
	do
		if value.is_numeric then
			return float_instance(value.to_f)
		else
			return null
		end
	end

	# Returns a new char instance with value 'value'
	fun get_char(value: String): nullable Instance
	do
		if value.length >= 1 then
			return char_instance(value[0])
		else
			return null
		end
	end

	# Returns a new bool instance with value 'value'
	fun get_bool(value: String): nullable Instance
	do
		if value.to_lower == "true" then
			return self.true_instance
		else if value.to_lower == "false" then
			return self.false_instance
		else
			print "Invalid value, a boolean must be set at \"true\" or \"false\""
			return null
		end
	end

	#######################################################################
	##                     Command listing function                      ##
	#######################################################################

	# Lists the commands available when using the debugger
	fun list_commands
	do
		print "\nCommand not recognized\n"
		print "Commands accepted : \n"
		print "[break/b] line : Adds a breakpoint on line *line_nb* of the current file\n"
		print "[break/b] file_name line_nb : Adds a breakpoint on line *line_nb* of file *file_name* \n"
		print "[p/print] variable : [p/print] * shows the status of all the variables\n"
		print "[p/print] variable[i] : Prints the value of the variable contained at position *i* in SequenceRead collection *variable*\n"
		print "[p/print] variable[i..j]: Prints the value of all the variables contained between positions *i* and *j* in SequenceRead collection *variable*\n"
		print "[p/print] stack: Prints a stack trace at current instruction\n"
		print "Note : The arrays can be multi-dimensional (Ex : variable[i..j][k] will print all the values at position *k* of all the SequenceRead collections contained between positions *i* and *j* in SequenceRead collection *variable*)\n"
		print "s : steps in on the current function\n"
		print "n : steps-over the current instruction\n"
		print "finish : steps out of the current function\n"
		print "variable as alias : Adds an alias called *alias* for the variable *variable*"
		print "An alias can reference another alias\n"
		print "variable = value : Sets the value of *variable* to *value*\n"
		print "[d/delete] line_nb : Removes a breakpoint on line *line_nb* of the current file \n"
		print "[d/delete] file_name line_nb : Removes a breakpoint on line *line_nb* of file *file_name* \n"
		print "trace variable_name [break/print] : Traces the uses of the variable you chose to trace by printing the statement it appears in or by breaking on each use."
		print "untrace variable_name : Removes the trace on the variable you chose to trace earlier in the program"
		print "kill : kills the current program (Exits with an error and stack trace)\n"
	end

end

# Traces the modifications of an object linked to a certain frame
private class TraceObject

	# Map of the local names bound to a frame
	var trace_map: HashMap[Frame, String]
	# Decides if breaking or printing statement when the variable is encountered
	var break_on_encounter: Bool

	init(break_on_encounter: Bool)
	do
		trace_map = new HashMap[Frame, String]
		self.break_on_encounter = break_on_encounter
	end

	# Adds the local alias for a variable and the frame bound to it
	fun add_frame_variable(frame: Frame, variable_name: String)
	do
		self.trace_map[frame] = variable_name
	end

	# Checks if the prompted variable is traced in the specified frame
	fun is_variable_traced_in_frame(variable_name: String, frame: Frame): Bool
	do
		if self.trace_map.has_key(frame) then
			if self.trace_map[frame] == variable_name then
				return true
			end
		end

		return false
	end

end

redef class ANode

	# Breaks automatically when encountering an error
	# Permits the injunction of commands before crashing
	redef private fun fatal(v: NaiveInterpreter, message: String)
	do
		if v isa Debugger then
			print "An error was encountered, the program will stop now."
			self.debug(message)
			while v.process_debug_command(gets) do end
		end

		super
	end
end
