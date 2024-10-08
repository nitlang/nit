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

# Root module
module n0

import end

# Root interface
interface Object
end

# A public class
class A
	# A public method in a public class
	fun a do end

	# A private method in a public class
	private fun z do end
end

# A public subclass in the same module
class A0
	super A
	super P

	# Redefinition it the same module of a public method
	redef fun a do end

	# Redefinition it the same module of a private method
	redef fun z do end

	# Redefinition it the same module of a private method
	redef fun p do end
end

# A private class
private class P
	# A private method in a private class
	fun p do end
end

# A private subclass introduced in the same module
private class P0
	super A
	super P

	# Redefinition it the same module of a public method
	redef fun a do end

	# Redefinition it the same module of a private method
	redef fun z do end

	# Redefinition it the same module of a private method
	redef fun p do end
end
