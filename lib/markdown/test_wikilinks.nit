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

# Test suites for module `markdown`
module test_wikilinks is test

import test_markdown
import wikilinks

class TestTokenWikilink
	test

	fun test_token_location1 is test do
		var string = "[[wikilink]]"
		var stack =  ["TokenWikiLink at 1,1--1,1"]
		(new TestTokenProcessor(stack)).process(string)
	end

	fun test_token_location2 is test do
		var string = "Hello [[World]]"
		var stack =  ["TokenWikiLink at 1,7--1,7"]
		(new TestTokenProcessor(stack)).process(string)
	end

	fun test_token_location3 is test do
		var string = "\nHello\nworld [[wikilink]] !"
		var stack =  ["TokenWikiLink at 3,7--3,7"]
		(new TestTokenProcessor(stack)).process(string)
	end

	fun test_token_location4 is test do
		var string = "[[link1]]\n\n[[link2]]"
		var stack =  [
			"TokenWikiLink at 1,1--1,1",
			"TokenWikiLink at 3,1--3,1"]
		(new TestTokenProcessor(stack)).process(string)
	end

	fun test_token_location5 is test do
		var string = "[[link1]]\n[[link2]]"
		var stack =  [
			"TokenWikiLink at 1,1--1,1",
			"TokenWikiLink at 2,1--2,1"]
		(new TestTokenProcessor(stack)).process(string)
	end

	fun test_token_location6 is test do
		var string = """
[[doc: github]]

[[loollll]]

## Accessing the API

[[doc: GithubAPI]]"""
		var stack =  [
			"TokenWikiLink at 1,1--1,1",
			"TokenWikiLink at 3,1--3,1",
			"TokenWikiLink at 7,1--7,1"]
		(new TestTokenProcessor(stack)).process(string)
	end
end
