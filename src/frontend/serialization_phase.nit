# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2013 Jean-Philippe Caissy <jpcaissy@piji.ca>
# Copyright 2013 Guillaume Auger <jeho@resist.ca>
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Phase generating methods to serialize Nit objects to different formats
module serialization_phase

private import parser_util
import modelize
private import annotation
intrude import literal

redef class ToolContext

	# Apply the annotation `serialize_as`
	var serialization_phase_rename: Phase = new SerializationPhaseRename(self, null)

	# Generate serialization and deserialization methods on `auto_serializable` annotated classes.
	var serialization_phase_pre_model: Phase = new SerializationPhasePreModel(self,
		[serialization_phase_rename])

	# The second phase of the serialization
	var serialization_phase_post_model: Phase = new SerializationPhasePostModel(self,
		[modelize_property_phase, serialization_phase_pre_model])
end

redef class ANode
	# Is this node annotated to be made serializable?
	private fun is_serialize: Bool do return false

	# Is this node annotated to not be made serializable?
	private fun is_noserialize: Bool do return false
end

redef class ADefinition

	redef fun is_serialize do
		return get_annotations("serialize").not_empty or
			get_annotations("auto_serializable").not_empty
	end

	redef fun is_noserialize do
		return get_annotations("noserialize").not_empty
	end
end

private class SerializationPhaseRename
	super Phase

	redef fun process_annotated_node(node, nat)
	do
		var text = nat.n_atid.n_id.text
		if text != "serialize_as" then return

		if not node isa AAttrPropdef then
			toolcontext.error(node.location,
				"Syntax Error: annotation `{text}` applies only to attributes.")
			return
		end

		# Can't use `arg_as_string` because it needs the literal phase
		var args = nat.n_args
		if args.length != 1 or not args.first isa AStringFormExpr then
			toolcontext.error(node.location,
				"Syntax Error: annotation `{text}` expects a single string literal as argument.")
			return
		end

		var t = args.first.collect_text
		var val = t.substring(1, t.length-2)
		node.serialize_name = val
	end
end

private class SerializationPhasePreModel
	super Phase

	redef fun process_annotated_node(node, nat)
	do
		# Skip if we are not interested
		var text = nat.n_atid.n_id.text
		var serialize = text == "auto_serializable" or text == "serialize"
		var noserialize = text == "noserialize"
		if not (serialize or noserialize) then return

		# Check legality of annotation
		if node isa AModuledecl then
			if noserialize then toolcontext.error(node.location, "Syntax Error: superfluous use of `{text}`, by default a module is `{text}`")
			return
		else if not (node isa AStdClassdef or node isa AAttrPropdef) then
			toolcontext.error(node.location,
				"Syntax Error: only a class, a module or an attribute can be annotated with `{text}`.")
			return
		else if serialize and node.is_noserialize then
			toolcontext.error(node.location,
				"Syntax Error: an entity cannot be both `{text}` and `noserialize`.")
			return
		else if node.as(Prod).get_annotations(text).length > 1 then
			toolcontext.warning(node.location, "useless-{text}",
				"Warning: duplicated annotation `{text}`.")
		end

		# Check the `serialize` state of the parent
		if not node isa AModuledecl then
			var up_serialize = false
			var up: nullable ANode = node
			while up != null do
				up = up.parent
				if up == null then
					break
				else if up.is_serialize then
					up_serialize = true
					break
				else if up.is_noserialize then
					break
				end
			end

			# Check for useless double declarations
			if serialize and up_serialize then
				toolcontext.warning(node.location, "useless-serialize",
					"Warning: superfluous use of `{text}`.")
			else if noserialize and not up_serialize then
				toolcontext.warning(node.location, "useless-noserialize",
					"Warning: superfluous use of `{text}`.")
			end
		end
	end

	redef fun process_nclassdef(nclassdef)
	do
		if not nclassdef isa AStdClassdef then return

		var serialize_by_default = nclassdef.how_serialize

		if serialize_by_default != null then

			# Add `super Serializable`
			var sc = toolcontext.parse_superclass("Serializable")
			sc.location = nclassdef.location
			nclassdef.n_propdefs.add sc

			# Add services
			var per_attribute = not serialize_by_default
			generate_serialization_method(nclassdef, per_attribute)
			generate_deserialization_init(nclassdef)
		end
	end

	redef fun process_nmodule(nmodule)
	do
		# Clear the cache of constructors to review before adding to it
		nmodule.inits_to_retype.clear

		# collect all classes
		var auto_serializable_nclassdefs = nmodule.auto_serializable_nclassdefs
		if not auto_serializable_nclassdefs.is_empty then
			generate_deserialization_method(nmodule, auto_serializable_nclassdefs)
		end
	end

	fun generate_serialization_method(nclassdef: AClassdef, per_attribute: Bool)
	do
		var npropdefs = nclassdef.n_propdefs

		var code = new Array[String]
		code.add "redef fun core_serialize_to(v)"
		code.add "do"
		code.add "	super"

		for attribute in npropdefs do if attribute isa AAttrPropdef then

			# Is `attribute` to be skipped?
			if (per_attribute and not attribute.is_serialize) or
				attribute.is_noserialize then continue

			code.add "	v.serialize_attribute(\"{attribute.serialize_name}\", {attribute.name})"
		end

		code.add "end"

		# Create method Node and add it to the AST
		npropdefs.push(toolcontext.parse_propdef(code.join("\n")))
	end

	# Add an empty constructor to the automated nclassdef
	#
	# Will be filled by `SerializationPhasePostModel`.
	fun generate_deserialization_init(nclassdef: AClassdef)
	do
		var npropdefs = nclassdef.n_propdefs

		# Do not insert a `from_deserializer` if it already exists
		for npropdef in npropdefs do
			if npropdef isa AMethPropdef then
				var methid = npropdef.n_methid
				if methid != null and methid.collect_text == "from_deserializer" then
					return
				end
			end
		end

		var code = """
redef init from_deserializer(v: Deserializer) do abort"""

		var npropdef = toolcontext.parse_propdef(code).as(AMethPropdef)
		npropdefs.add npropdef
		nclassdef.parent.as(AModule).inits_to_retype.add npropdef
	end

	# Add an empty `Deserializer::deserialize_class_intern`
	#
	# Will be filled by `SerializationPhasePostModel`.
	fun generate_deserialization_method(nmodule: AModule, nclassdefs: Array[AStdClassdef])
	do
		var code = new Array[String]

		var deserializer_nclassdef = nmodule.deserializer_nclassdef
		var deserializer_npropdef
		if deserializer_nclassdef == null then
			# create the class
			code.add "redef class Deserializer"
			deserializer_npropdef = null
		else
			deserializer_npropdef = deserializer_nclassdef.deserializer_npropdef
		end

		if deserializer_npropdef == null then
			# create the property
			code.add "	redef fun deserialize_class_intern(name) do abort"
		else
			toolcontext.error(deserializer_npropdef.location, "Error: `Deserializer::deserialize_class_intern` is generated and must not be defined, use `deserialize_class` instead.")
			return
		end

		if deserializer_nclassdef == null then
			code.add "end"
			nmodule.n_classdefs.add toolcontext.parse_classdef(code.join("\n"))
		else
			deserializer_nclassdef.n_propdefs.add(toolcontext.parse_propdef(code.join("\n")))
		end
	end
