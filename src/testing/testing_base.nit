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
import console

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
		if dir == null then return "nitunit.out"
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

	# Show a single-line status to use as a progression.
	#
	# Note that the line starts with `'\r'` and is not ended by a `'\n'`.
	# So it is expected that:
	# * no other output is printed between two calls
	# * the last `show_unit_status` is followed by a new-line
	fun show_unit_status(name: String, tests: SequenceRead[UnitTest])
	do
		var esc = 27.code_point.to_s
		var line = "\r{esc}[K* {name} ["
		var done = tests.length
		for t in tests do
			if not t.is_done then
				line += " "
				done -= 1
			else if t.error == null then
				line += ".".green.bold
			else
				line += "X".red.bold
			end
		end

		if not has_status then
			if done == 0 then
				print "* {name} ({tests.length} tests)"
			end
			return
		end

		line += "] {done}/{tests.length}"
		printn "{line}"
	end

	# Is a status bar printed?
	#
	# true if color and non-verbose mode
	fun has_status: Bool
	do
		return not opt_no_color.value and opt_verbose.value <= 0
	end

	# Clear the line if `has_status` (no-op else)
	fun clear_status
	do
		if has_status then printn "\r\x1B[K"
	end

	# Show the full description of the test-case.
	#
	# The output honors `--no-color`.
	#
	# `more message`, if any, is added after the error message.
	fun show_unit(test: UnitTest, more_message: nullable String) do
		print test.to_screen(more_message, not opt_no_color.value)
	end
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
	#
	# e.g.: `Runtime Error`
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

	# A colorful `[OK]` or `[KO]`.
	fun status_tag(color: nullable Bool): String do
		color = color or else true
		if not is_done then
			return "[  ]"
		else if error != null then
			var res = "[KO]"
			if color then res = res.red.bold
			return res
		else
			var res = "[OK]"
			if color then res = res.green.bold
			return res
		end
	end

	# The full (color) description of the test-case.
	#
	# `more message`, if any, is added after the error message.
	fun to_screen(more_message: nullable String, color: nullable Bool): String do
		color = color or else true
		var res
		var error = self.error
		if error != null then
			if more_message != null then error += " " + more_message
			var loc = error_location or else location
			if color then
				res = "{status_tag(color)} {full_name}\n     {loc.to_s.yellow}: {error}\n{loc.colored_line("1;31")}"
			else
				res = "{status_tag(color)} {full_name}\n     {loc}: {error}"
			end
			var output = self.raw_output
			if output != null then
				res += "\n     Output\n\t{output.chomp.replace("\n", "\n\t")}\n"
			end
		else
			res = "{status_tag(color)} {full_name}"
			if more_message != null then res += more_message
		end
		return res
	end

	# Return a `<testcase>` XML node in format compatible with Jenkins unit tests.
	fun to_xml: HTMLTag do
		var tc = new HTMLTag("testcase")
		tc.attr("classname", xml_classname)
		tc.attr("name", xml_name)
		var error = self.error
		if error != null then
			if was_exec then
				tc.open("error").append(error)
			else
				tc.open("failure").append(error)
			end
		end
		var output = self.raw_output
		if output != null then
			tc.open("system-err").append(output.trunc(8192).filter_nonprintable)
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
