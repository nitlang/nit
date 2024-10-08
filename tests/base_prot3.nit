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

import base_prot0
private import base_prot2

class C
	super A
	#alt5#redef fun pub do 20.output
	#alt6#redef fun pro do 21.output
	#alt1#redef fun pri do 22.output
	fun o do
		#alt7#pub
		#alt8#pro
		#alt2#pri
	end
end

class O3
	fun o
	do
		var a = new C
		#alt9#a.pub
		#alt3#a.pro
		#alt4#a.pri
		23.output
	end
	init do end
end

(new O3).o
