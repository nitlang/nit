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

# A tool used to generate random TOCs to give to experts.

import modelbuilder
import semantize::typing

redef class ToolContext
	var doc = new DocRandomTOC(self, null)
end

class DocRandomTOC
	super Phase

	redef fun process_mainmodule(mainmodule, mmodules) do
		for mod in mmodules do
			print mod.to_s
			for mclassdef in mod.mclassdefs do
				var str = mclassdef.name
				if mclassdef.mclass.visibility == private_visibility then
					print "\t-{str}"
				else
					print "\t{str}"
				end
				for mpropdef in mclassdef.mpropdefs do
					str = mpropdef.name
					if mpropdef.mproperty.visibility == private_visibility then
						print "\t\t-{str}"
					else if mpropdef.mproperty.visibility == protected_visibility then
						print "\t\t*{str}"
					else
						print "\t\t{str}"
					end
				end
			end
		end
	end
end

var toolcontext = new ToolContext
toolcontext.process_options(args)
var arguments = toolcontext.option_context.rest

var model = new Model
var modelbuilder = new ModelBuilder(model, toolcontext)
var mmodules = modelbuilder.parse_full(arguments)

if mmodules.is_empty then return

modelbuilder.run_phases
toolcontext.run_global_phases(mmodules)
