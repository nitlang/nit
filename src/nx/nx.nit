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

# `nx` is a tool suite to manage code repository and documentation.
module nx

import config

# Front controller for `nx` program.
class NxApp
	super Command

	private var config_file = ".nx_config"

	redef fun name do return "nx"
	redef fun desc do return "Tool suite for documentation management."
	redef fun usage do return "nx [OPTIONS]... <command>"

	init standalone do
		config = new ConfigTree(config_file)
		controller = new Controller
		controller.add_command(new ConfigCtrl(self))
	end
end

var app = new NxApp.standalone
app.process(args.to_a)

