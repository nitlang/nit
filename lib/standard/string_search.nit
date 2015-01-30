# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2005-2008 Jean Privat <jean@pryen.org>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Basic string search, match and replace.
module string_search

import string

# Patterns are abstract string motifs (include `String` and `Char`).
interface Pattern
	# Search `self` into `s` from a certain position.
	# Return the position of the first character of the matching section.
	# Return -1 if not found.
	#
	#     assert 'l'.search_index_in("hello world", 0)  == 2
	#     assert 'l'.search_index_in("hello world", 3)  == 3
	#     assert 'z'.search_index_in("hello world", 0)  == -1
	#
	# This method is usually faster than `search_in` if what is
	# required is only the index.
	# Note: in most implementation, `search_in` is implemented with this method.
	protected fun search_index_in(s: Text, from: Int): Int is abstract

	# Search `self` into `s` from a certain position.
	# Return null if not found.
	#
	#     assert 'l'.search_in("hello world", 0).from  == 2
	#     assert 'l'.search_in("hello world", 3).from  == 3
	#     assert 'z'.search_in("hello world", 0)       == null
	#
	# If only the index of the first character if required, see `search_index_in`.
	#
	# Note: Is used by `String::search`, `String::search_from`, and others.
	protected fun search_in(s: Text, from: Int): nullable Match is abstract

	# Search all `self` occurrences into `s`.
	#
	#     assert 'l'.search_all_in("hello world").length  == 3
	#     assert 'z'.search_all_in("hello world").length  == 0
	#
	# Note: Is used by `String::search_all`.
	protected fun search_all_in(s: Text): Array[Match]
	do
		var res = new Array[Match] # Result
		var match = search_in(s, 0)
		while match != null do
			res.add(match)
			match = search_in(s, match.after)
		end
		return res
	end

	# Split `s` using `self` is separator.
	#
	# Returns an array of matches that are between each occurence of `self`.
	# If self is not present, an array with a single match on `s` is retunred.
	#
	#     assert 'l'.split_in("hello world").join("|")  == "he||o wor|d"
	#     assert 'z'.split_in("hello world").join("|")  == "hello world"
	#
	# Note: is used by `String::split`
	protected fun split_in(s: Text): Array[Match]
	do
		var res = new Array[Match] # Result
		var i = 0 # Cursor
		var match = search_in(s, 0)
		while match != null do
			# Compute the splited part length
			var len = match.from - i
			res.add(new Match(s.to_s, i, len))
			i = match.after
			match = search_in(s, i)
		end
		# Add the last part
		res.add(new Match(s.to_s, i, s.length - i))
		return res
	end

	# Is `self` in `s`?
	protected fun is_in(s: Text): Bool do return search_index_in(s, 0) != -1
end

# BM_Pattern are pre-compiled string motif for the Boyer-Moore algorithm.
# (cf. A Fast String Searching Algorithm, with R.S. Boyer.  Communications
# of the Association for Computing Machinery, 20(10), 1977, pp. 762-772.)
# http://www.cs.utexas.edu/users/moore/best-ideas/string-searching/index.html
#
#     var pat = new BM_Pattern("hello")
#     assert "I say hello to the world!".search(pat).from  == 6
#     assert "I say goodbye to the world!".search(pat)     == null
class BM_Pattern
	super Pattern

	redef fun to_s do return _motif

	# boyer-moore search gives the position of the first occurrence of a pattern starting at position `from`
	redef fun search_index_in(s, from)
	do
		assert from >= 0
		var n = s.length
		var m = _length

		var j = from
		while j < n - m + 1 do
			var i = m - 1 # Cursor in the pattern
			while i >= 0 and _motif.chars[i] == s.chars[i + j] do i -= 1
			if i < 0 then
				return j
			else
				var gs = _gs[i] # Good shift
				var bc = bc(s.chars[i+j]) - m + 1 + i # Bad char
				# Both are true, do move to the best
				if gs > bc then
					j += gs
				else
					j += bc
				end
			end
		end
		return -1 # found nothing
	end

	# boyer-moore search. Return null if not found
	redef fun search_in(s, from)
	do
		var to = search_index_in(s, from)
		if to < 0 then
			return null
		else
			return new Match(s.to_s, to, _length)
		end
	end

	init
	do
		_length = _motif.length
		_gs = new Array[Int].with_capacity(_length)
		compute_gs
		compute_bc
	end

	# searched motif
	private var motif: String

	# length of the motif
	private var length: Int is noinit

	private fun bc(e: Char): Int
	do
		if _bc_table.has_key(e) then
			return _bc_table[e]
		else
			return _length
		end
	end

	# good shifts
	private var gs: Array[Int] is noinit
	
	# bad characters
	private var bc_table = new ArrayMap[Char, Int]

	private fun compute_bc
	do
		var x = _motif
		var m = _length
		var i = 0
		while i < m - 1 do
			_bc_table[x.chars[i]] = m - i - 1
			i += 1
		end
	end

	private fun suffixes: Array[Int]
	do
		var x = _motif
		var m = _length
		var suff = new Array[Int].filled_with(m, m)

		var f = 0
		var g = m - 1
		var i = m - 2
		while i >= 0 do
			if i > g and suff[i+m-1-f] < i - g then
				suff[i] = suff[i+m-1-f]
			else
				if i < g then g = i
				f = i
				while g >= 0 and x.chars[g] == x.chars[g + m - 1 - f] do g -= 1
				suff[i] = f - g
			end
			i -= 1
		end
		return suff
	end

	private fun compute_gs
	do
		var m = _length
		var suff = suffixes
		var i = 0
		while i < m do
			_gs[i] = m
			i += 1
		end
		var j = 0
		i = m - 1
		while i >= -1 do
			if i == -1 or suff[i] == i + 1 then
				while j < m - 1 - i do
					if _gs[j] == m then _gs[j] = m - 1 - i
					j += 1
				end
			end
			i -= 1
		end
		i = 0
		while i < m - 1 do
			_gs[m - 1 - suff[i]] = m - 1 - i
			i += 1
		end
	end

	redef fun hash do return _motif.hash
	redef fun ==(o) do return o isa BM_Pattern and o._motif == _motif
