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

# Concerns computation.
module doc_concerns

import doc_pages

# ConcernsPhase computes the ConcernsTree used for each page layout.
class ConcernsPhase
	super DocPhase

	# Populates the given DocModel.
	redef fun apply do
		for page in doc.pages do page.build_concerns(doc)
	end
end

redef class DocPage

	# Build the `concerns` tree for this page.
	#
	# Since only `MEntityPage`, this method is a no-op for everything else.
	private fun build_concerns(doc: DocModel) do end
end

redef class MEntityPage

	# Concerns to display in this page.
	var concerns: nullable ConcernsTree = null
end

# TODO ConcernsTrees are a PITA, following redef should not be needed here...
# The bad, so baaaadddd, ConcernsTree interface induces a lot of useless code
# in all phases.

redef class MGroupPage

	# Introduced classes in `mentity` that should appear in this page.
	var intros = new HashSet[MClass]

	# Refined classes in `mentity` that should appear in this page.
	var redefs = new HashSet[MClass]

	redef fun build_concerns(doc) do
		var mmodules = new HashSet[MModule]
		for mmodule in mentity.collect_mmodules do
			if doc.mmodules.has(mmodule) then mmodules.add mmodule
			# collect mclasses
			for mclass in mmodule.intro_mclasses do
				if doc.mclasses.has(mclass) then intros.add mclass
			end
			for mclass in mmodule.redef_mclasses do
				if doc.mclasses.has(mclass) then redefs.add mclass
			end
		end
		concerns = doc.model.concerns_tree(mmodules)
	end
end

redef class MModulePage

	# MClasses defined in `mentity` to display in this page.
	var mclasses = new HashSet[MClass]

	# MClassDefs located in `mentity` to display in this page.
	var mclassdefs = new HashSet[MClassDef]

	redef fun build_concerns(doc) do
		# extract mclassdefs in mmodule
		for mclassdef in mentity.mclassdefs do
			if doc.mclassdefs.has(mclassdef) then mclassdefs.add mclassdef
		end
		# extract mclasses in mmodule
		for mclassdef in mclassdefs do
			var mclass = mclassdef.mclass
			if doc.mclasses.has(mclass) then mclasses.add mclass
		end
		# extract concerns
		var mods = new HashSet[MModule]
		for mclass in mclasses do
			var mod = mclass.intro_mmodule
			if doc.mmodules.has(mod) then mods.add mod
		end
		concerns = doc.model.concerns_tree(mods)
	end
end

redef class MClassPage

	# MClassDefs to display in this page.
	var mclassdefs = new HashSet[MClassDef]

	# MPropdefs to display in this page.
	var mpropdefs = new HashSet[MPropDef]

	redef fun build_concerns(doc) do
		# collect mclassdefs
		for mclassdef in mentity.mclassdefs do
			if doc.mclassdefs.has(mclassdef) then mclassdefs.add mclassdef
		end
		# collect mpropdefs
		for mclassdef in mclassdefs do
			for mpropdef in mclassdef.mpropdefs do
				if doc.mpropdefs.has(mpropdef) then mpropdefs.add mpropdef
			end
		end
		# collect concerns
		var mods = new HashSet[MModule]
		for mpropdef in mpropdefs do
			var mod = mpropdef.mclassdef.mmodule
			if doc.mmodules.has(mod) then mods.add mod
		end
		concerns = doc.model.concerns_tree(mods)
	end
end

redef class MPropertyPage

	# MPropdefs to display in this page.
	var mpropdefs = new HashSet[MPropDef]

	redef fun build_concerns(doc) do
		# collect mpropdefs
		for mpropdef in mentity.mpropdefs do
			# FIXME diff hack
			if mpropdef.is_intro then continue
			if doc.mpropdefs.has(mpropdef) then mpropdefs.add mpropdef
		end
		# collect concerns
		var mods = new HashSet[MModule]
		for mpropdef in mpropdefs do
			var mod = mpropdef.mclassdef.mmodule
			if doc.mmodules.has(mod) then mods.add mod
		end
		concerns = doc.model.concerns_tree(mods)
	end
end
