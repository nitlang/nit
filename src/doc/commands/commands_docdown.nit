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

# Doc down related queries
module commands_docdown

import templates::md_commands
import markdown

# Retrieve the MDoc summary
#
# List all MarkdownHeading found and their ids.
class CmdSummary
	super CmdComment

	# Markdown processor used to parse the headlines
	var markdown_processor: MarkdownProcessor is writable

	# Resulting summary
	#
	# Associates each headline to its id.
	var summary: nullable ArrayMap[String, HeadLine] = null is optional, writable

	redef fun init_command do
		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)

		var mdoc = self.mdoc
		if mdoc == null then
			mdoc = if fallback then mentity.mdoc_or_fallback else mentity.mdoc
			self.mdoc = mdoc
		end
		if mdoc == null then return new WarningNoMDoc(mentity)

		markdown_processor.process(mdoc.md_documentation.write_to_string)

		var summary = new ArrayMap[String, HeadLine]
		summary.add_all markdown_processor.decorator.headlines
		self.summary = summary
		return res
	end
end
