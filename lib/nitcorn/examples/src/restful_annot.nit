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

# Example for the `restful` annotation documented at `lib/nitcorn/restful.nit`
module restful_annot is example

import nitcorn::restful
import nitcorn::pthreads

# An action root to its `restful` methods
class MyAction
	super RestfulAction

	# Method answering requests such as `foo?s=some_string&i=42&b=true`
	#
	# By default, the name of the HTTP resource is the name of the method.
	# Responds to all HTTP methods, including GET, POST, PUT and DELETE.
	#
	# All arguments are deserialized from a JSON format,
	# except for strings that are used as is.
	fun foo(s: String, i: Int, b: Bool): HttpResponse
	is restful do
		var resp = new HttpResponse(200)
		resp.body = "foo {s} {i} {b}"
		return resp
	end

	# Method answering requests such as `api_name?s=these_arguments_are_optional`
	#
	# This method is available as both `api_name` and `alt_name` in HTTP.
	# Responds only to the GET and PUT HTTP method.
	fun bar(s: nullable String, i: nullable Int, b: nullable Bool): HttpResponse
	is restful("api_name", "alt_name", GET, PUT) do

		var resp = new HttpResponse(200)
		resp.body = "bar {s or else "null"} {i or else "null"} {b or else "null"}"
		return resp
	end

	# Asynchronous method answering requests such as `async_service?str=some_string`
	#
	# This method is executed by the `thread_pool` attribute of this class.
	# Be careful when using the `async` argument to follow all the good
	# concurrent programming pratices.
	fun async_service(str: String): HttpResponse
	is restful(async) do

		# "Work" for 2 seconds
		2.0.sleep

		# Answer
		var resp = new HttpResponse(200)
		resp.body = "async_service {str}"
		return resp
	end

	# Method with two complex parameters answering requests such as
	# `complex_args?array=["a","b"]&data={"str":"asdf","more":{"str":"ASDF"}}`
	#
	# Collections and other classes can also be used as parameters,
	# they will be deserialized from JSON format.
	# By default, the JSON objects will be parsed as the type of the parameter.
	# In the example above, the argument passed as `data` is deserialized as a `MyData`.
	# However, you can use metadata in the JSON object to deserialize it
	# as a subclass of `MyData`, as in this request where `data` is a `MyOtherData`:
	#
	# `complex_args?array=["a","b"]&data={"__class":"MyOtherData","str":"asdf","i":1234}`
	#
	# See the `json` package documentation for more information on JSON
	# deserialization and the metadata values.
	fun complex_args(array: Array[String], data: MyData): HttpResponse
	is restful do
		var resp = new HttpResponse(200)
		resp.body = "complex_args {array} {data}"
		return resp
	end

	# Catch all other request
	redef fun answer(request, turi)
	do
		var resp = new HttpResponse(404)
		resp.body = "Fallback answer"
		return resp
	end
end

# Simple data structure for `MyAction::complex_args`
class MyData
	serialize

	# Some string
	var str: String

	# Some more data
	var more: nullable MyData

	redef fun to_s do return "<MyData str:{str} more:{more or else "null"}>"
end

# Another data structure, subclass to `MyData`
class MyOtherData
	super MyData
	serialize

	# An integer
	var i: Int

	redef fun to_s do return "<MyOtherData str:{str} more:{more or else "null"} i:{i}>"
end

var vh = new VirtualHost("localhost:8080")

# Set `rest_path` as the root for an instance of `MyAction`, so:
# * `MyClass::foo` is available as `localhost:8080/rest_path/foo?s=s&i=12&b=true`,
# * `MyClass::bar` is available as both `localhost:8080/rest_path/api_name?s=s`
#   and `localhost:8080/rest_path/alt_name?...`.
# * `MyClass::async_service` is available as `localhost:8080/rest_path/async_service?str=str`
# * `MyClass::complex_args` is available as
#   `localhost:8080/rest_path/complex_args?array=["a","b"]&data={"str":"asdf"}`
vh.routes.add new Route("rest_path", new MyAction)

var factory = new HttpFactory.and_libevent
factory.config.virtual_hosts.add vh
factory.run
