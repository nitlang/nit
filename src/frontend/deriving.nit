# This file is part of NIT ( https://nitlanguage.org ).
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

# Injection of automatic method definitions for standard methods, based on the attributes of the classes
#
# This phase is only a proof of concept and is inherently fragile:
#
# * syntactic code injection without semantic checking
# * ignorance of name conflicts
# * attributes are syntactically and locally collected
module deriving

private import parser_util
import modelize
private import annotation

redef class ToolContext
	# Main phase of `deriving`
	var deriving_phase: Phase = new DerivingPhase(self, null)
end

private class DerivingPhase
	super Phase

	redef fun process_annotated_node(nclassdef, nat)
	do
		if nat.name == "auto_inspect" then
			if not nclassdef isa AStdClassdef then
				toolcontext.error(nclassdef.location, "Syntax Error: only a concrete class can be `{nat.name}`.")
			else
				generate_inspect_method(nclassdef)
			end
		end

		if nat.name == "auto_derive" then
			if not nclassdef isa AStdClassdef then
				toolcontext.error(nclassdef.location, "Syntax Error: only a concrete class can be `{nat.name}`.")
			else
				generate_derive_to_map_method(nclassdef, nat)
			end
		end
	end

	fun generate_inspect_method(nclassdef: AClassdef)
	do
		var npropdefs = nclassdef.n_propdefs

		var code = new Array[String]
		code.add "redef fun inspect"
		code.add "do"
		code.add "	var res = super"
		code.add "	res = res.substring(0,res.length-1)"

		for attribute in npropdefs do if attribute isa AAttrPropdef then
			var name = attribute.n_id2.text
			code.add """	res += " {{{name}}}: {self.{{{name}}}.inspect}""""
		end

		code.add "	res += \">\""
		code.add "	return res"
		code.add "end"

		# Create method Node and add it to the AST
		npropdefs.push(toolcontext.parse_propdef(code.join("\n")))
	end

	fun generate_derive_to_map_method(nclassdef: AClassdef, nat: AAnnotation)
	do
		var npropdefs = nclassdef.n_propdefs

		var sc = toolcontext.parse_superclass("Derivable")
		sc.location = nat.location
		nclassdef.n_propdefs.add sc

		var code = new Array[String]
		code.add "redef fun derive_to_map"
		code.add "do"
		code.add "	var res = super"

		for attribute in npropdefs do if attribute isa AAttrPropdef then
			var name = attribute.n_id2.text
			code.add """	res["{{{name}}}"] = self.{{{name}}}"""
		end

		code.add "	return res"
		code.add "end"

		# Create method Node and add it to the AST
		npropdefs.push(toolcontext.parse_propdef(code.join("\n")))
	end
end
