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

import base_tests

class TestHandler
	super Handler

	var marker: String

	redef fun get(req, res) do res.send marker
end

class HelloClient
	super ClientThread

	redef fun main do
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
		return null
	end
end

var app = new App
app.use("/", new TestHandler("/"))
app.use("/user", new TestHandler("/user"))
app.use("/misc/*", new TestHandler("/misc/everything"))
app.use("/user/:id", new TestHandler("/user/id"))
app.use("/user/:id/profile", new TestHandler("/user/id/profile"))
app.use("/user/:id/misc/*", new TestHandler("/user/id/misc/everything"))

var host = test_host
var port = test_port

# First, launch a server in the background
var server = new AppThread(host, port, app)
server.start
0.1.sleep

# Then, launch a client running test requests
var client = new HelloClient(host, port)
client.start
client.join
0.1.sleep

# Force quit the server
exit 0
