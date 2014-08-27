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

# Base options for testing tools.
module testing_base

import modelize_property
import parser_util

redef class ToolContext
	# opt --full
	var opt_full = new OptionBool("Process also imported modules", "--full")
	# opt --output
	var opt_output = new OptionString("Output name (default is 'nitunit.xml')", "-o", "--output")
	# opt --dirr
	var opt_dir = new OptionString("Working directory (default is '.nitunit')", "--dir")
	# opt --no-act
	var opt_noact = new OptionBool("Does not compile and run tests", "--no-act")
end
