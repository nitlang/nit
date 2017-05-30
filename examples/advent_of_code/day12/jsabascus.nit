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

import json

redef class Jsonable
	fun sum_values: Int do return 0
end

redef class JsonObject
	redef fun sum_values do
		var sum = 0
		for k, v in self do
			if v == null then continue
			sum += v.sum_values
		end
		return sum
	end
end

redef class Int
	redef fun sum_values do return self
end

redef class JsonArray
	redef fun sum_values do
		var sum = 0
		for i in self do
			if i == null then continue
			sum += i.sum_values
		end
		return sum
	end
end

if args.is_empty then
	print "Usage: ./{program_name.basename.strip_extension} input.txt"
	exit 1
end

var json = args[0].to_path.read_all.parse_json

if json == null then
	print 0
else
	print json.sum_values
end
