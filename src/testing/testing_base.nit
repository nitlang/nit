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
import html

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

# A unit test is an elementary test discovered, run and reported by nitunit.
#
# This class factorizes `DocUnit` and `TestCase`.
abstract class UnitTest
	# The name of the unit to show in messages
	fun full_name: String is abstract

	# The location of the unit test to show in messages.
	fun location: Location is abstract

	# Flag that indicates if the unit test was compiled/run.
	var is_done: Bool = false is writable

	# Error message occurred during test-case execution (or compilation).
	var error: nullable String = null is writable

	# Was the test case executed at least once?
	#
	# This will indicate the status of the test (failture or error)
	var was_exec = false is writable

	# The raw output of the execution (or compilation)
	#
	# It merges the standard output and error output
	var raw_output: nullable String = null is writable

	# The location where the error occurred, if it makes sense.
	var error_location: nullable Location = null is writable

	# Return a `<testcase>` XML node in format compatible with Jenkins unit tests.
	fun to_xml: HTMLTag do
		var tc = new HTMLTag("testcase")
		tc.attr("classname", xml_classname)
		tc.attr("name", xml_name)
		var error = self.error
		if error != null then
			if was_exec then
				tc.open("error").append("Runtime Error")
			else
				tc.open("failure").append("Compilation Error")
			end
			tc.open("system-err").append(error.trunc(8192).filter_nonprintable)
		end
		return tc
	end

	# The `classname` attribute of the XML format.
	#
	# NOTE: jenkins expects a '.' in the classname attr
	#
	# See to_xml
	fun xml_classname: String is abstract

	# The `name` attribute of the XML format.
	#
	# See to_xml
	fun xml_name: String is abstract
end

redef class String
	# If needed, truncate `self` at `max_length` characters and append an informative `message`.
	#
	# ~~~
	# assert "hello".trunc(10) == "hello"
	# assert "hello".trunc(2) == "he[truncated. Full size is 5]"
	# assert "hello".trunc(2, "...") == "he..."
	# ~~~
	fun trunc(max_length: Int, message: nullable String): String
	do
		if length <= max_length then return self
		if message == null then message = "[truncated. Full size is {length}]"
		return substring(0, max_length) + message
	end

	# Use a special notation for whitespace characters that are not `'\n'` (LFD) or `' '` (space).
	#
	# ~~~
	# assert "hello".filter_nonprintable == "hello"
	# assert "\r\n\t".filter_nonprintable == "^13\n^9"
	# ~~~
	fun filter_nonprintable: String
	do
		var buf = new Buffer
		for c in self do
			var cp = c.code_point
			if cp < 32 and c != '\n' then
				buf.append "^{cp}"
			else
				buf.add c
			end
		end
		return buf.to_s
	end
end
