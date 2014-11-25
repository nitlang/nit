# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Nodes for classes.
module model::class_compound

import graph
import member
import type_entity

# A class.
class ClassCompound
	super Compound

	# The corresponding type.
	#
	# In the case of a generic class, defines bounds for type parameters.
	var class_type: ClassType is noinit

	# The definition.
	var class_def: ClassDef is noinit

	init do
		super
		class_type = new ClassType(graph)
		class_type.class_compound = self
		class_def = new ClassDef(graph, self)
		self.labels.add("MClass")
		kind = "class"
		visibility = "public"
	end

	# Return the number of type parameters.
	fun arity: Int do return class_type.arity

	redef fun name=(name: String) do
		super
		class_type.name = name
		class_def.name = name
	end

	redef fun full_name=(full_name: String) do
		super
		class_type.full_name = full_name
		class_def.full_name = full_name
	end

	redef fun parent_name=(parent_name: String) do
		super
		class_type.parent_name = parent_name
		class_def.parent_name = parent_name
	end

	redef fun location=(location: nullable Location) do
		super
		class_def.location = location
	end

	redef fun set_mdoc do
		super
		class_def["mdoc"] = doc
	end

	redef fun declare_super(id: String, full_name: String, prot: String, virt: String) do
		class_def.declare_super(id, full_name, prot, virt)
	end

	redef fun declare_member(member: Member) do
		class_def.declare_member(member)
	end

	# Append the specified type parameter.
	fun add_type_parameter(parameter: TypeParameter) do
		class_type.arguments.add(parameter)
	end

	redef fun put_in_graph do
		super
		class_type.put_in_graph
		class_def.put_in_graph
	end

	redef fun put_edges do
		super
		graph.add_edge(self, "CLASSTYPE", class_type)
		if arity > 0 then
			var names = new JsonArray

			for p in class_type.arguments do
				names.add(p.name)
			end
			self["parameter_names"] = names
		end
	end
end

# The `MClassDef` node of a class.
class ClassDef
	super CodeBlock

	var class_compound: ClassCompound
	var supers: SimpleCollection[String] = new Array[String]
	var members: SimpleCollection[Member] = new Array[Member]

	init do
		super
		self.labels.add("MClassDef")
		self["is_intro"] = true
	end

	fun declare_super(id: String, full_name: String, prot: String,
			virt: String) do
		# TODO prot, virt, full_name
		if "" != id then
			supers.add(id)
		end
	end

	fun declare_member(member: Member) do
		var full_name = self["full_name"]

		if full_name != null then
			member.parent_name = full_name.to_s
		end
		members.add(member)
	end

	redef fun full_name=(full_name: String) do
		super
		for m in members do
			m.parent_name = full_name
		end
	end

	redef fun parent_name=(parent_name: String) do
		super
		for m in members do
			m.parent_name = full_name
		end
	end

	redef fun put_edges do
		super
		graph.add_edge(self, "BOUNDTYPE", class_compound.class_type)
		graph.add_edge(self, "MCLASS", class_compound)
		for s in supers do
			graph.add_edge(self, "INHERITS", graph.by_id[s].as(ClassCompound).class_type)
		end
		for m in members do
			if m.is_intro then
				var intro = m.introducer.as(not null)
				graph.add_edge(self, "INTRODUCES", intro)
				graph.add_edge(intro, "INTRO_CLASSDEF", self)
			end
			graph.add_edge(self, "DECLARES", m)
		end
	end
end

# A type defined by a class.
class ClassType
	super TypeEntity

	# The associated class.
	#
	# You may use this attribute or `class_compound_id` to specify the class.
	var class_compound: nullable ClassCompound = null is writable

	# The `model_id` of the associated class.
	#
	# You may use this attribute or `class_compound` to specify the class.
	var class_compound_id: String = "" is writable

	# The type arguments or the type parameters.
	var arguments = new Array[TypeEntity]

	init do
		super
		self.labels.add("MClassType")
	end

	# Return the number of arguments.
	fun arity: Int do return arguments.length

	fun is_generic: Bool do return arity > 0

	redef fun put_in_graph do
		super
		if is_generic then
			self.labels.add("MGenericType")
		else
			var i = self.labels.index_of("MGenericType")
			if i >= 0 then self.labels.remove_at(i)
		end
	end

	redef fun put_edges do
		var cls = class_compound

		if cls == null and class_compound_id != "" then
			cls = graph.by_id[class_compound_id].as(ClassCompound)
		end
		assert cls != null

		super
		graph.add_edge(self, "CLASS", cls)
		assert cls.arity == self.arity
		for i in [0..arguments.length[ do
			var a = arguments[i]
			if cls.class_type != self then
				a.name = cls.class_type.arguments[i].name
			end
			if a isa TypeParameter then
				a.rank = i
				graph.add_edge(a, "CLASS", cls)
			end
			graph.add_edge(self, "ARGUMENT", a)
		end
	end
end
