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

# Add links from articles to sources.
module show_sources

import doc_base
import location

redef class ToolContext
	# A (source) link template for a given location
	fun tpl_showsource(location: nullable Location): nullable String
	do
		if location == null then return null
		var source = opt_source.value
		if source == null then
			var url = location.file.filename.simplify_path
			return "<a target='_blank' title='Show source' href=\"{url.html_escape}\">View Source</a>"
		end
		# THIS IS JUST UGLY ! (but there is no replace yet)
		var x = source.split_with("%f")
		source = x.join(location.file.filename.simplify_path)
		x = source.split_with("%l")
		source = x.join(location.line_start.to_s)
		x = source.split_with("%L")
		source = x.join(location.line_end.to_s)
		source = source.simplify_path
		return "<a target='_blank' title='Show source' href=\"{source.to_s.html_escape}\">View Source</a>"
	end
end
