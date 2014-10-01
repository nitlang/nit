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

# Common command-line tool infrastructure than handle options and error messages
module toolcontext

import opts
import location
import version
import template

# A warning or an error
class Message
	super Comparable
	redef type OTHER: Message

	# The origin of the message in the source code, if any.
	var location: nullable Location

	# The category of the message.
	#
	# Used by quality-control tool for statistics or to enable/disable things individually.
	var tag: nullable String

	# The human-readable description of the message.
	#
	# It should be short and fit on a single line.
	# It should also have meaningful information first in case
	# on truncation by an IDE for instance.
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

	# A colored version of the message including the original source line
	fun to_color_string: String
	do
		var esc = 27.ascii
		#var red = "{esc}[0;31m"
		#var bred = "{esc}[1;31m"
		#var green = "{esc}[0;32m"
		var yellow = "{esc}[0;33m"
		var def = "{esc}[0m"

		var tag = tag
		if tag != null then
			tag = " ({tag})"
		else
			tag = ""
		end
		var l = location
		if l == null then
			return "{text}{tag}"
		else if l.file == null then
			return "{yellow}{l}{def}: {text}{tag}"
		else
			return "{yellow}{l}{def}: {text}{tag}\n{l.colored_line("1;31")}"
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
	private var messages = new Array[Message]
	private var message_sorter = new ComparableSorter[Message]

	# Output all current stacked messages.
	# If some errors occurred, exits the program.
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

		if error_count > 0 then
			errors_info
			exit(1)
		end
	end

	# Display total error informations
	fun errors_info
	do
		if error_count == 0 and warning_count == 0 then return
		if opt_no_color.value then return
		sys.stderr.write "Errors: {error_count}. Warnings: {warning_count}.\n"
	end

	# Display an error
	fun error(l: nullable Location, s: String)
	do
		messages.add(new Message(l,null,s))
		error_count = error_count + 1
		if opt_stop_on_first_error.value then check_errors
	end

	# Add an error, show errors and quit
	fun fatal_error(l: nullable Location, s: String)
	do
		error(l,s)
		check_errors
	end

	# Display a first-level warning.
	#
	# First-level warnings are warnings that SHOULD be corrected,
	# and COULD usually be immediately corrected.
	#
	# * There is a simple correction
	# * There is no reason to let the code this way (no reasonable @supresswarning-like annotation)
	# * They always are real issues (no false positive)
	#
	# First-level warnings are displayed by default (except if option `-q` is given).
	fun warning(l: nullable Location, tag: String, text: String)
	do
		if opt_warning.value.has("no-{tag}") then return
		if not opt_warning.value.has(tag) and opt_warn.value == 0 then return
		messages.add(new Message(l, tag, text))
		warning_count = warning_count + 1
		if opt_stop_on_first_error.value then check_errors
	end

	# Display a second-level warning.
	#
	# Second-level warnings are warnings that should require investigation,
	# but cannot always be immediately corrected.
	#
	# * The correction could be complex. e.g. require a refactorisation or an API change.
	# * The correction cannot be done. e.g. Code that use a deprecated API for some compatibility reason.
	# * There is not a real issue (false positive). Note that this should be unlikely.
	# * Transitional: While a real warning, it fires a lot in current code, so a transition is needed
	#   in order to fix them before promoting the advice to a warning.
	#
	# In order to prevent warning inflation à la Java, second-level warnings are not displayed by
	# default and require an additional option `-W`.
	fun advice(l: nullable Location, tag: String, text: String)
	do
		if opt_warning.value.has("no-{tag}") then return
		if not opt_warning.value.has(tag) and opt_warn.value <= 1 then return
		messages.add(new Message(l, tag, text))
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
	var option_context = new OptionContext

	# Option --warn
	var opt_warn = new OptionCount("Show more warnings", "-W", "--warn")

	# Option --warning
	var opt_warning = new OptionArray("Show/hide a specific warning", "-w", "--warning")

	# Option --quiet
	var opt_quiet = new OptionBool("Do not show warnings", "-q", "--quiet")

	# Option --log
	var opt_log = new OptionBool("Generate various log files", "--log")

	# Option --log-dir
	var opt_log_dir = new OptionString("Directory where to generate log files", "--log-dir")

	# Option --help
	var opt_help = new OptionBool("Show Help (This screen)", "-h", "-?", "--help")

	# Option --version
	var opt_version = new OptionBool("Show version and exit", "--version")

	# Option --set-dummy-tool
	var opt_set_dummy_tool = new OptionBool("Set toolname and version to DUMMY. Useful for testing", "--set-dummy-tool")

	# Option --verbose
	var opt_verbose = new OptionCount("Verbose", "-v", "--verbose")

	# Option --stop-on-first-error
	var opt_stop_on_first_error = new OptionBool("Stop on first error", "--stop-on-first-error")

	# Option --no-color
	var opt_no_color = new OptionBool("Do not use color to display errors and warnings", "--no-color")

	# Option --bash-completion
	var opt_bash_completion = new OptionBool("Generate bash_completion file for this program", "--bash-completion")

	# Verbose level
	var verbose_level: Int = 0

	init
	do
		option_context.add_option(opt_warn, opt_warning, opt_quiet, opt_stop_on_first_error, opt_no_color, opt_log, opt_log_dir, opt_help, opt_version, opt_set_dummy_tool, opt_verbose, opt_bash_completion)
	end

	# Name, usage and synopsis of the tool.
	# It is mainly used in `usage`.
	# Should be correctly set by the client before calling `process_options`
	# A multi-line string is recommmended.
	#
	# eg. `"Usage: tool [OPTION]... [FILE]...\nDo some things."`
	var tooldescription: String = "Usage: [OPTION]... [ARG]..." is writable

	# Does `process_options` should accept an empty sequence of arguments.
	# ie. nothing except options.
	# Is `false` by default.
	#
	# If required, if should be set by the client before calling `process_options`
	var accept_no_arguments = false is writable

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
			var bash_completion = new BashCompletion(self)
			bash_completion.write_to(sys.stdout)
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
		return sys.program_name.basename("")
	end

	# The identified root directory of the Nit project
	var nit_dir: nullable String = null

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
# Generated file can be placed in system bash_completion directory `/etc/bash_completion.d/`
# or source it in `~/.bash_completion`.
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
		addn "\} &&"
		addn "complete -o default -F _{name} {name}"
	end
end
