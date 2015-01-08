# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012 Jean Privat <jean@pryen.org>
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

module modelbuilder

import loader
import phase

private import more_collections

###

redef class ToolContext
	# Option --ignore-visibility
	var opt_ignore_visibility = new OptionBool("Do not check, and produce errors, on visibility issues.", "--ignore-visibility")

	redef init
	do
		super
		option_context.add_option(opt_ignore_visibility)
	end

	# Combine module to make a single one if required.
	fun make_main_module(mmodules: Array[MModule]): MModule
	do
		assert not mmodules.is_empty
		var mainmodule
		if mmodules.length == 1 then
			mainmodule = mmodules.first
		else
			# We need a main module, so we build it by importing all modules
			mainmodule = new MModule(modelbuilder.model, null, mmodules.first.name + "-m", new Location(mmodules.first.location.file, 0, 0, 0, 0))
			mainmodule.is_fictive = true
			mainmodule.set_imported_mmodules(mmodules)
		end
		return mainmodule
	end

	# Run `process_mainmodule` on all phases
	fun run_global_phases(mmodules: Array[MModule])
	do
		var mainmodule = make_main_module(mmodules)
		for phase in phases_list do
			if phase.disabled then continue
			phase.process_mainmodule(mainmodule, mmodules)
		end
	end
end

redef class Phase
	# Specific action to execute on the whole program.
	# Called by the `ToolContext::run_global_phases`.
	#
	# `mainmodule` is the main module of the program.
	# It could be an implicit module (called like the first given_mmodules).
	#
	# `given_modules` is the list of explicitely requested modules.
	# from the command-line for instance.
	#
	# REQUIRE: `not given_modules.is_empty`
	# REQUIRE: `(given_modules.length == 1) == (mainmodule == given_modules.first)`
	#
	# @toimplement
	fun process_mainmodule(mainmodule: MModule, given_mmodules: SequenceRead[MModule]) do end
end


redef class ModelBuilder
	# Run phases on all loaded modules
	fun run_phases
	do
		var mmodules = model.mmodules.to_a
		model.mmodule_importation_hierarchy.sort(mmodules)
		var nmodules = new Array[AModule]
		for mm in mmodules do
			nmodules.add(mmodule2node(mm).as(not null))
		end
		toolcontext.run_phases(nmodules)

		if toolcontext.opt_only_metamodel.value then
			self.toolcontext.info("*** ONLY METAMODEL", 1)
			exit(0)
		end
	end

end
