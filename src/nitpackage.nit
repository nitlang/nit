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
import doc::commands::commands_main

redef class ToolContext
	# --expand
	var opt_expand = new OptionBool("Move singleton packages to their own directory", "--expand")

	# --check-ini
	var opt_check_ini = new OptionBool("Check package.ini files", "--check-ini")

	# --gen-ini
	var opt_gen_ini = new OptionBool("Generate package.ini files", "--gen-ini")

	# --force
	var opt_force = new OptionBool("Force update of existing files", "-f", "--force")

	# --check-makefile
	var opt_check_makefile = new OptionBool("Check Makefile files", "--check-makefile")

	# --gen-makefile
	var opt_gen_makefile = new OptionBool("Generate Makefile files", "--gen-makefile")

	# nitpackage phase
	var nitpackage_phase: Phase = new NitPackagePhase(self, null)

	redef init do
		super
		option_context.add_option(opt_expand, opt_force)
		option_context.add_option(opt_check_ini, opt_gen_ini)
		option_context.add_option(opt_check_makefile, opt_gen_makefile)
	end
end

private class NitPackagePhase
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

			# Check package INI files
			if toolcontext.opt_check_ini.value then
				mpackage.check_ini(toolcontext)
				continue
			end

			# Check package Makefiles
			if toolcontext.opt_check_makefile.value then
				mpackage.check_makefile(toolcontext, mainmodule)
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

			# Create Makefile
			if toolcontext.opt_gen_makefile.value then
				if not mpackage.has_makefile or toolcontext.opt_force.value then
					var path = mpackage.gen_makefile(toolcontext.modelbuilder.model, mainmodule)
					if path != null then
						toolcontext.info("generated Makefile `{path}`", 0)
					end
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

	private var allowed_ini_keys = [
		"package.name", "package.desc", "package.tags", "package.license",
		"package.maintainer", "package.more_contributors",
		"upstream.browse", "upstream.git", "upstream.git.directory",
		"upstream.homepage", "upstream.issues"
		]

	private fun check_ini(toolcontext: ToolContext) do
		if not has_ini then
			toolcontext.error(location, "No `package.ini` file for `{name}`")
			return
		end

		var pkg_path = package_path
		if pkg_path == null then return

		var ini_path = ini_path
		if ini_path == null then return

		var ini = new ConfigTree(ini_path)

		ini.check_key(toolcontext, self, "package.name", name)
		ini.check_key(toolcontext, self, "package.desc")
		ini.check_key(toolcontext, self, "package.tags")

		# FIXME since `git reflog --follow` seems bugged
		ini.check_key(toolcontext, self, "package.maintainer")
		# var maint = mpackage.maintainer
		# if maint != null then
			# ini.check_key(toolcontext, self, "package.maintainer", maint)
		# end

		# FIXME since `git reflog --follow` seems bugged
		# var contribs = mpackage.contributors
		# if contribs.not_empty then
			# ini.check_key(toolcontext, self, "package.more_contributors", contribs.join(", "))
		# end

		ini.check_key(toolcontext, self, "package.license", license)
		ini.check_key(toolcontext, self, "upstream.browse", browse_url)
		ini.check_key(toolcontext, self, "upstream.git", git_url)
		ini.check_key(toolcontext, self, "upstream.git.directory", git_dir)
		ini.check_key(toolcontext, self, "upstream.homepage", homepage_url)
		ini.check_key(toolcontext, self, "upstream.issues", issues_url)

		for key in ini.to_map.keys do
			if not allowed_ini_keys.has(key) then
				toolcontext.warning(location, "unknown-ini-key",
					"Warning: ignoring unknown `{key}` key in `{ini.ini_file}`")
			end
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

	# Makefile

	# The path to `self` Makefile
	fun makefile_path: nullable String do
		var path = package_path
		if path == null then return null
		if not is_expanded then return null
		return path / "Makefile"
	end

	# Does `self` have a Makefile?
	fun has_makefile: Bool do
		var makefile_path = self.makefile_path
		if makefile_path == null then return false
		return makefile_path.file_exists
	end

	private fun check_makefile(toolcontext: ToolContext, mainmodule: MModule) do
		var model = toolcontext.modelbuilder.model
		var filter = new ModelFilter(accept_example = false, accept_test = false)
		var view = new ModelView(model, mainmodule, filter)

		var cmd_bin = new CmdMains(view, mentity = self)
		var res_bin = cmd_bin.init_command
		if not res_bin isa CmdSuccess then return

		for mmodule in cmd_bin.results.as(not null) do
			if not mmodule isa MModule then continue

			if mmodule.makefile_path == null then
				toolcontext.warning(location, "missing-makefile",
					"Warning: no Makefile for executable module `{mmodule.full_name}`")
			end
		end
	end

	private fun gen_makefile(model: Model, mainmodule: MModule): nullable String do
		var filter = new ModelFilter(accept_example = false, accept_test = false)
		var view = new ModelView(model, mainmodule, filter)

		var pkg_path = package_path.as(not null)
		var makefile_path = makefile_path.as(not null)

		var bins = new Array[String]
		var cmd_bin = new CmdMains(view, mentity = self)
		var res_bin = cmd_bin.init_command
		if res_bin isa CmdSuccess then
			for mmodule in cmd_bin.results.as(not null) do
				if not mmodule isa MModule then continue
				var mmodule_makefile = mmodule.makefile_path
				if mmodule_makefile != null and mmodule_makefile != makefile_path then continue

				var file = mmodule.location.file
				if file == null then continue
				# Remove package path prefix
				var bin_path = file.filename
				if pkg_path.has_suffix("/") then
					bin_path = bin_path.replace(pkg_path, "")
				else
					bin_path = bin_path.replace("{pkg_path}/", "")
				end
				bins.add bin_path
			end
		end

		if  bins.is_empty then return null

		var make = new NitMakefile(bins)
		make.render.write_to_file(makefile_path)
		return makefile_path
	end
