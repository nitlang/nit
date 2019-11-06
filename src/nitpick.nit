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

# A program that collect potential style and code issues
module nitpick

import frontend
import doc::vim_autocomplete

redef class ToolContext
	# Modules to analyze, other modules will only get a shallow processing.
	var mmodules_to_check = new HashSet[MModule]
	redef fun phase_process_npropdef(phase, npropdef)
	do
		var pd = npropdef.mpropdef

		# Do not analyze the property bodies outside specified modules
		if pd != null and not mmodules_to_check.has(pd.mclassdef.mmodule) then return
		super
	end
end

# Create a tool context to handle options and paths
var toolcontext = new ToolContext
toolcontext.tooldescription = "Usage: nitpick [OPTION]... <file.nit>...\nCollect potential style and code issues."

# We do not add other options, so process them now!
toolcontext.process_options(args)

# Do not stop phases on errors
toolcontext.keep_going = true

# Get arguments
var arguments = toolcontext.option_context.rest

# We need a model to collect stuffs
var model = new Model
# A model builder to parse files
var modelbuilder = new ModelBuilder(model, toolcontext)

# Here we load and process all modules passed on the command line
var mmodules = modelbuilder.parse_full(arguments)
toolcontext.mmodules_to_check.add_all mmodules

# Blacklist warnings of not explicitly required modules
for mm in model.mmodules do
	if mmodules.has(mm) then continue
	toolcontext.warning_blacklist[mm.location.file].add("all")
end

modelbuilder.run_phases
toolcontext.run_global_phases(mmodules)
if toolcontext.error_count > 0 then exit(1)
