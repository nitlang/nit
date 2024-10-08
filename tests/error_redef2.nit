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

import kernel

class A
	#1alt1#fun f1 do end
	#1alt2#fun f1(i: Int) do end
	#1alt3#fun f1: Int do return 0
	#1alt4#fun f1(i: Int): Int do return i + 1
end

class B
	super A
	#alt1#fun f1 do end
	#alt2#fun f1(i: Int) do end
	#alt3#fun f1(i) do end
	#alt4#fun f1 do return 0
	#alt5#fun f1(i: Int) do return i + 1
	#alt6#fun f1(i) do return i + 1
	#alt7#fun f1: Int do return 0
	#alt8#fun f1(i: Int): Int do return i + 1
	#alt9#fun f1(i): Int do return i + 1
end

