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

# Program that collect various data about nit programs and libraries
module nitstats

import modelbuilder
import exprbuilder
import runtime_type

# The job of this visitor is to resolve all types found
class ATypeCounterVisitor
	super Visitor
	var modelbuilder: ModelBuilder
	var nclassdef: AClassdef

	var typecount: HashMap[MType, Int]
	var total: Int = 0

	# Get a new visitor on a classef to add type count in `typecount'.
	init(modelbuilder: ModelBuilder, nclassdef: AClassdef, typecount: HashMap[MType, Int])
	do
		self.modelbuilder = modelbuilder
		self.nclassdef = nclassdef
		self.typecount = typecount
	end

	redef fun visit(n)
	do
		if n isa AType then
			var mtype = modelbuilder.resolve_mtype(self.nclassdef, n)
			if mtype != null then
				self.total += 1
				if self.typecount.has_key(mtype) then
					self.typecount[mtype] += 1
				else
					self.typecount[mtype] = 1
				end
				if not mtype.need_anchor then
					var cldefs = mtype.collect_mclassdefs(nclassdef.mclassdef.mmodule)
				end
			end
		end
		n.visit_all(self)
	end
end

class ANewVisitor
	super Visitor
	var modelbuilder: ModelBuilder
	var nclassdef: AClassdef

	var news: Set[MClass]

	# Get a new visitor on a classef to add type count in `typecount'.
	init(modelbuilder: ModelBuilder, nclassdef: AClassdef, news: Set[MClass])
	do
		self.modelbuilder = modelbuilder
		self.nclassdef = nclassdef
		self.news = news
	end

	redef fun visit(n)
	do
		if n isa ANewExpr then
			var mtype = modelbuilder.resolve_mtype(self.nclassdef, n.n_type)
			if mtype != null then
				assert mtype isa MClassType
				self.news.add(mtype.mclass)
			end
		end
		n.visit_all(self)
	end
end

