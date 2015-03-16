# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Android compatibility module
#
# Defines all Android related annoations including the `@android` annotations
# used to tag `ldflags` annotations.
module aware is
	new_annotation android
	new_annotation java_package
	new_annotation min_api_version
	new_annotation max_api_version
	new_annotation target_api_version
	new_annotation android_manifest
	new_annotation android_manifest_application
	new_annotation android_manifest_activity
	new_annotation android_activity
end
