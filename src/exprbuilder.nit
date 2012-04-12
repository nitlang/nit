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

# Semantic analysis of the body of property definitions.
#
# This module is an entry point for various analysis.
#
# FIXME: find a better name for the module
module exprbuilder

import simple_misc_analysis
import literal
import scope
import flow
import local_var_init
import typing
import auto_super_init

redef class ModelBuilder
	# Run the full_semantic_analysis on all propdefs of all modules
	fun full_propdef_semantic_analysis
	do
		var time0 = get_time
		self.toolcontext.info("*** SEMANTIC ANALYSIS ***", 1)
		for nmodule in self.nmodules do
			nmodule.do_simple_misc_analysis(self.toolcontext)
			nmodule.do_literal(self.toolcontext)
			for nclassdef in nmodule.n_classdefs do
				for npropdef in nclassdef.n_propdefs do
					npropdef.full_semantic_analysis(self)
				end
			end
			self.toolcontext.check_errors
		end
		var time1 = get_time
		self.toolcontext.info("*** END SEMANTIC ANALYSIS: {time1-time0} ***", 2)
	end
end

redef class APropdef
	# Run do_scope, do_flow, do_local_var_init and do_typing
	fun full_semantic_analysis(modelbuilder: ModelBuilder)
	do
		modelbuilder.toolcontext.info("* SEMANTIC ANALYSIS: {self.location}", 3)
		var errcount = modelbuilder.toolcontext.error_count
		do_scope(modelbuilder.toolcontext)
		if errcount != modelbuilder.toolcontext.error_count then return
		do_flow(modelbuilder.toolcontext)
		if errcount != modelbuilder.toolcontext.error_count then return
		do_local_var_init(modelbuilder.toolcontext)
		if errcount != modelbuilder.toolcontext.error_count then return
		do_typing(modelbuilder)
		if errcount != modelbuilder.toolcontext.error_count then return
		if self isa AConcreteMethPropdef then self.do_auto_super_init(modelbuilder)
	end
end
