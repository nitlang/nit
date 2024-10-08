# This file is part of NIT ( https://nitlanguage.org ).
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

# A Nit compiler
module nitc

import frontend::code_gen
import compiler
import transform

redef class ToolContext
	redef fun process_options(args)
	do
		super

		var sum = opt_global.value.to_i + opt_separate.value.to_i + opt_erasure.value.to_i
		if sum > 1 then
			print "Options --global, --separate and --erasure are exclusive"
			exit(1)
		else if sum == 0 then
			# --separate by default
			opt_separate.value = true
		end
	end
end
