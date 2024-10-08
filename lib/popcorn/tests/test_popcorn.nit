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

module test_popcorn is test

import pop_tests
import popcorn

class TestHandler
	super Handler

	var marker: String

	redef fun get(req, res) do res.send marker
end

class TestPopcornRouter
	super TestPopcorn
	test

	redef fun client_test do
		system "curl -s {host}:{port}"
		system "curl -s {host}:{port}/"
		system "curl -s {host}:{port}/user"
		system "curl -s {host}:{port}/user/"
		system "curl -s {host}:{port}/user/settings"
		system "curl -s {host}:{port}/products"
		system "curl -s {host}:{port}/products/"
		system "curl -s {host}:{port}/products/list"
		system "curl -s {host}:{port}/not_found"
		system "curl -s {host}:{port}/user/not_found"
		system "curl -s {host}:{port}/products/not_found"
	end

	fun test_router is test do
		var app = new App
		app.use("/", new TestHandler("/"))
		app.use("/about", new TestHandler("/about"))

		var router1 = new App
		router1.use("/", new TestHandler("/user"))
		router1.use("/settings", new TestHandler("/user/settings"))
		app.use("/user", router1)

		var router2 = new App
		router2.use("/", new TestHandler("/products"))
		router2.use("/list", new TestHandler("/products/list"))
		app.use("/products", router2)

		run_test(app)
	end
end

class TestPopcornRoutes
	super TestPopcorn
	test

	redef fun client_test do
		system "curl -s {host}:{port}"
		system "curl -s {host}:{port}/"
		system "curl -s {host}:{port}/misc"
		system "curl -s {host}:{port}/misc/foo"
		system "curl -s {host}:{port}/misc/foo/bar"
		system "curl -s {host}:{port}/misc/foo/baz"
		system "curl -s {host}:{port}/user"
		system "curl -s {host}:{port}/user/"
		system "curl -s {host}:{port}/user/id"
		system "curl -s {host}:{port}/user/id/profile"
		system "curl -s {host}:{port}/user/id/misc/foo"
		system "curl -s {host}:{port}/user/id/misc/foo/bar"
		system "curl -s {host}:{port}/user/id/misc/foo/bar/baz"
		system "curl -s {host}:{port}/not_found"
		system "curl -s {host}:{port}/user/id/not_found"
	end

	fun test_routes is test do
		var app = new App
		app.use("/", new TestHandler("/"))
		app.use("/user", new TestHandler("/user"))
		app.use("/misc/*", new TestHandler("/misc/everything"))
		app.use("/user/:id", new TestHandler("/user/id"))
		app.use("/user/:id/profile", new TestHandler("/user/id/profile"))
		app.use("/user/:id/misc/*", new TestHandler("/user/id/misc/everything"))
		run_test(app)
	end
end
