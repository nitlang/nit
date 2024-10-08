# This file is part of NIT ( https://nitlanguage.org ).
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

module test_macro is test

import macro

class TestTemplateString
	test

	fun test_tpl_parse_1 is test do
		var tpl = """
<!DOCTYPE html>
<html lang="en">
  <head>
    <title>Dave's Profile</title>
  </head>
  <body>
    <h1>Dave</h1>
	<p>Profile</p>
  </body>
</html>"""
		var subject = new TemplateString(tpl)
		var res = subject.write_to_string
		assert res == tpl
	end

	fun test_tpl_parse_2 is test do
		var tpl = """
<!DOCTYPE html>
<html lang="en">
  <head>
    <title>%TITLE%</title>
  </head>
  <body>
    <h1>%TITLE%</h1>
	<p>%ARTICLE%</p>
  </body>
</html>"""
		var subject = new TemplateString(tpl)
		var res = subject.write_to_string
		assert res == tpl
	end

	fun test_tpl_parse_3 is test do
		var tpl = """
<!DOCTYPE html>
<html lang="en">
  <head>
    <title>%</title>
  </head>
</html>"""
		var subject = new TemplateString(tpl)
		var res = subject.write_to_string
		assert res == tpl
	end

	fun test_tpl_parse_4 is test do
		var tpl = """
<!DOCTYPE html>
<html lang="en">
  <head>
    <title>%</title>
  </head>
  <body>
    <h1>%</h1>
  </body>
</html>"""
		var subject = new TemplateString(tpl)
		var res = subject.write_to_string
		assert res == tpl
	end

	fun test_tpl_parse_5 is test do
		var tpl = """
<!DOCTYPE html>
<html lang="en">
  <head>
    <title>%</title>
  </head>
  <body>
    <h1>%TITLE%</h1>
	<p>%ARTICLE%</p>
  </body>
</html>"""
		var subject = new TemplateString(tpl)
		var res = subject.write_to_string
		assert res == tpl
	end

	fun test_tpl_parse_6 is test do
		var tpl = """
<!DOCTYPE html>
<html lang="en">
  <head>
    <title>%</title>
  </head>
  <body>
    <h1>%%</h1>
  </body>
</html>"""
		var subject = new TemplateString(tpl)
		var res = subject.write_to_string
		assert res == tpl
	end

	fun test_tpl_replace_1 is test do
		var tpl = """
<!DOCTYPE html>
<html lang="en">
  <head>
    <title>%TITLE%</title>
  </head>
  <body>
    <h1>%TITLE%</h1>
	<p>%ARTICLE%</p>
  </body>
</html>"""
		var exp = """
<!DOCTYPE html>
<html lang="en">
  <head>
    <title>Hello World!</title>
  </head>
  <body>
    <h1>Hello World!</h1>
	<p>%ARTICLE%</p>
  </body>
</html>"""
		var subject = new TemplateString(tpl)
		subject.replace("TITLE", "Hello World!")
		var res = subject.write_to_string
		assert res == exp
	end

	fun test_tpl_replace_2 is test do
		var tpl = """
<!DOCTYPE html>
<html lang="en">
  <head>
    <title>%TITLE%</title>
  </head>
  <body>
    <h1>%TITLE%</h1>
	<p>%BODY%</p>
  </body>
</html>"""
		var exp = """
<!DOCTYPE html>
<html lang="en">
  <head>
    <title>Hello World!</title>
  </head>
  <body>
    <h1>Hello World!</h1>
	<p>Some body you want to know...</p>
  </body>
</html>"""
		var subject = new TemplateString(tpl)
		subject.replace("TITLE", "Hello World!")
		subject.replace("BODY", "Some body you want to know...")
		var res = subject.write_to_string
		assert res == exp
	end

	fun test_tpl_replace_3 is test do
		var tpl = """
<!DOCTYPE html>
<html lang="en">
  <head>
    <title>%TITLE%</title>
  </head>
  <body>
    <h1>%TITLE%</h1>
	<p>%BODY%</p>
  </body>
</html>"""
		var exp = """
<!DOCTYPE html>
<html lang="en">
  <head>
    <title>Hello World!</title>
  </head>
  <body>
    <h1>Hello World!</h1>
	<p><a href="#">Click me!</a></p>
  </body>
</html>"""
		var link = new Template
		var subject = new TemplateString(tpl)
		subject.replace("TITLE", "Hello World!")
		subject.replace("BODY", link)
		link.add "<a href=\"#\">"
		link.add "Click me!"
		link.add "</a>"
		var res = subject.write_to_string
		assert res == exp
	end
end
