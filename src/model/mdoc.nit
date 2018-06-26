# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Documentation of model entities
module mdoc

import model_base
import location

# Structured documentation of a `MEntity` object
class MDoc
	# Raw content, line by line
	# The starting `#` and first space are stripped.
	# The trailing `\n` are chomped.
	var content = new Array[String]

	# The entity where the documentation is originally attached to.
	# This gives some context to resolve identifiers or to run examples.
	var original_mentity: nullable MEntity = null is writable

	# The original location of the doc for error messages
	var location: Location

	# The comment first line
	var synopsis: String is lazy do return content.first

	# All comment lines except for the synopsis
	var comment: String is lazy do
		var lines = content.to_a
		if not lines.is_empty then lines.shift
		return lines.join("\n")
	end

	# Full comment
	var documentation: String is lazy do return content.join("\n")
end

redef class MEntity
	# The documentation associated to the entity
	var mdoc: nullable MDoc = null is writable

	# The documentation associated to the entity or their main nested entity.
	#
	# * `MPackage`s fall back to their root `MGroup`.
	# * `MGroup`s fall back to their `default_mmodule`.
	# * `MClass`es, `MClassDef`s, `MProperty`s and `MPropDef`s fall-back to
	#   their introducing definition.
	# * `MClassType`s fall back to their wrapped `MClass`.
	# * `MVirtualType`s fall back to their wrapped `MProperty`.
	# * `CallSite` fall back on the wrapped `MProperty`.
	# * Other entities do not fall back.
	#
	# One may use `MDoc::original_mentity` to retrieve the original
	# source of the documentation.
	fun mdoc_or_fallback: nullable MDoc do return mdoc

	# Is the entity deprecated?
	#
	# Used for warnings and in documentation.
	# Has no other specific effect.
	var deprecation: nullable MDeprecationInfo = null is writable
end

# Information about a deprecated entity
class MDeprecationInfo
	# Explanation about the deprecation
	var mdoc: nullable MDoc = null is writable
end
