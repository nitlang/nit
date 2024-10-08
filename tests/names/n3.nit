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

# The bottom module
module n3

intrude import n1
import n2

# a refinement of a subclass in a submodule
redef class A1
	# a refinement (3 distinct modules)
	redef fun a do end
	# a refinement (3 distinct modules)
	redef fun p do end
end

# a refinement of a subclass in a submodule
redef class P1
	# a refinement (3 distinct modules)
	redef fun a do end
	# a refinement (3 distinct modules)
	redef fun p do end
end
