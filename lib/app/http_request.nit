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

# HTTP request services: `AsyncHttpRequest` and `Text::http_get`
module http_request

import app_base
import pthreads
import json::serialization

import linux::http_request is conditional(linux)
import android::http_request is conditional(android)

redef class App
	# Platform specific service to execute `task` on the main/UI thread
	fun run_on_ui_thread(task: Task) is abstract
end

# Thread executing an HTTP request and deserializing JSON asynchronously
#
# This class defines four methods acting on the main/UI thread,
# they should be implemented as needed:
# * before
# * on_load
# * on_fail
# * after
class AsyncHttpRequest
	super Thread

	# Root URI of the remote server
	fun rest_server_uri: String is abstract

	# Action, or path, for this request within the `rest_server_uri`
	fun rest_action: String is abstract

	# Should the response content be deserialized from JSON?
	var deserialize_json = true is writable

	redef fun start
	do
		before
		super
	end

	redef fun main
	do
		var uri = rest_server_uri / rest_action

		# Execute REST request
		var rep = uri.http_get
		if rep.is_error then
			app.run_on_ui_thread new RestRunnableOnFail(self, rep.error)
			return null
		end

		if not deserialize_json then
			app.run_on_ui_thread new RestRunnableOnLoad(self, rep)
			return null
		end

		# Deserialize
		var deserializer = new JsonDeserializer(rep.value)
		var res = deserializer.deserialize
		if deserializer.errors.not_empty then
			app.run_on_ui_thread new RestRunnableOnFail(self, deserializer.errors.first)
		end

		app.run_on_ui_thread new RestRunnableOnLoad(self, res)
		return null
	end

	# Prepare the UI or other parts of the program before executing the REST request
	fun before do end

	# Invoked when the HTTP request returned valid data
	#
	# If `deserialize_json`, the default behavior, this method is invoked only if deserialization was successful.
	# In this case, `result` may be any deserialized object.
	#
	# Otherwise, if `not deserialize_json`, `result` contains the content of the response as a `String`.
	fun on_load(result: nullable Object) do end

	# Invoked when the HTTP request has failed and no data was received or deserialization failed
	fun on_fail(error: Error) do print_error "REST request '{rest_action}' failed with: {error}"

	# Complete this request whether it was a success or not
	fun after do end
end

redef class Text
	# Execute an HTTP GET request synchronously at the URI `self`
	#
	# ~~~nitish
	# var response = "http://example.org/".http_get
	# if response.is_error then
	#     print_error response.error
	# else
	#     print "HTTP status code: {response.code}"
	#     print response.value
	# end
	# ~~~
	private fun http_get: HttpRequestResult is abstract
end

# Result of a call to `Text::http_get`
#
# Users should first check if `is_error` to use `error`.
# Otherwise they can use `value` to get the content of the response
# and `code` for the HTTP status code.
class HttpRequestResult
	super MaybeError[String, Error]

	# The HTTP status code, if any
	var maybe_code: nullable Int

	# The status code
	# Require: `not is_error`
	fun code: Int do return maybe_code.as(not null)
end

private abstract class HttpRequestTask
	super Task

	# `AsyncHttpRequest` to which send callbacks
	var sender_thread: AsyncHttpRequest
end

private class RestRunnableOnLoad
	super HttpRequestTask

	var res: nullable Object

	redef fun main
	do
		sender_thread.on_load(res)
		sender_thread.after
	end
end

private class RestRunnableOnFail
	super HttpRequestTask

	var error: Error

	redef fun main
	do
		sender_thread.on_fail(error)
		sender_thread.after
	end
end
