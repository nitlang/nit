# 'Foo' module for basic functionality.
#
# @note Demonstration module
#
# @version 3.0
# @author Damien Bouard
#
#
module foo

# Documentation for 'Bar' class.
class Bar
	
	# Current day of the month.
	var day: Int = 24

	# Current month of the year.
	var month: String = "April"

	# Generate a greeting message.
	#
	# @returns the greeting message ('String')
	fun hello: String
	do
		var today: String = self.month + " " + self.day.to_s
		return "Welcome to you ! Today we are {today} !"
	end
end

# Documentation for 'Baz' class.
#
# @deprecated
class Baz

	# Print a personalized message.
	#
	# @deprecated
	# @param name - user's name ('String')
	# @require 'name' not null and not empty
	fun welcome(name: String)
	do
		if name != null and not name.is_empty then print "Hello {name} !"
	end
end
