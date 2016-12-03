# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

module test_model_json is test_suite

import test_suite
import model_json
import frontend

class TestModelSerialization
	super TestSuite

	var suite_path: String = "NIT_TESTING_PATH".environ
	var lib_path: String = "{suite_path.dirname}/../../tests/test_prog"

	private var model: Model do
		var toolcontext = new ToolContext
		var model = new Model
		var mbuilder = new ModelBuilder(model, toolcontext)
		var mmodules = mbuilder.parse_full([lib_path])
		if mmodules.is_empty then return model
		mbuilder.run_phases
		toolcontext.run_global_phases(mmodules)
		return model
	end

	fun test_refs_to_full_json do
		var mentities = new Array[MEntity]
		mentities.add model.mpackages.first
		mentities.add model.mmodules.first
		mentities.add model.mclasses.first
		for mentity in mentities do
			print ((new MEntityRef(mentity)).to_pretty_full_json)
		end
	end

	fun test_packages_to_full_json do
		for mentity in model.mpackages do
			print mentity.to_pretty_full_json
		end
	end

	fun test_groups_to_full_json do
		for mpackage in model.mpackages do
			for mentity in mpackage.mgroups do
				print mentity.to_pretty_full_json
			end
		end
	end

	fun test_modules_to_full_json do
		for mentity in model.mmodules do
			print mentity.to_pretty_full_json
		end
	end

	fun test_classes_to_full_json do
		for mentity in model.mclasses do
			print mentity.to_pretty_full_json
		end
	end

	fun test_classdefs_to_full_json do
		for mclass in model.mclasses do
			for mentity in mclass.mclassdefs do
				print mentity.to_pretty_full_json
			end
		end
	end

	fun test_props_to_full_json do
		for mentity in model.mproperties do
			print mentity.to_pretty_full_json
		end
	end

	fun test_propdefs_to_full_json do
		for mprop in model.mproperties do
			for mentity in mprop.mpropdefs do
				print mentity.to_pretty_full_json
			end
		end
	end
end

redef class Location
	serialize

	# Avoid diff on location absolute path
	redef fun core_serialize_to(v) do
		v.serialize_attribute("column_end", column_end)
		v.serialize_attribute("column_start", column_start)
		v.serialize_attribute("line_end", line_end)
		v.serialize_attribute("line_start", line_start)
		var file = self.file
		if file != null then
			v.serialize_attribute("file", "test_location")
		end
	end
end
