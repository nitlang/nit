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

# Add support for namespace’s members.
module model::namespace_members

import class_compound
import member

redef class Namespace
	# The class that contains the namespace’s direct members.
	#
	# Left `null` for the root namespace and for any namespace with no direct
	# member. Automatically put in the graph with the namespace.
	#
	# Note: In the graph, the `self_class` not linked directly to the namespace.
	# This is the role of the modules implicitly created by `FileCompound`s to
	# link a namespace to its `self_class`.
	#
	# SEE: `declare_member`
	var self_class: nullable SelfClass = null

	# Add the specified member as a direct children of the namespace.
	redef fun declare_member(member) do
		if self_class == null then self_class = new SelfClass(graph, self)
		self_class.as(not null).declare_member(member)
	end

	redef fun put_in_graph do
		super
		var self_class = self.self_class
		if self_class isa SelfClass then self_class.put_in_graph
	end
end

redef class RootNamespace
	redef fun declare_member(member) do
		assert false else
			# TODO Check how Doxygen modelize member of the root namespace.
			# Note: Doxygen does not modelize the root namespace.
			sys.stderr.write "The addition of a member to the root namespace is not supported yet."
		end
	end
end

# A class that contains a namespace’s direct members.
class SelfClass
	super ClassCompound

	# The namespace of the members
	var namespace: Namespace

	init do
		super
		name = "(self)"
	end
end
