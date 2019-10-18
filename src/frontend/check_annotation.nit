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

# Check that annotation present in the AST are either primitive or user-declared
# There is no verification on the syntax or the semantic of the annotation: just the name is checked
#
# Specific phases or tools have to process their annotation and check them correclty.
module check_annotation

import phase
private import annotation

redef class ToolContext
	# Check for unknown annotation in each module
	var check_annotation_phase: Phase = new CheckAnnotationPhase(self, null)
end

private class CheckAnnotationPhase
	super Phase

	# The map of all declared user annotation
	# note: lazy because toolcontex is set in the init
	var declared_annotations = new MModuleMultiData[String](toolcontext.modelbuilder.model) is lazy

	# The current module.
	var mmodule: nullable MModule = null

	redef fun process_nmodule(nmodule)
	do
		# Get the mmodule
		var mmodule = nmodule.mmodule
		if mmodule == null then return
		self.mmodule = mmodule

		# If no decl block then quit
		var nmoduledecl = nmodule.n_moduledecl
		if nmoduledecl == null then return

		var modelbuilder = toolcontext.modelbuilder

		# Get all the new annotations
		var annots = nmoduledecl.get_annotations("new_annotation")

		var super_mmodules = declared_annotations.lookup_all_modules(mmodule, private_visibility)

		# Add each new annotations in the map
		for annot in annots do
			var name = annot.arg_as_id(modelbuilder)
			if name == null then continue

			for m in super_mmodules do
				if declared_annotations[m].has(name) then
					modelbuilder.warning(annot, "multiple-annotation-declarations", "Warning: an annotation `{name}` is already declared in module `{m}`.")
					break label
				end
			end

			declared_annotations[mmodule].add(name)
			#annot.debug "add {mmodule}: {name}"
		end label
	end

	# Raw new-line separated list of primitive annotation
	# Note: empty-lines will be ignored since there is no annotation named by the empty string.
	var primtives_annotations_list = """
new_annotation

conditional

deprecated
fixed
lazy
noinit
readonly
writable
optional
autoinit
noautoinit
lateinit
nosuper
old_style_init
abstract
intern
extern
no_warning
generated

auto_inspect

pkgconfig
cflags
ldflags
light_ffi

platform

test
before
before_all
after
after_all
example

expect
ensure
invariant
no_contract
"""

	# Efficient set build from `primtives_annotations_list`
	var primtives_annotations = new HashSet[String].from(primtives_annotations_list.split("\n"))

	# All user-declared annotations for each mmodule
	var user_annotations = new HashMap[MModule, HashSet[String]]

	redef fun process_annotated_node(node, nat)
	do
		var name = nat.name
		if primtives_annotations.has(name) then return

		var mmodule = self.mmodule
		if mmodule == null then return

		# Lazily build the full user-list
		var annots = user_annotations.get_or_null(mmodule)
		if annots == null then
			annots = new HashSet[String]
			annots.add_all(declared_annotations.lookup_joined_values(mmodule, private_visibility))
			user_annotations[mmodule] = annots
		end
		#nat.debug "for {mmodule}: {annots.join(" ")}"

		if annots.has(name) then return

		toolcontext.modelbuilder.warning(nat, "unknown-annotation", "Warning: unknown annotation `{name}`.")

		annots.add(name) # to avoid multiple errors on the same name
	end
end
