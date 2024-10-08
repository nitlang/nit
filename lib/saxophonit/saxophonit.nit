# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# A SAX 2 parser in Nit.
module saxophonit

import sax
intrude import core::file
private import reader_model
private import lexer

# Implementation of the `XMLReader` interface.
#
# For the moment, only XML 1.0 is (partially) supported.
#
# The following mandatory features of XML 1.0 are not yet supported:
#
# * Parsing of entities (files) encoded in UTF-16.
# * Encoding handling.
# * Entity references resolving (except for built-in references).
# * Handling of the options specified in the XML declaration.
# * Parsing of a `DOCTYPE` declaration.
#
# Also note that this XML processor is unable to retrieve a file from an URL
# (only local paths are supported).
#
# Usage example:
#
#     # Retrieve all text nodes.
#     class TextListener
#     	super ContentHandler
#     #
#     	private var buf: Buffer = new FlatBuffer
#     	private var sp: Bool = false
#     #
#     	redef fun characters(str: String) do
#     		if sp then
#     			if buf.length > 0 then buf.append(" ")
#     			sp = false
#     		end
#     		buf.append(str)
#     	end
#     #
#     	redef fun ignorable_whitespace(str: String) do
#     		sp = true
#     	end
#     #
#     	# Return the concatenation of all text nodes.
#     	redef fun to_s do return buf.to_s
#     end
#     #
#     var text = new TextListener
#     var reader = new XophonReader
#     #
#     reader.content_handler = text
#     reader.parse(new InputSource.with_stream(new StringReader("<foo>bar baz <n>42</n>.</foo>")))
#     assert text.to_s == "bar baz 42."
class XophonReader
	super XMLReader

	private var model = new XophonReaderModel
	private var lexer: XophonLexer is noinit

	redef fun entity_resolver do return model.entity_resolver
	redef fun entity_resolver=(entity_resolver) do
		model.entity_resolver = entity_resolver
	end

	redef fun dtd_handler do return model.dtd_handler
	redef fun dtd_handler=(dtd_handler) do
		model.dtd_handler = dtd_handler
	end

	redef fun content_handler do return model.content_handler
	redef fun content_handler=(content_handler) do
		model.content_handler = content_handler
	end

	redef fun error_handler do return model.error_handler
	redef fun error_handler=(error_handler) do
		model.error_handler = error_handler
	end


	redef fun feature_recognized(name) do
		return model.feature_recognized(name)
	end

	redef fun feature_readable(name) do
		return model.feature_readable(name)
	end

	redef fun feature_writable(name) do
		return model.feature_readable(name)
	end

	redef fun feature(name) do return model.feature(name)
	redef fun feature=(name, value) do model.feature(name) = value

	redef fun property_recognized(name) do
		return model.property_recognized(name)
	end

	redef fun property_readable(name) do
		return model.property_readable(name)
	end

	redef fun property_writable(name) do
		return model.property_writable(name)
	end

	redef fun property(name) do
		return model.property(name)
	end

	redef fun property=(name, value) do
		model.property(name) = value
	end

	redef fun parse(input) do
		var system_id: nullable MaybeError[String, Error] = null
		model.locator = new SAXLocatorImpl

		if input.system_id != null then
			system_id = resolve_system_id(input.system_id.as(not null))
			if system_id.is_error then
				model.fire_warning(system_id.error.message, system_id.error)
			else
				model.locator.system_id = system_id.value
			end
		end
		model.locator.public_id = input.public_id
		# TODO: encoding

		if input.stream != null then
			lexer = new XophonLexer(model, input.stream.as(not null))
			parse_main
		else if system_id != null then
			if system_id.is_error then
				model.fire_fatal_error("File <{input.system_id.as(not null)}> not found.", null)
			else
				lexer = new XophonLexer(model,
						new FileReader.open(system_id.value))
				parse_main
				lexer.close
			end
		else
			model.fire_fatal_error("At least a stream or a system identifier must be specified. None given.",
					null)
		end
	end

	redef fun parse_file(system_id) do
		parse(new InputSource.with_system_id(system_id))
	end


	############################################################################
	# Parsing

	# Note: Every `expect_*` function (except `parse_main`) does not call
	# `read_char` for the first byte and let the byte just after its production
	# in `last_char` (except in case of fatal error). They return `false` on
	# fatal error and at the end of the file.

	# Parse the main entity.
	private fun parse_main do
		model.fire_document_locator
		model.fire_start_document
		lexer.start
		expect_document
		model.fire_end_document
	end

	# Expect a `document` production.
	private fun expect_document: Bool do
		var got_doctype = false
		var got_element = false

		# If the document start with `<`, it may start with a XML declaration,
		# a processing instruction, a comment, a `DOCTYPE` declaration, the
		# root element or a white space.
		if lexer.accept('<') then
			if lexer.accept('?') then
				if not expect_pi_or_xml_decl then return false
			else if lexer.accept('!') then
				if lexer.accept('-') then
					if not lexer.expect('-',
								" at the beginning of a comment") or
								not expect_comment then
						return false
					end
				else
					if not expect_doctype_decl then return false
					got_doctype = true
				end
			else
				if not expect_root then return false
				# The `DOCTYPE` declaration *must* come before the root
				# element.
				got_doctype = true
				got_element = true
			end
		else if not lexer.accept_s then
			return lexer.fire_unexpected_char(
					". Expecting a white space or `<`")
		end

		# After the XML declaration (if there is one), the document may contain
		# processing instructions, comments, the `DOCTYPE` declaration and
		# the root element.
		# These productions may be separated by white space.
		while not got_element do
			if lexer.accept('<') then
				if lexer.accept('?') then
					if not expect_pi then return false
				else if lexer.accept('!') then
					if lexer.accept('-') then
						if not lexer.expect('-',
									" at the beginning of a comment") or
									not expect_comment then
							return false
						end
					else if got_doctype then
						return lexer.fire_unexpected_char(". Expecting `-`")
					else if expect_doctype_decl then
						got_doctype = true
					else
						return false
					end
				else
					if not expect_root then return false
					# The `DOCTYPE` declaration *must* come before the root
					# element.
					got_doctype = true
					got_element = true
				end
			else if not lexer.accept_s then
				return lexer.fire_unexpected_char(
						". Expecting a white space or `<`")
			end
		end
		return expect_miscs
	end

	private fun expect_doctype_decl: Bool do
		return model.fire_fatal_error("DTD not supported yet.\n", null) # TODO
	end

	# Expect the root `element` production, without the first `<` token.
	private fun expect_root: Bool do
		var success = true
		var char_data = new FlatBuffer

		success = expect_stag
		while success and not lexer.eof and not model.root_closed do
			success = expect_content_chunk(char_data)
		end
		if success then
			success = model.expect_root_closed
		end
		flush(char_data)
		return success
	end

	# Parse a `EmptyElemTag | STag | ETag | Reference | CDSect | PI | Comment | CharData` production.
	#
	# If the last read byte matches the `CharData` production, push the char in
	# `char_data`. Else, flush `CharData` as a `characters` event.
	private fun expect_content_chunk(char_data: Buffer): Bool do
		if lexer.accept('<') then
			flush(char_data)
			if lexer.accept('!') then
				if lexer.accept('-') then
					return lexer.expect('-',
							" at the beginning of a comment") and
							expect_comment
				else if lexer.accept('[') then
					return expect_cd_sect
				else
					return lexer.fire_unexpected_char(
							". Expecting `--` or `[CDATA[`")
				end
			else if lexer.accept('?') then
				return expect_pi
			else if lexer.accept('/') then
				return expect_etag
			else
				return expect_stag
			end
		else if lexer.accept('&') then
			flush(char_data)
			var success = expect_reference(char_data)
			flush(char_data)
			return success
		else
			return lexer.expect_xml_char(char_data)
		end
	end

	# Expect a `EmptyElemTag | STag` production, without the initial `<`.
	private fun expect_stag: Bool do
		var name_buffer = new FlatBuffer

		if lexer.expect_name(name_buffer) then
			var name = name_buffer.to_s

			model.fire_start_attributes
			loop
				if lexer.accept('>') then
					model.fire_start_element(name)
					return true
				else if lexer.accept('/') then
					if lexer.expect('>', "") then
						model.fire_start_element(name)
						model.fire_end_element(name)
						return true
					else
						return false
					end
				else if lexer.expect_s then
					if lexer.accept('/') then
						if lexer.expect('>', "") then
							model.fire_start_element(name)
							model.fire_end_element(name)
							return true
						else
							return false
						end
					else if lexer.accept('>') then
						model.fire_start_element(name)
						return true
					else if not expect_attribute then
						return false
					end
				else
					return lexer.fire_unexpected_char(" in tag. " +
							"Expecting an attribute, `/`, `>` or white space")
				end
			end
		end
		return false
	end

	# Expect a `ETag` production, without the initial `</`.
	private fun expect_etag: Bool do
		var name_buf = new FlatBuffer

		if lexer.expect_name(name_buf) and
				lexer.skip_s and
				lexer.expect('>', "") then
			return model.fire_end_element(name_buf.to_s)
		else
			return false
		end
	end

	# Expect an `Attributes` production.
	private fun expect_attribute: Bool do
		var name = new FlatBuffer
		var value = new FlatBuffer

		if lexer.expect_name(name) and
				lexer.expect_eq and
				expect_att_value(value) then
			model.fire_attribute(name.to_s, value.to_s)
			return true
		else
			return false
		end
	end

	# Expect the `Misc*` production at the end of a document.
	private fun expect_miscs: Bool do
		while not lexer.eof do
			if lexer.accept('<') then
				if lexer.accept('?') then
					if not expect_pi then return false
				else if lexer.accept('!') then
					if not lexer.expect_string("--",
							" at the beginning of a comment") or
							not expect_comment then
						return false
					end
				else
					return lexer.fire_unexpected_char(". Expecting `?` or `!`")
				end
			else if not lexer.accept_s then
				return lexer.fire_unexpected_char(
						". Expecting a white space or `<`")
			end
		end
		return true
	end

	# Expect a `AttValue` production.
	#
	# Append the parsed value to `buffer`.
	private fun expect_att_value(buffer: Buffer): Bool do
		var delimiter = lexer.expect_delimiter

		if delimiter < 0 then return false
		loop
			if lexer.accept_int(delimiter) then
				return true
			else if lexer.accept('&') then
				# TODO: [WFC: No < in Attribute Values]
				if not expect_reference(buffer) then return false
			else if not lexer.expect_att_value_char(buffer) then
				return false
			end
		end
	end

	# Expect a `SystemLiteral` production.
	#
	# Also used to parse productions that do not have references.
	# Append the parsed value to `buffer`.
	private fun expect_literal(buffer: Buffer): Bool do
		var delimiter = lexer.expect_delimiter

		if delimiter < 0 then return false
		loop
			if lexer.accept_int(delimiter) then
				return true
			else if not lexer.expect_xml_char(buffer) then
				return false
			end
		end
	end


	# Expect a `Comment` production, without the beginning.
	#
	# Assume `last_char` is the fifth byte of the production that is, the
	# next byte after the `'<!--'` token.
	private fun expect_comment: Bool do
		var buffer: Buffer = new FlatBuffer

		loop
			if lexer.accept('-') then
				if lexer.accept('-') then
					if not lexer.expect('>',
							" after a double-hyphen (`--`) in a comment") then
						return false
					else
						break
					end
				else
					buffer.chars.push('-')
					if not lexer.expect_xml_char(buffer) then return false
				end
			else if not lexer.expect_xml_char(buffer) then
				return false
			end
		end
		model.fire_comment(buffer.to_s)
		return true
	end

	# Expect a `PI` production, without the beginning.
	#
	# Assume `last_char` is the third byte of the production that is, the
	# next byte after the `'<?'` token.
	private fun expect_pi: Bool do
		var target = new FlatBuffer

		return lexer.expect_pi_target(target) and
				expect_pi_data(target.to_s)
	end

	# Expect the data part and the `'?>'` token of a `PI` production.
	private fun expect_pi_data(target: String): Bool do
		if lexer.accept('?') then
			if lexer.expect('>', " at the end of a processing instruction") then
				model.fire_processing_instruction(target, null)
				return true
			else
				return false
			end
		else if lexer.accept_s then
			var data: Buffer = new FlatBuffer

			loop
				if lexer.accept('?') then
					if lexer.accept('>') then
							break
					else
						data.chars.push('?')
						if not lexer.expect_xml_char(data) then return false
					end
				else if not lexer.expect_xml_char(data) then
					return false
				end
			end
			model.fire_processing_instruction(target, data.to_s)
			return true
		else
			return lexer.fire_unexpected_char(" after a processing " +
					"instruction target. Expecting a white space or `?>`")
		end
	end

	# Expect a `PI | XMLDecl` production, without the beginning.
	#
	# Assume `last_char` is the third byte of the production that is, the
	# next byte after the `'<?'` token.
	private fun expect_pi_or_xml_decl: Bool do
		var buffer: Buffer = new FlatBuffer

		if lexer.expect_name(buffer) then
			var target = buffer.to_s

			if target == "xml" then
				return expect_xml_decl
			else if lexer.check_pi_target(target) then
				return expect_pi_data(target)
			else
				return false
			end
		else
			return false
		end
	end

	# Expect a `XMLDecl` production, without the initial `<?xml` token.
	private fun expect_xml_decl: Bool do
		if not expect_version_info then return false
		if lexer.accept_s then
			if lexer.is_char('e') then
				if not expect_encoding_decl then return false
				# At this point, we can only accept `S` or `'?>'`.
				if not lexer.accept_s then
					return lexer.expect_string("?>", "")
				end
			end
			if lexer.is_char('s') and not expect_sd_decl then return false
			return lexer.skip_s and lexer.expect_string("?>", "")
		else
			return lexer.expect_string("?>", "")
		end
	end

	# Expect a `EncodingDecl` token, without the initial `S` token.
	private fun expect_encoding_decl: Bool do
		var encoding = new FlatBuffer

		if not lexer.expect_string("encoding", "") or not lexer.expect_eq or
				not expect_literal(encoding) then
			return false
		end
		if not encoding.has("^[A-Za-z][A-Za-z0-9._-]*$".to_re) then
			return model.fire_fatal_error("`{encoding.to_s}` is not a valid " +
					"encoding name.", null)
		end
		# TODO: Do something with the value.
		return true
	end

	# Expect a `SDDecl` token, without the initial `S` token.
	private fun expect_sd_decl: Bool do
		var buf = new FlatBuffer
		var value: String

		if not lexer.expect_string("standalone", "") or not lexer.expect_eq or
				not expect_literal(buf) then
			return false
		end
		value = buf.to_s
		if not value == "yes" and not value == "no" then
			return model.fire_fatal_error("`{value}` is not a valid value for " +
					"the `standalone` declaration. Expecting `yes` or `no`.",
					null)
		end
		# TODO: Do something with the value.
		return true
	end

	# Expect a `CDSect` production, without the beginning.
	#
	# Assume `last_char` is the fourth byte of the production that is, the
	# next byte after the `'<!['` token.
	private fun expect_cd_sect: Bool do
		var buffer: Buffer = new FlatBuffer

		# Number of consecutive closing brackets.
		var closing = 0

		if lexer.expect_string("CDATA[",
				" at the beginning of a CDATA section.") then
			model.fire_start_cdata
			loop
				if lexer.accept(']') then
					closing += 1
				else
					for i in [0..closing[ do
						buffer.chars.push(']')
					end
					closing = 0
					if closing >= 2 and lexer.accept('>') then break
					if not lexer.expect_xml_char(buffer) then return false
				end
			end
			flush(buffer)
			model.fire_end_cdata
			return true
		else
			return false
		end
	end

	# Expect a `VersionInfo` production.
	private fun expect_version_info: Bool do
		if not lexer.expect_s or
				not lexer.expect_string("version",
				" in the first attribute name of the XML declaration") or
				not lexer.expect_eq then
			return false
		else
			var minor: Buffer = new FlatBuffer
			var delimiter = lexer.expect_delimiter

			if delimiter < 0 then return false
			if not lexer.expect_string("1.", " as XML major version") or
					not lexer.expect_digits(minor) or
					not lexer.expect_int(delimiter, "") then
				return false
			end
			if minor.to_s != "0" then
				model.fire_warning("Only XML 1.0 is supported. " +
						"Got a XML 1.{minor.to_s} document.", null)
			end
			return true
		end
	end

	# Expect a `Reference`, without the initial `&`.
	#
	# Append the value to the buffer.
	private fun expect_reference(buffer: Buffer): Bool do
		# TODO: [WFC: Entity Declared]
		# TODO: [VC: Entity Declared]
		# TODO: [WFC: Parsed Entity]
		# TODO: [WFC: No Recursion]
		# TODO: Unicode

		var ref = new FlatBuffer

		if lexer.accept('#') then
			if lexer.accept('x') then
				if lexer.expect_hex(ref) then
					buffer.chars.add(ref.to_hex.code_point)
					return lexer.expect(';', "")
				else
					return lexer.fire_unexpected_char(
							". Expecting an hexadecimal digit")
				end
			else if lexer.accept_digits(ref) then
				buffer.chars.add(ref.to_i.code_point)
				return lexer.expect(';', "")
			else
				return lexer.fire_unexpected_char(" in a character reference. " +
						"Expecting `x` or a decimal digit")
			end
		else if lexer.expect_name(ref) then
			var name = ref.to_s
			if name.has(":") then
				model.fire_error("The entity name `{name}` contains a colon.", null)
			end
			var value = resolve_reference(name)

			if value != null then
				buffer.append(value)
				return lexer.expect(';', "")
			else
				model.fire_fatal_error("Unknown entity `{name}`.", null)
				return false
			end
		else
			return lexer.fire_unexpected_char(
					" in a reference. Expecting `#` or a name")
		end
	end

	# Resolve the entity reference or return `null`.
	private fun resolve_reference(name: String): nullable String do
		if name == "lt" then
			return "<"
		else if name == "gt" then
			return ">"
		else if name == "amp" then
			return "&"
		else if name == "quot" then
			return "\""
		else if name == "apos" then
			return "'"
		else
			return null
		end
		# TODO: Support non-builtin entities
	end

	# Flush the specified buffer as a `characters` event.
	#
	# Do nothing if `buffer` is empty.
	private fun flush(buffer: Buffer) do
		if buffer.length > 0 then
			model.fire_characters(buffer.to_s)
			buffer.clear
		end
	end


	############################################################################
	# Paths

	# Resolve the specified system id.
	private fun resolve_system_id(system_id: String): MaybeError[String, Error] do
		return realpath(system_id)
		# TODO: handle URIs
	end

	# Resolve the specified POSIX path.
	#
	# Like `String.realpath`, but with error handling.
	private fun realpath(path: String): MaybeError[String, Error] do
		var cs = path.to_cstring.file_realpath

		if cs.address_is_null then
			return new MaybeError[String, Error](null,
					new Error("File <{path}> not found."))
		else
			return new MaybeError[String, Error](cs.to_s, null)
		end
	end
end
