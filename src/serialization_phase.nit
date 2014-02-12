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

# TODO automaticaly add Serializable as a super class
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

		generate_serialization_method(nclassdef)
	end

	private fun generate_serialization_method(nclassdef: AClassdef)
	do
		var npropdefs = nclassdef.n_propdefs

		var code = new Array[String]
		code.add "redef fun core_serialize_to(v)"
		code.add "do"
		code.add "	super"

		for attribute in npropdefs do if attribute isa AAttrPropdef then
			var name
			if attribute.n_id == null then 
				name = attribute.n_id2.text
			else name = attribute.n_id.text

			code.add "	v.serialize_attribute(\"{name}\", {name})"
		end

		code.add "end"

		# Create method Node and add it to the AST
		npropdefs.push(toolcontext.parse_propdef(code.join("\n")))
	end
end
