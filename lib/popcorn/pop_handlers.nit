# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Route handlers.
module pop_handlers

import pop_routes
import csv

# Class handler for a route.
#
# **Routing** refers to determining how an application responds to a client request
# to a particular endpoint, which is a URI (or path) and a specific HTTP request
# method GET, POST, PUT or DELETE (other methods are not suported yet).
#
# Each route can have one or more handler methods, which are executed when the route is matched.
#
# Route handlers definition takes the following form:
#
# ~~~nitish
# class MyHandler
#	super Handler
#
#	redef fun METHOD(req, res) do end
# end
# ~~~
#
# Where:
# * `MyHandler` is the name of the handler you will add to the app.
# * `METHOD` can be replaced by `get`, `post`, `put` or `delete`.
#
# The following example responds with `Hello World!` to GET and POST requests:
#
# ~~~
# class MyHandler
#	super Handler
#
#	redef fun get(req, res) do res.send "Got a GET request"
#	redef fun post(req, res) do res.send "Got a POST request"
# end
# ~~~
#
# To make your handler responds to a specific route, you have to add it to the app.
#
# Respond to POST request on the root route (`/`), the application's home page:
#
# ~~~
# var app = new App
# app.use("/", new MyHandler)
# ~~~
#
# Respond to a request to the `/user` route:
#
# ~~~
# app.use("/user", new MyHandler)
# ~~~
abstract class Handler

	# Call `all(req, res)` if `route` matches `uri`.
	private fun handle(route: AppRoute, uri: String, req: HttpRequest, res: HttpResponse) do
		if route.match(uri) then
			if route isa AppParamRoute then
				req.uri_params = route.parse_uri_parameters(uri)
			end
			all(req, res)
		end
	end

	# Handler to all kind of HTTP request methods.
	#
	# `all` is a special request handler, which is not derived from any
	# HTTP method. This method is used to respond at a path for all request methods.
	#
	# In the following example, the handler will be executed for requests to "/user"
	# whether you are using GET, POST, PUT, DELETE, or any other HTTP request method.
	#
	# ~~~
	# class AllHandler
	#	super Handler
	#
	#	redef fun all(req, res) do res.send "Every request to the homepage"
	# end
	# ~~~
	#
	# Using the `all` method you can also implement other HTTP request methods.
	#
	# ~~~
	# class MergeHandler
	#	super Handler
	#
	#	redef fun all(req, res) do
	#		if req.method == "MERGE" then
	#			# handle that method
	#		else super # keep handle GET, POST, PUT and DELETE methods
	#	end
	# end
	# ~~~
	fun all(req: HttpRequest, res: HttpResponse) do
		if req.method == "GET" then
			get(req, res)
		else if req.method == "POST" then
			post(req, res)
		else if req.method == "PUT" then
			put(req, res)
		else if req.method == "DELETE" then
			delete(req, res)
		else
			res.status_code = 405
		end
	end

	# GET handler.
	#
	# Exemple of route responding to GET requests.
	# ~~~
	# class GetHandler
	#	super Handler
	#
	#	redef fun get(req, res) do res.send "GETrequest received"
	# end
	# ~~~
	fun get(req: HttpRequest, res: HttpResponse) do end

	# POST handler.
	#
	# Exemple of route responding to POST requests.
	# ~~~
	# class PostHandler
	#	super Handler
	#
	#	redef fun post(req, res) do res.send "POST request received"
	# end
	# ~~~
	fun post(req: HttpRequest, res: HttpResponse) do end

	# PUT handler.
	#
	# Exemple of route responding to PUT requests.
	# ~~~
	# class PutHandler
	#	super Handler
	#
	#	redef fun put(req, res) do res.send "PUT request received"
	# end
	# ~~~
	fun put(req: HttpRequest, res: HttpResponse) do end

	# DELETE handler.
	#
	# Exemple of route responding to PUT requests.
	# ~~~
	# class DeleteHandler
	#	super Handler
	#
	#	redef fun delete(req, res) do res.send "DELETE request received"
	# end
	# ~~~
	fun delete(req: HttpRequest, res: HttpResponse) do end
end

