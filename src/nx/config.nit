#This This file is part of NIT ( http://www.nitlanguage.org ).
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
# limitations under the License.module config

# Manage tool configuration from .ini files.
#
# Configuration command `neo config` allows user to edit config files from console.
#
# see `nx config`
module config

import base
import ini

redef class Command
	# Config file used by this command.
	# `config` is automatically imported at init from `parent` (if any)
	var config: nullable ConfigTree = null is protected writable

	redef init(parent) do
		super
		self.config = parent.config
	end
end

# Dispatch args to subcommands of `$ nx config`.
class ConfigCtrl
	super Command

	redef var name = "config"
	redef var desc = "manage tool configuration"
	redef var usage = "nx config [OPTION]... <command>"

	private var opt_list = new OptionBool("list all values", "-l", "--list")
	private var cmd_list: ConfigList

	init(parent: Command) do
		add_option opt_list
		controller = new Controller
		controller.add_command new ConfigSet(self)
		controller.add_command new ConfigUnset(self)
		controller.add_command new ConfigGet(self)
		cmd_list = new ConfigList(self)
		controller.add_command cmd_list
	end

	redef fun process(args) do
		process_options(args)
		if opt_list.value then
			cmd_list.process(new Array[String])
			exit(0)
		end
		super
	end
end

# Set config value at key.
private class ConfigSet
	super Command

	redef var name = "set"
	redef var desc = "set a value"
	redef var usage = "nx config set <key> <value>"

	redef fun process(argv) do
		var args = process_options(argv)
		if args.length != 2 then die
		config[args[0]] = args[1]
		config.save
	end
end

# Remove value at key.
private class ConfigUnset
	super Command

	redef var name = "unset"
	redef var desc = "unset a value"
	redef var usage = "nx config unset <key>"

	redef fun process(argv) do
		var args = process_options(argv)
		if args.length != 1 then die
		var key = args[0]
		config[key] = null
		config.save
	end
end

# Get value at key.
private class ConfigGet
	super Command

	redef var name = "get"
	redef var desc = "get a value"
	redef var usage = "nx config get <key>"

	redef fun process(argv) do
		var args = process_options(argv)
		if args.length != 1 then die
		var key = args[0]
		if not config.has_key(key) then
			print "error: config key `{key}` not found"
			exit(0)
		end
		print config[key]
	end
end

# List all config keys.
private class ConfigList
	super Command

	redef var name = "list"
	redef var desc = "list all values"
	redef var usage = "nx config list"

	redef fun process(argv) do
		var args = process_options(argv)
		if args.length != 0 then die
		for key, value in config.to_map do
			print "{key}={value}"
		end
	end
end


