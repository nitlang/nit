# This file is part of NIT ( https://nitlanguage.org ).
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

# Manage indexing of Nit model for Nitdoc QuickSearch.
module static_index

import static::static_html
import json

# Generate the index for then Nitdoc QuickSearch field.
#
# Create a JSON object containing links to:
#  * mpackages
#  * modules
#  * mclasses
#  * mpropdefs
# All entities are grouped by name to make the research easier.
#
# TODO Merge with model_index
redef class DocModel

	# Build the nitdoc quick search index
	fun create_index_file(file: String) do
		var table = new QuickSearchTable(self)
		var tpl = new Template
		tpl.add "var nitdocQuickSearchRawList="
		tpl.add table.to_json
		tpl.add ";"
		tpl.write_to_file(file)
	end
end

# The result map for QuickSearch.
private class QuickSearchTable
	super HashMap[String, Array[QuickSearchResult]]

	var doc: DocModel

	init do
		var model = doc.model
		var filter = doc.filter

		index_mentities model.collect_mpackages(filter)
		index_mentities model.collect_mmodules(filter)
		index_mentities model.collect_mclasses(filter)
		index_mentities model.collect_mproperties(filter)
	end

	fun index_mentities(mentities: Collection[MEntity]) do
		for mentity in mentities do index_mentity mentity
	end

	fun index_mentity(mentity: MEntity) do
		var key = mentity.name
		if not has_key(key) then
			self[key] = new Array[QuickSearchResult]
		end
		self[key].add new QuickSearchResult(mentity.full_name, mentity.html_url)
	end
end

# A QuickSearch result.
private class QuickSearchResult
	serialize

	# The text of the link.
	var txt: String

	# The destination of the link.
	var url: String
end
