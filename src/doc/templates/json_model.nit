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

# Make model entities Serializable.
#
# To avoid cycles, every reference from a MEntity to another is replaced by a
# MEntityRef.
#
# How subobjects are retrieved using the MEntityRef is the responsability of the
# client. Json objects can be returned as this or inflated with concrete objet
# rather than the refs.
#
# TODO consider serialization module?
module json_model

import model::model_collect
import json::serialization_write
import catalog

import html_model

redef class MEntity
	serialize

	private fun core_serialize_base(v: Serializer) do
		v.serialize_attribute("name", name)
		var mdoc = mdoc_or_fallback
		if mdoc != null then
			v.serialize_attribute("synopsis", mdoc.synopsis)
		end
	end

	redef fun core_serialize_to(v) do
		core_serialize_base(v)

		v.serialize_attribute("namespace", json_namespace)
		v.serialize_attribute("class_name", class_name)
		v.serialize_attribute("full_name", full_name)
		v.serialize_attribute("visibility", visibility.to_s)
		var mdoc = mdoc_or_fallback
		if mdoc != null then
			v.serialize_attribute("html_synopsis", mdoc.html_synopsis.write_to_string)
		end

		var modifiers = collect_modifiers
		if modifiers.not_empty then
			v.serialize_attribute("modifiers", modifiers)
		end
	end

	# Return `self.full_name` as an object that can be serialized to json.
	fun json_namespace: JsonNamespace is abstract

	# Return a new MEntityRef to `self`.
	fun to_json_ref: MEntityRef do return new MEntityRef(self)
end

redef class MDoc
	serialize

	redef fun core_serialize_to(v) do
		var doc = html_documentation.write_to_string.trim
		if not doc.is_empty then
			v.serialize_attribute("html_documentation", doc)
		end
	end
end

redef class nitc::Location
	serialize

	redef fun core_serialize_to(v) do
		v.serialize_attribute("column_end", column_end)
		v.serialize_attribute("column_start", column_start)
		v.serialize_attribute("line_end", line_end)
		v.serialize_attribute("line_start", line_start)
		var file = self.file
		if file != null then
			v.serialize_attribute("file", file.filename)
		end
	end
end

redef class MPackage
	redef fun core_serialize_to(v) do
		super

		var metadata = self.metadata
		if metadata.license != null then
			v.serialize_attribute("license", metadata.license)
		end
		if metadata.maintainers.not_empty then
			v.serialize_attribute("maintainer", metadata.maintainers.first)
		end
		if metadata.tags.not_empty then
			v.serialize_attribute("tags", metadata.tags)
		end
	end

	redef fun json_namespace do
		var ns = new JsonNamespace
		ns.add to_json_ref
		return ns
	end
end

redef class MGroup
	redef fun json_namespace do
		var ns = new JsonNamespace
		if parent != null then
			ns.prepend parent.as(not null).json_namespace
		end
		ns.add to_json_ref
		ns.add ">"
		return ns
	end
end

redef class MModule
	redef fun json_namespace do
		var ns = new JsonNamespace
		if mgroup != null then
			ns.add_all mgroup.as(not null).mpackage.json_namespace
			ns.add "::"
		end
		ns.add to_json_ref
		return ns
	end

	private fun ns_for(visibility: MVisibility): JsonNamespace do
		if visibility <= private_visibility then return json_namespace
		var mgroup = self.mgroup
		if mgroup == null then return json_namespace
		return mgroup.mpackage.json_namespace
	end
end

redef class MClass
	redef fun core_serialize_to(v) do
		super

		if mparameters.not_empty then
			v.serialize_attribute("mparameters", mparameters)
		end
	end

	redef fun json_namespace do
		var ns = new JsonNamespace
		ns.add_all intro_mmodule.ns_for(visibility)
		ns.add "::"
		ns.add to_json_ref
		return ns
	end
end

redef class MClassDef
	redef fun core_serialize_to(v) do
		super
		if is_intro then
			v.serialize_attribute("is_intro", true)
		end
		if mclass.mparameters.not_empty then
			v.serialize_attribute("mparameters", mclass.mparameters)
		end
	end

	redef fun json_namespace do
		var ns = new JsonNamespace
		if is_intro then
			ns.add_all mmodule.ns_for(mclass.visibility)
			ns.add "$"
			ns.add mclass.to_json_ref
		else if mclass.intro_mmodule.mpackage != mmodule.mpackage then
			ns.add_all mmodule.json_namespace
			ns.add "$"
			ns.add_all mclass.json_namespace
		else if mclass.visibility > private_visibility then
			ns.add_all mmodule.json_namespace
			ns.add "$"
			ns.add mclass.to_json_ref
		else
			ns.add_all mmodule.json_namespace
			ns.add "$::"
			ns.add mclass.intro_mmodule.to_json_ref
			ns.add "::"
			ns.add mclass.to_json_ref
		end
		return ns
	end
end

redef class MProperty
	redef fun json_namespace do
		var ns = new JsonNamespace
		if intro_mclassdef.is_intro then
			ns.add_all intro_mclassdef.mmodule.ns_for(visibility)
			ns.add "::"
			ns.add intro_mclassdef.mclass.to_json_ref
			ns.add "::"
			ns.add to_json_ref
		else
			ns.add_all intro_mclassdef.mmodule.json_namespace
			ns.add "::"
			ns.add intro_mclassdef.mclass.to_json_ref
			ns.add "::"
			ns.add to_json_ref
		end
		return ns
	end
end

