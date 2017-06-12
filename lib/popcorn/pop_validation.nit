# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2016 Alexandre Terrasa <alexandre@moz-code.org>
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

# Quick and easy validation framework for Json inputs
#
# Validators can be used in Popcorn apps to valid your json inputs before
# data processing and persistence.
#
# Here an example with a Book management app. We use an ObjectValidator to validate
# the books passed to the API in the `POST /books` handler.
#
# ~~~
# import popcorn
# import popcorn::pop_json
# import serialization
#
# # Serializable book representation.
# class Book
#	super Serializable
#
#	# Book ISBN
#	var isbn: String
#
#	# Book title
#	var title: String
#
#	# Book image (optional)
#	var img: nullable String
#
#	# Book price
#	var price: Float
# end
#
# class BookValidator
#	super ObjectValidator
#
#	redef init do
#		add new ISBNField("isbn")
#		add new StringField("title", min_size=1, max_size=255)
#		add new StringField("img", required=false)
#		add new FloatField("price", min=0.0, max=999.0)
#	end
# end
#
# class BookHandler
#	super Handler
#
#	# Insert a new Book
#	redef fun post(req, res) do
#		var validator = new BookValidator
#		if not validator.validate(req.body) then
#			res.json(validator.validation, 400)
#			return
#		end
#		# TODO data persistence
#	end
# end
# ~~~
module pop_validation

import json::static

# The base class of all validators
abstract class DocumentValidator

	# Validation result
	#
	# Accessible to the client after the `validate` method has been called.
	var validation: ValidationResult is noinit

	# Validate the `document` input
	#
	# Result of the validation can be found in the `validation` attribute.
	fun validate(document: String): Bool do
		validation = new ValidationResult
		return true
	end
end

# Validation Result representation
#
# Can be convertted to a JsonObject so it can be reterned in a Json HttpResponse.
#
# Errors messages are grouped into *scopes*. A scope is a string that specify wich
# field or document the error message is related to.
class ValidationResult
	super Serializable

	# Object parsed during validation
	#
	# Can be used as a quick way to access the parsed JsonObject instead of
	# reparsing it during the answer.
	#
	# See `ObjectValidator`.
	var object: nullable JsonObject = null is writable

	# Array parsed during validation
	#
	# Can be used as a quick way to access the parsed JsonArray instead of
	# reparsing it during the answer.
	#
	# See `ArrayValidator`.
	var array: nullable JsonArray = null is writable

	# Errors found during validation
	#
	# Errors are grouped by scope.
	var errors = new HashMap[String, Array[String]]

	# Generate a new error `message` into `scope`
	fun add_error(scope, message: String) do
		if not errors.has_key(scope) then
			errors[scope] = new Array[String]
		end
		errors[scope].add message
	end

	# Get the errors for `scope`
	fun error(scope: String): Array[String] do
		if not errors.has_key(scope) then
			return new Array[String]
		end
		return errors[scope]
	end

	# Does `self` contains `errors`?
	fun has_error: Bool do return errors.not_empty

	redef fun core_serialize_to(v) do
		var errors = new JsonObject
		for k, e in self.errors do
			errors[k] = new JsonArray.from(e)
		end
		v.serialize_attribute("has_error", has_error)
		v.serialize_attribute("errors", errors)
	end

	# Returns the validation result as a pretty formated string
	fun to_pretty_string: String do
		var b = new Buffer
		if not has_error then
			b.append "Everything is correct\n"
		else
			b.append "There is errors\n\n"
			for k, v in errors do
				b.append "{k}:\n"
				for vv in v do
					b.append "\t{vv}\n"
				end
				b.append "\n"
			end
		end
		return b.write_to_string
	end
end

# Check a JsonObject
# ~~~
# var validator = new ObjectValidator
# validator.add new RequiredField("id", required = true)
# validator.add new StringField("login", min_size=4)
# validator.add new IntField("age", min=0, max=100)
# assert not validator.validate("""{}""")
# assert not validator.validate("""[]""")
# assert validator.validate("""{ "id": "", "login": "Alex", "age": 10 }""")
# ~~~
class ObjectValidator
	super DocumentValidator

	# Validators to apply on the object
	var validators = new Array[FieldValidator]

	redef fun validate(document) do
		super
		var json = document.parse_json
		if json == null then
			validation.add_error("document", "Expected JsonObject got `null`")
			return false
		end
		return validate_json(json)
	end

	# Validate a Serializable input
	fun validate_json(json: Serializable): Bool do
		if not json isa JsonObject then
			validation.add_error("document", "Expected JsonObject got `{json.class_name}`")
			return false
		end
		validation.object = json
		for validator in validators do
			var res = validator.validate_field(self, json)
			if not res then return false
		end
		return true
	end

	# Add a validator
	fun add(validator: FieldValidator) do validators.add validator
