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

import nitcorn::restful

class MyAction
	super RestfulAction

	# Method answering requests like `foo?s=some_string&i=42&b=true`
	fun foo(s: String, i: Int, b: Bool): HttpResponse
	is restful do
		var resp = new HttpResponse(200)
		resp.body = "foo {s} {i} {b}"
		return resp
	end

	# Method answering requests like `bar?s=these_arguments_are_optional`
	fun bar(s: nullable String, i: nullable Int, b: nullable Bool): HttpResponse
	is restful do
		var resp = new HttpResponse(200)
		resp.body = "bar {s or else "null"} {i or else "null"} {b or else "null"}"
		return resp
	end
end

var vh = new VirtualHost("localhost:8080")

# Serve everything with our restful action
vh.routes.add new Route(null, new MyAction)

# Avoid executing when running tests
if "NIT_TESTING".environ == "true" then exit 0

var factory = new HttpFactory.and_libevent
factory.config.virtual_hosts.add vh
factory.run
