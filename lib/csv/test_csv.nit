# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Tests for `csv`.
module test_csv is test_suite

import test_suite
import csv

class TestCsvWriter
	super TestSuite

	# The custom CSV format used in the tests.
	private var custom_format = new CsvFormat('/', ':', "#")

	# Expect to write `row` as `expected_rfc4180` and as `expected_custom`.
	#
	# Parameters:
	#
	# * `always_escape`: value of the `always_escape` option.
	# * `row`: row to write.
	# * `expected_rfc4180`: expected result in RFC 4180.
	# * `expected_custom`: expected result in the custom CSV format.
	private fun expect(always_escape: Bool, row: SequenceRead[String],
			expected_rfc4180: String,
			expected_custom: String) do
		var out = new StringOStream
		var writer = new CsvWriter(out)

		writer.always_escape = always_escape
		writer.write_sequence(row)
		assert out.to_s == expected_rfc4180 else
			sys.stderr.write "\nFormat: RFC 4180\n"
			sys.stderr.write "Expecting: \"{expected_rfc4180.escape_to_nit}\"\n"
			sys.stderr.write "Got: \"{out.to_s.escape_to_nit}\"\n"
		end
		writer.close

		out = new StringOStream
		writer = new CsvWriter.with_format(out, custom_format)
		writer.always_escape = always_escape
		writer.write_sequence(row)
		assert out.to_s == expected_custom else
			sys.stderr.write "\nFormat: {custom_format.delimiter}"
			sys.stderr.write " {custom_format.separator}"
			sys.stderr.write " {custom_format.eol.escape_to_nit}\n"
			sys.stderr.write "Expecting: \"{expected_custom.escape_to_nit}\"\n"
			sys.stderr.write "Got: \"{out.to_s.escape_to_nit}\"\n"
		end
		writer.close
	end

	fun test_empty do expect(true, new Array[String], "\r\n", "#")

	fun test_one_cell do expect(true, ["foo/\"\r\n,"],
			"\"foo/\"\"\r\n,\"\r\n",
			"/foo//\"\r\n,/#")

	fun test_optimize_size_escaped do expect(false, ["foo/\"\r\n,"],
			"\"foo/\"\"\r\n,\"\r\n",
			"/foo//\"\r\n,/#")

	fun test_optimize_size_eol do expect(false, ["foo\r#\n"],
			"\"foo\r#\n\"\r\n",
			"/foo\r#\n/#")

	fun test_optimize_size_unescaped do expect(false, ["foo"],
			"foo\r\n",
			"foo#")

	fun test_multiple_cells do expect(true, ["1", "", "/"],
			"\"1\",,\"/\"\r\n",
			"/1/::////#")

	fun test_multiple_cells_optimize_size do expect(false, ["1", "", "/"],
			"1,,/\r\n",
			"1::////#")
end

class TestCsvReader
	super TestSuite

	# The custom CSV format used in the tests.
	private var custom_format = new CsvFormat('/', ':', "#")

	# Expect to read `expected`.
	#
	# Parameters:
	#
	# * `skip_empty`: value of the `skip_empty` option.
	# * `modal_escaping`: value of the `modal_escaping` option.
	# * `input_rfc4180`: input in the RFC 4180 format.
	# * `input_custom`: input in the custom CSV format.
	# * `expected`: expected resulting table.
	private fun expect(skip_empty: Bool,
			input_rfc4180: String,
			input_custom: String,
			expected: SequenceRead[SequenceRead[String]]) do
		var istream: IStream
		var reader: CsvReader
		var i = 0

		istream = new StringIStream(input_rfc4180)
		reader = new CsvReader(istream)
		reader.skip_empty = skip_empty
		assert_table_equals("RFC 4180", reader, expected.iterator)

		istream = new StringIStream(input_custom)
		reader = new CsvReader.with_format(istream, custom_format)
		reader.skip_empty = skip_empty
		assert_table_equals("{custom_format.delimiter} " +
				"{custom_format.separator} " +
				"{custom_format.eol.escape_to_nit}", reader, expected.iterator)
	end

	# Check if tables are equal.
	private fun assert_table_equals(format: String,
			actual: Iterator[SequenceRead[String]],
			expected: Iterator[SequenceRead[String]]) do
		var i = 0

		for actual_row in actual do
			assert expected.is_ok else fail(format,"Too many rows.")
			var expected_row = expected.item
			assert_row_equals(format, i, actual_row, expected_row)
			expected.next
			i += 1
		end
		assert not expected.is_ok else fail(format, "Not enough rows.")
		expected.finish
	end

	# Check if rows are equal.
	private fun assert_row_equals(format: String,
			row_index: Int,
			actual: SequenceRead[String],
			expected: SequenceRead[String]) do
		assert actual == expected else
			fail(format, """
At row {{{row_index}}}.
Expecting: {{{expected.join("|")}}}
Got: {{{actual.join("|")}}}""")
		end
	end

	# Output an error message with an indication of the format used.
	private fun fail(format: Text, message: Text) do
		sys.stderr.write "\nFormat: {format}\n"
		sys.stderr.write message
		sys.stderr.write "\n"
	end

	fun test_empty do expect(false, "", "", new Array[Array[String]])

	fun test_empty_eol do expect(false, "\r\n", "#", [[""]])

	fun test_empty_skip do expect(true, "", "", new Array[Array[String]])

	fun test_empty_skip1 do expect(true, "\r\n", "#", new Array[Array[String]])

	fun test_empty_skip2 do expect(true, "\r\n\r\n", "##", new Array[Array[String]])

	fun test_escaped do expect(false, "\"foo/\"\"\r\n,\"\r\n",
			"/foo//\"\r\n,/#", [["foo/\"\r\n,"]])

	fun test_unescaped do expect(false, "foo bar\r\n",
			"foo bar#", [["foo bar"]])

	fun test_escaped_no_eol do expect(false, "\"foo/\"\"\r\n,\"",
			"/foo//\"\r\n,/", [["foo/\"\r\n,"]])

	fun test_unescaped_no_eol do expect(false, "foo bar",
			"foo bar", [["foo bar"]])

	fun test_multiple_cells do expect(false, "\"1\",,\"/\"\r\n",
			"/1/::////#", [["1", "", "/"]])

	fun test_multiple_cells_unescaped do expect(false, "1,,/\r\n",
			"1::////#", [["1", "", "/"]])

	fun test_modal_escaping do expect(false, """a"b""/c","d"e""",
			"""/ab"///c:d/e/""", [["""ab"/c""", "de"]])

	fun test_skip_start do expect(true, "\r\n1,,/\r\n",
			"#1::////#", [["1", "", "/"]])

	fun test_dont_skip_empty_delimited do expect(true, "\"\"\r\n",
			"//#", [[""]])

	fun test_dont_skip_multiple_empty_cells do expect(true, ",\r\n",
			":#", [["",""]])

	fun test_mutiple_rows do expect(false, "\"a\r\nb#\",c\r\nd,\r\n,e\r\n",
			"/a\r\nb#/:c#d:#:e#", [["a\r\nb#", "c"], ["d", ""], ["", "e"]])
end
