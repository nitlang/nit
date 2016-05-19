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

# Base options for testing tools.
module testing_base

import modelize
private import parser_util

redef class ToolContext
	# opt --full
	var opt_full = new OptionBool("Process also imported modules", "--full")
	# opt --output
	var opt_output = new OptionString("Output name (default is 'nitunit.xml')", "-o", "--output")
	# opt --dirr
	var opt_dir = new OptionString("Working directory (default is '.nitunit')", "--dir")
	# opt --no-act
	var opt_noact = new OptionBool("Does not compile and run tests", "--no-act")
	# opt --nitc
	var opt_nitc = new OptionString("nitc compiler to use", "--nitc")

	# Working directory for testing.
	fun test_dir: String do
		var dir = opt_dir.value
		if dir == null then return ".nitunit"
		return dir
	end

	# Search the `nitc` compiler to use
	#
	# If not `nitc` is suitable, then prints an error and quit.
	fun find_nitc: String
	do
		var nitc = opt_nitc.value
		if nitc != null then
			if not nitc.file_exists then
				fatal_error(null, "error: cannot find `{nitc}` given by --nitc.")
				abort
			end
			return nitc
		end

		nitc = "NITC".environ
		if nitc != "" then
			if not nitc.file_exists then
				fatal_error(null, "error: cannot find `{nitc}` given by NITC.")
				abort
			end
			return nitc
		end

		var nit_dir = nit_dir
		nitc = nit_dir/"bin/nitc"
		if not nitc.file_exists then
			fatal_error(null, "Error: cannot find nitc. Set envvar NIT_DIR or NITC or use the --nitc option.")
			abort
		end
		return nitc
	end

	# Execute a system command in a more safe context than `Sys::system`.
	fun safe_exec(command: String): Int
	do
		info(command, 2)
		var real_command = """
bash -c "
ulimit -f {{{ulimit_file}}} 2> /dev/null
ulimit -t {{{ulimit_usertime}}} 2> /dev/null
{{{command}}}
"
"""
		return system(real_command)
	end

	# The maximum size (in KB) of files written by a command executed trough `safe_exec`
	#
	# Default: 64MB
	var ulimit_file = 65536 is writable

	# The maximum amount of cpu time (in seconds) for a command executed trough `safe_exec`
	#
	# Default: 10 CPU minute
	var ulimit_usertime = 600 is writable
end
