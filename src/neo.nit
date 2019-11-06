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

# Save and load a `Model` to/from a Neo4j graph.
#
# Nit models are composed by MEntities.
# This module creates NeoNode for each MEntity found in a `Model` and save them
# into Neo4j database.
#
# SEE: `Neo4jClient`
#
# NeoNodes can also be translated back to MEntities to rebuild a Nit `Model`.
#
# Structure of the nit `Model` in the graph:
#
# Note : Any null or empty attribute will not be saved in the database.
#
# For any `MEntity` (in addition to specific data):
#
# * labels: model name (`model_name`) and `MEntity`.
# * `name`: short (unqualified) name.
# * `mdoc`: JSON array representing the associated Markdown documentation
# (one item by line).
#
# Note : All nodes described here are MEntities.
#
# `MPackage`
#
# * labels: `MPackage`, `model_name` and `MEntity`.
# * `(:MPackage)-[:ROOT]->(:MGroup)`: root of the group tree.
#
# `MGroup`
#
# * labels: `MGroup`, `model_name` and `MEntity`.
# * `(:MGroup)-[:PROJECT]->(:MPackage)`: associated package.
# * `(:MGroup)-[:PARENT]->(:MGroup)`: parent group. Does not exist for the root
# group.
# * `(:MGroup)-[:DECLARES]->(:MModule)`: modules that are direct children of
# this group.
# * `(:MGroup)-[:NESTS]->(:MGroup)`: nested groups that are direct children of
# this group.
#
# `MModule`
#
# * labels: `MModule`, `model_name` and `MEntity`.
# * `location`: origin of the definition. SEE: `Location.to_s`
# * `(:MModule)-[:IMPORTS]->(:MModule)`: modules that are imported directly.
# * `(:MModule)-[:INTRODUCES]->(:MClass)`: all by classes introduced by this
# module.
# * `(:MModule)-[:DEFINES]->(:MClassDef)`: all class definitons contained in
# this module.
#
# `MClass`
#
# * labels: `MClass`, `model_name` and `MEntity`.
# * `kind`: kind of the class (`interface`, `abstract class`, etc.)
# * `visibility`: visibility of the class.
# * `parameter_names`: JSON array listing the name of each formal generic
# parameter (in order of declaration).
# * `(:MClass)-[:CLASSTYPE]->(:MClassType)`: SEE: `MClass.mclass_type`
#
# Arguments in the `CLASSTYPE` are named following the `parameter_names`
# attribute of the `MClassDef` that introduces the class. A class definition
# introduces a class if and only if it has this class as `MCLASS` and
# has `is_intro` set to `true`.
#
# `MClassDef`
#
# * labels: `MClassDef`, `model_name` and `MEntity`.
# * `location`: origin of the definition. SEE: `Location.to_s`
# * `(:MClassDef)-[:BOUNDTYPE]->(:MClassType)`: bounded type associated to the
# classdef.
# * `(:MClassDef)-[:MCLASS]->(:MClass)`: associated `MClass`.
# * `(:MClassDef)-[:INTRODUCES]->(:MProperty)`: all properties introduced by
# the classdef.
# * `(:MClassDef)-[:DECLARES]->(:MPropDef)`: all property definitions in the
# classdef (introductions and redefinitions).
# * `(:MClassDef)-[:INHERITS]->(:MClassType)`: all declared super-types
#
# `MProperty`
#
# * labels: `MProperty`, `model_name` and `MEntity`. Must also have `MMethod`,
# `MAttribute` `MVirtualTypeProp` or `MInnerClass`, depending on the class of
# the represented entity.
# * `visibility`: visibility of the property.
# * `is_init`: Indicates if the property is a constructor. Exists only if the
# node is a `MMethod`.
# * `(:MProperty)-[:INTRO_CLASSDEF]->(:MClassDef)`: classdef that introduces
# the property.
#
# Additional relationship for `MInnerClass`:
#
# * `(:MInnerClassDef)-[:NESTS]->(:MClass)`: actual inner class.
#
# `MPropDef`
#
# * labels: `MPropDef`, `model_name` and `MEntity`. Must also have `MMethodDef`,
# `MAttributeDef`, `MVirtualTypeDef` or `MInnerClassDef`, depending on the
# class of the represented entity.
# * `location`: origin of the definition. SEE: `Location.to_s`.
# * `(:MPropDef)-[:DEFINES]->(:MProperty)`: associated property.
#
# Additional attributes and relationship for `MMethodDef`:
#
# * `is_abstract`: Is the method definition abstract?
# * `is_intern`: Is the method definition intern?
# * `is_extern`: Is the method definition extern?
# * `(:MMethodDef)-[:SIGNATURE]->(:MSignature)`: signature attached to the
# property definition.
#
# Additional relationship for `MAttributeDef`:
#
# * `(:MAttributeDef)-[:TYPE]->(:MType)`: static type of the attribute,
# if specified.
#
# Additional relationship for `MVirtualTypeDef`:
#
# * `(:MVirtualTypeDef)-[:BOUND]->(:MType)`: type to which the virtual type
# is bound in this definition. Exists only if this definition bound the virtual
# type to an effective type.
#
# Additional relationship for `MInnerClassDef`:
#
# * `(:MInnerClassDef)-[:NESTS]->(:MClassDef)`: actual inner class'
# definition.
#
# `MType`
#
# * labels: `MType`, `model_name` and `MEntity`. Must also have `MClassType`,
# `MNullableType`, `MVirtualType`, `MRawType` or `MSignature`, depending on the
# class of the represented entity.
#
# Additional label and relationships for `MClassType`:
#
# * If it is a `MGenericType`, also has the `MGenericType` label.
# * `(:MClassType)-[:CLASS]->(:MClass)`: SEE: `MClassType.mclass`
# * `(:MClassType)-[:ARGUMENT]->(:MType)`: type arguments.
#
# Arguments are named following the `parameter_names` attribute of the
# `MClass` referred by `CLASS`.
#
# Additional relationship for `MVirtualType`:
#
# * `(:MVirtualType)-[:PROPERTY]->(:MProperty)`: associated property that
# determines the type (usually a `MVirtualTypeProp`).
#
# Additional attribute and relationship for `MParameterType`:
#
# * `rank`: position of the parameter (0 for the first parameter).
# * `(:MParameterType)-[:CLASS]->(:MClass)`: generic class where the parameter
# belong.
#
# Additional relationship for `MNullableType`:
#
# * `(:MNullableType)-[:TYPE]->(:MType)`: base type of the nullable type.
#
# Additional attribute and relationship for `MRawType`:
#
# * `text`: JSON array of the parts’ text.
# * `(:MRawType)-[:LINK]->(:MTypePart)`: the parts that link to another entity.
#
# Additional attribute and relationships for `MSignature`:
#
# * `parameter_names`: JSON array representing the list of the parameter names.
# * `(:MSignature)-[:PARAMETER]->(:MParameter)`: parameters.
# * `(:MSignature)-[:RETURNTYPE]->(:MType)`: return type. Does not exist for
# procedures.
#
# In order to maintain the correct parameters order, each `MSignature` node
# contains an array of parameter names corresponding to the parameter order in
# the signature.
#
# For example, if the source code contains:
#
# ~~~nitish
#     fun foo(a: A, b: B, c: C)
# ~~~
#
# The `MSignature` node will contain a property
# `parameter_names = ["a", "b", "c"]` so the MSignature can be reconstructed
# with the parameters in the correct order.
#
# `MParameter`
#
# * labels: `MParameter`, `model_name` and `MEntity`.
# * `is_vararg`: Is the parameter a vararg?
# * `rank`: position of the parameter (0 for the first parameter).
# * `(:MParameter)-[:TYPE]->(:MType)`: static type of the parameter.
#
# MParameters are also ranked by their position in the corresponding signature.
# Rank 0 for the first parameter, 1 for the next one and etc.
#
# `MTypePart`
#
# * labels: `MTypePart`, `model_name` and `MEntity`.
# * `rank`: position in the `MRawType`.
# * `(:MTypePart)-[:TARGET]->(:MEntity)`: the target of the link.
module neo

