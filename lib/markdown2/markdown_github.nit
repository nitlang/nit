# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Markdown Github mode
#
# Enables:
# * strike processing: ~strike~
# * super processing: ^super^
#
# TODO table
# TODO todo lists
module markdown_github

intrude import markdown_inline_parsing
intrude import markdown_block_parsing

redef class MdParser

	# Enable Github mode
	var github_mode = false is writable

	redef var inline_parser is lazy do
		var parser = super
		parser.github_mode = github_mode
		return parser
	end
end

redef class MdInlineParser

	# Enable Github mode
	private var github_mode = false

	redef var delimiter_processors is lazy do
		var delimiters = super
		if github_mode then
			delimiters.add new MdStrikeProcessor
			delimiters.add new MdSuperProcessor
		end
		return delimiters
	end
end

# Strike processor
class MdStrikeProcessor
	super MdEmphasisDelimiterProcessor
	noautoinit

	redef var delimiter_char = '~'
	redef var min_length = 1
	redef fun delimiter_use(opener, closer) do return opener.original_length

	redef fun process(opener, closer, delimiter_use) do
		var node = new MdStrike(
				new MdLocation(
					opener.location.line_start,
					opener.location.column_start,
					closer.location.line_end,
					closer.location.column_end),
			opening_delimiter.to_s * delimiter_use)
		var tmp = opener.next
		while tmp != null and tmp != closer do
			var next = tmp.next
			node.append_child(tmp)
			tmp = next
		end
		opener.insert_after(node)
	end
end

#  Striked text
class MdStrike
	super MdDelimited
end

# Super processor
class MdSuperProcessor
	super MdEmphasisDelimiterProcessor
	noautoinit

	redef var delimiter_char = '^'
	redef var min_length = 1
	redef fun delimiter_use(opener, closer) do return opener.original_length

	redef fun process(opener, closer, delimiter_use) do
		var node = new MdSuper(
			new MdLocation(
				opener.location.line_start,
				opener.location.column_start,
				closer.location.line_end,
				closer.location.column_end),
			opening_delimiter.to_s * delimiter_use)
		var tmp = opener.next
		while tmp != null and tmp != closer do
			var next = tmp.next
			node.append_child(tmp)
			tmp = next
		end
		opener.insert_after(node)
	end
end

# Super text
class MdSuper
	super MdDelimited
end
