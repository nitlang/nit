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
import more_collections

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
	# eg. "Error: cannot find method `foo`."
	#
	# A good message should:
	#
	# * start with a message type like "Error:", "Syntax Error:", "Warning:".
	#   The type is capitalized and terminated by a column.
	#   The rest on the message starts with a lowercase letter and is terminated with a dot.
	#
	# * be short and fit on a single line.
	#
	# * have meaningful information first.
	#   This helps the reader and remain usable
	#   when truncated, by an IDE for instance.
	#
	# * enclose identifiers, keywords and pieces of code with back-quotes.
	var text: String

	# The severity level
	#
	# * 0 is advices (see `ToolContext::advice`)
	# * 1 is warnings (see `ToolContext::warning`)
	# * 2 is errors (see `ToolContext::error`)
	var level: Int

	# Comparisons are made on message locations.
	redef fun <(other: OTHER): Bool do
		if location == null then return true
		if other.location == null then return false

		return location.as(not null) < other.location.as(not null)
	end

	redef fun ==(other): Bool do
		if not other isa Message then return false
		return location == other.location and tag == other.tag and text == other.text
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
		var esc = 27.code_point
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

redef class Location
	# Errors and warnings associated to this location.
	var messages: nullable Array[Message]

	# Add a message to `self`
	#
	# See `messages`
	private fun add_message(m: Message)
	do
		var ms = messages
		if ms == null then
			ms = new Array[Message]
			messages = ms
		end
		ms.add m
		var s = file
		if s != null then s.messages.add m
	end
end

redef class SourceFile
	# Errors and warnings associated to the whole source.
	var messages = new Array[Message]
end

