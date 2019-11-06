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

module api_auth

import api_base
import popcorn::pop_auth

redef class NitwebConfig

	# Github client id used for Github OAuth login.
	#
	# * key: `github.client_id`
	# * default: ``
	fun github_client_id: String do return ini["github.client.id"] or else ""

	# Github client secret used for Github OAuth login.
	#
	# * key: `github.client_secret`
	# * default: ``
	fun github_client_secret: String do return ini["github.client.secret"] or else ""
end

redef class APIRouter
	redef init do
		super
		use("/user", new GithubUser)
	end
end
