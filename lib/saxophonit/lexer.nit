# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# SAXophoNit’s lexer
module saxophonit::lexer

import reader_model

# SAXophoNit’s lexer
#
# Except when noted otherwise, `accept` and `expect` functions return `true` on
# success and `false` on mismatch and at the end of the file.
# They both foward the cursor to the next byte on success, but only `expect`
# functions fire a fatal error on mismatch.
class XophonLexer

	# The model.
	var reader_model: XophonReaderModel

	# The input to read from.
	var input: Reader is writable

	# Alias to `reader_model.locator`.
	private var locator: SAXLocatorImpl is noinit

	init do
		locator = reader_model.locator.as(not null)
	end

	# Last read byte.
	#
	# Equals `-1` on end of file or error.
	private var last_char = -1

	# Before end-of-line handling, was the last read byte a CARRIAGE RETURN?
	private var was_cr: Bool = false


	# Expect a value delimiter (`"` or `'`).
	#
	# If the last read byte is a delimiter, return the delimiter and
	# read the next byte. Else, return `-1`.
	fun expect_delimiter: Int do
		if accept('"') then
			return '"'.code_point
		else if accept('\'') then
			return '\''.code_point
		else
			fire_unexpected_char(". Expecting `\"` or `'`")
			return -1
		end
	end

	# Is the last read byte matches the `Char` production?
	fun is_xml_char:Bool do
		# TODO: Handle code points above 0x7F.
		return last_char >= 32 or
				last_char == 9 or
				last_char == 10
	end

	# Push the last read byte in the specified buffer and read the next byte.
	#
	# If the last read byte is forbidden, fire a fatal error instead.
	fun expect_xml_char(buffer: Buffer): Bool do
		if is_xml_char then
			buffer.chars.push(last_char.code_point)
			read_char
			return true
		else if eof then
			return fire_fatal_error("Unexpected end of file.")
		else
			return fire_fatal_error("Forbidden character.")
		end
	end


	# Like `expect_xml_char`, but normalize white space and forbid `<`.
	#
	# SEE: The “3.3.3 Attribute-Value Normalization” section of any XML
	# recommendation.
	fun expect_att_value_char(buffer: Buffer): Bool do
		if is_s then
			buffer.chars.push(' ')
			read_char
			return true
		else if last_char == '<'.code_point then
			return fire_fatal_error("`<` is forbidden in attribute values.")
		else
			return expect_xml_char(buffer)
		end
	end

	# Is the last read byte matches the `S` production?
	fun is_s:Bool do
		return last_char == 32 or last_char == 9 or last_char == 10
	end

	# Skip a `S?` token and return `true`.
	fun skip_s: Bool do
		while is_s do read_char
		return true
	end

	# Accept a `S` token.
	fun accept_s: Bool do
		if is_s then
			read_char
			return skip_s
		else
			return false
		end
	end

	# Expect `S`.
	fun expect_s: Bool do
		return (accept_s and skip_s) or fire_unexpected_char(". Expecting white space")
	end

	# Is the last read byte matches the `NameStartChar` production?
	fun is_name_start_char: Bool do
		# TODO: Handle code points above 0x7F.
		return ['A'.code_point .. 'Z'.code_point].has(last_char) or
				['a'.code_point .. 'z'.code_point].has(last_char) or
				last_char == '_'.code_point or
				last_char == ':'.code_point or
				last_char > 127
	end

	# Is the last read byte matches the `NameChar` production?
	fun is_name_char: Bool do
		# TODO: Handle code points above 0x7F.
		return is_name_start_char or
				last_char == '-'.code_point or
				last_char == '.'.code_point or
				is_digit
	end

	# Expect a `Name` tokn.
	#
	# Append the parsed name to `buffer`.
	fun expect_name(buffer: Buffer): Bool do
		if not is_name_start_char then
			return fire_unexpected_char(" at the beginning of a name")
		end
		buffer.chars.push(last_char.code_point)
		read_char
		while is_name_char do
			buffer.chars.push(last_char.code_point)
			read_char
		end
		return true
	end

	# Expect a `PITarget` token.
	#
	# Append the parsed name to `buffer`.
	fun expect_pi_target(buffer: Buffer): Bool do
		return expect_name(buffer) and check_pi_target(buffer)
	end

	# Ensure the target is not `xml` (case-insensitive).
	#
	# Also, fire an error if the target contains a colon.
	fun check_pi_target(target: Text): Bool do
		var is_invalid = target.length == 3 and
				(target.chars[0] == 'X' or target.chars[0] == 'x') and
				(target.chars[0] == 'M' or target.chars[0] == 'm') and
				(target.chars[0] == 'L' or target.chars[0] == 'l')

		if is_invalid then
			return fire_fatal_error("Forbidden processing target `{target}`.")
		else
			if target.has(":") then
				reader_model.fire_error("The processing target `{target}` contains a colon.", null)
			end
			return true
		end
	end

	# Is the last read byte matches the `[0-9]` production?
	fun is_digit: Bool do
		return ['0'.code_point .. '9'.code_point].has(last_char)
	end

	# Accept a `[0-9]+` token.
	fun accept_digits(buffer: Buffer): Bool do
		if is_digit then
			loop
				buffer.chars.push(last_char.code_point)
				read_char
				if not is_digit then return true
			end
		else
			return false
		end
	end

	# Expect a `[0-9]+` token.
	fun expect_digits(buffer: Buffer): Bool do
		return accept_digits(buffer) or fire_unexpected_char(". Expecting a decimal digit")
	end

	# Is `last_char` matches the `[0-9a-fA-F]` production?
	fun is_hex: Bool do
		return ['0'.code_point .. '9'.code_point].has(last_char) or
				['A'.code_point .. 'Z'.code_point].has(last_char) or
				['a'.code_point .. 'Z'.code_point].has(last_char)
	end

	# Expect a `[0-9a-fA-F]+` token.
	fun expect_hex(buffer: Buffer): Bool do
		if is_hex then
			loop
				buffer.chars.push(last_char.code_point)
				read_char
				if not is_hex then return true
			end
		else
			return fire_unexpected_char(". Expecting an hexadecimal digit")
		end
	end

	# Expect `Eq`.
	fun expect_eq: Bool do
		return skip_s and expect('=', "") and skip_s
	end


	############################################################################
	# General

	# Read a byte and put it in `last_char`.
	#
	# In case of an end-of-file or an error, put -1 in `last_char`.
	private fun read_char do
		if locator.line_number < 0 then
			locator.line_number = 1
			locator.column_number = 1
		else if last_char < 0 then
			fire_fatal_error("Internal error: Already at the end of the file.")
			return
		else if last_char == '\n'.code_point then
			locator.line_number += 1
			locator.column_number = 1
		else
			locator.column_number += 1
		end

		var s = input.read_byte
		if s < 0 then
			last_char = -1
			return
		end
		last_char = s.to_i

		# XML 1.0 end-of-line handling
		# Note: Regardless the XML version, any EOL defined by the
		# recommandation MUST be reported as a single LINE FEED.
		if was_cr and last_char == '\n'.code_point then
			# EOL already reported. => Skip this byte.
			s = input.read_byte
			if s < 0 then
				last_char = -1
			else
				last_char = s
			end
		end
		was_cr = last_char == '\r'.code_point
		if was_cr then
			# Regardless the following byte, '\r' always introduce an EOL.
			last_char = '\n'.code_point
		end
	end

	# Is it the end of the stream?
	#
	# Also return `true` after a fatal error.
	fun eof: Bool do return last_char < 0

	# Start the lexer.
	fun start do
		if eof then
			last_char = 0
			read_char
		end
	end

	# Close the input.
	fun close do
		last_char = -1
		input.close
	end

	# Does the last read byte equal `c`?
	fun is_int(c: Int): Bool do return last_char == c

	# Does the last read byte equal `c`?
	fun is_char(c: Char): Bool do return last_char == c.code_point

	# Expect the specified byte.
	fun accept_int(expected: Int): Bool do
		if last_char == expected then
			read_char
			return true
		else
			return false
		end
	end

	# Accept the specified byte.
	fun accept(expected: Char): Bool do
		return accept_int(expected.code_point)
	end

	# Ensure the last read byte is equal to `expected`.
	#
	# If it is, read the next byte. If not, fire a fatal error using
	# `context`. `context` is the part of the message that gives the context.
	# For example, in `Unexpected ``x`` in y. Expecting ``z``.`, the value of
	# `context` is `" in y"`.
	#
	# Return `true` if and only if the last read byte as the expected value.
	fun expect_int(expected: Int, context: String): Bool do
		return accept_int(expected) or
				fire_unexpected_char("{context}. Expecting `{expected.code_point}`.")
	end

	# Ensure the last read byte is equal to `expected`.
	#
	# If it is, read the next byte. If not, fire a fatal error using
	# `context`. `context` is the part of the message that gives the context.
	# For example, in `Unexpected ``x`` in y. Expecting ``z``.`, the value of
	# `context` is `" in y"`.
	#
	# Return `true` if and only if the last read byte as the expected value.
	fun expect(expected: Char, context: String): Bool do
		return accept(expected) or
				fire_unexpected_char("{context}. Expecting `{expected}`.")
	end

	# Ensure the last read byte and following bytes match `expected`.
	#
	# If it is, read one more byte. If not, fire a fatal error using
	# `context`. `context` is the part of the message that gives the context.
	# For example, in `Unexpected ``x`` in y. Expecting ``z``.`, the value of
	# `context` is `" in y"`.
	#
	# Return `true` if and only if the last read byte and following bytes
	# match `expected`.
	fun expect_string(expected: String, context: String): Bool do
		var chars = expected.chars
		var i = 0

		while i < chars.length do
			if not accept(chars[i]) then
				if is_xml_char then
					return fire_fatal_error("Unexpected " +
							"`{expected.substring(0, i)}{last_char.code_point.to_s}`" +
							"{context}. Expecting `{expected}`.")
				else if eof then
					return fire_fatal_error("Unexpected end of file{context}. " +
							"Expecting `{expected}`.")
				else
					return fire_fatal_error("Forbidden character.")
				end
			end
			i += 1
		end
		return true
	end


	############################################################################
	# Dispatching

	# Fire a fatal error about an unexpected character.
	#
	# Return `false`.
	fun fire_unexpected_char(rest_of_message: String): Bool do
		if is_xml_char then
			return fire_fatal_error("Unexpected character `{last_char.code_point.to_s}`{rest_of_message}.")
		else if eof then
			return fire_fatal_error("Unexpected end of file{rest_of_message}.")
		else
			return fire_fatal_error("Forbidden character.")
		end
	end

	# Fire a fatal error with the specified message.
	#
	# Return `false`.
	private fun fire_fatal_error(message: String): Bool do
		reader_model.fire_fatal_error(message, null)
		last_char = -1
		return false
	end
end
