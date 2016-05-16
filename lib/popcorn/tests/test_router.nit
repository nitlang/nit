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
		system "curl -s {host}:{port}/user"
		system "curl -s {host}:{port}/user/"
		system "curl -s {host}:{port}/user/settings"
		system "curl -s {host}:{port}/products"
		system "curl -s {host}:{port}/products/"
		system "curl -s {host}:{port}/products/list"

		system "curl -s {host}:{port}/not_found"
		system "curl -s {host}:{port}/user/not_found"
		system "curl -s {host}:{port}/products/not_found"
		return null
	end
end

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

var host = test_host
var port = test_port

var server = new AppThread(host, port, app)
server.start
0.1.sleep

var client = new HelloClient(host, port)
client.start
client.join
0.1.sleep

exit 0
