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

# Test the AST printer by reading modules and printing the body of their methods
module test_astprinter

import test_phase
import frontend
#import transform # Not yet :)

import astprinter

redef fun do_work(mainmodule, given_mmodules, modelbuilder)
do
	# We iterate the model instead of the ast for classes and methods
	for m in given_mmodules do
		for cd in m.mclassdefs do
			for pd in cd.mpropdefs do
				print "# {pd}"
				var node = modelbuilder.mentity2node(pd)
				assert node != null
				node.print_tree
			end
		end
	end
end
