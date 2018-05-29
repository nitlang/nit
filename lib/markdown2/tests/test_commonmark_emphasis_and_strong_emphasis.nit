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

module test_commonmark_emphasis_and_strong_emphasis is test

import test_markdown

class TestCommonmarkEmphasisAndStrongEmphasis
	super TestMarkdownHtml
	test

	fun test333 is test do
		var md = """*foo bar*\n"""
		var html = """<p><em>foo bar</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test334 is test do
		var md = """a * foo bar*\n"""
		var html = """<p>a * foo bar*</p>\n"""
		assert md_to_html(md) == html
	end

	fun test335 is test do
		var md = """a*"foo"*\n"""
		var html = """<p>a*&quot;foo&quot;*</p>\n"""
		assert md_to_html(md) == html
	end

	fun test336 is test do
		var md = """* a *\n"""
		var html = """<p>* a *</p>\n"""
		assert md_to_html(md) == html
	end

	fun test337 is test do
		var md = """foo*bar*\n"""
		var html = """<p>foo<em>bar</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test338 is test do
		var md = """5*6*78\n"""
		var html = """<p>5<em>6</em>78</p>\n"""
		assert md_to_html(md) == html
	end

	fun test339 is test do
		var md = """_foo bar_\n"""
		var html = """<p><em>foo bar</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test340 is test do
		var md = """_ foo bar_\n"""
		var html = """<p>_ foo bar_</p>\n"""
		assert md_to_html(md) == html
	end

	fun test341 is test do
		var md = """a_"foo"_\n"""
		var html = """<p>a_&quot;foo&quot;_</p>\n"""
		assert md_to_html(md) == html
	end

	fun test342 is test do
		var md = """foo_bar_\n"""
		var html = """<p>foo_bar_</p>\n"""
		assert md_to_html(md) == html
	end

	fun test343 is test do
		var md = """5_6_78\n"""
		var html = """<p>5_6_78</p>\n"""
		assert md_to_html(md) == html
	end

	fun test344 is test do
		var md = """пристаням_стремятся_\n"""
		var html = """<p>пристаням_стремятся_</p>\n"""
		assert md_to_html(md) == html
	end

	fun test345 is test do
		var md = """aa_"bb"_cc\n"""
		var html = """<p>aa_&quot;bb&quot;_cc</p>\n"""
		assert md_to_html(md) == html
	end

	fun test346 is test do
		var md = """foo-_(bar)_\n"""
		var html = """<p>foo-<em>(bar)</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test347 is test do
		var md = """_foo*\n"""
		var html = """<p>_foo*</p>\n"""
		assert md_to_html(md) == html
	end

	fun test348 is test do
		var md = """*foo bar *\n"""
		var html = """<p>*foo bar *</p>\n"""
		assert md_to_html(md) == html
	end

	fun test349 is test do
		var md = """*foo bar\n*\n"""
		var html = """<p>*foo bar\n*</p>\n"""
		assert md_to_html(md) == html
	end

	fun test350 is test do
		var md = """*(*foo)\n"""
		var html = """<p>*(*foo)</p>\n"""
		assert md_to_html(md) == html
	end

	fun test351 is test do
		var md = """*(*foo*)*\n"""
		var html = """<p><em>(<em>foo</em>)</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test352 is test do
		var md = """*foo*bar\n"""
		var html = """<p><em>foo</em>bar</p>\n"""
		assert md_to_html(md) == html
	end

	fun test353 is test do
		var md = """_foo bar _\n"""
		var html = """<p>_foo bar _</p>\n"""
		assert md_to_html(md) == html
	end

	fun test354 is test do
		var md = """_(_foo)\n"""
		var html = """<p>_(_foo)</p>\n"""
		assert md_to_html(md) == html
	end

	fun test355 is test do
		var md = """_(_foo_)_\n"""
		var html = """<p><em>(<em>foo</em>)</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test356 is test do
		var md = """_foo_bar\n"""
		var html = """<p>_foo_bar</p>\n"""
		assert md_to_html(md) == html
	end

	fun test357 is test do
		var md = """_пристаням_стремятся\n"""
		var html = """<p>_пристаням_стремятся</p>\n"""
		assert md_to_html(md) == html
	end

	fun test358 is test do
		var md = """_foo_bar_baz_\n"""
		var html = """<p><em>foo_bar_baz</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test359 is test do
		var md = """_(bar)_.\n"""
		var html = """<p><em>(bar)</em>.</p>\n"""
		assert md_to_html(md) == html
	end

	fun test360 is test do
		var md = """**foo bar**\n"""
		var html = """<p><strong>foo bar</strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test361 is test do
		var md = """** foo bar**\n"""
		var html = """<p>** foo bar**</p>\n"""
		assert md_to_html(md) == html
	end

	fun test362 is test do
		var md = """a**"foo"**\n"""
		var html = """<p>a**&quot;foo&quot;**</p>\n"""
		assert md_to_html(md) == html
	end

	fun test363 is test do
		var md = """foo**bar**\n"""
		var html = """<p>foo<strong>bar</strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test364 is test do
		var md = """__foo bar__\n"""
		var html = """<p><strong>foo bar</strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test365 is test do
		var md = """__ foo bar__\n"""
		var html = """<p>__ foo bar__</p>\n"""
		assert md_to_html(md) == html
	end

	fun test366 is test do
		var md = """__\nfoo bar__\n"""
		var html = """<p>__\nfoo bar__</p>\n"""
		assert md_to_html(md) == html
	end

	fun test367 is test do
		var md = """a__"foo"__\n"""
		var html = """<p>a__&quot;foo&quot;__</p>\n"""
		assert md_to_html(md) == html
	end

	fun test368 is test do
		var md = """foo__bar__\n"""
		var html = """<p>foo__bar__</p>\n"""
		assert md_to_html(md) == html
	end

	fun test369 is test do
		var md = """5__6__78\n"""
		var html = """<p>5__6__78</p>\n"""
		assert md_to_html(md) == html
	end

	fun test370 is test do
		var md = """пристаням__стремятся__\n"""
		var html = """<p>пристаням__стремятся__</p>\n"""
		assert md_to_html(md) == html
	end

	fun test371 is test do
		var md = """__foo, __bar__, baz__\n"""
		var html = """<p><strong>foo, <strong>bar</strong>, baz</strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test372 is test do
		var md = """foo-__(bar)__\n"""
		var html = """<p>foo-<strong>(bar)</strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test373 is test do
		var md = """**foo bar **\n"""
		var html = """<p>**foo bar **</p>\n"""
		assert md_to_html(md) == html
	end

	fun test374 is test do
		var md = """**(**foo)\n"""
		var html = """<p>**(**foo)</p>\n"""
		assert md_to_html(md) == html
	end

	fun test375 is test do
		var md = """*(**foo**)*\n"""
		var html = """<p><em>(<strong>foo</strong>)</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test376 is test do
		var md = """**Gomphocarpus (*Gomphocarpus physocarpus*, syn.\n*Asclepias physocarpa*)**\n"""
		var html = """<p><strong>Gomphocarpus (<em>Gomphocarpus physocarpus</em>, syn.\n<em>Asclepias physocarpa</em>)</strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test377 is test do
		var md = """**foo "*bar*" foo**\n"""
		var html = """<p><strong>foo &quot;<em>bar</em>&quot; foo</strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test378 is test do
		var md = """**foo**bar\n"""
		var html = """<p><strong>foo</strong>bar</p>\n"""
		assert md_to_html(md) == html
	end

	fun test379 is test do
		var md = """__foo bar __\n"""
		var html = """<p>__foo bar __</p>\n"""
		assert md_to_html(md) == html
	end

	fun test380 is test do
		var md = """__(__foo)\n"""
		var html = """<p>__(__foo)</p>\n"""
		assert md_to_html(md) == html
	end

	fun test381 is test do
		var md = """_(__foo__)_\n"""
		var html = """<p><em>(<strong>foo</strong>)</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test382 is test do
		var md = """__foo__bar\n"""
		var html = """<p>__foo__bar</p>\n"""
		assert md_to_html(md) == html
	end

	fun test383 is test do
		var md = """__пристаням__стремятся\n"""
		var html = """<p>__пристаням__стремятся</p>\n"""
		assert md_to_html(md) == html
	end

	fun test384 is test do
		var md = """__foo__bar__baz__\n"""
		var html = """<p><strong>foo__bar__baz</strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test385 is test do
		var md = """__(bar)__.\n"""
		var html = """<p><strong>(bar)</strong>.</p>\n"""
		assert md_to_html(md) == html
	end

	fun test386 is test do
		var md = """*foo [bar](/url)*\n"""
		var html = """<p><em>foo <a href="/url">bar</a></em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test387 is test do
		var md = """*foo\nbar*\n"""
		var html = """<p><em>foo\nbar</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test388 is test do
		var md = """_foo __bar__ baz_\n"""
		var html = """<p><em>foo <strong>bar</strong> baz</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test389 is test do
		var md = """_foo _bar_ baz_\n"""
		var html = """<p><em>foo <em>bar</em> baz</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test390 is test do
		var md = """__foo_ bar_\n"""
		var html = """<p><em><em>foo</em> bar</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test391 is test do
		var md = """*foo *bar**\n"""
		var html = """<p><em>foo <em>bar</em></em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test392 is test do
		var md = """*foo **bar** baz*\n"""
		var html = """<p><em>foo <strong>bar</strong> baz</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test393 is test do
		var md = """*foo**bar**baz*\n"""
		var html = """<p><em>foo<strong>bar</strong>baz</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test394 is test do
		var md = """*foo**bar*\n"""
		var html = """<p><em>foo**bar</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test395 is test do
		var md = """***foo** bar*\n"""
		var html = """<p><em><strong>foo</strong> bar</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test396 is test do
		var md = """*foo **bar***\n"""
		var html = """<p><em>foo <strong>bar</strong></em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test397 is test do
		var md = """*foo**bar***\n"""
		var html = """<p><em>foo<strong>bar</strong></em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test398 is test do
		var md = """*foo **bar *baz* bim** bop*\n"""
		var html = """<p><em>foo <strong>bar <em>baz</em> bim</strong> bop</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test399 is test do
		var md = """*foo [*bar*](/url)*\n"""
		var html = """<p><em>foo <a href="/url"><em>bar</em></a></em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test400 is test do
		var md = """** is not an empty emphasis\n"""
		var html = """<p>** is not an empty emphasis</p>\n"""
		assert md_to_html(md) == html
	end

	fun test401 is test do
		var md = """**** is not an empty strong emphasis\n"""
		var html = """<p>**** is not an empty strong emphasis</p>\n"""
		assert md_to_html(md) == html
	end

	fun test402 is test do
		var md = """**foo [bar](/url)**\n"""
		var html = """<p><strong>foo <a href="/url">bar</a></strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test403 is test do
		var md = """**foo\nbar**\n"""
		var html = """<p><strong>foo\nbar</strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test404 is test do
		var md = """__foo _bar_ baz__\n"""
		var html = """<p><strong>foo <em>bar</em> baz</strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test405 is test do
		var md = """__foo __bar__ baz__\n"""
		var html = """<p><strong>foo <strong>bar</strong> baz</strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test406 is test do
		var md = """____foo__ bar__\n"""
		var html = """<p><strong><strong>foo</strong> bar</strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test407 is test do
		var md = """**foo **bar****\n"""
		var html = """<p><strong>foo <strong>bar</strong></strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test408 is test do
		var md = """**foo *bar* baz**\n"""
		var html = """<p><strong>foo <em>bar</em> baz</strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test409 is test do
		var md = """**foo*bar*baz**\n"""
		var html = """<p><strong>foo<em>bar</em>baz</strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test410 is test do
		var md = """***foo* bar**\n"""
		var html = """<p><strong><em>foo</em> bar</strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test411 is test do
		var md = """**foo *bar***\n"""
		var html = """<p><strong>foo <em>bar</em></strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test412 is test do
		var md = """**foo *bar **baz**\nbim* bop**\n"""
		var html = """<p><strong>foo <em>bar <strong>baz</strong>\nbim</em> bop</strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test413 is test do
		var md = """**foo [*bar*](/url)**\n"""
		var html = """<p><strong>foo <a href="/url"><em>bar</em></a></strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test414 is test do
		var md = """__ is not an empty emphasis\n"""
		var html = """<p>__ is not an empty emphasis</p>\n"""
		assert md_to_html(md) == html
	end

	fun test415 is test do
		var md = """____ is not an empty strong emphasis\n"""
		var html = """<p>____ is not an empty strong emphasis</p>\n"""
		assert md_to_html(md) == html
	end

	fun test416 is test do
		var md = """foo ***\n"""
		var html = """<p>foo ***</p>\n"""
		assert md_to_html(md) == html
	end

	fun test417 is test do
		var md = """foo *\\**\n"""
		var html = """<p>foo <em>*</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test418 is test do
		var md = """foo *_*\n"""
		var html = """<p>foo <em>_</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test419 is test do
		var md = """foo *****\n"""
		var html = """<p>foo *****</p>\n"""
		assert md_to_html(md) == html
	end

	fun test420 is test do
		var md = """foo **\\***\n"""
		var html = """<p>foo <strong>*</strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test421 is test do
		var md = """foo **_**\n"""
		var html = """<p>foo <strong>_</strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test422 is test do
		var md = """**foo*\n"""
		var html = """<p>*<em>foo</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test423 is test do
		var md = """*foo**\n"""
		var html = """<p><em>foo</em>*</p>\n"""
		assert md_to_html(md) == html
	end

	fun test424 is test do
		var md = """***foo**\n"""
		var html = """<p>*<strong>foo</strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test425 is test do
		var md = """****foo*\n"""
		var html = """<p>***<em>foo</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test426 is test do
		var md = """**foo***\n"""
		var html = """<p><strong>foo</strong>*</p>\n"""
		assert md_to_html(md) == html
	end

	fun test427 is test do
		var md = """*foo****\n"""
		var html = """<p><em>foo</em>***</p>\n"""
		assert md_to_html(md) == html
	end

	fun test428 is test do
		var md = """foo ___\n"""
		var html = """<p>foo ___</p>\n"""
		assert md_to_html(md) == html
	end

	fun test429 is test do
		var md = """foo _\\__\n"""
		var html = """<p>foo <em>_</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test430 is test do
		var md = """foo _*_\n"""
		var html = """<p>foo <em>*</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test431 is test do
		var md = """foo _____\n"""
		var html = """<p>foo _____</p>\n"""
		assert md_to_html(md) == html
	end

	fun test432 is test do
		var md = """foo __\\___\n"""
		var html = """<p>foo <strong>_</strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test433 is test do
		var md = """foo __*__\n"""
		var html = """<p>foo <strong>*</strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test434 is test do
		var md = """__foo_\n"""
		var html = """<p>_<em>foo</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test435 is test do
		var md = """_foo__\n"""
		var html = """<p><em>foo</em>_</p>\n"""
		assert md_to_html(md) == html
	end

	fun test436 is test do
		var md = """___foo__\n"""
		var html = """<p>_<strong>foo</strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test437 is test do
		var md = """____foo_\n"""
		var html = """<p>___<em>foo</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test438 is test do
		var md = """__foo___\n"""
		var html = """<p><strong>foo</strong>_</p>\n"""
		assert md_to_html(md) == html
	end

	fun test439 is test do
		var md = """_foo____\n"""
		var html = """<p><em>foo</em>___</p>\n"""
		assert md_to_html(md) == html
	end

	fun test440 is test do
		var md = """**foo**\n"""
		var html = """<p><strong>foo</strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test441 is test do
		var md = """*_foo_*\n"""
		var html = """<p><em><em>foo</em></em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test442 is test do
		var md = """__foo__\n"""
		var html = """<p><strong>foo</strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test443 is test do
		var md = """_*foo*_\n"""
		var html = """<p><em><em>foo</em></em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test444 is test do
		var md = """****foo****\n"""
		var html = """<p><strong><strong>foo</strong></strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test445 is test do
		var md = """____foo____\n"""
		var html = """<p><strong><strong>foo</strong></strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test446 is test do
		var md = """******foo******\n"""
		var html = """<p><strong><strong><strong>foo</strong></strong></strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test447 is test do
		var md = """***foo***\n"""
		var html = """<p><em><strong>foo</strong></em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test448 is test do
		var md = """_____foo_____\n"""
		var html = """<p><em><strong><strong>foo</strong></strong></em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test449 is test do
		var md = """*foo _bar* baz_\n"""
		var html = """<p><em>foo _bar</em> baz_</p>\n"""
		assert md_to_html(md) == html
	end

	fun test450 is test do
		var md = """*foo __bar *baz bim__ bam*\n"""
		var html = """<p><em>foo <strong>bar *baz bim</strong> bam</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test451 is test do
		var md = """**foo **bar baz**\n"""
		var html = """<p>**foo <strong>bar baz</strong></p>\n"""
		assert md_to_html(md) == html
	end

	fun test452 is test do
		var md = """*foo *bar baz*\n"""
		var html = """<p>*foo <em>bar baz</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test453 is test do
		var md = """*[bar*](/url)\n"""
		var html = """<p>*<a href="/url">bar*</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test454 is test do
		var md = """_foo [bar_](/url)\n"""
		var html = """<p>_foo <a href="/url">bar_</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test455 is test do
		var md = """*<img src="foo" title="*"/>\n"""
		var html = """<p>*<img src="foo" title="*"/></p>\n"""
		assert md_to_html(md) == html
	end

	fun test456 is test do
		var md = """**<a href="**">\n"""
		var html = """<p>**<a href="**"></p>\n"""
		assert md_to_html(md) == html
	end

	fun test457 is test do
		var md = """__<a href="__">\n"""
		var html = """<p>__<a href="__"></p>\n"""
		assert md_to_html(md) == html
	end

	fun test458 is test do
		var md = """*a `*`*\n"""
		var html = """<p><em>a <code>*</code></em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test459 is test do
		var md = """_a `_`_\n"""
		var html = """<p><em>a <code>_</code></em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test460 is test do
		var md = """**a<http://foo.bar/?q=**>\n"""
		var html = """<p>**a<a href="http://foo.bar/?q=**">http://foo.bar/?q=**</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test461 is test do
		var md = """__a<http://foo.bar/?q=__>\n"""
		var html = """<p>__a<a href="http://foo.bar/?q=__">http://foo.bar/?q=__</a></p>\n"""
		assert md_to_html(md) == html
	end
end
