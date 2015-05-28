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

# Composes the DocComposite tree of a DocPage and organizes its content.
module doc_structure

import doc_concerns
import modelize

# StructurePhase populates the DocPage content with section and article.
#
# This phase only applies structure.
# The content of the structure is choosen by the rendering phases.
class StructurePhase
	super DocPhase

	# Used to sort ConcernsTree by rank.
	private var concerns_sorter = new MConcernRankSorter

	# Used to sort ConcernsTree by name.
	private var name_sorter = new MEntityNameSorter

	# Populates the given DocModel.
	redef fun apply do
		for page in doc.pages.values do page.apply_structure(self, doc)
	end
end

redef class DocPage

	# Populates `self` with structure elements like DocComposite ones.
	#
	# See `StructurePhase`.
	fun apply_structure(v: StructurePhase, doc: DocModel) do end
end

redef class OverviewPage
	redef fun apply_structure(v, doc) do
		var article = new HomeArticle("home.article", "Home")
		root.add_child article
		# Projects list
		var mprojects = doc.model.mprojects.to_a
		var sorter = new MConcernRankSorter
		sorter.sort mprojects
		var section = new DocSection("projects.section", "Projects")
		for mproject in mprojects do
			section.add_child new DefinitionArticle("{mproject.nitdoc_id}.definition", mproject)
		end
		article.add_child section
	end
end

redef class SearchPage
	redef fun apply_structure(v, doc) do
		var mmodules = doc.mmodules.to_a
		v.name_sorter.sort(mmodules)
		var mclasses = doc.mclasses.to_a
		v.name_sorter.sort(mclasses)
		var mprops = doc.mproperties.to_a
		v.name_sorter.sort(mprops)
		root.add_child new IndexArticle("index.article", mmodules, mclasses, mprops)
	end
end

redef class MGroupPage
	redef fun apply_structure(v, doc) do
		var section = new MEntitySection("{mentity.nitdoc_name}.section", mentity)
		root.add_child section
		if mentity.is_root then
			section.add_child new IntroArticle("{mentity.mproject.nitdoc_id}.intro", mentity.mproject)
		else
			section.add_child new IntroArticle("{mentity.nitdoc_id}.intro", mentity)
		end
		var concerns = self.concerns
		if concerns == null or concerns.is_empty then return
		# FIXME avoid diff
		mentity.mproject.booster_rank = -1000
		mentity.booster_rank = -1000
		concerns.sort_with(v.concerns_sorter)
		mentity.mproject.booster_rank = 0
		mentity.booster_rank = 0
		section.add_child new ConcernsArticle("{mentity.nitdoc_id}.concerns", mentity, concerns)
		for mentity in concerns do
			var ssection = new ConcernSection("{mentity.nitdoc_id}.concern", mentity)
			if mentity isa MModule then
				ssection.add_child new DefinitionArticle("{mentity.nitdoc_id}.definition", mentity)
			end
			section.add_child ssection
		end
	end
end

redef class MModulePage
	redef fun apply_structure(v, doc) do
		var section = new MEntitySection("{mentity.nitdoc_name}.section", mentity)
		root.add_child section
		section.add_child new IntroArticle("{mentity.nitdoc_id}.intro", mentity)
		var concerns = self.concerns
		if concerns == null or concerns.is_empty then return
		# FIXME avoid diff
		mentity.mgroup.mproject.booster_rank = -1000
		mentity.mgroup.booster_rank = -1000
		mentity.booster_rank = -1000
		concerns.sort_with(v.concerns_sorter)
		mentity.mgroup.mproject.booster_rank = 0
		mentity.mgroup.booster_rank = 0
		mentity.booster_rank = 0
		section.add_child new ConcernsArticle("{mentity.nitdoc_id}.concerns", mentity, concerns)
		# reference list
		for mentity in concerns do
			var ssection = new ConcernSection("{mentity.nitdoc_id}.concern", mentity)
			if mentity isa MModule then
				var mclasses = mclasses_for_mmodule(mentity).to_a
				v.name_sorter.sort(mclasses)
				for mclass in mclasses do
					var article = new DefinitionListArticle(
						"{mclass.intro.nitdoc_id}.definition-list", mclass)
					var mclassdefs = mclassdefs_for(mclass).to_a
					if not mclassdefs.has(mclass.intro) then
						article.add_child(new DefinitionArticle(
							"{mclass.intro.nitdoc_id}.definition", mclass.intro))
					end
					doc.mainmodule.linearize_mclassdefs(mclassdefs)
					for mclassdef in mclassdefs do
						article.add_child(new DefinitionArticle(
							"{mclassdef.nitdoc_id}.definition", mclassdef))
					end
					ssection.add_child article
				end
			end
			section.add_child ssection
		end
	end

	# Filters `self.mclassses` by intro `mmodule`.
	private fun mclasses_for_mmodule(mmodule: MModule): Set[MClass] do
		var mclasses = new HashSet[MClass]
		for mclass in self.mclasses do
			if mclass.intro.mmodule == mmodule then
				mclasses.add mclass
			end
		end
		return mclasses
	end

	# Filters `self.mclassdefs` by `mclass`.
	private fun mclassdefs_for(mclass: MClass): Set[MClassDef] do
		var mclassdefs = new HashSet[MClassDef]
		for mclassdef in self.mclassdefs do
			if mclassdef.mclass == mclass then
				mclassdefs.add mclassdef
			end
		end
		return mclassdefs
	end
