# This file is part of NIT ( http://www.nitlanguage.org ).
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

module test_commonmark_images is test

import test_markdown

class TestCommonmarkImages
	super TestMarkdownHtml
	test

	fun test546 is test do
		var md = """![foo](/url "title")\n"""
		var html = """<p><img src="/url" alt="foo" title="title" /></p>\n"""
		assert md_to_html(md) == html
	end

	fun test547 is test do
		var md = """![foo *bar*]\n\n[foo *bar*]: train.jpg "train & tracks"\n"""
		var html = """<p><img src="train.jpg" alt="foo bar" title="train &amp; tracks" /></p>\n"""
		assert md_to_html(md) == html
	end

	fun test548 is test do
		var md = """![foo ![bar](/url)](/url2)\n"""
		var html = """<p><img src="/url2" alt="foo bar" /></p>\n"""
		assert md_to_html(md) == html
	end

	fun test549 is test do
		var md = """![foo [bar](/url)](/url2)\n"""
		var html = """<p><img src="/url2" alt="foo bar" /></p>\n"""
		assert md_to_html(md) == html
	end

	fun test550 is test do
		var md = """![foo *bar*][]\n\n[foo *bar*]: train.jpg "train & tracks"\n"""
		var html = """<p><img src="train.jpg" alt="foo bar" title="train &amp; tracks" /></p>\n"""
		assert md_to_html(md) == html
	end

	fun test551 is test do
		var md = """![foo *bar*][foobar]\n\n[FOOBAR]: train.jpg "train & tracks"\n"""
		var html = """<p><img src="train.jpg" alt="foo bar" title="train &amp; tracks" /></p>\n"""
		assert md_to_html(md) == html
	end

	fun test552 is test do
		var md = """![foo](train.jpg)\n"""
		var html = """<p><img src="train.jpg" alt="foo" /></p>\n"""
		assert md_to_html(md) == html
	end

	fun test553 is test do
		var md = """My ![foo bar](/path/to/train.jpg  "title"   )\n"""
		var html = """<p>My <img src="/path/to/train.jpg" alt="foo bar" title="title" /></p>\n"""
		assert md_to_html(md) == html
	end

	fun test554 is test do
		var md = """![foo](<url>)\n"""
		var html = """<p><img src="url" alt="foo" /></p>\n"""
		assert md_to_html(md) == html
	end

	fun test555 is test do
		var md = """![](/url)\n"""
		var html = """<p><img src="/url" alt="" /></p>\n"""
		assert md_to_html(md) == html
	end

	fun test556 is test do
		var md = """![foo][bar]\n\n[bar]: /url\n"""
		var html = """<p><img src="/url" alt="foo" /></p>\n"""
		assert md_to_html(md) == html
	end

	fun test557 is test do
		var md = """![foo][bar]\n\n[BAR]: /url\n"""
		var html = """<p><img src="/url" alt="foo" /></p>\n"""
		assert md_to_html(md) == html
	end

	fun test558 is test do
		var md = """![foo][]\n\n[foo]: /url "title"\n"""
		var html = """<p><img src="/url" alt="foo" title="title" /></p>\n"""
		assert md_to_html(md) == html
	end

	fun test559 is test do
		var md = """![*foo* bar][]\n\n[*foo* bar]: /url "title"\n"""
		var html = """<p><img src="/url" alt="foo bar" title="title" /></p>\n"""
		assert md_to_html(md) == html
	end

	fun test560 is test do
		var md = """![Foo][]\n\n[foo]: /url "title"\n"""
		var html = """<p><img src="/url" alt="Foo" title="title" /></p>\n"""
		assert md_to_html(md) == html
	end

	fun test561 is test do
		var md = """![foo] \n[]\n\n[foo]: /url "title"\n"""
		var html = """<p><img src="/url" alt="foo" title="title" />\n[]</p>\n"""
		assert md_to_html(md) == html
	end

	fun test562 is test do
		var md = """![foo]\n\n[foo]: /url "title"\n"""
		var html = """<p><img src="/url" alt="foo" title="title" /></p>\n"""
		assert md_to_html(md) == html
	end

	fun test563 is test do
		var md = """![*foo* bar]\n\n[*foo* bar]: /url "title"\n"""
		var html = """<p><img src="/url" alt="foo bar" title="title" /></p>\n"""
		assert md_to_html(md) == html
	end

	fun test564 is test do
		var md = """![[foo]]\n\n[[foo]]: /url "title"\n"""
		var html = """<p>![[foo]]</p>\n<p>[[foo]]: /url &quot;title&quot;</p>\n"""
		assert md_to_html(md) == html
	end

	fun test565 is test do
		var md = """![Foo]\n\n[foo]: /url "title"\n"""
		var html = """<p><img src="/url" alt="Foo" title="title" /></p>\n"""
		assert md_to_html(md) == html
	end

	fun test566 is test do
		var md = """!\\[foo]\n\n[foo]: /url "title"\n"""
		var html = """<p>![foo]</p>\n"""
		assert md_to_html(md) == html
	end

	fun test567 is test do
		var md = """\\![foo]\n\n[foo]: /url "title"\n"""
		var html = """<p>!<a href="/url" title="title">foo</a></p>\n"""
		assert md_to_html(md) == html
	end
end
