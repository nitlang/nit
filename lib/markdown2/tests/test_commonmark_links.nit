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

module test_commonmark_links is test

import test_markdown

class TestCommonmarkLinks
	super TestMarkdownHtml
	test

	fun test462 is test do
		var md = """[link](/uri "title")\n"""
		var html = """<p><a href="/uri" title="title">link</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test463 is test do
		var md = """[link](/uri)\n"""
		var html = """<p><a href="/uri">link</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test464 is test do
		var md = """[link]()\n"""
		var html = """<p><a href="">link</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test465 is test do
		var md = """[link](<>)\n"""
		var html = """<p><a href="">link</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test466 is test do
		var md = """[link](/my uri)\n"""
		var html = """<p>[link](/my uri)</p>\n"""
		assert md_to_html(md) == html
	end

	fun test467 is test do
		var md = """[link](</my%20uri>)\n"""
		var html = """<p><a href="/my%20uri">link</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test468 is test do
		var md = """[link](foo\nbar)\n"""
		var html = """<p>[link](foo\nbar)</p>\n"""
		assert md_to_html(md) == html
	end

	fun test469 is test do
		var md = """[link](<foo\nbar>)\n"""
		var html = """<p>[link](<foo\nbar>)</p>\n"""
		assert md_to_html(md) == html
	end

	fun test470 is test do
		var md = """[link](\\(foo\\))\n"""
		var html = """<p><a href="(foo)">link</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test471 is test do
		var md = """[link](foo(and(bar)))\n"""
		var html = """<p><a href="foo(and(bar))">link</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test472 is test do
		var md = """[link](foo\\(and\\(bar\\))\n"""
		var html = """<p><a href="foo(and(bar)">link</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test473 is test do
		var md = """[link](<foo(and(bar)>)\n"""
		var html = """<p><a href="foo(and(bar)">link</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test474 is test do
		var md = """[link](foo\\)\\:)\n"""
		var html = """<p><a href="foo):">link</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test475 is test do
		var md = """[link](#fragment)\n\n[link](http://example.com#fragment)\n\n[link](http://example.com?foo=3#frag)\n"""
		var html = """<p><a href="#fragment">link</a></p>\n<p><a href="http://example.com#fragment">link</a></p>\n<p><a href="http://example.com?foo=3#frag">link</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test476 is test do
		var md = """[link](foo\\bar)\n"""
		var html = """<p><a href="foo%5Cbar">link</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test478 is test do
		var md = """[link]("title")\n"""
		var html = """<p><a href="%22title%22">link</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test479 is test do
		var md = """[link](/url "title")\n[link](/url 'title')\n[link](/url (title))\n"""
		var html = """<p><a href="/url" title="title">link</a>\n<a href="/url" title="title">link</a>\n<a href="/url" title="title">link</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test480 is test do
		var md = """[link](/url "title \\"&quot;")\n"""
		var html = """<p><a href="/url" title="title &quot;&quot;">link</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test481 is test do
		var md = """[link](/url "title")\n"""
		var html = """<p><a href="/url%C2%A0%22title%22">link</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test482 is test do
		var md = """[link](/url "title "and" title")\n"""
		var html = """<p>[link](/url &quot;title &quot;and&quot; title&quot;)</p>\n"""
		assert md_to_html(md) == html
	end

	fun test483 is test do
		var md = """[link](/url 'title "and" title')\n"""
		var html = """<p><a href="/url" title="title &quot;and&quot; title">link</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test484 is test do
		var md = """[link](   /uri\n  "title"  )\n"""
		var html = """<p><a href="/uri" title="title">link</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test485 is test do
		var md = """[link] (/uri)\n"""
		var html = """<p>[link] (/uri)</p>\n"""
		assert md_to_html(md) == html
	end

	fun test486 is test do
		var md = """[link [foo [bar]]](/uri)\n"""
		var html = """<p><a href="/uri">link [foo [bar]]</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test487 is test do
		var md = """[link] bar](/uri)\n"""
		var html = """<p>[link] bar](/uri)</p>\n"""
		assert md_to_html(md) == html
	end

	fun test488 is test do
		var md = """[link [bar](/uri)\n"""
		var html = """<p>[link <a href="/uri">bar</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test489 is test do
		var md = """[link \\[bar](/uri)\n"""
		var html = """<p><a href="/uri">link [bar</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test490 is test do
		var md = """[link *foo **bar** `#`*](/uri)\n"""
		var html = """<p><a href="/uri">link <em>foo <strong>bar</strong> <code>#</code></em></a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test491 is test do
		var md = """[![moon](moon.jpg)](/uri)\n"""
		var html = """<p><a href="/uri"><img src="moon.jpg" alt="moon" /></a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test492 is test do
		var md = """[foo [bar](/uri)](/uri)\n"""
		var html = """<p>[foo <a href="/uri">bar</a>](/uri)</p>\n"""
		assert md_to_html(md) == html
	end

	fun test493 is test do
		var md = """[foo *[bar [baz](/uri)](/uri)*](/uri)\n"""
		var html = """<p>[foo <em>[bar <a href="/uri">baz</a>](/uri)</em>](/uri)</p>\n"""
		assert md_to_html(md) == html
	end

	fun test494 is test do
		var md = """![[[foo](uri1)](uri2)](uri3)\n"""
		var html = """<p><img src="uri3" alt="[foo](uri2)" /></p>\n"""
		assert md_to_html(md) == html
	end

	fun test495 is test do
		var md = """*[foo*](/uri)\n"""
		var html = """<p>*<a href="/uri">foo*</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test496 is test do
		var md = """[foo *bar](baz*)\n"""
		var html = """<p><a href="baz*">foo *bar</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test497 is test do
		var md = """*foo [bar* baz]\n"""
		var html = """<p><em>foo [bar</em> baz]</p>\n"""
		assert md_to_html(md) == html
	end

	fun test498 is test do
		var md = """[foo <bar attr="](baz)">\n"""
		var html = """<p>[foo <bar attr="](baz)"></p>\n"""
		assert md_to_html(md) == html
	end

	fun test499 is test do
		var md = """[foo`](/uri)`\n"""
		var html = """<p>[foo<code>](/uri)</code></p>\n"""
		assert md_to_html(md) == html
	end

	fun test500 is test do
		var md = """[foo<http://example.com/?search=](uri)>\n"""
		var html = """<p>[foo<a href="http://example.com/?search=%5D(uri)">http://example.com/?search=](uri)</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test501 is test do
		var md = """[foo][bar]\n\n[bar]: /url "title"\n"""
		var html = """<p><a href="/url" title="title">foo</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test502 is test do
		var md = """[link [foo [bar]]][ref]\n\n[ref]: /uri\n"""
		var html = """<p><a href="/uri">link [foo [bar]]</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test503 is test do
		var md = """[link \\[bar][ref]\n\n[ref]: /uri\n"""
		var html = """<p><a href="/uri">link [bar</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test504 is test do
		var md = """[link *foo **bar** `#`*][ref]\n\n[ref]: /uri\n"""
		var html = """<p><a href="/uri">link <em>foo <strong>bar</strong> <code>#</code></em></a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test505 is test do
		var md = """[![moon](moon.jpg)][ref]\n\n[ref]: /uri\n"""
		var html = """<p><a href="/uri"><img src="moon.jpg" alt="moon" /></a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test506 is test do
		var md = """[foo [bar](/uri)][ref]\n\n[ref]: /uri\n"""
		var html = """<p>[foo <a href="/uri">bar</a>]<a href="/uri">ref</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test507 is test do
		var md = """[foo *bar [baz][ref]*][ref]\n\n[ref]: /uri\n"""
		var html = """<p>[foo <em>bar <a href="/uri">baz</a></em>]<a href="/uri">ref</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test508 is test do
		var md = """*[foo*][ref]\n\n[ref]: /uri\n"""
		var html = """<p>*<a href="/uri">foo*</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test509 is test do
		var md = """[foo *bar][ref]\n\n[ref]: /uri\n"""
		var html = """<p><a href="/uri">foo *bar</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test510 is test do
		var md = """[foo <bar attr="][ref]">\n\n[ref]: /uri\n"""
		var html = """<p>[foo <bar attr="][ref]"></p>\n"""
		assert md_to_html(md) == html
	end

	fun test511 is test do
		var md = """[foo`][ref]`\n\n[ref]: /uri\n"""
		var html = """<p>[foo<code>][ref]</code></p>\n"""
		assert md_to_html(md) == html
	end

	fun test512 is test do
		var md = """[foo<http://example.com/?search=][ref]>\n\n[ref]: /uri\n"""
		var html = """<p>[foo<a href="http://example.com/?search=%5D%5Bref%5D">http://example.com/?search=][ref]</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test513 is test do
		var md = """[foo][BaR]\n\n[bar]: /url "title"\n"""
		var html = """<p><a href="/url" title="title">foo</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test515 is test do
		var md = """[Foo\n  bar]: /url\n\n[Baz][Foo bar]\n"""
		var html = """<p><a href="/url">Baz</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test516 is test do
		var md = """[foo] [bar]\n\n[bar]: /url "title"\n"""
		var html = """<p>[foo] <a href="/url" title="title">bar</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test517 is test do
		var md = """[foo]\n[bar]\n\n[bar]: /url "title"\n"""
		var html = """<p>[foo]\n<a href="/url" title="title">bar</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test518 is test do
		var md = """[foo]: /url1\n\n[foo]: /url2\n\n[bar][foo]\n"""
		var html = """<p><a href="/url1">bar</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test519 is test do
		var md = """[bar][foo\\!]\n\n[foo!]: /url\n"""
		var html = """<p>[bar][foo!]</p>\n"""
		assert md_to_html(md) == html
	end

	fun test520 is test do
		var md = """[foo][ref[]\n\n[ref[]: /uri\n"""
		var html = """<p>[foo][ref[]</p>\n<p>[ref[]: /uri</p>\n"""
		assert md_to_html(md) == html
	end

	fun test521 is test do
		var md = """[foo][ref[bar]]\n\n[ref[bar]]: /uri\n"""
		var html = """<p>[foo][ref[bar]]</p>\n<p>[ref[bar]]: /uri</p>\n"""
		assert md_to_html(md) == html
	end

	fun test522 is test do
		var md = """[[[foo]]]\n\n[[[foo]]]: /url\n"""
		var html = """<p>[[[foo]]]</p>\n<p>[[[foo]]]: /url</p>\n"""
		assert md_to_html(md) == html
	end

	fun test523 is test do
		var md = """[foo][ref\\[]\n\n[ref\\[]: /uri\n"""
		var html = """<p><a href="/uri">foo</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test524 is test do
		var md = """[bar\\\\]: /uri\n\n[bar\\\\]\n"""
		var html = """<p><a href="/uri">bar\\</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test525 is test do
		var md = """[]\n\n[]: /uri\n"""
		var html = """<p>[]</p>\n<p>[]: /uri</p>\n"""
		assert md_to_html(md) == html
	end

	fun test526 is test do
		var md = """[\n ]\n\n[\n ]: /uri\n"""
		var html = """<p>[\n]</p>\n<p>[\n]: /uri</p>\n"""
		assert md_to_html(md) == html
	end

	fun test527 is test do
		var md = """[foo][]\n\n[foo]: /url "title"\n"""
		var html = """<p><a href="/url" title="title">foo</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test528 is test do
		var md = """[*foo* bar][]\n\n[*foo* bar]: /url "title"\n"""
		var html = """<p><a href="/url" title="title"><em>foo</em> bar</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test529 is test do
		var md = """[Foo][]\n\n[foo]: /url "title"\n"""
		var html = """<p><a href="/url" title="title">Foo</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test530 is test do
		var md = """[foo] \n[]\n\n[foo]: /url "title"\n"""
		var html = """<p><a href="/url" title="title">foo</a>\n[]</p>\n"""
		assert md_to_html(md) == html
	end

	fun test531 is test do
		var md = """[foo]\n\n[foo]: /url "title"\n"""
		var html = """<p><a href="/url" title="title">foo</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test532 is test do
		var md = """[*foo* bar]\n\n[*foo* bar]: /url "title"\n"""
		var html = """<p><a href="/url" title="title"><em>foo</em> bar</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test533 is test do
		var md = """[[*foo* bar]]\n\n[*foo* bar]: /url "title"\n"""
		var html = """<p>[<a href="/url" title="title"><em>foo</em> bar</a>]</p>\n"""
		assert md_to_html(md) == html
	end

	fun test534 is test do
		var md = """[[bar [foo]\n\n[foo]: /url\n"""
		var html = """<p>[[bar <a href="/url">foo</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test535 is test do
		var md = """[Foo]\n\n[foo]: /url "title"\n"""
		var html = """<p><a href="/url" title="title">Foo</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test536 is test do
		var md = """[foo] bar\n\n[foo]: /url\n"""
		var html = """<p><a href="/url">foo</a> bar</p>\n"""
		assert md_to_html(md) == html
	end

	fun test537 is test do
		var md = """\\[foo]\n\n[foo]: /url "title"\n"""
		var html = """<p>[foo]</p>\n"""
		assert md_to_html(md) == html
	end

	fun test538 is test do
		var md = """[foo*]: /url\n\n*[foo*]\n"""
		var html = """<p>*<a href="/url">foo*</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test539 is test do
		var md = """[foo][bar]\n\n[foo]: /url1\n[bar]: /url2\n"""
		var html = """<p><a href="/url2">foo</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test540 is test do
		var md = """[foo][]\n\n[foo]: /url1\n"""
		var html = """<p><a href="/url1">foo</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test541 is test do
		var md = """[foo]()\n\n[foo]: /url1\n"""
		var html = """<p><a href="">foo</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test542 is test do
		var md = """[foo](not a link)\n\n[foo]: /url1\n"""
		var html = """<p><a href="/url1">foo</a>(not a link)</p>\n"""
		assert md_to_html(md) == html
	end

	fun test543 is test do
		var md = """[foo][bar][baz]\n\n[baz]: /url\n"""
		var html = """<p>[foo]<a href="/url">bar</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test544 is test do
		var md = """[foo][bar][baz]\n\n[baz]: /url1\n[bar]: /url2\n"""
		var html = """<p><a href="/url2">foo</a><a href="/url1">baz</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test545 is test do
		var md = """[foo][bar][baz]\n\n[baz]: /url1\n[foo]: /url2\n"""
		var html = """<p>[foo]<a href="/url1">bar</a></p>\n"""
		assert md_to_html(md) == html
	end
end
