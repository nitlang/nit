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

# Add linearization lists to DefinitionArticle found in MClass pages.
module doc_lin

import doc_structure

# LinPhase populates the DocPage content with linearization data.
class LinListPhase
	super DocPhase

	# Used to sort list by linearization order
	private var lin_sorter = new MEntityNameSorter

	redef fun apply do
		for page in doc.pages do page.apply_linearization(self, doc)
	end
end

redef class DocPage

	# Populates `self` with linearization data.
	#
	# See `LinListPhase`.
	fun apply_linearization(v: LinListPhase, doc: DocModel) do end
end

redef class MClassPage
	redef fun apply_linearization(v, doc) do
		root.apply_linearization(v, doc, self)
	end
end

redef class DocComposite

	# Populates `self` with linearization data.
	#
	# For now, it's only used for mpropdefs linearization in MClassPage.
	#
	# See `LinListPhase`.
	private fun apply_linearization(v: LinListPhase, doc: DocModel, page: DocPage) do
		for child in children do child.apply_linearization(v, doc, page)
	end
end

redef class DefinitionArticle
	redef fun apply_linearization(v, doc, page) do
		var mentity = self.mentity
		if not mentity isa MPropDef then return
		# Add linearization
		var all_defs = new HashSet[MPropDef]
		for local_def in local_defs(page.as(MClassPage), mentity.mproperty) do
			all_defs.add local_def
			var smpropdef = local_def
			while not smpropdef.is_intro do
				smpropdef = smpropdef.lookup_next_definition(
					doc.mainmodule, smpropdef.mclassdef.bound_mtype)
				all_defs.add smpropdef
			end
		end
		var lin = all_defs.to_a
		doc.mainmodule.linearize_mpropdefs(lin)
		if lin.length > 1 then
			add_child new DefinitionLinArticle(mentity, lin)
		end
	end

	# Filter `page.mpropdefs` for this `mpropertie`.
	#
	# FIXME compatability with current templates.
	private fun local_defs(page: MClassPage, mproperty: MProperty): HashSet[MPropDef] do
		var mpropdefs = new HashSet[MPropDef]
		for mpropdef in page.mpropdefs do
			if mpropdef.mproperty == mproperty then
				mpropdefs.add mpropdef
			end
		end
		return mpropdefs
	end
end

# Display a linearized list of definitions.
class DefinitionLinArticle
	super MEntityArticle

	# The linearized list to display.
	var mentities: Array[MEntity]
end
