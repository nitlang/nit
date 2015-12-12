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
import jsabascus

redef class Jsonable
	fun has_red: Bool do return false
end

redef class JsonObject
	redef fun sum_values do
		var sum = 0
		if has_red then return 0
		for k, v in self do
			if v == null then continue
			sum += v.sum_values
		end
		return sum
	end

	redef fun has_red do return values.has("red")
end

super