end

# Check a JsonArray
# ~~~
# var validator = new ArrayValidator
# assert not validator.validate("""{}""")
# assert validator.validate("""[]""")
# assert validator.validate("""[ "id", 10, {} ]""")
#
# validator = new ArrayValidator(allow_empty=false)
# assert not validator.validate("""[]""")
# assert validator.validate("""[ "id", 10, {} ]""")
#
# validator = new ArrayValidator(length=3)
# assert not validator.validate("""[]""")
# assert validator.validate("""[ "id", 10, {} ]""")
# ~~~
class ArrayValidator
	super DocumentValidator

	# Allow empty arrays (default: true)
	var allow_empty: nullable Bool

	# Check array length (default: no check)
	var length: nullable Int

	redef fun validate(document) do
		super
		var json = document.parse_json
		if json == null then
			validation.add_error("document", "Expected JsonArray got `null`")
			return false
		end
		return validate_json(json)
	end

	# Validate a Serializable input
	fun validate_json(json: Serializable): Bool do
		if not json isa JsonArray then
			validation.add_error("document", "Expected JsonArray got `{json.class_name}`")
			return false
		end
		validation.array = json
		var allow_empty = self.allow_empty
		if json.is_empty and (allow_empty != null and not allow_empty) then
			validation.add_error("document", "Cannot be empty")
			return false
		end
		var length = self.length
		if length != null and json.length != length then
			validation.add_error("document", "Array length must be exactly `{length}`")
			return false
		end

		return true
	end
end

# Something that can validate a JsonObject field
abstract class FieldValidator

	# Field to validate
	var field: String

	# Validate `field` in `obj`
	fun validate_field(v: ObjectValidator, obj: JsonObject): Bool is abstract
end

# Check if a field exists
#
# ~~~
# var json1 = """{ "field1": "", "field2": "foo", "field3": 10, "field4": [] }"""
# var json2 = """{ "field1": "", "field2": "foo", "field3": 10 }"""
# var json3 = """{ "field1": "", "field2": "foo" }"""
#
# var validator = new ObjectValidator
# validator.add new RequiredField("field1")
# validator.add new RequiredField("field2")
# validator.add new RequiredField("field3")
# validator.add new RequiredField("field4", required=false)
#
# assert validator.validate(json1)
# assert validator.validate(json2)
# assert not validator.validate(json3)
# assert validator.validation.error("field3") == ["Required field"]
# ~~~
class RequiredField
	super FieldValidator

	# Is this field required?
	var required: nullable Bool

	redef fun validate_field(v, obj) do
		var required = self.required
		if (required != null and required or required == null) and not obj.has_key(field) then
			v.validation.add_error(field, "Required field")
			return false
		end
		return true
	end
end

# Check if a field is a String
#
# `min_size` and `max_size` are optional
#
# ~~~
# var validator = new ObjectValidator
# validator.add new StringField("field", required=false)
# assert validator.validate("""{}""")
#
# validator = new ObjectValidator
# validator.add new StringField("field")
# assert not validator.validate("""{}""")
# assert not validator.validate("""{ "field": 10 }""")
#
# validator = new ObjectValidator
# validator.add new StringField("field", min_size=3)
# assert validator.validate("""{ "field": "foo" }""")
# assert not validator.validate("""{ "field": "fo" }""")
# assert not validator.validate("""{ "field": "" }""")
#
# validator = new ObjectValidator
# validator.add new StringField("field", max_size=3)
# assert validator.validate("""{ "field": "foo" }""")
# assert not validator.validate("""{ "field": "fooo" }""")
#
# validator = new ObjectValidator
# validator.add new StringField("field", min_size=3, max_size=5)
# assert not validator.validate("""{ "field": "fo" }""")
# assert validator.validate("""{ "field": "foo" }""")
# assert validator.validate("""{ "field": "foooo" }""")
# assert not validator.validate("""{ "field": "fooooo" }""")
# ~~~
class StringField
	super RequiredField

	# String min size (default: not checked)
	var min_size: nullable Int

	# String max size (default: not checked)
	var max_size: nullable Int

	redef fun validate_field(v, obj) do
		if not super then return false
		var val = obj.get_or_null(field)
		if val == null then
			if required == null or required == true then
				v.validation.add_error(field, "Expected String got `null`")
				return false
			else
				return true
			end
		end
		if not val isa String then
			v.validation.add_error(field, "Expected String got `{val.class_name}`")
			return false
		end
		var min_size = self.min_size
		if min_size != null and val.length < min_size then
			v.validation.add_error(field, "Must be at least `{min_size} characters long`")
			return false
		end
		var max_size = self.max_size
		if max_size != null and val.length > max_size then
			v.validation.add_error(field, "Must be at max `{max_size} characters long`")
			return false
		end
		return true
	end
