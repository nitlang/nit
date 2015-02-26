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

# Generates lists about intros/redefs in MEntity.
#
# Actually, this works only for MModules and MclassDefs.
module doc_intros_redefs

import doc_structure

# Computes intro / redef mentity list for each DefinitionArticle.
class IntroRedefListPhase
	super DocPhase

	redef fun apply do
		for page in doc.pages do
			if not page isa MEntityPage then continue
			page.root.build_intro_redef_list(self, doc, page)
		end
	end
end

redef class DocComposite

	# Computes intro / redef lists for this page.
	#
	# See `IntroRedefListPhase`.
	fun build_intro_redef_list(v: IntroRedefListPhase, doc: DocModel, page: MEntityPage) do
		for child in children do child.build_intro_redef_list(v, doc, page)
	end
end

redef class DefinitionArticle
	redef fun build_intro_redef_list(v, doc, page) do
		var mentity = self.mentity
		if mentity isa MModule then
			build_mmodule_list(v, doc, mentity)
		else if mentity isa MClassDef and mentity.mmodule == page.mentity then
			build_mclassdef_list(v, doc, mentity)
		end
		super
	end

	# TODO this should move to MEntity?
	private fun build_mmodule_list(v: IntroRedefListPhase, doc: DocModel, mmodule: MModule) do
		var intros = mmodule.intro_mclassdefs(v.ctx.min_visibility).to_a
		doc.mainmodule.linearize_mclassdefs(intros)
		add_child new IntrosRedefsListArticle(mentity, "Introduces", intros)
		var redefs = mmodule.redef_mclassdefs(v.ctx.min_visibility).to_a
		doc.mainmodule.linearize_mclassdefs(redefs)
		add_child new IntrosRedefsListArticle(mentity, "Redefines", redefs)
	end

	# TODO this should move to MEntity?
	private fun build_mclassdef_list(v: IntroRedefListPhase, doc: DocModel, mclassdef: MClassDef) do
		var intros = mclassdef.collect_intro_mpropdefs(v.ctx.min_visibility).to_a
		# FIXME avoid diff changes
		# v.ctx.mainmodule.linearize_mpropdefs(intros)
		add_child new IntrosRedefsListArticle(mentity, "Introduces", intros)
		var redefs = mclassdef.collect_redef_mpropdefs(v.ctx.min_visibility).to_a
		# FIXME avoid diff changes
		# v.ctx.mainmodule.linearize_mpropdefs(redefs)
		add_child new IntrosRedefsListArticle(mentity, "Redefines", redefs)
	end

end

# An article that displays a list of introduced / refined mentities.
#
# FIXME diff hack
# This can merged with InheritanceListArticle in a more generic class.
class IntrosRedefsListArticle
	super MEntityArticle

	# Title displayed as header of the list.
	var list_title: String

	# Intro mentities to list.
	var mentities: Array[MEntity]
end