import doc::model_ext
import neo4j
import toolcontext

# Helper class that can save and load a `Model` into a Neo4j database.
class NeoModel

	# The model name.
	#
	# Because we use only one Neo4j instance to store all the models,
	# we need to mark their appartenance to a particular model and avoid loading all models.
	#
	# The name is used as a Neo label on each created nodes and used to load nodes from base.
	var model_name: String

	# The toolcontext used to init the `NeoModel` tool.
	var toolcontext: ToolContext

	# The Neo4j `client` used to communicate with the Neo4j instance.
	var client: Neo4jClient

	# Fill `model` using base pointed by `client`.
	fun load(model: Model): Model do
		var nodes: Array[NeoNode]

		toolcontext.info("Loading package node...", 1)
		nodes = client.nodes_with_labels([model_name, "MPackage"])
		for node in nodes do to_mpackage(model, node)
		toolcontext.info("Loading groups...", 1)
		nodes = client.nodes_with_labels([model_name, "MGroup"])
		for node in nodes do to_mgroup(model, node)
		toolcontext.info("Loading modules...", 1)
		nodes = client.nodes_with_labels([model_name, "MModule"])
		for node in nodes do to_mmodule(model, node)
		toolcontext.info("Loading classes...", 1)
		nodes = client.nodes_with_labels([model_name, "MClass"])
		for node in nodes do to_mclass(model, node)
		toolcontext.info("Loading class definitions...", 1)
		nodes = client.nodes_with_labels([model_name, "MClassDef"])
		for node in nodes do to_mclassdef(model, node)
		toolcontext.info("Loading properties...", 1)
		nodes = client.nodes_with_labels([model_name, "MProperty"])
		for node in nodes do to_mproperty(model, node)
		toolcontext.info("Loading property definitions...", 1)
		nodes = client.nodes_with_labels([model_name, "MPropDef"])
		for node in nodes do to_mpropdef(model, node)
		return model
	end

	# Save `model` in the base pointed by `client`.
	fun save(model: Model) do
		var nodes = collect_model_nodes(model)
		toolcontext.info("Save {nodes.length} nodes...", 1)
		push_all(nodes)
		var edges = collect_model_edges(model)
		toolcontext.info("Save {edges.length} edges...", 1)
		push_all(edges)
	end

	# Save `neo_entities` in base using batch mode.
	private fun push_all(neo_entities: Collection[NeoEntity]) do
		var batch = new NeoBatch(client)
		var len = neo_entities.length
		var sum = 0
		var i = 1
		for nentity in neo_entities do
			batch.save_entity(nentity)
			if i == batch_max_size then
				do_batch(batch)
				sum += batch_max_size
				toolcontext.info(" {sum * 100 / len}% done", 1)
				batch = new NeoBatch(client)
				i = 1
			else
				i += 1
			end
		end
		do_batch(batch)
	end

	# How many operation can be executed in one batch?
	private var batch_max_size = 1000

	# Execute `batch` and check for errors.
	#
	# Abort if `batch.execute` returns errors.
	private fun do_batch(batch: NeoBatch) do
		var errors = batch.execute
		if not errors.is_empty then
			print errors
			exit(1)
		end
	end

	# Collect all nodes from the current `model`.
	private fun collect_model_nodes(model: Model): Collection[NeoNode] do
		for mpackage in model.mpackages do
			to_node(mpackage)
			for mgroup in mpackage.mgroups do to_node(mgroup)
		end
		return nodes.values
	end

	# Collect all edges from the current `model`.
	#
	# Actually collect all out_edges from all nodes.
	private fun collect_model_edges(model: Model): Collection[NeoEdge] do
		var edges = new HashSet[NeoEdge]
		for node in nodes.values do edges.add_all(node.out_edges)
		return edges
	end

	# Mentities associated to nodes.
	#
	# The key is the node’s id.
	private var mentities = new HashMap[Int, MEntity]

	# Nodes associated with MEntities.
	private var nodes = new HashMap[MEntity, NeoNode]

	# Get the `NeoNode` associated with `mentity`.
	# `mentities` are stored locally to avoid duplication.
	fun to_node(mentity: MEntity): NeoNode do
		if nodes.has_key(mentity) then return nodes[mentity]
		if mentity isa MPackage then return mpackage_node(mentity)
		if mentity isa MGroup then return mgroup_node(mentity)
		if mentity isa MModule then return mmodule_node(mentity)
		if mentity isa MClass then return mclass_node(mentity)
		if mentity isa MClassDef then return mclassdef_node(mentity)
		if mentity isa MProperty then return mproperty_node(mentity)
		if mentity isa MPropDef then return mpropdef_node(mentity)
		if mentity isa MType then return mtype_node(mentity)
		if mentity isa MParameter then return mparameter_node(mentity)
		abort
	end

	# Get the `MEntity` associated with `node`.
	fun to_mentity(model: Model, node: NeoNode): MEntity do
		if node.labels.has("MPackage") then return to_mpackage(model, node)
		if node.labels.has("MGroup") then return to_mgroup(model, node)
		if node.labels.has("MModule") then return to_mmodule(model, node)
		if node.labels.has("MClass") then return to_mclass(model, node)
		if node.labels.has("MClassDef") then return to_mclassdef(model, node)
		if node.labels.has("MProperty") then return to_mproperty(model, node)
		if node.labels.has("MPropDef") then return to_mpropdef(model, node)
		if node.labels.has("MType") then return to_mtype(model, node)
		if node.labels.has("MParameter") then return to_mparameter(model, node)
		abort
	end

	# Make a new `NeoNode` based on `mentity`.
	private fun make_node(mentity: MEntity): NeoNode do
		var node = new NeoNode
		nodes[mentity] = node
		node.labels.add "MEntity"
		node.labels.add model_name
		node["name"] = mentity.name
		if not mentity isa MSignature then
			#FIXME: MSignature is a MEntity, but has no model :/
			node["location"] = mentity.location.to_s
		end
		var mdoc = mentity.mdoc
		if mdoc != null then
			node["mdoc"] = new JsonArray.from(mdoc.content)
			node["mdoc_location"] = mdoc.location.to_s
		end
		return node
	end

	# Build a `NeoNode` representing `mpackage`.
	private fun mpackage_node(mpackage: MPackage): NeoNode do
		var node = make_node(mpackage)
		node.labels.add "MPackage"
		var root = mpackage.root
		if root != null then
			node.out_edges.add(new NeoEdge(node, "ROOT", to_node(root)))
		end
		return node
	end

	# Build a new `MPackage` from a `node`.
	#
	# REQUIRE `node.labels.has("MPackage")`
	private fun to_mpackage(model: Model, node: NeoNode): MPackage do
		var m = mentities.get_or_null(node.id.as(Int))
		if m isa MPackage then return m

		assert node.labels.has("MPackage")
		var location = to_location(node["location"].to_s)
		var mpackage = new MPackage(node["name"].to_s, model, location)
		mentities[node.id.as(Int)] = mpackage
		set_doc(node, mpackage)
		mpackage.root = to_mgroup(model, node.out_nodes("ROOT").first)
		return mpackage
	end

	# Build a `NeoNode` representing `mgroup`.
	private fun mgroup_node(mgroup: MGroup): NeoNode do
		var node = make_node(mgroup)
		node.labels.add "MGroup"
		var parent = mgroup.parent
		node.out_edges.add(new NeoEdge(node, "PROJECT", to_node(mgroup.mpackage)))
		if parent != null then
			node.out_edges.add(new NeoEdge(node, "PARENT", to_node(parent)))
		end
		for mmodule in mgroup.mmodules do
			node.out_edges.add(new NeoEdge(node, "DECLARES", to_node(mmodule)))
		end
		for subgroup in mgroup.in_nesting.direct_smallers do
			node.in_edges.add(new NeoEdge(node, "NESTS", to_node(subgroup)))
		end
		return node
	end

	# Build a new `MGroup` from a `node`.
	#
	# REQUIRE `node.labels.has("MGroup")`
	private fun to_mgroup(model: Model, node: NeoNode): MGroup do
		var m = mentities.get_or_null(node.id.as(Int))
		if m isa MGroup then return m

		assert node.labels.has("MGroup")
		var location = to_location(node["location"].to_s)
		var mpackage = to_mpackage(model, node.out_nodes("PROJECT").first)
		var parent: nullable MGroup = null
		var out = node.out_nodes("PARENT")
		if not out.is_empty then
			parent = to_mgroup(model, out.first)
		end
		var mgroup = new MGroup(node["name"].to_s, location, mpackage, parent)
		mentities[node.id.as(Int)] = mgroup
		set_doc(node, mgroup)
		return mgroup
	end

	# Build a `NeoNode` representing `mmodule`.
	private fun mmodule_node(mmodule: MModule): NeoNode do
		var node = make_node(mmodule)
		node.labels.add "MModule"
		for parent in mmodule.in_importation.direct_greaters do
			node.out_edges.add(new NeoEdge(node, "IMPORTS", to_node(parent)))
		end
		for mclass in mmodule.intro_mclasses do
			node.out_edges.add(new NeoEdge(node, "INTRODUCES", to_node(mclass)))
		end
		for mclassdef in mmodule.mclassdefs do
			node.out_edges.add(new NeoEdge(node, "DEFINES", to_node(mclassdef)))
		end
		return node
	end

	# Build a new `MModule` from a `node`.
	#
	# REQUIRE `node.labels.has("MModule")`
	private fun to_mmodule(model: Model, node: NeoNode): MModule do
		var m = mentities.get_or_null(node.id.as(Int))
		if m isa MModule then return m

		assert node.labels.has("MModule")
		var ins = node.in_nodes("DECLARES")
		var mgroup: nullable MGroup = null
		if not ins.is_empty then
			mgroup = to_mgroup(model, ins.first)
		end
		var name = node["name"].to_s
		var location = to_location(node["location"].to_s)
		var mmodule = new MModule(model, mgroup, name, location)
		mentities[node.id.as(Int)] = mmodule
		set_doc(node, mmodule)
		var imported_mmodules = new Array[MModule]
		for smod in node.out_nodes("IMPORTS") do
			imported_mmodules.add to_mmodule(model, smod)
		end
		mmodule.set_imported_mmodules(imported_mmodules)
		return mmodule
	end

	# Build a `NeoNode` representing `mclass`.
	private fun mclass_node(mclass: MClass): NeoNode do
		var node = make_node(mclass)
		node.labels.add "MClass"
		node["kind"] = mclass.kind.to_s
		node["visibility"] = mclass.visibility.to_s
		if not mclass.mparameters.is_empty then
			var parameter_names = new Array[String]
			for p in mclass.mparameters do parameter_names.add(p.name)
			node["parameter_names"] = new JsonArray.from(parameter_names)
		end
		node.out_edges.add(new NeoEdge(node, "CLASSTYPE", to_node(mclass.mclass_type)))
		return node
	end

	# Build a new `MClass` from a `node`.
	#
	# REQUIRE `node.labels.has("MClass")`
	private fun to_mclass(model: Model, node: NeoNode): MClass do
		var m = mentities.get_or_null(node.id.as(Int))
		if m isa MClass then return m

		assert node.labels.has("MClass")
		var mmodule = to_mmodule(model, node.in_nodes("INTRODUCES").first)
		var name = node["name"].to_s
		var location = to_location(node["location"].to_s)
		var kind = to_kind(node["kind"].to_s)
		var visibility = to_visibility(node["visibility"].to_s)
		var parameter_names = new Array[String]
		if node.has_key("parameter_names") then
			for e in node["parameter_names"].as(JsonArray) do
				parameter_names.add e.to_s
			end
		end
		var mclass = new MClass(mmodule, name, location, parameter_names, kind, visibility)
		mentities[node.id.as(Int)] = mclass
		set_doc(node, mclass)
		return mclass
	end

	# Build a `NeoNode` representing `mclassdef`.
	private fun mclassdef_node(mclassdef: MClassDef): NeoNode do
		var node = make_node(mclassdef)
		node.labels.add "MClassDef"
		node.out_edges.add(new NeoEdge(node, "BOUNDTYPE", to_node(mclassdef.bound_mtype)))
		node.out_edges.add(new NeoEdge(node, "MCLASS", to_node(mclassdef.mclass)))
		for mproperty in mclassdef.intro_mproperties do
			node.out_edges.add(new NeoEdge(node, "INTRODUCES", to_node(mproperty)))
		end
		for mpropdef in mclassdef.mpropdefs do
			node.out_edges.add(new NeoEdge(node, "DECLARES", to_node(mpropdef)))
		end
		for sup in mclassdef.supertypes do
			node.out_edges.add(new NeoEdge(node, "INHERITS", to_node(sup)))
		end
		return node
	end

	# Build a new `MClassDef` from a `node`.
	#
	# REQUIRE `node.labels.has("MClassDef")`
	private fun to_mclassdef(model: Model, node: NeoNode): MClassDef do
		var m = mentities.get_or_null(node.id.as(Int))
		if m isa MClassDef then return m

		assert node.labels.has("MClassDef")
		var mmodule = to_mmodule(model, node.in_nodes("DEFINES").first)
		var mtype = to_mtype(model, node.out_nodes("BOUNDTYPE").first).as(MClassType)
		var location = to_location(node["location"].to_s)
		var mclassdef = new MClassDef(mmodule, mtype, location)
		mentities[node.id.as(Int)] = mclassdef
		set_doc(node, mclassdef)
		var supertypes = new Array[MClassType]
		for sup in node.out_nodes("INHERITS") do
			supertypes.add to_mtype(model, sup).as(MClassType)
		end
		mclassdef.set_supertypes(supertypes)
		mclassdef.add_in_hierarchy
		return mclassdef
	end

	# Build a `NeoNode` representing `mproperty`.
	private fun mproperty_node(mproperty: MProperty): NeoNode do
		var node = make_node(mproperty)
		node.labels.add "MProperty"
		node["visibility"] = mproperty.visibility.to_s
		if mproperty isa MMethod then
			node.labels.add "MMethod"
			node["is_init"] = mproperty.is_init
		else if mproperty isa MAttribute then
			node.labels.add "MAttribute"
		else if mproperty isa MVirtualTypeProp then
			node.labels.add "MVirtualTypeProp"
		else if mproperty isa MInnerClass then
			node.labels.add "MInnerClass"
			node.out_edges.add(new NeoEdge(node, "NESTS", to_node(mproperty.inner)))
		end
		node.out_edges.add(new NeoEdge(node, "INTRO_CLASSDEF", to_node(mproperty.intro_mclassdef)))
		return node
	end

	# Build a new `MProperty` from a `node`.
	#
	# REQUIRE `node.labels.has("MProperty")`
	private fun to_mproperty(model: Model, node: NeoNode): MProperty do
		var m = mentities.get_or_null(node.id.as(Int))
		if m isa MProperty then return m

		assert node.labels.has("MProperty")
		var intro_mclassdef = to_mclassdef(model, node.out_nodes("INTRO_CLASSDEF").first)
		var name = node["name"].to_s
		var location = to_location(node["location"].to_s)
		var visibility = to_visibility(node["visibility"].to_s)
		var mprop: nullable MProperty = null
		if node.labels.has("MMethod") then
			mprop = new MMethod(intro_mclassdef, name, location, visibility)
			mprop.is_init = node["is_init"].as(Bool)
		else if node.labels.has("MAttribute") then
			mprop = new MAttribute(intro_mclassdef, name, location, visibility)
		else if node.labels.has("MVirtualTypeProp") then
			mprop = new MVirtualTypeProp(intro_mclassdef, name, location, visibility)
		else if node.labels.has("MInnerClass") then
			var inner = to_mclass(model, node.out_nodes("NESTS").first)
			mprop = new MInnerClass(intro_mclassdef, name, location, visibility, inner)
		end
		if mprop == null then
			print "not yet implemented to_mproperty for {node.labels.join(",")}"
			abort
		end
		mentities[node.id.as(Int)] = mprop
		set_doc(node, mprop)
		return mprop
	end

	# Build a `NeoNode` representing `mpropdef`.
	private fun mpropdef_node(mpropdef: MPropDef): NeoNode do
		var node = make_node(mpropdef)
		node.labels.add "MPropDef"
		node.out_edges.add(new NeoEdge(node, "DEFINES", to_node(mpropdef.mproperty)))
		if mpropdef isa MMethodDef then
			node.labels.add "MMethodDef"
			node["is_abstract"] = mpropdef.is_abstract
			node["is_intern"] = mpropdef.is_intern
			node["is_extern"] = mpropdef.is_extern
			var msignature = mpropdef.msignature
			if msignature != null then
				node.out_edges.add(new NeoEdge(node, "SIGNATURE", to_node(msignature)))
			end
		else if mpropdef isa MAttributeDef then
			node.labels.add "MAttributeDef"
			var static_mtype = mpropdef.static_mtype
			if static_mtype != null then
				node.out_edges.add(new NeoEdge(node, "TYPE", to_node(static_mtype)))
			end
		else if mpropdef isa MVirtualTypeDef then
			node.labels.add "MVirtualTypeDef"
			var bound = mpropdef.bound
			if bound != null then
				node.out_edges.add(new NeoEdge(node, "BOUND", to_node(bound)))
			end
		else if mpropdef isa MInnerClassDef then
			node.labels.add "MInnerClassDef"
			node.out_edges.add(new NeoEdge(node, "NESTS", to_node(mpropdef.inner)))
		end
		return node
	end

	# Build a new `MPropDef` from a `node`.
	#
	# REQUIRE `node.labels.has("MPropDef")`
	private fun to_mpropdef(model: Model, node: NeoNode): MPropDef do
		var m = mentities.get_or_null(node.id.as(Int))
		if m isa MPropDef then return m

		assert node.labels.has("MPropDef")
		var mclassdef = to_mclassdef(model, node.in_nodes("DECLARES").first)
		var mproperty = to_mproperty(model, node.out_nodes("DEFINES").first)
		var location = to_location(node["location"].to_s)
		var mpropdef: nullable MPropDef = null
		if node.labels.has("MMethodDef") then
			mpropdef = new MMethodDef(mclassdef, mproperty.as(MMethod), location)
			mpropdef.is_abstract = node["is_abstract"].as(Bool)
			mpropdef.is_intern = node["is_intern"].as(Bool)
			mpropdef.is_extern = node["is_extern"].as(Bool)
			mentities[node.id.as(Int)] = mpropdef
			mpropdef.msignature = to_mtype(model, node.out_nodes("SIGNATURE").first).as(MSignature)
		else if node.labels.has("MAttributeDef") then
			mpropdef = new MAttributeDef(mclassdef, mproperty.as(MAttribute), location)
			mentities[node.id.as(Int)] = mpropdef
			var static_mtype = node.out_nodes("TYPE")
			if not static_mtype.is_empty then mpropdef.static_mtype = to_mtype(model, static_mtype.first)
		else if node.labels.has("MVirtualTypeDef") then
			mpropdef = new MVirtualTypeDef(mclassdef, mproperty.as(MVirtualTypeProp), location)
			mentities[node.id.as(Int)] = mpropdef
			var bound = node.out_nodes("BOUND")
			if not bound.is_empty then mpropdef.bound = to_mtype(model, bound.first)
		else if node.labels.has("MInnerClassDef") then
			var inner = to_mclassdef(model, node.out_nodes("NESTS").first)
			mpropdef = new MInnerClassDef(mclassdef,
					mproperty.as(MInnerClass), location, inner)
			mentities[node.id.as(Int)] = mpropdef
		end
		if mpropdef == null then
			print "not yet implemented to_mpropdef for {node.labels.join(",")}"
			abort
		end
		set_doc(node, mpropdef)
		return mpropdef
	end

	# Build a `NeoNode` representing `mtype`.
	private fun mtype_node(mtype: MType): NeoNode do
		var node = make_node(mtype)
		node.labels.add "MType"
		if mtype isa MClassType then
			node.labels.add "MClassType"
			node.out_edges.add(new NeoEdge(node, "CLASS", to_node(mtype.mclass)))
			for arg in mtype.arguments do
				node.out_edges.add(new NeoEdge(node, "ARGUMENT", to_node(arg)))
			end
			if mtype isa MGenericType then
				node.labels.add "MGenericType"
			end
		else if mtype isa MVirtualType then
			node.labels.add "MVirtualType"
			node.out_edges.add(new NeoEdge(node, "PROPERTY", to_node(mtype.mproperty)))
		else if mtype isa MParameterType then
			node.labels.add "MParameterType"
			node["rank"] = mtype.rank
			node.out_edges.add(new NeoEdge(node, "CLASS", to_node(mtype.mclass)))
		else if mtype isa MNullableType then
			node.labels.add "MNullableType"
			node.out_edges.add(new NeoEdge(node, "TYPE", to_node(mtype.mtype)))
		else if mtype isa MSignature then
			node.labels.add "MSignature"
			var names = new JsonArray
			var rank = 0
			for mparameter in mtype.mparameters do
				names.add mparameter.name
				var pnode = mparameter_node(mparameter)
				pnode["rank"] = rank
				node.out_edges.add(new NeoEdge(node, "PARAMETER", pnode))
				rank += 1
			end
			if not names.is_empty then node["parameter_names"] = names
			var return_mtype = mtype.return_mtype
			if return_mtype != null then
				node.out_edges.add(new NeoEdge(node, "RETURNTYPE", to_node(return_mtype)))
			end
		else if mtype isa MRawType then
			node.labels.add "MRawType"
			var text = new JsonArray
			var rank = 0
			for part in mtype.parts do
				text.add part.text
				if part.target != null then
					var pnode = mtypepart_node(part)
					pnode["rank"] = rank
					node.out_edges.add(new NeoEdge(node, "LINK", pnode))
				end
				rank += 1
			end
			if not text.is_empty then node["text"] = text
		end
		return node
	end

	# Build a `NeoNode` representing `mtypepart`.
	private fun mtypepart_node(mtypepart: MTypePart): NeoNode do
		var node = make_node(mtypepart)
		node.labels.add "MTypePart"
		if mtypepart.target != null then
			var target_node = to_node(mtypepart.target.as(not null))
			node.out_edges.add(new NeoEdge(node, "TARGET", target_node))
		end
		return node
	end

	# Build a new `MType` from a `node`.
	#
	# REQUIRE `node.labels.has("MType")`
	private fun to_mtype(model: Model, node: NeoNode): MType do
		var m = mentities.get_or_null(node.id.as(Int))
		if m isa MType then return m

		assert node.labels.has("MType")
		if node.labels.has("MClassType") then
			var mclass = to_mclass(model, node.out_nodes("CLASS").first)
			var args = new Array[MType]
			for narg in node.out_nodes("ARGUMENT") do
				args.add to_mtype(model, narg)
			end
			var mtype = mclass.get_mtype(args)
			mentities[node.id.as(Int)] = mtype
			return mtype
		else if node.labels.has("MParameterType") then
			var mclass = to_mclass(model, node.out_nodes("CLASS").first)
			var rank = node["rank"].to_s.to_i
			var mtype = mclass.mparameters[rank]
			mentities[node.id.as(Int)] = mtype
			return  mtype
		else if node.labels.has("MNullableType") then
			var intype = to_mtype(model, node.out_nodes("TYPE").first)
			var mtype = intype.as_nullable
			mentities[node.id.as(Int)] = mtype
			return mtype
		else if node.labels.has("MVirtualType") then
			var mproperty = to_mproperty(model, node.out_nodes("PROPERTY").first)
			assert mproperty isa MVirtualTypeProp
			var mtype = mproperty.mvirtualtype
			mentities[node.id.as(Int)] = mtype
			return mtype
		else if node.labels.has("MSignature") then
			# Get all param nodes
			var mparam_nodes = new HashMap[String, MParameter]
			for pnode in node.out_nodes("PARAMETER") do
				var mparam = to_mparameter(model, pnode)
				mparam_nodes[mparam.name] = mparam
			end
			# Load params in the good order
			var mparam_names = node["parameter_names"]
			var mparameters = new Array[MParameter]
			if mparam_names isa JsonArray then
				for mparam_name in mparam_names do
					var mparam = mparam_nodes[mparam_name.to_s]
					mparameters.add mparam
				end
			end
			var return_mtype: nullable MType = null
			var ret_nodes = node.out_nodes("RETURNTYPE")
			if not ret_nodes.is_empty then
				return_mtype = to_mtype(model, ret_nodes.first)
			end
			var mtype = new MSignature(mparameters, return_mtype)
			mentities[node.id.as(Int)] = mtype
			return mtype
		else if node.labels.has("MRawType") then
			var mtype = new MRawType(model)
			var parts = node["text"]
			if parts isa JsonArray then
				for p in parts do
					mtype.parts.add(new MTypePart(model, p.to_s, null))
				end
				for pnode in node.out_nodes("LINK") do
					assert pnode.labels.has("MTypePart")
					if not pnode.out_nodes("TARGET").is_empty then
						var rank = pnode["rank"]
						var target = to_mentity(model, pnode.out_nodes("TARGET").first)
						assert rank isa Int
						mtype.parts[rank] = mtype.parts[rank].link_to(target)
					end
				end
			end
			mentities[node.id.as(Int)] = mtype
			return mtype
		end
		print "not yet implemented to_mtype for {node.labels.join(",")}"
		abort
	end

	# Build a `NeoNode` representing `mparameter`.
	private fun mparameter_node(mparameter: MParameter): NeoNode do
		var node = make_node(mparameter)
		node.labels.add "MParameter"
		node["name"] = mparameter.name
		node["is_vararg"] = mparameter.is_vararg
		node.out_edges.add(new NeoEdge(node, "TYPE", to_node(mparameter.mtype)))
		return node
	end

	# Build a new `MParameter` from `node`.
	#
	# REQUIRE `node.labels.has("MParameter")`
	private fun to_mparameter(model: Model, node: NeoNode): MParameter do
		var m = mentities.get_or_null(node.id.as(Int))
		if m isa MParameter then return m

		assert node.labels.has("MParameter")
		var name = node["name"].to_s
		var mtype = to_mtype(model, node.out_nodes("TYPE").first)
		var is_vararg = node["is_vararg"].as(Bool)
		var mparameter = new MParameter(name, mtype, is_vararg)
		mentities[node.id.as(Int)] = mparameter
		return mparameter
	end

	# Get a `Location` from its string representation.
	private fun to_location(loc: String): nitc::Location do
		return new nitc::Location.from_string(loc)
	end

	# Get a `MVisibility` from its string representation.
	private fun to_visibility(vis: String): MVisibility do
		if vis == intrude_visibility.to_s then
			return intrude_visibility
		else if vis == public_visibility.to_s then
			return public_visibility
		else if vis == protected_visibility.to_s then
			return protected_visibility
		else if vis == private_visibility.to_s then
			return private_visibility
		else if vis == package_visibility.to_s then
			return package_visibility
		else
			return none_visibility
		end
	end

	# Get a `MKind` from its string representation.
	private fun to_kind(kind: String): MClassKind do
		if kind == abstract_kind.to_s then
			return abstract_kind
		else if kind == concrete_kind.to_s then
			return concrete_kind
		else if kind == interface_kind.to_s then
			return interface_kind
		else if kind == enum_kind.to_s then
			return enum_kind
		else if kind == extern_kind.to_s then
			return extern_kind
		else
			return raw_kind(kind)
		end
	end

	# Extract the `MDoc` from `node` and link it to `mentity`.
	private fun set_doc(node: NeoNode, mentity: MEntity) do
		if node.has_key("mdoc") then
			var lines = new Array[String]
			for e in node["mdoc"].as(JsonArray) do
				lines.add e.to_s#.replace("\n", "\\n")
			end
			var location = to_location(node["mdoc_location"].to_s)
			var mdoc = new MDoc(location)
			mdoc.content.add_all(lines)
			mdoc.original_mentity = mentity
			mentity.mdoc = mdoc
		end
	end
end
