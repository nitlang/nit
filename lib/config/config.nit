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

# Configuration options for nit tools and apps
#
# This module provides basic services for options handling in your Nit programs.
#
# ## Basic configuration holder
#
# The `Config` class can be used as a simple option holder and processor:
#
# ~~~
# import config
#
# # Create a new config option
# var opt_my = new OptionString("My option", "--my")
#
# # Create the config and add the option
# var config = new Config
# config.add_option(opt_my)
#
# # Parse the program arguments, usually `args`
# config.parse_options(["--my", "myOption", "arg1", "arg2"])
#
# # Access the options and args
# assert opt_my.value == "myOption"
# assert config.args == ["arg1", "arg2"]
# ~~~
#
# ## Custom configuration class
#
# Instead of using basic `Config` instances, it is better to define new sublcasses
# to store options and define custom services.
#
# ~~~
# import config
#
# class MyConfig
#	super Config
#
#	var opt_my = new OptionString("My option", "--my")
#
#	init do
#		super
#		tool_description = "Usage: MyExample [OPTION]... [ARGS]..."
#		add_option(opt_my)
#	end
#
#	fun my: String do return opt_my.value or else "Default value"
# end
#
# var config = new MyConfig
# config.parse_options(["--my", "myOption", "arg1", "arg2"])
#
# assert config.my == "myOption"
# assert config.args == ["arg1", "arg2"]
# ~~~
#
# We define the `my` method to provide an elegant shortcut to `opt_my.value`
# and define the default value if the option was not set by the user.
#
# The `tool_description` attribute is used to set the `usage` header printed when
# the user request the `help` message.
#
# ~~~
# config.parse_options(["-h"])
# if config.help then
#	config.usage
#	exit 0
# end
# ~~~
#
# This will display the tool usage like this:
#
# ~~~raw
# Usage: MyExample [OPTION]... [ARGS]...
#  -h, --help   Show this help message
#  --my         My option
# ~~~
#
# ## Configuration with `ini` file
#
# The `IniConfig` class extends `Config` to add an easy way to link your
# configuration to an ini file.
#
# ~~~
# class MyIniConfig
#	super IniConfig
#
#	var opt_my = new OptionString("My option", "--my")
#
#	init do
#		super
#		tool_description = "Usage: MyExample [OPTION]... [ARGS]..."
#		opts.add_option(opt_my)
#	end
#
#	fun my: String do return opt_my.value or else ini["my"] or else "Default"
# end
# ~~~
#
# This time, we define the `my` method to return the option value or the ini
# if no option was passed. Finally, if no ini value can be found, we return the
# default value.
#
# By default, `IniConfig` looks at a `config.ini` file in the execution directory.
# This can be overrided in multiple ways.
#
# First by the app user by setting the `--config` option:
#
# ~~~
# var config = new MyIniConfig
# config.parse_options(["--config", "my_config.ini"])
#
# assert config.config_file == "my_config.ini"
# ~~~
#
# Default config file can also be changed by the library client through the
# `default_config_file` attribute:
#
# ~~~
# config = new MyIniConfig
# config.default_config_file = "my_config.ini"
# config.parse_options(["arg"])
#
# assert config.config_file == "my_config.ini"
# ~~~
#
# Or by the library developper in the custom config class:
#
# ~~~
# class MyCustomIniConfig
#	super IniConfig
#
#	redef var default_config_file = "my_config.ini"
# end
#
# var config = new MyCustomIniConfig
# config.parse_options(["arg"])
#
# assert config.config_file == "my_config.ini"
# ~~~
module config

import ini
import opts

# Basic configuration class
#
# ~~~
# import config
#
# class MyConfig
#	super Config
#
#	var opt_my = new OptionString("My option", "--my")
#
#	init do
#		super
#		tool_description = "Usage: MyExample [OPTION]... [ARGS]..."
#		opts.add_option(opt_my)
#	end
#
#	fun my: String do return opt_my.value or else "Default value"
# end
#
# var config = new MyConfig
# config.parse_options(["--my", "hello", "arg1", "arg2"])
# assert config.my == "hello"
# assert config.args == ["arg1", "arg2"]
# ~~~
class Config

	# Context used to store and parse options
	var opts = new OptionContext

	# Help option
	var opt_help = new OptionBool("Show this help message", "-h", "-?", "--help")

	# Option --stub-man
	var opt_stub_man = new OptionBool("Generate a stub manpage in markdown format", "--stub-man")

	# Redefine this init to add your options
	init do
		add_option(opt_help, opt_stub_man)
		opt_stub_man.hidden = true
	end

	# Add an option to `self`
	#
	# Shortcut to `opts.add_option`.
	fun add_option(opt: Option...) do opts.add_option(opt...)

	# Initialize `self` options from `args`
	fun parse_options(args: Collection[String]) do
		opts.parse(args)

		if opt_stub_man.value then
			stub_man_options
			exit 0
		end
	end

	# Return the remaining args once options are parsed by `from_args`
	fun args: Array[String] do return opts.rest

	# Name, usage and synopsis of the tool.
	# It is mainly used in `usage`.
	# Should be correctly set by the client before calling `usage`
	# A multi-line string is recommended.
	#
	# eg. `"Usage: tool [OPTION]... [FILE]...\nDo some things."`
	var tool_description: String = "Usage: [OPTION]... [ARG]..." is writable

	# Was the `--help` option requested?
	fun help: Bool do return opt_help.value

	# Display `tool_description` and options usage in console
	fun usage do
		print tool_description
		print "\nOptions:"
		opts.usage
	end

	# Generate a manpage stub from `self`
	fun stub_man_options do
		var lines = tool_description.split("\n")
		var name = sys.program_name.basename
		var syn = lines.shift
		print "# NAME"
		print ""
		if lines.not_empty then
			printn "{name} - "
			print lines.join("\n")
			print ""
		end
		print "# SYNOPSIS"
		print ""
		print syn.replace("Usage: ", "")
		print ""
		print "# OPTIONS"
		for o in opts.options do
			if o.hidden then continue

			var first = true
			print ""
			printn "### "
			for n in o.names do
				if first then first = false else printn ", "
				printn "`{n}`"
			end
			print ""
			print "{o.helptext}."
		end
		exit 0
	end
end

# Configuration class based on a INI file.
#
# ~~~
# class MyIniConfig
#	super IniConfig
#
#	var opt_my = new OptionString("My option", "--my")
#
#	init do
#		super
#		tool_description = "Usage: MyExample [OPTION]... [ARGS]..."
#		opts.add_option(opt_my)
#	end
#
#	fun my: String do return opt_my.value or else ini["my"] or else "Default"
# end
#
# var config = new MyIniConfig
# config.default_config_file = "my_config.ini"
# config.parse_options(args)
#
# if config.help then
#	config.usage
#	exit 0
# end
#
# assert config.my == "Default"
# ~~~
class IniConfig
	super Config

	# Config tree used to store config options
	var ini: IniFile is noinit

	# Path to app config file
	var opt_config = new OptionString("Path to config file", "--config")

	init do
		super
		opts.add_option(opt_config)
	end

	redef fun parse_options(args) do
		super
		ini = new IniFile.from_file(config_file)
	end

	# Default config file path
	var default_config_file = "config.ini" is writable

	# Return the config file path from options or the default
	fun config_file: String do return opt_config.value or else default_config_file
end
