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

# Enable caching on Github API accesses.
#
# If `GithubAPI::enable_cache` is set to true then Github JSON responses
# will be cached locally using `JsonStore`.
#
# Cache can be used to limit the number of access on the API and lighten
# the rate limit on your github key.
#
# Usage:
#
# ~~~
# var api = new GithubAPI(get_github_oauth)
# api.enable_cache = true
#
# var name = "nitlang/nit"
# assert not api.has_cache(name)
# var repo = api.get_repo(name) # load from GitHub
# #assert api.has_cache(name) FIXME bring back this assert
# repo = api.get_repo(name) # load from cache
#
# api.clear_cache
# assert not api.has_cache(name)
# ~~~
module cache

intrude import github::api
import json::store

redef class GithubAPI

	# Enable caching for this client.
	# Default is `false`.
	var enable_cache = false is writable

	# JsonStore used to cache data.
	#
	# Default directory is `".github_data/"`.
	var store = new JsonStore(".github_data/") is writable, lazy

	# Delete the cache directory.
	fun clear_cache do store.clear

	# If no cache data is found for `key` then json is loaded from Github API.
	redef fun get(key, headers, data) do
		if not enable_cache then return super
		if store.has_key(key) then
			message(1, "Get {key} (cache)")
			was_error = false
			return deserialize(store.load_object(key).to_json).as(nullable GithubEntity)
		end
		var obj = super
		if not was_error and obj isa Serializable then
			cache(key, obj)
		end
		return obj
	end

	# Save `json` data in cache under `key`.
	private fun cache(key: String, obj: Serializable) do
		message(2, "Cache key {key}")
		store.store_object(key, obj.to_json.parse_json.as(JsonObject))
	end

	# Check if a cache file exists for `key`.
	fun has_cache(key: String): Bool do
		return store.has_key(key)
	end
end
