# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2015 Romain Chanoir <romain.chanoir@viacesi.fr>
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


# Phase generating threads for functions annotated with `threaded` annotation
module parallelization_phase

private import parser_util
import modelize
import astbuilder
private import annotation

redef class ToolContext
	# Transforms a function annotated with "threaded"
	var parallelization_phase: Phase = new ParallelizationPhase(self, null)
end

private class ParallelizationPhase
	super Phase

	redef fun process_annotated_node(nmethdef, nat)
	do
		if nat.n_atid.n_id.text != "threaded" then return

		if not nmethdef isa AMethPropdef then
			toolcontext.error(nat.location, "Syntax Error: only a method can be threaded.")
			return
		end

		#TODO: check for self calls

		# Get the module associated with this method
		var amod = nmethdef.parent.parent
		assert amod isa AModule

		# Construct the name of the generated class
		var classname = "Threaded"

		# Try to get the name of the class
		if nmethdef.parent isa AStdClassdef then
			classname += nmethdef.parent.as(AStdClassdef).n_qid.n_id.text
		end

		# Try to get the name of the method
		if nmethdef.n_methid isa AIdMethid then
			classname += nmethdef.n_methid.as(AIdMethid).n_id.text
		end

		# Handle methods with a return value
		var has_rvalue = nmethdef.n_signature.n_type != null
		var vtype = ""
		if has_rvalue then
			vtype = "redef type E: " + nmethdef.n_signature.n_type.n_qid.n_id.text
		end

		# create a return type
		var n_id = new TClassid
		n_id.text = classname
		var n_qid = new AQclassid
		n_qid.n_id = n_id
		var n_type = new AType
		n_type.n_qid = n_qid
		nmethdef.n_signature.n_type = n_type

		var params = new Array[String]
		for param in nmethdef.n_signature.n_params do
			var typ = param.n_type.n_qid.n_id.text
			if param.n_type.n_kwnullable != null then typ = "nullable {typ}"
			params.add """
var {{{param.n_id.text}}}: {{{typ}}}
"""
		end

		# String corresponding to the generated class
		var classdef_source = """
class {{{classname}}}
	super Thread

	{{{vtype}}}

	{{{params.join("\n")}}}
	redef fun main do
	end
end
"""

		# Parse newly obtained classdef
		var classdef = toolcontext.parse_classdef(classdef_source)
		assert classdef isa AStdClassdef

		# Get the `main` fun of the class
		var mainfun: nullable AMethPropdef = null
		for prop in classdef.n_propdefs do
			if prop isa AMethPropdef then mainfun = prop
		end
		assert mainfun != null

		# Make the statements from `main` fun be the statements from the "threaded" fun
		mainfun.n_block = nmethdef.n_block

		# Add "return null" to the end of the `main` function
		if not has_rvalue then
			var s_nullreturn = "return null"
			var nullreturn = toolcontext.parse_something(s_nullreturn)
			assert nullreturn isa AExpr
			mainfun.n_block.as(ABlockExpr).n_expr.add(nullreturn)
		end

		# Create new body for the annotated fun
		var s_newbody : String
		if nmethdef.n_signature.n_params.not_empty then
			var init_params = new Array[String]
			for param in nmethdef.n_signature.n_params do
				init_params.add(param.n_id.text)
			end
			s_newbody ="""
var thread = new {{{classname}}}({{{init_params.join(",")}}})
thread.start
return thread
"""
		else
			s_newbody = """
var thread = new {{{classname}}}
thread.start
return thread
"""
		end

		var newbody = toolcontext.parse_something(s_newbody)
		nmethdef.n_block = newbody.as(ABlockExpr)

		nmethdef.validate

		# Add the new class to the module
		amod.n_classdefs.add(classdef)
		classdef.validate
	end
end
