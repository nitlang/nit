# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# S-Expression parsing facilities
module sexp

intrude import parser_base

# Any S-Expression entity
abstract class SExpEntity

	# Location in the source document
	var location: nullable Location
end

# A full S-Expression, delimited by `(` and `)`
class SExp
	super SExpEntity

	# Children of a SExp
	var content = new Array[SExpEntity]

	redef fun to_s do return "({content.join(" ")})"

	# Returns a pretty-printable version of self
	#
	#     assert "( ( sp 12.3 ) \"DQString\")".to_sexp.as(SExp).pretty_to_s == "(\n\t(\n\t\tsp\n\t\t12.30\n\t)\n\t\"DQString\"\n)"
	fun pretty_to_s: String do return recurse_to_s(0)

	private fun recurse_to_s(depth: Int): String do
		var s = "{"\t" * depth}(\n"
		for i in content do
			if i isa SExp then
				s += i.recurse_to_s(depth + 1)
				s += "\n"
				continue
			end
			s += "\t" * (depth + 1)
			s += i.to_s
			s += "\n"
		end
		return s + "{"\t" * depth})"
	end
end

# A Double-quoted String
class SExpDQString
	super SExpEntity

	# Double-quoted string
	var content: String

	redef fun to_s do return content
end

# A float-value
class SExpFloat
	super SExpEntity

	# Floating-point value
	var content: Float

	redef fun to_s do return content.to_precision(2)
end

# Any Identifier, non string and non-float
class SExpId
	super SExpEntity

	# S-Exp compatible identifier
	var content: String

	redef fun to_s do return content
end

# An error parsing S-Expressions
class SExpError
	super SExpEntity

	# Cause of the error
	var message: String

	redef fun to_s do return "S-Expression error: {message} at {location or else "unknown location"}"
end

# S-Expression processor
class SExpProcessor
	super StringProcessor

	# Parses an S-Expression entity
	fun parse_entity: SExpEntity do
		var srclen = src.length
		var delims = once ['(', ')', '"']
		ignore_whitespaces
		if pos >= srclen then return new SExpError(new Location(line, line_offset), "Empty S-Expression")
		var c = src[pos]
		if c == '(' then
			var cnt = new SExp
			var loc = new Location(line, line_offset)
			pos += 1
			while pos < srclen and src[pos] != ')' do
				var p = parse_entity
				if p isa SExpError then break
				cnt.content.add p
				ignore_whitespaces
			end
			if pos < srclen and src[pos] == ')' then
				pos += 1
				return cnt
			else
				return new SExpError(loc, "Incomplete S-Expression")
			end
		else if c == '"' then
			var stdq = pos
			var loc = new Location(line, line_offset)
			pos += 1
			ignore_until("\"")
			pos += 1
			var endq = pos
			return new SExpDQString(loc, src.substring(stdq, endq - stdq))
		else
			var stid = pos
			var loc = new Location(line, line_offset)
			while pos < srclen and not c.is_whitespace and not delims.has(c) do
				c = src[pos]
				pos += 1
			end
			if delims.has(c) or c.is_whitespace then pos -= 1
			if pos >= srclen then return new SExpError(loc, "Invalid S-Expression")
			var endid = pos
			var cntstr = src.substring(stid, endid - stid)
			var cnt: SExpEntity
			if cntstr.is_numeric then
				cnt = new SExpFloat(loc, cntstr.to_f)
			else
				cnt = new SExpId(loc, cntstr)
			end
			return cnt
		end
	end
end

redef class Text

	# Tries to parse `self` as an S-Expression
	fun to_sexp: SExpEntity do return (new SExpProcessor(self.to_s)).parse_entity
end
