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

class A
	#1alt1#init do abort
	#1alt2#init(a: Int) is old_style_init do abort
	#1alt3#new do abort
	#1alt4#new(c: Int) do abort
	#1alt5#init foo(a: Int) is old_style_init do abort
	#1alt6#new foo(c: Int) do abort
	#1alt7#fun foo do end

	#alt1#init do abort
	#alt2#init(b: Float)is old_style_init do abort
	#alt3#new do abort
	#alt4#new(d: Float) do abort
	#alt5#init foo(a: Float)is old_style_init do abort
	#alt6#new foo(c: Float) do abort
	#alt7#fun foo do end
end
