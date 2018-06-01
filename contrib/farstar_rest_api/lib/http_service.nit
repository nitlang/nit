# Module container of far*star services
module http_service

import serialization
import nitcorn
import json

class HttpError
	super Error
	serialize

	# Error message that can be shown to the user
	var user_message: nullable String
end

redef class HttpResponse

	# Respond with `data` in Json and a code 200
	init ok(data: Serializable)
	do
		init 200
		body = data.serialize_to_json(pretty=true, plain=true)
		header["Content-Type"] = "application/json"
		header["Access-Control-Allow-Origin"] = "*"
	end

	# Respond with a `BenitluxError` in JSON and a code 400
	init bad_request(error_message: nullable String)
	do
		init 400
		var error: HttpError

		if error_message == null then
			error = new HttpError("Bad Request", "Application error, or it needs to be updated.")
		else
			error = new HttpError("Bad Request", error_message)
		end
		body = error.serialize_to_json(pretty=true, plain=true)
		header["Content-Type"] = "application/json"
		header["Access-Control-Allow-Origin"] = "*"
	end

	# Respond with a `BenitluxError` in JSON and a code 500
	init not_found(error_message: nullable String)
	do
		init 404
		var error = new HttpError("Not Found", error_message)
		body = error.serialize_to_json(pretty=true, plain=true)
		header["Content-Type"] = "application/json"
		header["Access-Control-Allow-Origin"] = "*"
	end

	# Respond with a `BenitluxError` in JSON and a code 500
	init created
	do
		init 201
		header["Access-Control-Allow-Origin"] = "*"
	end

	init no_content
	do
		init 204
		header["Access-Control-Allow-Origin"] = "*"
	end

	init bad_media_type
	do
		init 415
		var error = new HttpError("Unssuportted media type")
		body = error.serialize_to_json(pretty=true, plain=true)
		header["Content-Type"] = "application/json"
		header["Access-Control-Allow-Origin"] = "*"
	end

	init not_modified
	do
		init 304
		var error = new HttpError("Not modified", "The resource hasn't been modified")
		body = error.serialize_to_json(pretty=true, plain=true)
		header["Access-Control-Allow-Origin"] = "*"
	end

	init options
	do
		init 200
		header["Access-Control-Allow-Origin"] = "*"
		header["Access-Control-Allow-Headers"] = "content-type"
		header["Access-Control-Allow-Methods"] = "PUT, POST"
	end

	# Respond with a `BenitluxError` in JSON and a code 500
	init server_error
	do
		init 500
		var error = new HttpError("Internal Server Error", "Server error, try again later.")
		body = error.serialize_to_json(pretty=true, plain=true)
		header["Content-Type"] = "application/json"
		header["Access-Control-Allow-Origin"] = "*"
	end
end
