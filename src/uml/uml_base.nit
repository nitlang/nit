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
import model

redef class ToolContext
	# -p
	var opt_privacy = new OptionBool("Generates private API", "-p", "--private")

	# Shortcut for the value of `self.opt_privacy`
	fun private_gen: Bool do return opt_privacy.value

	redef init do
		option_context.add_option opt_privacy
		super
	end
end

class UMLModel
	var model: Model
	var mainmodule: MModule
	var ctx: ToolContext
end
