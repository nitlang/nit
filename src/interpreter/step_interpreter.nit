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
