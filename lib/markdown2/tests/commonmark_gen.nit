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

# Generate Nitunit tests from commonmark specification.
#
# See the full specification and the test cases at <http://commonmark.org/>.
#
# Usage:
#
# ~~~sh
# commonmark_gen <commonmark_tests.json> <output directory>
# ~~~
module commonmark_gen

import json
import json::static
import template

# Generate the test cases from the JSON testfile.
class TestGenerator

	# Input file in containing the tests in JSON format
	var json_file: String

	# Output directory where the Nitunit files will be generated
	var output_dir: String

	# Ignored tests
	#
	# We ignore some tests for two reasons:
	# * because `nitmd` does not fully support UTF-8
	# * because somes tests are wrong
	var ignored_tests: Array[Int] do
		var ignored = new Array[Int]
		ignored.add_all([171, 304, 305, 306, 311, 312, 313, 477, 514]) # utf-8 tests
		ignored.add_all([275, 276]) # spec is wrong compared to reference implementation
		return ignored
	end

	# Load the tests files from the JSON input
	fun load_tests: Map[String, Array[TestCase]] do
		var json = json_file.to_path.read_all.parse_json
		var tests = new HashMap[String, Array[TestCase]]

		for obj in json.as(JsonArray) do
			if not obj isa JsonObject then continue

			var number = obj["example"].as(Int)
			if ignored_tests.has(number) then continue

			var name = "test{number}"

			var section = obj["section"].as(String)
			if not tests.has_key(section) then
				tests[section] = new Array[TestCase]
			end

			var markdown = obj["markdown"].as(String)
			markdown = markdown.replace("\\", "\\\\")
			markdown = markdown.replace("\n", "\\n")
			markdown = markdown.replace("\t", "\\t")

			# fix missing chars in some tests
			if number == 162 then
				markdown = markdown.replace("my url", "my%20url")
			else if number == 467 then
				markdown = markdown.replace("my uri", "my%20uri")
			end

			var html = obj["html"].as(String)
			html = html.replace("\\", "\\\\")
			html = html.replace("\n", "\\n")
			html = html.replace("\t", "\\t")

			tests[section].add(new TestCase(name, markdown, html))
		end

		return tests
	end

	# Generate the Nitunit test files
	fun gen_tests do
		var tests = load_tests

		for section, test_cases in tests do
			var test_file = new TestFile("test_commonmark_{strip_module_name(section)}")
			var test_class = new TestClass("TestCommonmark{strip_class_name(section)}")
			test_class.test_cases.add_all test_cases
			test_file.test_classes.add test_class
			test_file.save(output_dir)
		end
	end

	# Strip module name
	#
	# Used to create a Nitunit module name from a CommonMark section title.
	fun strip_module_name(name: String): String do
		var b = new FlatBuffer
		for c in name do
			if c == ' ' then
				b.add '_'
			else
				if not c.is_letter and
				   not c.is_digit and
				   not allowed_id_chars.has(c) then continue
				b.add c.to_lower
			end
		end
		return b.to_s
	end

	# Strip class name
	#
	# Used to create a Nitunit test class name from a CommonMark section title.
	fun strip_class_name(name: String): String do
		var b = new FlatBuffer
		var was_space = false
		for c in name do
			if c == ' ' then
				was_space = true
			else
				if not c.is_letter and
				   not c.is_digit and
				   not allowed_id_chars.has(c) then continue
				if was_space then
					b.add c.to_upper
					was_space = false
				else
					b.add c
				end
			end
		end
		return b.to_s
	end

	private var allowed_id_chars: Array[Char] = ['-', '_', ':', '.']
end

# A Nitunit test file
class TestFile

	# Test module name
	var test_file_name: String

	# Test classes in this module
	var test_classes = new Array[TestClass]

	# Copyright header and module declaration
	fun header: String do
		return """
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

module {{{test_file_name}}} is test

import test_markdown
"""
	end

	# Render the test module as a Nit string
	fun render: String do
		var tpl = new Template
		tpl.add header
		for test_class in test_classes do
			tpl.add test_class.render
		end
		return tpl.write_to_string
	end

	# Save the test module in `directory
	fun save(directory: String) do
		render.write_to_file(directory / "{test_file_name}.nit")
	end
end

# A Nitunit test class
class TestClass

	# Test class name
	var test_class_name: String

	# Test cases in this test class
	var test_cases = new Array[TestCase]

	# Render the test class as a Nit string
	fun render: String do
		var tpl = new Template
		tpl.addn "\nclass {test_class_name}"
		tpl.addn "\tsuper TestMarkdownHtml"
		tpl.addn "\ttest"
		for test_case in test_cases do
			tpl.add test_case.render
		end
		tpl.addn "end"
		return tpl.write_to_string
	end
end

# A Nitunit test case
class TestCase

	# Test method name
	var test_name: String

	# Markdown input
	var markdown: String

	# Expected html output
	var html: String

	# Render the test case as a Nit string
	fun render: String do
		var tpl = new Template
		tpl.addn "\n\tfun {test_name} is test do"
		tpl.addn "\t\tvar md = \"\"\"{markdown}\"\"\""
		tpl.addn "\t\tvar html = \"\"\"{html}\"\"\""
		tpl.addn "\t\tassert md_to_html(md) == html"
		tpl.addn "\tend"
		return tpl.write_to_string
	end
end

if args.length != 2 then
	print "Usage: commonmark_gen <tests.json> <output_dir>"
	exit 1
end

var gen = new TestGenerator(args.first, args.last)
gen.gen_tests
