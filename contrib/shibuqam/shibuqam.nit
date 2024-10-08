# This file is part of NIT ( https://nitlanguage.org ).
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

# Gather the authenticated users on UQAM websites.
#
# The main method to use is `HttpRequest::user` and it extracts the information
# of the authenticated user from the request header.
# The real authentication must be done by a mandatory reverse proxy server.
module shibuqam

import nitcorn
private import md5
import serialization

# Information on a user from Shibboleth/UQAM
class User
	serialize

	# The *code permanent* (or the uid for non student)
	var id: String

	# Usually the first name
	var given_name: String

	# Usually "FamilyName, FirstName"
	var display_name: String

	# The email @courrier.uqam.ca (or @uqam.ca for non student)
	var email: String

	# The Gravatar URL (based on `email`)
	var avatar: String is lazy do
		var md5 = email.md5
		return "https://www.gravatar.com/avatar/{md5}?d=retro"
	end
end

redef class HttpRequest
	# Extract the Shibboleth/UQAM information from the header, if any.
	#
	# We assume that a reverse proxy does the authentication and fill the request header.
	# If the server is accessible directly, these headers can be easily forged.
	# Thus, we assume that the reverse proxy is not by-passable.
	#
	# The reverse proxy might choose to force an authentication or not.
	# If there is no authentication, there is no information in the request header (or with the `(null)` value).
	# In this case, `null` is returned by this function.
	fun user: nullable User do
		var user = header.get_or_null("Remote-User")
		if user == null or user == "(null)" then return null

		var display_name = header.get_or_null("User-Display-Name")
		var given_name = header.get_or_null("User-Given-Name")
		var email = header.get_or_null("User-Mail")

		if display_name == null or given_name == null or email == null then return null

		var res = new User(user, given_name, display_name, email)
		return res
	end
end
