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

# Make model entities Jsonable.
#
# To avoid cycles, every reference from a MEntity to another is replaced by a
# MEntityRef.
#
# How subobjects are retrieved using the MEntityRef is the responsability of the
# client. Json objects can be returned as this or inflated with concrete objet
# rather than the refs.
#
# TODO consider serialization module?
module model_json

import model::model_collect
import json
import loader

# A reference to another mentity.
class MEntityRef
	super MEntity

	# MEntity to link to.
	var mentity: MEntity

	# Return `self` as a Json Object.
	#
	# By default, MEntity references contain only the `full_name` of the Mentity.
	# You should redefine this method in your client to implement a different behavior.
	redef fun json do
		var obj = new JsonObject
		obj["full_name"] = mentity.full_name
		return obj
	end
end

redef class MEntity
	super Jsonable

	# Return `self` as a JsonObject.
	#
	# By default, every reference to another MEntity is replaced by a pointer
	# to the MEntity::json_id.
	fun json: JsonObject do
		var obj = new JsonObject
		obj["name"] = name
		obj["class_name"] = class_name
		obj["full_name"] = full_name
		obj["mdoc"] = mdoc_or_fallback
		var modifiers = new JsonArray
		for modifier in collect_modifiers do
			modifiers.add modifier
		end
		obj["modifiers"] = modifiers
		return obj
	end

	redef fun to_json do return json.to_json
end

redef class MDoc
	super Jsonable

	# Return `self` as a JsonObject.
	fun json: JsonObject do
		var obj = new JsonObject
		obj["content"] = content.join("\n")
		obj["location"] = location
		return obj
	end

	redef fun to_json do return json.to_json
end

redef class Location
	super Jsonable

	# Return `self` as a JsonObject.
	fun json: JsonObject do
		var obj = new JsonObject
		obj["column_end"] = column_end
		obj["column_start"] = column_start
		obj["line_end"] = line_end
		obj["line_start"] = line_start
		var file = self.file
		if file != null then
			obj["file"] = file.filename
		end
		return obj
	end

	redef fun to_json do return json.to_json
end

redef class MVisibility
	super Jsonable

	redef fun to_json do return to_s.to_json
end

redef class MPackage

	redef fun json do
		var obj = super
		obj["visibility"] = public_visibility
		if ini != null then
			obj["ini"] = new JsonObject.from(ini.as(not null).to_map)
		end
		obj["root"] = to_mentity_ref(root)
		obj["mgroups"] = to_mentity_refs(mgroups)
		return obj
	end
end

redef class MGroup
	redef fun json do
		var obj = super
		obj["visibility"] = public_visibility
		obj["is_root"] = is_root
		obj["mpackage"] = to_mentity_ref(mpackage)
		obj["default_mmodule"] = to_mentity_ref(default_mmodule)
		obj["parent"] = to_mentity_ref(parent)
		obj["mmodules"] = to_mentity_refs(mmodules)
		obj["mgroups"] = to_mentity_refs(in_nesting.direct_smallers)
		return obj
	end
end

redef class MModule
	redef fun json do
		var obj = super
		obj["location"] = location
		obj["visibility"] = public_visibility
		obj["mpackage"] = to_mentity_ref(mpackage)
		obj["mgroup"] = to_mentity_ref(mgroup)
		obj["intro_mclasses"] = to_mentity_refs(intro_mclasses)
		obj["mclassdefs"] = to_mentity_refs(mclassdefs)
		return obj
	end
end

redef class MClass
	redef fun json do
		var obj = super
		obj["visibility"] = visibility
		var arr = new JsonArray
		for mparameter in mparameters do arr.add mparameter
		obj["mparameters"] = arr
		obj["intro"] = to_mentity_ref(intro)
		obj["intro_mmodule"] = to_mentity_ref(intro_mmodule)
		obj["mpackage"] = to_mentity_ref(intro_mmodule.mpackage)
		obj["mclassdefs"] = to_mentity_refs(mclassdefs)
		return obj
	end
end

redef class MClassDef
	redef fun json do
		var obj = super
		obj["visibility"] = mclass.visibility
		obj["location"] = location
		obj["is_intro"] = is_intro
		var arr = new JsonArray
		for mparameter in mclass.mparameters do arr.add mparameter
		obj["mparameters"] = arr
		obj["mmodule"] = to_mentity_ref(mmodule)
		obj["mclass"] = to_mentity_ref(mclass)
		obj["mpropdefs"] = to_mentity_refs(mpropdefs)
		obj["intro_mproperties"] = to_mentity_refs(intro_mproperties)
		return obj
	end
end

redef class MProperty
	redef fun json do
		var obj = super
		obj["visibility"] = visibility
		obj["intro"] = to_mentity_ref(intro)
		obj["intro_mclassdef"] = to_mentity_ref(intro_mclassdef)
		obj["mpropdefs"] = to_mentity_refs(mpropdefs)
		return obj
	end
end

redef class MMethod
	redef fun json do
		var obj = super
		obj["is_init"] = is_init
		obj["msignature"] = intro.msignature
		return obj
	end
end

redef class MAttribute
	redef fun json do
		var obj = super
		obj["static_mtype"] = to_mentity_ref(intro.static_mtype)
		return obj
	end
end

redef class MVirtualTypeProp
	redef fun json do
		var obj = super
		obj["mvirtualtype"] = to_mentity_ref(mvirtualtype)
		obj["bound"] = to_mentity_ref(intro.bound)
		return obj
	end
end

redef class MPropDef
	redef fun json do
		var obj = super
		obj["visibility"] = mproperty.visibility
		obj["location"] = location
		obj["is_intro"] = is_intro
		obj["mclassdef"] = to_mentity_ref(mclassdef)
		obj["mproperty"] = to_mentity_ref(mproperty)
		return obj
	end
end

redef class MMethodDef
	redef fun json do
		var obj = super
		obj["msignature"] = msignature
		return obj
	end
end

redef class MAttributeDef
	redef fun json do
		var obj = super
		obj["static_mtype"] = to_mentity_ref(static_mtype)
		return obj
	end
end

redef class MVirtualTypeDef
	redef fun json do
		var obj = super
		obj["bound"] = to_mentity_ref(bound)
		obj["is_fixed"] = is_fixed
		return obj
	end
end

redef class MSignature
	redef fun json do
		var obj = new JsonObject
		obj["arity"] = arity
		var arr = new JsonArray
		for mparam in mparameters do arr.add mparam
		obj["mparams"] = arr
		obj["return_mtype"] = to_mentity_ref(return_mtype)
		obj["vararg_rank"] = vararg_rank
		return obj
	end
end

redef class MParameterType
	redef fun json do
		var obj = new JsonObject
		obj["name"] = name
		obj["rank"] = rank
		obj["mtype"] = to_mentity_ref(mclass.intro.bound_mtype.arguments[rank])
		return obj
	end
end

redef class MParameter
	redef fun json do
		var obj = new JsonObject
		obj["is_vararg"] = is_vararg
		obj["name"] = name
		obj["mtype"] = to_mentity_ref(mtype)
		return obj
	end
end

# Create a ref to a `mentity`.
fun to_mentity_ref(mentity: nullable MEntity): nullable MEntityRef do
	if mentity == null then return null
	return new MEntityRef(mentity)
end

# Return a collection of `mentities` as a JsonArray of MEntityRefs.
fun to_mentity_refs(mentities: Collection[MEntity]): JsonArray do
	var array = new JsonArray
	for mentity in mentities do array.add to_mentity_ref(mentity)
	return array
end