end

redef class MClassPage
	redef fun apply_structure(v, doc) do
		var section = new MEntitySection("{mentity.nitdoc_name}.section", mentity)
		root.add_child section
		section.add_child new IntroArticle("{mentity.nitdoc_id}.intro", mentity)
		var concerns = self.concerns
		if concerns == null or concerns.is_empty then return
		# FIXME diff hack
		mentity.intro_mmodule.mgroup.mproject.booster_rank = -1000
		mentity.intro_mmodule.mgroup.booster_rank = -1000
		mentity.intro_mmodule.booster_rank = -1000
		concerns.sort_with(v.concerns_sorter)
		mentity.intro_mmodule.mgroup.mproject.booster_rank = 0
		mentity.intro_mmodule.mgroup.booster_rank = 0
		mentity.intro_mmodule.booster_rank = 0
		var constructors = new ConstructorsSection(
			"{mentity.nitdoc_id}.constructors", mentity)
		var minit = mentity.root_init
		if minit != null then
			constructors.add_child new DefinitionArticle("{minit.nitdoc_id}.definition", minit)
		end
		section.add_child constructors
		section.add_child new ConcernsArticle("{mentity.nitdoc_id}.concerns", mentity, concerns)
		for mentity in concerns do
			var ssection = new ConcernSection("{mentity.nitdoc_id}.concern", mentity)
			if mentity isa MModule then
				var mprops = mproperties_for(mentity)
				var by_kind = new PropertiesByKind.with_elements(mprops)
				for group in by_kind.groups do
					v.name_sorter.sort(group)
					for mprop in group do
						for mpropdef in mpropdefs_for(mprop, mentity) do
							if mpropdef isa MMethodDef and mpropdef.mproperty.is_init then
								if mpropdef == minit then continue
								constructors.add_child new DefinitionArticle(
									"{mpropdef.nitdoc_id}.definition", mpropdef)
							else
								ssection.add_child new DefinitionArticle(
									"{mpropdef.nitdoc_id}.definition", mpropdef)
							end
						end
					end
				end
			end
			section.add_child ssection
		end
	end

	# Filters `self.mpropdefs` by `mmodule`.
	#
	# FIXME diff hack
	private fun mproperties_for(mmodule: MModule): Set[MProperty] do
		var mprops = new HashSet[MProperty]
		for mpropdef in self.mpropdefs do
			if mpropdef.mclassdef.mmodule == mmodule then
				mprops.add mpropdef.mproperty
			end
		end
		return mprops
	end

	# Filters `self.mpropdefs` by `mproperty`.
	#
	# FIXME diff hack
	private fun mpropdefs_for(mproperty: MProperty, mmodule: MModule): Set[MPropDef] do
		var mpropdefs = new HashSet[MPropDef]
		for mpropdef in self.mpropdefs do
			if mpropdef.mproperty == mproperty and
				mpropdef.mclassdef.mmodule == mmodule then
				mpropdefs.add mpropdef
			end
		end
		return mpropdefs
	end
end

redef class MPropertyPage
	redef fun apply_structure(v, doc) do
		var section = new MEntitySection("{mentity.nitdoc_name}.section", mentity)
		root.add_child section
		section.add_child new IntroArticle("{mentity.nitdoc_id}.intro", mentity)
		var concerns = self.concerns
		if concerns == null or concerns.is_empty then return
		# FIXME diff hack
		mentity.intro.mclassdef.mmodule.mgroup.mproject.booster_rank = -1000
		mentity.intro.mclassdef.mmodule.mgroup.booster_rank = -1000
		mentity.intro.mclassdef.mmodule.booster_rank = -1000
		concerns.sort_with(v.concerns_sorter)
		mentity.intro.mclassdef.mmodule.mgroup.mproject.booster_rank = 0
		mentity.intro.mclassdef.mmodule.mgroup.booster_rank = 0
		mentity.intro.mclassdef.mmodule.booster_rank = 0
		section.add_child new ConcernsArticle("{mentity.nitdoc_id}.concerns", mentity, concerns)
		for mentity in concerns do
			var ssection = new ConcernSection("{mentity.nitdoc_id}.concern", mentity)
			if mentity isa MModule then
				# Add mproperties
				var mpropdefs = mpropdefs_for(mentity).to_a
				v.name_sorter.sort(mpropdefs)
				for mpropdef in mpropdefs do
					ssection.add_child new DefinitionArticle(
						"{mpropdef.nitdoc_id}.definition", mpropdef)
				end
			end
			section.add_child ssection
		end
	end

	# Filters `self.mpropdefs` by `mmodule`.
	private fun mpropdefs_for(mmodule: MModule): Set[MPropDef] do
		var mpropdefs = new HashSet[MPropDef]
		for mpropdef in self.mpropdefs do
			if mpropdef.mclassdef.mmodule == mmodule then
				mpropdefs.add mpropdef
			end
		end
		return mpropdefs
	end
