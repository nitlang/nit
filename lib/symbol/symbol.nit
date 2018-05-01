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

# Library for simple interning of strings
module symbol

redef class String
	# Get the unique corresponding to the string
	fun to_symbol: Symbol
	do
		var symbol_dictionary = once new HashMap[String, Symbol]
		if symbol_dictionary.has_key(self) then
			return symbol_dictionary[self]
		else
			var symbol = new Symbol(self)
			symbol_dictionary[self] = symbol
			return symbol
		end
	end
end

# A symbol is a unique immutable string
class Symbol
	private var string: String
	redef fun to_s do return string.to_s
end
