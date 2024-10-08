# This file is part of NIT (https://nitlanguage.org).
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

# Filters preprocessed C-like header files to remove included files
#
# This tool is used in the process of parsing header files to extract
# information on the declared services (the functions and structures).
# This information is then used to generate bindings for Nit code
# to access these services.
#
# The C preprocessor extends macros, inline files marked with `#include`,
# and more. This tool acts after the C preprocessor, in a way to keep
# everything but the included files. It searches for line pragmas
# to identify the source of each line. The result is printed to stdout.
#
# Typical usage on the output of `gcc -E` (it would be the same with `clang`):
#
# ~~~sh
# gcc -E /usr/include/SDL/SDL_image.h | header_keeper SDL_image.h > preprocessed_header.h
# ~~~
#
# This module can also be used as a library.
# The main service is the method `header_keeper`.
module header_keeper

# Filters the preprocessed `input` to keep only files from `target` and write to the `output`
fun header_keeper(input: Reader, output: Writer, target: String)
do
	var in_target = false
	while not input.eof do
		var line = input.read_line
		if not line.is_empty and line[0] == '#' then
			in_target = line.has(target)
			continue
		end

		if in_target then output.write line + "\n"
	end
end

if args.length != 1 then
	print "Usage: header_keeper header_name.h"
	exit 1
end

header_keeper(sys.stdin, sys.stdout, args.first)
