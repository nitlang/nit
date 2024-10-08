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

# Android compatibility module
#
# Defines all Android related annotations, including `ldflags@android`.
module aware is
	new_annotation android
	new_annotation android_api_min
	new_annotation android_api_max
	new_annotation android_api_target
	new_annotation android_manifest
	new_annotation android_manifest_application
	new_annotation android_manifest_activity
	new_annotation android_activity
end
