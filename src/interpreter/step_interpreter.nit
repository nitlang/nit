# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Interpretation of a Nit program directly on the AST
module step_interpreter

intrude import naive_interpreter
import ordered_tree
import highlight

# The visitor that interprets the Nit Program by walking on the AST
redef class NaiveInterpreter

	# The deep of the frames
	# This information is stored to check if the step-into mode is returned to the call method
	var deep_old_frame = 0

	# The old line number
	# This information is stored to check if the instruction have change line
	var old_line_number = 0

	# The object provide the inspector object method
	var object_inspector = new ObjectInspector

	# This flag is used to launch setp by step interpreter
	var debug_flag = false

	private var user_entry = ""

	# Print the commands to execute step-by-step execution
	fun print_instruction_debug do
		print "────────────────────────────────────────────────────────────────────"
		print "∣You enter in the step-by-step mode"
		print "∣Enter " + "'step'".yellow  + " to do a step-into"
		print "∣Press " + "'enter'".yellow  + " to do a step-over"
		print "∣Enter " + "'backtrace full'".yellow  + " to print the locals variables"
		print "∣Enter " + "'watch'".yellow  + " to print the watch list variables"
		print "∣Enter " + "'continue'".yellow  + " to execute the code until the next breakpoint "
		print "∣Enter something else to exit the step-by-step mode"
		print "────────────────────────────────────────────────────────────────────"
	end

	# Return the colored line of the current node
	fun get_color_line: String
	do
		var highlight = new AnsiHighlightVisitor
		var node = current_node
		if node != null then
			highlight.include_whole_lines = true
			highlight.first_line = node.hot_location.line_start
			highlight.last_line = node.hot_location.line_start
			highlight.highlight_node(node)
			return "{node.hot_location.line_start}|{highlight.result.write_to_string.replace("\t","")}"
		end
		return ""
	end

	# Method used when intercepting the method inspect_o
	fun inspect_object(instance: Instance) do
		object_inspector.add_object_watch_list(instance)
		object_inspector.mark_watch_list(instance,read_instance(instance),self)
		init_debug_mode
		deep_old_frame = frames.length
		self.debug_flag = true
	end

	# Init step-by-step mode
	fun init_debug_mode do
		if deep_old_frame == 0 then
			deep_old_frame = frames.length
			print_instruction_debug
		end
	end

	# Main function of the step-by-step execution this method is called after each instruction
	fun step_execution(recv : nullable Instance) do
		if self.debug_flag then
			init_debug_mode
			if recv != null then
				self.object_inspector.mark_watch_list(recv,read_instance(recv),self)
			end
			if user_entry == "" or user_entry == "next" then
				self.step_over
			else if user_entry == "step" then
				self.step_into
			else if user_entry == "backtrace full" then
				self.object_inspector.print_all_frame_value(frame.as(InterpreterFrame))
				self.user_entry = stdin.read_line
				self.step_execution(recv)
			else if user_entry == "watch" then
				self.object_inspector.print_pin_list_value
				self.user_entry = stdin.read_line
				self.step_execution(recv)
			else if user_entry == "continue" then
				self.user_entry = ""
				self.debug_flag = false
			else
				self.debug_flag = false
			end
		end
	end

	fun step_into do
		print "{self.get_color_line}"
		deep_old_frame = frames.length
		user_entry = stdin.read_line
		old_line_number = frame.current_node.location.line_start
	end

	fun step_over do
		# Check if the new instruction is in the same method or the new instruction is in the appellant method
		# Check the line to execute all instruction line
		if frames.length <= deep_old_frame and old_line_number != frame.current_node.location.line_start then
			self.step_into
		end
	end

	redef fun expr(n: AExpr): nullable Instance
	do
		var i = super
		if i != null then step_execution(i)
		return i
	end

	redef fun stmt(n)
	do
		if n != null then
			step_execution
			frame.current_node = n
		end
		super
	end
end
# Represents the inspected object with the relationship between the instance and the name of the object (if it exists)
class ObjectInspected
	# The instance of the inspected object.
	var instance : Instance
	# The name of the inspected object (if does not exist = null)
	var name : nullable String

	redef fun to_s do
		var return_value = "Class type '{instance.mtype.name.green}'"
		var n = name
		if n != null then
			if instance isa PrimitiveInstance[Object] and not instance isa PrimitiveInstance[Array[Object]] then
				return_value += " : Name '{n}' : Value = {instance.val.to_s.purple}"
			else
				return_value += " : Name '{n}'"
			end
		end
		return return_value
	end
end

