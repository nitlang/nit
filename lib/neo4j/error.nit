# This file is part of NIT ( https://nitlanguage.org ).
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
import json

# An error thrown by the `neo4j` API.
#
#     var error = new NeoError("ErrorMessage", "ErrorName")
#     assert error.to_json == """{"message":"ErrorMessage","cause":null,"error":"ErrorName"}"""
class NeoError
	super Error
	serialize

	# The name of the error.
	#
	# Used to programmatically distinguish this kind of error from others.
	var name: String is serialize_as "error"

	redef fun to_s do return "[{name}] {super}"
end