end

# A group of sections that can be displayed together in a tab.
#
# Display the first child and hide less relevant data in other panels.
class TabbedGroup
	super DocSection
end

# A group of sections that can be displayed together in a tab panel.
class PanelGroup
	super DocSection
end

# A DocComposite element about a MEntity.
class MEntityComposite
	super DocComposite

	redef fun title do return mentity.nitdoc_name

	# MEntity documented by this page element.
	var mentity: MEntity
end

# A list of constructors.
class ConstructorsSection
	super MEntitySection
end

# A Section about a Concern.
#
# Those sections are used to build the page summary.
class ConcernSection
	super MEntityComposite
	super DocSection

	redef fun is_toc_hidden do return is_hidden
end

# An article about a Mentity.
#
# Used to display textual content about a MEntity.
abstract class MEntityArticle
	super MEntityComposite
	super DocArticle
end

# An article that displays a list of mentities.
class MEntitiesListArticle
	super DocArticle

	# MEntities to display.
	var mentities: Array[MEntity]

	redef fun is_hidden do return mentities.is_empty
end


# A section about a Mentity.
#
# Used to regroup content about a MEntity.
class MEntitySection
	super MEntityComposite
	super DocSection
end

# An introduction article about a MEntity.
#
# Used at the top of a documentation page to introduce the documented MEntity.
class IntroArticle
	super MEntityComposite
	super DocArticle

	redef var is_hidden = false
	redef var is_toc_hidden = true
end

# An article that display a ConcernsTreee as a list.
class ConcernsArticle
	super MEntityArticle

	# Concerns to list in this article.
	var concerns: ConcernsTree

	redef fun is_hidden do return concerns.is_empty
end

# An article that displaus a list of definition belonging to a MEntity.
class DefinitionListArticle
	super TabbedGroup
	super MEntityArticle
end

# An article that display the definition text of a MEntity.
class DefinitionArticle
	super MEntityArticle

	redef var is_hidden = false
end

# The main project article.
class HomeArticle
	super DocArticle
end

# An article that display an index of mmodules, mclasses and mproperties.
class IndexArticle
	super DocArticle

	# List of mmodules to display.
	var mmodules: Array[MModule]

	# List of mclasses to display.
	var mclasses: Array[MClass]

	# List of mproperties to display.
	var mprops: Array[MProperty]

	redef fun is_hidden do
		return mmodules.is_empty and mclasses.is_empty and mprops.is_empty
	end
end

# Concerns ranking

# Sort MConcerns based on the module importation hierarchy ranking
# see also: `MConcern::concern_rank` and `MConcern::booster_rank`
#
# Comparison is made with the formula:
#
# ~~~nitish
# a.concern_rank + a.booster_rank <=> b.concern_rank + b.booster_ran
# ~~~
#
# If both `a` and `b` have the same ranking,
# ordering is based on lexicographic comparison of `a.name` and `b.name`
class MConcernRankSorter
	super Comparator
	redef type COMPARED: MConcern

	redef fun compare(a, b) do
		if a.concern_rank == b.concern_rank then
			return a.name <=> b.name
		end
		return a.concern_rank + a.booster_rank <=> b.concern_rank + b.booster_rank
	end
end

redef class MConcern

	# Boost a MConcern rank
	# see: `MConcernRankSorter`
	# Use a positive booster to push down a result in the list
	# A negative booster can be used to push up the result
	var booster_rank: Int = 0 is writable

	# Concern ranking used for ordering
	# see: `MConcernRankSorter`
	# Rank can be positive or negative
	fun concern_rank: Int is abstract
end

redef class MProject
	redef var concern_rank is lazy do
		var max = 0
		for mgroup in mgroups do
			var mmax = mgroup.concern_rank
			if mmax > max then max = mmax
		end
		return max + 1
	end
end

redef class MGroup
	redef var concern_rank is lazy do
		var max = 0
		for mmodule in mmodules do
			var mmax = mmodule.concern_rank
			if mmax > max then max = mmax
		end
		return max + 1
	end
end

redef class MModule
	redef var concern_rank is lazy do
		var max = 0
		for p in in_importation.direct_greaters do
			var pmax = p.concern_rank
			if pmax > max then max = pmax
		end
		return max + 1
	end
end
