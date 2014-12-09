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