end

# Check if a field is an Int
#
# ~~~
# var validator = new ObjectValidator
# validator.add new IntField("field", required=false)
# assert validator.validate("""{}""")
#
# validator = new ObjectValidator
# validator.add new IntField("field")
# assert not validator.validate("""{}""")
# assert not validator.validate("""{ "field": "foo" }""")
# assert validator.validate("""{ "field": 10 }""")
#
# validator = new ObjectValidator
# validator.add new IntField("field", min=3)
# assert validator.validate("""{ "field": 3 }""")
# assert not validator.validate("""{ "field": 2 }""")
#
# validator = new ObjectValidator
# validator.add new IntField("field", max=3)
# assert validator.validate("""{ "field": 3 }""")
# assert not validator.validate("""{ "field": 4 }""")
#
# validator = new ObjectValidator
# validator.add new IntField("field", min=3, max=5)
# assert not validator.validate("""{ "field": 2 }""")
# assert validator.validate("""{ "field": 3 }""")
# assert validator.validate("""{ "field": 5 }""")
# assert not validator.validate("""{ "field": 6 }""")
# ~~~
class IntField
	super RequiredField

	# Min value (default: not checked)
	var min: nullable Int

	# Max value (default: not checked)
	var max: nullable Int

	redef fun validate_field(v, obj) do
		if not super then return false
		var val = obj.get_or_null(field)
		if val == null then
			if required == null or required == true then
				v.validation.add_error(field, "Expected Int got `null`")
				return false
			else
				return true
			end
		end
		if not val isa Int then
			v.validation.add_error(field, "Expected Int got `{val.class_name}`")
			return false
		end
		var min = self.min
		if min != null and val < min then
			v.validation.add_error(field, "Must be greater or equal to `{min}`")
			return false
		end
		var max = self.max
		if max != null and val > max then
			v.validation.add_error(field, "Must be smaller or equal to `{max}`")
			return false
		end
		return true
	end
end

# Check if a field is a Float
#
# ~~~
# var validator = new ObjectValidator
# validator.add new FloatField("field", required=false)
# assert validator.validate("""{}""")
#
# validator = new ObjectValidator
# validator.add new FloatField("field")
# assert not validator.validate("""{}""")
# assert not validator.validate("""{ "field": "foo" }""")
# assert validator.validate("""{ "field": 10.5 }""")
#
# validator = new ObjectValidator
# validator.add new FloatField("field", min=3.0)
# assert validator.validate("""{ "field": 3.0 }""")
# assert not validator.validate("""{ "field": 2.0 }""")
#
# validator = new ObjectValidator
# validator.add new FloatField("field", max=3.0)
# assert validator.validate("""{ "field": 3.0 }""")
# assert not validator.validate("""{ "field": 4.0 }""")
#
# validator = new ObjectValidator
# validator.add new FloatField("field", min=3.0, max=5.0)
# assert not validator.validate("""{ "field": 2.0 }""")
# assert validator.validate("""{ "field": 3.0 }""")
# assert validator.validate("""{ "field": 5.0 }""")
# assert not validator.validate("""{ "field": 6.0 }""")
# ~~~
class FloatField
	super RequiredField

	# Min value (default: not checked)
	var min: nullable Float

	# Max value (default: not checked)
	var max: nullable Float

	redef fun validate_field(v, obj) do
		if not super then return false
		var val = obj.get_or_null(field)
		if val == null then
			if required == null or required == true then
				v.validation.add_error(field, "Expected Float got `null`")
				return false
			else
				return true
			end
		end
		if not val isa Float then
			v.validation.add_error(field, "Expected Float got `{val.class_name}`")
			return false
		end
		var min = self.min
		if min != null and val < min then
			v.validation.add_error(field, "Must be smaller or equal to `{min}`")
			return false
		end
		var max = self.max
		if max != null and val > max then
			v.validation.add_error(field, "Must be greater or equal to `{max}`")
			return false
		end
		return true
	end
