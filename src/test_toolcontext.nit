# This file is part of NIT ( https://nitlanguage.org ).
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

# Program used to test `ToolContext`
module test_toolcontext

import toolcontext

redef class ToolContext
	var opt_a = new OptionBool("option a, do nothing", "-a", "--option-a")
	var opt_b = new OptionString("option b, do nothing", "-b", "--option-b")
	var opt_c = new OptionBool("option c, do nothing", "-c")

	redef init do
		super
		option_context.add_option(opt_a, opt_b, opt_c)
	end
end

var toolcontext = new ToolContext
toolcontext.tooldescription = "Usage: test_toolcontext [OPTION]...\nTest for ToolContext, try --bash-completion."
toolcontext.process_options(args)
print toolcontext.option_context.rest

