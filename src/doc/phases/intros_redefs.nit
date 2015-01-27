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
module intros_redefs

import doc_base

redef class ToolContext
	# Generates a TplArticle containing MClass introduced in `mmodule`.
	#
	# Returns `null` if the list is empty.
	fun mmodule_intros(mmodule: MModule): nullable TplArticle do
		var intros = mmodule.intro_mclassdefs(min_visibility).to_a
		if intros.is_empty then return null
		mainmodule.linearize_mclassdefs(intros)
		var list = new TplList.with_classes(["list-unstyled", "list-labeled"])
		for mclassdef in intros do
			list.add_li mclassdef.tpl_list_item
		end
		var article = new TplArticle.with_title("{mmodule.nitdoc_id}.intros", "Introduces")
		article.content = list
		return article
	end

	# Generates a TplArticle containing MClass redefined in `mmodule`.
	#
	# Returns `null` if the list is empty.
	fun mmodule_redefs(mmodule: MModule): nullable TplArticle do
		var redefs = mmodule.redef_mclassdefs(min_visibility).to_a
		if redefs.is_empty then return null
		mainmodule.linearize_mclassdefs(redefs)
		var list = new TplList.with_classes(["list-unstyled", "list-labeled"])
		for mclassdef in redefs do
			list.add_li mclassdef.tpl_list_item
		end
		var article = new TplArticle.with_title("{mmodule.nitdoc_id}.redefs", "Redefines")
		article.content = list
		return article
	end

	# Generates a TplArticle containing MPropDef introduced in `mclassdef`.
	#
	# Returns `null` if the list is empty.
	fun mclassdef_intros(mclassdef: MClassDef): nullable TplArticle do
		var mpropdefs = mclassdef.collect_intro_mpropdefs(min_visibility).to_a
		if mpropdefs.is_empty then return null
		# mainmodule.linearize_mpropdefs(mpropdefs)
		var list = new TplList.with_classes(["list-unstyled", "list-labeled"])
		for mpropdef in mpropdefs do
			list.add_li mpropdef.tpl_list_item
		end
		var article = new TplArticle.with_title("{mclassdef.nitdoc_id}.intros", "Introduces")
		article.content = list
		return article
	end

	# Generates a TplArticle containing MPropDef redefined in `mclassdef`.
	#
	# Returns `null` if the list is empty.
	fun mclassdef_redefs(mclassdef: MClassDef): nullable TplArticle do
		var mpropdefs = mclassdef.collect_redef_mpropdefs(min_visibility).to_a
		if mpropdefs.is_empty then return null
		# mainmodule.linearize_mpropdefs(mpropdefs)
		var list = new TplList.with_classes(["list-unstyled", "list-labeled"])
		for mpropdef in mpropdefs do
			list.add_li mpropdef.tpl_list_item
		end
		var article = new TplArticle.with_title("{mclassdef.nitdoc_id}.redefs", "Redefines")
		article.content = list
		return article
	end
end
