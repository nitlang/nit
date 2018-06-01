module data_binder_test is test_suite

import serialization
import json

import test_suite
import data_binder

class TestDataBinder
	super TestSuite

	var data_binder: DataBinder

	init do end

	redef fun before_test do
		var target = new Person
		var static_type = "Person"
		var errors = new Array[Error]
		var validator = new PersonValidator

		data_binder = new DataBinder(target, static_type, validator)
	end

	fun test_constructor do
		assert data_binder.errors.length == 0
	end

	fun test_bind_deserializer_error do

		var my_request = """{ "toto": "JeanMich" }"""
		var person = data_binder.bind(my_request)
		assert data_binder.errors.length == 1
		assert data_binder.errors[0].to_s == "Deserialization Error: attribute `Person::name` missing from JSON object"
	end

	fun test_bind_deserializer_ok do

		var my_request = """{ "name": "JeanMich" }"""
		data_binder.bind(my_request)
		assert data_binder.errors.length == 0
	end

	fun test_bind_validation_error do

		var my_request = """{ "name": "Nom de personne beaucoup trop long" }"""
		data_binder.bind(my_request)
		data_binder.validate
		print data_binder.errors
		assert data_binder.errors.length == 1
		assert data_binder.errors[0].to_s == "A Person name should be less than 10 characters."
	end

	fun test_bind_validation_and_deserialization_ok do

		var my_request = """{ "name": "JeanMich" }"""
		var person = data_binder.bind(my_request)
		data_binder.validate
		print data_binder.errors
		assert data_binder.errors.length == 0
		assert person.as(Person).name == "JeanMich"
	end
end


class PersonValidator
	super Validator

	redef fun supports(target: nullable Object): Bool do
		return target isa Person
	end

	redef fun validate(target: nullable Object, errors: Array[Error]) do
		if not supports(target) then
			errors.add(new Error("This is not a Person."))
			return
		end

		var person = target.as(Person)

		if person.name.byte_length > 10 then
			errors.add(new Error("A Person name should be less than 10 characters."))
		end
	end
end

class Person
	serialize
	var name: String is noinit, writable
end
