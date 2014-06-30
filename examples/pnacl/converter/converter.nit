# This file is part of NIT ( http://www.nitlanguage.org )
#
# Copyright 2014 Johan Kayser <kayser.johan@gmail.com>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Example of a currency converter using PNaCl with Nit
#
# First imports the pnacl module
# Then redefines the 'handle_dictionary' method
# Creates a converter and initializes it
# Finally checks for dictionaries

import pnacl

class Converter
	super PnaclApp

	# We have to redefine the method to do what we want when receiving a dictionary from JS
	redef fun handle_dictionary(dictionary: PepperDictionary)
	do
		# Getting values from the dictionary
		var from = dictionary["from"]
		var to = dictionary["to"]
		var value = dictionary["value"]

		# If conversion to the same currency return the same value
		if from isa String and to isa String then
			if from == "EUR" and to == "EUR" then
				if value isa String then
					var rez = value.to_f
					var d = new PepperDictionary
					d["value"] = rez
				        post_dictionary d
				end
			end
		end
		# If conversion to the same currency return the same value
		if from isa String and to isa String then
			if from == "CAD" and to == "CAD" then
				if value isa String then
					var rez = value.to_f
					var d = new PepperDictionary
					d["value"] = rez
				        post_dictionary d
				end
			end
		end
		# If conversion to the same currency return the same value
		if from isa String and to isa String then
			if from == "USD" and to == "USD" then
				if value isa String then
					var rez = value.to_f
					var d = new PepperDictionary
					d["value"] = rez
				        post_dictionary d
				end
			end
		end
		# Converts EUR to CAD
		if from == "EUR" and to == "CAD" then
			if value isa String then
				var rez = (value.to_f * 1.52) # April 30 2014
				var d = new PepperDictionary
				d["value"] = rez
		                post_dictionary d
			end
		end
		# Converts EUR to USD
		if from == "EUR" and to == "USD" then
			if value isa String then
				var rez = (value.to_f * 1.38640) # April 30 2014
				var d = new PepperDictionary
				d["value"] = rez
		                post_dictionary d
			end
		end
		# Converts CAD to EUR
		if from == "CAD" and to == "EUR" then
			if value isa String then
				var rez = (value.to_f * 0.65840) # April 30 2014
				var d = new PepperDictionary
				d["value"] = rez
		                post_dictionary d
			end
		end
		# Converts CAD to USD
		if from == "CAD" and to == "USD" then
			if value isa String then
				var rez = (value.to_f * 0.91240) # April 30 2014
				var d = new PepperDictionary
				d["value"] = rez
		                post_dictionary d
			end
		end
		# Converts USD to EUR
		if from == "USD" and to == "EUR" then
			if value isa String then
				var rez = (value.to_f * 0.721) # April 30 2014
				var d = new PepperDictionary
				d["value"] = rez
		                post_dictionary d
			end
		end
		# Converts USD to CAD
		if from == "USD" and to == "CAD" then
			if value isa String then
				var rez = (value.to_f * 1.095) # April 30 2014
				var d = new PepperDictionary
				d["value"] = rez
		                post_dictionary d
			end
		end
	end
end

redef fun app do return once new Converter
app.initialize # Needed to correctly set up Nit control over the Pepper API
app.run # Launches an infinite loop in order to check for dictionaries
