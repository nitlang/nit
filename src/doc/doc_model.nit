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

# Nitdoc model template parts generation
module doc_model

import model_utils
import doc_down
import doc_templates
import ordered_tree
import model_ext

redef class MEntity
	# HTML-escaped name.
	fun nitdoc_name: String do return name.html_escape
end

redef class MClassDef
	redef fun nitdoc_name do return mclass.nitdoc_name
end

redef class MPropDef
	redef fun nitdoc_name do return mproperty.nitdoc_name
end
