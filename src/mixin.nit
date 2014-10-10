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

# Loading and additional module refinements at link-time.
#
# Used to factorize some code used by the engines.
module mixin

import modelbuilder

redef class ToolContext
	# --mixin
	var opt_mixins = new OptionArray("Additionals module to min-in", "-m", "--mixin")

	redef init
	do
		super
		option_context.add_option(opt_mixins)
	end

	redef fun make_main_module(mmodules)
	do
		var mixins = opt_mixins.value
		if not mixins.is_empty then
			mmodules.add_all modelbuilder.parse(opt_mixins.value)
			modelbuilder.run_phases
		end

		var mainmodule = super

		return mainmodule
	end
end
