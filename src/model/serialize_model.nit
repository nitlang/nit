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

# Service to serialize `POSet` to JSON
module serialize_model

private import json::serialization_write

import model

redef class POSet[E]

	# Serialize `self` to JSON using the `to_s` representation of each item
	fun to_thin_json: String
	do
		var thin_poset = new POSet[String]
		for e in self do
			var from = (e or else "null").to_s
			for g in self[e].direct_greaters do
				thin_poset.add_edge(from, (g or else "null").to_s)
			end
		end
		return thin_poset.serialize_to_json
	end
end