redef class MMethod
	redef fun core_serialize_to(v) do
		super
		if is_init then
			v.serialize_attribute("is_init", true)
		end
		v.serialize_attribute("msignature", intro.msignature)
	end
end

redef class MAttribute
	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("static_mtype", intro.static_mtype)
	end
end

redef class MVirtualTypeProp
	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("bound", intro.bound)
	end
end

redef class MPropDef
	redef fun core_serialize_to(v) do
		super
		if is_intro then
			v.serialize_attribute("is_intro", true)
		end
	end

	redef fun json_namespace do
		var res = new JsonNamespace
		res.add_all mclassdef.json_namespace
		res.add "$"

		if mclassdef.mclass == mproperty.intro_mclassdef.mclass then
			res.add to_json_ref
		else
			if mclassdef.mmodule.mpackage != mproperty.intro_mclassdef.mmodule.mpackage then
				res.add_all mproperty.intro_mclassdef.mmodule.ns_for(mproperty.visibility)
				res.add "::"
			else if mproperty.visibility <= private_visibility then
				if mclassdef.mmodule.namespace_for(mclassdef.mclass.visibility) != mproperty.intro_mclassdef.mmodule.mpackage then
					res.add "::"
					res.add mproperty.intro_mclassdef.mmodule.to_json_ref
					res.add "::"
				end
			end
			if mclassdef.mclass != mproperty.intro_mclassdef.mclass then
				res.add mproperty.intro_mclassdef.to_json_ref
				res.add "::"
			end
			res.add to_json_ref
		end
		return res
	end
end

redef class MMethodDef
	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("msignature", msignature)
	end
end

redef class MAttributeDef
	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("static_mtype", static_mtype)
	end
end

redef class MVirtualTypeDef
	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("bound", bound)
	end
end

redef class MType
	redef fun core_serialize_to(v) do
		v.serialize_attribute("name", name)

		var mdoc = mdoc_or_fallback
		if mdoc != null then
			v.serialize_attribute("synopsis", mdoc.synopsis)
			v.serialize_attribute("html_synopsis", mdoc.html_synopsis.write_to_string)
		end
	end
end


redef class MSignature
	redef fun core_serialize_to(v) do
		v.serialize_attribute("arity", arity)
		v.serialize_attribute("mparameters", mparameters)
		v.serialize_attribute("return_mtype", return_mtype)
	end
end

redef class MParameterType
	redef fun core_serialize_to(v) do
		v.serialize_attribute("name", name)
		v.serialize_attribute("mtype", mclass.intro.bound_mtype.arguments[rank])
	end
end

redef class MParameter
	redef fun core_serialize_to(v) do
		v.serialize_attribute("is_vararg", is_vararg)
		v.serialize_attribute("name", name)
		v.serialize_attribute("mtype", mtype)
	end
end

# Fullname representation that can be used to build decorated links
#
# * MPackage: `mpackage_name`
# * MGroup: `(mpackage_name::)mgroup_name`
class JsonNamespace
	super Array[nullable JsonRef]
	serialize

	redef fun to_s do return self.join("")
	redef fun serialize_to(v) do to_a.serialize_to(v)
end

# Something that goes in a JsonNamespace
#
# Can be either:
# * a `RefToken` for tokens like `::`, `>` and `$`
# * a `MEntityRef` for references to mentities
interface JsonRef
	super Serializable
end

# A reference to another mentity.
class MEntityRef
	super JsonRef

	# MEntity to link to.
	var mentity: MEntity

	redef fun core_serialize_to(v) do
		mentity.core_serialize_base(v)
	end
end

# A namespace token representation
#
# Used for namespace tokens like `::`, `>` and `$`
redef class String
	super JsonRef
end

# Catalog

redef class MPackageMetadata
	serialize

	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("license", license)
		v.serialize_attribute("maintainers", maintainers)
		v.serialize_attribute("contributors", contributors)
		v.serialize_attribute("tags", tags)
		v.serialize_attribute("tryit", tryit)
		v.serialize_attribute("apk", apk)
		v.serialize_attribute("homepage", homepage)
		v.serialize_attribute("browse", browse)
		v.serialize_attribute("git", git)
		v.serialize_attribute("issues", issues)
		v.serialize_attribute("first_date", first_date)
		v.serialize_attribute("last_date", last_date)
	end
end

# Catalog statistics
redef class CatalogStats
	serialize

	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("packages", packages)
		v.serialize_attribute("maintainers", maintainers)
		v.serialize_attribute("contributors", contributors)
		v.serialize_attribute("tags", tags)
		v.serialize_attribute("modules", modules)
		v.serialize_attribute("classes", classes)
		v.serialize_attribute("methods", methods)
		v.serialize_attribute("loc", loc)
	end
end

# MPackage statistics for the catalog
redef class MPackageStats
	serialize

	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("mmodules", mmodules)
		v.serialize_attribute("mclasses", mclasses)
		v.serialize_attribute("mmethods", mmethods)
		v.serialize_attribute("loc", loc)
		v.serialize_attribute("errors", errors)
		v.serialize_attribute("warnings", warnings)
		v.serialize_attribute("warnings_per_kloc", warnings_per_kloc)
		v.serialize_attribute("documentation_score", documentation_score)
		v.serialize_attribute("commits", commits)
		v.serialize_attribute("score", score)
	end
end

redef class Person
	serialize

	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("name", name)
		v.serialize_attribute("email", email)
		v.serialize_attribute("gravatar", gravatar)
	end
end
