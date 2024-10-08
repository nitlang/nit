# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Test suite for `testing`.
module test_testing is test

import saxophonit::testing

class TestSaxEventLogger
	test

	# Constants for diff formatting.

	# Treminal’s default formatting.
	private var default: String is noinit

	# Formatting for insertions.
	private var ins: String is noinit

	# Formatting for emphased insertions.
	private var ins_em: String is noinit

	# Formatting for deletions.
	private var del: String is noinit

	# Formatting for emphased deletions
	private var del_em: String is noinit


	private var a = new SAXEventLogger
	private var b = new SAXEventLogger

	private var init_done: Bool = false

	fun before_test is before do
		if not init_done then
			default = a.term_default
			ins = a.term_insertion
			ins_em = a.term_insertion_emphasis
			del = a.term_deletion
			del_em = a.term_deletion_emphasis
			init_done = true
		end
		a.clear_log
		b.clear_log
	end

	private fun assert_equals(id: Int, expected: String, actual: String) do
		assert equals: expected == actual else
			sys.stderr.write("\nAssert {id} failed. Expected:\n")
			sys.stderr.write(expected)
			sys.stderr.write("\nGot:\n")
			sys.stderr.write(actual)
			sys.stderr.write("\n")
		end
	end

	fun test_diff_empty is test do
		assert "" == a.diff(b).to_s
		assert "" == b.diff(a).to_s
	end

	fun test_diff_equal1 is test do
		b.start_document
		a.start_document
		assert "" == a.diff(b).to_s
		assert "" == b.diff(a).to_s
	end

	fun test_diff_equal2 is test do
		b.start_document
		b.end_document
		a.start_document
		a.end_document
		assert "" == a.diff(b).to_s
		assert "" == b.diff(a).to_s
	end

	fun test_diff_insertion is test do
		var exp: String
		var test: String

		b.start_document
		b.start_dtd("html", "", "")
		b.end_dtd
		b.end_document

		a.start_document
		a.start_dtd("html", "", "")
		a.end_document

		exp = "= 0|start_document\n" +
				"= 1|start_dtd; html; ; \n" +
				"{del}< 2|{del_em}end_document{del}{default}\n" +
				"{ins}> 2|{ins_em}end_dtd{ins}{default}\n" +
				"{ins}> 3|{ins_em}end_document{ins}{default}\n"
		test = a.diff(b).to_s
		assert_equals(1, exp, test)

		exp = "= 0|start_document\n" +
				"= 1|start_dtd; html; ; \n" +
				"{del}< 2|{del_em}end_dtd{del}{default}\n" +
				"{ins}> 2|{ins_em}end_document{ins}{default}\n" +
				"{del}< 3|{del_em}end_document{del}{default}\n"
		test = b.diff(a).to_s
		assert_equals(2, exp, test)
	end

	fun test_diff_edition is test do
		var exp: String
		var test: String

		b.start_document
		b.start_dtd("html", "", "")
		b.end_dtd
		b.end_document

		a.start_document
		a.start_dtd("html", "foo", "")
		a.end_dtd
		a.end_document

		exp = "= 0|start_document\n" +
				"{del}< 1|start_dtd; html; {del_em}foo{del}; {default}\n" +
				"{ins}> 1|start_dtd; html; {ins_em}{ins}; {default}\n" +
				"= 2|end_dtd\n" +
				"= 3|end_document\n"
		test = a.diff(b).to_s
		assert_equals(1, exp, test)

		exp = "= 0|start_document\n" +
				"{del}< 1|start_dtd; html; {del_em}{del}; {default}\n" +
				"{ins}> 1|start_dtd; html; {ins_em}foo{ins}; {default}\n" +
				"= 2|end_dtd\n" +
				"= 3|end_document\n"
		test = b.diff(a).to_s
		assert_equals(2, exp, test)
	end
end
