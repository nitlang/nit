# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Phase generating methods (code) to serialize Nit objects
module serialization_code_gen_phase

intrude import serialization_model_phase

redef class ToolContext

	# The second phase of the serialization
	var serialization_phase_post_model: Phase = new SerializationPhasePostModel(self,
		[modelize_property_phase, serialization_phase_pre_model])
end

private class SerializationPhasePostModel
	super Phase

	# Fill the deserialization init `from_deserializer` and `Deserializer.deserialize_class_intern`
	redef fun process_nmodule(nmodule)
	do
		for npropdef in nmodule.inits_to_retype do
			var nclassdef = npropdef.parent
			assert nclassdef isa AStdClassdef

			var serialize_by_default = nclassdef.how_serialize
			assert serialize_by_default != null

			var per_attribute = not serialize_by_default
			fill_deserialization_init(nclassdef, npropdef, per_attribute)
		end

		# collect all classes
		var auto_serializable_nclassdefs = nmodule.auto_serializable_nclassdefs
		if not auto_serializable_nclassdefs.is_empty then
			fill_deserialization_method(nmodule, auto_serializable_nclassdefs)
		end
	end

	# Fill the constructor to the generated `init_npropdef` of `nclassdef`
	fun fill_deserialization_init(nclassdef: AClassdef, init_npropdef: AMethPropdef, per_attribute: Bool)
	do
		var code = new Array[String]
		code.add """
redef init from_deserializer(v)
do
	super
	v.notify_of_creation self
"""

		for attribute in nclassdef.n_propdefs do
			if not attribute isa AAttrPropdef then continue

			# Is `attribute` to be skipped?
			if (per_attribute and not attribute.is_serialize) or
				attribute.is_noserialize then continue

			var mtype = attribute.mtype
			if mtype == null then continue
			var type_name = mtype.to_s
			var name = attribute.name

			if mtype.need_anchor then
				# Check dynamic type of virtual params
				code.add """
	var {{{name}}} = v.deserialize_attribute("{{{attribute.serialize_name}}}", (new GetName[{{{mtype}}}]).to_s)
"""
			else
				# No param to check
				code.add """
	var {{{name}}} = v.deserialize_attribute("{{{attribute.serialize_name}}}", "{{{type_name}}}")
"""
			end

			if type_name == "nullable Object" then
				# Don't type check
				code.add """
	self.{{{name}}} = {{{name}}}
"""
			else
				# Needs type check
				code.add """
	if v.deserialize_attribute_missing then
"""
				# What to do when an attribute is missing?
				if attribute.has_value then
					# Leave it to the default value
				else if mtype isa MNullableType then
					# This is always a nullable type
					code.add """
		self.{{{name}}} = null"""
				else if mtype isa MFormalType then
					# This type nullability may change in subclasses
					code.add """
		var n___{{{name}}} = null
		if n___{{{name}}} isa {{{mtype}}} then
			self.{{{name}}} = n___{{{name}}}
		else
			v.errors.add new AttributeMissingError(self, "{{{name}}}")
		end"""
				else code.add """
		v.errors.add new AttributeMissingError(self, "{{{name}}}")"""

				code.add """
	else if not {{{name}}} isa {{{type_name}}} then
		v.errors.add new AttributeTypeError(self, "{{{attribute.serialize_name}}}", {{{name}}}, "{{{type_name}}}")
		if v.keep_going == false then return
	else
		self.{{{name}}} = {{{name}}}
	end
"""
			end
		end

		code.add "end"

		# Replace the body of the constructor
		var npropdef = toolcontext.parse_propdef(code.join("\n")).as(AMethPropdef)
		init_npropdef.n_block = npropdef.n_block

		# Run the literal phase on the generated code
		var v = new LiteralVisitor(toolcontext)
		v.enter_visit(npropdef.n_block)
	end

	# Fill the abstract serialization service
	fun fill_deserialization_method(nmodule: AModule, nclassdefs: Array[AStdClassdef])
	do
		var deserializer_nclassdef = nmodule.deserializer_nclassdef
		if deserializer_nclassdef == null then return
		var deserializer_npropdef = deserializer_nclassdef.deserializer_npropdef
		if deserializer_npropdef == null then return

		# Collect local types expected to be deserialized
		#
		# Map types' `name` to their `full_name`.
		#
		# FIXME use only the full name when there's a `class_full_name`
		var types_to_deserialize = new Map[String, String]

		## Local serializable standard class without parameters
		for nclassdef in nclassdefs do
			var mclass = nclassdef.mclass
			if mclass == null then continue

			if mclass.arity == 0 and mclass.kind == concrete_kind then
				types_to_deserialize[mclass.name] = mclass.full_name
			end
		end

		## Static parametized types on serializable attributes
		for nclassdef in nmodule.n_classdefs do
			if not nclassdef isa AStdClassdef then continue

			for attribute in nclassdef.n_propdefs do
				if not attribute isa AAttrPropdef then continue

				var serialize_by_default = nclassdef.how_serialize
				if serialize_by_default == null then continue
				var per_attribute = not serialize_by_default

				# Is `attribute` to be skipped?
				if (per_attribute and not attribute.is_serialize) or
					attribute.is_noserialize then continue

				var mtype = attribute.mtype
				if mtype == null then continue
				if mtype isa MNullableType then mtype = mtype.mtype

				if mtype isa MClassType and mtype.mclass.arity > 0 and
				   mtype.mclass.kind == concrete_kind and not mtype.need_anchor then

					# Check is a `Serializable`
					var mmodule = nmodule.mmodule
					if mmodule == null then continue

					var greaters = mtype.mclass.in_hierarchy(mmodule).greaters
					var is_serializable = false
					for sup in greaters do if sup.name == "Serializable" then
						is_serializable = true
						break
					end

					if is_serializable then types_to_deserialize[mtype.name] = mtype.full_name
				end
			end
		end

		# Build implementation code
		var code = new Array[String]
		code.add "redef fun deserialize_class_intern(name)"
		code.add "do"

		for name, full_name in types_to_deserialize do

			if full_name.has('-') then
				# Invalid module name, it is either artificial or a script
				# without module declaration (like those generated by nitunit)
				full_name = name
			end

			code.add "	if name == \"{name}\" then return new {full_name}.from_deserializer(self)"
		end

		code.add "	return super"
		code.add "end"

		# Replace the body of the constructor
		var npropdef = toolcontext.parse_propdef(code.join("\n")).as(AMethPropdef)
		deserializer_npropdef.n_block = npropdef.n_block

		# Run the literal phase on the generated code
		var v = new LiteralVisitor(toolcontext)
		v.enter_visit(npropdef.n_block)
	end
end
