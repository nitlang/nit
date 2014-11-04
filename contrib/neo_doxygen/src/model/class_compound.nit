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
		class_type = new ClassType(graph, self)
		class_def = new ClassDef(graph, self)
		self.labels.add("MClass")
		self["arity"] = 0 # TODO
		kind = "class"
		visibility = "public"
	end

	redef fun name=(name: String) do
		super
		class_type.name = name
		class_def.name = name
	end

	redef fun location=(location: nullable Location) do
		super
		class_def.location = location
	end

	redef fun set_mdoc do
		super
		class_def["mdoc"] = doc
	end

	redef fun declare_super(id: String, name: String, prot: String, virt: String) do
		class_def.declare_super(id, name, prot, virt)
	end

	redef fun put_in_graph do
		super
		class_type.put_in_graph
		class_def.put_in_graph
	end

	redef fun put_edges do
		super
		graph.add_edge(self, "CLASSTYPE", class_type)
	end
end

# The `MClassDef` node of a class.
class ClassDef
	super CodeBlock

	var class_compound: ClassCompound
	var supers: SimpleCollection[String] = new Array[String]

	init do
		super
		self.labels.add("MClassDef")
	end

	fun declare_super(id: String, name: String, prot: String, virt: String) do
		# TODO prot, virt, name
		if "" != id then
			supers.add(id)
		end
	end

	redef fun put_edges do
		super
		graph.add_edge(self, "BOUNDTYPE", class_compound.class_type)
		graph.add_edge(self, "MCLASS", class_compound)
		for s in supers do
			graph.add_edge(self, "INHERITS", graph.by_id[s].as(ClassCompound).class_type)
		end
	end
end

# A type defined by a class.
class ClassType
	super Entity

	var class_compound: ClassCompound

	init do
		super
		self.labels.add("MType")
		self.labels.add("MClassType")
	end

	redef fun put_edges do
		graph.add_edge(self, "CLASS", class_compound)
	end
end
