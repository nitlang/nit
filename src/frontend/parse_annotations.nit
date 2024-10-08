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

# Simple annotation parsing
#
# This phase collects all the annotations found on AModuleDecl, AClassdef and
# APropdef and stores them in the related MEntity.
#
# Once the phase has been applied, annotations names are available in
# `AnnotatedMEntity::annotations`.
# One can then ask to the mentity if it holds the annnotation in its source code.
#
# Example:
# ~~~nitish
# fun is_annotated_with_foo(mentity: AnnotatedMEntity): Bool do
#     return mentity.has_annotation("foo")
# end
# ~~~
#
# Note that only the names of the annotations are stored, if one wants to access
# the annotations arguments, the traditional annotations framework is recommanded.
module parse_annotations

import phase
import modelize_class
import modelize_property
private import annotation

redef class ToolContext
	# Parse the annotations on modules, classdefs and propdefs
	var parse_annotations_phase: Phase = new ParseAnnotationsPhase(self,
		[modelize_class_phase, modelize_property_phase])
end

# Parse annotations from modules, classdefs and propdefs
#
# Found annotations names are stored in `AnnotatedMEntity::annotations`.
private class ParseAnnotationsPhase
	super Phase

	# Lookup for `nmodule` annotations
	redef fun process_nmodule(nmodule) do
		var mmodule = nmodule.mmodule
		if mmodule == null then return

		var nmoduledecl = nmodule.n_moduledecl
		if nmoduledecl == null then return

		var nannots = nmoduledecl.n_annotations
		if nannots == null then return

		for nannot in nannots.n_items do
			mmodule.annotations.add nannot.n_atid.n_id.text
		end
	end

	# Lookup for `nclassdef` annotations
	redef fun process_nclassdef(nclassdef) do
		var mclassdef = nclassdef.mclassdef
		if mclassdef == null then return

		for npropdef in nclassdef.n_propdefs do
			if not npropdef isa AAnnotPropdef then continue
			mclassdef.annotations.add npropdef.n_atid.n_id.text
		end
	end

	# Lookup for `npropdef` annotations
	redef fun process_npropdef(npropdef) do
		var mpropdef = npropdef.mpropdef
		if mpropdef == null then return

		var nannots = npropdef.n_annotations
		if nannots == null then return

		for nannot in nannots.n_items do
			mpropdef.annotations.add nannot.n_atid.n_id.text
		end
	end
end

# A MEntity that can hold annotations from it's source code
#
# We do not introduce these services in MEntity to avoid semantics confusion.
# At this stage, the annotation concept is only relevant to source code related
# mentities such as MModules, MClassDefs and MPropdefs.
abstract class AnnotatedMEntity

	# Names of the annotations found on `self` declaration
	var annotations: Set[String] = new HashSet[String]

	# Does `self` contains `annotation` in its declaration?
	fun has_annotation(annotation: String): Bool do return annotations.has(annotation)
end

redef class MModule
	super AnnotatedMEntity

	redef var is_test is lazy do return has_annotation("test")
end

redef class MClassDef
	super AnnotatedMEntity

	redef var is_test is lazy do return has_annotation("test")
end

redef class MPropDef
	super AnnotatedMEntity

	redef var is_test is lazy do return has_annotation("test")

	redef var is_before is lazy do return has_annotation("before")

	redef var is_before_all is lazy do return has_annotation("before_all")

	redef var is_after is lazy do return has_annotation("after")

	redef var is_after_all is lazy do return has_annotation("after_all")
end