end

private class SerializationPhasePostModel
	super Phase

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
redef init from_deserializer(v: Deserializer)
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

			if type_name == "nullable Object" then
				# Don't type check
				code.add """
	var {{{name}}} = v.deserialize_attribute("{{{attribute.serialize_name}}}", "{{{type_name}}}")
"""
			else code.add """
	var {{{name}}} = v.deserialize_attribute("{{{attribute.serialize_name}}}", "{{{type_name}}}")
	if not {{{name}}} isa {{{type_name}}} then
		# Check if it was a subjectent error
		v.errors.add new AttributeTypeError(self, "{{{attribute.serialize_name}}}", {{{name}}}, "{{{type_name}}}")

		# Clear subjacent error
		if v.keep_going == false then return
	else
		self.{{{name}}} = {{{name}}}
	end
"""
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
		var types_to_deserialize = new Set[String]

		## Local serializable standard class without parameters
		for nclassdef in nclassdefs do
			var mclass = nclassdef.mclass
			if mclass == null then continue

			if mclass.arity == 0 and mclass.kind == concrete_kind then
				types_to_deserialize.add mclass.name
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

					if is_serializable then types_to_deserialize.add mtype.to_s
				end
			end
		end

		# Build implementation code
		var code = new Array[String]
		code.add "redef fun deserialize_class_intern(name)"
		code.add "do"

		for name in types_to_deserialize do
			code.add "	if name == \"{name}\" then return new {name}.from_deserializer(self)"
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

redef class AAttrPropdef
	private fun name: String do return n_id2.text

	# Name of this attribute in the serialized format
	private var serialize_name: String = name is lazy
end

redef class AType
	private fun type_name: String
	do
		var name = n_qid.n_id.text

		if n_kwnullable != null then name = "nullable {name}"

		var types = n_types
		if not types.is_empty then
			var params = new Array[String]
			for t in types do params.add(t.type_name)
			return "{name}[{params.join(", ")}]"
		else return name
	end
end

redef class AModule
	private fun deserializer_nclassdef: nullable AStdClassdef
	do
		for nclassdef in n_classdefs do
			if not nclassdef isa AStdClassdef then continue
			var n_qid = nclassdef.n_qid
			if n_qid != null and n_qid.n_id.text == "Deserializer" then return nclassdef
		end

		return null
	end

	private var inits_to_retype = new Array[AMethPropdef]

	redef fun is_serialize
	do
		var n_moduledecl = n_moduledecl
		return n_moduledecl != null and n_moduledecl.is_serialize
	end

	# `AStdClassdef` marked as serializable, itself or one of theur attribute
	private var auto_serializable_nclassdefs: Array[AStdClassdef] is lazy do
		var array = new Array[AStdClassdef]
		for nclassdef in n_classdefs do
			if nclassdef isa AStdClassdef and nclassdef.how_serialize != null then
				array.add nclassdef
			end
		end
		return array
	end
end

redef class AStdClassdef
	private fun deserializer_npropdef: nullable AMethPropdef
	do
		for npropdef in n_propdefs do if npropdef isa AMethPropdef then
			var id = npropdef.n_methid
			if id isa AIdMethid and id.n_id.text == "deserialize_class_intern" then
				return npropdef
			end
		end

		return null
	end

	# Is this classed marked `serialize`? in part or fully?
	#
	# This method returns 3 possible values:
	# * `null`, this class is not to be serialized.
	# * `true`, the attributes of this class are to be serialized by default.
	# * `false`, the attributes of this class are to be serialized on demand only.
	fun how_serialize: nullable Bool
	do
		# Is there a declaration on the classdef or the module?
		var serialize = is_serialize

		if not serialize and not is_noserialize then
			# Is the module marked serialize?
			serialize = parent.as(AModule).is_serialize
		end

		if serialize then return true

		if not serialize then
			# Is there an attribute marked serialize?
			for npropdef in n_propdefs do
				if npropdef.is_serialize then
					return false
				end
			end
		end

		return null
	end
end
