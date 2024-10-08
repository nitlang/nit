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

# A alternative second module, used to make name conflicts
module n2

import n0

# A refinement of a class
redef class A
	# Name conflict? A second public method
	fun b do end

	# Name conflict? A second private method
	fun z do end
end

# Name conflict? A second private class
private class P
	# Name conflict? A private method in an homonym class.
	fun p do end
end
