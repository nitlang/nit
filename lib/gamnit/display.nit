# This file is part of NIT (http://www.nitlanguage.org).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#	 http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Abstract display services
module display

import ::glesv2

import display_linux is conditional(linux)
import display_android is conditional(android)

# Should Gamnit be more verbose?
fun debug_gamnit: Bool do return false

# General display class, is sized and drawable
class GamnitDisplay

	# Width of the display, in pixels
	fun width: Int is abstract

	# Height of the display, in pixels
	fun height: Int is abstract

	# Prepare this display
	#
	# The implementation varies per platform.
	fun setup is abstract

	# Close this display and free underlying resources
	#
	# The implementation varies per platform.
	fun close do end

	# Flip the display buffers
	#
	# The implementation varies per platform.
	fun flip do end
end
