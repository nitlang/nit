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

# Generate TOC documentation groups.
module doc_gen_groups

import toc_gen
import doc_extract
import modelbuilder

redef class ToolContext

	# Generate the documentation TOC groups.
	#
	# EXPERIMENTAL
	var opt_gen_groups = new OptionBool("Generate the documentation groups", "--gen-groups")

	# Limit documentation to entries selected by this list.
	#
	# The list is a standard text file with a qualified name by line.
	var opt_select_list = new OptionString(
		"Generate documentation only for the entries specified in that list", "--select-list")


	redef init do
		option_context.add_option(opt_gen_groups, opt_select_list)
	end
end

# TOC generator phase
class DocGenGroupsPhase
	super DocPhase

	redef fun apply do
		if not ctx.opt_gen_groups.value then return

		var select_list = ctx.opt_select_list.value
		if select_list == null then
			print "Warning: option `gen-groups` needs option `select-list` to work"
			return
		end

		var mentities = load_select_list(select_list)
		for mentity in mentities do
			print mentity
		end
	end

	# Populate `self` from the content of a select list.
	#
	# See ToolContext::opt_select_list.
	private fun load_select_list(list: String): Array[MEntity] do
		if not list.file_exists then
			print "Error: unable to open select list `{list}`"
			abort
		end
		var mentities = new Array[MEntity]
		var fr = new FileReader.open(list)
		for line in fr.read_lines do
			mentities.add_all doc.mentities_by_namespace(line.trim)
		end
		fr.close
		return mentities
	end
end
