# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2006-2008 Floréal Morandat <morandat@lirmm.fr>
# Copyright 2008-2012 Jean Privat <jean@pryen.org>
# Copyright 2009 Jean-Sebastien Gelinas <calestar@gmail.com>
# Copyright 2014 Alexandre Terrasa <alexandre@moz-code.org>
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
module toolcontext

import opts
import location
import version
import template

class Message
	super Comparable
	redef type OTHER: Message

	var location: nullable Location
	var text: String

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
	var error_count: Int = 0

	# Number of warnings
	var warning_count: Int = 0

	# Directory where to generate log files
	var log_directory: String = "logs"

	# Messages
	private var messages: Array[Message] = new Array[Message]
	private var message_sorter: ComparableSorter[Message] = new ComparableSorter[Message]

	fun check_errors
	do
		if messages.length > 0 then
			message_sorter.sort(messages)

			for m in messages do
				if opt_no_color.value then
					sys.stderr.write("{m}\n")
				else
					sys.stderr.write("{m.to_color_string}\n")
				end
			end

			messages.clear
		end

		if error_count > 0 then exit(1)
	end

	# Display an error
	fun error(l: nullable Location, s: String)
	do
		messages.add(new Message(l,s))
		error_count = error_count + 1
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
		if opt_warn.value == 0 then return
		messages.add(new Message(l,s))
		warning_count = warning_count + 1
		if opt_stop_on_first_error.value then check_errors
	end

	# Display an info
	fun info(s: String, level: Int)
	do
		if level <= verbose_level then
			print "{s}"
		end
	end

	# Executes a program while checking if it's available and if the execution ended correctly
	#
	# Stops execution and prints errors if the program isn't available or didn't end correctly
	fun exec_and_check(args: Array[String], error: String)
        do
                var prog = args.first
                args.remove_at 0

                # Is the wanted program available?
                var proc_which = new IProcess.from_a("which", [prog])
                proc_which.wait
                var res = proc_which.status
                if res != 0 then
                        print "{error}: executable \"{prog}\" not found"
                        exit 1
                end

                # Execute the wanted program
                var proc = new Process.from_a(prog, args)
                proc.wait
                res = proc.status
                if res != 0 then
                        print "{error}: execution of \"{prog} {args.join(" ")}\" failed"
                        exit 1
                end
        end

	# Global OptionContext
	var option_context: OptionContext = new OptionContext

	# Option --warn
	var opt_warn: OptionCount = new OptionCount("Show warnings", "-W", "--warn")

	# Option --quiet
	var opt_quiet: OptionBool = new OptionBool("Do not show warnings", "-q", "--quiet")

	# Option --log
	var opt_log: OptionBool = new OptionBool("Generate various log files", "--log")

	# Option --log-dir
	var opt_log_dir: OptionString = new OptionString("Directory where to generate log files", "--log-dir")

	# Option --help
	var opt_help: OptionBool = new OptionBool("Show Help (This screen)", "-h", "-?", "--help")

	# Option --version
	var opt_version: OptionBool = new OptionBool("Show version and exit", "--version")

	# Option --set-dummy-tool
	var opt_set_dummy_tool: OptionBool = new OptionBool("Set toolname and version to DUMMY. Useful for testing", "--set-dummy-tool")

	# Option --verbose
	var opt_verbose: OptionCount = new OptionCount("Verbose", "-v", "--verbose")

	# Option --stop-on-first-error
	var opt_stop_on_first_error: OptionBool = new OptionBool("Stop on first error", "--stop-on-first-error")

	# Option --no-color
	var opt_no_color: OptionBool = new OptionBool("Do not use color to display errors and warnings", "--no-color")

	# Option --bash-completion
	var opt_bash_completion: OptionBool = new OptionBool("Generate bash_completion file for this program", "--bash-completion")

	# Verbose level
	var verbose_level: Int = 0

	# Bash completion behavior in command line
	# see `BashCompletion`
	var bash_completion: BashCompletion

	init
	do
		bash_completion = new BashCompletion(self)
		option_context.add_option(opt_warn, opt_quiet, opt_stop_on_first_error, opt_no_color, opt_log, opt_log_dir, opt_help, opt_version, opt_set_dummy_tool, opt_verbose, opt_bash_completion)
	end

	# Name, usage and synopsis of the tool.
	# It is mainly used in `usage`.
	# Should be correctly set by the client before calling `process_options`
	# A multi-line string is recommmended.
	#
	# eg. `"Usage: tool [OPTION]... [FILE]...\nDo some things."`
	var tooldescription: String writable = "Usage: [OPTION]... [ARG]..."

	# Does `process_options` should accept an empty sequence of arguments.
	# ie. nothing except options.
	# Is `false` by default.
	#
	# If required, if should be set by the client before calling `process_options`
	var accept_no_arguments writable = false

	# print the full usage of the tool.
	# Is called by `process_option` on `--help`.
	# It also could be called by the client.
	fun usage
	do
		print tooldescription
		option_context.usage
	end

	# Parse and process the options given on the command line
	fun process_options(args: Sequence[String])
	do
		self.opt_warn.value = 1

		# init options
		option_context.parse(args)

		if opt_help.value then
			usage
			exit 0
		end

		if opt_version.value then
			print version
			exit 0
		end

		if opt_bash_completion.value then
			print bash_completion.write_to_string
			bash_completion.write_to_file("{sys.program_name}.bash")
			exit 0
		end

		var errors = option_context.get_errors
		if not errors.is_empty then
			for e in errors do print "Error: {e}"
			print tooldescription
			print "Use --help for help"
			exit 1
		end

		if option_context.rest.is_empty and not accept_no_arguments then
			print tooldescription
			print "Use --help for help"
			exit 1
		end

		# Set verbose level
		verbose_level = opt_verbose.value

		if self.opt_quiet.value then self.opt_warn.value = 0

		if opt_log_dir.value != null then log_directory = opt_log_dir.value.as(not null)
		if opt_log.value then
			# Make sure the output directory exists
			log_directory.mkdir
		end

		nit_dir = compute_nit_dir
	end

	# Get the current `nit_version` or "DUMMY_VERSION" if `--set-dummy-tool` is set.
	fun version: String do
		if opt_set_dummy_tool.value then
			return "DUMMY_VERSION"
		end
		return nit_version
	end

	# Get the name of the tool or "DUMMY_TOOL" id `--set-dummy-tool` is set.
	fun toolname: String do
		if opt_set_dummy_tool.value then
			return "DUMMY_TOOL"
		end
		return sys.program_name
	end

	# The identified root directory of the Nit project
	var nit_dir: nullable String

	private fun compute_nit_dir: nullable String
	do
		# a environ variable has precedence
		var res = "NIT_DIR".environ
		if not res.is_empty then return res

		# find the runpath of the program from argv[0]
		res = "{sys.program_name.dirname}/.."
		if res.file_exists and "{res}/src/nit.nit".file_exists then return res.simplify_path

		# find the runpath of the process from /proc
		var exe = "/proc/self/exe"
		if exe.file_exists then
			res = exe.realpath
			res = res.dirname.join_path("..")
			if res.file_exists and "{res}/src/nit.nit".file_exists then return res.simplify_path
		end

		return null
	end
