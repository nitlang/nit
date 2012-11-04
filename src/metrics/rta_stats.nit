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

# Statistics of a RTA
module rta_stats

import modelbuilder
private import rapid_type_analysis

# Run a runtime type anamysis and print statistics
fun compute_rta_stats(modelbuilder: ModelBuilder, mainmodule: MModule)
do
	var analysis = modelbuilder.do_rapid_type_analysis(mainmodule)

	print "--- Type Analysis ---"
	print "Number of live runtime types (instantied resolved type): {analysis.live_types.length}"
	if analysis.live_types.length < 8 then print "\t{analysis.live_types.join(" ")}"
	print "Number of live method definitions: {analysis.live_methoddefs.length}"
	if analysis.live_methoddefs.length < 8 then print "\t{analysis.live_methoddefs.join(" ")}"
	print "Number of live customized method definitions: {analysis.live_customized_methoddefs.length}"
	if analysis.live_customized_methoddefs.length < 8 then print "\t{analysis.live_customized_methoddefs.join(" ")}"
	print "Number of live runtime cast types (ie used in as and isa): {analysis.live_cast_types.length}"
	if analysis.live_cast_types.length < 8 then print "\t{analysis.live_cast_types.join(" ")}"
end
