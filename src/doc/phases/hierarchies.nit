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

# Adds importation and class hierarchy lists.
module hierarchies

import doc_base
import graphs

redef class ToolContext

	# Generates the mclass inheritance section.
	fun tpl_inheritance(current: MClass): TplSection do
		# parents
		var hparents = new HashSet[MClass]
		for c in current.in_hierarchy(mainmodule).direct_greaters do
			if filter_mclass(c) then hparents.add c
		end

		# ancestors
		var hancestors = new HashSet[MClass]
		for c in current.in_hierarchy(mainmodule).greaters do
			if c == current then continue
			if not filter_mclass(c) then continue
			if hparents.has(c) then continue
			hancestors.add c
		end

		# children
		var hchildren = new HashSet[MClass]
		for c in current.in_hierarchy(mainmodule).direct_smallers do
			if filter_mclass(c) then hchildren.add c
		end

		# descendants
		var hdescendants = new HashSet[MClass]
		for c in current.in_hierarchy(mainmodule).smallers do
			if c == current then continue
			if not filter_mclass(c) then continue
			if hchildren.has(c) then continue
			hdescendants.add c
		end

		# Display lists
		var section = new TplSection.with_title("inheritance", "Inheritance")

		# Graph
		var mclasses = new HashSet[MClass]
		mclasses.add_all hancestors
		mclasses.add_all hparents
		mclasses.add_all hchildren
		mclasses.add_all hdescendants
		mclasses.add current
		var graph = tpl_mclasses_graph(current, mclasses)
		if graph != null then section.add_child graph

		# parents
		if not hparents.is_empty then
			var lst = hparents.to_a
			name_sorter.sort lst
			section.add_child tpl_class_list("parents", "Parents", lst)
		end

		# ancestors
		if not hancestors.is_empty then
			var lst = hancestors.to_a
			name_sorter.sort lst
			section.add_child tpl_class_list("ancestors", "Ancestors", lst)
		end

		# children
		if not hchildren.is_empty then
			var lst = hchildren.to_a
			name_sorter.sort lst
			section.add_child tpl_class_list("children", "Children", lst)
		end

		# descendants
		if not hdescendants.is_empty then
			var lst = hdescendants.to_a
			name_sorter.sort lst
			section.add_child tpl_class_list("descendants", "Descendants", lst)
		end

		return section
	end

	private fun tpl_class_list(id: String, title: String, elts: Array[MClass]): TplArticle do
		var article = new TplArticle.with_title(id, title)
		if elts.length > 20 then
			var tpl = new Template
			for e in elts do
				tpl.add e.tpl_link
				if e != elts.last then tpl.add ", "
			end
			article.content = tpl
		else
			var list = new TplList.with_classes(["list-unstyled", "list-definition"])
			for elt in elts do list.elts.add elt.tpl_list_item
			article.content = list
		end
		return article
	end

	# Generate the module importation section.
	fun tpl_importation(current: MModule): TplSection do
		# Extract relevent modules
		var imports = current.in_importation.greaters
		if imports.length > 10 then imports = current.in_importation.direct_greaters
		var clients = current.in_importation.smallers
		if clients.length > 10 then clients = current.in_importation.direct_smallers

		# Display lists
		var section = new TplSection.with_title("dependencies", "Dependencies")

		# Graph
		var mmodules = new HashSet[MModule]
		mmodules.add_all current.nested_mmodules
		mmodules.add_all imports
		if clients.length < 10 then mmodules.add_all clients
		mmodules.add current
		var graph = tpl_mmodules_graph(current, mmodules)
		if graph != null then section.add_child graph

		# Imports
		var lst = new Array[MModule]
		for dep in imports do
			if dep.is_fictive or dep.is_test_suite then continue
			if dep == current then continue
			lst.add(dep)
		end
		if not lst.is_empty then
			name_sorter.sort lst
			section.add_child tpl_module_list("imports", "Imports", lst)
		end

		# Clients
		lst = new Array[MModule]
		for dep in clients do
			if dep.is_fictive or dep.is_test_suite then continue
			if dep == current then continue
			lst.add(dep)
		end
		if not lst.is_empty then
			name_sorter.sort lst
			section.add_child tpl_module_list("clients", "Clients", lst)
		end

		return section
	end

	private fun tpl_module_list(id: String, title: String, mmodules: Array[MModule]): TplArticle do
		var article = new TplArticle.with_title(id, title)
		var list = new TplList.with_classes(["list-unstyled", "list-definition"])
		for mmodule in mmodules do list.elts.add mmodule.tpl_list_item
		article.content = list
		return article
	end
end
