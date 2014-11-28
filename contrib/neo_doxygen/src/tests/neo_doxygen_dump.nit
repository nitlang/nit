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

# A variant of the `neo_doxygen` program that produces a debugging output of the graph instead of saving it.
#
# Note: The `--dest` option is ignored.
module tests::neo_doxygen_dump

import tests
import neo_doxygen

redef class Sys
	redef fun program_name do return "%PROGRAM_NAME%"
end

redef class NeoDoxygenJob
	redef fun list_files(dir) do
		var a = super.to_a
		default_comparator.sort(a)
		return a
	end
end

redef class NeoDoxygenCommand
	redef fun create_store(url) do return new DebugStore
end

# Dummy storage medium that write a debugging output to the standard output.
#
# For testing purposes only.
class DebugStore
	super GraphStore

	redef fun has_node_label(name) do return false

	redef fun save_all(neo_entities) do
		print ""
		for n in neo_entities do
			if n isa NeoEdge then
				var buffer = new RopeBuffer
				n.debug buffer
				print buffer
			end
		end
		print "---===DONE===---"
	end
end
