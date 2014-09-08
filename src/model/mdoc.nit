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

# Structured documentation of a `MEntity` object
class MDoc
	# Raw content, line by line
	# The starting `#` and first space are stripped.
	# The trailing `\n` are chomped.
	var content = new Array[String]

	# The entity where the documentation is originally attached to.
	# This gives some context to resolve identifiers or to run examples.
	var original_mentity: nullable MEntity = null is writable
end

redef class MEntity
	# The documentation associated to the entity
	var mdoc: nullable MDoc is writable

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
