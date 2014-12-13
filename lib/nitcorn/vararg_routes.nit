# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexandre Terrasa <alexandre@moz-code.org>
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

# Routes with uri parameters.
#
# Using `vararg_routes`, a `Route` can contain variable parts
# that will be matched against a `HttpRequest` path.
#
# Variable parts of path can be specified using the `:` prefix.
#
# ## Route matching
#
# Route can match variables expression.
#
# ~~~
# # We need an Action to try routes.
# class DummyAction super Action end
# var action = new DummyAction
#
# var route = new Route("/users/:id", action)
# assert not route.match("/users")
# assert route.match("/users/1234")
# assert route.match("/users/") # empty id
# ~~~
#
# Route without uri parameters still behave like before.
#
# ~~~
# route = new Route("/users", action)
# assert route.match("/users")
# assert route.match("/users/1234")
# assert not route.match("/issues/1234")
# ~~~
#
# ## Route priority
#
# Priority depends on the order the routes were added to the `Routes` dispatcher.
#
# ~~~
# var host = new VirtualHost("")
# var routes = new Routes(host)
#
# routes.add new Route("/:a/:b/:c", action)
# routes.add new Route("/users/:id", action)
# routes.add new Route("/:foo", action)
#
# assert routes["/a/b/c"].path == "/:a/:b/:c"
# assert routes["/a/b/c/d"].path == "/:a/:b/:c"
# assert routes["/users/1234/foo"].path == "/:a/:b/:c"
#
# assert routes["/users/"].path == "/users/:id"
# assert routes["users/"].path == "/users/:id"
# assert routes["/users/1234"].path == "/users/:id"
#
# assert routes["/users"].path == "/:foo"
# assert routes["/"].path == "/:foo"
# assert routes[""].path == "/:foo"
# ~~~
#
# ## Accessing uri parameter and values
#
# Parameters can be accessed by parsing the uri.
#
# ~~~
# route = new Route("/users/:id", action)
# var params = route.parse_params("/users/1234")
# assert params.has_key("id")
# assert not params.has_key("foo")
# assert params["id"] == "1234"
# ~~~
#
# Or from the `HttpRequest`.
#
# ~~~
# route = new Route("/users/:id", action)
# var req = new HttpRequest
# req.uri_params = route.parse_params("/users/1234")
# assert req.params == ["id"]
# assert req.param("id") == "1234"
# assert req.param("foo") == null
# ~~~
#
# Note that normally, all this work is done by nitcorn.
# Params can then be accessed in the `HttpRequest` given to `Action::answer`.
module vararg_routes

import server_config
import http_request

# A route to an `Action` according to a `path`
redef class Route

	redef init do
		super
		parse_pattern(path)
	end

	# Cut `path` into `UriParts`.
	private fun parse_pattern(path: nullable String) do
		if path == null then return
		path = standardize_path(path)
		var parts = path.split("/")
		for part in parts do
			if not part.is_empty and part.first == ':' then
				# is an uri param
				var name = part.substring(1, part.length)
				var param = new UriParam(name)
				pattern_parts.add param
			else
				# is a standard string
				pattern_parts.add new UriString(part)
			end
		end
	end

	# `UriPart` forming `self` pattern.
	private var pattern_parts = new Array[UriPart]

	# Does `self` matches `uri`?
	fun match(uri: nullable String): Bool do
		if pattern_parts.is_empty then return true
		if uri == null then return false
		uri = standardize_path(uri)
		var parts = uri.split("/")
		for i in [0 .. pattern_parts.length[ do
			if i >= parts.length then return false
			var ppart = pattern_parts[i]
			var part = parts[i]
			if not ppart.match(part) then return false
		end
		return true
	end

	# Extract parameter values from `uri`.
	fun parse_params(uri: nullable String): Map[String, String] do
		var res = new HashMap[String, String]
		if pattern_parts.is_empty then return res
		if uri == null then return res
		uri = standardize_path(uri)
		var parts = uri.split("/")
		for i in [0 .. pattern_parts.length[ do
			if i >= parts.length then return res
			var ppart = pattern_parts[i]
			var part = parts[i]
			if not ppart.match(part) then return res
			if ppart isa UriParam then
				res[ppart.name] = part
			end
		end
		return res
	end

	# Remove first occurence of `/`.
	private fun standardize_path(path: String): String do
		if not path.is_empty and path.first == '/' then
			return path.substring(1, path.length)
		end
		return path
	end
end

# A String that compose an URI.
#
# In practice, UriPart can be parameters or static strings.
private interface UriPart
	# Does `self` matches a part of the uri?
	fun match(uri_part: String): Bool is abstract
end

# An uri parameter string like `:id`.
private class UriParam
	super UriPart

	# Param `name` in the route uri.
	var name: String

	# Parameters match everything.
	redef fun match(part) do return true
end

# A static uri string like `users`.
private class UriString
	super UriPart

	# Uri part string.
	var string: String

	# Empty strings match everything otherwise matching is based on string equality.
	redef fun match(part) do return string.is_empty or string == part
end

redef class Routes
	# Use `Route::match` instead of `==`.
	redef fun [](key) do
		for route in routes do
			if route.match(key) then return route
		end
		return null
	end
end

redef class HttpRequest

	# Parameters found in uri associated to their values.
	var uri_params: Map[String, String] = new HashMap[String, String] is public writable

	# Get the value for parameter `name` or `null`.
	fun param(name: String): nullable String do
		if not uri_params.has_key(name) then return null
		return uri_params[name]
	end

	# List all uri parameters matched by this request.
	fun params: Array[String] do return uri_params.keys.to_a
end
