module application_controller

import nitcorn
import json

abstract class RestAction
	super Action

	var method: String
	var required_params: Array[String] = new Array[String]
	var params: HashMap[String, String] = new HashMap[String, String]

	fun run(request: HttpRequest, truncated_uri: String): HttpResponse is abstract

	fun bad_request: HttpResponse do
		return new HttpResponse(400)
	end

	fun check_param(request: HttpRequest, truncated_uri: String): Bool do
		for param in required_params do
			if request.string_arg(param) != null then
				params[param] = request.string_arg(param).as(String)
			else if request.param(param) != null then
				params[param] = request.param(param).as(String)
			else
				return false
			end
		end
		return true
	end

	fun json_response(status: Bool, message: String): String do
		var response = new JsonObject
		response["status"] = status
		response["message"] = message

		return response.to_json
	end

	redef fun answer(request, url) do
		if not check_param(request, url) then
			return new HttpResponse(401)
		end
		if method == request.method then
			return run(request, url)
		end
		return bad_request
	end

end