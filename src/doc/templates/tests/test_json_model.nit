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

module test_json_model is test

import json_model
import test_frontend

class TestModelSerialization
	super TestModel
	test

	fun test_refs_to_full_json is test do
		var mentities = new Array[MEntity]
		mentities.add test_model.mpackages.first
		mentities.add test_model.mmodules.first
		mentities.add test_model.mclasses.first
		for mentity in mentities do
			print ((new MEntityRef(mentity)).serialize_to_json(pretty = true, plain = true))
		end
	end

	fun test_packages_to_full_json is test do
		for mentity in test_model.mpackages do
			print mentity.serialize_to_json(pretty = true, plain = true)
		end
	end

	fun test_groups_to_full_json is test do
		for mpackage in test_model.mpackages do
			for mentity in mpackage.mgroups do
				print mentity.serialize_to_json(pretty = true, plain = true)
			end
		end
	end

	fun test_modules_to_full_json is test do
		for mentity in test_model.mmodules do
			print mentity.serialize_to_json(pretty = true, plain = true)
		end
	end

	fun test_classes_to_full_json is test do
		for mentity in test_model.mclasses do
			print mentity.serialize_to_json(pretty = true, plain = true)
		end
	end

	fun test_classdefs_to_full_json is test do
		for mclass in test_model.mclasses do
			for mentity in mclass.mclassdefs do
				print mentity.serialize_to_json(pretty = true, plain = true)
			end
		end
	end

	fun test_props_to_full_json is test do
		for mentity in test_model.mproperties do
			print mentity.serialize_to_json(pretty = true, plain = true)
		end
	end

	fun test_propdefs_to_full_json is test do
		for mprop in test_model.mproperties do
			for mentity in mprop.mpropdefs do
				print mentity.serialize_to_json(pretty = true, plain = true)
			end
		end
	end
end

redef class nitc::Location
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
