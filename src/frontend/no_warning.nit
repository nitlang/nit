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

# Fill toolcontext information about blacklisting of warnings.
module no_warning

import modelbuilder
private import literal

redef class ToolContext
	# The phase should be executed before any warning on the module is processed.
	var no_warning_phase: Phase = new NoWarningPhase(self, [literal_phase])
end

private class NoWarningPhase
	super Phase

	redef fun process_nmodule(nmodule)
	do
		# Get the mmodule
		var mmodule = nmodule.mmodule
		if mmodule == null then return

		var source = nmodule.location.file

		var nmoduledecl = nmodule.n_moduledecl
		if nmoduledecl == null or nmoduledecl.n_doc == null then
			# Disable `missing-doc` if there is no `module` clause
			# Rationale: the presence of a `module` clause is a good heuristic to
			# discriminate quick and dirty prototypes from nice and clean modules
			if source != null then toolcontext.warning_blacklist[source].add("missing-doc")

		end

		# If no decl block then quit
		if nmoduledecl == null then return

		var modelbuilder = toolcontext.modelbuilder

		# Disable `missing-doc` for `test`
		if source != null and not nmoduledecl.get_annotations("test").is_empty then
			toolcontext.warning_blacklist[source].add("missing-doc")
		end

		# Get all the `no_warning` annotations
		var name = "no_warning"
		var annots = nmoduledecl.get_annotations(name)

		if annots.is_empty then return

		if source == null then
			modelbuilder.warning(annots.first, "file-less-module", "Warning: `{name}` does not currently work on file-less modules.")
			return
		end

		for annot in annots do
			var args = annot.n_args
			if args.is_empty then
				modelbuilder.error(annot, "Syntax Error: `{name}` expects a list of warnings. Use `\"all\"` to disable all warnings.")
				continue
			end
			for arg in args do
				var tag = arg.as_string
				if tag == null then
					modelbuilder.error(arg, "Syntax Error: `{name}` expects String as arguments.")
					continue
				end

				toolcontext.warning_blacklist[source].add(tag)
			end
		end
	end
end
