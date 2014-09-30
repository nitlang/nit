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

redef class UMLModel
	# Generates a UML class diagram from a `Model`
	fun generate_class_uml: Streamable do
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
		tpl.add model.tpl_class(ctx, mainmodule)
		tpl.add "\}"
		return tpl
	end
end

redef class Model

	# Generates a UML Class diagram from the entities of a `Model`
	fun tpl_class(ctx: ToolContext, main: MModule): Streamable do
		var t = new Template
		for i in mclasses do
			if not ctx.private_gen and i.visibility != public_visibility then continue
			t.add i.tpl_class(ctx, main)
			t.add "\n"
		end
		return t
	end

end

redef class MEntity
	# Generates a dot-compatible `Streamable` UML Class diagram from `self`
	fun tpl_class(ctx: ToolContext, main: MModule): Streamable is abstract
end

redef class MClass

	redef fun tpl_class(ctx, main): Streamable do
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
		var props: Collection[MProperty]
		if ctx.private_gen then
			props = intro_mproperties(none_visibility)
		else
			props = intro_mproperties(public_visibility)
		end
		for i in props do
			if i isa MAttribute then
				t.add i.tpl_class(ctx, main)
				t.add "\\l"
			end
		end
		t.add "|"
		for i in intro_methods do
			if not ctx.private_gen and i.visibility != public_visibility then continue
			t.add i.tpl_class(ctx, main)
			t.add "\\l"
		end
		t.add "\}\"\n]\n"
		var g = in_hierarchy(main).direct_greaters
		for i in g do
			if not ctx.private_gen and i.visibility != public_visibility then continue
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
	redef fun tpl_class(ctx, main) do
		var tpl = new Template
		tpl.add visibility.tpl_class
		tpl.add " "
		tpl.add name.escape_to_dot
		tpl.add intro.msignature.tpl_class(ctx, main)
		return tpl
	end
end

redef class MSignature

	redef fun tpl_class(ctx, main) do
		var t = new Template
		t.add "("
		var params = new Array[MParameter]
		for i in mparameters do
			params.add i
		end
		if params.length > 0 then
			t.add params.first.name
			t.add ": "
			t.add params.first.mtype.tpl_class(ctx, main)
			for i in [1 .. params.length [ do
				t.add ", "
				t.add params[i].name
				t.add ": "
				t.add params[i].mtype.tpl_class(ctx, main)
			end
		end
		t.add ")"
		if return_mtype != null then
			t.add ": "
			t.add return_mtype.tpl_class(ctx, main)
		end
		return t
	end
end

redef class MAttribute
	redef fun tpl_class(ctx, main) do
		var tpl = new Template
		tpl.add visibility.tpl_class
		tpl.add " "
		tpl.add name
		tpl.add ": "
		tpl.add intro.static_mtype.tpl_class(ctx, main)
		return tpl
	end
end

redef class MVisibility
	# Returns the visibility as a UML token
	#
	#    assert public_visibility.tpl_class == "+"
	#    assert private_visibility.tpl_class == "-"
	fun tpl_class: Streamable do
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
	redef fun tpl_class(c, m) do
		return name
	end
end

redef class MGenericType
	redef fun tpl_class(c, m) do
		var t = new Template
		t.add name.substring(0, name.index_of('['))
		t.add "["
		t.add arguments.first.tpl_class(c, m)
		for i in [1 .. arguments.length[ do
			t.add ", "
			t.add arguments[i].tpl_class(c, m)
		end
		t.add "]"
		return t
	end
end

redef class MParameterType
	redef fun tpl_class(c, m) do
		return name
	end
end

redef class MVirtualType
	redef fun tpl_class(c, m) do
		return name
	end
end

redef class MNullableType
	redef fun tpl_class(c, m) do
		var t = new Template
		t.add "nullable "
		t.add mtype.tpl_class(c, m)
		return t
	end
end
