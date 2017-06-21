module validator

#
# One aspect of the validation is not handled here: if there is some fields
# missing to create the DTO object.
# This case will be handled by the DataBinder class and more precisely by the
# JsonDeserializer class.
# So when the data arrives here, it must be (obviously) deserialized.
#
abstract class Validator

	fun supports(target: nullable Object): Bool is abstract
	fun validate(target: nullable Object, errors: Array[Error])
	do
		if not self.supports(target) then
			errors.add(new Error("Validation Error - Unknown type"))
		end
	end
end