end

# Check if a field is a Bool
#
# ~~~
# var validator = new ObjectValidator
# validator.add new BoolField("field", required=false)
# assert validator.validate("""{}""")
# assert validator.validate("""{ "field": true }""")
# assert validator.validate("""{ "field": false }""")
# assert not validator.validate("""{ "field": "foo" }""")
#
# validator = new ObjectValidator
# validator.add new BoolField("field")
# assert not validator.validate("""{}""")
# assert validator.validate("""{ "field": true }""")
# assert validator.validate("""{ "field": false }""")
# assert not validator.validate("""{ "field": "foo" }""")
# ~~~
#
# No type conversion is applied on the input value:
# ~~~
# assert not validator.validate("""{ "field": "true" }""")
# assert not validator.validate("""{ "field": 1 }""")
# assert not validator.validate("""{ "field": [true] }""")
# ~~~
class BoolField
	super RequiredField

	redef fun validate_field(v, obj) do
		if not super then return false
		var val = obj.get_or_null(field)
		if val == null then
			if required == null or required == true then
				v.validation.add_error(field, "Expected Bool got `null`")
				return false
			else
				return true
			end
		end
		if not val isa Bool then
			v.validation.add_error(field, "Expected Bool got `{val.class_name}`")
			return false
		end
		return true
	end
end

# Check that a field is a JsonObject
#
# ~~~
# var validator = new ObjectValidator
# validator.add new RequiredField("id", required = true)
# var user_val = new ObjectField("user")
# user_val.add new RequiredField("id", required = true)
# user_val.add new StringField("login", min_size=4)
# validator.add user_val
# assert not validator.validate("""{ "id": "", "user": { "login": "Alex" } }""")
# assert validator.validate("""{ "id": "", "user": { "id": "foo", "login": "Alex" } }""")
# ~~~
class ObjectField
	super RequiredField
	super ObjectValidator

	redef var validation = new ValidationResult

	redef fun validate_field(v, obj) do
		if not super then return false
		var val = obj.get_or_null(field)
		if val == null then
			if required == null or required == true then
				v.validation.add_error(field, "Expected Object got `null`")
				return false
			else
				return true
			end
		end
		var res = validate_json(val)
		for field, messages in validation.errors do
			for message in messages do v.validation.add_error("{self.field}.{field}", message)
		end
		return res
	end
end

# Check that a field is a JsonArray
#
# ~~~
# var validator = new ObjectValidator
# validator.add new RequiredField("id", required = true)
# validator.add new ArrayField("orders", allow_empty=false)
# assert not validator.validate("""{ "id": "", "orders": [] }""")
# assert validator.validate("""{ "id": "", "orders": [ 1 ] }""")
# ~~~
class ArrayField
	super RequiredField
	super ArrayValidator

	autoinit field=, required=, allow_empty=, length=

	redef var validation = new ValidationResult

	redef fun validate_field(v, obj) do
		if not super then return false
		var val = obj.get_or_null(field)
		if val == null then
			if required == null or required == true then
				v.validation.add_error(field, "Expected Array got `null`")
				return false
			else
				return true
			end
		end
		var res = validate_json(val)
		for field, messages in validation.errors do
			for message in messages do v.validation.add_error("{self.field}.{field}", message)
		end
		return res
	end
end

# Check if two fields values match
#
# ~~~
# var validator = new ObjectValidator
# validator.add new FieldsMatch("field1", "field2")
#
# assert validator.validate("""{ "field1": {}, "field2": {} }""")
# assert validator.validate("""{ "field1": "foo", "field2": "foo" }""")
# assert validator.validate("""{ "field1": null, "field2": null }""")
# assert validator.validate("""{}""")
#
# assert not validator.validate("""{ "field1": {}, "field2": [] }""")
# assert not validator.validate("""{ "field1": "foo", "field2": "bar" }""")
# assert not validator.validate("""{ "field1": null, "field2": "" }""")
# assert not validator.validate("""{ "field1": "foo" }""")
# ~~~
class FieldsMatch
	super FieldValidator

	# Other field to compare with
	var other: String

	redef fun validate_field(v, obj) do
		var val1 = obj.get_or_null(field)
		var val2 = obj.get_or_null(other)
		if val1 != val2 then
			v.validation.add_error(field, "Values mismatch: `{val1 or else "null"}` against `{val2 or else "null"}`")
			return false
		end
		return true
	end
