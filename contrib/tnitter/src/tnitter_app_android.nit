# This file is part of NIT ( https://nitlanguage.org ).
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

# Android version of the Tnitter app
module tnitter_app_android is
	android_api_target 15
end

import tnitter_app

import android
import android::portrait

redef class LabelAuthor
	init do native.set_text_appearance(app.native_activity, android_r_style_text_appearance_large)
end
