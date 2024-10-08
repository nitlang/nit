# This file is part of NIT ( https://nitlanguage.org ).
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

module test_commonmark_soft_line_breaks is test

import test_markdown

class TestCommonmarkSoftLineBreaks
	super TestMarkdownHtml
	test

	fun test623 is test do
		var md = """foo\nbaz\n"""
		var html = """<p>foo\nbaz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test624 is test do
		var md = """foo \n baz\n"""
		var html = """<p>foo\nbaz</p>\n"""
		assert md_to_html(md) == html
	end
end
