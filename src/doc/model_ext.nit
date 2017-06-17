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

# Extensions to the Nit model for foreign languages.
module doc::model_ext

intrude import model
intrude import model::model_base

# A type described by a text annoted with links.
#
# For use with Nitdoc only.
class MRawType
	super MType

	redef var model

	# The parts that contitute the description of the type.
	var parts: Sequence[MTypePart] = new Array[MTypePart]

	redef fun as_nullable do
		not_available
		return self
	end
	redef fun need_anchor do
		not_available
		return false
	end
	redef fun resolve_for(mtype, anchor, mmodule, cleanup_virtual) do
		not_available
		return self
	end
	redef fun can_resolve_for(mtype, anchor, mmodule) do
		not_available
		return true
	end
	redef fun collect_mclassdefs(mmodule) do
		not_available
		return new HashSet[MClassDef]
	end
	redef fun collect_mclasses(mmodule) do
		not_available
		return new HashSet[MClass]
	end
	redef fun collect_mtypes(mmodule) do
		not_available
		return new HashSet[MClassType]
	end

	redef fun to_s do return parts.to_s

	private fun not_available do
		assert false else
			sys.stderr.write "A `MRawType` is for documentation-purpose only so the requested operation is not available.\n"
		end
	end
end

# A part of a `RawType`.
class MTypePart
	super MEntity

	redef var model

	# The textual content.
	var text: String

	# If the part links to another entity, the targeted entity.
	var target: nullable MEntity

	redef fun name do return text
	redef fun to_s do return text

	# Return a version of `self` that links to the specified entity.
	fun link_to(target: nullable MEntity): MTypePart do
		return new MTypePart(model, text, target)
	end
end

# An inner class.
class MInnerClass
	super MProperty

	redef type MPROPDEF: MInnerClassDef

	# The actual class.
	var inner: MClass
end

# An inner class definition.
class MInnerClassDef
	super MPropDef

	redef type MPROPDEF: MInnerClassDef
	redef type MPROPERTY: MInnerClass

	# The actual class definition.
	var inner: MClassDef
end


# The “package” visiblity.
#
# Any visibility roughly equivalent to the default visibility of Java, that is
# private for a collection of modules.
fun package_visibility: MVisibility do return once new MVisibility("package", 2)

# A class kind with no equivalent semantic in Nit.
fun raw_kind(s: String): MClassKind do return new MClassKind(s, false, false, false)
