# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Errors related to JSON parsing.
module json::error

import nitcc_runtime

# Ill-formed JSON.
class JsonParseError
	super Error

	# The location of the error in the original text.
	var position: nullable Position

	redef fun to_s do
		var p = position
		if p isa Position then
			return "Error Parsing JSON: [{p}] {super}"
		else
			return super
		end
	end
end
