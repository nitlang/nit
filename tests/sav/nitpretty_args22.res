# This file is part of NIT ( https://nitlanguage.org ).
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

class A
	var a: Int # comment
	private var b: nullable Int # happy
	protected var c = 10 # ending
	var d: Int = 10

	# Test test...
	var e: Int is writable

	var f: Int is protected writable

	# Adoc
	var k: Int = 10 is protected writable
	# more comments
end # end