# Global context for tools
class ToolContext
	# Number of errors
	var error_count: Int = 0 is writable

	# Number of warnings
	var warning_count: Int = 0

	# Directory where to generate log files
	var log_directory: String = "logs"

	# Stream in `log_directory` where all info messages are written
	var log_info: nullable Writer = null

	# Messages
	private var messages = new Array[Message]
	private var message_sorter: Comparator = default_comparator

	# Does an error prevent the program to stop at `check_errors`?
	#
	# Default to false.
	# Set this value to `true` if you need to keep the program going in case of error.
	var keep_going = false is writable

	# List of tags per source-file whose warnings are not displayed.
	#
	# Initially empty, it is up to the toll to fill it.
	# The tag "all" means all warnings and advices.
	var warning_blacklist = new MultiHashMap[SourceFile, String]

	# Is the source-file of `l` associated with `tag` in `warning_blacklist`?
	#
	# currently returns `false` if `l` is null or does not have a source-file.
	fun is_warning_blacklisted(l: nullable Location, tag: String): Bool
	do
		if l == null then return false
		var f = l.file
		if f == null then return false
		var tags = warning_blacklist.get_or_null(f)
		if tags == null then return false
		return tags.has("all") or tags.has(tag)
	end

	# Output all current stacked messages, total and exit the program
	#
	# If there is no error, exit with 0, else exit with 1.
	fun quit
	do
		check_errors
		errors_info
		if error_count > 0 then exit(1) else exit(0)
	end

	# Output all current stacked messages
	#
	# Return true if no errors occurred.
	#
	# If some errors occurred, the behavior depends on the value of `keep_going`.
	# If `keep_going` is false, then the total error informations is displayed and the program exits.
	# Else, false is returned.
	fun check_errors: Bool
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
			if not keep_going then
				errors_info
				exit(1)
			end
			return false
		end
		return true
	end

	# Display total error informations
	fun errors_info
	do
		if error_count == 0 and warning_count == 0 then return
		if opt_no_color.value then return
		sys.stderr.write "Errors: {error_count}. Warnings: {warning_count}.\n"
	end

	# Display an error
	#
	# Return the message (to add information)
	fun error(l: nullable Location, s: String): Message
	do
		var m = new Message(l, null, s, 2)
		if messages.has(m) then return m
		if l != null then l.add_message m
		if opt_warn.value <= -1 then return m
		messages.add m
		error_count = error_count + 1
		if opt_stop_on_first_error.value then check_errors
		return m
	end

	# Add an error, show errors and quit
	#
	# Because the program will quit, nothing is returned.
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
	#
	# Return the message (to add information) or null if the warning is disabled
	fun warning(l: nullable Location, tag: String, text: String): nullable Message
	do
		if is_warning_blacklisted(l, tag) then return null
		var m = new Message(l, tag, text, 1)
		if messages.has(m) then return null
		if l != null then l.add_message m
		if opt_warning.value.has("no-{tag}") then return null
		if not opt_warning.value.has(tag) and opt_warn.value <= 0 then return null
		messages.add m
		warning_count = warning_count + 1
		if opt_stop_on_first_error.value then check_errors
		return m
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
	#
	# Return the message (to add information) or null if the warning is disabled
	fun advice(l: nullable Location, tag: String, text: String): nullable Message
	do
		if is_warning_blacklisted(l, tag) then return null
		var m = new Message(l, tag, text, 0)
		if messages.has(m) then return null
		if l != null then l.add_message m
		if opt_warning.value.has("no-{tag}") then return null
		if not opt_warning.value.has(tag) and opt_warn.value <= 1 then return null
		messages.add m
		warning_count = warning_count + 1
		if opt_stop_on_first_error.value then check_errors
		return m
	end

	# Display an info
	fun info(s: String, level: Int)
	do
		if level <= verbose_level then
			print "{s}"
		end
		if log_info != null then
			log_info.write s
			log_info.write "\n"
		end
	end

	# Executes a program while checking if it's available and if the execution ended correctly
	#
	# Stops execution and prints errors if the program isn't available or didn't end correctly
	fun exec_and_check(args: Array[String], error: String)
	do
		info("+ {args.join(" ")}", 2)

		var prog = args.first
		args.remove_at 0

		# Is the wanted program available?
		var proc_which = new ProcessReader.from_a("which", [prog])
		proc_which.wait
		var res = proc_which.status
		if res != 0 then
			print_error "{error}: executable \"{prog}\" not found"
			exit 1
		end

		# Execute the wanted program
		var proc = new Process.from_a(prog, args)
		proc.wait
		res = proc.status
		if res != 0 then
			print_error "{error}: execution of \"{prog} {args.join(" ")}\" failed"
			exit 1
		end
	end

	# Global OptionContext
	var option_context = new OptionContext

	# Option --warn
	var opt_warn = new OptionCount("Show additional warnings (advices)", "-W", "--warn")

	# Option --warning
	var opt_warning = new OptionArray("Show/hide a specific warning", "-w", "--warning")

	# Option --quiet
	var opt_quiet = new OptionBool("Do not show warnings", "-q", "--quiet")

	# Option --log
	var opt_log = new OptionBool("Generate various log files", "--log")

	# Option --log-dir
	var opt_log_dir = new OptionString("Directory where to generate log files", "--log-dir")

	# Option --nit-dir
	var opt_nit_dir = new OptionString("Base directory of the Nit installation", "--nit-dir")

	# Option --share-dir
	var opt_share_dir = new OptionString("Directory containing tools assets", "--share-dir")

	# Option --help
	var opt_help = new OptionBool("Show Help (This screen)", "-h", "-?", "--help")

	# Option --version
	var opt_version = new OptionBool("Show version and exit", "--version")

	# Option --set-dummy-tool
	var opt_set_dummy_tool = new OptionBool("Set toolname and version to DUMMY. Useful for testing", "--set-dummy-tool")

	# Option --verbose
	var opt_verbose = new OptionCount("Additional messages from the tool", "-v", "--verbose")

	# Option --stop-on-first-error
	var opt_stop_on_first_error = new OptionBool("Just display the first encountered error then stop", "--stop-on-first-error")

	# Option --keep-going
	var opt_keep_going = new OptionBool("Continue after errors, whatever the consequences", "--keep-going")

	# Option --no-color
	var opt_no_color = new OptionBool("Do not use color to display errors and warnings", "--no-color")

	# Option --bash-completion
	var opt_bash_completion = new OptionBool("Generate bash_completion file for this program", "--bash-completion")

	# Option --stub-man
	var opt_stub_man = new OptionBool("Generate a stub manpage in pandoc markdown format", "--stub-man")

	# Option --no-contract
	var opt_no_contract = new OptionBool("Disable the contracts usage", "--no-contract")

	# Option --full-contract
	var opt_full_contract = new OptionBool("Enable all contracts usage", "--full-contract")

	# Option --in-out-invariant
	var opt_in_out_invariant = new OptionBool("Enable the verification of invariant contracts in enter and exit", "--in-out-invariant")

	# Option --self-contract
	var opt_no_self_contract = new OptionBool("Disable the verification of contracts in self", "--no-self-contract")

	# Verbose level
	var verbose_level: Int = 0

	init
	do
		option_context.add_option(opt_warn, opt_warning, opt_quiet, opt_stop_on_first_error, opt_keep_going, opt_no_color, opt_log, opt_log_dir, opt_nit_dir, opt_help, opt_version, opt_set_dummy_tool, opt_verbose, opt_bash_completion, opt_stub_man, opt_no_contract, opt_full_contract, opt_in_out_invariant, opt_no_self_contract)

		# Hide some internal options
		opt_stub_man.hidden = true
		opt_bash_completion.hidden = true
		opt_set_dummy_tool.hidden = true
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

		if opt_stub_man.value then
			print """
# NAME

{{{tooldescription.split("\n")[1]}}}

# SYNOPSYS

# OPTIONS
"""
			for o in option_context.options do
				var first = true
				printn "### "
				for n in o.names do
					if first then first = false else printn ", "
					printn "`{n}`"
				end
				print ""
				print "{o.helptext}."
				print ""
			end
			print """
# SEE ALSO

The Nit language documentation and the source code of its tools and libraries may be downloaded from <http://nitlanguage.org>"""
			exit 0
		end

		var errors = option_context.errors
		if not errors.is_empty then
			for e in errors do print "Error: {e}"
			print tooldescription
			print "Use --help for help"
			exit 1
		end

		nit_dir = locate_nit_dir

		if option_context.rest.is_empty and not accept_no_arguments then
			print tooldescription
			print "Use --help for help"
			exit 1
		end

		# Set verbose level
		verbose_level = opt_verbose.value

		if opt_keep_going.value then keep_going = true

		if self.opt_quiet.value then self.opt_warn.value = 0

		if opt_log_dir.value != null then log_directory = opt_log_dir.value.as(not null)
		if opt_log.value then
			# Make sure the output directory exists
			log_directory.mkdir

			# Redirect the verbose messages
			log_info = (log_directory/"info.txt").to_path.open_wo
		end
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
		return sys.program_name.basename
	end

	# The identified root directory of the Nit package
	#
	# It is assignable but is automatically set by `process_options` with `locate_nit_dir`.
	var nit_dir: nullable String = null is writable

	# Shared files directory.
	#
	# Most often `nit/share/`.
	var share_dir: String is lazy do
		var sharedir = opt_share_dir.value
		if sharedir == null then
			sharedir = nit_dir / "share"
			if not sharedir.file_exists then
				fatal_error(null, "Fatal Error: cannot locate shared files directory in {sharedir}. Uses --share-dir to define it's location.")
			end
		end
		return sharedir
	end

	# Guess a possible nit_dir.
	#
	# It uses, in order:
	#
	# * the option `opt_nit_dir`
	# * the environment variable `NIT_DIR`
	# * the runpath of the program from argv[0]
	# * the runpath of the process from /proc
	# * the search in PATH
	#
	# If there is errors (e.g. the indicated path is invalid) or if no
	# path is found, then an error is displayed and the program exits.
	#
	# The result is returned without being assigned to `nit_dir`.
	# This function is automatically called by `process_options`
	fun locate_nit_dir: String
	do
		# the option has precedence
		var res = opt_nit_dir.value
		if res != null then
			if not check_nit_dir(res) then
				fatal_error(null, "Fatal Error: the value of --nit-dir does not seem to be a valid base Nit directory: {res}.")
			end
			return res
		end

		# then the environ variable has precedence
		res = "NIT_DIR".environ
		if not res.is_empty then
			if not check_nit_dir(res) then
				fatal_error(null, "Fatal Error: the value of NIT_DIR does not seem to be a valid base Nit directory: {res}.")
			end
			return res
		end

		# find the runpath of the program from argv[0]
		res = "{sys.program_name.dirname}/.."
		if check_nit_dir(res) then return res.simplify_path

		# find the runpath of the process from /proc
		var exe = "/proc/self/exe"
		if exe.file_exists then
			res = exe.realpath
			res = res.dirname.join_path("..")
			if check_nit_dir(res) then return res.simplify_path
		end

		# search in the PATH
		var path_sep = if is_windows then ";" else ":"
		var ps = "PATH".environ.split(path_sep)
		for p in ps do
			res = p/".."
			if check_nit_dir(res) then return res.simplify_path
		end

		fatal_error(null, "Fatal Error: cannot locate a valid base Nit directory. It is quite unexpected. Try to set the environment variable `NIT_DIR` or to use the `--nit-dir` option.")
		abort
	end

	private fun check_nit_dir(res: String): Bool
	do
		return res.file_exists and "{res}/src/nit.nit".file_exists
	end
end

# This class generates a compatible `bash_completion` script file.
#
# On some Linux systems `bash_completion` allow the program to control command line behaviour.
#
# ~~~sh
# $ nitls [TAB][TAB]
# file1.nit              file2.nit              file3.nit
#
# $ nitls --[TAB][TAB]
# --bash-toolname        --keep                 --path                 --tree
# --depends              --log                  --package              --verbose
# --disable-phase        --log-dir              --quiet                --version
# --gen-bash-completion  --no-color             --recursive            --warn
# --help                 --only-metamodel       --source
# --ignore-visibility    --only-parse           --stop-on-first-error
# ~~~
#
# Generated file can be placed in system bash_completion directory `/etc/bash_completion.d/`
# or source it in `~/.bash_completion`.
class BashCompletion
	super Template

	var toolcontext: ToolContext

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
		if not option_names.is_empty then
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
