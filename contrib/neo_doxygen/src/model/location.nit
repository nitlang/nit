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

# This module is used to model locations in source files.
module location

import neo4j

# A location inside a source file.
class Location
	super Jsonable

	var path: nullable String = null is writable
	var line_start: Int = 1 is writable
	var line_end: Int = 1 is writable
	var column_start: Int = 1 is writable
	var column_end: Int = 1 is writable

	redef fun to_s: String do
		var file_part = "/dev/null:"
		if path != null and path.length > 0 then file_part = "{path.as(not null)}:"
		return "{file_part}{line_start},{column_start}--{line_end},{column_end}"
	end

	redef fun to_json do return to_s.to_json
end
