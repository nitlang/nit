# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Intro `JsonParseError` which is exposed by all JSON reading APIs
module error

import parser_base

# JSON format error at parsing
class JsonParseError
	super Error
	serialize

	# Location of the error in source
	var location: nullable Location = null
end
