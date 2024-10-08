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

# Android variant without modification, pure prototype
#
# Usually, compiling with `nitc -m android client.nit` is enough.
# In this case, for research purposes we set a different `app_namespace`.
# This allows both the proto and the adaptation to be installed on the same device.
module android_proto is
	app_name "Ben Proto"
	app_namespace "net.xymus.benitlux_proto"
	android_api_target 16
end

import ::android

import client
