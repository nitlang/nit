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

# Command line option handling for nx tool.
#
# Nx application is composed of controller and commands.
#
# A `Controller` can dispatch arguments to commands.
# A `Command` perform a task.
#
# How it works in nx?
#
# `nx` can be called with a multitude of commands:
#
#	 $ nx config
#	 $ nx repo
#	 $ nx neo
#
# `nx`, `config`, `repo` and `neo` are commands.
#
# Commands can embed a controller and then dispatch arguments to subcommands:
#
#	 $ nx config set
#	 $ nx config get
#
# Here `nx` and `config` both use a `Controller`.
module base

import toolcontext

# A Controller dispatch arguments from command line to commands.
class Controller

	# Commands used in dispatch.
	var commands = new Array[Command]

	# Add a `Command` to this controller.
	fun add_command(command: Command...) do commands.add_all command

	# Try to dispatch `args` to `commands`
	fun dispatch(argv: Array[String]): Bool do
		if not argv.is_empty then
			var args = argv.to_a
			var first = args.shift
			for command in commands do
				if command.accept(first) then
					command.process(args)
					return true
				end
			end
		end
		return false
	end

	# Display command list and descriptions
	fun usage do
		print "\nAvailable commands:\n"
		for command in commands do
			var spacing = "\t"
			if command.name.length <= 4 then spacing = spacing * 2
			print "   {command.name}{spacing}{command.desc}"
		end
	end
end

# A Command performs a task.
abstract class Command

	# The name of the command, also used to select the command in `Controller::dispatch`.
	fun name: String is abstract

	# Short description of the command.
	fun desc: String do return ""

	# The usage text to display.
	fun usage: String do return "[OPTIONS].. [ARG]..."

	# ToolContext for this command.
	# By default, each command gets its own ToolContext,
	# clients can decide to share them by redefining `Command::init`.
	var toolcontext: ToolContext

	# The parent `Command` of `self` or null if init as standalone.
	var parent: nullable Command

	# The controller for this command.
	# `null` by default, client can init it by redefining `Command::init`
	var controller: nullable Controller = null is protected writable

	init(parent: Command) do
		standalone
		self.parent = parent
	end

	# Init a `Command` with no `parent`.
	init standalone do
		toolcontext = new ToolContext
		toolcontext.accept_no_arguments = true
		toolcontext.tooldescription = "Usage: {usage}\n{desc}\n"
	end

	# Add an option to `toolcontext`
	fun add_option(options: Option...) do
		for option in options do toolcontext.option_context.add_option(option)
	end

	# Can the command be triggered with `name` as argument?
	fun accept(name: String): Bool do
		if name == self.name then return true
		return false
	end

	# Perform the command task.
	# If `controller != null` then try to dispatch arguments.
	fun process(args: Array[String]) do
		if controller != null then
			if controller.dispatch(args) then return
		end
		process_options(args)
		die
	end

	# Process options from `args` and return the rest.
	fun process_options(args: Array[String]): Array[String] do
		toolcontext.process_options(args)
		return toolcontext.option_context.rest
	end

	# Display usage for this command.
	fun command_usage do
		print "Usage: {usage}"
		print desc
		if controller != null then controller.usage
	end

	# Display usage and die.
	fun die do
		command_usage
		exit(0)
	end
end