# Static files server.
#
# To serve static files such as images, CSS files, and JavaScript files, use the
# Popcorn built-in handler `StaticHandler`.
#
# Pass the name of the directory that contains the static assets to the StaticHandler
# init method to start serving the files directly.
# For example, use the following code to serve images, CSS files, and JavaScript files
# in a directory named `public`:
#
# ~~~
# var app = new App
# app.use("/", new StaticHandler("public/"))
# ~~~
#
# Now, you can load the files that are in the `public` directory:
#
# ~~~raw
# http://localhost:3000/images/trollface.jpg
# http://localhost:3000/css/style.css
# http://localhost:3000/js/app.js
# http://localhost:3000/hello.html
# ~~~
#
# Popcorn looks up the files relative to the static directory, so the name of the
# static directory is not part of the URL.
# To use multiple static assets directories, add the `StaticHandler` multiple times:
#
# ~~~
# app.use("/", new StaticHandler("public/"))
# app.use("/", new StaticHandler("files/"))
# ~~~
#
# Popcorn looks up the files in the order in which you set the static directories
# with the `use` method.
#
# To create a virtual path prefix (where the path does not actually exist in the file system)
# for files that are served by the `StaticHandler`, specify a mount path for the
# static directory, as shown below:
#
# ~~~
# app.use("/static/", new StaticHandler("public/"))
# ~~~
#
# Now, you can load the files that are in the public directory from the `/static`
# path prefix.
#
# ~~~raw
# http://localhost:3000/static/images/trollface.jpg
# http://localhost:3000/static/css/style.css
# http://localhost:3000/static/js/app.js
# http://localhost:3000/static/hello.html
# ~~~
#
# However, the path that you provide to the `StaticHandler` is relative to the
# directory from where you launch your app.
# If you run the app from another directory, it’s safer to use the absolute path of
# the directory that you want to serve.
class StaticHandler
	super Handler

	# Static files directory to serve.
	var static_dir: String

	# Default file to serve if nothing matches the request.
	#
	# `null` for no default file.
	var default_file: nullable String

	# Internal file server used to lookup and render files.
	var file_server: FileServer is lazy do
		var srv = new FileServer(static_dir)
		srv.show_directory_listing = false
		srv.default_file = default_file
		return srv
	end

	redef fun handle(route, uri, req, res) do
		var answer = file_server.answer(req, route.uri_root(uri))
		if answer.status_code == 200 then
			res.status_code = answer.status_code
			res.header.add_all answer.header
			res.files.add_all answer.files
			res.send
		else if answer.status_code != 404 then
			res.status_code = answer.status_code
		end
	end
end

