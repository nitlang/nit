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

# Manage indexing of Nit model for Nitdoc QuickSearch.
module doc_indexing

import doc_extract
private import json::static

# Generate the index for then Nitdoc QuickSearch field.
#
# Create a JSON object containing links to:
#  * modules
#  * mclasses
#  * mpropdefs
# All entities are grouped by name to make the research easier.
#
# TODO Add a way to change the output and use it from Vim or whatever.
class IndexingPhase
	super DocPhase

	redef fun apply do
		for mmodule in doc.mmodules do
			add_result_for(mmodule.name, mmodule.full_name, mmodule.nitdoc_url)
		end
		for mclass in doc.mclasses do
			add_result_for(mclass.name, mclass.full_name, mclass.nitdoc_url)
		end
		for mproperty in doc.mproperties do
			for mpropdef in mproperty.mpropdefs do
				if not doc.mpropdefs.has(mpropdef) then continue
				var full_name = mpropdef.mclassdef.mclass.full_name
				var cls_url = mpropdef.mclassdef.mclass.nitdoc_url
				var def_url = "{cls_url}#{mpropdef.mproperty.nitdoc_id}"
				add_result_for(mproperty.name, full_name, def_url)
			end
		end
		# FIXME hack, generation should be done by the render phase
		# create destination dir if it's necessary
		var output_dir = ctx.output_dir
		if not output_dir.file_exists then output_dir.mkdir

		render.write_to_file("{ctx.output_dir.to_s}/quicksearch-list.js")
	end

	private var table = new QuickSearchTable

	private fun add_result_for(query: String, txt: String, url: String) do
		table[query].add new QuickSearchResult(txt, url)
	end

	# Render the index content.
	fun render: Template do
		var tpl = new Template
		var buffer = new RopeBuffer
		tpl.add buffer
		buffer.append "var nitdocQuickSearchRawList="
		table.append_json buffer
		buffer.append ";"
		return tpl
	end
end

# The result map for QuickSearch.
private class QuickSearchTable
	super JsonMapRead[String, QuickSearchResultList]
	super HashMap[String, QuickSearchResultList]

	redef fun provide_default_value(key) do
		var v = new QuickSearchResultList
		self[key] = v
		return v
	end
end

# A QuickSearch result list.
private class QuickSearchResultList
	super JsonSequenceRead[QuickSearchResult]
	super Array[QuickSearchResult]
end

# A QuickSearch result.
private class QuickSearchResult
	super Jsonable

	# The text of the link.
	var txt: String

	# The destination of the link.
	var url: String

	redef fun to_json do
		return "\{\"txt\":{txt.to_json},\"url\":{url.to_json}\}"
	end
end
