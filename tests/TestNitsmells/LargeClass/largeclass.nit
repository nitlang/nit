# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# A test program with a fake model to check model tools.
module largeclass

import platform

class LargeClass
	var attribute = 0
	var attribute1 = 0
	var attribute2 = 0
	var attribute3 = 0
	var attribute4 = 0
	var attribute5 = 0
	var attribut6 = 0
	var attribute7 = 0
	var attribute8 = 0
	var attribute9 = 0
	var attribute10 = 0
	var attribute11 = 0
	var attribute12 = 0
	var attribute13 = 0
	var attribute14 = 0
	var attribute15 = 0
	var attribute16 = 0
	var attribute17 = 0

	fun start do
		self.attribute16 = 10
	end

	fun ended do end
	fun replay do end
	fun restart do end
	fun start1 do end
	fun ended1 do end
	fun replay1 do end
	fun restart1 do end
	fun start2 do end
	fun ended2 do end
	fun replay2 do end
	fun restart2 do end
end

class NoLargeclass
	var testVariable = 0

	fun test do end
end
