# Bench Markdown

Benches markdown parsers.

## Usage

    ./bench_markdown.sh all

## Engines

* nitmd
* txtmark 0.11 (https://github.com/rjeschke/txtmark)
* markdown4j 2.2 (https://code.google.com/p/markdown4j/)

## Benches

Benches are inspired from the [Henkelmann's Actuarius benches](http://henkelmann.eu/2011/01/10/performance_comparison_of_markdown_processor_for_the_jvm).

Benches are variations of the same text generate from `benches/plain.md`
This text is De finibus bonorum et malorum which is said to be the basis for
the commonly used Lorem Ipsum test text.

The generator rudely chops it up in a configurable number of paragraphs,
lines per paragraph and approximate chars per line.
Depending on the variation, it “decorates” parts of the text with Markdown syntax.
All tests consist of 30 Paragraphs with 20 lines each and approx. 80 chars per line (before “decoration”).

Here are the descriptions of the variations:

* Plain Paragraphs: No modifications, just the plain text.

* Emphasis: Every word emphasized,

  so the input `foo` is decorated as `*foo*` which should render as `<em>foo</em>`

* Strong: Every word emphasized,

  `foo` → `**foo**` → `<strong>foo</strong>`

* Inline Code: Every word marked as inline code:

  `foo` → ````foo```` → `<code>foo</code>`

* Fast Links: Every word a link without title or wrapped text:

  `foo` → `<foo>` → `<a href="foo">foo</a>`

* Special XML Chars: Every word is replaced by chars that need to be escaped in XML:

  `foo` → `"><&` → `&quot;&gt;&lt;'&amp;`

* Inline HTML: Every word is wrapped in verbatim HTML:

  `foo` → `<blink>foo</blink>` → `<blink>foo</blink>`

* Manual Line Breaks: Every line gets appended with `\n`:

  `some line` → `some line\n` → `some line<br/>\n`

* Full Links: Every word is turned into a link with wrapped text, url and title:

  `foo` → `[foo](http://example.com/foo "foo Title")` → `<a href="http://example.com/foo" title="foo Title">foo</a>`

* Full Images: Like full links, every word turned into an image reference

* Reference Links: Every word is turned into a link reference with an increasing id counter.
  The link reference definition is added after the paragraph the link occurs in:

  `foo` → `[foo][id123]` → `<a href="http://example.com/foo" title="foo Title">foo</a>`

* Block Quotes: Every paragraph is turned into a block quote by prepending a `>` to each line.

* Code Blocks: Every paragraph is turned into a code block by prepending four spaces to each line.

* Unordered Lists: Every paragraph is turned into a list with an item for each line by prepending `*` to each line.

* Mixed Test: A mix of all of the above: Some paragraphs lists, some code, some word emphasized etc.

Variation details can be found in `benches/gen_bench.nit`.
