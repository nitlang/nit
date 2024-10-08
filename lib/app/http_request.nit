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

# HTTP request services: `AsyncHttpRequest` and `Text::http_get`
#
# ~~~nitish
# import app::http_request
#
# class MyHttpRequest
#     super AsyncHttpRequest
#
#     redef fun uri do return "http://example.com/"
#
#     redef fun on_load(data, status) do print "Received: {data or else "null"}"
#
#     redef fun on_fail(error) do print "Connection error: {error}"
# end
#
# var req = new MyHttpRequest
# req.start
# ~~~
module http_request

import app_base
import pthreads
import json

import linux::http_request is conditional(linux)
import android::http_request is conditional(android)
import ios::http_request is conditional(ios)

redef class App
	# Platform specific service to execute `task` on the main/UI thread
	fun run_on_ui_thread(task: Task) is abstract
end

# Thread executing an HTTP request asynchronously
#
# The request is sent to `uri`.
# Either `uri`, or `uri_root` and `uri_tail`, must be set in subclasses.
#
# If `deserialize_json`, the default behavior, the response is deserialized from JSON
#
# If `delay > 0.0`, sending the request is delayed by the given `delay` in seconds.
# It can be used to delay resending a request on error.
#
# Four callback methods act on the main/UI thread,
# they should be implemented as needed in subclasses:
# * `before`
# * `on_load`
# * `on_fail`
# * `after`
#
# See full example at `examples/http_request_example.nit`.
abstract class AsyncHttpRequest
	super Thread

	# URI target of this request, by default it is composed of `uri_root / uri_tail`
	fun uri: Text do return uri_root / uri_tail

	# Root URI of the remote server, usually the scheme and remote host
	fun uri_root: String is abstract

	# Right part of the URI, after `uri_root`, often the resource path and the query
	fun uri_tail: String do return ""

	# Should the response content be deserialized from JSON?
	var deserialize_json = true is writable

	# Delay in seconds before sending this request
	var delay = 0.0 is writable

	redef fun start
	do
		before
		super
	end

	redef fun main
	do
		var delay = delay
		if delay > 0.0 then delay.sleep

		var uri = uri

		# Execute REST request
		var rep = uri.http_get
		if rep.is_error then
			app.run_on_ui_thread new RestRunnableOnFail(self, rep.error)
			return null
		end

		if deserialize_json then
			# Deserialize
			var deserializer = new JsonDeserializer(rep.value)
			var res = deserializer.deserialize
			if deserializer.errors.not_empty then
				app.run_on_ui_thread new RestRunnableOnFail(self, deserializer.errors.first)
			else
				app.run_on_ui_thread new RestRunnableOnLoad(self, res, rep.code)
			end
		else
			# Return text data
			app.run_on_ui_thread new RestRunnableOnLoad(self, rep.value, rep.code)
			return null
		end

		app.run_on_ui_thread new RestRunnableJoin(self)

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
	fun on_load(result: nullable Object, http_status_code: Int) do end

	# Invoked when the HTTP request has failed and no data was received or deserialization failed
	fun on_fail(error: Error) do print_error "HTTP request '{uri}' failed with: {error}"

	# Complete this request whether it was a success or not
	fun after do end
end

# Simple `AsyncHttpRequest` where `uri` is an attribute
#
# Prints on communication errors and when the remote server returns an
# HTTP status code not in the 200s.
#
# This class can be instantiated to execute a request where the response is
# ignored by the application. Alternatively, it can be subclassed to implement
# `on_load`.
#
# ~~~nitish
# var request = new SimpleAsyncHttpRequest("http://example.com")
# request.start
# ~~~
class SimpleAsyncHttpRequest
	super AsyncHttpRequest

	redef var uri

	redef fun on_load(data, status) do if status < 200 or status >= 299
	then print_error "HTTP request '{uri}' received HTTP status code: {status}"
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
	#
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

	var code: Int

	redef fun main
	do
		sender_thread.on_load(res, code)
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

private class RestRunnableJoin
	super HttpRequestTask

	redef fun main do sender_thread.join
end
