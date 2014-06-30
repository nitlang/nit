# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

module emscripten is platform

`{
	#include <emscripten.h>
`}

redef class String
	fun run_js do run_js_native(self.escape_to_js.to_cstring)
	private fun run_js_native(script: NativeString) `{ emscripten_run_script(script); `}

	fun escape_to_js: String do return self.replace('\n', "\\n")

	fun alert do "alert('{self.escape_to_js}')".run_js
end
