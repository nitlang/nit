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

module test_github_curl is test_suite

import github::github_curl
import test_suite

class TestGithubCurl
	super TestSuite

	var auth: String = get_github_oauth
	var user_agent: String = "nit"
	var testee: GithubCurl is noinit

	redef fun before_test do
		testee = new GithubCurl(auth, user_agent)
	end

	fun test_get_repo do
		var uri = "https://api.github.com/repos/privat/nit"
		var res = testee.get_and_check(uri)

		assert res isa JsonObject
		assert res["name"] == "nit"
		assert res["owner"] isa JsonObject
	end

	fun test_get_user do
		var uri = "https://api.github.com/users/Morriar"
		var res = testee.get_and_check(uri)

		assert res isa JsonObject
		assert res["login"] == "Morriar"
		assert res["html_url"] == "https://github.com/Morriar"
	end
end