end

# Check if a field match a regular expression
#
# ~~~
# var validator = new ObjectValidator
# validator.add new RegexField("title", "[A-Z][a-z]+".to_re)
# assert not validator.validate("""{ "title": "foo" }""")
# assert validator.validate("""{ "title": "Foo" }""")
# ~~~
class RegexField
	super RequiredField

	autoinit field, re, required

	# Regular expression to match
	var re: Regex

	redef fun validate_field(v, obj) do
		if not super then return false
		var val = obj.get_or_null(field)
		if val == null then
			if required == null or required == true then
				v.validation.add_error(field, "Expected String got `null`")
				return false
			else
				return true
			end
		end
		if not val isa String then
			v.validation.add_error(field, "Expected String got `{val.class_name}`")
			return false
		end
		if not val.has(re) then
			v.validation.add_error(field, "Does not match `{re.string}`")
			return false
		end
		return true
	end
end

# Check if a field is a valid email
#
# ~~~
# var validator = new ObjectValidator
# validator.add new EmailField("email")
# assert not validator.validate("""{ "email": "" }""")
# assert not validator.validate("""{ "email": "foo" }""")
# assert validator.validate("""{ "email": "alexandre@moz-code.org" }""")
# assert validator.validate("""{ "email": "a+b@c.d" }""")
# ~~~
class EmailField
	super RegexField

	autoinit field, required

	redef var re = "(^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\\.[a-zA-Z0-9.-]+$)".to_re
end

# Check if a field is a valid ISBN
#
# ~~~
# var validator = new ObjectValidator
# validator.add new ISBNField("isbn")
# assert not validator.validate("""{ "isbn": "foo" }""")
# assert validator.validate("""{ "isbn": "ISBN 0-596-00681-0" }""")
# ~~~
class ISBNField
	super RegexField

	autoinit field, required

	redef var re = "(^ISBN [0-9]-[0-9]\{3\}-[0-9]\{5\}-[0-9]?$)".to_re
end

# Check if a field is a valid URL
#
# Matched against the following regular expression:
# ~~~raw
# ^(http|https):\/\/[a-zA-Z0-9\-_]+(\.[a-zA-Z0-9\-_]+)+([a-zA-Z0-9\-\.,@?^=%&amp;:/~\+#]*[a-zA-Z0-9\-\@?^=%&amp;/~\+#])?
# ~~~
# You should redefine the base regular expression `re` with your own.
#
# ~~~
# var validator = new ObjectValidator
# validator.add new URLField("url")
# assert not validator.validate("""{ "url": "" }""")
# assert not validator.validate("""{ "url": "foo" }""")
# assert not validator.validate("""{ "url": "http://foo" }""")
# assert validator.validate("""{ "url": "http://nitlanguage.org" }""")
# assert validator.validate("""{ "url": "http://nitlanguage.org/foo" }""")
# assert validator.validate("""{ "url": "http://nitlanguage.org/foo?q" }""")
# assert validator.validate("""{ "url": "http://nitlanguage.org/foo?q&a" }""")
# assert validator.validate("""{ "url": "http://nitlanguage.org/foo?q&a=1" }""")
# ~~~
class URLField
	super RegexField

	autoinit field, required

	redef var re = "^(http|https):\\/\\/[a-zA-Z0-9\\-_]+(\\.[a-zA-Z0-9\\-_]+)+([a-zA-Z0-9\\-\\.,@?^=%&:/~\\+#]*[a-zA-Z0-9\\-\\@?^=%&/~\\+#])?".to_re
end

# Check if a field value is already used
#
# This class provides a stub validator for fields that should contain a unique value along an
# application (typically logins or ids).
#
# Here an example that uses a `Repository` if an email is unique:
# ~~~nitish
# class UniqueEmailField
#	super UniqueField
#
#	var users: UsersRepository
#
#	redef fun check_unicity(v, field, val) do
#		var user = users.find_by_email(val)
#		if user != null then
#			v.validation.add_error(field, "Email `{val}` already used")
#			return false
#		end
#		return true
#	end
# end
# ~~~
class UniqueField
	super StringField

	# Check if `val` is already used somewhere
	#
	# You must redefine this method to handle your own validation.
	fun check_unicity(v: ObjectValidator, field, val: String): Bool is abstract

	redef fun validate_field(v, obj) do
		if not super then return false
		var val = obj.get_or_null(field)
		if not val isa String then return false
		if not check_unicity(v, field, val) then return false
		return true
	end
end
