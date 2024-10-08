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

# Sample module showing the use of the i18n annotation
module langannot is example, i18n

import gettext

# Some class
class X
	# Some method
	fun foo: String do
		return "This String is a test"
	end
end

var t = new X
print t.foo

print "This String is a test"

print """Multiline string

example


of the language annotation capacities
"""

var s = "example"

print "This superstring {s} rocks"

print "This superstring %1 rocks".format(s)