# Mountable routers
#
# Use the `Router` class to create modular, mountable route handlers.
# A Router instance is a complete middleware and routing system; for this reason,
# it is often referred to as a “mini-app”.
#
# The following example creates a router as a module, loads a middleware handler in it,
# defines some routes, and mounts the router module on a path in the main app.
#
# ~~~
# class AppHome
#	super Handler
#
#	redef fun get(req, res) do res.send "Site Home"
# end
#
# class UserLogger
#	super Handler
#
#	redef fun all(req, res) do print "User logged"
# end
#
# class UserHome
#	super Handler
#
#	redef fun get(req, res) do res.send "User Home"
# end
#
# class UserProfile
#	super Handler
#
#	redef fun get(req, res) do res.send "User Profile"
# end
#
# var user_router = new Router
# user_router.use("/*", new UserLogger)
# user_router.use("/", new UserHome)
# user_router.use("/profile", new UserProfile)
#
# var app = new App
# app.use("/", new AppHome)
# app.use("/user", user_router)
# ~~~
#
# The app will now be able to handle requests to /user and /user/profile, as well
# as call the `Time` middleware handler that is specific to the route.
class Router
	super Handler

	# List of handlers to match with requests.
	private var handlers = new Map[AppRoute, Handler]

	# List of handlers to match before every other.
	private var pre_handlers = new Map[AppRoute, Handler]

	# List of handlers to match after every other.
	private var post_handlers = new Map[AppRoute, Handler]

	# Register a `handler` for a route `path`.
	#
	# Route paths are matched in registration order.
	fun use(path: String, handler: Handler) do
		var route = build_route(handler, path)
		handlers[route] = handler
	end

	# Register a pre-handler for a route `path`.
	#
	# Prehandlers are matched before every other handlers in registrastion order.
	fun use_before(path: String, handler: Handler) do
		var route = build_route(handler, path)
		pre_handlers[route] = handler
	end

	# Register a post-handler for a route `path`.
	#
	# Posthandlers are matched after every other handlers in registrastion order.
	fun use_after(path: String, handler: Handler) do
		var route = build_route(handler, path)
		post_handlers[route] = handler
	end

	redef fun handle(route, uri, req, res) do
		if not route.match(uri) then return
		handle_pre(route, uri, req, res)
		handle_in(route, uri, req, res)
		handle_post(route, uri, req, res)
	end

	private fun handle_pre(route: AppRoute, uri: String, req: HttpRequest, res: HttpResponse) do
		for hroute, handler in pre_handlers do
			handler.handle(hroute, route.uri_root(uri), req, res)
		end
	end

	private fun handle_in(route: AppRoute, uri: String, req: HttpRequest, res: HttpResponse) do
		for hroute, handler in handlers do
			handler.handle(hroute, route.uri_root(uri), req, res)
			if res.sent then break
		end
	end

	private fun handle_post(route: AppRoute, uri: String, req: HttpRequest, res: HttpResponse) do
		for hroute, handler in post_handlers do
			handler.handle(hroute, route.uri_root(uri), req, res)
		end
	end

	private fun build_route(handler: Handler, path: String): AppRoute do
		if handler isa Router or handler isa StaticHandler then
			return new AppGlobRoute(path)
		else if path.has_suffix("*") then
			return new AppGlobRoute(path)
		else
			return new AppParamRoute(path)
		end
	end
end

# Popcorn application.
#
# The `App`  is the main point of the application.
# It acts as a `Router` that holds the top level route handlers.
#
# Here an example to create a simple web app with Popcorn:
#
# ~~~
# import popcorn
#
# class HelloHandler
#	super Handler
#
#	redef fun get(req, res) do res.html "<h1>Hello World!</h1>"
# end
#
# var app = new App
# app.use("/", new HelloHandler)
# # app.listen("localhost", 3000)
# ~~~
#
# The Popcorn app listens on port 3000 for connections.
# The app responds with "Hello World!" for request to the root URL (`/`) or **route**.
# For every other path, it will respond with a **404 Not Found**.
#
# The `req` (request) and `res` (response) parameters are the same that nitcorn provides
# so you can do anything else you would do in your route without Popcorn involved.
#
# Run the app with the following command:
#
# ~~~bash
# nitc app.nit && ./app
# ~~~
#
# Then, load [http://localhost:3000](http://localhost:3000) in a browser to see the output.
class App
	super Router
end

redef class HttpResponse

	# Was this request sent by a handler?
	var sent = false

	private fun check_sent do
		if sent then print "Warning: Headers already sent!"
	end

	# Write data in body response and send it.
	fun send(raw_data: nullable Writable, status: nullable Int) do
		if raw_data != null then
			body = raw_data
		end
		if status != null then
			status_code = status
		else
			status_code = 200
		end
		check_sent
		sent = true
	end

	# Write data as HTML and set the right content type header.
	fun html(html: nullable Writable, status: nullable Int) do
		header["Content-Type"] = media_types["html"].as(not null)
		send(html, status)
	end

	# Write data as CSV and set the right content type header.
	fun csv(csv: nullable CsvDocument, status: nullable Int) do
		header["Content-Type"] = media_types["csv"].as(not null)
		if csv == null then
			send(null, status)
		else
			send(csv.write_to_string, status)
		end
	end

	# Redirect response to `location`
	#
	# Use by default 303 See Other as it is the RFC
	# way to redirect web applications to a new URI.
	fun redirect(location: String, status: nullable Int) do
		header["Location"] = location
		if status != null then
			status_code = status
		else
			status_code = 303
		end
		check_sent
		sent = true
	end

	# TODO The error message should be parameterizable.
	fun error(status: Int) do
		html("Error", status)
	end
end
