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

	# README handling phase
	var readme_phase: Phase = new ReadmePhase(self, null)

	redef init do
		super
		option_context.add_option(opt_expand)
	end
end

private class ReadmePhase
	super Phase

	redef fun process_mainmodule(mainmodule, mmodules) do
		var expand_packages = toolcontext.opt_expand.value
		var model = toolcontext.modelbuilder.model

		for mpackage in model.mpackages do

			# Fictive and buggy packages are ignored
			if not mpackage.has_source then
				toolcontext.warning(mpackage.location, "no-source",
					"Warning: `{mpackage}` has no source file")
				continue
			end

			# Expand packages
			if not mpackage.is_expanded then
				if expand_packages then
					var path = mpackage.expand
					toolcontext.info("{mpackage} moved to {path}", 0)
				else
					toolcontext.warning(mpackage.location, "no-dir",
						"Warning: `{mpackage}` has no package directory")
					continue
				end
			end
		end
	end
end

redef class MPackage

	# Does `self` have a source file?
	private var has_source: Bool is lazy do
		return location.file != null
	end

	# Is `self` in its own directory?
	private var is_expanded: Bool is lazy do
		if not has_source then return false
		var path = location.file.as(not null).filename
		if path.has_suffix(".nit") then return false
		return true
	end

	# Expand `self` in its own directory
	private fun expand: String do
		assert not is_expanded

		var ori_path = location.file.as(not null).filename
		var new_path = ori_path.dirname / name

		new_path.mkdir
		sys.system "mv {ori_path} {new_path / name}.nit"

		var ini_file = "{new_path}.ini"
		if ini_file.file_exists then
			sys.system "mv {new_path}.ini {new_path}/package.ini"
		end

		return new_path
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
