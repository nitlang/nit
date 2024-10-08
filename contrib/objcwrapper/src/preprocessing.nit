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

# Preprocessing of input files
module preprocessing

import header_static
import header_keeper

import opts

redef class Sys
	# Options for the C preprocessor
	var opt_gcc_options = new OptionString("C Preprocessor options to add to `gcc -E file`", "-p")
end

redef class Text
	# Read file at `self` and preprocess its content through `gcc -E`, `header_keeper` and `header_static`
	fun preprocess_content: String
	do
		var path = to_s

		# GCC C preprocessor, to apply macros and includes
		var gcc_opts = opt_gcc_options.value or else ""
		var cmd = "gcc -E {path} {gcc_opts}"
		var gcc_proc = new ProcessReader("sh", "-c", cmd)

		# header_keeper, to keep only the target file (path)
		var o = new StringWriter
		header_keeper(gcc_proc, o, path)

		gcc_proc.wait
		if gcc_proc.status != 0 then
			print_error "Fatal Error: call to gcc failed, the command was: {cmd}"
			exit 1
		end

		# header_static, strip lines unsupported by our parser
		var i = new StringReader(o.to_s)
		o = new StringWriter
		header_static(i, o)

		return o.to_s
	end
end
