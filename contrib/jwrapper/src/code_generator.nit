# This file is part of NIT (http://www.nitlanguage.org).
#
# Copyright 2014 Frédéric Vachon <fredvac@gmail.com>
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

# Services to generate extern class `in "Java"`
module code_generator

intrude import types

class CodeGenerator

	var file_out: OFStream
	var java_class: JavaClass
	fun code_warehouse: CodeWarehouse do return once new CodeWarehouse

	init (file_name: String, jclass: JavaClass) 
	do
		file_out = new OFStream.open(file_name)
		self.java_class = jclass
	end

	fun generate
	do
		var jclass = self.java_class

		file_out.write("import mnit_android\n")
		gen_class_header(jclass.name)

		# Attributes generation
		for id, jtype in jclass.attributes do gen_attribute(id, jtype)

		for id, methods_info in jclass.methods do
			for method_info in methods_info do
				var nid = id
				if methods_info.length > 1 then nid += "{methods_info.index_of(method_info)}"
				gen_method(id, nid, method_info.return_type, method_info.params)
			end
		end

		file_out.write("\nend")
	end

	fun gen_class_header(full_class_name: Array[String])
	do
		file_out.write("extern class Native{full_class_name.last} in \"Java\" `\{ {full_class_name.join(".")} `\}\n")
		file_out.write("\tsuper JavaObject\n\tredef type SELF: Native{full_class_name.last}\n\n")
	end

	fun gen_attribute(jid: String, jtype: JavaType)
	do
		file_out.write("\tvar {jid.to_snake_case}: {jtype.to_nit_type}\n")
	end
	
	fun gen_method(jmethod_id: String, nmethod_id: String, jreturn_type: JavaType, jparam_list: Array[JavaType])
	do
		var java_params = ""
		var nit_params  = ""
		var nit_id = "arg"
		var nit_id_no = 0
		var nit_types = new Array[NitType]
		var comment = "" 

		# Parameters
		for i in [0..jparam_list.length[ do
			var jparam = jparam_list[i]
			var nit_type = jparam.to_nit_type
			var cast = ""

			if not jparam.is_collection then cast = jparam.param_cast

			nit_types.add(nit_type)
			nit_type.arg_id = "{nit_id}{nit_id_no}"

			if i == jparam_list.length - 1 then
				java_params += "{cast}{nit_id}{nit_id_no}"
				nit_params  += "{nit_id}{nit_id_no}: {nit_type}"
			else
				java_params += "{cast}{nit_id}{nit_id_no}" + ", "
				nit_params  += "{nit_id}{nit_id_no}: {nit_type}, "
			end

			nit_id_no += 1
			# Comment if one type is unknown
			if not nit_type.is_complete then comment = "#"
		end

		# Method identifier
		var method_id = nmethod_id.to_snake_case
		var nit_signature = new Array[String]

		nit_signature.add "\tfun {method_id}"

		if not jparam_list.is_empty then
			nit_signature.add "({nit_params})"
		end

		var return_type = null

		if not jreturn_type.is_void then
			return_type = jreturn_type.to_nit_type
			if not return_type.is_complete then comment = "#"
			nit_signature.add ": {return_type} "
		end

		file_out.write(comment + nit_signature.join(""))

		var param_to_copy = param_to_copy(jparam_list, nit_types)

		# Copy one parameter, the return value, one parameter and the return value or nothing
		if return_type != null then
			if return_type.is_complete and jreturn_type.is_collection then
				if param_to_copy != null then
					var rtype_couple = new Couple[JavaType, NitType](jreturn_type, return_type)
					file_out.write(code_warehouse.param_return_copy(rtype_couple, param_to_copy, jmethod_id, java_params))
				else
					file_out.write(code_warehouse.return_type_copy(jreturn_type, return_type, jmethod_id, java_params))
				end
			else if param_to_copy != null then
				file_out.write(code_warehouse.param_type_copy(param_to_copy.first, param_to_copy.second, jmethod_id, java_params, true))
			else
				file_out.write(" in \"Java\" `\{\n\t\t{comment}return {jreturn_type.return_cast} recv.{jmethod_id}({java_params}); \n\t{comment}`\}\n")
			end
		else if jreturn_type.is_void then
			if param_to_copy != null then
				file_out.write(code_warehouse.param_type_copy(param_to_copy.first, param_to_copy.second, jmethod_id, java_params, false))
			else
				file_out.write(" in \"Java\" `\{\n\t\t{comment}recv.{jmethod_id}({java_params}); \n\t{comment}`\}\n")
			end
		else
			file_out.write(" in \"Java\" `\{\n\t\t{comment}recv.{jmethod_id}({java_params}); \n\t{comment}`\}\n")
		end
	end

	# Only one collection type parameter can be copied
	# If there's none or more than one then `null` is returned
	fun param_to_copy(jtypes: Array[JavaType], ntypes: Array[NitType]): nullable Couple[JavaType, NitType]
	do
		var counter = 0
		var couple = null
		for i in [0..jtypes.length[ do
			if jtypes[i].is_collection and ntypes[i].is_complete then
				counter += 1
				if counter > 1 then return null
				couple = new Couple[JavaType, NitType](jtypes[i], ntypes[i])
			end
		end

		return couple
	end
end

# Contains raw code mostly used to copy collections
class CodeWarehouse

	# Collection as return value
	fun return_type_copy(java_type: JavaType, nit_type: NitType, jmethod_id, params_id: String): String
	do
		var narray_id = "nit_array"
		var loop_ = create_loop(java_type, nit_type, false, "java_array", narray_id)
		var imports = create_imports(nit_type, false)

		return """{{{imports}}} in "Java" `{ 
		{{{java_type.to_s}}} java_array = recv.{{{jmethod_id}}}({{{params_id}}});
		int {{{narray_id}}} = new_{{{nit_type.id}}}_of_{{{nit_type.generic_params.join("_")}}}();

		{{{loop_}}}

		return {{{narray_id}}};
	`}
	"""
	end

	# Collection as parameter
	fun param_type_copy(java_type: JavaType, nit_type: NitType, jmethod_id, params_id: String, has_return: Bool): String
	do
		var narray_id = "nit_array"
		var jarray_id = "java_array"
		var loop_ = create_loop(java_type, nit_type, true, jarray_id, narray_id)
		var imports = create_imports(nit_type, true)
		var jtype = java_type.to_s
		var jinstanciation = create_array_instance(java_type, nit_type, jarray_id)
		var return_str = ""
		
		if has_return then
			return_str = "return "
		end

		params_id = params_id.replace(nit_type.arg_id, jarray_id)

		return """{{{imports}}} in "Java" `{ 
		{{{jinstanciation}}}
		int {{{narray_id}}} = new_{{{nit_type.id}}}_of_{{{nit_type.generic_params.join("_")}}}();

		{{{loop_}}}

		{{{return_str}}}recv.{{{jmethod_id}}}({{{params_id}}});
	`}
	"""
	end

	# One collection parameter and the return type will be copied
	fun param_return_copy(return_types, param_types: Couple[JavaType, NitType], jmethod_id, params_id: String): String
	do
		var narray_id = "nit_array"
		var narray_id2 = "nit_array2"

		var r_jtype = return_types.first
		var r_ntype = return_types.second

		var p_jtype = param_types.first
		var p_ntype = param_types.second

		var r_loop = create_loop(r_jtype, r_ntype, false, "java_array", narray_id)
		var p_loop = create_loop(p_jtype, p_ntype, true, "java_array2", narray_id2)

		var imports = new Array[String]
		
		# Avoid import duplication
		if p_ntype.to_s != r_ntype.to_s then
			imports.add create_imports(p_ntype, true)
		end

		imports.add create_imports(r_ntype, false)

		params_id = params_id.replace(p_ntype.arg_id, narray_id)

		var jinstanciation = create_array_instance(p_jtype, p_ntype, "java_array")

		return """{{{imports.join(", ")}}} in "Java" `{
		{{{jinstanciation}}}

		{{{p_loop}}}

		{{{r_jtype.to_s}}} java_array2 = recv.{{{jmethod_id}}}({{{params_id}}});
		int {{{narray_id2}}} = new_{{{r_ntype.id}}}_of_{{{r_ntype.generic_params.join("_")}}}();

		{{{r_loop}}}

		return {{{narray_id2}}};
	`}
	"""
	end

	private fun create_array_instance(java_type: JavaType, nit_type: NitType, jarray_id: String): String
	do
		var jtype = java_type.to_s
		var instanciation = ""

		if java_type.is_primitive_array then
			instanciation = "{jtype} {jarray_id} = new {java_type.full_id}[Array_of_{nit_type.generic_params[0]}_length({nit_type.arg_id})];"
		else
			instanciation = "{jtype} {jarray_id} = new {jtype}();"
		end

		return instanciation
	end

	private fun create_imports(nit_type: NitType, is_param: Bool): String
	do
		var imports = ""
		var ntype = nit_type.to_s
		var gen_type = nit_type.generic_params.join(", ")

		if not is_param then
			if nit_type.is_map then
				imports = """import {{{ntype}}}, {{{ntype}}}.[]="""
			else
				imports = """import {{{ntype}}}, {{{ntype}}}.add"""
			end
		else if nit_type.id == "Array" then
			imports = """import {{{ntype}}}.length, {{{ntype}}}.[]"""
		else if nit_type.is_map then
			imports = """import {{{ntype}}}.iterator, Iterator[{{{gen_type}}}].is_ok, Iterator[{{{gen_type}}}].next, Iterator[{{{gen_type}}}].item, Iterator[{{{gen_type}}}].key"""
		else
			imports = """import {{{ntype}}}.iterator, Iterator[{{{gen_type}}}].is_ok, Iterator[{{{gen_type}}}].next, Iterator[{{{gen_type}}}].item"""
		end
		
		return imports
	end

	private fun create_loop(java_type: JavaType, nit_type: NitType, is_param: Bool, jarray_id, narray_id: String): String
	do
		var loop_header = ""
		var loop_body = ""
		var gen_type = nit_type.generic_params.join("_")

		if is_param then
			if java_type.is_primitive_array then
				loop_header = "for(int i=0; i < {jarray_id}.length; ++i)"
				loop_body   = """\t\t\t{{{jarray_id}}}[i] = {{{java_type.param_cast}}}Array_of_{{{gen_type}}}__index({{{nit_type.arg_id}}}, i);"""
			else if nit_type.id == "Array" then
				loop_header = """int length = Array_of_{{{gen_type}}}_length({{{nit_type.arg_id}}});\n\t\tfor(int i=0; i < length; ++i)"""
				loop_body   = """\t\t\t{{{jarray_id}}}.add({{{java_type.param_cast}}}Array_of_{{{gen_type}}}__index({{{narray_id}}}, i));"""
			else
				loop_header = """int itr = {{{nit_type.id}}}_of_{{{gen_type}}}_iterator({{{nit_type.arg_id}}});\n\t\twhile(Iterator_of_{{{gen_type}}}_is_ok(itr)) {"""
				if nit_type.is_map then
					var key_cast = java_type.to_cast(java_type.generic_params[0].id, true)
					var value_cast = java_type.to_cast(java_type.generic_params[1].id, true)
					loop_body   = """\t\t\t{{{jarray_id}}}[{{{key_cast}}}iterator_of_{{{nit_type.id}}}_key(itr)] = {{{value_cast}}}iterator_of_{{{nit_type.id}}}_item(itr);\n\t\t\titerator_of_{{{gen_type}}}_next(itr);\n\t\t}"""
				else
					loop_body   = """\t\t\t{{{jarray_id}}}.add({{{java_type.param_cast}}}iterator_of_{{{nit_type.id}}}_item(itr));\n\t\t\titerator_of_{{{gen_type}}}_next(itr);\n\t\t}"""
				end
			end
		else
			if nit_type.is_map then
				var key_cast = java_type.to_cast(java_type.generic_params[0].id, false)
				var value_cast = java_type.to_cast(java_type.generic_params[1].id, false)
				loop_header = """for (java.util.Map.Entry<{{{java_type.generic_params[0]}}}, {{{java_type.generic_params[1]}}}> e: {{{jarray_id}}})"""
				loop_body   = """\t\t\t{{{nit_type.id}}}_of_{{{gen_type}}}_{{{nit_type.generic_params[1]}}}__index_assign({{{narray_id}}}, {{{key_cast}}}e.getKey(), {{{value_cast}}}e.getValue()); """
			else if java_type.is_iterable then
				loop_header = """for ({{{java_type.generic_params[0]}}} e: {{{jarray_id}}})"""
				loop_body   = """\t\t\t{{{nit_type.id}}}_of_{{{gen_type}}}_add({{{narray_id}}}, {{{java_type.return_cast}}}e);"""
			else
				loop_header = "for(int i=0; i < {jarray_id}.length; ++i)"
				loop_body   = """\t\t\t{{{nit_type.id}}}_of_{{{gen_type}}}_add({{{narray_id}}}, {{{java_type.return_cast}}}{{{jarray_id}}}[i]);"""
			end
		end

		return loop_header + "\n" + loop_body
	end
end
