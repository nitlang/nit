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

# LLVM backend
#
# TODO complete doc
module nitllvm

import modelbuilder
import frontend

redef class ToolContext

	# LLVM code generation
	var llvm_phase: Phase = new LLVMPhase(self, null)
end

private class LLVMPhase
	super Phase

	redef fun process_mainmodule(mainmodule, mmodules)
	do
		# TODO write main code here, or use a service declared in another module

		# TODO the following loop is an example, it can be removed
		var full_mclass_hierarchy = mainmodule.flatten_mclass_hierarchy
		for mclass in full_mclass_hierarchy do
			print mclass
		end
	end
end

# process options
var toolcontext = new ToolContext
toolcontext.process_options(args)
var arguments = toolcontext.option_context.rest

# build model
var model = new Model
var mbuilder = new ModelBuilder(model, toolcontext)
var mmodules = mbuilder.parse_full(arguments)

if mmodules.is_empty then return
mbuilder.run_phases
toolcontext.run_global_phases(mmodules)