class ObjectInspector

	# This HashMap is used to store the inspected objects
	var object_watch_list = new HashMap[Instance,OrderedTree[ObjectInspected]]

	# This HashMap is used to store the inspected variable
	var variable_watch_list = new HashMap[Variable,OrderedTree[ObjectInspected]]

	# This list contains all the instances of the same line
	var mark_list = new Array[Object]

	fun print_inspected_element(tree : OrderedTree[ObjectInspected]) do
		print "────────────────────────────────────────────────────────────────────"
		tree.write_to(stdout)
		print "────────────────────────────────────────────────────────────────────"
	end

	# Display all local frames values
	fun print_all_frame_value(frame : InterpreterFrame) do
		for variable, instance in frame.map do
			var tree = inspect_object(instance,new OrderedTree[ObjectInspected],new ObjectInspected(instance,variable.name),new List[Instance])
			print_inspected_element(tree)
		end
	end

	# Display the pin values
	fun print_pin_list_value do
		for instance , tree in object_watch_list do
			print_inspected_element(tree)
		end
		for instance , tree in variable_watch_list do
			print_inspected_element(tree)
		end
	end

	# Method to add an instance in the object_watch_list
	fun add_object_watch_list(instance: Instance) do
		object_watch_list[instance] = inspect_object(instance,new OrderedTree[ObjectInspected],new ObjectInspected(instance,""),new List[Instance])
	end

	# Method called for each new instance visited to indicate which may have been modified
	fun mark_watch_list(instance: Instance, variable : nullable Variable,v : NaiveInterpreter) do
		if not instance.mtype isa MNullType then
			check_refrech(v)
			if not mark_list.has(variable) and variable != null then
				mark_list.add(variable)
			else if not mark_list.has(instance) and variable == null then
				mark_list.add(instance)
			end
		end
	end

	# Method called to verify if the line have changed
	fun check_refrech(v: NaiveInterpreter)do
		if v.frames.length <= v.deep_old_frame and v.old_line_number != v.frame.current_node.location.line_start then
			refrech_object_watch_list(v)
		end
	end

	# Update the watchs list (instance and variable)
	fun refrech_object_watch_list(interpreter : NaiveInterpreter) do
		for item in mark_list do
			if item isa Instance then
				var variable = interpreter.read_instance(item)
				refrech_instance_watch_list(variable,item)
			else if item isa Variable then
				var instance = interpreter.read_null_variable(item)
				refrech_variable_watch_list(item,instance)
			end
		end
		mark_list.clear
	end

	# Update the instance watch list
	fun refrech_instance_watch_list(variable : nullable Variable , instance : Instance) do
		if variable != null then
			refrech_variable_watch_list(variable,instance)
		else if object_watch_list.has_key(instance) then
			object_watch_list[instance].roots.first.name = "Return value"
			print_inspected_element(object_watch_list[instance])
			self.object_watch_list.keys.remove(instance)
		end
	end

	# Update the variable watch list
	fun refrech_variable_watch_list(variable : Variable , instance : nullable Instance) do
		if variable_watch_list.has_key(variable) and instance != null then
			var update = inspect_object(instance,new OrderedTree[ObjectInspected],new ObjectInspected(instance,variable.name),new List[Instance])
			if self.variable_watch_list[variable].to_s != update.to_s then
				self.variable_watch_list[variable] = update
				print_inspected_element(update)
			end
		else if object_watch_list.has_key(instance) then
			object_watch_list[instance].roots.first.name = variable.name
			variable_watch_list[variable] = object_watch_list[instance]
			print_inspected_element(object_watch_list[instance])
			self.object_watch_list.keys.remove(instance)
		end
	end

	# Execute the object inspection.
	# Return a OrderedTree[ObjectInspected] that represents the hierarchy of the inspected object
	fun inspect_object(recv: Instance, tree : OrderedTree[ObjectInspected], old : nullable ObjectInspected, visited_instance : List[Instance]):OrderedTree[ObjectInspected] do
		# check if the instance has already visited
		if not visited_instance.has(recv) then
			visited_instance.add(recv)
			# check Instance type
			if recv isa PrimitiveInstance[Object] then
				# check if the instance visited is the first Instance
				if visited_instance.length == 1 then
					tree.add(null,new ObjectInspected(recv,old.name))
				else
					# add an ObjectInspected leaf to the previous node
					tree.add(old,new ObjectInspected(recv,old.name))
				end
			else if recv isa MutableInstance then
				# unstack attributes list
				for  mattribute, instance in recv.attributes do
					# create new Object with the mattribute and the associated instance
					var debug = new ObjectInspected(instance,mattribute.name)
					# add an ObjectInspected leaf to the previous node
					tree.add(old,debug)
					# check if the type of the instance is a primitive type
					if instance isa PrimitiveInstance[Object] then
						# this check is for the primitive type Array
						if instance isa PrimitiveInstance[Array[Object]] then
							# get array values and unstack this to re execute the inspection method
							for ins in instance.val do
								# check the instance type
								if ins isa MutableInstance then
									old = new ObjectInspected(ins,null)
									tree.add(debug,old)
									tree = inspect_object(ins,tree,old,visited_instance)
								else
									tree = inspect_object(ins.as(Instance),tree,debug,visited_instance)
								end
							end
						end
					else
						# execute recursively inspection method
						tree = inspect_object(instance,tree,debug,visited_instance)
					end
				end
			end
		end
		return tree
	end
end

redef class AMethPropdef
	redef fun intern_call(v: NaiveInterpreter, mpropdef: MMethodDef, args: Array[Instance]): nullable Instance
	do
		var pname = mpropdef.mproperty.name
		if pname == "inspect_o" then
			var recv = args.first
			v.inspect_object(recv)
			return null
		end
		return super
	end
end
