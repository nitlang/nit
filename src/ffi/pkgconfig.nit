# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2013 Alexis Laferrière <alexis.laf@xymus.net>
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

# Offers the `PkgconfigPhase` to use the external program "pkg-config" in order
# to discover what options to pass to the C or C++ compiler.
module pkgconfig

import c
private import annotation
private import literal

redef class ToolContext
	# Detects the `pkgconfig` annotation on the module declaration only
	var pkgconfig_phase: Phase = new PkgconfigPhase(self, [literal_phase])

	# Is the external program `pkg-config` available?
	var pkgconfig_is_available: Bool is lazy do
		# Ignore/silence the process output
		var proc_which = new ProcessReader("which", "pkg-config")
		proc_which.wait

		var status = proc_which.status
		if status != 0 then
			error(null, "Error: program `pkg-config` not found, make sure it is installed.")
			return false
		end
		return true
	end

	# Check if the `packages` are known by the external program `pkg-config`
	#
	# Missing packages are reported to the console via `ToolContext::error`.
	# Check for errors using `check_errors`.
	fun check_pkgconfig_packages(packages: Array[String])
	do
		if not pkgconfig_is_available then return

		for pkg in packages do
			var proc_exist = new Process("pkg-config", "--exists", pkg)
			proc_exist.wait
			var status = proc_exist.status
			if status == 1 then
				error(null,
					"Error: dev package for `{pkg}` unknown by `pkg-config`, install it with `apt-get`, `brew` or similar.")
			else if status != 0 then
				error(null,
					"Error: something went wrong calling `pkg-config`, make sure it is correctly configured.")
			end
		end
	end
end

# Detects the `pkgconfig` annotation on the module declaration only
private class PkgconfigPhase
	super Phase

	redef fun process_annotated_node(nmoduledecl, nat)
	do
		# Skip if we are not interested
		if nat.name != "pkgconfig" then return

		# Do some validity checks and print errors if the annotation is used incorrectly
		var modelbuilder = toolcontext.modelbuilder

		if not nmoduledecl isa AModuledecl then
			modelbuilder.error(nat, "Syntax Error: only the declaration of modules may use `pkgconfig`.")
			return
		end

		# retrieve module
		var nmodule = nmoduledecl.parent.as(AModule)
		var mmodule = nmodule.mmodule.as(not null)

		# target pkgs
		var pkgs = new Array[String]

		var args = nat.n_args
		if args.is_empty then
			# use module name
			pkgs.add(mmodule.name)
		else
			for arg in args do
				var pkg = arg.as_string
				if pkg == null then
					modelbuilder.error(nat, "Syntax Error: `pkgconfig` expects its arguments to be the name of the package as String literals.")
					return
				end

				pkgs.add(pkg)
			end
		end

		for pkg in pkgs do
			mmodule.pkgconfigs.add pkg
		end
	end
end
