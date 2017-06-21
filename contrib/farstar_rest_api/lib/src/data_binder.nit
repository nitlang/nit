module data_binder

private import json
import farstar_rest_api::validator

#
# This class is used to handle errors coming from Deserilisation and Validation
# DataBinder must bind a request_body String to create a "static_type" obj.
# It can be specified a Validator in order to validate directly the obj created.
#
class DataBinder

	protected var target: nullable Object
	private var static_type: String
	private var validator: nullable Validator
	var errors = new Array[Error]

	fun bind(request_body: nullable String): nullable Object
	do
		if request_body == null then
			errors.add(new Error("Binding Error - Empty request body"))
			return null
		end

		var deserializer = new JsonDeserializer(request_body)
		target = deserializer.deserialize(static_type)

		for error in deserializer.errors do
			errors.add error
		end

		return target
	end

	fun validate
	do
		if not errors.not_empty and validator != null then
			validator.validate(target, errors)
		end
	end
end
