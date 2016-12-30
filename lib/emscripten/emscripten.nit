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

# Platform for the _emscripten_ framework
#
# Importing this module from your project will tell `nitc` to compile
# to JavaScript for the _emscripten_ framework.
module emscripten is platform

`{
	#include <emscripten.h>
	#include <gc.h>
`}

redef class Text
	# Run `self` as JavaScript code
	fun run_js do run_js_native(self.escape_to_js.to_cstring)

	private fun run_js_native(script: CString) `{ emscripten_run_script(script); `}

	# Escape the content of `self` to pass to JavaScript code
	fun escape_to_js: Text do return replace('\n', "\\n")

	# Raise a JavaScript alert
	fun alert do "alert('{self.escape_to_js}')".run_js
end

redef class Sys
	redef fun force_garbage_collection `{ GC_FORCE_COLLECT(); `}

	# The emscripten GC *must* be manually invoked, it will not act by itself
	fun suggest_garbage_collection `{ GC_MAYBE_COLLECT(); `}
end
