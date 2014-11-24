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

# Base module for tests related to `neo_doxygen`.
module tests::tests

import model::graph

# Adds debugging output to graphs.
redef class NeoGraph

	# Append the debugging output of all relationships to the specified buffer.
	fun debug(buffer: Buffer) do
		buffer.append "# Graph\n"
		for edge in all_edges do
			edge.debug buffer
		end
	end
end

# Adds debugging output to relationships.
redef class NeoEdge

	# Append the debugging output of this relationship to the specified buffer.
	#
	# Append the relationship type, the properties, and the debugging output of
	# both extremities.
	fun debug(buffer: Buffer) do
		var rel_type = self.rel_type or else "?"
		buffer.append "Edge\n"
		buffer.append "=type={rel_type.length}:{rel_type}\n"
		buffer.append "=properties=JsonObject({properties.length}):\n"
		buffer.append properties.to_json
		buffer.append "\n----\n=from="
		from.debug buffer
		buffer.append "----\n=to="
		to.debug buffer
		buffer.append "\n"
	end
end

# Adds debugging output to nodes.
redef class NeoNode

	# Append the debugging output of this node to the specified buffer.
	#
	# Append the labels and the properties.
	fun debug(buffer: Buffer) do
		buffer.append "Node\n"
		buffer.append "=labels=Array({labels.length}):\n"
		for lab in labels do buffer.append "{lab.length}:{lab}\n"
		buffer.append "=properties=JsonObject({properties.length}):\n"
		buffer.append properties.to_json
		buffer.append "\n"
	end
end

# Adds debugging output to entities.
redef class Entity

	# Append the debugging output of this entity to the specified buffer.
	#
	# Append the `model_id`, the labels and the properties.
	redef fun debug(buffer: Buffer) do
		buffer.append "Entity#{model_id.length}:{model_id}\n"
		buffer.append "=labels=Array({labels.length}):\n"
		for lab in labels do buffer.append "{lab.length}:{lab}\n"
		buffer.append "=properties=JsonObject({properties.length}):\n"
		buffer.append properties.to_json
		buffer.append "\n"
	end
end
