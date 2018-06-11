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
		print "{object_inspector.inspect_object(instance,new OrderedTree[ObjectInspected],new ObjectInspected(instance,variable.name),new List[Instance])}"
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
			if user_entry == "" or user_entry == "next" then
				self.step_over
			else if user_entry == "step" then
				self.step_into
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
