# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Standard error-management infrastructure.
#
module error

import text

# Standard class for error messages
class Error
	# A short human-readable error message.
	#
	# This message is short and informative and could be displayed on the console, a dialog-box
	# or written in a log file.
	#
	# Message should be explicative, autonomous and do not depend on contextual information.
	#
	# Eg. instead of "Fatal error: cannot open file",
	# something like "File error, cannot open /some/path/document.ext, file not found." is preferred,
	# where the message is informative as it, and the severity of the error is not assumed:
	# while fatal for the library, it could be something benign for the program.
	var message: String

	# An original error that caused the creation of this error, if any.
	#
	# This is used to chain errors and track the implication of various sub-systems for a given error.
	#
	# When displaying an error the end user, causes can be recursively displayed.
	var cause: nullable Error = null is writable

	redef fun to_s do return message
end

# Helper class used as a return value of methods that may give errors instead of values.
#
# Functions that return useful values or errors could use it to simulate an easy-to use multiple-return.
#
# ~~~
# fun division(a,b: Int): MaybeError[Int, Error]
# do
#   if b == 0 then return new MaybeError[Int, Error](null, new Error("Arithmetic Error: try to divide {a} by 0"))
#   return new MaybeError[Int, Error](a / b, null)
# end
#
# assert division(10, 2).is_error  == false
# assert division(10, 0).is_error  == true
# ~~~
#
# Clients has to handle the error:
#
# ~~~
# var res = division(10, 2)
# if res.is_error then
#   print res.error
#   exit 1
# end
# print res.value
# assert res.value == 5
# ~~~
class MaybeError[V, E: Error]
	# The value, if any
	var maybe_value: nullable V

	# The error, if any
	var maybe_error: nullable E

	# It there an error?
	fun is_error: Bool do return maybe_error != null

	# The value
	# REQUIRE: `not is_error`
	fun value: V do return maybe_value.as(V)

	# The error
	# REQUIRE: `is_error`
	fun error: E do return maybe_error.as(E)

	redef fun to_s do
		var e = maybe_error
		if e != null then return e.to_s
		return value.as(not null).to_s
	end
end
