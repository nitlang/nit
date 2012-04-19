# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2006-2008 Floréal Morandat <morandat@lirmm.fr>
# Copyright 2008-2012 Jean Privat <jean@pryen.org>
# Copyright 2009 Jean-Sebastien Gelinas <calestar@gmail.com>
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

# Common command-line tool infractructure than handle options and error messages
package toolcontext

import opts
import location

class Message
	super Comparable
	redef type OTHER: Message

	readable var _location: nullable Location
	readable var _text: String

	# Comparisons are made on message locations.
	redef fun <(other: OTHER): Bool do
		if location == null then return true
		if other.location == null then return false

		return location.as(not null) < other.location.as(not null)
	end

	redef fun to_s: String
	do
		var l = location
		if l == null then
			return text
		else
			return "{l}: {text}"
		end
	end

	fun to_color_string: String
	do
		var esc = 27.ascii
		var red = "{esc}[0;31m"
		var bred = "{esc}[1;31m"
		var green = "{esc}[0;32m"
		var yellow = "{esc}[0;33m"
		var def = "{esc}[0m"

		var l = location
		if l == null then
			return text
		else if l.file == null then
			return "{yellow}{l}{def}: {text}"
		else
			return "{yellow}{l}{def}: {text}\n{l.colored_line("1;31")}"
		end
	end
end

# Global context for tools
class ToolContext
	# Number of errors
	readable var _error_count: Int = 0

	# Number of warnings
	readable var _warning_count: Int = 0

	# Directory where to generate log files
	readable var _log_directory: String = "logs"

	# Messages
	var _messages: Array[Message] = new Array[Message]
	var _message_sorter: ComparableSorter[Message] = new ComparableSorter[Message]

	fun check_errors
	do
		if _messages.length > 0 then
			_message_sorter.sort(_messages)

			for m in _messages do
				if opt_no_color.value then
					stderr.write("{m}\n")
				else
					stderr.write("{m.to_color_string}\n")
				end
			end

			_messages.clear
		end

		if error_count > 0 then exit(1)
	end

	# Display an error
	fun error(l: nullable Location, s: String)
	do
		_messages.add(new Message(l,s))
		_error_count = _error_count + 1
		if opt_stop_on_first_error.value then check_errors
	end

	# Add an error, show errors and quit
	fun fatal_error(l: nullable Location, s: String)
	do
		error(l,s)
		check_errors
	end

	# Display a warning
	fun warning(l: nullable Location, s: String)
	do
		if _opt_warn.value == 0 then return
		_messages.add(new Message(l,s))
		_warning_count = _warning_count + 1
		if opt_stop_on_first_error.value then check_errors
	end

	# Display an info
	fun info(s: String, level: Int)
	do
		if level <= verbose_level then
			print "{s}"
		end
	end

	# Global OptionContext
	readable var _option_context: OptionContext = new OptionContext

	# Option --warn
	readable var _opt_warn: OptionCount = new OptionCount("Show warnings", "-W", "--warn")

	# Option --quiet
	readable var _opt_quiet: OptionBool = new OptionBool("Do not show warnings", "-q", "--quiet")

	# Option --log
	readable var _opt_log: OptionBool = new OptionBool("Generate various log files", "--log")

	# Option --log-dir
	readable var _opt_log_dir: OptionString = new OptionString("Directory where to generate log files", "--log-dir")

	# Option --help
	readable var _opt_help: OptionBool = new OptionBool("Show Help (This screen)", "-h", "-?", "--help")

	# Option --version
	readable var _opt_version: OptionBool = new OptionBool("Show version and exit", "--version")

	# Option --verbose
	readable var _opt_verbose: OptionCount = new OptionCount("Verbose", "-v", "--verbose")

	# Option --stop-on-first-error
	readable var _opt_stop_on_first_error: OptionBool = new OptionBool("Stop on first error", "--stop-on-first-error")

	# Option --no-color
	readable var _opt_no_color: OptionBool = new OptionBool("Do not use color to display errors and warnings", "--no-color")

	# Verbose level
	readable var _verbose_level: Int = 0

	init
	do
		option_context.add_option(opt_warn, opt_quiet, opt_stop_on_first_error, opt_no_color, opt_log, opt_log_dir, opt_help, opt_version, opt_verbose)
	end

	# Parse and process the options given on the command line
	fun process_options
	do
		self.opt_warn.value = 1

		# init options
		option_context.parse(args)

		# Set verbose level
		_verbose_level = opt_verbose.value

		if self.opt_quiet.value then self.opt_warn.value = 0

		if opt_log_dir.value != null then _log_directory = opt_log_dir.value.as(not null)
		if _opt_log.value then
			# Make sure the output directory exists
			log_directory.mkdir
		end
	end
end
