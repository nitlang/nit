# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Provides facilities of exporting a `Model` to a UML class diagram
module uml_class

import uml_base
import model::model_collect

redef class UMLModel
	# Generates a UML class diagram from a `Model`
	fun generate_class_uml: Writable do
		var tpl = new Template
		tpl.add "digraph G \{\n"
		tpl.add """	fontname = "Bitstream Vera Sans"
				fontsize = 8
				node [
					fontname = "Bitstream Vera Sans"
					fontsize = 8
					shape = "record"
				]

				edge [
					fontname = "Bitstream Vera Sans"
					fontsize = 8
				]\n"""
		for mclass in model.collect_mclasses(filter) do
			tpl.add mclass.tpl_class(self)
			tpl.add "\n"
		end
		tpl.add "\}"
		return tpl
	end
end

redef class MEntity
	# Generates a dot-compatible `Writable` UML Class diagram from `self`
	fun tpl_class(model: UMLModel): Writable is abstract
end

redef class MClass

	redef fun tpl_class(model) do
		var name = name.escape_to_dot
		var t = new Template
		t.add "{name} [\n label = \"\{"
		if kind == abstract_kind then
			t.add "abstract\\n{name}"
		else if kind == interface_kind then
			t.add "interface\\n{name}"
		else
			t.add "{name}"
		end
		if arity > 0 then
			t.add "["
			t.add mparameters.first.name
			for i in [1 .. mparameters.length[ do
				t.add ", "
				t.add mparameters[i].name
			end
			t.add "]"
		end
		t.add "|"
		var props = collect_intro_mproperties(model.filter)
		for i in props do
			if not i isa MAttribute then continue
			t.add i.tpl_class(model)
			t.add "\\l"
		end
		t.add "|"
		for i in props do
			if not i isa MMethod then continue
			t.add i.tpl_class(model)
			t.add "\\l"
		end
		t.add "\}\"\n]\n"
		var g = in_hierarchy(model.mainmodule).direct_greaters
		for i in g do
			if not model.filter.accept_mentity(i) then continue
			t.add "{i.name} -> {name} [dir=back"
			if i.kind == interface_kind then
				t.add " arrowtail=open style=dashed"
			else
				t.add " arrowtail=empty"
			end
			t.add "];\n"
		end
		return t
	end

end

redef class MMethod
	redef fun tpl_class(model) do
		var tpl = new Template
		tpl.add visibility.tpl_class
		tpl.add " "
		tpl.add name.escape_to_dot
		tpl.add intro.msignature.tpl_class(model)
		return tpl
	end
end

redef class MSignature

	redef fun tpl_class(model) do
		var t = new Template
		t.add "("
		var params = new Array[MParameter]
		for i in mparameters do
			params.add i
		end
		if params.length > 0 then
			t.add params.first.name.escape_to_dot
			t.add ": "
			t.add params.first.mtype.tpl_class(model)
			for i in [1 .. params.length [ do
				t.add ", "
				t.add params[i].name.escape_to_dot
				t.add ": "
				t.add params[i].mtype.tpl_class(model)
			end
		end
		t.add ")"
		if return_mtype != null then
			t.add ": "
			t.add return_mtype.tpl_class(model)
		end
		return t
	end
end

redef class MAttribute
	redef fun tpl_class(model) do
		var tpl = new Template
		tpl.add visibility.tpl_class
		tpl.add " "
		tpl.add name.escape_to_dot
		tpl.add ": "
		tpl.add intro.static_mtype.tpl_class(model)
		return tpl
	end
end

redef class MVisibility
	# Returns the visibility as a UML token
	#
	#    assert public_visibility.tpl_class == "+"
	#    assert private_visibility.tpl_class == "-"
	fun tpl_class: Writable do
		if self == private_visibility then
			return "-"
		else if self == protected_visibility then
			return "#"
		else if self == public_visibility then
			return "+"
		else
			return "+"
		end
	end
end

redef class MClassType
	redef fun tpl_class(model) do
		return name
	end
end

redef class MGenericType
	redef fun tpl_class(model) do
		var t = new Template
		t.add name.substring(0, name.index_of('['))
		t.add "["
		t.add arguments.first.tpl_class(model)
		for i in [1 .. arguments.length[ do
			t.add ", "
			t.add arguments[i].tpl_class(model)
		end
		t.add "]"
		return t
	end
end

redef class MParameterType
	redef fun tpl_class(model) do
		return name
	end
end

redef class MVirtualType
	redef fun tpl_class(model) do
		return name
	end
end

redef class MNullableType
	redef fun tpl_class(model) do
		var t = new Template
		t.add "nullable "
		t.add mtype.tpl_class(model)
		return t
	end
end
