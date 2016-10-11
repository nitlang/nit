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
module restful_annot

import nitcorn::restful

# An action root to its `restful` methods
class MyAction
	super RestfulAction

	# Method answering requests like `foo?s=some_string&i=42&b=true`
	#
	# By default, the name of the HTTP resource is the name of the method.
	# Responds to all HTTP methods, including GET, POST, PUT and DELETE.
	fun foo(s: String, i: Int, b: Bool): HttpResponse
	is restful do
		var resp = new HttpResponse(200)
		resp.body = "foo {s} {i} {b}"
		return resp
	end

	# Method answering requests like `api_name?s=these_arguments_are_optional`
	#
	# This method is available as both `api_name` and `alt_name` in HTTP.
	# Responds only to the GET and PUT HTTP method.
	fun bar(s: nullable String, i: nullable Int, b: nullable Bool): HttpResponse
	is restful("api_name", "alt_name", GET, PUT) do

		var resp = new HttpResponse(200)
		resp.body = "bar {s or else "null"} {i or else "null"} {b or else "null"}"
		return resp
	end
end

var vh = new VirtualHost("localhost:8080")

# Set `rest_path` as the root for an instance of `MyAction`, so:
# * `MyClass::foo` is available as `localhost:8080/rest_path/foo?...`,
# * `MyClass::bar` is available as both `localhost:8080/rest_path/api_name?...`
#   and `localhost:8080/rest_path/alt_name?...`.
vh.routes.add new Route("rest_path", new MyAction)

var factory = new HttpFactory.and_libevent
factory.config.virtual_hosts.add vh
factory.run
