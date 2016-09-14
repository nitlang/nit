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

import json::static
import json

# A location inside a source file.
class Location
	super Jsonable

	# The file’s path.
	var path: nullable String = null is writable

	# The one-based index of the first line.
	var line_start: Int = 1 is writable

	# The one-based index of the last line.
	var line_end: Int = 1 is writable

	# The one-based column index of the first character.
	var column_start: Int = 1 is writable

	# The one-based column index of the last character.
	var column_end: Int = 1 is writable

	redef fun to_s do
		var path = path
		var file_part = "/dev/null:"
		if path != null and path.length > 0 then file_part = "{path}:"
		return "{file_part}{line_start},{column_start}--{line_end},{column_end}"
	end

	redef fun serialize_to(v) do to_s.serialize_to v
	redef fun accept_json_serializer(v) do to_s.serialize_to v
end
