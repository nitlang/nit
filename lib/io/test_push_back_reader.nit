# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Test suites for module `push_back_reader`
module test_push_back_reader is test_suite

import test_suite
import io::push_back_reader

class TestPushBackDecorator
	super TestSuite

	private fun sample: PushBackDecorator do
		return new PushBackDecorator(new StringIStream("""
abcd

efg
"""))
	end

	fun test_read_char do
		var subject = sample

		assert 'a' == subject.read_char.ascii
	end

	fun test_read_char_eof do
		var subject = new PushBackDecorator(new StringIStream(""))

		assert -1 == subject.read_char
	end

	fun test_unread_read_char do
		var subject = sample

		subject.unread_char('z')
		assert 'z' == subject.read_char.ascii
		assert 'a' == subject.read_char.ascii
	end

	fun test_read_partial do
		var subject = sample

		assert "abcd" == subject.read(4)
	end

	fun test_read_too_much do
		var subject = sample
		var exp = """
abcd

efg
"""
		assert exp == subject.read(100)
	end

	fun test_unread_read do
		var subject = sample

		subject.unread("a")
		assert "aab" == subject.read(3)
	end

	fun test_unread_read_mixed do
		var subject = sample

		subject.unread("a")
		assert "aab" == subject.read(3)
	end

	fun test_read_all do
		var subject = sample
		var exp = """
abcd

efg
"""
		assert exp == subject.read_all
	end

	fun test_unread_read_all do
		var subject = sample
		var exp = """
fooabcd

efg
"""
		subject.unread("foo")
		assert exp == subject.read_all
	end

	fun test_read_line do
		var subject = sample

		assert "abcd\n" == subject.read_line
		assert "\n" == subject.read_line
	end

	fun test_unread_read_line do
		var subject = sample

		subject.unread("a\nb")
		assert "a\n" == subject.read_line
		assert "babcd\n" == subject.read_line
	end

	fun test_eof do
		var subject = sample

		assert not subject.eof
		subject.read_all
		assert subject.eof
	end

	fun test_eof_empty do
		var subject = new PushBackDecorator(new StringIStream(""))

		assert subject.eof
	end

	fun test_close do
		var subject = sample

		subject.close
		assert subject.eof
	end

	fun test_unread_close do
		var subject = sample

		subject.unread("foo")
		subject.close
		assert subject.eof
	end

	fun test_unread_char_order do
		var subject = sample

		subject.unread_char('z')
		subject.unread_char('y')
		assert "yzab" == subject.read(4)
	end

	fun test_unread_order do
		var subject = sample

		subject.unread("bar")
		subject.unread("foo")
		assert "foobarab" == subject.read(8)
	end
end
