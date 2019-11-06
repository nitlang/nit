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

# Platform system, used to customize the behavior of the compiler.
#
# Customisation is done accordingly to the target platform.
# Also detects conflicts between targeted platforms.
module platform

import modelize
private import parser_util
private import annotation

redef class ToolContext
	# Detects the `platform` annotation to set a mobile target platform
	var platform_phase: Phase = new PlatformPhase(self, [modelize_property_phase])

	# Get platform compilation settings from its `name`
	protected fun platform_from_name(name: String): nullable Platform
	do
		return null
	end
end

private class PlatformPhase
	super Phase

	redef fun process_annotated_node(nmoduledecl, nat)
	do
		var annotation_name = "platform"

		# Skip if we are not interested
		if nat.name != annotation_name then return

		# Do some validity checks and print errors if the annotation is used incorrectly
		var modelbuilder = toolcontext.modelbuilder
		if not nmoduledecl isa AModuledecl then
			modelbuilder.error(nat, "Syntax Error: only the declaration of modules may use `{annotation_name}`.")
			return
		end

		var args = nat.n_args
		var platform_name
		if args.length > 1 then
			modelbuilder.error(nat, "Syntax Error: `{annotation_name}` expects at most a single argument.")
			return
		else if args.is_empty then
			platform_name = nmoduledecl.n_name.collect_text
		else
			platform_name = args.first.as_string
			if platform_name == null then
				var format_error = "Syntax Error: `{annotation_name}` expects its argument to be the name of the target platform as a String literal."
				modelbuilder.error(nat, format_error)
				return
			end
		end

		var nmodule = nmoduledecl.parent.as(AModule)
		var mmodule = nmodule.mmodule

		var platform = toolcontext.platform_from_name(platform_name)
		if platform == null then
			toolcontext.error(nat.location, "Error: target platform `{platform_name}` unknown.")
			return
		end

		var previous_target_platform = mmodule.target_platform
		if previous_target_platform != null and previous_target_platform != platform then
			modelbuilder.error(nat, "Syntax Error: a target platform has already been defined as `{previous_target_platform}`.")
		end

		mmodule.local_target_platform = platform
	end
end

redef class MModule
	private var local_target_platform: nullable Platform = null

	# Recursively get the platform targeted by this module or imported modules
	fun target_platform: nullable Platform
	do
		var ltp = local_target_platform
		if ltp != null then return ltp

		for mmodule in in_importation.greaters do
			ltp = mmodule.local_target_platform
			if ltp != null then return ltp
		end

		return null
	end
end

# Sub-classes of `Platform` represent the target platform of a compilation
#
# Services will be added to this class in other modules.
class Platform

	# Simple lower-case name of the platform
	fun name: nullable String do return null

	# Does the platform provide and support the library `unwind`?
	fun supports_libunwind: Bool do return true

	# Does the platform provide and supports the Boehm's GC library?
	fun supports_libgc: Bool do return true

	# Does this platform declare its own main function? If so, we won't generate one in Nit.
	fun no_main: Bool do return false

	# Does the platform accepts linker scripts?
	fun supports_linker_script: Bool do return true
end
