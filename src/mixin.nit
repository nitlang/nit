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

# Loading and additional module refinements at link-time.
#
# Used to factorize some code used by the engines.
module mixin

import modelbuilder

redef class ToolContext
	# --mixin
	var opt_mixins = new OptionArray("Additional module to mix-in", "-m", "--mixin")
	# --define
	var opt_defines = new OptionArray("Define a specific property", "-D", "--define")

	redef init
	do
		super
		option_context.add_option(opt_mixins, opt_defines)
	end

	redef fun make_main_module(mmodules)
	do
		var mixins = opt_mixins.value
		if not mixins.is_empty then
			mmodules.add_all modelbuilder.parse(opt_mixins.value)
			modelbuilder.run_phases
		end

		var mainmodule = super

		var defines = opt_defines.value
		if not defines.is_empty then
			var location = mainmodule.location
			var model = mainmodule.model

			# Create a fictive module if needed
			if mainmodule == mmodules.first then
				mainmodule = new MModule(model, null, mainmodule.name + "-d", location)
				mainmodule.set_imported_mmodules(mmodules)
				mainmodule.is_fictive = true
				mainmodule.first_real_mmodule = mmodules.first
			end

			var recv = mainmodule.sys_type
			assert recv != null
			var mclassdef = new MClassDef(mainmodule, recv, location)
			mclassdef.add_in_hierarchy

			for define in defines do
				var spl = define.split_once_on('=')
				var name = spl.first
				var val = null
				if spl.length > 1 then val = spl[1]
				var prop = mainmodule.try_get_primitive_method(name, recv.mclass)
				if prop == null then
					error(null, "Error: --define: no top-level function `{name}`.")
					continue
				end
				var ret = prop.intro.msignature.return_mtype
				var v
				if ret == null then
					error(null, "Error: --define: method `{prop}` is not a function.")
					continue
				else if ret.to_s == "Bool" then
					if val == null or val == "true" then
						v = true
					else if val == "false" then
						v = false
					else
						error(null, "Error: --define: method `{prop}` needs a Bool.")
						continue
					end
				else if ret.to_s == "Int" then
					if val != null and val.is_numeric then
						v = val.to_i
					else
						error(null, "Error: --define: method `{prop}` needs a Int.")
						continue
					end
				else if ret.to_s == "String" then
					if val != null then
						v = val
					else
						error(null, "Error: --define: method `{prop}` needs a String.")
						continue
					end
				else
					error(null, "Error: --define: method `{prop}` returns an unsupported type `{ret}`.")
					continue
				end
				var pd = new MMethodDef(mclassdef, prop, location)
				pd.msignature = prop.intro.msignature
				pd.constant_value = v
			end
			check_errors
		end

		return mainmodule
	end
end
