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

module test_commonmark_textual_content is test

import test_markdown

class TestCommonmarkTextualContent
	super TestMarkdownHtml
	test

	fun test625 is test do
		var md = """hello $.;'there\n"""
		var html = """<p>hello $.;'there</p>\n"""
		assert md_to_html(md) == html
	end

	fun test626 is test do
		var md = """Foo χρῆν\n"""
		var html = """<p>Foo χρῆν</p>\n"""
		assert md_to_html(md) == html
	end

	fun test627 is test do
		var md = """Multiple     spaces\n"""
		var html = """<p>Multiple     spaces</p>\n"""
		assert md_to_html(md) == html
	end
end
