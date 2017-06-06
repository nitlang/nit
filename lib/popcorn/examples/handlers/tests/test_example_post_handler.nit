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

module test_example_post_handler is test

import pop_tests
import example_post_handler

class TestExamplePostHandler
	super TestPopcorn
	test

	redef fun client_test do
		system "curl -s {host}:{port}/ -X POST"
		system "curl -s {host}:{port}/ --data 'user'"
		system "curl -s {host}:{port}/ --data 'user=Morriar'"
		system "curl -s {host}:{port}/ --data 'user=\&order=desc'"
		system "curl -s {host}:{port}/ --data 'user=Morriar\&order=desc'"
		system "curl -s {host}:{port}/"
	end

	fun test_example_post_handler is test do
		var app = new App
		app.use("/", new PostHandler)
		run_test(app)
	end
end
