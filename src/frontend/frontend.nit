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

# Collect and orchestration of main frontend phases
#
# Import `frontend::code_gen` to also include code generation modules.
module frontend

import no_warning
import simple_misc_analysis
import literal
import modelize
import semantize
import div_by_zero
import serialization_model_phase
import deriving
import check_annotation
import parse_annotations
import glsl_validation
import parallelization_phase
import i18n_phase
import regex_phase
import actors_injection_phase

redef class ToolContext
	# FIXME: there is conflict in linex in nitc, so use this trick to force invocation
	private var dummy: Bool = do_dummy

	# SEE `dummy`
	private fun do_dummy: Bool
	do
		# Force no warning before analysing classes
		phases.add_edge(modelize_class_phase, no_warning_phase)
		# Force easy warnings after modelbuilder
		phases.add_edge(simple_misc_analysis_phase, modelize_property_phase)
		# Force easy warnings before intraproc-errors
		phases.add_edge(scope_phase, simple_misc_analysis_phase)
		# Code genrated by the serialization phase must be analyzed for literals
		phases.add_edge(literal_phase, serialization_phase_pre_model)
		phases.add_edge(modelize_class_phase, serialization_phase_pre_model)
		phases.add_edge(modelize_class_phase, parallelization_phase)
		return true
	end
end
