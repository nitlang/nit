# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2016 Alexandre Terrasa <alexandre@moz-code.org>
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

# Internal routes representation.
module pop_routes

import nitcorn

# AppRoute provide services for path and uri manipulation and matching..
#
# Default strict routes like `/` or `/user` match the same URI string.
# An exception is done for the trailing `/`, which is always omitted during the
# parsing.
#
# ~~~
# var route = new AppRoute("/")
# assert route.match("")
# assert route.match("/")
# assert not route.match("/user")
# assert not route.match("user")
#
# route = new AppRoute("/user")
# assert not route.match("/")
# assert route.match("/user")
# assert route.match("/user/")
# assert not route.match("/user/10")
# assert not route.match("/foo")
# assert not route.match("user")
# assert not route.match("/username")
# ~~~
class AppRoute

	# Route relative path from server root.
	var path: String

	# Does self match the `req`?
	fun match(uri: String): Bool do
		uri = uri.simplify_path
		var path = resolve_path(uri)
		if uri.is_empty and path == "/" then return true
		return uri == path
	end

	# Replace path parameters with concrete values from the `uri`.
	#
	# For strict routes, it returns the path unchanged:
	# ~~~
	# var route = new AppRoute("/")
	# assert route.resolve_path("/user/10/profile") == "/"
	#
	# route = new AppRoute("/user")
	# assert route.resolve_path("/user/10/profile") == "/user"
	# ~~~
	fun resolve_path(uri: String): String do return path.simplify_path

	# Remove `resolved_path` prefix from `uri`.
	#
	# Mainly used to resolve and match mountable routes.
	#
	# ~~~
	# var route = new AppRoute("/")
	# assert route.uri_root("/user/10/profile") == "/user/10/profile"
	#
	# route = new AppRoute("/user")
	# assert route.uri_root("/user/10/profile") == "/10/profile"
	# ~~~
	fun uri_root(uri: String): String do
		var path = resolve_path(uri)
		if path == "/" then return uri
		return uri.substring(path.length, uri.length).simplify_path
	end
end

# Parameterizable routes.
#
# Routes that can contains variables parts that will be resolved during the
# matching process.
#
# Route parameters are marked with a colon `:`
# ~~~
# var route = new AppParamRoute("/:id")
# assert not route.match("/")
# assert route.match("/user")
# assert route.match("/user/")
# assert not route.match("/user/10")
# ~~~
#
# It is possible to use more than one parameter in the same route:
# ~~~
# route = new AppParamRoute("/user/:userId/items/:itemId")
# assert not route.match("/user/10/items/")
# assert route.match("/user/10/items/e895346")
# assert route.match("/user/USER/items/0/")
# assert not route.match("/user/10/items/10/profile")
# ~~~
class AppParamRoute
	super AppRoute

	init do parse_path_parameters(path)

	# Cut `path` into `UriParts`.
	fun parse_path_parameters(path: String) do
		for part in path.split("/") do
			if not part.is_empty and part.first == ':' then
				# is an uri param
				path_parts.add new UriParam(part.substring(1, part.length))
			else
				# is a standard string
				path_parts.add new UriString(part)
			end
		end
	end

	# For parameterized routes, parameter names are replaced by their value in the URI.
	# ~~~
	# var route = new AppParamRoute("/user/:id")
	# assert route.resolve_path("/user/10/profile") == "/user/10"
	#
	# route = new AppParamRoute("/user/:userId/items/:itemId")
	# assert route.resolve_path("/user/Morriar/items/i156/desc") == "/user/Morriar/items/i156"
	# ~~~
	redef fun resolve_path(uri) do
		var uri_params = parse_uri_parameters(uri)
		var path = "/"
		for part in path_parts do
			if part isa UriString then
				path /= part.string
			else if part isa UriParam then
				path /= uri_params.get_or_default(part.name, part.name)
			end
		end
		return path.simplify_path
	end

	# Extract parameter values from `uri`.
	# ~~~
	# var route = new AppParamRoute("/user/:userId/items/:itemId")
	# var params = route.parse_uri_parameters("/user/10/items/i125/desc")
	# assert params["userId"] == "10"
	# assert params["itemId"] == "i125"
	# assert params.length == 2
	#
	# params = route.parse_uri_parameters("/")
	# assert params.is_empty
	# ~~~
	fun parse_uri_parameters(uri: String): Map[String, String] do
		var res = new HashMap[String, String]
		if path_parts.is_empty then return res
		var parts = uri.split("/")
		for i in [0 .. path_parts.length[ do
			if i >= parts.length then return res
			var ppart = path_parts[i]
			var part = parts[i]
			if not ppart.match(part) then return res
			if ppart isa UriParam then
				res[ppart.name] = part
			end
		end
		return res
	end

	private var path_parts = new Array[UriPart]
end

# Route with glob.
#
# Route variable part is suffixed with a star `*`:
# ~~~
# var route = new AppGlobRoute("/*")
# assert route.match("/")
# assert route.match("/user")
# assert route.match("/user/10")
# ~~~
#
# Glob routes can be combined with parameters:
# ~~~
# route = new AppGlobRoute("/user/:id/*")
# assert not route.match("/user")
# assert route.match("/user/10")
# assert route.match("/user/10/profile")
# ~~~
#
# Note that the star can be used directly on the end of an URI part:
# ~~~
# route = new AppGlobRoute("/user*")
# assert route.match("/user")
# assert route.match("/username")
# assert route.match("/user/10/profile")
# assert not route.match("/foo")
# ~~~
#
# For now, stars cannot be used inside a route, use URI parameters instead.
class AppGlobRoute
	super AppParamRoute

	# Path without the trailing `*`.
	# ~~~
	# var route = new AppGlobRoute("/user/:id/*")
	# assert route.resolve_path("/user/10/profile") == "/user/10"
	#
	# route = new AppGlobRoute("/user/:userId/items/:itemId*")
	# assert route.resolve_path("/user/Morriar/items/i156/desc") == "/user/Morriar/items/i156"
	# ~~~
	redef fun resolve_path(uri) do
		var path = super
		if path.has_suffix("*") then
			return path.substring(0, path.length - 1).simplify_path
		end
		return path.simplify_path
	end

	redef fun match(uri) do
		var path = resolve_path(uri)
		return uri.has_prefix(path.substring(0, path.length - 1))
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
	redef fun match(part) do return not part.is_empty

	redef fun to_s do return name
end

# A static uri string like `users`.
private class UriString
	super UriPart

	# Uri part string.
	var string: String

	# Empty strings match everything otherwise matching is based on string equality.
	redef fun match(part) do return string.is_empty or string == part

	redef fun to_s do return string
end
