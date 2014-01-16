# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012 Jean Privat <jean@pryen.org>
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

# Dump of Nit model into hypertext human-readable format.
module model_hyperdoc

import model
import metrics_base
import phase
import frontend

redef class ToolContext
	var model_hyperdoc_phase = new ModelHyperdocPhase(self, null)
end

private class ModelHyperdocPhase
	super Phase
	redef fun process_mainmodule(mainmodule)
	do
		if not toolcontext.opt_generate_hyperdoc.value and not toolcontext.opt_all.value then return
		generate_model_hyperdoc(toolcontext, toolcontext.modelbuilder.model)
	end
end

# Genetate a HTML file for the model.
# The generated file contains the description of each entity of the model
fun generate_model_hyperdoc(toolcontext: ToolContext, model: Model)
do
	var buf = new FlatBuffer
	buf.append("<html>\n<body>\n")
	buf.append("<h1>Model</h1>\n")

	buf.append("<h2>Modules</h2>\n")
	for mmodule in model.mmodules do
		buf.append("<h3 id='module-{mmodule}'>{mmodule}</h3>\n")
		buf.append("<dl>\n")
		buf.append("<dt>direct owner</dt>\n")
		var own = mmodule.direct_owner
		if own != null then buf.append("<dd>{linkto(own)}</dd>\n")
		buf.append("<dt>nested</dt>\n")
		for x in mmodule.in_nesting.direct_greaters do
			buf.append("<dd>{linkto(x)}</dd>\n")
		end
		buf.append("<dt>direct import</dt>\n")
		for x in mmodule.in_importation.direct_greaters do
			buf.append("<dd>{linkto(x)}</dd>\n")
		end
		buf.append("<dt>direct clients</dt>\n")
		for x in mmodule.in_importation.direct_smallers do
			buf.append("<dd>{linkto(x)}</dd>\n")
		end
		buf.append("<dt>introduced classes</dt>\n")
		for x in mmodule.mclassdefs do
			if not x.is_intro then continue
			buf.append("<dd>{linkto(x.mclass)} by {linkto(x)}</dd>\n")
		end
		buf.append("<dt>refined classes</dt>\n")
		for x in mmodule.mclassdefs do
			if x.is_intro then continue
			buf.append("<dd>{linkto(x.mclass)} by {linkto(x)}</dd>\n")
		end
		buf.append("</dl>\n")
	end
	buf.append("<h2>Classes</h2>\n")
	for mclass in model.mclasses do
		buf.append("<h3 id='class-{mclass}'>{mclass}</h3>\n")
		buf.append("<dl>\n")
		buf.append("<dt>module of introduction</dt>\n")
		buf.append("<dd>{linkto(mclass.intro_mmodule)}</dd>\n")
		buf.append("<dt>class definitions</dt>\n")
		for x in mclass.mclassdefs do
			buf.append("<dd>{linkto(x)} in {linkto(x.mmodule)}</dd>\n")
		end
		buf.append("</dl>\n")
	end
	buf.append("<h2>Class Definitions</h2>\n")
	for mclass in model.mclasses do
		for mclassdef in mclass.mclassdefs do
			buf.append("<h3 id='classdef-{mclassdef}'>{mclassdef}</h3>\n")
			buf.append("<dl>\n")
			buf.append("<dt>module</dt>\n")
			buf.append("<dd>{linkto(mclassdef.mmodule)}</dd>\n")
			buf.append("<dt>class</dt>\n")
			buf.append("<dd>{linkto(mclassdef.mclass)}</dd>\n")
			buf.append("<dt>direct refinements</dt>\n")
			for x in mclassdef.in_hierarchy.direct_greaters do
				if x.mclass != mclass then continue
				buf.append("<dd>{linkto(x)} in {linkto(x.mmodule)}</dd>\n")
			end
			buf.append("<dt>direct refinemees</dt>\n")
			for x in mclassdef.in_hierarchy.direct_smallers do
				if x.mclass != mclass then continue
				buf.append("<dd>{linkto(x)} in {linkto(x.mmodule)}</dd>\n")
			end
			buf.append("<dt>direct superclasses</dt>\n")
			for x in mclassdef.supertypes do
				buf.append("<dd>{linkto(x.mclass)} by {x}</dd>\n")
			end
			buf.append("<dt>introduced properties</dt>\n")
			for x in mclassdef.mpropdefs do
				if not x.is_intro then continue
				buf.append("<dd>{linkto(x.mproperty)} by {linkto(x)}</dd>\n")
			end
			buf.append("<dt>redefined properties</dt>\n")
			for x in mclassdef.mpropdefs do
				if x.is_intro then continue
				buf.append("<dd>{linkto(x.mproperty)} by {linkto(x)}</dd>\n")
			end
			buf.append("</dl>\n")
		end
	end
	buf.append("<h2>Properties</h2>\n")
	for mprop in model.mproperties do
		buf.append("<h3 id='property-{mprop}'>{mprop}</h3>\n")
		buf.append("<dl>\n")
		buf.append("<dt>module of introdcution</dt>\n")
		buf.append("<dd>{linkto(mprop.intro_mclassdef.mmodule)}</dd>\n")
		buf.append("<dt>class of introduction</dt>\n")
		buf.append("<dd>{linkto(mprop.intro_mclassdef.mclass)}</dd>\n")
		buf.append("<dt>class definition of introduction</dt>\n")
		buf.append("<dd>{linkto(mprop.intro_mclassdef)}</dd>\n")
		buf.append("<dt>property definitions</dt>\n")
		for x in mprop.mpropdefs do
			buf.append("<dd>{linkto(x)} in {linkto(x.mclassdef)}</dd>\n")
		end
		buf.append("</dl>\n")
	end
	buf.append("<h2>Property Definitions</h2>\n")
	for mprop in model.mproperties do
		for mpropdef in mprop.mpropdefs do
			buf.append("<h3 id='propdef-{mpropdef}'>{mpropdef}</h3>\n")
			buf.append("<dl>\n")
			buf.append("<dt>module</dt>\n")
			buf.append("<dd>{linkto(mpropdef.mclassdef.mmodule)}</dd>\n")
			buf.append("<dt>class</dt>\n")
			buf.append("<dd>{linkto(mpropdef.mclassdef.mclass)}</dd>\n")
			buf.append("<dt>class definition</dt>\n")
			buf.append("<dd>{linkto(mpropdef.mclassdef)}</dd>\n")
			buf.append("<dt>super definitions</dt>\n")
			for x in mpropdef.mproperty.lookup_super_definitions(mpropdef.mclassdef.mmodule, mpropdef.mclassdef.bound_mtype) do
				buf.append("<dd>{linkto(x)} in {linkto(x.mclassdef)}</dd>\n")
			end
		end
	end
	buf.append("</body></html>\n")
	var f = new OFStream.open(toolcontext.output_dir.join_path("model.html"))
	f.write(buf.to_s)
	f.close
end

private fun linkto(o: Object): String
do
	if o isa MModule then
		return "<a href='#module-{o}'>{o}</a>"
	else if o isa MClass then
		return "<a href='#class-{o}'>{o}</a>"
	else if o isa MClassDef then
		return "<a href='#classdef-{o}'>{o}</a>"
	else if o isa MProperty then
		return "<a href='#property-{o}'>{o}</a>"
	else if o isa MPropDef then
		return "<a href='#propdef-{o}'>{o}</a>"
	else
		print "cannot linkto {o.class_name}"
		abort
	end
end
