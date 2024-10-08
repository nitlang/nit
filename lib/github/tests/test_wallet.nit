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

module test_wallet is test

import wallet

redef class GithubAPI

	# Tokens mocked as valid
	#
	# All other tokens will be considered as bad credentials.
	var valid_tokens = ["t1", "t2"]

	# Mock so it returns the response from a file
	#
	# See `update_responses_cache`.
	redef fun get_auth_user do
		if not valid_tokens.has(auth) then
			was_error = true
			last_error = new GithubAPIError("""{
				"message":"Bad credentials",
				"documentation_url":"https://developer.github.com/v3"
			}""", 401, "/user")
			return null
		end

		was_error = false
		last_error = null
		return new User("test")
	end
end

class TestGithubWallet
	test

	fun test_get_next_token is test do
		var wallet = new GithubWallet(["t1", "t2", "t3"])

		for j in [1..3] do
			for i in [1..3] do assert wallet.get_next_token == "t{i}"
		end
	end

	fun test_get_api_only_bad is test do
		var wallet = new GithubWallet(["bad1", "bad2"])
		assert wallet.api.auth == "bad2"
		assert wallet.api.auth == "bad2"
	end

	fun test_get_api is test do
		var wallet = new GithubWallet(["bad1", "t1", "t2", "bad2"])
		assert wallet.api.auth == "t1"
		assert wallet.api.auth == "t2"
		assert wallet.api.auth == "t1"
		assert wallet.api.auth == "t2"
	end
end
