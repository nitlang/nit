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

import example_router
import base_tests

class HelloClient
	super ClientThread

	redef fun main do
		system "curl -s {host}:{port}"
		system "curl -s {host}:{port}/"
		system "curl -s {host}:{port}/user"
		system "curl -s {host}:{port}/user/"
		system "curl -s {host}:{port}/user/profile"

		system "curl -s {host}:{port}/not_found"
		system "curl -s {host}:{port}/user/not_found"
		system "curl -s {host}:{port}/products/not_found"
		return null
	end
end

var user_router = new Router
user_router.use("/*", new UserLogger)
user_router.use("/", new UserHome)
user_router.use("/profile", new UserProfile)

var app = new App
app.use("/", new AppHome)
app.use("/user", user_router)

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
