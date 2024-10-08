# This file is part of NIT ( https://nitlanguage.org ).
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

import kernel

interface Number
	type OTHE: Number
	type OTHE2: Int
	type OTHE3: Object is fixed
end
redef class Int
	super Number

	redef type OTHE: Int
	#alt1#redef type OTHE2: Number
	#alt2#redef type OTHE3: Int
end

