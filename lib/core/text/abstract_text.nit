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

in "C" `{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
`}

# High-level abstraction for all text representations
abstract class Text
	super Comparable
	super Cloneable

	redef type OTHER: Text

	# Type of self (used for factorization of several methods, ex : substring_from, empty...)
	type SELFTYPE: Text

	# Gets a view on the chars of the Text object
	#
	# ~~~
	# assert "hello".chars.to_a == ['h', 'e', 'l', 'l', 'o']
	# ~~~
	fun chars: SequenceRead[Char] is abstract

	# Gets a view on the bytes of the Text object
	#
	# ~~~
	# assert "hello".bytes.to_a == [104, 101, 108, 108, 111]
	# ~~~
	fun bytes: SequenceRead[Int] is abstract

	# Number of characters contained in self.
	#
	# ~~~
	# assert "12345".length == 5
	# assert "".length == 0
	# assert "あいうえお".length == 5
	# ~~~
	fun length: Int is abstract

	# Number of bytes in `self`
	#
	# ~~~
	# assert "12345".byte_length == 5
	# assert "あいうえお".byte_length == 15
	# ~~~
	fun byte_length: Int is abstract

	# Create a substring.
	#
	# ~~~
	# assert "abcd".substring(1, 2)      ==  "bc"
	# assert "abcd".substring(-1, 2)     ==  "a"
	# assert "abcd".substring(1, 0)      ==  ""
	# assert "abcd".substring(2, 5)      ==  "cd"
	# assert "あいうえお".substring(1,3) ==  "いうえ"
	# ~~~
	#
	# A `from` index < 0 will be replaced by 0.
	# Unless a `count` value is > 0 at the same time.
	# In this case, `from += count` and `count -= from`.
	fun substring(from: Int, count: Int): SELFTYPE is abstract

	# Iterates on the substrings of self if any
	private fun substrings: Iterator[FlatText] is abstract

	# Is the current Text empty (== "")
	#
	# ~~~
	# assert "".is_empty
	# assert not "foo".is_empty
	# ~~~
	fun is_empty: Bool do return self.length == 0

	# Returns an empty Text of the right type
	#
	# This method is used internally to get the right
	# implementation of an empty string.
	protected fun empty: SELFTYPE is abstract

	# Returns a copy of `self` as a Buffer
	fun to_buffer: Buffer is abstract

	# Gets the first char of the Text
	fun first: Char do return self.chars[0]

	# Access a character at `index` in the string.
	#
	# ~~~
	# assert "abcd"[2]         == 'c'
	# ~~~
	fun [](index: Int): Char do return self.chars[index]

	# Gets the index of the first occurence of 'c'
	#
	# Returns -1 if not found
	fun index_of(c: Char): Int
	do
		return index_of_from(c, 0)
	end

	# Gets the last char of self
	fun last: Char do return self.chars[length-1]

	# Gets the index of the first occurence of ´c´ starting from ´pos´
	#
	# Returns -1 if not found
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
	fun last_index_of(c: Char): Int
	do
		return last_index_of_from(c, length - 1)
	end

	# Return a null terminated char *
	fun to_cstring: CString is abstract

	# The index of the last occurrence of an element starting from pos (in reverse order).
	#
	# ~~~
	# var s = "/etc/bin/test/test.nit"
	# assert s.last_index_of_from('/', s.length-1) == 13
	# assert s.last_index_of_from('/', 12)         == 8
	# ~~~
	#
	# Returns -1 if not found
	fun last_index_of_from(item: Char, pos: Int): Int do return chars.last_index_of_from(item, pos)

	# Concatenates `o` to `self`
	#
	# ~~~
	# assert "hello" + "world"  == "helloworld"
	# assert "" + "hello" + ""  == "hello"
	# ~~~
	fun +(o: Text): SELFTYPE is abstract

	# Gets an iterator on the chars of self
	fun iterator: Iterator[Char]
	do
		return self.chars.iterator
	end


	# Gets an Array containing the chars of self
	fun to_a: Array[Char] do return chars.to_a

	# Create a substring from `self` beginning at the `from` position
	#
	# ~~~
	# assert "abcd".substring_from(1)    ==  "bcd"
	# assert "abcd".substring_from(-1)   ==  "abcd"
	# assert "abcd".substring_from(2)    ==  "cd"
	# ~~~
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
	# ~~~
	# assert "abcd".has_substring("bc",1)	     ==  true
	# assert "abcd".has_substring("bc",2)	     ==  false
	# ~~~
	#
	# Returns true iff all characters of `str` are presents
	# at the expected index in `self.`
	# The first character of `str` being at `pos`, the second
	# character being at `pos+1` and so on...
	#
	# This means that all characters of `str` need to be inside `self`.
	#
	# ~~~
	# assert "abcd".has_substring("xab", -1)         == false
	# assert "abcd".has_substring("cdx", 2)          == false
	# ~~~
	#
	# And that the empty string is always a valid substring.
	#
	# ~~~
	# assert "abcd".has_substring("", 2)             == true
	# assert "abcd".has_substring("", 200)           == true
	# ~~~
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
	# ~~~
	# assert "abcd".has_prefix("ab")           ==  true
	# assert "abcbc".has_prefix("bc")          ==  false
	# assert "ab".has_prefix("abcd")           ==  false
	# ~~~
	fun has_prefix(prefix: String): Bool do return has_substring(prefix,0)

	# Is this string suffixed by `suffix`?
	#
	# ~~~
	# assert "abcd".has_suffix("abc")	     ==  false
	# assert "abcd".has_suffix("bcd")	     ==  true
	# ~~~
	fun has_suffix(suffix: String): Bool do return has_substring(suffix, length - suffix.length)

	# Returns `self` as the corresponding integer
	#
	# ~~~
	# assert "123".to_i        == 123
	# assert "-1".to_i         == -1
	# assert "0x64".to_i       == 100
	# assert "0b1100_0011".to_i== 195
	# assert "--12".to_i       == 12
	# assert "+45".to_i        == 45
	# ~~~
	#
	# REQUIRE: `self`.`is_int`
	fun to_i: Int is abstract

	# If `self` contains a float, return the corresponding float
	#
	# ~~~
	# assert "123".to_f        == 123.0
	# assert "-1".to_f         == -1.0
	# assert "-1.2e-3".to_f    == -0.0012
	# ~~~
	fun to_f: Float
	do
		# Shortcut
		return to_s.to_cstring.atof
	end

	# If `self` contains only digits and alpha <= 'f', return the corresponding integer.
	#
	# ~~~
	# assert "ff".to_hex == 255
	# ~~~
	fun to_hex(pos, ln: nullable Int): Int do
		var res = 0
		if pos == null then pos = 0
		if ln == null then ln = length - pos
		var max = pos + ln
		for i in [pos .. max[ do
			res <<= 4
			res += self[i].from_hex
		end
		return res
	end

	# If `self` contains only digits <= '7', return the corresponding integer.
	#
	# ~~~
	# assert "714".to_oct == 460
	# ~~~
	fun to_oct: Int do return a_to(8)

	# If `self` contains only '0' et '1', return the corresponding integer.
	#
	# ~~~
	# assert "101101".to_bin == 45
	# ~~~
	fun to_bin: Int do return a_to(2)

	# If `self` contains only digits '0' .. '9', return the corresponding integer.
	#
	# ~~~
	# assert "108".to_dec == 108
	# ~~~
	fun to_dec: Int do return a_to(10)

	# If `self` contains only digits and letters, return the corresponding integer in a given base
	#
	# ~~~
	# assert "120".a_to(3)     == 15
	# ~~~
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

	# Is this string in a valid numeric format compatible with `to_f`?
	#
	# ~~~
	# assert "123".is_numeric  == true
	# assert "1.2".is_numeric  == true
	# assert "-1.2".is_numeric == true
	# assert "-1.23e-2".is_numeric == true
	# assert "1..2".is_numeric == false
	# assert "".is_numeric     == false
	# ~~~
	fun is_numeric: Bool
	do
		var has_point = false
		var e_index = -1
		for i in [0..length[ do
			var c = chars[i]
			if not c.is_numeric then
				if c == '.' and not has_point then
					has_point = true
				else if c == 'e' and e_index == -1 and i > 0 and i < length - 1 and chars[i-1] != '-' then
					e_index = i
				else if c == '-' and i == e_index + 1 and i < length - 1 then
				else
					return false
				end
			end
		end
		return not is_empty
	end

	# Returns `true` if the string contains only Hex chars
	#
	# ~~~
	# assert "048bf".is_hex  == true
	# assert "ABCDEF".is_hex  == true
	# assert "0G".is_hex == false
	# ~~~
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

	# Returns `true` if the string contains only Binary digits
	#
	# ~~~
	# assert "1101100".is_bin  == true
	# assert "1101020".is_bin  == false
	# ~~~
	fun is_bin: Bool do
		for i in chars do if i != '0' and i != '1' then return false
		return true
	end

	# Returns `true` if the string contains only Octal digits
	#
	# ~~~
	# assert "213453".is_oct  == true
	# assert "781".is_oct     == false
	# ~~~
	fun is_oct: Bool do
		for i in chars do if i < '0' or i > '7' then return false
		return true
	end

	# Returns `true` if the string contains only Decimal digits
	#
	# ~~~
	# assert "10839".is_dec == true
	# assert "164F".is_dec  == false
	# ~~~
	fun is_dec: Bool do
		for i in chars do if i < '0' or i > '9' then return false
		return true
	end

	# Are all letters in `self` upper-case ?
	#
	# ~~~
	# assert "HELLO WORLD".is_upper == true
	# assert "%$&%!".is_upper       == true
	# assert "hello world".is_upper == false
	# assert "Hello World".is_upper == false
	# ~~~
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
	# ~~~
	# assert "hello world".is_lower == true
	# assert "%$&%!".is_lower       == true
	# assert "Hello World".is_lower == false
	# ~~~
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
	# ~~~
	# assert " \n\thello \n\t".l_trim == "hello \n\t"
	# ~~~
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
	# ~~~
	# assert " \n\thello \n\t".r_trim == " \n\thello"
	# ~~~
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
	# ~~~
	# assert "  Hello  World !  ".trim   == "Hello  World !"
	# assert "\na\nb\tc\t".trim          == "a\nb\tc"
	# ~~~
	#
	# `Char::is_whitespace` determines what is a whitespace.
	fun trim: SELFTYPE do return (self.l_trim).r_trim

	# Is the string non-empty but only made of whitespaces?
	#
	# ~~~
	# assert " \n\t ".is_whitespace    == true
	# assert "  hello  ".is_whitespace == false
	# assert "".is_whitespace          == false
	# ~~~
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
	# ~~~
	# assert "Hello\n".chomp == "Hello"
	# assert "Hello".chomp   == "Hello"
	#
	# assert "\n".chomp == ""
	# assert "".chomp   == ""
	# ~~~
	#
	# Line terminators are `"\n"`, `"\r\n"` and `"\r"`.
	# A single line terminator, the last one, is removed.
	#
	# ~~~
	# assert "\r\n".chomp     == ""
	# assert "\r\n\n".chomp   == "\r\n"
	# assert "\r\n\r\n".chomp == "\r\n"
	# assert "\r\n\r".chomp   == "\r\n"
	# ~~~
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

	# Justify `self` in a space of `length`
	#
	# `left` is the space ratio on the left side.
	# * 0.0 for left-justified (no space at the left)
	# * 1.0 for right-justified (all spaces at the left)
	# * 0.5 for centered (half the spaces at the left)
	#
	# `char`, or `' '` by default, is repeated to pad the empty space.
	#
	# Examples
	#
	# ~~~
	# assert "hello".justify(10, 0.0)  == "hello     "
	# assert "hello".justify(10, 1.0)  == "     hello"
	# assert "hello".justify(10, 0.5)  == "  hello   "
	# assert "hello".justify(10, 0.5, '.') == "..hello..."
	# ~~~
	#
	# If `length` is not enough, `self` is returned as is.
	#
	# ~~~
	# assert "hello".justify(2, 0.0)   == "hello"
	# ~~~
	#
	# REQUIRE: `left >= 0.0 and left <= 1.0`
	# ENSURE: `self.length <= length implies result.length == length`
	# ENSURE: `self.length >= length implies result == self`
	fun justify(length: Int, left: Float, char: nullable Char): String
	do
		var pad = (char or else ' ').to_s
		var diff = length - self.length
		if diff <= 0 then return to_s
		assert left >= 0.0 and left <= 1.0
		var before = (diff.to_f * left).to_i
		return pad * before + self + pad * (diff-before)
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
	# Examples:
	#
	# ~~~
	# assert "42_is/The answer!".to_cmangle == "_52d2_is_47dThe_32danswer_33d"
	# assert "__".to_cmangle == "_95d_95d"
	# assert "__d".to_cmangle == "_95d_d"
	# assert "_d_".to_cmangle == "_d_95d"
	# assert "_42".to_cmangle == "_95d42"
	# assert "foo".to_cmangle == "foo"
	# assert "".to_cmangle == ""
	# ~~~
	fun to_cmangle: String
	do
		if is_empty then return ""
		var res = new Buffer
		var underscore = false
		var start = 0
		var c = self[0]

		if c >= '0' and c <= '9' then
			res.add('_')
			res.append(c.code_point.to_s)
			res.add('d')
			start = 1
		end
		for i in [start..length[ do
			c = self[i]
			if (c >= 'a' and c <= 'z') or (c >='A' and c <= 'Z') then
				res.add(c)
				underscore = false
				continue
			end
			if underscore then
				res.append('_'.code_point.to_s)
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
				res.append(c.code_point.to_s)
				res.add('d')
				underscore = false
			end
		end
		if underscore then
			res.append('_'.code_point.to_s)
			res.add('d')
		end
		return res.to_s
	end

	# Escape `"` `\` `'`, trigraphs and non printable characters using the rules of literal C strings and characters
	#
	# ~~~
	# assert "abAB12<>&".escape_to_c       == "abAB12<>&"
	# assert "\n\"'\\".escape_to_c         == "\\n\\\"\\'\\\\"
	# assert "allo???!".escape_to_c        == "allo??\\?!"
	# assert "??=??/??'??(??)".escape_to_c == "?\\?=?\\?/??\\'?\\?(?\\?)"
	# assert "??!??<??>??-".escape_to_c    == "?\\?!?\\?<?\\?>?\\?-"
	# ~~~
	#
	# Most non-printable characters (bellow ASCII 32) are escaped to an octal form `\nnn`.
	# Three digits are always used to avoid following digits to be interpreted as an element
	# of the octal sequence.
	#
	# ~~~
	# assert "{0.code_point}{1.code_point}{8.code_point}{31.code_point}{32.code_point}".escape_to_c == "\\000\\001\\010\\037 "
	# ~~~
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
			else if c == '"' then
				b.append("\\\"")
			else if c == '\'' then
				b.append("\\\'")
			else if c == '\\' then
				b.append("\\\\")
			else if c == '?' then
				# Escape if it is the last question mark of a ANSI C trigraph.
				var j = i + 1
				if j < length then
					var next = chars[j]
					# We ignore `??'` because it will be escaped as `??\'`.
					if
						next == '!' or
						next == '(' or
						next == ')' or
						next == '-' or
						next == '/' or
						next == '<' or
						next == '=' or
						next == '>'
					then b.add('\\')
				end
				b.add('?')
			else if c.code_point < 32 then
				b.add('\\')
				var oct = c.code_point.to_base(8)
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
	# ~~~
	# assert "ab|\{\}".escape_more_to_c("|\{\}") == "ab\\|\\\{\\\}"
	# assert "allo???!".escape_more_to_c("")     == "allo??\\?!"
	# ~~~
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
	# ~~~
	# assert "\n\"'\\\{\}".escape_to_nit      == "\\n\\\"\\'\\\\\\\{\\\}"
	# ~~~
	fun escape_to_nit: String do return escape_more_to_c("\{\}")

	# Escape to POSIX Shell (sh).
	#
	# Abort if the text contains a null byte.
	#
	# ~~~
	# assert "\n\"'\\\{\}0".escape_to_sh == "'\n\"'\\''\\\{\}0'"
	# ~~~
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
			else if c.code_point < 32 or c == ';' or c == '|' or c == '\\' then
				b.append("?{c.code_point.to_base(16)}")
			else
				b.add(c)
			end
		end
		return b.to_s
	end

	# Return a string where Nit escape sequences are transformed.
	#
	# ~~~
	# var s = "\\n"
	# assert s.length        ==  2
	# var u = s.unescape_nit
	# assert u.length        ==  1
	# assert u.chars[0].code_point      ==  10 # (the ASCII value of the "new line" character)
	# ~~~
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

	# Returns `self` with all characters escaped with their UTF-16 representation
	#
	# ~~~
	# assert "Aèあ𐏓".escape_to_utf16 == "\\u0041\\u00e8\\u3042\\ud800\\udfd3"
	# ~~~
	fun escape_to_utf16: String do
		var buf = new Buffer
		for i in chars do buf.append i.escape_to_utf16
		return buf.to_s
	end

	# Returns the Unicode char escaped by `self`
	#
	# ~~~
	# assert "\\u0041".from_utf16_escape == 'A'
	# assert "\\ud800\\udfd3".from_utf16_escape == '𐏓'
	# assert "\\u00e8".from_utf16_escape == 'è'
	# assert "\\u3042".from_utf16_escape == 'あ'
	# ~~~
	fun from_utf16_escape(pos, ln: nullable Int): Char do
		if pos == null then pos = 0
		if ln == null then ln = length - pos
		if ln < 6 then return 0xFFFD.code_point
		var cp = from_utf16_digit(pos + 2).to_u32
		if cp < 0xD800u32 then return cp.code_point
		if cp > 0xDFFFu32 then return cp.code_point
		if cp > 0xDBFFu32 then return 0xFFFD.code_point
		if ln == 6 then return 0xFFFD.code_point
		if ln < 12 then return 0xFFFD.code_point
		cp <<= 16
		cp += from_utf16_digit(pos + 8).to_u32
		var cplo = cp & 0xFFFFu32
		if cplo < 0xDC00u32 then return 0xFFFD.code_point
		if cplo > 0xDFFFu32 then return 0xFFFD.code_point
		return cp.from_utf16_surr.code_point
	end

	# Returns a UTF-16 escape value
	#
	# ~~~
	# var s = "\\ud800\\udfd3"
	# assert s.from_utf16_digit(2) == 0xD800
	# assert s.from_utf16_digit(8) == 0xDFD3
	# ~~~
	fun from_utf16_digit(pos: nullable Int): Int do
		if pos == null then pos = 0
		return to_hex(pos, 4)
	end

	# Encode `self` to percent (or URL) encoding
	#
	# ~~~
	# assert "aBc09-._~".to_percent_encoding == "aBc09-._~"
	# assert "%()< >".to_percent_encoding == "%25%28%29%3c%20%3e"
	# assert ".com/post?e=asdf&f=123".to_percent_encoding == ".com%2fpost%3fe%3dasdf%26f%3d123"
	# assert "éあいう".to_percent_encoding == "%c3%a9%e3%81%82%e3%81%84%e3%81%86"
	# ~~~
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
			else
				var bytes = c.to_s.bytes
				for b in bytes do buf.append "%{b.to_i.to_hex}"
			end
		end

		return buf.to_s
	end

	# Decode `self` from percent (or URL) encoding to a clear string
	#
	# Invalid '%' are not decoded.
	#
	# ~~~
	# assert "aBc09-._~".from_percent_encoding == "aBc09-._~"
	# assert "%25%28%29%3c%20%3e".from_percent_encoding == "%()< >"
	# assert ".com%2fpost%3fe%3dasdf%26f%3d123".from_percent_encoding == ".com/post?e=asdf&f=123"
	# assert "%25%28%29%3C%20%3E".from_percent_encoding == "%()< >"
	# assert "incomplete %".from_percent_encoding == "incomplete %"
	# assert "invalid % usage".from_percent_encoding == "invalid % usage"
	# assert "%c3%a9%e3%81%82%e3%81%84%e3%81%86".from_percent_encoding == "éあいう"
	# assert "%1 %A %C3%A9A9".from_percent_encoding == "%1 %A éA9"
	# ~~~
	fun from_percent_encoding: String
	do
		var len = byte_length
		var has_percent = false
		for c in chars do
			if c == '%' then
				len -= 2
				has_percent = true
			end
		end

		# If no transformation is needed, return self as a string
		if not has_percent then return to_s

		var buf = new CString(len)
		var i = 0
		var l = 0
		while i < length do
			var c = chars[i]
			if c == '%' then
				if i + 2 >= length then
					# What follows % has been cut off
					buf[l] = u'%'
				else
					i += 1
					var hex_s = substring(i, 2)
					if hex_s.is_hex then
						var hex_i = hex_s.to_hex
						buf[l] = hex_i
						i += 1
					else
						# What follows a % is not Hex
						buf[l] = u'%'
						i -= 1
					end
				end
			else buf[l] = c.code_point

			i += 1
			l += 1
		end

		return buf.to_s_unsafe(l, copy=false)
	end

	# Escape the characters `<`, `>`, `&`, `"`, `'` and `/` as HTML/XML entity references.
	#
	# ~~~
	# assert "a&b-<>\"x\"/'".html_escape      ==  "a&amp;b-&lt;&gt;&#34;x&#34;&#47;&#39;"
	# ~~~
	#
	# SEE: <https://www.owasp.org/index.php/XSS_%28Cross_Site_Scripting%29_Prevention_Cheat_Sheet#RULE_.231_-_HTML_Escape_Before_Inserting_Untrusted_Data_into_HTML_Element_Content>
	fun html_escape: String
	do
		var buf: nullable Buffer = null

		for i in [0..length[ do
			var c = chars[i]
			var sub = null
			if c == '&' then
				sub = "&amp;"
			else if c == '<' then
				sub = "&lt;"
			else if c == '>' then
				sub = "&gt;"
			else if c == '"' then
				sub = "&#34;"
			else if c == '\'' then
				sub = "&#39;"
			else if c == '/' then
				sub = "&#47;"
			else
				if buf != null then buf.add c
				continue
			end
			if buf == null then
				buf = new Buffer
				for j in [0..i[ do buf.add chars[j]
			end
			buf.append sub
		end

		if buf == null then return self.to_s
		return buf.to_s
	end

	# Equality of text
	# Two pieces of text are equals if thez have the same characters in the same order.
	#
	# ~~~
	# assert "hello" == "hello"
	# assert "hello" != "HELLO"
	# assert "hello" == "hel"+"lo"
	# ~~~
	#
	# Things that are not Text are not equal.
	#
	# ~~~
	# assert "9" != '9'
	# assert "9" != ['9']
	# assert "9" != 9
	#
	# assert "9".chars.first == '9'   # equality of Char
	# assert "9".chars       == ['9'] # equality of Sequence
	# assert "9".to_i        == 9     # equality of Int
	# ~~~
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
	# ~~~
	# assert "abc" < "xy"
	# assert "ABC" < "abc"
	# ~~~
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
	# ~~~
	# assert ">><<".escape_to_dot == "\\>\\>\\<\\<"
	# ~~~
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
				h = (h << 5) + h + char.code_point
			end

			hash_cache = h
		end
		return hash_cache.as(not null)
	end

	# Format `self` by replacing each `%n` with the `n`th item of `args`
	#
	# The character `%` followed by something other than a number are left as is.
	# To represent a `%` followed by a number, double the `%`, as in `%%7`.
	#
	# ~~~
	# assert "This %0 is a %1.".format("String", "formatted String") == "This String is a formatted String."
	# assert "Do not escape % nor %%1".format("unused") == "Do not escape % nor %1"
	# ~~~
	fun format(args: Object...): String do
		var s = new Array[Text]
		var curr_st = 0
		var i = 0
		while i < length do
			if self[i] == '%' then
				var fmt_st = i
				i += 1
				var ciph_st = i
				while i < length and self[i].is_numeric do
					i += 1
				end

				var ciph_len = i - ciph_st
				if ciph_len == 0 then
					# What follows '%' is not a number.
					s.push substring(curr_st, i - curr_st)
					if i < length and self[i] == '%' then
						# Skip the next `%`
						i += 1
					end
					curr_st = i
					continue
				end

				var arg_index = substring(ciph_st, ciph_len).to_i
				if arg_index >= args.length then continue

				s.push substring(curr_st, fmt_st - curr_st)
				s.push args[arg_index].to_s

				curr_st = i
				i -= 1
			end
			i += 1
		end
		s.push substring(curr_st, length - curr_st)
		return s.plain_to_s
	end

	# Return the Levenshtein distance between two strings
	#
	# ~~~
	# assert "abcd".levenshtein_distance("abcd") == 0
	# assert "".levenshtein_distance("abcd")     == 4
	# assert "abcd".levenshtein_distance("")     == 4
	# assert "abcd".levenshtein_distance("xyz")  == 4
	# assert "abcd".levenshtein_distance("xbdy") == 3
	# ~~~
	fun levenshtein_distance(other: String): Int
	do
		var slen = self.length
		var olen = other.length

		# fast cases
		if slen == 0 then return olen
		if olen == 0 then return slen
		if self == other then return 0

		# previous row of distances
		var v0 = new Array[Int].with_capacity(olen+1)

		# current row of distances
		var v1 = new Array[Int].with_capacity(olen+1)

		for j in [0..olen] do
			# prefix insert cost
			v0[j] = j
		end

		for i in [0..slen[ do

			# prefix delete cost
			v1[0] = i + 1

			for j in [0..olen[ do
				# delete cost
				var cost1 = v1[j] + 1
				# insert cost
				var cost2 = v0[j + 1] + 1
				# same char cost (+0)
				var cost3 = v0[j]
				# change cost
				if self[i] != other[j] then cost3 += 1
				# keep the min
				v1[j+1] = cost1.min(cost2).min(cost3)
			end

			# Switch columns:
			# * v1 become v0 in the next iteration
			# * old v0 is reused as the new v1
			var tmp = v1
			v1 = v0
			v0 = tmp
		end

		return v0[olen]
	end

	# Copies `n` bytes from `self` at `src_offset` into `dest` starting at `dest_offset`
	#
	# Basically a high-level synonym of CString::copy_to
	#
	# REQUIRE: `n` must be large enough to contain `len` bytes
	#
	# ~~~
	# var ns = new CString(8)
	# "Text is String".copy_to_native(ns, 8, 2, 0)
	# assert ns.to_s_with_length(8) == "xt is St"
	# ~~~
	fun copy_to_native(dest: CString, n, src_offset, dest_offset: Int) do
		var mypos = src_offset
		var itspos = dest_offset
		while n > 0 do
			dest[itspos] = self.bytes[mypos]
			itspos += 1
			mypos += 1
			n -= 1
		end
	end

	# Packs the content of a string in packs of `ln` chars.
	# This variant ensures that only the last element might be smaller than `ln`
	#
	# ~~~
	# var s = "abcdefghijklmnopqrstuvwxyz"
	# assert s.pack_l(4) == ["abcd","efgh","ijkl","mnop","qrst","uvwx","yz"]
	# ~~~
	fun pack_l(ln: Int): Array[Text] do
		var st = 0
		var retarr = new Array[Text].with_capacity(length / ln + length % ln)
		while st < length do
			retarr.add(substring(st, ln))
			st += ln
		end
		return retarr
	end

	# Packs the content of a string in packs of `ln` chars.
	# This variant ensures that only the first element might be smaller than `ln`
	#
	# ~~~
	# var s = "abcdefghijklmnopqrstuvwxyz"
	# assert s.pack_r(4) == ["ab","cdef","ghij","klmn","opqr","stuv","wxyz"]
	# ~~~
	fun pack_r(ln: Int): Array[Text] do
		var st = length
		var retarr = new Array[Text].with_capacity(length / ln + length % ln)
		while st >= 0 do
			retarr.add(substring(st - ln, ln))
			st -= ln
		end
		return retarr.reversed
	end

	# Concatenates self `i` times
	#
	# ~~~
	# assert "abc" * 4 == "abcabcabcabc"
	# assert "abc" * 1 == "abc"
	# assert "abc" * 0 == ""
	# var b = new Buffer
	# b.append("天地")
	# b = b * 4
	# assert b == "天地天地天地天地"
	# ~~~
	fun *(i: Int): SELFTYPE is abstract

	# Insert `s` at `pos`.
	#
	# ~~~
	# assert "helloworld".insert_at(" ", 5)	== "hello world"
	# var b = new Buffer
	# b.append("Hello世界")
	# b = b.insert_at(" beautiful ", 5)
	# assert b == "Hello beautiful 世界"
	# ~~~
	fun insert_at(s: String, pos: Int): SELFTYPE is abstract

	# Returns a reversed version of self
	#
	# ~~~
	# assert "hello".reversed  == "olleh"
	# assert "bob".reversed    == "bob"
	# assert "".reversed       == ""
	# ~~~
	fun reversed: SELFTYPE is abstract

	# A upper case version of `self`
	#
	# ~~~
	# assert "Hello World!".to_upper     == "HELLO WORLD!"
	# ~~~
	fun to_upper: SELFTYPE is abstract

	# A lower case version of `self`
	#
	# ~~~
	# assert "Hello World!".to_lower     == "hello world!"
	# ~~~
	fun to_lower : SELFTYPE is abstract

	# Takes a camel case `self` and converts it to snake case
	#
	# ~~~
	# assert "randomMethodId".to_snake_case == "random_method_id"
	# ~~~
	#
	# The rules are the following:
	#
	# An uppercase is always converted to a lowercase
	#
	# ~~~
	# assert "HELLO_WORLD".to_snake_case == "hello_world"
	# ~~~
	#
	# An uppercase that follows a lowercase is prefixed with an underscore
	#
	# ~~~
	# assert "HelloTheWORLD".to_snake_case == "hello_the_world"
	# ~~~
	#
	# An uppercase that follows an uppercase and is followed by a lowercase, is prefixed with an underscore
	#
	# ~~~
	# assert "HelloTHEWorld".to_snake_case == "hello_the_world"
	# ~~~
	#
	# All other characters are kept as is; `self` does not need to be a proper CamelCased string.
	#
	# ~~~
	# assert "=-_H3ll0Th3W0rld_-=".to_snake_case == "=-_h3ll0th3w0rld_-="
	# ~~~
	fun to_snake_case: SELFTYPE is abstract

	# Takes a snake case `self` and converts it to camel case
	#
	# ~~~
	# assert "random_method_id".to_camel_case == "randomMethodId"
	# ~~~
	#
	# If the identifier is prefixed by an underscore, the underscore is ignored
	#
	# ~~~
	# assert "_private_field".to_camel_case == "_privateField"
	# ~~~
	#
	# If `self` is upper, it is returned unchanged
	#
	# ~~~
	# assert "RANDOM_ID".to_camel_case == "RANDOM_ID"
	# ~~~
	#
	# If there are several consecutive underscores, they are considered as a single one
	#
	# ~~~
	# assert "random__method_id".to_camel_case == "randomMethodId"
	# ~~~
	fun to_camel_case: SELFTYPE is abstract

	# Returns a capitalized `self`
	#
	# Letters that follow a letter are lowercased
	# Letters that follow a non-letter are upcased.
	#
	# If `keep_upper = true`, already uppercase letters are not lowercased.
	#
	# SEE : `Char::is_letter` for the definition of letter.
	#
	# ~~~
	# assert "jAVASCRIPT".capitalized == "Javascript"
	# assert "i am root".capitalized == "I Am Root"
	# assert "ab_c -ab0c ab\nc".capitalized == "Ab_C -Ab0C Ab\nC"
	# assert "preserve my ACRONYMS".capitalized(keep_upper=true) == "Preserve My ACRONYMS"
	# ~~~
	fun capitalized(keep_upper: nullable Bool): SELFTYPE do
		if length == 0 then return self

		var buf = new Buffer.with_cap(length)
		buf.capitalize(keep_upper=keep_upper, src=self)
		return buf.to_s
	end
end

# All kinds of array-based text representations.
abstract class FlatText
	super Text

	# Underlying CString (`char*`)
	#
	# Warning: Might be void in some subclasses, be sure to check
	# if set before using it.
	var items: CString is noinit

	# Returns a char* starting at position `first_byte`
	#
	# WARNING: If you choose to use this service, be careful of the following.
	#
	# Strings and CString are *ideally* always allocated through a Garbage Collector.
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
	fun fast_cstring: CString is abstract

	redef var length = 0

	redef var byte_length = 0

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
# views on the chars of any Text
private abstract class StringCharView
	super SequenceRead[Char]

	type SELFTYPE: Text

	var target: SELFTYPE

	redef fun is_empty do return target.is_empty

	redef fun length do return target.length

	redef fun iterator: IndexedIterator[Char] do return self.iterator_from(0)

	redef fun reverse_iterator do return self.reverse_iterator_from(self.length - 1)
end

# Abstract class for the SequenceRead compatible
# views on the bytes of any Text
private abstract class StringByteView
	super SequenceRead[Int]

	type SELFTYPE: Text

	var target: SELFTYPE

	redef fun is_empty do return target.is_empty

	redef fun length do return target.byte_length

	redef fun iterator do return self.iterator_from(0)

	redef fun reverse_iterator do return self.reverse_iterator_from(target.byte_length - 1)
end

# Immutable sequence of characters.
#
# String objects may be created using literals.
#
# ~~~
# assert "Hello World!" isa String
# ~~~
abstract class String
	super Text

	redef type SELFTYPE: String is fixed

	redef fun to_s do return self

	redef fun clone do return self

	redef fun to_buffer do return new Buffer.from_text(self)

	redef fun to_camel_case do
		if self.is_upper then return self

		var new_str = new Buffer.with_cap(length)
		new_str.append self
		new_str.camel_case
		return new_str.to_s
	end

	redef fun to_snake_case do
		if self.is_lower then return self

		var new_str = new Buffer.with_cap(self.length)
		new_str.append self
		new_str.snake_case
		return new_str.to_s
	end
end

# A mutable sequence of characters.
abstract class Buffer
	super Text

	# Returns an arbitrary subclass of `Buffer` with default parameters
	new is abstract

	# Returns an instance of a subclass of `Buffer` with `i` base capacity
	new with_cap(i: Int) is abstract

	# Returns an instance of a subclass of `Buffer` with `t` as content
	new from_text(t: Text) do
		var ret = new Buffer.with_cap(t.byte_length)
		ret.append t
		return ret
	end

	redef type SELFTYPE: Buffer is fixed

	# Copy-On-Write flag
	#
	# If the `Buffer` was to_s'd, the next in-place altering
	# operation will cause the current `Buffer` to be re-allocated.
	#
	# The flag will then be set at `false`.
	protected var written = false

	# Modifies the char contained at pos `index`
	fun []=(index: Int, item: Char) is abstract

	redef fun to_buffer do return clone

	# ~~~
	# var b = new Buffer
	# b.append("Buffer!")
	# var c = b.clone
	# assert b == c
	# ~~~
	redef fun clone do
		var cln = new Buffer.with_cap(byte_length)
		cln.append self
		return cln
	end

	# Adds a char `c` at the end of self
	fun add(c: Char) is abstract

	# Clears the buffer
	#
	# ~~~
	# var b = new Buffer
	# b.append "hello"
	# assert not b.is_empty
	# b.clear
	# assert b.is_empty
	# ~~~
	fun clear is abstract

	# Enlarges the subsequent array containing the chars of self
	fun enlarge(cap: Int) is abstract

	# Adds the content of text `s` at the end of self
	#
	# ~~~
	# var b = new Buffer
	# b.append "hello"
	# b.append "world"
	# assert b == "helloworld"
	# ~~~
	fun append(s: Text) is abstract

	# `self` is appended in such a way that `self` is repeated `r` times
	#
	# ~~~
	# var b = new Buffer
	# b.append "hello"
	# b.times 3
	# assert b == "hellohellohello"
	# ~~~
	fun times(r: Int) is abstract

	# Reverses itself in-place
	#
	# ~~~
	# var b = new Buffer
	# b.append("hello")
	# b.reverse
	# assert b == "olleh"
	# ~~~
	fun reverse is abstract

	# Changes each lower-case char in `self` by its upper-case variant
	#
	# ~~~
	# var b = new Buffer
	# b.append("Hello World!")
	# b.upper
	# assert b == "HELLO WORLD!"
	# ~~~
	fun upper is abstract

	# Changes each upper-case char in `self` by its lower-case variant
	#
	# ~~~
	# var b = new Buffer
	# b.append("Hello World!")
	# b.lower
	# assert b == "hello world!"
	# ~~~
	fun lower is abstract

	# Capitalizes each word in `self`
	#
	# Letters that follow a letter are lowercased
	# Letters that follow a non-letter are upcased.
	#
	# If `keep_upper = true`, uppercase letters are not lowercased.
	#
	# When `src` is specified, this method reads from `src` instead of `self`
	# but it still writes the result to the beginning of `self`.
	# This requires `self` to have the capacity to receive all of the
	# capitalized content of `src`.
	#
	# SEE: `Char::is_letter` for the definition of a letter.
	#
	# ~~~
	# var b = new FlatBuffer.from("jAVAsCriPt")
	# b.capitalize
	# assert b == "Javascript"
	# b = new FlatBuffer.from("i am root")
	# b.capitalize
	# assert b == "I Am Root"
	# b = new FlatBuffer.from("ab_c -ab0c ab\nc")
	# b.capitalize
	# assert b == "Ab_C -Ab0C Ab\nC"
	#
	# b = new FlatBuffer.from("12345")
	# b.capitalize(src="foo")
	# assert b == "Foo45"
	#
	# b = new FlatBuffer.from("preserve my ACRONYMS")
	# b.capitalize(keep_upper=true)
	# assert b == "Preserve My ACRONYMS"
	# ~~~
	fun capitalize(keep_upper: nullable Bool, src: nullable Text) do
		src = src or else self
		var length = src.length
		if length == 0 then return
		keep_upper = keep_upper or else false

		var c = src[0].to_upper
		self[0] = c
		var prev = c
		for i in [1 .. length[ do
			prev = c
			c = src[i]
			if prev.is_letter then
				if keep_upper then
					self[i] = c
				else
					self[i] = c.to_lower
				end
			else
				self[i] = c.to_upper
			end
		end
	end

	# In Buffers, the internal sequence of character is mutable
	# Thus, `chars` can be used to modify the buffer.
	redef fun chars: Sequence[Char] is abstract

	# Appends `length` chars from `s` starting at index `from`
	#
	# ~~~
	# var b = new Buffer
	# b.append_substring("abcde", 1, 2)
	# assert b == "bc"
	# b.append_substring("vwxyz", 2, 3)
	# assert b == "bcxyz"
	# b.append_substring("ABCDE", 4, 300)
	# assert b == "bcxyzE"
	# b.append_substring("VWXYZ", 400, 1)
	# assert b == "bcxyzE"
	# ~~~
	fun append_substring(s: Text, from, length: Int) do
		if from < 0 then
			length += from
			from = 0
		end
		var ln = s.length
		if (length + from) > ln then length = ln - from
		if length <= 0 then return
		append_substring_impl(s, from, length)
	end

	# Unsafe version of `append_substring` for performance
	#
	# NOTE: Use only if sure about `from` and `length`, no checks
	# or bound recalculation is done
	fun append_substring_impl(s: Text, from, length: Int) do
		var max = from + length
		for i in [from .. max[ do add s[i]
	end

	redef fun *(i) do
		var ret = new Buffer.with_cap(byte_length * i)
		for its in [0 .. i[ do ret.append self
		return ret
	end

	redef fun insert_at(s, pos) do
		var obuf = new Buffer.with_cap(byte_length + s.byte_length)
		obuf.append_substring(self, 0, pos)
		obuf.append s
		obuf.append_substring(self, pos, length - pos)
		return obuf
	end

	# Inserts `s` at position `pos`
	#
	# ~~~
	# var b = new Buffer
	# b.append "美しい世界"
	# b.insert(" nit ", 3)
	# assert b == "美しい nit 世界"
	# ~~~
	fun insert(s: Text, pos: Int) is abstract

	# Inserts `c` at position `pos`
	#
	# ~~~
	# var b = new Buffer
	# b.append "美しい世界"
	# b.insert_char(' ', 3)
	# assert b == "美しい 世界"
	# ~~~
	fun insert_char(c: Char, pos: Int) is abstract

	# Removes a substring from `self` at position `pos`
	#
	# NOTE: `length` defaults to 1, expressed in chars
	#
	# ~~~
	# var b = new Buffer
	# b.append("美しい 世界")
	# b.remove_at(3)
	# assert b == "美しい世界"
	# b.remove_at(1, 2)
	# assert b == "美世界"
	# ~~~
	fun remove_at(pos: Int, length: nullable Int) is abstract

	redef fun reversed do
		var ret = clone
		ret.reverse
		return ret
	end

	redef fun to_upper do
		var ret = clone
		ret.upper
		return ret
	end

	redef fun to_lower do
		var ret = clone
		ret.lower
		return ret
	end

	redef fun to_snake_case do
		var ret = clone
		ret.snake_case
		return ret
	end

	# Takes a camel case `self` and converts it to snake case
	#
	# SEE: `to_snake_case`
	fun snake_case do
		if self.is_lower then return
		var prev_is_lower = false
		var prev_is_upper = false

		var i = 0
		while i < length do
			var char = chars[i]
			if char.is_lower then
				prev_is_lower = true
				prev_is_upper = false
			else if char.is_upper then
				if prev_is_lower then
					insert_char('_', i)
					i += 1
				else if prev_is_upper and i + 1 < length and self[i + 1].is_lower then
					insert_char('_', i)
					i += 1
				end
				self[i] = char.to_lower
				prev_is_lower = false
				prev_is_upper = true
			else
				prev_is_lower = false
				prev_is_upper = false
			end
			i += 1
		end
	end

	redef fun to_camel_case
	do
		var new_str = clone
		new_str.camel_case
		return new_str
	end

	# Takes a snake case `self` and converts it to camel case
	#
	# SEE: `to_camel_case`
	fun camel_case do
		if is_upper then return

		var underscore_count = 0

		var pos = 1
		while pos < length do
			var char = self[pos]
			if char == '_' then
				underscore_count += 1
			else if underscore_count > 0 then
				pos -= underscore_count
				remove_at(pos, underscore_count)
				self[pos] = char.to_upper
				underscore_count = 0
			end
			pos += 1
		end
		if underscore_count > 0 then remove_at(pos - underscore_count - 1, underscore_count)
	end

	redef fun capitalized(keep_upper) do
		if length == 0 then return self

		var buf = new Buffer.with_cap(byte_length)
		buf.capitalize(keep_upper=keep_upper, src=self)
		return buf
	end
end

# View for chars on Buffer objects, extends Sequence
# for mutation operations
private abstract class BufferCharView
	super StringCharView
	super Sequence[Char]

	redef type SELFTYPE: Buffer

end

# View for bytes on Buffer objects, extends Sequence
# for mutation operations
private abstract class BufferByteView
	super StringByteView

	redef type SELFTYPE: Buffer
end

redef class Object
	# User readable representation of `self`.
	fun to_s: String do return inspect

	# The class name of the object in CString format.
	private fun native_class_name: CString is intern

	# The class name of the object.
	#
	# ~~~
	# assert 5.class_name == "Int"
	# ~~~
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
	# ~~~
	# assert true.to_s         == "true"
	# assert false.to_s        == "false"
	# ~~~
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
	# C function to calculate the length of the `CString` to receive `self`
	private fun byte_to_s_len: Int `{
		return snprintf(NULL, 0, "0x%02x", self);
	`}

	# C function to convert an nit Int to a CString (char*)
	private fun native_byte_to_s(nstr: CString, strlen: Int) `{
		snprintf(nstr, strlen, "0x%02x", self);
	`}

	# Displayable byte in its hexadecimal form (0x..)
	#
	# ~~~
	# assert 1.to_b.to_s       == "0x01"
	# assert (-123).to_b.to_s  == "0x85"
	# ~~~
	redef fun to_s do
		var nslen = byte_to_s_len
		var ns = new CString(nslen + 1)
		ns[nslen] = 0
		native_byte_to_s(ns, nslen + 1)
		return ns.to_s_unsafe(nslen, copy=false, clean=false)
	end
end

redef class Int

	# Wrapper of strerror C function
	private fun strerror_ext: CString `{ return strerror((int)self); `}

	# Returns a string describing error number
	fun strerror: String do return strerror_ext.to_s

	# Fill `s` with the digits in base `base` of `self` (and with the '-' sign if negative).
	# assume < to_c max const of char
	private fun fill_buffer(s: Buffer, base: Int)
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

	# C function to calculate the length of the `CString` to receive `self`
	private fun int_to_s_len: Int `{
		return snprintf(NULL, 0, "%ld", self);
	`}

	# C function to convert an nit Int to a CString (char*)
	private fun native_int_to_s(nstr: CString, strlen: Int) `{
		snprintf(nstr, strlen, "%ld", self);
	`}

	# String representation of `self` in the given `base`
	#
	# ~~~
	# assert 15.to_base(10) == "15"
	# assert 15.to_base(16) == "f"
	# assert 15.to_base(2) == "1111"
	# assert (-10).to_base(3) == "-101"
	# ~~~
	fun to_base(base: Int): String
	do
		var l = digit_count(base)
		var s = new Buffer
		s.enlarge(l)
		for x in [0..l[ do s.add(' ')
		fill_buffer(s, base)
		return s.to_s
	end


	# return displayable int in hexadecimal
	#
	# ~~~
	# assert 1.to_hex  == "1"
	# assert (-255).to_hex  == "-ff"
	# ~~~
	fun to_hex: String do return to_base(16)
end

redef class Float
	# Pretty representation of `self`, with decimals as needed from 1 to a maximum of 3
	#
	# ~~~
	# assert 12.34.to_s       == "12.34"
	# assert (-0120.030).to_s == "-120.03"
	# ~~~
	#
	# see `to_precision` for a custom precision.
	redef fun to_s do
		var str = to_precision(3)
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

	# Return the representation of `self`, with scientific notation
	#
	# Adpat the number of decimals as needed from 1 to a maximum of 6
	# ~~~
	# assert 12.34.to_se       == "1.234000e+01"
	# assert 123.45.to_se.to_f.to_se  == "1.234500e+02"
	# assert 0.001234.to_se  == "1.234000e-03"
	# assert (inf).to_se == "inf"
	# assert (nan).to_se == "nan"
	# ~~~
	fun to_sci: String
	do
		if is_nan then return "nan"

		var isinf = self.is_inf
		if isinf == 1 then
			return "inf"
		else if isinf == -1 then
			return  "-inf"
		end

		var format = "%e".to_cstring
		var size = to_precision_size_with_format(format)
		var cstr = new CString(size + 1)
		to_precision_fill_with_format(format, size + 1, cstr)
		return cstr.to_s_unsafe(byte_length = size, copy = false)
	end

	# `String` representation of `self` with the given number of `decimals`
	#
	# ~~~
	# assert 12.345.to_precision(0)    == "12"
	# assert 12.345.to_precision(3)    == "12.345"
	# assert (-12.345).to_precision(3) == "-12.345"
	# assert (-0.123).to_precision(3)  == "-0.123"
	# assert 0.999.to_precision(2)     == "1.00"
	# assert 0.999.to_precision(4)     == "0.9990"
	# ~~~
	fun to_precision(decimals: Int): String
	do
		if is_nan then return "nan"

		var isinf = self.is_inf
		if isinf == 1 then
			return "inf"
		else if isinf == -1 then
			return  "-inf"
		end

		var size = to_precision_size(decimals)
		var cstr = new CString(size + 1)
		to_precision_fill(decimals, size + 1, cstr)
		return cstr.to_s_unsafe(byte_length = size, copy = false)
	end

	# Returns the hexadecimal (`String`) representation of `self` in exponential notation
	#
	# ~~~
	# assert 12.345.to_hexa_exponential_notation    == "0x1.8b0a3d70a3d71p+3"
	# assert 12.345.to_hexa_exponential_notation.to_f == 12.345
	# ~~~
	fun to_hexa_exponential_notation: String
	do
		var size = to_precision_size_hexa
		var cstr = new CString(size + 1)
		to_precision_fill_hexa(size + 1, cstr)
		return cstr.to_s_unsafe(byte_length = size, copy = false)
	end

	# Required string length to hold `self` with `nb` decimals
	#
	# The length does not include the terminating null byte.
	private fun to_precision_size(nb: Int): Int `{
		return snprintf(NULL, 0, "%.*f", (int)nb, self);
	`}

	# Fill `cstr` with `self` and `nb` decimals
	private fun to_precision_fill(nb, size: Int, cstr: CString) `{
		snprintf(cstr, size, "%.*f", (int)nb, self);
	`}

	# The lenght of `self` in exponential hexadecimal notation
	private fun to_precision_size_hexa: Int`{
		return snprintf(NULL, 0, "%a", self);
	`}

	# Fill `cstr` with `self` in exponential hexadecimal notation
	private fun to_precision_fill_hexa(size: Int, cstr: CString) `{
		snprintf(cstr, size, "%a", self);
	`}

	# The lenght of `self` in the specific given c `format`
	private fun to_precision_size_with_format(format: CString): Int`{
		return snprintf(NULL, 0, format, self);
	`}

	# Fill `cstr` with `self` in the specific given c `format`
	private fun to_precision_fill_with_format(format: CString, size: Int, cstr: CString) `{
		snprintf(cstr, size, format, self);
	`}
end

redef class Char

	# Returns a sequence with the UTF-8 bytes of `self`
	#
	# ~~~
	# assert 'a'.bytes == [0x61]
	# assert 'ま'.bytes == [0xE3, 0x81, 0xBE]
	# ~~~
	fun bytes: SequenceRead[Int] do return to_s.bytes

	# Is `self` an UTF-16 surrogate pair ?
	fun is_surrogate: Bool do
		var cp = code_point
		return cp >= 0xD800 and cp <= 0xDFFF
	end

	# Is `self` a UTF-16 high surrogate ?
	fun is_hi_surrogate: Bool do
		var cp = code_point
		return cp >= 0xD800 and cp <= 0xDBFF
	end

	# Is `self` a UTF-16 low surrogate ?
	fun is_lo_surrogate: Bool do
		var cp = code_point
		return cp >= 0xDC00 and cp <= 0xDFFF
	end

	# Length of `self` in a UTF-8 String
	fun u8char_len: Int do
		var c = self.code_point
		if c < 0x80 then return 1
		if c <= 0x7FF then return 2
		if c <= 0xFFFF then return 3
		if c <= 0x10FFFF then return 4
		# Bad character format
		return 1
	end

	# ~~~
	# assert 'x'.to_s    == "x"
	# ~~~
	redef fun to_s do
		var ln = u8char_len
		var ns = new CString(ln + 1)
		u8char_tos(ns, ln)
		return ns.to_s_unsafe(ln, copy=false, clean=false)
	end

	# Returns `self` escaped to UTF-16
	#
	# i.e. Represents `self`.`code_point` using UTF-16 codets escaped
	# with a `\u`
	#
	# ~~~
	# assert 'A'.escape_to_utf16 == "\\u0041"
	# assert 'è'.escape_to_utf16 == "\\u00e8"
	# assert 'あ'.escape_to_utf16 == "\\u3042"
	# assert '𐏓'.escape_to_utf16 == "\\ud800\\udfd3"
	# ~~~
	fun escape_to_utf16: String do
		var cp = code_point
		var buf: Buffer
		if cp < 0xD800 or (cp >= 0xE000 and cp <= 0xFFFF) then
			buf = new Buffer.with_cap(6)
			buf.append("\\u0000")
			var hx = cp.to_hex
			var outid = 5
			for i in hx.chars.reverse_iterator do
				buf[outid] = i
				outid -= 1
			end
		else
			buf = new Buffer.with_cap(12)
			buf.append("\\u0000\\u0000")
			var lo = (((cp - 0x10000) & 0x3FF) + 0xDC00).to_hex
			var hi = ((((cp - 0x10000) & 0xFFC00) >> 10) + 0xD800).to_hex
			var out = 2
			for i in hi do
				buf[out] = i
				out += 1
			end
			out = 8
			for i in lo do
				buf[out] = i
				out += 1
			end
		end
		return buf.to_s
	end

	private fun u8char_tos(r: CString, len: Int) `{
		r[len] = '\0';
		switch(len){
			case 1:
				r[0] = self;
				break;
			case 2:
				r[0] = 0xC0 | ((self & 0x7C0) >> 6);
				r[1] = 0x80 | (self & 0x3F);
				break;
			case 3:
				r[0] = 0xE0 | ((self & 0xF000) >> 12);
				r[1] = 0x80 | ((self & 0xFC0) >> 6);
				r[2] = 0x80 | (self & 0x3F);
				break;
			case 4:
				r[0] = 0xF0 | ((self & 0x1C0000) >> 18);
				r[1] = 0x80 | ((self & 0x3F000) >> 12);
				r[2] = 0x80 | ((self & 0xFC0) >> 6);
				r[3] = 0x80 | (self & 0x3F);
				break;
		}
	`}

	# Returns true if the char is a numerical digit
	#
	# ~~~
	# assert '0'.is_numeric
	# assert '9'.is_numeric
	# assert not 'a'.is_numeric
	# assert not '?'.is_numeric
	# ~~~
	#
	# FIXME: Works on ASCII-range only
	fun is_numeric: Bool
	do
		return self >= '0' and self <= '9'
	end

	# Returns true if the char is an alpha digit
	#
	# ~~~
	# assert 'a'.is_alpha
	# assert 'Z'.is_alpha
	# assert not '0'.is_alpha
	# assert not '?'.is_alpha
	# ~~~
	#
	# FIXME: Works on ASCII-range only
	fun is_alpha: Bool
	do
		return (self >= 'a' and self <= 'z') or (self >= 'A' and self <= 'Z')
	end

	# Is `self` an hexadecimal digit ?
	#
	# ~~~
	# assert 'A'.is_hexdigit
	# assert not 'G'.is_hexdigit
	# assert 'a'.is_hexdigit
	# assert not 'g'.is_hexdigit
	# assert '5'.is_hexdigit
	# ~~~
	fun is_hexdigit: Bool do return (self >= '0' and self <= '9') or (self >= 'A' and self <= 'F') or
					(self >= 'a' and self <= 'f')

	# Returns true if the char is an alpha or a numeric digit
	#
	# ~~~
	# assert 'a'.is_alphanumeric
	# assert 'Z'.is_alphanumeric
	# assert '0'.is_alphanumeric
	# assert '9'.is_alphanumeric
	# assert not '?'.is_alphanumeric
	# ~~~
	#
	# FIXME: Works on ASCII-range only
	fun is_alphanumeric: Bool
	do
		return self.is_numeric or self.is_alpha
	end

	# Returns `self` to its int value
	#
	# REQUIRE: `is_hexdigit`
	fun from_hex: Int do
		if self >= '0' and self <= '9' then return code_point - 0x30
		if self >= 'A' and self <= 'F' then return code_point - 0x37
		if self >= 'a' and self <= 'f' then return code_point - 0x57
		# Happens if self is not a hexdigit
		assert self.is_hexdigit
		# To make flow analysis happy
		abort
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
	#
	# ~~~
	# assert [1,2,3].plain_to_s == "123"
	# assert [11..13].plain_to_s  == "111213"
	# assert (new Array[Int]).plain_to_s == "" # empty collection
	# ~~~
	fun plain_to_s: String
	do
		var s = new Buffer
		for e in self do if e != null then s.append(e.to_s)
		return s.to_s
	end

	# Concatenate and separate each elements with `separator`.
	#
	# Only concatenate if `separator == null`.
	#
	# ~~~
	# assert [1, 2, 3].join(":")    == "1:2:3"
	# assert [1..3].join(":")       == "1:2:3"
	# assert [1..3].join            == "123"
	# ~~~
	#
	# if `last_separator` is given, then it is used to separate the last element.
	#
	# ~~~
	# assert [1, 2, 3, 4].join(", ", " and ")    == "1, 2, 3 and 4"
	# ~~~
	fun join(separator: nullable Text, last_separator: nullable Text): String
	do
		if is_empty then return ""

		var s = new Buffer # Result

		# Concat first item
		var i = iterator
		var e = i.item
		if e != null then s.append(e.to_s)

		if last_separator == null then last_separator = separator

		# Concat other items
		i.next
		while i.is_ok do
			e = i.item
			i.next
			if i.is_ok then
				if separator != null then s.append(separator)
			else
				if last_separator != null then s.append(last_separator)
			end
			if e != null then s.append(e.to_s)
		end
		return s.to_s
	end
end

redef class Map[K,V]
	# Concatenate couples of key value.
	# Key and value are separated by `couple_sep`.
	# Couples are separated by `sep`.
	#
	# ~~~
	# var m = new HashMap[Int, String]
	# m[1] = "one"
	# m[10] = "ten"
	# assert m.join("; ", "=") == "1=one; 10=ten"
	# ~~~
	fun join(sep, couple_sep: String): String is abstract
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
	private fun native_argv(i: Int): CString is intern
end

# Comparator that efficienlty use `to_s` to compare things
#
# The comparaison call `to_s` on object and use the result to order things.
#
# ~~~
# var a = [1, 2, 3, 10, 20]
# (new CachedAlphaComparator).sort(a)
# assert a == [1, 10, 2, 20, 3]
# ~~~
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
	redef fun compare(a, b) do
		if a == b then return 0
		if a == null then return -1
		if b == null then return 1
		return a.to_s <=> b.to_s
	end
end

# Stateless comparator that naively use `to_s` to compare things.
#
# Note: the result of `to_s` is not cached, thus can be invoked a lot
# on a single instace. See `CachedAlphaComparator` as an alternative.
#
# ~~~
# var a = [1, 2, 3, 10, 20]
# alpha_comparator.sort(a)
# assert a == [1, 10, 2, 20, 3]
# ~~~
fun alpha_comparator: Comparator do return once new AlphaComparator

# The arguments of the program as given by the OS
fun args: Sequence[String]
do
	return sys.program_args
end

redef class CString

	# Get a `String` from the data at `self` (with unsafe options)
	#
	# The default behavior is the safest and equivalent to `to_s`.
	#
	# Options:
	#
	# * Set `byte_length` to the number of bytes to use as data.
	#   Otherwise, this method searches for a terminating null byte.
	#
	# * Set `char_length` to the number of Unicode character in the string.
	#   Otherwise, the data is read to count the characters.
	#   Ignored if `clean == true`.
	#
	# * If `copy == true`, the default, copies the data at `self` in the
	#   Nit GC allocated memory. Otherwise, the return may still point to
	#   the data at `self`.
	#
	# * If `clean == true`, the default, the string is cleaned of invalid UTF-8
	#   characters. If cleaning is necessary, the data is copied into Nit GC
	#   managed memory, whether or not `copy == true`.
	#   Don't clean only when the data has already been verified as valid UTF-8,
	#   other library services rely on UTF-8 compliant characters.
	fun to_s_unsafe(byte_length, char_length: nullable Int, copy, clean: nullable Bool): String is abstract

	# Retro-compatibility service use by execution engines
	#
	# TODO remove this method at the next c_src regen.
	private fun to_s_full(byte_length, char_length: Int): String do return to_s_unsafe(byte_length, char_length, false, false)

	# Copies the content of `src` to `self`
	#
	# NOTE: `self` must be large enough to contain `self.byte_length` bytes
	fun fill_from(src: Text) do src.copy_to_native(self, src.byte_length, 0, 0)
end

redef class NativeArray[E]
	# Join all the elements using `to_s`
	#
	# REQUIRE: `self isa NativeArray[String]`
	# REQUIRE: all elements are initialized
	fun native_to_s: String is abstract
end
