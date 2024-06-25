# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2017 Alexandre Terrasa <alexandre@moz-code.org>
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

module test_example_templates is test

import pop_tests
intrude import example_templates

class TestExampleTemplate
	super TestPopcorn
	test

	redef fun client_test do
		system "curl -s {host}:{port}/"
	end

	fun test_example_template is test do
		var app = new App
		app.use("/", new MyTemplateHandler)
		run_test(app)
	end
end

class TestExampleTemplateString
	super TestPopcorn
	test

	redef fun client_test do
		system "curl -s {host}:{port}/"
	end

	fun test_example_template_string is test do
		var app = new App
		app.use("/", new MyTemplateStringHandler)
		run_test(app)
	end
end

class TestExampleTemplateFile
	super TestPopcorn
	test

	redef fun client_test do
		system "curl -s {host}:{port}/"
	end

	fun test_example_template_file is test do
		var app = new App
		var handler = new MyTemplateFileHandler
		handler.tpl_file = test_path / "../example_template.tpl"
		app.use("/", handler)
		run_test(app)
	end
end

class TestExampleTemplatePug
	super TestPopcorn
	test

	redef fun client_test do
		system "curl -s {host}:{port}/"
	end

	fun test_example_template_pug do # is test do # skip because dependendy on an external tool pug
		var app = new App
		app.use("/", new MyTemplatePugHandler)
		run_test(app)
	end
end

class TestExampleTemplatePugFile
	super TestPopcorn
	test

	redef fun client_test do
		system "curl -s {host}:{port}/"
	end

	fun test_example_template_pug_file do # is test do # skip because dependendy on an external tool pug
		var app = new App
		var handler = new MyTemplatePugFileHandler
		handler.pug_file = test_path / "../example_template.pug"
		app.use("/", handler)
		run_test(app)
	end
end
