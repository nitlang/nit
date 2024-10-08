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

# Second module
module n1

intrude import n0

# A refinement of a class
redef class A
	# A refinement in the same class
	redef fun a do end

	# A refinement in the same class
	redef fun z do end

	# A public method introduced in a refinement
	fun b do end
end

# A refinement of a subclass
redef class A0
	# A refinement+redefinition
	redef fun a do end

	# A refinement+redefinition
	redef fun z do end

	# A refinement+redefinition
	redef fun p do end
end

# A subclass introduced in a submodule
class A1
	super A
	super P

	# A redefinition in a subclass from a different module
	redef fun a do end

	# A redefinition in a subclass from a different module
	redef fun z do end

	# A redefinition in a subclass from a different module
	redef fun p do end
end

# A refinement of a class
redef class P
	# A refinement in the same class
	redef fun p do end
end

# A refinement of a subclass
redef class P0
	# A refinement+redefinition
	redef fun a do end

	# A refinement+redefinition
	redef fun z do end

	# A refinement+redefinition
	redef fun p do end
end

# A private subclass introduced in a different module
private class P1
	super A
	super P

	# A redefinition in a subclass from a different module
	redef fun a do end

	# A redefinition in a subclass from a different module
	redef fun z do end

	# A redefinition in a subclass from a different module
	redef fun p do end
end
