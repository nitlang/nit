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

module test_example_static is test

import pop_tests
import example_static

class TestExampleStatic
	super TestPopcorn
	test

	redef fun client_test do
		system "curl -s {host}:{port}/css/style.css"
		system "curl -s {host}:{port}/js/app.js"
		system "curl -s {host}:{port}/hello.html"
		system "curl -s {host}:{port}/"
		system "curl -s {host}:{port}/css/not_found.nit"
		system "curl -s {host}:{port}/static/css/not_found.nit"
		system "curl -s {host}:{port}/not_found.nit"
	end

	fun test_example_static is test do
		var app = new App
		app.use("/", new StaticHandler(test_path / "../public/"))
		run_test(app)
	end
end
