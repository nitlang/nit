# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2017 Alexandre Terrasa <alexandre@moz-code.org>
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

# Introduce useful services for JSON REST API handlers.
#
# Validation and Deserialization of request bodies:
#
# ~~~nit
# class MyJsonHandler
#	super Handler
#
#	# Validator used do validate the body
#	redef var validator = new MyFormValidator
#
#	# Define the kind of objects expected by the deserialization process
#	redef type BODY: MyForm
#
#	redef fun post(req, res) do
#		var post = validate_body(req, res)
#		if post == null then return # Validation error: let popcorn return a HTTP 400
#		var form = deserialize_body(req, res)
#		if form == null then return # Deserialization error: let popcorn return a HTTP 400
#
#		# TODO do something with the input
#		print form.name
#	end
# end
#
# class MyForm
#	serialize
#
#	var name: String
# end
#
# class MyFormValidator
#	super ObjectValidator
#
#	init do
#		add new StringField("name", min_size=1, max_size=255)
#	end
# end
# ~~~
module pop_json

import json
import meta
import pop_handlers
import pop_validation

redef class Handler

	# Validator used to check body input
	#
	# Here we use the `pop_validation` module to validate JSON document from the request body.
	var validator: nullable DocumentValidator = null

	# Validate body input with `validator`
	#
	# Try to validate the request body as a json document using `validator`:
	# * Returns the validated string input if the result of the validation is ok.
	# * Answers a json error and returns `null` if something went wrong.
	# * If no `validator` is set, returns the body without validation.
	#
	# Example:
	#
	# ~~~nit
	# class ValidatedHandler
	#	super Handler
	#
	#	redef var validator = new MyObjectValidator
	#
	#	redef fun post(req, res) do
	#		var body = validate_body(req, res)
	#		if body == null then return # Validation error
	#		# At this point popcorn returned a HTTP 400 code with the validation error
	#		# if the validation failed.
	#
	#		# TODO do something with the input
	#		print body
	#	end
	# end
	#
	# class MyObjectValidator
	#	super ObjectValidator
	#
	#	init do
	#		add new StringField("name", min_size=1, max_size=255)
	#	end
	# end
	# ~~~
	fun validate_body(req: HttpRequest, res: HttpResponse): nullable String do
		var body = req.body

		var validator = self.validator
		if validator == null then return body

		if not validator.validate(body) then
			res.json(validator.validation, 400)
			return null
		end
		return body
	end

	# Deserialize the request body
	#
	# Returns the deserialized request body body or `null` if something went wrong.
	# If the object cannot be deserialized, answers with a HTTP 400.
	#
	# See `BODY` and `new_body_object`.
	#
	# Example:
	# ~~~nit
	# class MyDeserializedHandler
	#	super Handler
	#
	#	redef type BODY: MyObject
	#
	#	redef fun post(req, res) do
	#		var form = deserialize_body(req, res)
	#		if form == null then return # Deserialization error
	#		# At this point popcorn returned a HTTP 400 code if something was wrong with
	#		# the deserialization process
	#
	#		# TODO do something with the input
	#		print form.name
	#	end
	# end
	#
	# class MyObject
	#	serialize
	#
	#	var name: String
	# end
	# ~~~
	fun deserialize_body(req: HttpRequest, res: HttpResponse): nullable BODY do
		var body = req.body
		var deserializer = new JsonDeserializer(body)
		var form = deserializer.deserialize(body_type)
		if not form isa BODY or deserializer.errors.not_empty then
			res.json_error("Bad input", 400)
			return null
		end
		return form
	end

	# Kind of objects returned by `deserialize_body`
	#
	# Define it in each sub handlers depending on the kind of objects sent in request bodies.
	type BODY: Serializable

	private var body_type: String is lazy do return (new GetName[BODY]).to_s
end

redef class HttpResponse

	# Write data as JSON and set the right content type header.
	fun json(json: nullable Serializable, status: nullable Int, plain, pretty: nullable Bool) do
		header["Content-Type"] = media_types["json"].as(not null)
		if json == null then
			send(null, status)
		else
			send(json.serialize_to_json(plain or else true, pretty or else false), status)
		end
	end

	# Write error as JSON.
	#
	# Format: `{"message": message, "status": status}`
	fun json_error(message: String, status: Int) do
		var obj = new JsonObject
		obj["status"] = status
		obj["message"] = message
		json(obj, status)
	end
end
