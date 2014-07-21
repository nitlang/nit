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

import phase
import parser_util

redef class ToolContext
	var serialization_phase: Phase = new SerializationPhase(self, null)
end

# TODO Sequences
# TODO add annotations on attributes (volatile, sensitive or do_not_serialize?)
private class SerializationPhase
	super Phase

	redef fun process_annotated_node(nclassdef, nat)
	do
		# Skip if we are not interested
		if nat.n_atid.n_id.text != "auto_serializable" then return
		if not nclassdef isa AStdClassdef then
			toolcontext.error(nclassdef.location, "Syntax error: only a concrete class can be automatically serialized.")
			return
		end

		# Add `super Serializable`
		var sc = toolcontext.parse_superclass("Serializable")
		sc.location = nat.location
		nclassdef.n_superclasses.add sc

		generate_serialization_method(nclassdef)

		generate_deserialization_init(nclassdef)
	end

	redef fun process_nmodule(nmodule)
	do
		# collect all classes
		var auto_serializable_nclassdefs = new Array[AStdClassdef]
		for nclassdef in nmodule.n_classdefs do
			if nclassdef isa AStdClassdef and
			   not nclassdef.collect_annotations_by_name("auto_serializable").is_empty then
				auto_serializable_nclassdefs.add nclassdef
			end
		end

		if not auto_serializable_nclassdefs.is_empty then
			generate_deserialization_method(nmodule, auto_serializable_nclassdefs)
		end
	end

	private fun generate_serialization_method(nclassdef: AClassdef)
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
	private fun generate_deserialization_init(nclassdef: AClassdef)
	do
		var npropdefs = nclassdef.n_propdefs

		var code = new Array[String]
		code.add "init from_deserializer(v: Deserializer)"
		code.add "do"
		code.add "	v.notify_of_creation self"

		for attribute in npropdefs do if attribute isa AAttrPropdef then
			if attribute.n_type == null then
				toolcontext.error(attribute.location, "NOT YET IMPLEMENTED: all attributes of an auto_serialized class definition must define a type.")
				continue
			end
			var name = attribute.name
			var type_name = attribute.type_name
			code.add ""
			code.add "\tvar {name} = v.deserialize_attribute(\"{name}\")"
			code.add "\tassert {name} isa {type_name} else print \"Expected attribute '{name}' to be of type '{type_name}', got '\{{name}.class_name\}'\""
			code.add "\tself.{name} = {name}"
		end

		code.add "end"
		npropdefs.add(toolcontext.parse_propdef(code.join("\n")))
	end

	# Added to the abstract serialization service
	private fun generate_deserialization_method(nmodule: AModule, nclassdefs: Array[AStdClassdef])
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
			toolcontext.error(deserializer_npropdef.location, "Annotation error: you cannot define Deserializer::deserialize_class in a module where you use \"auto_serializable\".")
			return
		end

		for nclassdef in nclassdefs do
			var name = nclassdef.n_id.text
			if not name.chars.has('[') then # FIXME this is a temporary hack
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

redef class AAttrPropdef
	private fun name: String
	do
		if n_id == null then return n_id2.text
		return n_id.text
	end

	private fun type_name: String
	do
		var name = n_type.n_id.text

		if n_type.n_kwnullable != null then name = "nullable {name}"

		var types = n_type.n_types
		if not types.is_empty then
			var params = new Array[String]
			for t in types do params.add(t.n_id.text)
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