end

# Matches are a part of a `Text` found by a `Pattern`.
class Match
	# The base string matched
	var string: String

	# The starting position in the string
	var from: Int

	# The length of the matching part
	var length: Int

	# The position of the first character just after the matching part.
	# May be out of the base string
	fun after: Int do return from + length

	# The contents of the matching part
	redef fun to_s do return string.substring(from,length)

	init
	do
		assert positive_length: length >= 0
		assert valid_from: from >= 0
		assert valid_after: from + length <= string.length
	end
end

redef class Char
	super Pattern

	redef fun search_index_in(s, from)
	do
		var stop = s.length
		while from < stop do
			if s.chars[from] == self then return from
			from += 1
		end
		return -1
	end

	redef fun search_in(s, from)
	do
		var pos = search_index_in(s, from)
		if pos < 0 then
			return null
		else
			return new Match(s.to_s, pos, 1)
		end
	end
end

redef class Text
	super Pattern

	redef fun search_index_in(s, from)
	do
		assert from >= 0
		var stop = s.length - length + 1
		while from < stop do
			var i = length - 1
			while i >= 0 and self.chars[i] == s.chars[i + from] do i -= 1
			# Test if we found
			if i < 0 then return from
			# Not found so try next one
			from += 1
		end
		return -1
	end

	redef fun search_in(s, from)
	do
		var pos = search_index_in(s, from)
		if pos < 0 then
			return null
		else
			return new Match(s.to_s, pos, length)
		end
	end

	# Search the first occurence of the pattern `p`.
	# Return null if not found.
	#
	#     assert "I say hello to the world!".search("hello").from  == 6
	#     assert "I say goodbye to the world!".search("hello")     == null
	fun search(p: Pattern): nullable Match do return p.search_in(self, 0)

	# Search the first occurence of the pattern `p` after `from`.
	# The search starts at `from`.
	# Return null if not found.
	#
	#     assert "I say hello to the world!".search_from("hello",4).from  == 6
	#     assert "I say hello to the world!".search_from("hello",7)       == null
	fun search_from(p: Pattern, from: Int): nullable Match do return p.search_in(self, from)

	# Search the last occurence of the text `t`.
	#
	#     assert "bob".search_last("b").from == 2
	#     assert "bob".search_last("bo").from == 0
	#     assert "bob".search_last("ob").from == 1
	#     assert "bobob".search_last("ob").from == 3
	#     assert "bobbob".search_last("bb").from == 2
	#     assert "bobbob".search_last("bob").from == 3
	#     assert "bob".search_last("z") == null
	#     assert "".search_last("b") == null
	fun search_last(t: Text): nullable Match do
		return search_last_up_to(t, length)
	end

	# Search the last occurence of the text `t` before `up_to`.
	#
	#     assert "bobbob".search_last_up_to("b", 3).from == 2
	#     assert "bobbob".search_last_up_to("b", 6).from == 5
	#     assert "bobbob".search_last_up_to("b", 0) == null
	fun search_last_up_to(t: Text, up_to: Int): nullable Match do
		var i = up_to - t.length

		while i >= 0 do
			if substring(i, t.length) == t then
				return new Match(self.to_s, i, t.length)
			end
			i -= 1
		end
		return null
	end

	# Search all occurrences of p into self.
	#
	#     var a = new Array[Int]
	#     for i in "hello world".search_all('o') do
	#         a.add(i.from)
	#     end
	#     assert a         ==  [4, 7]
	fun search_all(p: Pattern): Array[Match] do return p.search_all_in(self)

	# Split `self` using `p` as separator.
	#
	#     assert "hello world".split('o')          ==  ["hell", " w", "rld"]
	fun split(p: Pattern): Array[String]
	do
		var matches = p.split_in(self)
		var res = new Array[String].with_capacity(matches.length)
		for m in matches do res.add(m.to_s)
		return res
	end

	# @deprecated alias for `split`
	fun split_with(p: Pattern): Array[String] do return self.split(p)

	# Split `self` on the first `=`
	#
	#     assert "hello".split_once_on('l') == ["he", "lo"]
	#     assert "a, b, c, d, e".split_once_on(", ") == ["a", "b, c, d, e"]
	fun split_once_on(p: Pattern): Array[SELFTYPE]
	do
		var m = p.search_in(self, 0)
		if m == null then return [self]
		return new Array[SELFTYPE].with_items(substring(0, m.from), substring_from(m.after))
	end

	# Replace all occurences of a pattern with a string
	#
	#     assert "hlelo".replace("le", "el")	     ==  "hello"
	#     assert "hello".replace('l', "")	     ==  "heo"
	fun replace(p: Pattern, string: SELFTYPE): String
	do
		return self.split_with(p).join(string)
	end

	# Does `self` contains at least one instance of `pattern`?
	#
	#     assert "hello".has('l')
	#     assert "hello".has("ll")
	#     assert not "hello".has("lll")
	fun has(pattern: Pattern): Bool do return pattern.is_in(self)
end
