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

# A naive Nit interpreter
module nit

import naive_interpreter
import debugger
import nitdbg_commons

redef class InterpretCommons

	redef fun launch
	do
		super
		var self_mm = mainmodule.as(not null)
		var self_args = arguments.as(not null)
		if toolcontext.opt_debugger_autorun.value then
			modelbuilder.run_debugger_autorun(self_mm, self_args)
		else if toolcontext.opt_debugger_mode.value then
			modelbuilder.run_debugger(self_mm, self_args)
		else
			modelbuilder.run_naive_interpreter(self_mm, self_args)
		end
	end

end

(new InterpretCommons).launch