end

redef class MModule
	private fun makefile_path: nullable String do
		var file = location.file
		if file == null then return null

		var dir = file.filename.dirname
		var makefile = (dir / "Makefile")
		if not makefile.file_exists then return null

		for line in makefile.to_path.read_lines do
			if line.has_prefix("{name}:") then return makefile
		end
		return null
	end
end

redef class ConfigTree
	private fun check_key(toolcontext: ToolContext, mpackage: MPackage, key: String, value: nullable String) do
		if not has_key(key) then
			toolcontext.warning(mpackage.location, "missing-ini-key",
				"Warning: missing `{key}` key in `{ini_file}`")
			return
		end
		if self[key].as(not null).is_empty then
			toolcontext.warning(mpackage.location, "missing-ini-value",
				"Warning: empty `{key}` key in `{ini_file}`")
			return
		end
		if value != null and self[key] != value then
			toolcontext.warning(mpackage.location, "wrong-ini-value",
				"Warning: wrong value for `{key}` in `{ini_file}`. " +
				"Expected `{value}`, got `{self[key] or else ""}`")
		end
	end

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

# A Makefile for the Nit project
class NitMakefile

	# Nit files to compile
	var nit_files: Array[String]

	# List of rules to add in the Makefile
	fun rules: Array[MakeRule] do
		var rules = new Array[MakeRule]

		var rule_all = new MakeRule("all", is_phony = true)
		rules.add rule_all

		for file in nit_files do
			var bin = file.basename.strip_extension

			rule_all.deps.add "bin/{bin}"

			var rule = new MakeRule("bin/{bin}")
			rule.deps.add "$(shell $(NITLS) -M {file})"
			rule.lines.add "mkdir -p bin/"
			rule.lines.add "$(NITC) {file} -o bin/{bin}"
			rules.add rule
		end

		var rule_check = new MakeRule("check", is_phony = true)
		rule_check.lines.add "$(NITUNIT) ."
		rules.add rule_check

		var rule_doc = new MakeRule("doc", is_phony = true)
		rule_doc.lines.add "$(NITDOC) . -o doc/"
		rules.add rule_doc

		var rule_clean = new MakeRule("clean", is_phony = true)
		if nit_files.not_empty then
			rule_clean.lines.add "rm -rf bin/"
		end
		rule_clean.lines.add "rm -rf doc/"
		rules.add rule_clean

		return rules
	end

	# Render `self`
	fun render: Writable do
		var tpl = new Template
		tpl.addn """
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
# limitations under the License.\n"""

		if nit_files.not_empty then
			tpl.addn "NITC ?= nitc"
			tpl.addn "NITLS ?= nitls"
		end
		tpl.addn "NITUNIT ?= nitunit"
		tpl.addn "NITDOC ?= nitdoc"

		for rule in rules do
			tpl.add "\n{rule.render.write_to_string}"
		end

		return tpl
	end
end

# A rule that goes into a Makefile
class MakeRule

	# Rule name
	var name: String

	# Is this rule a `.PHONY` one?
	var is_phony: Bool = false is optional

	# Rule dependencies
	var deps = new Array[String]

	# Rule lines
	var lines = new Array[String]

	# Render `self`
	fun render: Writable do
		var tpl = new Template
		if is_phony then
			tpl.addn ".PHONY: {name}"
		end
		tpl.add "{name}:"
		if deps.not_empty then
			tpl.add " {deps.join(" ")}"
		end
		tpl.add "\n"
		for line in lines do
			tpl.addn "\t{line}"
		end
		return tpl
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
