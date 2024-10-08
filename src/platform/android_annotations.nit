# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Additionnal annotations to gather metadata on Android projects
module android_annotations

intrude import app_annotations

# Metadata associated to an Android project
class AndroidProject
	super AppProject

	# Custom lines to add to the AndroidManifest.xml in the <manifest> node
	var manifest_lines = new Array[String]

	# Custom lines to add to the AndroidManifest.xml in the <application> node
	var manifest_application_lines = new Array[String]

	# Custom lines to add to AndroidManifest.xml as attributes inside the <activity> node
	var manifest_activity_attributes = new Array[String]

	# Minimum API level required for the application to run
	var min_api: nullable Int = null

	# Build target API level
	var target_api: nullable Int = null

	# Maximum API level on which the application will be allowed to run
	var max_api: nullable Int = null

	# Activities to declare in the manifest
	var activities = new Array[String]

	init
	do
		var annots = modelbuilder.collect_annotations_on_modules("android_api_min", mainmodule)
		if not annots.is_empty then
			var i = annots.pop.arg_as_int(modelbuilder)
			if i == null then i = 0
			min_api = i
			for an in annots do
				i = an.arg_as_int(modelbuilder)
				if i == null then continue
				min_api = min_api.max(i)
			end
		end

		annots = modelbuilder.collect_annotations_on_modules("android_api_max", mainmodule)
		if not annots.is_empty then
			var i = annots.pop.arg_as_int(modelbuilder)
			if i == null then i = 0
			max_api = i
			for an in annots do
				i = an.arg_as_int(modelbuilder)
				if i == null then continue
				max_api = max_api.min(i)
			end
		end

		var annot = modelbuilder.lookup_annotation_on_modules("android_api_target", mainmodule)
		if annot != null then target_api = annot.arg_as_int(modelbuilder) or else 0

		annots = modelbuilder.collect_annotations_on_modules("android_manifest", mainmodule)
		for an in annots do manifest_lines.add an.arg_as_string(modelbuilder) or else ""

		annots = modelbuilder.collect_annotations_on_modules("android_manifest_application", mainmodule)
		for an in annots do manifest_application_lines.add an.arg_as_string(modelbuilder) or else ""

		annots = modelbuilder.collect_annotations_on_modules("android_manifest_activity", mainmodule)
		for an in annots do manifest_activity_attributes.add an.arg_as_string(modelbuilder) or else ""

		annots = modelbuilder.collect_annotations_on_modules("android_activity", mainmodule)
		for an in annots do
			var activity = an.arg_as_string(modelbuilder)
			if activity != null then activities.add activity
		end
	end
end