# Visit all `nmodules' of a modelbuilder and compute statistics on the usage of explicit static types
fun count_ntypes(modelbuilder: ModelBuilder)
do
	# Count each occurence of a specific static type
	var typecount = new HashMap[MType, Int]
	# Total number of explicit static types
	var total = 0

	# Visit all the source code to collect data
	for nmodule in modelbuilder.nmodules do
		for nclassdef in nmodule.n_classdefs do
			var visitor = new ATypeCounterVisitor(modelbuilder, nclassdef, typecount)
			visitor.enter_visit(nclassdef)
			total += visitor.total
		end
	end

	# Display data
	print "--- Statistics of the explitic static types ---"
	print "Total number of explicit static types: {total}"
	if total == 0 then return

	# types sorted by usage
	var types = typecount.keys.to_a
	types.sort !cmp a, b = typecount[a] <=> typecount[b]

	# Display most used types (ie the last of `types')
	print "Most used types: "
	var min = 10
	if types.length < min then min = types.length
	for i in [0..min[ do
		var t = types[types.length-i-1]
		print "  {t}: {typecount[t]}"
	end

	# Compute the distribution of type usage
	print "Distribution of type usage:"
	var count = 0
	var sum = 0
	var limit = 1
	for t in types do
		if typecount[t] > limit then
			print "  <={limit}: {count} ({div(count*100,types.length)}% of types; {div(sum*100,total)}% of usage)"
			count = 0
			sum = 0
			while typecount[t] > limit do limit = limit * 2
		end
		count += 1
		sum += typecount[t]
	end
	print "  <={limit}: {count} ({div(count*100,types.length)}% of types; {div(sum*100,total)}% of usage)"
end

fun visit_news(modelbuilder: ModelBuilder, mainmodule: MModule)
do
	print "--- Dead classes ---"
	# Count each occurence of a specific static type
	var news = new HashSet[MClass]

	# Visit all the source code to collect data
	for nmodule in modelbuilder.nmodules do
		for nclassdef in nmodule.n_classdefs do
			var visitor = new ANewVisitor(modelbuilder, nclassdef, news)
			visitor.enter_visit(nclassdef)
		end
	end

	for c in modelbuilder.model.mclasses do
		if c.kind == concrete_kind and not news.has(c) then
			print "{c.full_name}"
		end
	end

	var hier = mainmodule.flatten_mclass_hierarchy
	for c in hier do
		if c.kind != abstract_kind and not (c.kind == concrete_kind and not news.has(c)) then continue

		for sup in hier[c].greaters do
			for cd in sup.mclassdefs do
				for p in cd.intro_mproperties do
					if p isa MAttribute then
						continue label classes
					end
				end
			end
		end
		print "no attributes: {c.full_name}"

	end label classes
end

# Compute general statistics on a model
fun compute_statistics(model: Model)
do
	print "--- Statistics of the model ---"
	var nbmod = model.mmodules.length
	print "Number of modules: {nbmod}"

	print ""

	var nbcla = model.mclasses.length
	var nbcladef = model.mclassdef_hierarchy.length
	print "Number of classes: {nbcla}"

	# determine the distribution of:
	#  * class kinds (interface, abstract class, etc.)
	#  * refinex classes (vs. unrefined ones)
	var kinds = new HashMap[MClassKind, Int]
	var refined = 0
	for c in model.mclasses do
		if kinds.has_key(c.kind) then
			kinds[c.kind] += 1
		else
			kinds[c.kind] = 1
		end
		if c.mclassdefs.length > 1 then
			refined += 1
		end
	end
	for k,v in kinds do
		print "  Number of {k} kind: {v} ({div(v*100,nbcla)}%)"
	end


	print ""

	print "Nomber of class definitions: {nbcladef}"
	print "Number of refined classes: {refined} ({div(refined*100,nbcla)}%)"
	print "Average number of class refinments by classes: {div(nbcladef-nbcla,nbcla)}"
	print "Average number of class refinments by refined classes: {div(nbcladef-nbcla,refined)}"

	print ""

	var nbprop = model.mproperties.length
	print "Number of properties: {model.mproperties.length}"
end

# Compute class tables for the classes of the program main
fun compute_tables(main: MModule)
do
	var model = main.model

	var nc = 0 # Number of runtime classes
	var nl = 0 # Number of usages of class definitions (a class definition can be used more than once)
	var nhp = 0 # Number of usages of properties (a property can be used more than once)
	var npas = 0 # Number of usages of properties without lookup (easy easy case, easier that CHA)

	# Collect the full class hierarchy
	var hier = main.flatten_mclass_hierarchy
	for c in hier do
		# Skip classes without direct instances
		if c.kind == interface_kind or c.kind == abstract_kind then continue

		nc += 1

		# Now, we need to collect all properties defined/inherited/imported
		# So, visit all definitions of all super-classes
		for sup in hier[c].greaters do
			for cd in sup.mclassdefs do
				nl += 1

				# Now, search properties introduced
				for p in cd.intro_mproperties do

					nhp += 1
					# Select property definition
					if p.mpropdefs.length == 1 then
						npas += 1
					else
						var sels = p.lookup_definitions(main, c.mclassdefs.first.bound_mtype)
						if sels.length > 1 then
							print "conflict for {p.full_name} in class {c.full_name}: {sels.join(", ")}"
						else if sels.is_empty then
							print "ERROR: no property for {p.full_name} in class {c.full_name}!"
						end
					end
				end
			end
		end
	end

	print "--- Construction of tables ---"
	print "Number of runtime classes: {nc} (excluding interfaces and abstract classes)"
	print "Average number of composing class definition by runtime class: {div(nl,nc)}"
	print "Total size of tables (classes and instances): {nhp} (not including stuff like info for subtyping or call-next-method)"
	print "Average size of table by runtime class: {div(nhp,nc)}"
	print "Values never redefined: {npas} ({div(npas*100,nhp)}%)"
end

# Helper function to display n/d and handle division by 0
fun div(n: Int, d: Int): String
do
	if d == 0 then return "na"
	return ((100*n/d).to_f/100.0).to_precision(2)
end

# Create a dot file representing the module hierarchy of a model.
# Importation relation is represented with arrow
# Nesting relation is represented with nested boxes
fun generate_module_hierarchy(model: Model)
do
	var buf = new Buffer
	buf.append("digraph \{\n")
	buf.append("node [shape=box];\n")
	buf.append("rankdir=BT;\n")
	for mmodule in model.mmodules do
		if mmodule.direct_owner == null then
			generate_module_hierarchy_for(mmodule, buf)
		end
	end
	for mmodule in model.mmodules do
		for s in mmodule.in_importation.direct_greaters do
			buf.append("\"{mmodule}\" -> \"{s}\";\n")
		end
	end
	buf.append("\}\n")
	var f = new OFStream.open("module_hierarchy.dot")
	f.write(buf.to_s)
	f.close
end

# Helper function for `generate_module_hierarchy'.
# Create graphviz nodes for the module and recusrively for its nested modules
private fun generate_module_hierarchy_for(mmodule: MModule, buf: Buffer)
do
	if mmodule.in_nesting.direct_greaters.is_empty then
		buf.append("\"{mmodule.name}\";\n")
	else
		buf.append("subgraph \"cluster_{mmodule.name}\" \{label=\"\"\n")
		buf.append("\"{mmodule.name}\";\n")
		for s in mmodule.in_nesting.direct_greaters do
			generate_module_hierarchy_for(s, buf)
		end
		buf.append("\}\n")
	end
end

# Create a dot file representing the class hierarchy of a model.
fun generate_class_hierarchy(mmodule: MModule)
do
	var buf = new Buffer
	buf.append("digraph \{\n")
	buf.append("node [shape=box];\n")
	buf.append("rankdir=BT;\n")
	var hierarchy = mmodule.flatten_mclass_hierarchy
	for mclass in hierarchy do
		buf.append("\"{mclass}\" [label=\"{mclass}\"];\n")
		for s in hierarchy[mclass].direct_greaters do
			buf.append("\"{mclass}\" -> \"{s}\";\n")
		end
	end
	buf.append("\}\n")
	var f = new OFStream.open("class_hierarchy.dot")
	f.write(buf.to_s)
	f.close
end

# Create a dot file representing the classdef hierarchy of a model.
# For a simple user of the model, the classdef hierarchy is not really usefull, it is more an internal thing.
fun generate_classdef_hierarchy(model: Model)
do
	var buf = new Buffer
	buf.append("digraph \{\n")
	buf.append("node [shape=box];\n")
	buf.append("rankdir=BT;\n")
	for mmodule in model.mmodules do
		for mclassdef in mmodule.mclassdefs do
			buf.append("\"{mclassdef} {mclassdef.bound_mtype}\" [label=\"{mclassdef.mmodule}\\n{mclassdef.bound_mtype}\"];\n")
			for s in mclassdef.in_hierarchy.direct_greaters do
				buf.append("\"{mclassdef} {mclassdef.bound_mtype}\" -> \"{s} {s.bound_mtype}\";\n")
			end
		end
	end
	buf.append("\}\n")
	var f = new OFStream.open("classdef_hierarchy.dot")
	f.write(buf.to_s)
	f.close
end

fun generate_model_hyperdoc(model: Model)
do
	var buf = new Buffer
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
	var f = new OFStream.open("model.html")
	f.write(buf.to_s)
	f.close
end

fun linkto(o: Object): String
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

fun runtime_type(modelbuilder: ModelBuilder, mainmodule: MModule)
do
	var analysis = modelbuilder.do_runtime_type(mainmodule)

	print "--- Type Analysis ---"
	print "Number of live runtime types (instantied resolved type): {analysis.live_types.length}"
	print "Number of live polymorphic method: {analysis.polymorphic_methods.length}"
	print "Number of live method definitions: {analysis.live_methoddefs.length}"
	print "Number of live runtime method definitions (with customization): {analysis.runtime_methods.length}"
	print "Number of live runtime cast types (ie used in as and isa): {analysis.live_cast_types.length}"

	for mprop in modelbuilder.model.mproperties do
		if not mprop isa MMethod then continue
		if analysis.polymorphic_methods.has(mprop) then continue
		for methoddef in mprop.mpropdefs do
			if analysis.live_methoddefs.has(methoddef) then continue label l
		end
		#print "  {mprop.full_name} is dead"
	end label l
end

# Create a tool context to handle options and paths
var toolcontext = new ToolContext
# We do not add other options, so process them now!
toolcontext.process_options

# We need a model to collect stufs
var model = new Model
# An a model builder to parse files
var modelbuilder = new ModelBuilder(model, toolcontext)

# Here we load an process all modules passed on the command line
var mmodules = modelbuilder.parse_and_build(toolcontext.option_context.rest)

if mmodules.length == 0 then return

var mainmodule: MModule
if mmodules.length == 1 then
	mainmodule = mmodules.first
else
	# We need a main module, so we build it by importing all modules
	mainmodule = new MModule(model, null, "<main>", new Location(null, 0, 0, 0, 0))
	mainmodule.set_imported_mmodules(mmodules)
end

# Now, we just have to play with the model!
print "*** STATS ***"

print ""
compute_statistics(model)

print ""
#visit_news(modelbuilder, mainmodule)

print ""
count_ntypes(modelbuilder)

generate_module_hierarchy(model)
generate_classdef_hierarchy(model)
generate_class_hierarchy(mainmodule)
generate_model_hyperdoc(model)

print ""
compute_tables(mainmodule)

print ""
modelbuilder.full_propdef_semantic_analysis
runtime_type(modelbuilder, mainmodule)
