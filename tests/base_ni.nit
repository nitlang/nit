# This file is part of NIT ( http://www.nitlanguage.org ).
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

interface I
end

abstract class AC
end

class C
end

enum E
end

extern class EC
	#alt1# super I
	#alt2# super AC
	#alt3# super C
	#alt4# super E
	fun foo do 1.output
	#alt5# var x: Int 
end

class I2
	#alt6# super EC
end

class AC2
	#alt7# super EC
end

class C2
	#alt8# super EC
end

class E2
	#alt9# super EC
end

fun inita: EC is extern

var a = inita
#alt10# a = new EC 
a.foo

