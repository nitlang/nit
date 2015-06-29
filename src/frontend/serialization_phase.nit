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

redef class ANode
	# Is this node annotated to be made serializable?
	private fun is_serialize: Bool do return false

	# Is this node annotated to not be made serializable?
	private fun is_noserialize: Bool do return false

	private fun accept_precise_type_visitor(v: PreciseTypeVisitor) do visit_all(v)
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

# TODO add annotations on attributes (volatile, sensitive or do_not_serialize?)
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
			loop
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

		# Is there a declaration on the classdef or the module?
		var serialize = nclassdef.is_serialize

		if not serialize and not nclassdef.is_noserialize then
			# Is the module marked serialize?
			serialize = nclassdef.parent.as(AModule).is_serialize
		end

		var per_attribute = false
		if not serialize then
			# Is there an attribute marked serialize?
			for npropdef in nclassdef.n_propdefs do
				if npropdef.is_serialize then
					serialize = true
					per_attribute = true
					break
				end
			end
		end

		if serialize then
			# Add `super Serializable`
			var sc = toolcontext.parse_superclass("Serializable")
			sc.location = nclassdef.location
			nclassdef.n_propdefs.add sc

			# Add services
			generate_serialization_method(nclassdef, per_attribute)
			generate_deserialization_init(nclassdef, per_attribute)
		end
	end

	redef fun process_nmodule(nmodule)
	do
		# Clear the cache of constructors to review before adding to it
		nmodule.inits_to_retype.clear

		# collect all classes
		var auto_serializable_nclassdefs = new Array[AStdClassdef]
		for nclassdef in nmodule.n_classdefs do
			if nclassdef isa AStdClassdef and nclassdef.is_serialize then
				auto_serializable_nclassdefs.add nclassdef
			end
		end

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

			var name = attribute.name
			code.add "	v.serialize_attribute(\"{name}\", {name})"
		end

		code.add "end"

		# Create method Node and add it to the AST
		npropdefs.push(toolcontext.parse_propdef(code.join("\n")))
	end

	# Add a constructor to the automated nclassdef
	fun generate_deserialization_init(nclassdef: AClassdef, per_attribute: Bool)
	do
		var npropdefs = nclassdef.n_propdefs

		var code = new Array[String]
		code.add """
redef init from_deserializer(v: Deserializer)
do
	super
	v.notify_of_creation self
"""

		for attribute in npropdefs do if attribute isa AAttrPropdef then

			# Is `attribute` to be skipped?
			if (per_attribute and not attribute.is_serialize) or
				attribute.is_noserialize then continue

			var n_type = attribute.n_type
			var type_name
			if n_type == null then
				# Use a place holder, we will replace it with the inferred type after the model phases
				type_name = toolcontext.place_holder_type_name
			else
				type_name = n_type.type_name
			end
			var name = attribute.name

			code.add """
	var {{{name}}} = v.deserialize_attribute("{{{name}}}")
	if not {{{name}}} isa {{{type_name}}} then
		# Check if it was a subjectent error
		v.errors.add new AttributeTypeError("TODO remove this arg on c_src regen",
			self, "{{{name}}}", {{{name}}}, "{{{type_name}}}")

		# Clear subjacent error
		if v.keep_going == false then return
	else
		self.{{{name}}} = {{{name}}}
	end
"""
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

	redef fun is_serialize do return n_moduledecl != null and n_moduledecl.is_serialize
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
