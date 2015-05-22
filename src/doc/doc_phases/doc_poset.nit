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

# Importation and inheritance POSet for pages.
module doc_poset

import doc_pages

# This phase computes importation and inheritance POSet for pages.
class POSetPhase
	super DocPhase

	# Populates the given DocModel.
	redef fun apply do
		for page in doc.pages.values do
			if page isa MEntityPage then page.build_poset(self, doc)
		end
	end
end

redef class MEntityPage

	# The poset associated with this page.
	#
	# FIXME should be defined in subclasses
	# as the POSet can contains other types than `SELF`
	var poset = new POSet[MENTITY]

	# Build the POSet for this page.
	private fun build_poset(v: POSetPhase, doc: DocModel) do end
end

redef class MModulePage

	# Imported modules that should appear in the documentation.
	var imports = new HashSet[MModule]

	# Clients modules that shjould appear in the documentation.
	var clients = new HashSet[MModule]

	redef fun build_poset(v, doc) do
		# collect importation
		for dep in mentity.in_importation.greaters do
			if dep == mentity then continue
			if not doc.mmodules.has(dep) then continue
			imports.add dep
		end
		# FIXME avoid diff
		#if imports.length > 10 then
		if mentity.in_importation.greaters.length > 10 then
			imports.clear
			for dep in mentity.in_importation.direct_greaters do
				if dep == mentity then continue
				if not doc.mmodules.has(dep) then continue
				imports.add dep
			end
		end
		# collect clients
		for dep in mentity.in_importation.smallers do
			if dep == mentity then continue
			if not doc.mmodules.has(dep) then continue
			clients.add dep
		end
		if clients.length > 10 then
			clients.clear
			for dep in mentity.in_importation.direct_smallers do
				if dep == mentity then continue
				if not doc.mmodules.has(dep) then continue
				clients.add dep
			end
		end
		# make poset
		var mmodules = new HashSet[MModule]
		mmodules.add_all mentity.nested_mmodules
		mmodules.add_all imports
		if clients.length < 10 then mmodules.add_all clients
		mmodules.add mentity
		build_importation_poset(doc, mmodules)
	end

	# Build the POSet of importation from a list of `mmodules`.
	private fun build_importation_poset(doc: DocModel, mmodules: Set[MModule]): POSet[MModule] do
		for mmodule in mmodules do
			if not doc.mmodules.has(mmodule) then continue
			poset.add_node mmodule
			for omodule in mmodules do
				if not doc.mmodules.has(omodule) then continue
				poset.add_node mmodule
				if mmodule.in_importation < omodule then
					poset.add_edge(mmodule, omodule)
				end
			end
		end
		return poset
	end
end

redef class MClassPage

	# Direct parents classes to document.
	var parents = new HashSet[MClass]

	# Transitive ancestors classes to document.
	#
	# Does not contain the direct ancestors.
	# See `parents` for that.
	var ancestors = new HashSet[MClass]

	# Direct children classes to document.
	var children = new HashSet[MClass]

	# All descendants classes to document.
	#
	# Does not contain the direct children.
	# See `children` for that.
	var descendants = new HashSet[MClass]

	redef fun build_poset(v, doc) do
		poset.add_node mentity

		var h = mentity.in_hierarchy(doc.mainmodule)
		# parents
		for mclass in h.direct_greaters do
			if doc.mclasses.has(mclass) then parents.add mclass
		end
		# ancestors
		for mclass in h.greaters do
			if mclass == mentity then continue
			if not doc.mclasses.has(mclass) then continue
			if parents.has(mclass) then continue
			ancestors.add mclass
		end
		# children
		for mclass in h.direct_smallers do
			if doc.mclasses.has(mclass) then children.add mclass
		end
		# descendants
		for mclass in h.smallers do
			if mclass == mentity then continue
			if not doc.mclasses.has(mclass) then continue
			if children.has(mclass) then continue
			descendants.add mclass
		end
		# poset
		var mclasses = new HashSet[MClass]
		mclasses.add_all ancestors
		mclasses.add_all parents
		mclasses.add_all children
		mclasses.add_all descendants
		mclasses.add mentity
		build_inheritance_poset(v, doc, mclasses)
	end

	private fun build_inheritance_poset(v: POSetPhase, doc: DocModel, mclasses: Set[MClass]): POSet[MClass] do
		for mclass in mclasses do
			poset.add_node mclass
			for oclass in mclasses do
				if mclass == oclass then continue
				poset.add_node oclass
				if mclass.in_hierarchy(doc.mainmodule) < oclass then
					poset.add_edge(mclass, oclass)
				end
			end
		end
		return poset
	end
end
