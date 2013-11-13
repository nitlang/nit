# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2013 Lucas Bajolet <lucas.bajolet@hotmail.com>
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

# Network debugger for a nit program
module netdbg

import network_debugger
import nitdbg_commons

redef class InterpretCommons

	redef fun launch
	do
		super
		if toolcontext.opt_debug_port.value < 0 or toolcontext.opt_debug_port.value > 65535 then
			toolcontext.option_context.usage
			return
		end

		modelbuilder.run_debugger_network_mode(mainmodule.as(not null),arguments.as(not null),toolcontext.opt_debug_port.value)
	end

end

(new InterpretCommons).launch
