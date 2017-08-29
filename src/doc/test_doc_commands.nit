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

module test_doc_commands is test

import doc_commands

class TestDocCommandParser
	test

	var parser: DocCommandParser

	fun init_parser is before do
		parser = new DocCommandParser
	end

	fun test_empty_string is test do
		var command = parser.parse("")
		assert command == null
		assert parser.errors.length == 1
		assert parser.errors.first.to_s == "Error: empty command name (col: 0)"
	end

	fun test_bad_string is test do
		var command = parser.parse(":")
		assert command == null
		assert parser.errors.length == 1
		assert parser.errors.first.to_s == "Error: empty command name (col: 0)"
	end

	fun test_unknown_command is test do
		var command = parser.parse("foo: foo")
		assert command == null
		assert parser.errors.length == 1
		assert parser.errors.first.to_s == "Error: unknown command name (col: 0)"
	end

	fun test_unallowed_command is test do
		parser.allowed_commands.clear
		var command = parser.parse("comment: core::Array")
		assert command == null
		assert parser.errors.length == 1
		assert parser.errors.first.to_s == "Error: unknown command name (col: 0)"
	end

	fun test_no_arg is test do
		var command = parser.parse("doc:")
		assert command == null
		assert parser.errors.length == 1
		print parser.errors.first
		assert parser.errors.first.to_s == "Error: empty command arg (col: 4)"
	end

	fun test_no_opts is test do
		var command = parser.parse("doc: core::Array")
		assert command isa ArticleCommand
		assert command.name == "doc"
		assert command.arg == "core::Array"
		assert parser.errors.is_empty
	end

	fun test_opts_empty is test do
		var command = parser.parse("doc: core::Array | ")
		assert command isa ArticleCommand
		assert command.name == "doc"
		assert command.arg == "core::Array"
		assert parser.errors.is_empty
	end

	fun test_1_opt is test do
		var command = parser.parse("doc: core::Array | opt1: val1 ")
		assert command isa ArticleCommand
		assert command.name == "doc"
		assert command.arg == "core::Array"
		assert command.opts.length == 1
		assert command.opts["opt1"] == "val1"
		assert parser.errors.is_empty
	end

	fun test_2_opts is test do
		var command = parser.parse("doc: core::Array | opt1: val1 , opt2: val2,  ")
		assert command isa ArticleCommand
		assert command.name == "doc"
		assert command.arg == "core::Array"
		assert command.opts.length == 2
		assert command.opts["opt1"] == "val1"
		assert command.opts["opt2"] == "val2"
		assert parser.errors.is_empty
	end

	fun test_empty_opt_name is test do
		var command = parser.parse("doc: core::Array | opt1: val1  , :")
		assert command isa ArticleCommand
		assert command.name == "doc"
		assert command.arg == "core::Array"
		assert command.opts.length == 1
		assert command.opts["opt1"] == "val1"
		assert parser.errors.is_empty
	end

	fun test_empty_opt_value is test do
		var command = parser.parse("doc: core::Array | opt1:  , opt2: val2,  ")
		assert command isa ArticleCommand
		assert command.name == "doc"
		assert command.arg == "core::Array"
		assert command.opts.length == 2
		assert command.opts["opt1"] == ""
		assert command.opts["opt2"] == "val2"
		assert parser.errors.is_empty
	end

	fun test_empty_opt_value2 is test do
		var command = parser.parse("doc: core::Array | opt1")
		assert command isa ArticleCommand
		assert command.name == "doc"
		assert command.arg == "core::Array"
		assert command.opts.length == 1
		assert command.opts["opt1"] == ""
		assert parser.errors.is_empty
	end

	fun test_empty_opt_value3 is test do
		var command = parser.parse("doc: core::Array | opt1, opt2: val2")
		assert command isa ArticleCommand
		assert command.name == "doc"
		assert command.arg == "core::Array"
		assert command.opts.length == 2
		assert command.opts["opt1"] == ""
		assert command.opts["opt2"] == "val2"
		assert parser.errors.is_empty
	end
end
