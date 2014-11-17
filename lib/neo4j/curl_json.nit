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

# cURL requests compatible with the JSON REST APIs.
module curl_json

import json::static
intrude import curl

# An abstract request that defines most of the standard options for Neo4j REST API
abstract class JsonCurlRequest
	super CurlRequest
	super CCurlCallbacks
	super CurlCallbacksRegisterIntern

	# REST API service URL
	var url: String

	init (url: String, curl: nullable Curl) do
		self.url = url
		self.curl = curl

		init_headers
	end

	# OAuth token
	var auth: nullable String is writable

	# User agent (is used by github to contact devs in case of problems)
	# Eg. "Awesome-Octocat-App"
	var user_agent: nullable String is writable

	# HTTP headers to send
	var headers: nullable HeaderMap = null is writable


	# init HTTP headers for Neo4j REST API
	protected fun init_headers do
		headers = new HeaderMap
		headers["Accept"] = "application/json; charset=UTF-8"
		headers["Transfer-Encoding"] = "chunked"
		headers["X-Stream"] = "true"
		if auth != null then
			headers["Authorization"] = "token {auth.to_s}"
		end
		if user_agent != null then
			headers["User-Agent"] = user_agent.to_s
		end
	end

	redef fun execute do
		init_headers
		if not self.curl.is_ok then
			return answer_failure(0, "Curl instance is not correctly initialized")
		end

		var success_response = new CurlResponseSuccess
		var callback_receiver: CurlCallbacks = success_response
		if self.delegate != null then callback_receiver = self.delegate.as(not null)

		var err

		err = self.curl.prim_curl.easy_setopt(new CURLOption.follow_location, 1)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		err = self.curl.prim_curl.easy_setopt(new CURLOption.http_version, 1)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)


		err = self.curl.prim_curl.easy_setopt(new CURLOption.url, url)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		err = self.curl.prim_curl.register_callback(callback_receiver, new CURLCallbackType.header)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		err = self.curl.prim_curl.register_callback(callback_receiver, new CURLCallbackType.body)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		# HTTP Header
		if self.headers != null then
			var headers_joined = self.headers.join_pairs(": ")
			err = self.curl.prim_curl.easy_setopt(
				new CURLOption.httpheader, headers_joined.to_curlslist)
			if not err.is_ok then return answer_failure(err.to_i, err.to_s)
		end

		var err_hook = execute_hook
		if err_hook != null then return err_hook

		var err_resp = perform
		if err_resp != null then return err_resp

		var st_code = self.curl.prim_curl.easy_getinfo_long(new CURLInfoLong.response_code)
		if not st_code == null then success_response.status_code = st_code.response

		return success_response
	end

	# Hook to implement in concrete requests
	protected fun execute_hook: nullable CurlResponse do return null
end

# HTTP GET command
class JsonGET
	super JsonCurlRequest

	redef fun execute_hook do
		var err = self.curl.prim_curl.easy_setopt(new CURLOption.get, true)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)
		return null
	end
end

# HTTP POST command that sends JSON data
class JsonPOST
	super JsonCurlRequest

	var data: nullable Jsonable = null is writable

	redef fun init_headers do
		super
		headers["Content-Type"] = "application/json"
	end

	redef fun execute_hook do
		var err = self.curl.prim_curl.easy_setopt(new CURLOption.post, true)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		if self.data != null then
			var postdatas = self.data.to_json
			err = self.curl.prim_curl.easy_setopt(new CURLOption.postfields, postdatas)
			if not err.is_ok then return answer_failure(err.to_i, err.to_s)
		end
		return null
	end
end

# HTTP DELETE command
class JsonDELETE
	super JsonCurlRequest

	redef fun execute_hook do
		var err = self.curl.prim_curl.easy_setopt(new CURLOption.custom_request, "DELETE")
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)
		return null
	end
end

# HTTP PUT command that sends JSON data
class JsonPUT
	super JsonCurlRequest

	var data: nullable Jsonable = null is writable

	redef fun init_headers do
		super
		headers["Content-Type"] = "application/json"
	end

	redef fun execute_hook do
		var err = self.curl.prim_curl.easy_setopt(new CURLOption.custom_request, "PUT")
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		if self.data != null then
			var postdatas = self.data.to_json
			err = self.curl.prim_curl.easy_setopt(new CURLOption.postfields, postdatas)
			if not err.is_ok then return answer_failure(err.to_i, err.to_s)
		end
		return null
	end
end

