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

# Nit Static Analysis Framework client example.
module nitsaf

import saf
import test_phase
import frontend

redef class ToolContext

	# Analysis to apply
	var opt_analysis = new OptionEnum(["reaching-defs"], "Analysis to apply", 0, "--analysis")

	redef init do
		super
		option_context.add_option(opt_analysis)
	end
end

redef fun do_work(mainmodule, given_mmodules, modelbuilder) do
	var toolcontext = modelbuilder.toolcontext

	var analysis: StaticAnalysis
	var analysis_name = toolcontext.opt_analysis.value_name
	if analysis_name == "reaching-defs" then
		analysis = new ReachingDefsAnalysis(modelbuilder)
	else
		print "Error: unkown analysis {analysis_name}"
		sys.exit 1
		return
	end

	var mainnode = modelbuilder.mmodule2node(mainmodule)
	if mainnode == null then return
	analysis.start_analysis(mainnode)
	analysis.pretty_print
end
