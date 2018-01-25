# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# XML DOM-parsing facilities
module parser

intrude import parser_base
intrude import xml_entities

# Provides XML parsing facilities
class XMLProcessor
	super StringProcessor

	# Parses a full XML document
	fun parse_document: XMLEntity do
		var stack = new Array[XMLStartTag]
		var doc = new XMLDocument
		loop
			ignore_whitespaces
			if pos >= src.length then break
			if src[pos] == '<' then
				var tag = read_tag
				if tag isa XMLStartTag then
					if stack.is_empty then
						tag.parent = doc
					else
						var st_last = stack.last
						tag.parent = st_last
					end
					stack.push tag
				else if tag isa XMLEndTag then
					if stack.is_empty then
						return new XMLError(tag.location, "Missing matching tag for `{tag.tag_name}`")
					end
					var st_last = stack.last
					if tag.tag_name == st_last.tag_name then
						st_last.matching = tag
						tag.matching = st_last
						stack.pop
					else
						var miss = stack.pop
						return new XMLError(miss.location, "Missing matching tag for `{miss.tag_name}`")
					end
				else if tag isa XMLError then
					return tag
				else
					if stack.is_empty then
						tag.parent = doc
					else
						tag.parent = stack.last
					end
				end
			else
				var st = pos
				var end_pc = ignore_until("<") - 1
				var loc = new Location(line, line_offset)
				var pc = new PCDATA(loc, src.substring(st, end_pc - st + 1).trim)
				if stack.is_empty then
					pc.parent = doc
				else
					pc.parent = stack.last
				end
			end
		end
		if not stack.is_empty then
			var miss = stack.pop
			return new XMLError(miss.location, "Missing matching tag for `{miss.tag_name}`")
		end
		return doc
	end

	# Reads the tag starting in `src` at current position
	private fun read_tag: XMLEntity do
		var st_loc = new Location(line, line_offset)
		var c = src[pos]
		if not c == '<' then return new XMLError(st_loc, "Expected start of tag, got `{c}`")
		pos += 1
		if pos >= src.length then return new XMLError(st_loc, "Malformed tag")
		c = src[pos]
		if c == '!' then
			# Special tag
			return read_special_tag(st_loc)
		else if c == '?' then
			# Prolog tag
			return read_prolog_tag(st_loc)
		else if c == '/' then
			# End tag
			return read_end_tag(st_loc)
		else
			# Start tag
			return read_start_tag(st_loc)
		end
	end

	# Reads a Special tag (starting with <!)
	#
	# In case of error, returns a `XMLError`
	private fun read_special_tag(st_loc: Location): XMLEntity do
		var srclen = src.length
		pos += 1
		if (pos + 2) >= srclen then return new XMLError(st_loc, "Unexpected EOF on start of Special tag")
		if src[pos] == '-' and src[pos + 1] == '-' then
			pos += 2
			var comst = pos
			var endcom = ignore_until("-->")
			if endcom == -1 then return new XMLError(st_loc, "Malformed comment")
			pos += 3
			return new XMLCommentTag(st_loc ,src.substring(comst, endcom - comst + 1))
		end
		var st = pos
		if srclen - pos >= 7 then
			var spe_type = src.substring(pos, 7)
			if spe_type == "[CDATA[" then
				pos += 7
				var cdst = pos
				var cdend = ignore_until("]]>")
				pos += 3
				if pos >= srclen then return new XMLError(st_loc, "Unfinished CDATA block")
				return new CDATA(st_loc, src.substring(cdst, cdend - cdst))
			else if spe_type == "DOCTYPE" then
				pos += 7
				return parse_doctype(st_loc)
			end
		end
		var end_spec = ignore_until(">")
		pos += 1
		return new XMLSpecialTag(st_loc, src.substring(st, end_spec - st))
	end

	# Parse a Doctype declaration tag
	private fun parse_doctype(st_loc: Location): XMLEntity do
		var elemts = new Array[String]
		var srclen = src.length
		loop
			ignore_whitespaces
			if pos >= srclen then return new XMLError(st_loc, "Malformed doctype")
			var c = src[pos]
			# TODO: Properly support intern DOCTYPE definitions
			if c == '[' then
				var intern_st = pos
				var intern_end = ignore_until("]")
				if intern_end == -1 then return new XMLError(st_loc, "Unfinished internal doctype declaration")
				pos += 1
				elemts.push src.substring(intern_st, intern_end - intern_st + 1)
				continue
			end
			var elm_st = pos
			while pos < srclen and not src[pos].is_whitespace and src[pos] != '>' do pos += 1
			if pos >= srclen then return new XMLError(st_loc, "Malformed doctype")
			if pos - elm_st > 1 then
				var str = src.substring(elm_st, pos - elm_st)
				elemts.push str
			end
			if src[pos] == '>' then
				pos += 1
				return new XMLDoctypeTag(st_loc, "DOCTYPE", elemts.join(" "))
			end
		end
	end

	# Reads a Prolog or Processing Instruction tag (starting with <?)
	#
	# In case of error, returns a `XMLError`
	private fun read_prolog_tag(st_loc: Location): XMLEntity do
		var srclen = src.length
		pos += 1
		if pos >= srclen then return new XMLError(st_loc, "Invalid start of prolog")
		var tag_name = parse_tag_name(['<', '>'])
		var c = src[pos]
		if c == '<' or c == '>' then return new XMLError(st_loc ,"Unexpected character `{c}` in prolog declaration")
		if tag_name == "xml" then
			var args = parse_args(['?'])
			for i in args do
				if i isa BadXMLAttribute then return new XMLError(i.location, i.name)
			end
			if src[pos] == '?' then
				if src[pos + 1] == '>' then
					pos += 2
					return new XMLPrologTag(st_loc, tag_name, args)
				end
			end
		else
			var cont_st = pos
			var cont_end = ignore_until("?>")
			if cont_end == -1 then
				pos += 2
				return new XMLError(st_loc, "Malformed Processing Instruction tag")
			end
			pos += 2
			return new XMLProcessingInstructionTag(st_loc, tag_name, src.substring(cont_st, cont_end - cont_st))
		end
		pos += 1
		return new XMLError(st_loc, "Malformed prolog tag")
	end

	# Reads an End tag (starting with </)
	#
	# In case of error, returns a `XMLError`
	private fun read_end_tag(st_loc: Location): XMLEntity do
		pos += 1
		var tag_name = parse_tag_name(['<', '>'])
		ignore_whitespaces
		if src[pos] == '>' then
			pos += 1
			return new XMLEndTag(st_loc, tag_name)
		end
		return new XMLError(st_loc, "Bad end tag `{tag_name}`")
	end

	# Reads a Start tag (starting with <)
	#
	# In case of error, returns a `XMLError`
	private fun read_start_tag(st_loc: Location): XMLEntity do
		var tag_name = parse_tag_name(['/', '>'])
		var args = parse_args(['/', '>'])
		for i in args do
			if i isa BadXMLAttribute then return new XMLError(i.location, i.name)
		end
		if src[pos] == '/' then
			if src[pos + 1] == '>' then
				pos += 2
				return new XMLOnelinerTag(st_loc, tag_name, args)
			end
		end
		pos += 1
		return new XMLStartTag(st_loc, tag_name, args)
	end

	# Parses an xml tag name
	private fun parse_tag_name(delims: Array[Char]): String do
		var idst = pos
		var srclen = src.length
		while pos < srclen do
			var c = src[pos]
			if c.is_whitespace or delims.has(c) then break
			pos += 1
		end
		return src.substring(idst, pos - idst).trim
	end

	# Parse the arguments of a tag
	private fun parse_args(endtags: Array[Char]): Array[XMLAttribute] do
		var attrs = new Array[XMLAttribute]
		loop
			var arg = parse_arg(endtags)
			if arg isa XMLAttributeEnd then return attrs
			attrs.add arg
			if arg isa BadXMLAttribute then return attrs
		end
	end

	# Parses the next argument in `src`
	private fun parse_arg(endtags: Array[Char]): XMLAttribute do
		var srclen = src.length
		ignore_whitespaces
		var st_loc = new Location(line, line_offset)
		if pos >= srclen then return new BadXMLAttribute(st_loc, "Unfinished attribute name")
		# FIXME: Ugly, but as long as it remains private, it is OK I guess
		if endtags.has(src[pos]) then return new XMLAttributeEnd(st_loc, "")
		var attrname_st = pos
		while pos < srclen and src[pos] != '=' and not endtags.has(src[pos]) do pos += 1
		if pos >= srclen then return new BadXMLAttribute(st_loc, "Unfinished attribute name")
		if src[pos] != '=' then return new BadXMLAttribute(st_loc, "Malformed attribute")
		var attrname_end = pos - 1
		var name = src.substring(attrname_st, attrname_end - attrname_st + 1).trim
		pos += 1
		ignore_whitespaces
		var attrval_st = pos
		if pos >= srclen then return new BadXMLAttribute(st_loc, "Unfinished attribute `{name}`")
		var match = src[pos]
		if match != '\'' and match != '"' then return new BadXMLAttribute(st_loc, "Invalid string delimiter `{match}` for attribute `{name}`")
		pos += 1
		while pos < srclen and src[pos] != match do pos += 1
		if pos >= srclen then return new BadXMLAttribute(st_loc, "Unfinished attribute `{name}`")
		var attrval_end = pos
		var val = src.substring(attrval_st, attrval_end - attrval_st + 1).trim
		pos += 1
		return new XMLStringAttr(st_loc, name, val.substring(1, val.length - 2), match)
	end
end

redef class Text
	# Tries to parse the current string to XML
	#
	# Returns an `XMLDocument` if successful, or an `XMLError` if not
	fun to_xml: XMLEntity do return (new XMLProcessor(self.to_s)).parse_document
end