end

# This class generates a compatible `bash_completion` script file.
#
# On some Linux systems `bash_completion` allow the program to control command line behaviour.
#
#	$ nitls [TAB][TAB]
#	file1.nit              file2.nit              file3.nit
#
#	$ nitls --[TAB][TAB]
#	--bash-toolname        --keep                 --path                 --tree
#	--depends              --log                  --project              --verbose
#	--disable-phase        --log-dir              --quiet                --version
#	--gen-bash-completion  --no-color             --recursive            --warn
#	--help                 --only-metamodel       --source
#	--ignore-visibility    --only-parse           --stop-on-first-error
#
# Generated file must be placed in system bash_completion directory `/etc/bash_completion.d/`
# or in the user directory `~/.bash_completion`.
class BashCompletion
	super Template

	var toolcontext: ToolContext

	init(toolcontext: ToolContext) do
		self.toolcontext = toolcontext
	end

	private fun extract_options_names: Array[String] do
		var names = new Array[String]
		for option in toolcontext.option_context.options do
			for name in option.names do
				if name.has_prefix("--") then names.add name
			end
		end
		return names
	end

	redef fun rendering do
		var name = toolcontext.toolname
		var option_names = extract_options_names
		addn "# generated bash completion file for {name} {toolcontext.version}"
		addn "_{name}()"
		addn "\{"
		addn "	local cur prev opts"
		addn "	COMPREPLY=()"
		addn "	cur=\"$\{COMP_WORDS[COMP_CWORD]\}\""
		addn "	prev=\"$\{COMP_WORDS[COMP_CWORD-1]\}\""
		if option_names != null then
			addn "	opts=\"{option_names.join(" ")}\""
			addn "	if [[ $\{cur\} == -* ]] ; then"
			addn "		COMPREPLY=( $(compgen -W \"$\{opts\}\" -- $\{cur\}) )"
			addn "		return 0"
			addn "	fi"
		end
		addn "  _filedir"
		addn "\}"
		addn "complete -F _{name} {name}"
	end
end
