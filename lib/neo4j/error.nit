# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Errors thrown by the `neo4j` library.
module neo4j::error

import json::static

# An error thrown by the `neo4j` API.
#
#     var error = new NeoError("ErrorMessage", "ErrorName")
#     assert error.to_json == "\{\"error\":\"ErrorName\",\"message\":\"ErrorMessage\"\}"
class NeoError
	super Error
	super Jsonable

	# The name of the error.
	#
	# Used to programmatically distinguish this kind of error from others.
	var name: String

	redef fun to_json do
		return "\{\"error\":{name.to_json},\"message\":{message.to_json}\}"
	end

	redef fun to_s do return "[{name}] {super}"
end
