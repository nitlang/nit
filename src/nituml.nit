# This file is part of NIT ( https://nitlanguage.org ).
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

# UML generator in dot format.
module nituml

import modelbuilder
import frontend
import uml

redef class ToolContext

	# Phase that generates UML diagrams from model entities.
	var umlphase: Phase = new UMLPhase(self, null)

	# What to generate?
	var opt_gen = new OptionEnum(["class", "package"], "Choose which type of uml diagram to generate", 0, "--diagram")

	# Generate private?
	var opt_privacy = new OptionBool("Generates private API", "-p", "--private")

	redef init do
		option_context.add_option opt_gen
		option_context.add_option opt_privacy
		super
	end
end

private class UMLPhase
	super Phase
	redef fun process_mainmodule(mainmodule, mmodules)
	do
		var filters = new ModelFilter
		if not toolcontext.opt_privacy.value then
			filters.min_visibility = protected_visibility
		end

		var d = new UMLModel(toolcontext.modelbuilder.model, mainmodule, filters)
		if toolcontext.opt_gen.value == 0 then
			print d.generate_class_uml.write_to_string
		else if toolcontext.opt_gen.value == 1 then
			print d.generate_package_uml.write_to_string
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
