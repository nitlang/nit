# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Helpful features about packages
module nitpackage

import frontend

redef class ToolContext
	# --expand
	var opt_expand = new OptionBool("Move singleton packages to their own directory", "--expand")

	# --gen-ini
	var opt_gen_ini = new OptionBool("Generate package.ini files", "--gen-ini")

	# --force
	var opt_force = new OptionBool("Force update of existing files", "-f", "--force")

	# README handling phase
	var readme_phase: Phase = new ReadmePhase(self, null)

	redef init do
		super
		option_context.add_option(opt_expand, opt_force)
		option_context.add_option(opt_gen_ini)
	end
end

private class ReadmePhase
	super Phase

	redef fun process_mainmodule(mainmodule, mmodules) do
		var mpackages = extract_mpackages(mmodules)
		for mpackage in mpackages do

			# Fictive and buggy packages are ignored
			if not mpackage.has_source then
				toolcontext.warning(mpackage.location, "no-source",
					"Warning: `{mpackage}` has no source file")
				continue
			end

			# Expand packages
			if toolcontext.opt_expand.value and not mpackage.is_expanded then
				var path = mpackage.expand
				toolcontext.info("{mpackage} moved to {path}", 0)
			end
			if not mpackage.is_expanded then
				toolcontext.warning(mpackage.location, "no-dir",
					"Warning: `{mpackage}` has no package directory")
				continue
			end

			# Create INI file
			if toolcontext.opt_gen_ini.value then
				if not mpackage.has_ini or toolcontext.opt_force.value then
					var path = mpackage.gen_ini
					toolcontext.info("generated INI file `{path}`", 0)
				end
			end
		end
	end

	# Extract the list of packages from the mmodules passed as arguments
	fun extract_mpackages(mmodules: Collection[MModule]): Collection[MPackage] do
		var mpackages = new ArraySet[MPackage]
		for mmodule in mmodules do
			var mpackage = mmodule.mpackage
			if mpackage == null then continue
			mpackages.add mpackage
		end
		return mpackages.to_a
	end
end

redef class MPackage

	# Expand `self` in its own directory
	private fun expand: String do
		assert not is_expanded

		var ori_path = package_path.as(not null)
		var new_path = ori_path.dirname / name

		new_path.mkdir
		sys.system "mv {ori_path} {new_path / name}.nit"

		var ini_file = "{new_path}.ini"
		if ini_file.file_exists then
			sys.system "mv {new_path}.ini {new_path}/package.ini"
		end

		return new_path
	end

	private var maintainer: nullable String is lazy do
		return git_exec("git shortlog -esn . | head -n 1 | sed 's/\\s*[0-9]*\\s*//'")
	end

	private var contributors: Array[String] is lazy do
		var contribs = git_exec("git shortlog -esn . | head -n -1 | " +
			"sed 's/\\s*[0-9]*\\s*//'")
		if contribs == null then return new Array[String]
		return contribs.split("\n")
	end

	private var git_url: nullable String is lazy do
		var git = git_exec("git remote get-url origin")
		if git == null then return null
		git = git.replace("git@github.com:", "https://github.com/")
		git = git.replace("git@gitlab.com:", "https://gitlab.com/")
		return git
	end

	private var git_dir: nullable String is lazy do
		return git_exec("git rev-parse --show-prefix")
	end

	private var browse_url: nullable String is lazy do
		var git = git_url
		if git == null then return null
		var browse = git.replace(".git", "")
		var dir = git_dir
		if dir == null or dir.is_empty then return browse
		return "{browse}/tree/master/{dir}"
	end

	private var homepage_url: nullable String is lazy do
		var git = git_url
		if git == null then return null
		# Special case for nit files
		if git.has_suffix("/nit.git") then
			return "http://nitlanguage.org"
		end
		return git.replace(".git", "")
	end

	private var issues_url: nullable String is lazy do
		var git = git_url
		if git == null then return null
		return "{git.replace(".git", "")}/issues"
	end

	private var license: nullable String is lazy do
		var git = git_url
		if git == null then return null
		# Special case for nit files
		if git.has_suffix("/nit.git") then
			return "Apache-2.0"
		end
		return null
	end

	private fun git_exec(cmd: String): nullable String do
		var path = package_path
		if path == null then return null
		if not is_expanded then path = path.dirname
		with pr = new ProcessReader("sh", "-c", "cd {path} && {cmd}") do
			return pr.read_all.trim
		end
	end

	private fun gen_ini: String do
		var ini_path = self.ini_path.as(not null)
		var ini = new ConfigTree(ini_path)

		ini.update_value("package.name", name)
		ini.update_value("package.desc", "")
		ini.update_value("package.tags", "")
		ini.update_value("package.maintainer", maintainer)
		ini.update_value("package.more_contributors", contributors.join(","))
		ini.update_value("package.license", license or else "")

		ini.update_value("upstream.browse", browse_url)
		ini.update_value("upstream.git", git_url)
		ini.update_value("upstream.git.directory", git_dir)
		ini.update_value("upstream.homepage", homepage_url)
		ini.update_value("upstream.issues", issues_url)

		ini.save
		return ini_path
	end
end

redef class ConfigTree
	private fun update_value(key: String, value: nullable String) do
		if value == null then return
		if not has_key(key) then
			self[key] = value
		else
			var old_value = self[key]
			if not value.is_empty and old_value != value then
				self[key] = value
			end
		end
	end
end

# build toolcontext
var toolcontext = new ToolContext
var tpl = new Template
tpl.add "Usage: nitpackage [OPTION]... <file.nit>...\n"
tpl.add "Helpful features about packages."
toolcontext.tooldescription = tpl.write_to_string

# process options
toolcontext.process_options(args)
var arguments = toolcontext.option_context.rest

# build model
var model = new Model
var mbuilder = new ModelBuilder(model, toolcontext)
var mmodules = mbuilder.parse_full(arguments)

# process
if mmodules.is_empty then return
mbuilder.run_phases
toolcontext.run_global_phases(mmodules)
