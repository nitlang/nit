# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

module test_abstract_text is test

import text
intrude import ropes

class TestText
	test

	private var factories: Collection[TextFactory] = [
		new ConcatFactory,
		new FlatBufferFactory
	: TextFactory]

	fun test_escape_to_c is test do
		for f in factories do
			assert f.create("abAB12<>&").escape_to_c       == "abAB12<>&"
			assert f.create("\n\"'\\").escape_to_c         == "\\n\\\"\\'\\\\"
			assert f.create("allo???!").escape_to_c        == "allo??\\?!"
			assert f.create("??=??/??'??(??)").escape_to_c == "?\\?=?\\?/??\\'?\\?(?\\?)"
			assert f.create("??!??<??>??-").escape_to_c    == "?\\?!?\\?<?\\?>?\\?-"
		end
	end
end

# A factory that creates instances of a particular implementation of `Text`
interface TextFactory

	# Create a `Text` instance from the specified string
	fun create(s: String): Text is abstract
end


class ConcatFactory
	super TextFactory

	redef fun create(s) do return new Concat("", s)
end
class FlatBufferFactory
	super TextFactory

	redef fun create(s) do return new FlatBuffer.from(s)
end
