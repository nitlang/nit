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
# limitations under the License.

# Manage repositories.
#
# A repository is a folder containing one or many Nit source files.
#
# see `$ nx repo`
module repo

import config

# A repository points to a `dir` containing Nit source files.
class NxRepo
	var name: String
	var dir: String
	redef fun to_s do return "{name}: {dir}"
end

redef class Command
	# List `NxRepo` from config.
	fun repos: Array[NxRepo] do
		var res = new Array[NxRepo]
		if config.has_key("repo") then
			for key, value in config.at("repo") do
				res.add load_repo(key)
			end
		end
		return res
	end

	# Load a NxRepo from config
	private fun load_repo(name: String): NxRepo do
		return new NxRepo(name, config["repo.{name}.dir"])
	end

	# Is the repo with `name` exists in `config`?
	fun has_repo(name: String): Bool do return config.has_key("repo.{name}")

	# Get the repo with `name`.
	fun repo(name: String): NxRepo do
		if not has_repo(name) then
			print "error: no reposity {name} found"
			print "try `neo repo add` before"
			exit(0)
		end
		return load_repo(name)
	end
end

# Dispatch args to subcommands of `$ nx repo`.
class RepoCtrl
	super Command

	redef var name = "repo"
	redef var desc = "manage nx repositories"
	redef var usage = "nx repo [OPTIONS]... <command>"

	private var opt_list = new OptionBool("list all repositories", "-l", "--list")
	private var cmd_list: RepoList

	init(parent: Command) do
		add_option opt_list
		controller = new Controller
		controller.add_command new RepoAdd(self)
		controller.add_command new RepoRm(self)
		controller.add_command new RepoSetDir(self)
		cmd_list = new RepoList(self)
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

# Add a new repo.
private class RepoAdd
	super Command

	redef var name = "add"
	redef var desc = "add a repository"
	redef var usage = "nx repo add <name> <dir>"

	redef fun process(argv) do
		var args = process_options(argv)
		if args.length != 2 then die
		var name = args[0]
		if has_repo(name) then
			print "error: repository {name} already exists"
			exit(0)
		end
		config["repo.{name}.dir"] = args[1]
		config.save
	end
end

# Remove repo
private class RepoRm
	super Command

	redef var name = "rm"
	redef var desc = "remove a repository"
	redef var usage = "nx repo rm <name>"

	redef fun process(argv) do
		var args = process_options(argv)
		if args.length != 1 then die
		var name = args[0]
		if not has_repo(name) then
			print "error: repository {name} does not exist"
			exit(0)
		end
		var key = "repo.{name}"
		config[key] = null
		config.save
	end
end

# Change repo directory.
private class RepoSetDir
	super Command

	redef var name = "set-dir"
	redef var desc = "change the directory for a repository"
	redef var usage = "nx repo set-dir <name> <newdir>"

	redef fun process(argv) do
		var args = process_options(argv)
		if args.length != 2 then die
		var name = args[0]
		if not has_repo(name) then
			print "error: repository {name} does not exist"
			exit(0)
		end
		config["repo.{name}.dir"] = args[1]
		config.save
	end
end

# Show all known repos.
private class RepoList
	super Command

	redef var name = "list"
	redef var desc = "list all repositories"
	redef var usage = "nx repo list"

	redef fun process(argv) do
		var args = process_options(argv)
		if args.length != 0 then die
		for repo in repos do
			print repo
		end
	end
end

