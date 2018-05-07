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
