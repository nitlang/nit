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

# Example of simple module that aims to do some specific work on nit programs.
#
# Fast prototypes can just start with this skeletton.
module test_test_phase

# We need the framework that perfoms standard code for the main-program
import test_phase

# We usualy need specific phases
# NOTE: `frontend` is sufficent in most case (it is often too much)
import frontend

# The body of the specific work.
# The main entry point is provided by `test_phase`,
# This function is then automatically (unless errors where found).
redef fun do_work(mainmodule, given_mmodules, modelbuilder)
do
	print "It works"
	var model = modelbuilder.model
	print "I have {model.mmodules.length} modules"
	var mclasses = mainmodule.flatten_mclass_hierarchy
	print "I have also {mclasses.length} classes"

	var meth_cpt = 0
	for m in mainmodule.in_importation.greaters do
		for cd in m.mclassdefs do
			for pd in cd.mpropdefs do
				if pd isa MMethodDef then meth_cpt += 1
			end
		end
	end
	print "And {meth_cpt} definitions of methods"
end
