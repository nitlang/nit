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

# Adds the possibility to define inner classses.
module model::inner_class

import member
import class_compound

# An inner class.
class InnerClass
	super MemberOrInner

	redef type INTRODUCER_TYPE: InnerClassIntroducer

	# The outer class definition.
	#
	# Used to correct the short name of the inner class definition when
	# `put_edges` is called.
	#
	# SEE: The notice concerning `name` in `/src/neo.nit`.
	var outer: ClassDef

	# The `model_id` of the actual inner class (`ClassCompound`).
	var inner: String

	init do
		super
		self.labels.add("MInnerClassDef")
	end

	redef fun is_intro do return true
	redef fun create_introducer do return new InnerClassIntroducer(graph, self)
	redef fun resolve_introducer do return introducer

	redef fun put_edges do
		super
		var inner = graph.by_id[self.inner]
		assert inner isa ClassCompound
		var inner_def = inner.class_def
		# Correct the short name of `inner` to avoid name collisions in a module.
		inner_def.name = "{outer.name}{ns_separator}{name}"
		graph.add_edge(self, "NESTS", inner_def)
	end
end

# A `MProperty` node for an inner class.
class InnerClassIntroducer
	super MemberIntroducer

	# The definition.
	var def: InnerClass

	init do
		super
		self.labels.add("MInnerClass")
	end

	redef fun put_edges do
		super
		var inner = graph.by_id[def.inner]
		assert inner isa ClassCompound
		var outer = def.outer.class_compound
		# Correct the short name of `inner` to avoid name collisions in a module.
		inner.name = "{outer.name}{ns_separator}{name}"
		graph.add_edge(self, "NESTS", inner)
	end
end

# Implements `declare_class`.
redef class ClassCompound
	redef fun declare_class(id, name, prot) do
		class_def.declare_class(id, name, prot)
	end
end

# Implements `declare_class`.
redef class ClassDef

	# The set of the defined inner classes.
	#
	# All `InnerClass` entities registred here are automatically added to the
	# graph with the `ClassDef`.
	#
	# To ensure that each inner class will be correctly linked,
	# `declare_class` should be used to add each inner class.
	var inner_classes: SimpleCollection[InnerClass] = new Array[InnerClass]

	# Declare an inner class.
	#
	# Parameters:
	#
	# * `id`: `model_id` of the inner class definition.
	# * `name`: name of the inner class definition.
	# * `prot`: visibility (proctection).
	fun declare_class(id: String, name: String, prot: String) do
		var member = new InnerClass(graph, self, id)
		member.name = name
		member.visibility = prot
		members.add member
		inner_classes.add member
	end

	redef fun put_in_graph do
		super
		for member in inner_classes do
			member.put_in_graph
		end
	end
end
