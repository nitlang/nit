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

import core::kernel

class A
	var a: Object is
		#alt2# noautoinit
		#alt3# autoinit
		#alt4# lazy
		#alt5# readonly
		#alt6# abstract
		#alt7# lateinit
		writable
	end #1alt1# do return 1
end

class B
	super A
end

var b = new B(1) #alt1,2,4,5,6,7# var b = new B
b.a.output
