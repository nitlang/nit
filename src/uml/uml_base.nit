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

# Exposes the base class for UML generation of a `Model`
module uml_base

import toolcontext
import model::model_collect

# UML model builder.
class UMLModel

	# Model to access mentities
	var model: Model

	# Main module used for linearization.
	var mainmodule: MModule

	# Filters to apply on model if any
	var filter: nullable ModelFilter
end
