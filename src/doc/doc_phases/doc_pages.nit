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

# Create DocPage instances for each documentated Mentity.
module doc_pages

import doc_extract

# ExtractionPhase populates the DocModel with DocPage.
class MakePagePhase
	super DocPhase

	# Instanciates documentation pages for the given DocModel.
	redef fun apply do
		doc.add_page new OverviewPage("overview", "Overview")
		doc.add_page new SearchPage("search", "Index")
		for mgroup in doc.mgroups do
			doc.add_page new MGroupPage(mgroup)
		end
		for mmodule in doc.mmodules do
			doc.add_page new MModulePage(mmodule)
		end
		for mclass in doc.mclasses do
			doc.add_page new MClassPage(mclass)
		end
		for mproperty in doc.mproperties do
			doc.add_page new MPropertyPage(mproperty)
		end
	end
end

# The Nitdoc overview page.
class OverviewPage
	super DocPage
end

# The Nidoc full index page.
class SearchPage
	super DocPage
end

# A DocPage documenting a MEntity.
class MEntityPage
	autoinit mentity
	super DocPage

	# Type of MEntity documented by this page.
	type MENTITY: MEntity

	# MEntity documented by this page.
	var mentity: MENTITY

	redef var id is lazy do return mentity.nitdoc_id
	redef var title is lazy do return mentity.nitdoc_name
end

# A documentation page about a MGroup.
class MGroupPage
	super MEntityPage

	redef type MENTITY: MGroup
end

# A documentation page about a MModule.
class MModulePage
	super MEntityPage

	redef type MENTITY: MModule
end

# A documentation page about a MClass.
class MClassPage
	super MEntityPage

	redef type MENTITY: MClass
end

# A documentation page about a MProperty.
class MPropertyPage
	super MEntityPage

	redef type MENTITY: MProperty
end
