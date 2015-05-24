# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Abstract class for manipulation of sequences of characters
module abstract_text

import native
import math
import collection
intrude import collection::array

# High-level abstraction for all text representations
abstract class Text
	super Comparable

	redef type OTHER: Text

	# Type of self (used for factorization of several methods, ex : substring_from, empty...)
	type SELFTYPE: Text

	# Gets a view on the chars of the Text object
	#
	#     assert "hello".chars.to_a == ['h', 'e', 'l', 'l', 'o']
	fun chars: SequenceRead[Char] is abstract

	# Number of characters contained in self.
	#
	#     assert "12345".length == 5
	#     assert "".length == 0
	fun length: Int is abstract

	# Create a substring.
	#
	#     assert "abcd".substring(1, 2)      ==  "bc"
	#     assert "abcd".substring(-1, 2)     ==  "a"
	#     assert "abcd".substring(1, 0)      ==  ""
	#     assert "abcd".substring(2, 5)      ==  "cd"
	#
	# A `from` index < 0 will be replaced by 0.
	# Unless a `count` value is > 0 at the same time.
	# In this case, `from += count` and `count -= from`.
	fun substring(from: Int, count: Int): SELFTYPE is abstract

	# Iterates on the substrings of self if any
	fun substrings: Iterator[FlatText] is abstract

	# Is the current Text empty (== "")
	#
	#     assert "".is_empty
	#     assert not "foo".is_empty
	fun is_empty: Bool do return self.length == 0

	# Returns an empty Text of the right type
	#
	# This method is used internally to get the right
	# implementation of an empty string.
	protected fun empty: SELFTYPE is abstract

	# Gets the first char of the Text
	#
	# DEPRECATED : Use self.chars.first instead
	fun first: Char do return self.chars[0]

	# Access a character at `index` in the string.
	#
	#     assert "abcd"[2]         == 'c'
	#
	# DEPRECATED : Use self.chars.[] instead
	fun [](index: Int): Char do return self.chars[index]

	# Gets the index of the first occurence of 'c'
	#
	# Returns -1 if not found
	#
	# DEPRECATED : Use self.chars.index_of instead
	fun index_of(c: Char): Int
	do
		return index_of_from(c, 0)
	end

	# Gets the last char of self
	#
	# DEPRECATED : Use self.chars.last instead
	fun last: Char do return self.chars[length-1]

	# Gets the index of the first occurence of ´c´ starting from ´pos´
	#
	# Returns -1 if not found
	#
	# DEPRECATED : Use self.chars.index_of_from instead
	fun index_of_from(c: Char, pos: Int): Int
	do
		var iter = self.chars.iterator_from(pos)
		while iter.is_ok do
			if iter.item == c then return iter.index
			iter.next
		end
		return -1
	end

	# Gets the last index of char ´c´
	#
	# Returns -1 if not found
	#
	# DEPRECATED : Use self.chars.last_index_of instead
	fun last_index_of(c: Char): Int
	do
		return last_index_of_from(c, length - 1)
	end

	# Return a null terminated char *
	fun to_cstring: NativeString is abstract

	# The index of the last occurrence of an element starting from pos (in reverse order).
	#
	#     var s = "/etc/bin/test/test.nit"
	#     assert s.last_index_of_from('/', s.length-1) == 13
	#     assert s.last_index_of_from('/', 12)         == 8
	#
	# Returns -1 if not found
	#
	# DEPRECATED : Use self.chars.last_index_of_from instead
	fun last_index_of_from(item: Char, pos: Int): Int
	do
		var iter = self.chars.reverse_iterator_from(pos)
		while iter.is_ok do
			if iter.item == item then return iter.index
			iter.next
		end
		return -1
	end

	# Gets an iterator on the chars of self
	#
	# DEPRECATED : Use self.chars.iterator instead
	fun iterator: Iterator[Char]
	do
		return self.chars.iterator
	end


	# Gets an Array containing the chars of self
	#
	# DEPRECATED : Use self.chars.to_a instead
	fun to_a: Array[Char] do return chars.to_a

	# Create a substring from `self` beginning at the `from` position
	#
	#     assert "abcd".substring_from(1)    ==  "bcd"
	#     assert "abcd".substring_from(-1)   ==  "abcd"
	#     assert "abcd".substring_from(2)    ==  "cd"
	#
	# As with substring, a `from` index < 0 will be replaced by 0
	fun substring_from(from: Int): SELFTYPE
	do
		if from >= self.length then return empty
		if from < 0 then from = 0
		return substring(from, length - from)
	end

	# Does self have a substring `str` starting from position `pos`?
	#
	#     assert "abcd".has_substring("bc",1)	     ==  true
	#     assert "abcd".has_substring("bc",2)	     ==  false
	#
	# Returns true iff all characters of `str` are presents
	# at the expected index in `self.`
	# The first character of `str` being at `pos`, the second
	# character being at `pos+1` and so on...
	#
	# This means that all characters of `str` need to be inside `self`.
	#
	#     assert "abcd".has_substring("xab", -1)         == false
	#     assert "abcd".has_substring("cdx", 2)          == false
	#
	# And that the empty string is always a valid substring.
	#
	#     assert "abcd".has_substring("", 2)             == true
	#     assert "abcd".has_substring("", 200)           == true
	fun has_substring(str: String, pos: Int): Bool
	do
		if str.is_empty then return true
		if pos < 0 or pos + str.length > length then return false
		var myiter = self.chars.iterator_from(pos)
		var itsiter = str.chars.iterator
		while myiter.is_ok and itsiter.is_ok do
			if myiter.item != itsiter.item then return false
			myiter.next
			itsiter.next
		end
		if itsiter.is_ok then return false
		return true
	end

	# Is this string prefixed by `prefix`?
	#
	#     assert "abcd".has_prefix("ab")           ==  true
	#     assert "abcbc".has_prefix("bc")          ==  false
	#     assert "ab".has_prefix("abcd")           ==  false
	fun has_prefix(prefix: String): Bool do return has_substring(prefix,0)

	# Is this string suffixed by `suffix`?
	#
	#     assert "abcd".has_suffix("abc")	     ==  false
	#     assert "abcd".has_suffix("bcd")	     ==  true
	fun has_suffix(suffix: String): Bool do return has_substring(suffix, length - suffix.length)

	# If `self` contains only digits, return the corresponding integer
	#
	#     assert "123".to_i        == 123
	#     assert "-1".to_i         == -1
	fun to_i: Int
	do
		# Shortcut
		return to_s.to_cstring.atoi
	end

	# If `self` contains a float, return the corresponding float
	#
	#     assert "123".to_f        == 123.0
	#     assert "-1".to_f         == -1.0
	#     assert "-1.2e-3".to_f    == -0.0012
	fun to_f: Float
	do
		# Shortcut
		return to_s.to_cstring.atof
	end

	# If `self` contains only digits and alpha <= 'f', return the corresponding integer.
	#
	#     assert "ff".to_hex == 255
	fun to_hex: Int do return a_to(16)

	# If `self` contains only digits <= '7', return the corresponding integer.
	#
	#     assert "714".to_oct == 460
	fun to_oct: Int do return a_to(8)

	# If `self` contains only '0' et '1', return the corresponding integer.
	#
	#     assert "101101".to_bin == 45
	fun to_bin: Int do return a_to(2)

	# If `self` contains only digits and letters, return the corresponding integer in a given base
	#
	#     assert "120".a_to(3)     == 15
	fun a_to(base: Int) : Int
	do
		var i = 0
		var neg = false

		for j in [0..length[ do
			var c = chars[j]
			var v = c.to_i
			if v > base then
				if neg then
					return -i
				else
					return i
				end
			else if v < 0 then
				neg = true
			else
				i = i * base + v
			end
		end
		if neg then
			return -i
		else
			return i
		end
	end

	# Returns `true` if the string contains only Numeric values (and one "," or one "." character)
	#
	#     assert "123".is_numeric  == true
	#     assert "1.2".is_numeric  == true
	#     assert "1,2".is_numeric  == true
	#     assert "1..2".is_numeric == false
	fun is_numeric: Bool
	do
		var has_point_or_comma = false
		for i in [0..length[ do
			var c = chars[i]
			if not c.is_numeric then
				if (c == '.' or c == ',') and not has_point_or_comma then
					has_point_or_comma = true
				else
					return false
				end
			end
		end
		return true
	end

	# Returns `true` if the string contains only Hex chars
	#
	#     assert "048bf".is_hex  == true
	#     assert "ABCDEF".is_hex  == true
	#     assert "0G".is_hex == false
	fun is_hex: Bool
	do
		for i in [0..length[ do
			var c = chars[i]
			if not (c >= 'a' and c <= 'f') and
			   not (c >= 'A' and c <= 'F') and
			   not (c >= '0' and c <= '9') then return false
		end
		return true
	end

	# Are all letters in `self` upper-case ?
	#
	#     assert "HELLO WORLD".is_upper == true
	#     assert "%$&%!".is_upper       == true
	#     assert "hello world".is_upper == false
	#     assert "Hello World".is_upper == false
	fun is_upper: Bool
	do
		for i in [0..length[ do
			var char = chars[i]
			if char.is_lower then return false
		end
		return true
	end

	# Are all letters in `self` lower-case ?
	#
	#     assert "hello world".is_lower == true
	#     assert "%$&%!".is_lower       == true
	#     assert "Hello World".is_lower == false
	fun is_lower: Bool
	do
		for i in [0..length[ do
			var char = chars[i]
			if char.is_upper then return false
		end
		return true
	end

	# Removes the whitespaces at the beginning of self
	#
	#     assert " \n\thello \n\t".l_trim == "hello \n\t"
	#
	# `Char::is_whitespace` determines what is a whitespace.
	fun l_trim: SELFTYPE
	do
		var iter = self.chars.iterator
		while iter.is_ok do
			if not iter.item.is_whitespace then break
			iter.next
		end
		if iter.index == length then return self.empty
		return self.substring_from(iter.index)
	end

	# Removes the whitespaces at the end of self
	#
	#     assert " \n\thello \n\t".r_trim == " \n\thello"
	#
	# `Char::is_whitespace` determines what is a whitespace.
	fun r_trim: SELFTYPE
	do
		var iter = self.chars.reverse_iterator
		while iter.is_ok do
			if not iter.item.is_whitespace then break
			iter.next
		end
		if iter.index < 0 then return self.empty
		return self.substring(0, iter.index + 1)
	end

	# Trims trailing and preceding white spaces
	#
	#     assert "  Hello  World !  ".trim   == "Hello  World !"
	#     assert "\na\nb\tc\t".trim          == "a\nb\tc"
	#
	# `Char::is_whitespace` determines what is a whitespace.
	fun trim: SELFTYPE do return (self.l_trim).r_trim

	# Is the string non-empty but only made of whitespaces?
	#
	#     assert " \n\t ".is_whitespace    == true
	#     assert "  hello  ".is_whitespace == false
	#     assert "".is_whitespace          == false
	#
	# `Char::is_whitespace` determines what is a whitespace.
	fun is_whitespace: Bool
	do
		if is_empty then return false
		for c in self.chars do
			if not c.is_whitespace then return false
		end
		return true
	end

	# Returns `self` removed from its last line terminator (if any).
	#
	#     assert "Hello\n".chomp == "Hello"
	#     assert "Hello".chomp   == "Hello"
	#
	#     assert "\n".chomp == ""
	#     assert "".chomp   == ""
	#
	# Line terminators are `"\n"`, `"\r\n"` and `"\r"`.
	# A single line terminator, the last one, is removed.
	#
	#     assert "\r\n".chomp     == ""
	#     assert "\r\n\n".chomp   == "\r\n"
	#     assert "\r\n\r\n".chomp == "\r\n"
	#     assert "\r\n\r".chomp   == "\r\n"
	#
	# Note: unlike with most IO methods like `Reader::read_line`,
	# a single `\r` is considered here to be a line terminator and will be removed.
	fun chomp: SELFTYPE
	do
		var len = length
		if len == 0 then return self
		var l = self.chars.last
		if l == '\r' then
			return substring(0, len-1)
		else if l != '\n' then
			return self
		else if len > 1 and self.chars[len-2] == '\r' then
			return substring(0, len-2)
		else
			return substring(0, len-1)
		end
	end

	# Justify a self in a space of `length`
	#
	# `left` is the space ratio on the left side.
	# * 0.0 for left-justified (no space at the left)
	# * 1.0 for right-justified (all spaces at the left)
	# * 0.5 for centered (half the spaces at the left)
	#
	# Examples
	#
	#     assert "hello".justify(10, 0.0)  == "hello     "
	#     assert "hello".justify(10, 1.0)  == "     hello"
	#     assert "hello".justify(10, 0.5)  == "  hello   "
	#
	# If `length` is not enough, `self` is returned as is.
	#
	#     assert "hello".justify(2, 0.0)   == "hello"
	#
	# REQUIRE: `left >= 0.0 and left <= 1.0`
	# ENSURE: `self.length <= length implies result.length == length`
	# ENSURE: `self.length >= length implies result == self`
	fun justify(length: Int, left: Float): String
	do
		var diff = length - self.length
		if diff <= 0 then return to_s
		assert left >= 0.0 and left <= 1.0
		var before = (diff.to_f * left).to_i
		return " " * before + self + " " * (diff-before)
	end

	# Mangle a string to be a unique string only made of alphanumeric characters and underscores.
	#
	# This method is injective (two different inputs never produce the same
	# output) and the returned string always respect the following rules:
	#
	# * Contains only US-ASCII letters, digits and underscores.
	# * Never starts with a digit.
	# * Never ends with an underscore.
	# * Never contains two contiguous underscores.
	#
	#     assert "42_is/The answer!".to_cmangle == "_52d2_is_47dThe_32danswer_33d"
	#     assert "__".to_cmangle == "_95d_95d"
	#     assert "__d".to_cmangle == "_95d_d"
	#     assert "_d_".to_cmangle == "_d_95d"
	#     assert "_42".to_cmangle == "_95d42"
	#     assert "foo".to_cmangle == "foo"
	#     assert "".to_cmangle == ""
	fun to_cmangle: String
	do
		if is_empty then return ""
		var res = new Buffer
		var underscore = false
		var start = 0
		var c = chars[0]

		if c >= '0' and c <= '9' then
			res.add('_')
			res.append(c.ascii.to_s)
			res.add('d')
			start = 1
		end
		for i in [start..length[ do
			c = chars[i]
			if (c >= 'a' and c <= 'z') or (c >='A' and c <= 'Z') then
				res.add(c)
				underscore = false
				continue
			end
			if underscore then
				res.append('_'.ascii.to_s)
				res.add('d')
			end
			if c >= '0' and c <= '9' then
				res.add(c)
				underscore = false
			else if c == '_' then
				res.add(c)
				underscore = true
			else
				res.add('_')
				res.append(c.ascii.to_s)
				res.add('d')
				underscore = false
			end
		end
		if underscore then
			res.append('_'.ascii.to_s)
			res.add('d')
		end
		return res.to_s
	end

	# Escape " \ ' and non printable characters using the rules of literal C strings and characters
	#
	#     assert "abAB12<>&".escape_to_c         == "abAB12<>&"
	#     assert "\n\"'\\".escape_to_c         == "\\n\\\"\\'\\\\"
	#
	# Most non-printable characters (bellow ASCII 32) are escaped to an octal form `\nnn`.
	# Three digits are always used to avoid following digits to be interpreted as an element
	# of the octal sequence.
	#
	#     assert "{0.ascii}{1.ascii}{8.ascii}{31.ascii}{32.ascii}".escape_to_c == "\\000\\001\\010\\037 "
	#
	# The exceptions are the common `\t` and `\n`.
	fun escape_to_c: String
	do
		var b = new Buffer
		for i in [0..length[ do
			var c = chars[i]
			if c == '\n' then
				b.append("\\n")
			else if c == '\t' then
				b.append("\\t")
			else if c == '\0' then
				b.append("\\000")
			else if c == '"' then
				b.append("\\\"")
			else if c == '\'' then
				b.append("\\\'")
			else if c == '\\' then
				b.append("\\\\")
			else if c.ascii < 32 then
				b.add('\\')
				var oct = c.ascii.to_base(8, false)
				# Force 3 octal digits since it is the
				# maximum allowed in the C specification
				if oct.length == 1 then
					b.add('0')
					b.add('0')
				else if oct.length == 2 then
					b.add('0')
				end
				b.append(oct)
			else
				b.add(c)
			end
		end
		return b.to_s
	end

	# Escape additionnal characters
	# The result might no be legal in C but be used in other languages
	#
	#     assert "ab|\{\}".escape_more_to_c("|\{\}") == "ab\\|\\\{\\\}"
	fun escape_more_to_c(chars: String): String
	do
		var b = new Buffer
		for c in escape_to_c.chars do
			if chars.chars.has(c) then
				b.add('\\')
			end
			b.add(c)
		end
		return b.to_s
	end

	# Escape to C plus braces
	#
	#     assert "\n\"'\\\{\}".escape_to_nit      == "\\n\\\"\\'\\\\\\\{\\\}"
	fun escape_to_nit: String do return escape_more_to_c("\{\}")

	# Escape to POSIX Shell (sh).
	#
	# Abort if the text contains a null byte.
	#
	#     assert "\n\"'\\\{\}0".escape_to_sh == "'\n\"'\\''\\\{\}0'"
	fun escape_to_sh: String do
		var b = new Buffer
		b.chars.add '\''
		for i in [0..length[ do
			var c = chars[i]
			if c == '\'' then
				b.append("'\\''")
			else
				assert without_null_byte: c != '\0'
				b.add(c)
			end
		end
		b.chars.add '\''
		return b.to_s
	end

	# Escape to include in a Makefile
	#
	# Unfortunately, some characters are not escapable in Makefile.
	# These characters are `;`, `|`, `\`, and the non-printable ones.
	# They will be rendered as `"?{hex}"`.
	fun escape_to_mk: String do
		var b = new Buffer
		for i in [0..length[ do
			var c = chars[i]
			if c == '$' then
				b.append("$$")
			else if c == ':' or c == ' ' or c == '#' then
				b.add('\\')
				b.add(c)
			else if c.ascii < 32 or c == ';' or c == '|' or c == '\\' or c == '=' then
				b.append("?{c.ascii.to_base(16, false)}")
			else
				b.add(c)
			end
		end
		return b.to_s
	end

	# Return a string where Nit escape sequences are transformed.
	#
	#     var s = "\\n"
	#     assert s.length        ==  2
	#     var u = s.unescape_nit
	#     assert u.length        ==  1
	#     assert u.chars[0].ascii      ==  10 # (the ASCII value of the "new line" character)
	fun unescape_nit: String
	do
		var res = new Buffer.with_cap(self.length)
		var was_slash = false
		for i in [0..length[ do
			var c = chars[i]
			if not was_slash then
				if c == '\\' then
					was_slash = true
				else
					res.add(c)
				end
				continue
			end
			was_slash = false
			if c == 'n' then
				res.add('\n')
			else if c == 'r' then
				res.add('\r')
			else if c == 't' then
				res.add('\t')
			else if c == '0' then
				res.add('\0')
			else
				res.add(c)
			end
		end
		return res.to_s
	end

	# Encode `self` to percent (or URL) encoding
	#
	#     assert "aBc09-._~".to_percent_encoding == "aBc09-._~"
	#     assert "%()< >".to_percent_encoding == "%25%28%29%3c%20%3e"
	#     assert ".com/post?e=asdf&f=123".to_percent_encoding == ".com%2fpost%3fe%3dasdf%26f%3d123"
	fun to_percent_encoding: String
	do
		var buf = new Buffer

		for i in [0..length[ do
			var c = chars[i]
			if (c >= '0' and c <= '9') or
			   (c >= 'a' and c <= 'z') or
			   (c >= 'A' and c <= 'Z') or
			   c == '-' or c == '.' or
			   c == '_' or c == '~'
			then
				buf.add c
			else buf.append "%{c.ascii.to_hex}"
		end

		return buf.to_s
	end

	# Decode `self` from percent (or URL) encoding to a clear string
	#
	# Replace invalid use of '%' with '?'.
	#
	#     assert "aBc09-._~".from_percent_encoding == "aBc09-._~"
	#     assert "%25%28%29%3c%20%3e".from_percent_encoding == "%()< >"
	#     assert ".com%2fpost%3fe%3dasdf%26f%3d123".from_percent_encoding == ".com/post?e=asdf&f=123"
	#     assert "%25%28%29%3C%20%3E".from_percent_encoding == "%()< >"
	#     assert "incomplete %".from_percent_encoding == "incomplete ?"
	#     assert "invalid % usage".from_percent_encoding == "invalid ? usage"
	fun from_percent_encoding: String
	do
		var buf = new Buffer

		var i = 0
		while i < length do
			var c = chars[i]
			if c == '%' then
				if i + 2 >= length then
					# What follows % has been cut off
					buf.add '?'
				else
					i += 1
					var hex_s = substring(i, 2)
					if hex_s.is_hex then
						var hex_i = hex_s.to_hex
						buf.add hex_i.ascii
						i += 1
					else
						# What follows a % is not Hex
						buf.add '?'
						i -= 1
					end
				end
			else buf.add c

			i += 1
		end

		return buf.to_s
	end

	# Escape the characters `<`, `>`, `&`, `"`, `'` and `/` as HTML/XML entity references.
	#
	#     assert "a&b-<>\"x\"/'".html_escape      ==  "a&amp;b-&lt;&gt;&#34;x&#34;&#47;&#39;"
	#
	# SEE: <https://www.owasp.org/index.php/XSS_%28Cross_Site_Scripting%29_Prevention_Cheat_Sheet#RULE_.231_-_HTML_Escape_Before_Inserting_Untrusted_Data_into_HTML_Element_Content>
	fun html_escape: String
	do
		var buf = new Buffer

		for i in [0..length[ do
			var c = chars[i]
			if c == '&' then
				buf.append "&amp;"
			else if c == '<' then
				buf.append "&lt;"
			else if c == '>' then
				buf.append "&gt;"
			else if c == '"' then
				buf.append "&#34;"
			else if c == '\'' then
				buf.append "&#39;"
			else if c == '/' then
				buf.append "&#47;"
			else buf.add c
		end

		return buf.to_s
	end

	# Equality of text
	# Two pieces of text are equals if thez have the same characters in the same order.
	#
	#     assert "hello" == "hello"
	#     assert "hello" != "HELLO"
	#     assert "hello" == "hel"+"lo"
	#
	# Things that are not Text are not equal.
	#
	#     assert "9" != '9'
	#     assert "9" != ['9']
	#     assert "9" != 9
	#
	#     assert "9".chars.first == '9'   # equality of Char
	#     assert "9".chars       == ['9'] # equality of Sequence
	#     assert "9".to_i        == 9     # equality of Int
	redef fun ==(o)
	do
		if o == null then return false
		if not o isa Text then return false
		if self.is_same_instance(o) then return true
		if self.length != o.length then return false
		return self.chars == o.chars
	end

	# Lexicographical comparaison
	#
	#     assert "abc" < "xy"
	#     assert "ABC" < "abc"
	redef fun <(other)
	do
		var self_chars = self.chars.iterator
		var other_chars = other.chars.iterator

		while self_chars.is_ok and other_chars.is_ok do
			if self_chars.item < other_chars.item then return true
			if self_chars.item > other_chars.item then return false
			self_chars.next
			other_chars.next
		end

		if self_chars.is_ok then
			return false
		else
			return true
		end
	end

	# Escape string used in labels for graphviz
	#
	#   assert ">><<".escape_to_dot == "\\>\\>\\<\\<"
	fun escape_to_dot: String
	do
		return escape_more_to_c("|\{\}<>")
	end

	private var hash_cache: nullable Int = null

	redef fun hash
	do
		if hash_cache == null then
			# djb2 hash algorithm
			var h = 5381

			for i in [0..length[ do
				var char = chars[i]
				h = h.lshift(5) + h + char.ascii
			end

			hash_cache = h
		end
		return hash_cache.as(not null)
	end

	# Gives the formatted string back as a Nit string with `args` in place
	#
	#     assert "This %1 is a %2.".format("String", "formatted String") == "This String is a formatted String."
	#     assert "\\%1 This string".format("String") == "\\%1 This string"
	fun format(args: Object...): String do
		var s = new Array[Text]
		var curr_st = 0
		var i = 0
		while i < length do
			# Skip escaped characters
			if self[i] == '\\' then
				i += 1
			# In case of format
			else if self[i] == '%' then
				var fmt_st = i
				i += 1
				var ciph_st = i
				while i < length and self[i].is_numeric do
					i += 1
				end
				i -= 1
				var fmt_end = i
				var ciph_len = fmt_end - ciph_st + 1
				s.push substring(curr_st, fmt_st - curr_st)
				s.push args[substring(ciph_st, ciph_len).to_i - 1].to_s
				curr_st = i + 1
			end
			i += 1
		end
		s.push substring(curr_st, length - curr_st)
		return s.plain_to_s
	end

	# Copies `n` bytes from `self` at `src_offset` into `dest` starting at `dest_offset`
	#
	# Basically a high-level synonym of NativeString::copy_to
	#
	# REQUIRE: `n` must be large enough to contain `len` bytes
	#
	#	var ns = new NativeString(8)
	#	"Text is String".copy_to_native(ns, 8, 2, 0)
	#	assert ns.to_s_with_length(8) == "xt is St"
	#
	fun copy_to_native(dest: NativeString, n, src_offset, dest_offset: Int) do
		var mypos = src_offset
		var itspos = dest_offset
		while n > 0 do
			dest[itspos] = self.chars[mypos]
			itspos += 1
			mypos += 1
			n -= 1
		end
	end

end

# All kinds of array-based text representations.
abstract class FlatText
	super Text

	# Underlying C-String (`char*`)
	#
	# Warning : Might be void in some subclasses, be sure to check
	# if set before using it.
	private var items: NativeString is noinit

	# Real items, used as cache for to_cstring is called
	private var real_items: nullable NativeString = null

	# Returns a char* starting at position `index_from`
	#
	# WARNING: If you choose to use this service, be careful of the following.
	#
	# Strings and NativeString are *ideally* always allocated through a Garbage Collector.
	# Since the GC tracks the use of the pointer for the beginning of the char*, it may be
	# deallocated at any moment, rendering the pointer returned by this function invalid.
	# Any access to freed memory may very likely cause undefined behaviour or a crash.
	# (Failure to do so will most certainly result in long and painful debugging hours)
	#
	# The only safe use of this pointer is if it is ephemeral (e.g. read in a C function
	# then immediately return).
	#
	# As always, do not modify the content of the String in C code, if this is what you want
	# copy locally the char* as Nit Strings are immutable.
	private fun fast_cstring: NativeString is abstract

	redef var length = 0

	redef fun output
	do
		var i = 0
		while i < length do
			items[i].output
			i += 1
		end
	end

	redef fun copy_to_native(dest, n, src_offset, dest_offset) do
		items.copy_to(dest, n, src_offset, dest_offset)
	end
end

# Abstract class for the SequenceRead compatible
# views on String and Buffer objects
private abstract class StringCharView
	super SequenceRead[Char]

	type SELFTYPE: Text

	var target: SELFTYPE

	redef fun is_empty do return target.is_empty

	redef fun length do return target.length

	redef fun iterator: IndexedIterator[Char] do return self.iterator_from(0)

	redef fun reverse_iterator do return self.reverse_iterator_from(self.length - 1)
end

# Immutable sequence of characters.
#
# String objects may be created using literals.
#
#     assert "Hello World!" isa String
abstract class String
	super Text

	redef type SELFTYPE: String is fixed

	redef fun to_s do return self

	# Concatenates `o` to `self`
	#
	#     assert "hello" + "world"  == "helloworld"
	#     assert "" + "hello" + ""  == "hello"
	fun +(o: Text): SELFTYPE is abstract

	# Concatenates self `i` times
	#
	#     assert "abc" * 4 == "abcabcabcabc"
	#     assert "abc" * 1 == "abc"
	#     assert "abc" * 0 == ""
	fun *(i: Int): SELFTYPE is abstract

	# Insert `s` at `pos`.
	#
	#     assert "helloworld".insert_at(" ", 5)	== "hello world"
	fun insert_at(s: String, pos: Int): SELFTYPE is abstract

	redef fun substrings is abstract

	# Returns a reversed version of self
	#
	#     assert "hello".reversed  == "olleh"
	#     assert "bob".reversed    == "bob"
	#     assert "".reversed       == ""
	fun reversed: SELFTYPE is abstract

	# A upper case version of `self`
	#
	#     assert "Hello World!".to_upper     == "HELLO WORLD!"
	fun to_upper: SELFTYPE is abstract

	# A lower case version of `self`
	#
	#     assert "Hello World!".to_lower     == "hello world!"
	fun to_lower : SELFTYPE is abstract

	# Takes a camel case `self` and converts it to snake case
	#
	#     assert "randomMethodId".to_snake_case == "random_method_id"
	#
	# The rules are the following:
	#
	# An uppercase is always converted to a lowercase
	#
	#     assert "HELLO_WORLD".to_snake_case == "hello_world"
	#
	# An uppercase that follows a lowercase is prefixed with an underscore
	#
	#     assert "HelloTheWORLD".to_snake_case == "hello_the_world"
	#
	# An uppercase that follows an uppercase and is followed by a lowercase, is prefixed with an underscore
	#
	#     assert "HelloTHEWorld".to_snake_case == "hello_the_world"
	#
	# All other characters are kept as is; `self` does not need to be a proper CamelCased string.
	#
	#     assert "=-_H3ll0Th3W0rld_-=".to_snake_case == "=-_h3ll0th3w0rld_-="
	fun to_snake_case: SELFTYPE
	do
		if self.is_lower then return self

		var new_str = new Buffer.with_cap(self.length)
		var prev_is_lower = false
		var prev_is_upper = false

		for i in [0..length[ do
			var char = chars[i]
			if char.is_lower then
				new_str.add(char)
				prev_is_lower = true
				prev_is_upper = false
			else if char.is_upper then
				if prev_is_lower then
					new_str.add('_')
				else if prev_is_upper and i+1 < length and chars[i+1].is_lower then
					new_str.add('_')
				end
				new_str.add(char.to_lower)
				prev_is_lower = false
				prev_is_upper = true
			else
				new_str.add(char)
				prev_is_lower = false
				prev_is_upper = false
			end
		end

		return new_str.to_s
	end

	# Takes a snake case `self` and converts it to camel case
	#
	#     assert "random_method_id".to_camel_case == "randomMethodId"
	#
	# If the identifier is prefixed by an underscore, the underscore is ignored
	#
	#     assert "_private_field".to_camel_case == "_privateField"
	#
	# If `self` is upper, it is returned unchanged
	#
	#     assert "RANDOM_ID".to_camel_case == "RANDOM_ID"
	#
	# If there are several consecutive underscores, they are considered as a single one
	#
	#     assert "random__method_id".to_camel_case == "randomMethodId"
	fun to_camel_case: SELFTYPE
	do
		if self.is_upper then return self

		var new_str = new Buffer
		var is_first_char = true
		var follows_us = false

		for i in [0..length[ do
			var char = chars[i]
			if is_first_char then
				new_str.add(char)
				is_first_char = false
			else if char == '_' then
				follows_us = true
			else if follows_us then
				new_str.add(char.to_upper)
				follows_us = false
			else
				new_str.add(char)
			end
		end

		return new_str.to_s
	end

	# Returns a capitalized `self`
	#
	# Letters that follow a letter are lowercased
	# Letters that follow a non-letter are upcased.
	#
	# SEE : `Char::is_letter` for the definition of letter.
	#
	#     assert "jAVASCRIPT".capitalized == "Javascript"
	#     assert "i am root".capitalized == "I Am Root"
	#     assert "ab_c -ab0c ab\nc".capitalized == "Ab_C -Ab0C Ab\nC"
	fun capitalized: SELFTYPE do
		if length == 0 then return self

		var buf = new Buffer.with_cap(length)

		var curr = chars[0].to_upper
		var prev = curr
		buf[0] = curr

		for i in [1 .. length[ do
			prev = curr
			curr = self[i]
			if prev.is_letter then
				buf[i] = curr.to_lower
			else
				buf[i] = curr.to_upper
			end
		end

		return buf.to_s
	end
end

# A mutable sequence of characters.
abstract class Buffer
	super Text

	# Returns an arbitrary subclass of `Buffer` with default parameters
	new is abstract

	# Returns an instance of a subclass of `Buffer` with `i` base capacity
	new with_cap(i: Int) is abstract

	redef type SELFTYPE: Buffer is fixed

	# Specific implementations MUST set this to `true` in order to invalidate caches
	protected var is_dirty = true

	# Copy-On-Write flag
	#
	# If the `Buffer` was to_s'd, the next in-place altering
	# operation will cause the current `Buffer` to be re-allocated.
	#
	# The flag will then be set at `false`.
	protected var written = false

	# Modifies the char contained at pos `index`
	#
	# DEPRECATED : Use self.chars.[]= instead
	fun []=(index: Int, item: Char) is abstract

	# Adds a char `c` at the end of self
	#
	# DEPRECATED : Use self.chars.add instead
	fun add(c: Char) is abstract

	# Clears the buffer
	#
	#     var b = new Buffer
	#     b.append "hello"
	#     assert not b.is_empty
	#     b.clear
	#     assert b.is_empty
	fun clear is abstract

	# Enlarges the subsequent array containing the chars of self
	fun enlarge(cap: Int) is abstract

	# Adds the content of text `s` at the end of self
	#
	#     var b = new Buffer
	#     b.append "hello"
	#     b.append "world"
	#     assert b == "helloworld"
	fun append(s: Text) is abstract

	# `self` is appended in such a way that `self` is repeated `r` times
	#
	#     var b = new Buffer
	#     b.append "hello"
	#     b.times 3
	#     assert b == "hellohellohello"
	fun times(r: Int) is abstract

	# Reverses itself in-place
	#
	#     var b = new Buffer
	#     b.append("hello")
	#     b.reverse
	#     assert b == "olleh"
	fun reverse is abstract

	# Changes each lower-case char in `self` by its upper-case variant
	#
	#     var b = new Buffer
	#     b.append("Hello World!")
	#     b.upper
	#     assert b == "HELLO WORLD!"
	fun upper is abstract

	# Changes each upper-case char in `self` by its lower-case variant
	#
	#     var b = new Buffer
	#     b.append("Hello World!")
	#     b.lower
	#     assert b == "hello world!"
	fun lower is abstract

	# Capitalizes each word in `self`
	#
	# Letters that follow a letter are lowercased
	# Letters that follow a non-letter are upcased.
	#
	# SEE: `Char::is_letter` for the definition of a letter.
	#
	#     var b = new FlatBuffer.from("jAVAsCriPt")
	#     b.capitalize
	#     assert b == "Javascript"
	#     b = new FlatBuffer.from("i am root")
	#     b.capitalize
	#     assert b == "I Am Root"
	#     b = new FlatBuffer.from("ab_c -ab0c ab\nc")
	#     b.capitalize
	#     assert b == "Ab_C -Ab0C Ab\nC"
	fun capitalize do
		if length == 0 then return
		var c = self[0].to_upper
		self[0] = c
		var prev = c
		for i in [1 .. length[ do
			prev = c
			c = self[i]
			if prev.is_letter then
				self[i] = c.to_lower
			else
				self[i] = c.to_upper
			end
		end
	end

	redef fun hash
	do
		if is_dirty then hash_cache = null
		return super
	end

	# In Buffers, the internal sequence of character is mutable
	# Thus, `chars` can be used to modify the buffer.
	redef fun chars: Sequence[Char] is abstract
end

# View on Buffer objects, extends Sequence
# for mutation operations
private abstract class BufferCharView
	super StringCharView
	super Sequence[Char]

	redef type SELFTYPE: Buffer

end

redef class Object
	# User readable representation of `self`.
	fun to_s: String do return inspect

	# The class name of the object in NativeString format.
	private fun native_class_name: NativeString is intern

	# The class name of the object.
	#
	#     assert 5.class_name == "Int"
	fun class_name: String do return native_class_name.to_s

	# Developer readable representation of `self`.
	# Usually, it uses the form "<CLASSNAME:#OBJECTID bla bla bla>"
	fun inspect: String
	do
		return "<{inspect_head}>"
	end

	# Return "CLASSNAME:#OBJECTID".
	# This function is mainly used with the redefinition of the inspect method
	protected fun inspect_head: String
	do
		return "{class_name}:#{object_id.to_hex}"
	end
end

redef class Bool
	#     assert true.to_s         == "true"
	#     assert false.to_s        == "false"
	redef fun to_s
	do
		if self then
			return once "true"
		else
			return once "false"
		end
	end
end

redef class Byte
	# C function to calculate the length of the `NativeString` to receive `self`
	private fun byte_to_s_len: Int is extern "native_byte_length_str"

	# C function to convert an nit Int to a NativeString (char*)
	private fun native_byte_to_s(nstr: NativeString, strlen: Int) is extern "native_byte_to_s"

	# Displayable byte in its hexadecimal form (0x..)
	#
	#     assert 1.to_b.to_s       == "0x01"
	#     assert (-123).to_b.to_s  == "0x85"
	redef fun to_s do
		var nslen = byte_to_s_len
		var ns = new NativeString(nslen + 1)
		ns[nslen] = '\0'
		native_byte_to_s(ns, nslen + 1)
		return ns.to_s_with_length(nslen)
	end
end

redef class Int

	# Wrapper of strerror C function
	private fun strerror_ext: NativeString is extern "strerror"

	# Returns a string describing error number
	fun strerror: String do return strerror_ext.to_s

	# Fill `s` with the digits in base `base` of `self` (and with the '-' sign if 'signed' and negative).
	# assume < to_c max const of char
	private fun fill_buffer(s: Buffer, base: Int, signed: Bool)
	do
		var n: Int
		# Sign
		if self < 0 then
			n = - self
			s.chars[0] = '-'
		else if self == 0 then
			s.chars[0] = '0'
			return
		else
			n = self
		end
		# Fill digits
		var pos = digit_count(base) - 1
		while pos >= 0 and n > 0 do
			s.chars[pos] = (n % base).to_c
			n = n / base # /
			pos -= 1
		end
	end

	# C function to calculate the length of the `NativeString` to receive `self`
	private fun int_to_s_len: Int is extern "native_int_length_str"

	# C function to convert an nit Int to a NativeString (char*)
	private fun native_int_to_s(nstr: NativeString, strlen: Int) is extern "native_int_to_s"

	# return displayable int in base base and signed
	fun to_base(base: Int, signed: Bool): String is abstract

	# return displayable int in hexadecimal
	#
	#     assert 1.to_hex  == "1"
	#     assert (-255).to_hex  == "-ff"
	fun to_hex: String do return to_base(16,false)
end

redef class Float
	# Pretty representation of `self`, with decimals as needed from 1 to a maximum of 3
	#
	#     assert 12.34.to_s       == "12.34"
	#     assert (-0120.030).to_s == "-120.03"
	#
	# see `to_precision` for a custom precision.
	redef fun to_s do
		var str = to_precision( 3 )
		if is_inf != 0 or is_nan then return str
		var len = str.length
		for i in [0..len-1] do
			var j = len-1-i
			var c = str.chars[j]
			if c == '0' then
				continue
			else if c == '.' then
				return str.substring( 0, j+2 )
			else
				return str.substring( 0, j+1 )
			end
		end
		return str
	end

	# `String` representation of `self` with the given number of `decimals`
	#
	#     assert 12.345.to_precision(0)    == "12"
	#     assert 12.345.to_precision(3)    == "12.345"
	#     assert (-12.345).to_precision(3) == "-12.345"
	#     assert (-0.123).to_precision(3)  == "-0.123"
	#     assert 0.999.to_precision(2)     == "1.00"
	#     assert 0.999.to_precision(4)     == "0.9990"
	fun to_precision(decimals: Int): String
	do
		if is_nan then return "nan"

		var isinf = self.is_inf
		if isinf == 1 then
			return "inf"
		else if isinf == -1 then
			return  "-inf"
		end

		if decimals == 0 then return self.to_i.to_s
		var f = self
		for i in [0..decimals[ do f = f * 10.0
		if self > 0.0 then
			f = f + 0.5
		else
			f = f - 0.5
		end
		var i = f.to_i
		if i == 0 then return "0." + "0"*decimals

		# Prepare both parts of the float, before and after the "."
		var s = i.abs.to_s
		var sl = s.length
		var p1
		var p2
		if sl > decimals then
			# Has something before the "."
			p1 = s.substring(0, sl-decimals)
			p2 = s.substring(sl-decimals, decimals)
		else
			p1 = "0"
			p2 = "0"*(decimals-sl) + s
		end

		if i < 0 then p1 = "-" + p1

		return p1 + "." + p2
	end
end

redef class Char
	#     assert 'x'.to_s    == "x"
	redef fun to_s
	do
		var s = new Buffer.with_cap(1)
		s.chars[0] = self
		return s.to_s
	end

	# Returns true if the char is a numerical digit
	#
	#     assert '0'.is_numeric
	#     assert '9'.is_numeric
	#     assert not 'a'.is_numeric
	#     assert not '?'.is_numeric
	fun is_numeric: Bool
	do
		return self >= '0' and self <= '9'
	end

	# Returns true if the char is an alpha digit
	#
	#     assert 'a'.is_alpha
	#     assert 'Z'.is_alpha
	#     assert not '0'.is_alpha
	#     assert not '?'.is_alpha
	fun is_alpha: Bool
	do
		return (self >= 'a' and self <= 'z') or (self >= 'A' and self <= 'Z')
	end

	# Returns true if the char is an alpha or a numeric digit
	#
	#     assert 'a'.is_alphanumeric
	#     assert 'Z'.is_alphanumeric
	#     assert '0'.is_alphanumeric
	#     assert '9'.is_alphanumeric
	#     assert not '?'.is_alphanumeric
	fun is_alphanumeric: Bool
	do
		return self.is_numeric or self.is_alpha
	end
end

redef class Collection[E]
	# String representation of the content of the collection.
	#
	# The standard representation is the list of elements separated with commas.
	#
	# ~~~
	# assert [1,2,3].to_s == "[1,2,3]"
	# assert [1..3].to_s  == "[1,2,3]"
	# assert (new Array[Int]).to_s == "[]" # empty collection
	# ~~~
	#
	# Subclasses may return a more specific string representation.
	redef fun to_s
	do
		return "[" + join(",") + "]"
	end

	# Concatenate elements without separators
	fun plain_to_s: String
	do
		var s = new Buffer
		for e in self do if e != null then s.append(e.to_s)
		return s.to_s
	end

	# Concatenate and separate each elements with `sep`.
	#
	#     assert [1, 2, 3].join(":")         == "1:2:3"
	#     assert [1..3].join(":")            == "1:2:3"
	fun join(sep: Text): String
	do
		if is_empty then return ""

		var s = new Buffer # Result

		# Concat first item
		var i = iterator
		var e = i.item
		if e != null then s.append(e.to_s)

		# Concat other items
		i.next
		while i.is_ok do
			s.append(sep)
			e = i.item
			if e != null then s.append(e.to_s)
			i.next
		end
		return s.to_s
	end
end

redef class Map[K,V]
	# Concatenate couple of 'key value'.
	# key and value are separated by `couple_sep`.
	# each couple is separated each couple with `sep`.
	#
	#     var m = new ArrayMap[Int, String]
	#     m[1] = "one"
	#     m[10] = "ten"
	#     assert m.join("; ", "=") == "1=one; 10=ten"
	fun join(sep: String, couple_sep: String): String is abstract
end

redef class Sys
	private var args_cache: nullable Sequence[String] = null

	# The arguments of the program as given by the OS
	fun program_args: Sequence[String]
	do
		if _args_cache == null then init_args
		return _args_cache.as(not null)
	end

	# The name of the program as given by the OS
	fun program_name: String
	do
		return native_argv(0).to_s
	end

	# Initialize `program_args` with the contents of `native_argc` and `native_argv`.
	private fun init_args
	do
		var argc = native_argc
		var args = new Array[String].with_capacity(0)
		var i = 1
		while i < argc do
			args[i-1] = native_argv(i).to_s
			i += 1
		end
		_args_cache = args
	end

	# First argument of the main C function.
	private fun native_argc: Int is intern

	# Second argument of the main C function.
	private fun native_argv(i: Int): NativeString is intern
end

# Comparator that efficienlty use `to_s` to compare things
#
# The comparaison call `to_s` on object and use the result to order things.
#
#     var a = [1, 2, 3, 10, 20]
#     (new CachedAlphaComparator).sort(a)
#     assert a == [1, 10, 2, 20, 3]
#
# Internally the result of `to_s` is cached in a HashMap to counter
# uneficient implementation of `to_s`.
#
# Note: it caching is not usefull, see `alpha_comparator`
class CachedAlphaComparator
	super Comparator
	redef type COMPARED: Object

	private var cache = new HashMap[Object, String]

	private fun do_to_s(a: Object): String do
		if cache.has_key(a) then return cache[a]
		var res = a.to_s
		cache[a] = res
		return res
	end

	redef fun compare(a, b) do
		return do_to_s(a) <=> do_to_s(b)
	end
end

# see `alpha_comparator`
private class AlphaComparator
	super Comparator
	redef fun compare(a, b) do return a.to_s <=> b.to_s
end

# Stateless comparator that naively use `to_s` to compare things.
#
# Note: the result of `to_s` is not cached, thus can be invoked a lot
# on a single instace. See `CachedAlphaComparator` as an alternative.
#
#     var a = [1, 2, 3, 10, 20]
#     alpha_comparator.sort(a)
#     assert a == [1, 10, 2, 20, 3]
fun alpha_comparator: Comparator do return once new AlphaComparator

# The arguments of the program as given by the OS
fun args: Sequence[String]
do
	return sys.program_args
end

redef class NativeString
	# Returns `self` as a new String.
	fun to_s_with_copy: String is abstract

	# Returns `self` as a String of `length`.
	fun to_s_with_length(length: Int): String is abstract
end

redef class NativeArray[E]
	# Join all the elements using `to_s`
	#
	# REQUIRE: `self isa NativeArray[String]`
	# REQUIRE: all elements are initialized
	fun native_to_s: String is abstract
end
