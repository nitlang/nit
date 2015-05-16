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

redef class ToolContext
	# Generate serialization and deserialization methods on `auto_serializable` annotated classes.
	var serialization_phase_pre_model: Phase = new SerializationPhasePreModel(self, null)

	# The second phase of the serialization
	var serialization_phase_post_model: Phase = new SerializationPhasePostModel(self,
		[modelize_class_phase, serialization_phase_pre_model])

	private fun place_holder_type_name: String do return "PlaceHolderTypeWhichShouldNotExist"
end

# TODO add annotations on attributes (volatile, sensitive or do_not_serialize?)
private class SerializationPhasePreModel
	super Phase

	redef fun process_annotated_node(nclassdef, nat)
	do
		# Skip if we are not interested
		if nat.n_atid.n_id.text != "auto_serializable" then return
		if not nclassdef isa AStdClassdef then
			toolcontext.error(nclassdef.location, "Syntax Error: only a concrete class can be automatically serialized.")
			return
		end

		# Add `super Serializable`
		var sc = toolcontext.parse_superclass("Serializable")
		sc.location = nat.location
		nclassdef.n_propdefs.add sc

		generate_serialization_method(nclassdef)

		generate_deserialization_init(nclassdef)
	end

	redef fun process_nmodule(nmodule)
	do
		# Clear the cache of constructors to review before adding to it
		nmodule.inits_to_retype.clear

		# collect all classes
		var auto_serializable_nclassdefs = new Array[AStdClassdef]
		for nclassdef in nmodule.n_classdefs do
			if nclassdef isa AStdClassdef and
			   not nclassdef.get_annotations("auto_serializable").is_empty then
				auto_serializable_nclassdefs.add nclassdef
			end
		end

		if not auto_serializable_nclassdefs.is_empty then
			generate_deserialization_method(nmodule, auto_serializable_nclassdefs)
		end
	end

	fun generate_serialization_method(nclassdef: AClassdef)
	do
		var npropdefs = nclassdef.n_propdefs

		var code = new Array[String]
		code.add "redef fun core_serialize_to(v)"
		code.add "do"
		code.add "	super"

		for attribute in npropdefs do if attribute isa AAttrPropdef then
			var name = attribute.name
			code.add "	v.serialize_attribute(\"{name}\", {name})"
		end

		code.add "end"

		# Create method Node and add it to the AST
		npropdefs.push(toolcontext.parse_propdef(code.join("\n")))
	end

	# Add a constructor to the automated nclassdef
	fun generate_deserialization_init(nclassdef: AStdClassdef)
	do
		var npropdefs = nclassdef.n_propdefs

		var code = new Array[String]
		code.add "redef init from_deserializer(v: Deserializer)"
		code.add "do"
		code.add "	super"
		code.add "	v.notify_of_creation self"

		for attribute in npropdefs do if attribute isa AAttrPropdef then
			var n_type = attribute.n_type
			var type_name
			if n_type == null then
				# Use a place holder, we will replace it with the infered type after the model phases
				type_name = toolcontext.place_holder_type_name
			else
				type_name = n_type.type_name
			end
			var name = attribute.name

			code.add ""
			code.add "\tvar {name} = v.deserialize_attribute(\"{name}\")"
			code.add "\tassert {name} isa {type_name} else print \"Unsupported type for `\{class_name\}::{name}`, got '\{{name}.class_name\}'; expected {type_name}\""
			code.add "\tself.{name} = {name}"
		end

		code.add "end"

		var npropdef = toolcontext.parse_propdef(code.join("\n")).as(AMethPropdef)
		npropdefs.add npropdef
		nclassdef.parent.as(AModule).inits_to_retype.add npropdef
	end

	# Added to the abstract serialization service
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
			code.add "	redef fun deserialize_class(name)"
			code.add "	do"
		else
			toolcontext.error(deserializer_npropdef.location, "Error: you cannot define `Deserializer::deserialize_class` in a module where you use `auto_serializable`.")
			return
		end

		for nclassdef in nclassdefs do
			var name = nclassdef.n_id.text
			if nclassdef.n_formaldefs.is_empty and
				not nclassdef.n_classkind isa AAbstractClasskind then

				code.add "		if name == \"{name}\" then return new {name}.from_deserializer(self)"
			end
		end

		code.add "		return super"
		code.add "	end"

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
			var mpropdef = npropdef.mpropdef
			if mpropdef == null then continue # skip error
			var v = new PreciseTypeVisitor(npropdef, mpropdef.mclassdef, toolcontext)
			npropdef.accept_precise_type_visitor v
		end
	end
end

# Visitor on generated constructors to replace the expected type of deserialized attributes
private class PreciseTypeVisitor
	super Visitor

	var npropdef: AMethPropdef
	var mclassdef: MClassDef
	var toolcontext: ToolContext

	redef fun visit(n) do n.accept_precise_type_visitor(self)
end

redef class ANode
	private fun accept_precise_type_visitor(v: PreciseTypeVisitor) do visit_all(v)
end

redef class AIsaExpr
	redef fun accept_precise_type_visitor(v)
	do
		if n_type.collect_text != v.toolcontext.place_holder_type_name then return

		var attr_name = "_" + n_expr.collect_text
		for mattrdef in v.mclassdef.mpropdefs do
			if mattrdef isa MAttributeDef and mattrdef.name == attr_name then
				var new_ntype = v.toolcontext.parse_something(mattrdef.static_mtype.to_s)
				n_type.replace_with new_ntype
				break
			end
		end
	end
end

redef class AAttrPropdef
	private fun name: String
	do
		return n_id2.text
	end
end

redef class AType
	private fun type_name: String
	do
		var name = n_id.text

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
			if nclassdef isa AStdClassdef and nclassdef.n_id.text == "Deserialization" then
				return nclassdef
			end
		end

		return null
	end

	private var inits_to_retype = new Array[AMethPropdef]
end

redef class AStdClassdef
	private fun deserializer_npropdef: nullable AMethPropdef
	do
		for npropdef in n_propdefs do if npropdef isa AMethPropdef then
			var id = npropdef.n_methid
			if id isa AIdMethid and id.n_id.text == "deserialize_class" then
				return npropdef
			end
		end

		return null
	end
end
