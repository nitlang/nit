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

# Generate bench suites for markdown parsers.
module gen_benches

import opts

# Decorate a markdown plain text for bench puposes.
#
# *This is not the markdown you are looking for.*
interface MarkdownDecorator

	# Parse the text and decorate it.
	# Behavior depends on `LineDecorator` and `WordDecorator`.
	fun decorate_text(txt: Text): Text is abstract

	# Is `c` a something else than a letter a digit or a `-`?
	fun is_word_break(c: Char): Bool do
		return not (c.is_letter or c.is_digit or c == '-')
	end

	# Parses the next word from `pos` and return the ending position.
	# Returns `-1` if next word is a word break symbol or there is no more text.
	private fun parse_word(txt: Text, pos: Int, res: FlatBuffer): Int do
		while pos >= 0 and pos < txt.length do
			var c = txt[pos]
			if is_word_break(c) then break
			res.add c
			pos += 1
		end
		return pos
	end
end

# Break text in lines of ~80 chars and call `decorate_line` for each.
abstract class LineDecorator
	super MarkdownDecorator

	redef fun decorate_text(txt) do return decorate_lines(txt)

	private fun decorate_lines(txt: Text): Text do
		var pos = 0
		var res = new FlatBuffer
		var line = new FlatBuffer
		var word = new FlatBuffer
		while pos < txt.length do
			var c = txt[pos]
			if is_word_break(c) then
				pos += 1
				line.add c
				if c == '\n' then
					res.append decorate_line(line)
					line.clear
				end
			else
				pos = parse_word(txt, pos, word)
				if line.length + word.length > 80 then
					res.append decorate_line(line)
					line.clear
				end
				line.append word
				word.clear
			end
		end
		return res
	end

	# Returns the decorated version of `line`.
	fun decorate_line(line: Text): Text is abstract
end

# Add a `\n` after each line.
class ManualBreakDecorator
	super LineDecorator

	redef fun decorate_line(line) do return "{line}\n"
end

# Add a `> ` before each line.
class BlockQuoteDecorator
	super ManualBreakDecorator

	redef fun decorate_line(line) do return super("> {line}")
end

# Add four spaces before each line.
class CodeBlockDecorator
	super ManualBreakDecorator

	redef fun decorate_line(line) do return super("    {line}")
end

# Add "* " before each line.
class UnorderedListDecorator
	super ManualBreakDecorator

	redef fun decorate_line(line) do return super("* {line}")
end


# WordDecorator is used to decorate each word of a text.
abstract class WordDecorator
	super MarkdownDecorator

	redef fun decorate_text(txt): Text do return decorate_words(txt)

	private fun decorate_words(txt: Text): Text do
		var pos = 0
		var res = new FlatBuffer
		var tmp = new FlatBuffer
		while pos < txt.length do
			var c = txt[pos]
			if is_word_break(c) then
				pos += 1
				res.add c
			else
				pos = parse_word(txt, pos, tmp)
				res.append decorate_word(tmp)
				tmp.clear
			end
		end
		return res
	end

	# Returns the decorated version of `word`.
	fun decorate_word(word: Text): Text is abstract
end

# Returns the word as this.
class PlainDecorator
	super WordDecorator

	redef fun decorate_word(word) do return word
end

# Wraps the word with `*empthasis*`.
class EmphasisDecorator
	super WordDecorator

	redef fun decorate_word(w) do return "*{w}*"
end

# Wraps the word with `**strong**`.
class StrongDecorator
	super WordDecorator

	redef fun decorate_word(w) do return "**{w}**"
end

# Wraps the word with ````inline code````.
class InlineCodeDecorator
	super WordDecorator

	redef fun decorate_word(w) do return "`{w}`"
end

# Wraps the word with `<fastlink>`.
class FastLinkDecorator
	super WordDecorator

	redef fun decorate_word(w) do return "<{w}>"
end

# Replaces the word letters by random special XML chars.
class SpecialXmlCharsDecorator
	super WordDecorator

	# Random chars used
	var chars: Array[Char] = ['<', '>', '&']

	redef fun decorate_word(w) do
		var res = new FlatBuffer
		for c in w do
			var i = chars.length.rand
			res.add chars[i]
		end
		return res
	end
end

# Wraps the word with `<blink>inline html<block>`.
class InlineHtmlDecorator
	super WordDecorator

	redef fun decorate_word(w) do return "<blink>{w}</blink>"
end

# Replaces the word with `[link](htt://example.com/link "link Title")`.
class FullLinkDecorator
	super WordDecorator

	redef fun decorate_word(w) do
		return "[{w}](http://example.com/{w} \"{w} Title\")"
	end
end

# Replaces the word with `![link](htt://example.com/link "link Title")`.
class FullImageDecorator
	super WordDecorator

	redef fun decorate_word(w) do
		return "![{w}](http://example.com/{w} \"{w} Title\")"
	end
end

# Replaces the word with `[reflink][id123]`.
class RefLinkDecorator
	super WordDecorator

	redef fun decorate_word(w) do
		return "[{w}][id123]"
	end
end

# Uses other decorators randomly.
class MixedDecorator
	super LineDecorator
	super WordDecorator

	redef fun decorate_text(txt) do
		return decorate_lines(txt)
	end

	private var line_decs: Array[LineDecorator] is lazy do
		return [new ManualBreakDecorator, new BlockQuoteDecorator,
		new CodeBlockDecorator, new UnorderedListDecorator: LineDecorator]
	end

	private var current_dec: LineDecorator = line_decs.first is lazy

	redef fun decorate_line(line) do
		var re = "\n$".to_re
		var txt = current_dec.decorate_line(line)
		if line.has(re) then
			var i = line_decs.length.rand
			current_dec = line_decs[i]
		end
		return decorate_words(txt)
	end

	private var word_decs: Array[WordDecorator] is lazy do
		return [new PlainDecorator, new EmphasisDecorator, new StrongDecorator,
		new InlineCodeDecorator, new FastLinkDecorator, new SpecialXmlCharsDecorator,
		new InlineHtmlDecorator, new FullLinkDecorator, new FullImageDecorator,
		new RefLinkDecorator: WordDecorator]
	end

	redef fun decorate_word(w) do
		var i = word_decs.length.rand
		return word_decs[i].decorate_word(w)
	end
end

var opt_dir = new OptionString("Output directory", "-o", "--output")
var ctx = new OptionContext
ctx.add_option(opt_dir)
ctx.parse(args)

if ctx.rest.length != 1 then
	print "Usage:"
	print "gen_benches path/to/base/text.md"
	exit 0
end

var out_dir = opt_dir.value or else "markdown.out/"
out_dir.mkdir

var txt = ctx.rest.first.to_path.read_all

var lst = [new ManualBreakDecorator, new BlockQuoteDecorator, new CodeBlockDecorator,
		new UnorderedListDecorator, new MixedDecorator, new EmphasisDecorator,
		new StrongDecorator, new InlineCodeDecorator, new FastLinkDecorator,
		# FIXME XML is to slow with Nit
		# new SpecialXmlCharsDecorator,
		new InlineHtmlDecorator, new FullLinkDecorator,
		new FullImageDecorator, new RefLinkDecorator: MarkdownDecorator]

for dec in lst do
	var name = dec.class_name.to_snake_case.basename("_decorator")
	dec.decorate_text(txt).write_to_file("{out_dir}/{name}.md")
end
